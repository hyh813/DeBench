/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/2/2_gcc_O3_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001006b8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001006d0 @ 001006d0 */

void FUN_001006d0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100780 */

undefined8 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _start @ 001007c0 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 001007f4 */

/* WARNING: Removing unreachable block (ram,0x00100804) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100810 */

/* WARNING: Removing unreachable block (ram,0x00100828) */
/* WARNING: Removing unreachable block (ram,0x00100834) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100840 */

/* WARNING: Removing unreachable block (ram,0x00100864) */
/* WARNING: Removing unreachable block (ram,0x00100870) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_0010087c @ 0010087c */

void FUN_0010087c(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100880 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: process_char @ 001008e0 */

char process_char(char param_1)

{
  if ((byte)(param_1 + 0xbfU) < 0x1a) {
    param_1 = param_1 + ' ';
  }
  return param_1;
}



/* Function: process_short @ 00100900 */

int process_short(short param_1,short param_2)

{
  return (int)param_2 + (int)param_1;
}



/* Function: process_int @ 00100910 */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: process_long @ 00100920 */

long process_long(long param_1)

{
  return param_1 << 1;
}



/* Function: process_ll @ 00100930 */

long process_ll(long param_1)

{
  return param_1 * param_1;
}



/* Function: process_float @ 00100940 */

float process_float(float param_1)

{
  return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00100950 */

double process_double(double param_1)

{
  return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 00100964 */

void process_ld(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = __multf3(param_1,param_1);
  __addtf3(uVar1,0);
  return;
}



/* Function: process_bool @ 00100990 */

uint process_bool(uint param_1)

{
  uint uVar1;
  
  uVar1 = ~param_1 & 1;
  if ((int)param_1 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: const_param @ 001009a4 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 001009b0 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 001009c0 */

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



/* Function: array_1d_stack @ 00100b10 */

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



/* Function: array_string @ 00100bb4 */

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



/* Function: array_2d_stack @ 00100be4 */

int array_2d_stack(int *param_1)

{
  return *param_1 + param_1[0xb] + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
         param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}



/* Function: array_3d @ 00100c40 */

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



/* Function: array_vla @ 00100da0 */

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



/* Function: array_pointer @ 00100e44 */

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



/* Function: pointer_array @ 00100e84 */

int pointer_array(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  if (0 < param_2) {
    iVar1 = 0;
    if ((int *)*param_1 != (int *)0x0) {
      iVar1 = *(int *)*param_1;
    }
    if (1 < param_2) {
      if ((int *)param_1[1] != (int *)0x0) {
        iVar1 = iVar1 + *(int *)param_1[1];
      }
      if (param_2 != 2) {
        if ((int *)param_1[2] != (int *)0x0) {
          iVar1 = iVar1 + *(int *)param_1[2];
        }
        if (param_2 != 3) {
          if ((int *)param_1[3] != (int *)0x0) {
            iVar1 = iVar1 + *(int *)param_1[3];
          }
          if (param_2 != 4) {
            if ((int *)param_1[4] != (int *)0x0) {
              iVar1 = iVar1 + *(int *)param_1[4];
            }
            if (param_2 != 5) {
              if ((int *)param_1[5] != (int *)0x0) {
                iVar1 = iVar1 + *(int *)param_1[5];
              }
              if (param_2 != 6) {
                if ((int *)param_1[6] != (int *)0x0) {
                  iVar1 = iVar1 + *(int *)param_1[6];
                }
                if (param_2 != 7) {
                  if ((int *)param_1[7] != (int *)0x0) {
                    iVar1 = iVar1 + *(int *)param_1[7];
                  }
                  if (param_2 != 8) {
                    if ((int *)param_1[8] != (int *)0x0) {
                      iVar1 = iVar1 + *(int *)param_1[8];
                    }
                    if ((9 < param_2) && ((int *)param_1[9] != (int *)0x0)) {
                      iVar1 = iVar1 + *(int *)param_1[9];
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



/* Function: array_complex_index @ 00100f84 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  if ((-1 < (int)(param_4 | param_5) && (int)param_4 < param_2) && ((int)param_5 < param_3)) {
    return *(undefined4 *)(param_1 + (long)(int)(param_4 + param_2 * param_5) * 4);
  }
  return 0xffffffff;
}



/* Function: array_oob @ 00100fb0 */

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



/* Function: test_array_types @ 00101054 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void test_array_types(void)

{
  char *pcVar1;
  int iVar2;
  char local_10 [8];
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103208);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
  pcVar1 = local_10;
  iVar2 = 0;
  builtin_strncpy(local_10,"hello",6);
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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: ptr_single @ 00101170 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00101180 */

int ptr_double(undefined8 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101190 */

int ptr_triple(undefined8 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 001011a4 */

int ptr_increment(int *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar4;
  
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
    piVar3 = param_1;
    do {
      piVar4 = piVar3 + 4;
      iVar5 = iVar5 + (int)*(undefined8 *)piVar3;
      iVar6 = iVar6 + (int)((ulong)*(undefined8 *)piVar3 >> 0x20);
      iVar7 = iVar7 + (int)*(undefined8 *)(piVar3 + 2);
      iVar8 = iVar8 + (int)((ulong)*(undefined8 *)(piVar3 + 2) >> 0x20);
      piVar3 = piVar4;
    } while (param_1 + (ulong)((uVar1 >> 2) - 1) * 4 + 4 != piVar4);
    iVar5 = iVar5 + iVar6 + iVar7 + iVar8;
    uVar2 = uVar1 & 0xfffffffc;
    param_1 = param_1 + (param_2 & 0xfffffffc);
    if ((param_2 & 3) == 0) {
      return iVar5;
    }
  }
  iVar5 = iVar5 + *param_1;
  if (((int)(uVar2 + 1) < (int)uVar1) && (iVar5 = iVar5 + param_1[1], (int)(uVar2 + 2) < (int)uVar1)
     ) {
    iVar5 = iVar5 + param_1[2];
  }
  return iVar5;
}



/* Function: ptr_offset @ 00101250 */

undefined4 ptr_offset(long param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101260 */

ulong ptr_diff(long param_1,long param_2)

{
  return (ulong)(param_1 - param_2) >> 2 & 0xffffffff;
}



/* Function: ptr_void @ 00101270 */

uint ptr_void(uint *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return (uint)(byte)*param_1;
  }
  return 0xffffffff;
}



/* Function: ptr_const @ 00101294 */

int ptr_const(int *param_1)

{
  return *param_1 << 1;
}



/* Function: ptr_const_ptr @ 001012a0 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 001012b4 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x001012bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: ptr_func_complex @ 001012c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: ptr_cast @ 00101320 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00101330 */

long opaque_handle_create(int param_1)

{
  return (long)param_1;
}



/* Function: opaque_handle_op @ 00101340 */

int opaque_handle_op(int param_1)

{
  return param_1 << 1;
}



/* Function: test_pointer_types @ 00101350 */

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



/* Function: struct_simple @ 00101490 */

int struct_simple(int *param_1)

{
  return *param_1 + param_1[1] + param_1[2];
}



/* Function: struct_array @ 001014a4 */

int struct_array(int *param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  int *piVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
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
  
  if ((int)param_2 < 1) {
    return 0;
  }
  if (param_2 - 1 < 3) {
    uVar14 = 0;
    iVar16 = 0;
  }
  else {
    iVar16 = 0;
    iVar17 = 0;
    iVar18 = 0;
    iVar19 = 0;
    piVar13 = param_1;
    do {
      iVar15 = *piVar13;
      piVar2 = piVar13 + 1;
      piVar3 = piVar13 + 2;
      piVar4 = piVar13 + 3;
      piVar5 = piVar13 + 4;
      piVar6 = piVar13 + 5;
      piVar7 = piVar13 + 6;
      piVar8 = piVar13 + 7;
      piVar9 = piVar13 + 8;
      piVar10 = piVar13 + 9;
      piVar11 = piVar13 + 10;
      piVar12 = piVar13 + 0xb;
      piVar13 = piVar13 + 0xc;
      iVar16 = iVar16 + *piVar2 + iVar15 + *piVar3;
      iVar17 = iVar17 + *piVar5 + *piVar4 + *piVar6;
      iVar18 = iVar18 + *piVar8 + *piVar7 + *piVar9;
      iVar19 = iVar19 + *piVar11 + *piVar10 + *piVar12;
    } while (piVar13 != param_1 + (ulong)((param_2 >> 2) - 1) * 0xc + 0xc);
    iVar16 = iVar16 + iVar17 + iVar18 + iVar19;
    uVar14 = param_2 & 0xfffffffc;
    if ((param_2 & 3) == 0) {
      return iVar16;
    }
  }
  lVar1 = (long)(int)uVar14;
  iVar16 = iVar16 + param_1[lVar1 * 3] + param_1[lVar1 * 3 + 1] + param_1[lVar1 * 3 + 2];
  if (((int)(uVar14 + 1) < (int)param_2) &&
     (iVar16 = iVar16 + param_1[lVar1 * 3 + 3] + param_1[lVar1 * 3 + 4] + param_1[lVar1 * 3 + 5],
     (int)(uVar14 + 2) < (int)param_2)) {
    iVar16 = iVar16 + param_1[lVar1 * 3 + 7] + param_1[lVar1 * 3 + 6] + param_1[lVar1 * 3 + 8];
  }
  return iVar16;
}



/* Function: struct_nested @ 00101590 */

int struct_nested(int *param_1)

{
  return *param_1 + param_1[3];
}



/* Function: struct_deep @ 001015a0 */

int struct_deep(long param_1)

{
  return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 001015b0 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int **)(param_1 + 2) != (int *)0x0) {
    iVar1 = iVar1 + **(int **)(param_1 + 2);
  }
  return iVar1;
}



/* Function: struct_bitfields @ 001015d0 */

int struct_bitfields(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}



/* Function: union_type @ 001015f4 */

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



/* Function: union_array @ 00101620 */

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



/* Function: enum_type @ 001016c4 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 001016d0 */

undefined4 enum_switch(uint param_1)

{
  if (param_1 < 4) {
    return *(undefined4 *)(&CSWTCH_62 + (ulong)param_1 * 4);
  }
  return 0xffffff9d;
}



/* Function: struct_func_ptr @ 001016f0 */

void struct_func_ptr(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 2))(*param_1);
  return;
}



/* Function: linked_list @ 00101704 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00101724 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 2)) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00101744 */

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
  do {
    if (param_1 == (int *)0x0) {
      return iVar10;
    }
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
  } while( true );
}



/* Function: binary_tree @ 00101980 */

int binary_tree(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
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
    iVar6 = iVar6 + iVar5;
  }
  return iVar6;
}



/* Function: graph_traverse @ 001019f4 */

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



/* Function: test_composite_types @ 00101a40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: __addtf3 @ 00101c40 */

undefined1  [16] __addtf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  bool bVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar28;
  undefined1 auVar27 [16];
  ulong uVar29;
  
  uVar11 = param_2._8_8_;
  uVar29 = param_2._0_8_;
  uVar28 = param_1._8_8_;
  uVar26 = param_1._0_8_;
  uVar13 = fpcr;
  uVar3 = (uVar28 & 0xffffffffffff) << 3;
  lVar18 = -((long)uVar28 >> 0x3f);
  uVar12 = (uint)lVar18;
  lVar9 = -((long)uVar11 >> 0x3f);
  uVar14 = (uint)lVar9;
  uVar2 = uVar11 << 3;
  uVar4 = uVar2 & 0x7fffffffffff8;
  uVar10 = uVar26 >> 0x3d;
  uVar24 = uVar3 | uVar10;
  uVar20 = uVar28 >> 0x30 & 0x7fff;
  uVar19 = uVar11 >> 0x30 & 0x7fff;
  uVar17 = uVar29 >> 0x3d;
  uVar16 = uVar4 | uVar17;
  uVar21 = uVar26 * 8;
  uVar23 = uVar29 * 8;
  uVar22 = uVar21;
  uVar25 = uVar24;
  if ((long)uVar11 >> 0x3f == (long)uVar28 >> 0x3f) {
    uVar8 = (int)uVar20 - (int)uVar19;
    lVar9 = lVar18;
    if ((int)uVar8 < 1) {
      if (uVar8 != 0) {
        if (uVar20 == 0) {
          if (uVar24 == 0 && uVar21 == 0) {
            uVar22 = uVar23;
            uVar25 = uVar16;
            if (uVar19 == 0x7fff) {
              uVar14 = uVar12;
              if (uVar16 != 0 || uVar23 != 0) {
                uVar11 = uVar4 >> 0x32 ^ 1;
                goto LAB_00101f60;
              }
              goto LAB_00102214;
            }
            goto LAB_00101ebc;
          }
          uVar8 = ~uVar8;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            uVar20 = uVar19;
            goto LAB_00102078;
          }
        }
        else {
          uVar8 = -uVar8;
          uVar24 = uVar24 | 0x8000000000000;
        }
        if (uVar19 != 0x7fff) {
          if ((int)uVar8 < 0x75) {
            if ((int)uVar8 < 0x40) {
              uVar17 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                       (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
              uVar16 = uVar16 + (uVar24 >> ((ulong)uVar8 & 0x3f));
            }
            else {
              uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
              if (uVar8 - 0x40 == 0) {
                uVar10 = uVar21;
              }
              uVar17 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
            }
          }
          else {
            uVar17 = (ulong)(uVar24 != 0 || uVar21 != 0);
          }
          uVar10 = uVar17 + uVar23;
          uVar20 = uVar19;
          if (CARRY8(uVar17,uVar23)) {
            uVar16 = uVar16 + 1;
          }
          goto LAB_00102078;
        }
        if (uVar16 != 0 || uVar23 != 0) {
          uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
          uVar11 = uVar4 >> 0x32 ^ 1;
          uVar10 = uVar4 >> 3;
          goto LAB_00102124;
        }
LAB_001022a8:
        uVar22 = 0;
        uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
        goto LAB_00101df4;
      }
      uVar15 = uVar20 + 1;
      if ((uVar15 & 0x7ffe) == 0) {
        if (uVar20 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) {
              if (uVar19 != 0x7fff) goto LAB_00102530;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_001022a8;
            }
            else {
              uVar11 = uVar3 >> 0x32 ^ 1;
              uVar8 = (uint)uVar11;
              if (uVar19 != 0x7fff) goto LAB_001026d8;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102770;
            }
LAB_0010279c:
            if ((uVar2 & 0x4000000000000) == 0) {
              uVar8 = 1;
            }
            uVar11 = (ulong)uVar8;
            if (uVar24 != 0 || uVar21 != 0) {
LAB_001026e0:
              uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
              uVar10 = uVar28 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
                uVar10 = uVar4 >> 3;
                uVar12 = uVar14;
              }
              goto LAB_00102124;
            }
LAB_00102530:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
          }
          else {
            if (uVar19 == 0x7fff) {
              if (uVar16 != 0 || uVar23 != 0) goto LAB_0010279c;
              if (uVar24 == 0 && uVar21 == 0) goto LAB_001022a8;
            }
            else {
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102530;
LAB_001026d8:
              if (uVar16 != 0 || uVar23 != 0) goto LAB_001026e0;
            }
LAB_00102770:
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
          }
          goto LAB_00102124;
        }
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = 0;
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_00101edc;
          }
          goto LAB_001024a8;
        }
        if (uVar16 == 0 && uVar23 == 0) goto LAB_001024a8;
        uVar22 = uVar21 + uVar23;
        uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        if ((uVar25 >> 0x33 & 1) != 0) {
          uVar25 = uVar25 & 0xfff7ffffffffffff;
          uVar10 = 0;
          bVar6 = false;
          uVar15 = 1;
          goto LAB_00101d8c;
        }
LAB_00101d78:
        uVar17 = uVar22 | uVar25;
        goto LAB_00101d7c;
      }
      if (uVar15 != 0x7fff) {
        uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        bVar6 = false;
        uVar10 = uVar21 + uVar23 >> 1 & 7;
        uVar25 = uVar17 >> 1;
        uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
        goto LAB_00101d8c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 != 0) {
        if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102780:
          uVar11 = 0x14;
          lVar18 = 0;
          goto LAB_00101fcc;
        }
        if (uVar10 == 0x800000) {
          if (lVar18 == 0) goto LAB_0010271c;
LAB_001025e8:
          uVar11 = 0x14;
          lVar18 = 1;
          goto LAB_00101fcc;
        }
LAB_00102444:
        uVar14 = 0x14;
        if ((uVar13 & 0xc00000) == 0x400000) {
          uVar22 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          bVar6 = false;
          uVar11 = 0x14;
          uVar25 = uVar22;
          goto joined_r0x00102464;
        }
        goto LAB_00101f88;
      }
LAB_001024d4:
      uVar11 = 0x14;
    }
    else {
      if (uVar19 == 0) {
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            goto LAB_00102078;
          }
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) goto LAB_001022a8;
            goto LAB_00101f54;
          }
          goto LAB_00101e50;
        }
        uVar19 = uVar20;
        if (uVar20 != 0x7fff) goto LAB_00101ebc;
        uVar14 = uVar12;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00102214;
        uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
        uVar23 = uVar21;
        uVar16 = uVar24;
LAB_00101f60:
        uVar20 = 0x7fff;
        goto LAB_00101f68;
      }
      uVar16 = uVar16 | 0x8000000000000;
      if (uVar20 == 0x7fff) goto LAB_00102104;
LAB_00101e50:
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar17 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar16 = uVar24 + (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar17 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          uVar16 = uVar24;
        }
      }
      else {
        uVar17 = (ulong)(uVar16 != 0 || uVar23 != 0);
        uVar16 = uVar24;
      }
      uVar10 = uVar17 + uVar21;
      if (CARRY8(uVar17,uVar21)) {
        uVar16 = uVar16 + 1;
      }
LAB_00102078:
      uVar19 = uVar20;
      uVar22 = uVar10;
      uVar25 = uVar16;
      if ((uVar16 >> 0x33 & 1) == 0) goto LAB_00101ebc;
      uVar15 = uVar20 + 1;
      if (uVar15 != 0x7fff) {
        bVar6 = false;
        uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
        uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
        uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
        goto LAB_00101d8c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 == 0) goto LAB_001024d4;
      if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102780;
      if (uVar10 != 0x800000) goto LAB_00102444;
      if (lVar18 != 0) goto LAB_001025e8;
LAB_0010271c:
      uVar22 = 0xffffffffffffffff;
      lVar18 = 0;
      uVar15 = 0x7ffe;
      uVar11 = 0x14;
      uVar25 = uVar22;
LAB_00101dbc:
      uVar14 = (uint)uVar11;
      uVar12 = (uint)lVar18;
      if (uVar15 + 1 != 0x7fff) {
        uVar10 = uVar25 >> 3 & 0xffffffffffff;
        uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
        uVar14 = (uint)(uVar15 + 1) & 0x7fff;
        goto LAB_00101dd8;
      }
LAB_00101f88:
      uVar12 = (uint)lVar18;
      uVar13 = uVar13 & 0xc00000;
      if (uVar13 != 0) {
        if (uVar13 == 0x400000) {
          if (lVar9 != 0) goto LAB_00101fa4;
        }
        else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101fa4:
          uVar22 = 0xffffffffffffffff;
          uVar11 = (ulong)(uVar14 | 0x14);
          uVar10 = 0x1fffffffffffffff;
          uVar20 = 0x7ffe;
          goto LAB_00101edc;
        }
      }
      uVar11 = (ulong)(uVar14 | 0x14);
    }
LAB_00101fcc:
    uVar22 = 0;
    uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
    goto LAB_00101fe0;
  }
  uVar8 = (int)uVar20 - (int)uVar19;
  if ((int)uVar8 < 1) {
    if (uVar8 == 0) {
      uVar11 = 0;
      if ((uVar20 + 1 & 0x7ffe) != 0) {
        uVar22 = uVar21 + uVar29 * -8;
        uVar10 = uVar24 - (uVar16 + (uVar21 < uVar23));
        if ((uVar10 >> 0x33 & 1) != 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar10 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_00101d14;
        }
        lVar9 = lVar18;
        if (uVar22 != 0 || uVar10 != 0) goto LAB_00101d14;
        uVar22 = 0;
        uVar20 = 0;
        uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
        uVar10 = 0;
        goto LAB_00101edc;
      }
      if (uVar20 == 0) {
        if (uVar24 != 0 || uVar21 != 0) {
          if (uVar16 == 0 && uVar23 == 0) goto LAB_001024a8;
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          if ((uVar25 >> 0x33 & 1) == 0) {
            if (uVar22 != 0 || uVar25 != 0) {
              uVar10 = 0;
              bVar6 = true;
              uVar15 = uVar20;
              goto LAB_00101d8c;
            }
            goto LAB_00102580;
          }
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          uVar17 = uVar22 | uVar25;
          goto LAB_00101d7c;
        }
        uVar22 = uVar23;
        uVar25 = uVar16;
        lVar18 = lVar9;
        if (uVar16 == 0 && uVar23 == 0) {
LAB_00102580:
          uVar10 = 0;
          uVar22 = 0;
          uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
          goto LAB_00101edc;
        }
LAB_001024a8:
        uVar10 = 0;
        uVar15 = 0;
        goto LAB_001024b0;
      }
      if (uVar20 == 0x7fff) {
        if (uVar24 == 0 && uVar21 == 0) {
          if (uVar19 != 0x7fff) goto LAB_001023e8;
        }
        else {
          uVar11 = uVar3 >> 0x32 ^ 1;
          if (uVar19 != 0x7fff) goto LAB_001023b8;
        }
LAB_00102630:
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = (uint)uVar11;
          if ((uVar2 & 0x4000000000000) == 0) {
            uVar8 = 1;
          }
          uVar11 = (ulong)uVar8;
          if (uVar24 == 0 && uVar21 == 0) {
LAB_001026ac:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
            goto LAB_00102124;
          }
LAB_00102648:
          uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
          uVar10 = uVar28 & 0xffffffffffff;
          if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
          }
          goto LAB_00102124;
        }
        if (uVar24 != 0 || uVar21 != 0) goto LAB_001023b8;
      }
      else {
        if (uVar19 == 0x7fff) goto LAB_00102630;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_001023b8:
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
            goto LAB_00102124;
          }
          goto LAB_00102648;
        }
LAB_001023e8:
        uVar11 = 0;
        if (uVar16 != 0 || uVar23 != 0) goto LAB_001026ac;
      }
      uVar22 = 0xffffffffffffffff;
      uVar10 = 0xffffffffffff;
      uVar12 = 0;
      uVar11 = 1;
    }
    else {
      if (uVar20 == 0) {
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar19 == 0x7fff) {
            if (uVar16 != 0 || uVar23 != 0) {
              uVar11 = uVar4 >> 0x32 ^ 1;
              uVar12 = uVar14;
              goto LAB_00101f60;
            }
            goto LAB_00102214;
          }
          goto LAB_00101ebc;
        }
        uVar8 = ~uVar8;
        if (uVar8 == 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_00101d0c;
        }
      }
      else {
        uVar8 = -uVar8;
        uVar24 = uVar24 | 0x8000000000000;
      }
      if (uVar19 != 0x7fff) {
        if ((int)uVar8 < 0x75) {
          if ((int)uVar8 < 0x40) {
            uVar10 = uVar24 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar21 >> ((ulong)uVar8 & 0x3f) |
                     (ulong)(uVar21 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
            uVar16 = uVar16 - (uVar24 >> ((ulong)uVar8 & 0x3f));
          }
          else {
            uVar10 = uVar21 | uVar24 << ((ulong)(0x80 - uVar8) & 0x3f);
            if (uVar8 - 0x40 == 0) {
              uVar10 = uVar21;
            }
            uVar10 = (ulong)(uVar10 != 0) | uVar24 >> ((ulong)(uVar8 - 0x40) & 0x3f);
          }
        }
        else {
          uVar10 = (ulong)(uVar24 != 0 || uVar21 != 0);
        }
        uVar22 = uVar23 - uVar10;
        uVar25 = uVar16 - (uVar23 < uVar10);
        goto LAB_00101d0c;
      }
      if (uVar16 == 0 && uVar23 == 0) goto LAB_001022a8;
      uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
      uVar11 = uVar4 >> 0x32 ^ 1;
      uVar10 = uVar4 >> 3;
      uVar12 = uVar14;
LAB_00102124:
      if (uVar10 == 0 && uVar22 == 0) {
        uVar22 = 0;
        uVar14 = 0x7fff;
        uVar10 = 0;
        goto LAB_00101dd8;
      }
    }
    uVar14 = 0x7fff;
    uVar10 = uVar10 & 0xffffffffffff | 0x800000000000;
  }
  else {
    if (uVar19 == 0) {
      if (uVar16 != 0 || uVar23 != 0) {
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          uVar19 = uVar20;
          lVar9 = lVar18;
          goto LAB_00101d0c;
        }
        goto LAB_00101cb8;
      }
      uVar19 = uVar20;
      lVar9 = lVar18;
      if (uVar20 == 0x7fff) {
        uVar14 = uVar12;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00101f54:
          uVar11 = uVar3 >> 0x32 ^ 1;
          uVar23 = uVar21;
          uVar16 = uVar24;
          goto LAB_00101f60;
        }
LAB_00102214:
        uVar22 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = uVar14;
        goto LAB_00102124;
      }
LAB_00101ebc:
      uVar12 = (uint)lVar9;
      uVar17 = uVar22 | uVar25;
      uVar10 = uVar22 & 7;
      bVar6 = false;
      uVar15 = uVar19;
      lVar18 = lVar9;
      if (uVar19 == 0) goto joined_r0x00101ecc;
LAB_00101d8c:
      if (uVar10 == 0) {
        uVar10 = uVar25 & 0x8000000000000;
        uVar11 = 0;
        if (bVar6) {
LAB_001024b0:
          uVar11 = 0;
          if (((uint)uVar13 >> 0xb & 1) != 0) {
            uVar11 = 8;
          }
        }
      }
      else {
        uVar10 = uVar13 & 0xc00000;
        if (uVar10 == 0x400000) {
          uVar11 = 0x10;
joined_r0x00102464:
          if (lVar18 == 0) {
LAB_001020b4:
            bVar7 = 0xfffffffffffffff7 < uVar22;
            uVar22 = uVar22 + 8;
            if (bVar7) {
              uVar25 = uVar25 + 1;
            }
          }
        }
        else if (uVar10 == 0x800000) {
          uVar11 = 0x10;
          if (lVar18 != 0) goto LAB_001020b4;
        }
        else {
          if (uVar10 != 0) {
            uVar10 = uVar25 & 0x8000000000000;
            uVar11 = 0x10;
            if (bVar6) {
              uVar11 = 0x18;
            }
            goto LAB_00101db8;
          }
          uVar11 = 0x10;
          if (((uVar22 & 0xf) != 4) &&
             (bVar7 = 0xfffffffffffffffb < uVar22, uVar22 = uVar22 + 4, bVar7)) {
            uVar25 = uVar25 + 1;
          }
        }
        uVar10 = uVar25 & 0x8000000000000;
        if (bVar6) {
          uVar11 = (ulong)((uint)uVar11 | 8);
        }
      }
LAB_00101db8:
      uVar12 = (uint)lVar18;
      uVar20 = uVar15;
      uVar23 = uVar22;
      uVar16 = uVar25;
      lVar9 = lVar18;
      if (uVar10 != 0) goto LAB_00101dbc;
LAB_00101f68:
      uVar10 = uVar16 >> 3;
      uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
      if (uVar20 == 0x7fff) goto LAB_00102124;
    }
    else {
      uVar16 = uVar16 | 0x8000000000000;
LAB_00101cb8:
      if (uVar20 == 0x7fff) {
LAB_00102104:
        lVar9 = lVar18;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_001022a8;
        uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
        uVar11 = uVar3 >> 0x32 ^ 1;
        uVar10 = uVar28 & 0xffffffffffff;
        goto LAB_00102124;
      }
      if ((int)uVar8 < 0x75) {
        if ((int)uVar8 < 0x40) {
          uVar10 = uVar16 << ((ulong)(0x40 - uVar8) & 0x3f) | uVar23 >> ((ulong)uVar8 & 0x3f) |
                   (ulong)(uVar23 << ((ulong)(0x40 - uVar8) & 0x3f) != 0);
          uVar24 = uVar24 - (uVar16 >> ((ulong)uVar8 & 0x3f));
        }
        else {
          uVar10 = uVar23 | uVar16 << ((ulong)(0x80 - uVar8) & 0x3f);
          if (uVar8 - 0x40 == 0) {
            uVar10 = uVar23;
          }
          uVar10 = (ulong)(uVar10 != 0) | uVar16 >> ((ulong)(uVar8 - 0x40) & 0x3f);
        }
      }
      else {
        uVar10 = (ulong)(uVar16 != 0 || uVar23 != 0);
      }
      uVar22 = uVar21 - uVar10;
      uVar25 = uVar24 - (uVar21 < uVar10);
      uVar19 = uVar20;
      lVar9 = lVar18;
LAB_00101d0c:
      uVar10 = uVar25 & 0x7ffffffffffff;
      uVar20 = uVar19;
      if ((uVar25 >> 0x33 & 1) == 0) goto LAB_00101ebc;
LAB_00101d14:
      if (uVar10 == 0) {
        uVar12 = (int)LZCOUNT(uVar22) + 0x34;
        if (uVar12 < 0x40) goto LAB_00101d20;
        uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
        uVar17 = 0;
      }
      else {
        uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_00101d20:
        uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
        uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
      }
      if ((long)(int)uVar12 < (long)uVar20) {
        uVar19 = uVar20 - (long)(int)uVar12;
        uVar22 = uVar17;
        uVar25 = uVar10 & 0xfff7ffffffffffff;
        goto LAB_00101ebc;
      }
      iVar1 = uVar12 - (int)uVar20;
      uVar12 = iVar1 + 1;
      if ((int)uVar12 < 0x40) {
        uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
        uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
                 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
        goto LAB_00101d78;
      }
      uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
      if (uVar12 == 0x40) {
        uVar22 = uVar17;
      }
      uVar25 = 0;
      uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
      uVar22 = uVar17;
LAB_00101d7c:
      uVar12 = (uint)lVar9;
joined_r0x00101ecc:
      if (uVar17 != 0) {
        uVar10 = uVar22 & 7;
        bVar6 = true;
        uVar15 = 0;
        lVar18 = lVar9;
        goto LAB_00101d8c;
      }
      uVar22 = 0;
      uVar20 = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
LAB_00101edc:
    uVar10 = uVar10 & 0xffffffffffff;
    uVar14 = (uint)uVar20 & 0x7fff;
  }
LAB_00101dd8:
  uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
  if ((int)uVar11 == 0) {
LAB_00101df4:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar22;
    return auVar27;
  }
LAB_00101fe0:
  __sfp_handle_exceptions(uVar11);
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar22;
  return auVar5;
}



/* Function: __multf3 @ 001027e0 */

undefined1  [16] __multf3(undefined1 param_1 [16],undefined1 param_2 [16])

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  ulong uVar30;
  undefined1 auVar31 [16];
  
  uVar21 = param_2._8_8_;
  uVar17 = param_2._0_8_;
  uVar11 = param_1._8_8_;
  uVar15 = param_1._0_8_;
  uVar18 = fpcr;
  uVar10 = uVar11 >> 0x3f;
  uVar19 = uVar11 & 0xffffffffffff;
  uVar11 = uVar11 >> 0x30 & 0x7fff;
  iVar8 = (int)uVar11;
  if (iVar8 == 0) {
    if (uVar15 == 0 && uVar19 == 0) {
      uVar19 = 0;
      uVar7 = 4;
      lVar13 = 0;
      lVar24 = 1;
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      if (uVar19 == 0) {
        uVar11 = LZCOUNT(uVar15) + 0x31;
        iVar8 = (int)uVar11;
        lVar13 = LZCOUNT(uVar15) + 0x40;
        if (uVar11 < 0x3d) goto LAB_00102c38;
        uVar11 = 0;
        uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
      }
      else {
        lVar13 = LZCOUNT(uVar19);
        iVar8 = (int)lVar13 + -0xf;
LAB_00102c38:
        uVar19 = uVar15 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar19 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar11 = uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      uVar7 = 0;
      lVar13 = -0x3fef - lVar13;
      lVar24 = 0;
      uVar6 = 0;
    }
  }
  else if (iVar8 == 0x7fff) {
    if (uVar15 == 0 && uVar19 == 0) {
      uVar19 = 0;
      uVar7 = 8;
      lVar13 = 0x7fff;
      lVar24 = 2;
      uVar6 = 0;
      uVar11 = 0;
    }
    else {
      uVar6 = uVar19 >> 0x2f ^ 1;
      uVar7 = 0xc;
      lVar13 = 0x7fff;
      lVar24 = 3;
      uVar11 = uVar15;
    }
  }
  else {
    uVar19 = uVar15 >> 0x3d | uVar19 << 3 | 0x8000000000000;
    lVar13 = uVar11 - 0x3fff;
    lVar24 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar11 = uVar15 << 3;
  }
  uVar14 = uVar21 >> 0x3f;
  uVar15 = uVar21 & 0xffffffffffff;
  uVar22 = uVar21 >> 0x30 & 0x7fff;
  iVar8 = (int)uVar22;
  uVar4 = param_1._12_4_;
  uVar5 = param_2._12_4_;
  if (iVar8 == 0) {
    if (uVar17 == 0 && uVar15 == 0) {
      uVar7 = uVar7 | 1;
      lVar23 = lVar13 + 1;
      uVar21 = 0;
      uVar17 = 0;
      lVar12 = 1;
      lVar20 = lVar13;
    }
    else {
      if (uVar15 == 0) {
        uVar21 = LZCOUNT(uVar17) + 0x31;
        iVar8 = (int)uVar21;
        lVar23 = LZCOUNT(uVar17) + 0x40;
        if (uVar21 < 0x3d) goto LAB_00102bdc;
        uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
        uVar17 = 0;
      }
      else {
        lVar23 = LZCOUNT(uVar15);
        iVar8 = (int)lVar23 + -0xf;
LAB_00102bdc:
        uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      lVar20 = (lVar13 - lVar23) + -0x3fef;
      lVar23 = (lVar13 - lVar23) + -0x3fee;
      lVar12 = 0;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    if (uVar7 < 0xb) {
LAB_001028ec:
      uVar15 = uVar21;
      if (2 < uVar7) {
LAB_00102968:
        uVar7 = 1L << uVar7;
        uVar25 = uVar11;
        uVar21 = uVar19;
        uVar26 = uVar22;
        lVar9 = lVar24;
        if ((uVar7 & 0x530) == 0) {
          if ((uVar7 & 0x240) != 0) {
            uVar6 = 1;
            uVar15 = 0xffffffffffff;
            uVar4 = 0x7fff;
            uVar11 = 0xffffffffffffffff;
            uVar10 = 0;
            goto LAB_0010291c;
          }
          uVar25 = uVar17;
          uVar21 = uVar15;
          uVar26 = uVar14;
          lVar9 = lVar12;
          if ((uVar7 & 0x88) == 0) goto LAB_00102a0c;
        }
LAB_001029ac:
        lVar12 = lVar9;
        uVar14 = uVar26;
        uVar17 = uVar25;
        uVar22 = uVar14;
        if (lVar12 == 2) {
LAB_001029fc:
          uVar4 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          uVar10 = uVar22;
          goto LAB_0010291c;
        }
        goto LAB_001029c8;
      }
      if (uVar7 - 1 < 2) {
        if (lVar12 == 2) goto LAB_001029fc;
        goto LAB_00102908;
      }
LAB_00102a0c:
      uVar29 = uVar17 & 0xffffffff;
      uVar25 = uVar11 >> 0x20;
      uVar7 = uVar15 & 0xffffffff;
      uVar11 = uVar11 & 0xffffffff;
      uVar17 = uVar17 >> 0x20;
      uVar15 = uVar15 >> 0x20;
      uVar26 = uVar25 * uVar29;
      uVar28 = uVar19 >> 0x20;
      uVar14 = uVar25 * uVar7;
      uVar19 = uVar19 & 0xffffffff;
      uVar10 = uVar26 + uVar17 * uVar11 + (uVar29 * uVar11 >> 0x20);
      uVar21 = uVar14 + uVar15 * uVar11 + (uVar11 * uVar7 >> 0x20);
      uVar27 = uVar28 * uVar29;
      uVar30 = uVar28 * uVar7;
      lVar13 = uVar25 * uVar17 + 0x100000000;
      if (uVar26 < uVar10 || uVar26 - uVar10 == 0) {
        lVar13 = uVar25 * uVar17;
      }
      uVar26 = (uVar11 * uVar7 & 0xffffffff) + (uVar21 << 0x20);
      uVar1 = uVar27 + uVar17 * uVar19 + (uVar29 * uVar19 >> 0x20);
      uVar16 = uVar30 + uVar15 * uVar19 + (uVar19 * uVar7 >> 0x20);
      lVar24 = uVar25 * uVar15 + 0x100000000;
      if (uVar14 < uVar21 || uVar14 - uVar21 == 0) {
        lVar24 = uVar25 * uVar15;
      }
      uVar14 = uVar26 + (uVar10 >> 0x20) + lVar13;
      lVar13 = uVar17 * uVar28 + 0x100000000;
      if (uVar27 < uVar1 || uVar27 - uVar1 == 0) {
        lVar13 = uVar17 * uVar28;
      }
      uVar17 = lVar24 + (uVar21 >> 0x20);
      uVar21 = (uVar19 * uVar7 & 0xffffffff) + (uVar16 << 0x20);
      lVar24 = uVar15 * uVar28 + 0x100000000;
      if (uVar30 < uVar16 || uVar30 - uVar16 == 0) {
        lVar24 = uVar15 * uVar28;
      }
      uVar15 = uVar21 + uVar17;
      uVar26 = (ulong)(uVar14 < uVar26);
      uVar19 = (uVar29 * uVar19 & 0xffffffff) + (uVar1 << 0x20);
      uVar7 = uVar15 + uVar26;
      uVar16 = uVar16 >> 0x20;
      uVar25 = lVar13 + (uVar1 >> 0x20);
      if (CARRY8(uVar21,uVar17) || CARRY8(uVar15,uVar26)) {
        uVar16 = uVar16 + 1;
      }
      uVar15 = uVar14 + uVar19;
      uVar21 = (ulong)CARRY8(uVar14,uVar19);
      uVar17 = uVar7 + uVar25;
      uVar19 = uVar17 + uVar21;
      if (CARRY8(uVar7,uVar25) || CARRY8(uVar17,uVar21)) {
        lVar24 = lVar24 + 1;
      }
      uVar10 = (ulong)((uVar29 * uVar11 & 0xffffffff) + (uVar10 << 0x20) != 0 ||
                      (uVar15 & 0x7ffffffffffff) != 0);
      uVar15 = uVar15 >> 0x33;
      uVar17 = uVar10 | uVar15 | uVar19 * 0x2000;
      uVar19 = uVar19 >> 0x33;
      uVar21 = uVar19 | (lVar24 + uVar16) * 0x2000;
      if ((lVar24 + uVar16 >> 0x27 & 1) != 0) {
        uVar17 = uVar10 | uVar15 & 1 | uVar17 >> 1 | uVar19 << 0x3f;
        uVar21 = uVar21 >> 1;
        lVar20 = lVar23;
      }
LAB_00102b6c:
      lVar13 = lVar20 + 0x3fff;
      uVar5 = (uint)uVar6;
      uVar10 = uVar22;
      if (lVar13 < 1) {
        uVar19 = 1 - lVar13;
        if ((long)uVar19 < 0x75) {
          iVar8 = (int)uVar19;
          if ((long)uVar19 < 0x40) {
            uVar11 = (ulong)(uVar17 << ((ulong)(0x40 - iVar8) & 0x3f) != 0);
            uVar17 = uVar21 << ((ulong)(0x40 - iVar8) & 0x3f) | uVar17 >> (uVar19 & 0x3f);
            uVar15 = uVar21 >> (uVar19 & 0x3f);
            uVar19 = uVar17 | uVar11;
            if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102d54;
            if ((uVar15 >> 0x33 & 1) == 0) goto LAB_00102e9c;
LAB_00102f08:
            uVar6 = (ulong)(uVar5 | 0x18);
            uVar17 = 1;
            uVar15 = 0;
            uVar11 = 0;
          }
          else {
            uVar11 = uVar17 | uVar21 << ((ulong)(0x80 - iVar8) & 0x3f);
            if (uVar19 == 0x40) {
              uVar11 = uVar17;
            }
            uVar21 = uVar21 >> ((ulong)(iVar8 - 0x40) & 0x3f);
            uVar19 = uVar11 != 0 | uVar21;
            uVar15 = 0;
            if ((ulong)(uVar11 != 0) == 0 && (uVar21 & 7) == 0) {
LAB_00102e9c:
              uVar17 = 0;
              uVar4 = 0;
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
              if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_0010291c;
              uVar6 = (ulong)(uVar5 | 8);
            }
            else {
              uVar15 = 0;
LAB_00102d54:
              uVar18 = uVar18 & 0xc00000;
              if (uVar18 == 0x400000) {
                if (uVar22 == 0) {
LAB_00102efc:
                  bVar3 = 0xfffffffffffffff7 < uVar19;
                  uVar19 = uVar19 + 8;
                  if (bVar3) {
                    uVar15 = uVar15 + 1;
                  }
                }
              }
              else if (uVar18 == 0x800000) {
                if (uVar22 != 0) goto LAB_00102efc;
              }
              else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
                      (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
                uVar15 = uVar15 + 1;
              }
              if ((uVar15 >> 0x33 & 1) != 0) goto LAB_00102f08;
              uVar6 = (ulong)(uVar5 | 0x18);
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar17 = 0;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
            }
          }
        }
        else {
          uVar11 = 0;
          if (uVar17 != 0 || uVar21 != 0) {
            uVar5 = uVar5 | 0x10;
            uVar11 = 1 - uVar22;
            if (((uVar18 & 0xc00000) != 0x400000) &&
               (uVar11 = uVar22, (uVar18 & 0xc00000) != 0x800000)) {
              uVar11 = 0;
            }
          }
          uVar6 = (ulong)(uVar5 | 8);
          uVar17 = 0;
          uVar15 = 0;
        }
      }
      else {
        if ((uVar17 & 7) != 0) {
          uVar19 = uVar18 & 0xc00000;
          uVar6 = (ulong)(uVar5 | 0x10);
          if (uVar19 == 0x400000) {
            if (uVar22 == 0) {
LAB_00102eec:
              bVar3 = 0xfffffffffffffff7 < uVar17;
              uVar17 = uVar17 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar22 != 0) goto LAB_00102eec;
          }
          else if (((uVar19 == 0) && ((uVar17 & 0xf) != 4)) &&
                  (bVar3 = 0xfffffffffffffffb < uVar17, uVar17 = uVar17 + 4, bVar3)) {
            uVar21 = uVar21 + 1;
          }
        }
        if ((uVar21 >> 0x34 & 1) != 0) {
          uVar21 = uVar21 & 0xffefffffffffffff;
          lVar13 = lVar20 + 0x4000;
        }
        if (lVar13 < 0x7fff) {
          uVar15 = uVar21 >> 3 & 0xffffffffffff;
          uVar4 = (uint)lVar13 & 0x7fff;
          uVar11 = uVar17 >> 3 | uVar21 << 0x3d;
          goto LAB_0010291c;
        }
        uVar18 = uVar18 & 0xc00000;
        uVar4 = 0x7ffe;
        if (uVar18 == 0x400000) {
          bVar3 = uVar22 != 0;
          if (!bVar3) {
            uVar4 = 0x7fff;
          }
          uVar17 = (ulong)uVar4;
          uVar15 = 0xffffffffffff;
          if (!bVar3) {
            uVar15 = 0;
          }
          uVar11 = -(ulong)bVar3;
        }
        else if (uVar18 == 0x800000) {
          bVar3 = uVar22 == 0;
          if (!bVar3) {
            uVar4 = 0x7fff;
          }
          uVar17 = (ulong)uVar4;
          uVar15 = 0xffffffffffff;
          if (!bVar3) {
            uVar15 = 0;
          }
          uVar11 = -(ulong)bVar3;
        }
        else {
          uVar17 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          if (uVar18 != 0) {
            uVar17 = 0x7ffe;
            uVar15 = 0xffffffffffff;
            uVar11 = 0xffffffffffffffff;
          }
        }
        uVar6 = (ulong)((uint)uVar6 | 0x14);
      }
      uVar15 = uVar15 | uVar17 << 0x30 | uVar22 << 0x3f;
      goto LAB_00102dd4;
    }
LAB_001028a0:
    if (uVar7 != 0xb) {
LAB_001028a8:
      uVar25 = uVar11;
      uVar21 = uVar19;
      uVar26 = uVar10;
      lVar9 = lVar24;
      goto LAB_001029ac;
    }
LAB_001029c8:
    uVar22 = uVar14;
    if (lVar12 == 3) {
      uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
    else {
LAB_00102908:
      lVar20 = lVar23;
      if (lVar12 != 1) goto LAB_00102b6c;
      uVar4 = 0;
      uVar15 = 0;
      uVar11 = 0;
      uVar10 = uVar22;
    }
  }
  else {
    if (iVar8 != 0x7fff) {
      lVar20 = (uVar22 - 0x3fff) + lVar13;
      uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
      uVar21 = uVar17 >> 0x3d | uVar15 << 3 | 0x8000000000000;
      uVar17 = uVar17 << 3;
      lVar23 = lVar20 + 1;
      lVar12 = 0;
      if (10 < uVar7) goto LAB_001028a0;
      goto LAB_001028ec;
    }
    lVar20 = lVar13 + 0x7fff;
    if (uVar17 != 0 || uVar15 != 0) {
      uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
      uVar7 = uVar7 | 3;
      lVar23 = lVar13 + 0x8000;
      uVar4 = (uint)uVar6;
      if ((uVar21 & 0x800000000000) == 0) {
        uVar4 = 1;
      }
      uVar6 = (ulong)uVar4;
      lVar12 = 3;
      if (10 < uVar7) {
        lVar9 = 3;
        goto LAB_00102f44;
      }
      goto LAB_00102968;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    uVar7 = uVar7 | 2;
    lVar23 = lVar13 + 0x8000;
    uVar17 = 0;
    if (uVar7 < 0xb) {
      uVar21 = 0;
      lVar12 = 2;
      goto LAB_001028ec;
    }
    lVar9 = 2;
    uVar15 = 0;
LAB_00102f44:
    lVar23 = lVar13 + 0x8000;
    if (uVar7 != 0xf) {
      uVar25 = uVar17;
      uVar21 = uVar15;
      uVar26 = uVar14;
      if (uVar7 != 0xb) goto LAB_001028a8;
      goto LAB_001029ac;
    }
    if (((uVar19 >> 0x2f & 1) == 0) || (uVar15 >> 0x2f != 0)) {
      uVar15 = uVar19 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
    }
    else {
      uVar15 = uVar15 | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
  }
LAB_0010291c:
  uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
  if ((int)uVar6 == 0) {
    auVar31._8_8_ = uVar15;
    auVar31._0_8_ = uVar11;
    return auVar31;
  }
LAB_00102dd4:
  __sfp_handle_exceptions(uVar6);
  auVar2._8_8_ = uVar15;
  auVar2._0_8_ = uVar11;
  return auVar2;
}



/* Function: __sfp_handle_exceptions @ 00102fe0 */

ulong __sfp_handle_exceptions(ulong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if ((param_1 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 2 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    uVar1 = fpsr;
  }
  if ((uVar2 >> 4 & 1) != 0) {
    param_1 = fpsr;
  }
  return param_1;
}



/* Function: _fini @ 00103050 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 67 */
