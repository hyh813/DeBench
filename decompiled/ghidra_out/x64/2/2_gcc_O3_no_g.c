/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_gcc_O3_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 001010a0 */

undefined8 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _start @ 001010d0 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101100 */

/* WARNING: Removing unreachable block (ram,0x00101113) */
/* WARNING: Removing unreachable block (ram,0x0010111f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101130 */

/* WARNING: Removing unreachable block (ram,0x00101154) */
/* WARNING: Removing unreachable block (ram,0x00101160) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101170 */

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



/* Function: process_char @ 001011c0 */

int process_char(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x20;
  if (0x19 < (byte)((char)param_1 + 0xbfU)) {
    iVar1 = param_1;
  }
  return iVar1;
}



/* Function: process_short @ 001011e0 */

int process_short(int param_1,int param_2)

{
  return param_2 + param_1;
}



/* Function: process_int @ 001011f0 */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: process_long @ 00101200 */

long process_long(long param_1)

{
  return param_1 * 2;
}



/* Function: process_ll @ 00101210 */

long process_ll(long param_1)

{
  return param_1 * param_1;
}



/* Function: process_float @ 00101220 */

float process_float(float param_1)

{
  return param_1 * 1.5 + 0.5;
}



/* Function: process_double @ 00101240 */

double process_double(double param_1)

{
  return param_1 * 0.5 + 0.1;
}



/* Function: process_ld @ 00101260 */

void process_ld(void)

{
  return;
}



/* Function: process_bool @ 00101270 */

uint process_bool(uint param_1)

{
  uint uVar1;
  
  uVar1 = ~param_1 & 1;
  if ((int)param_1 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: const_param @ 00101290 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 001012a0 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 001012b0 */

void test_data_types_l1(void)

{
  puts(&DAT_00103008);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
  __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
  __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
  __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
  __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000);
  __printf_chk(0x400c000000000000,1,"DT-L1-06 (process_float): %.2f\n");
  __printf_chk(0x4000cccccccccccd,1,"DT-L1-07 (process_double): %.2f\n");
  __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n");
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 00101440 */

int array_1d_stack(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((int)param_2 < 1) {
    iVar7 = 0;
  }
  else {
    if (param_2 - 1 < 3) {
      uVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      piVar5 = param_1;
      do {
        iVar1 = *piVar5;
        piVar2 = piVar5 + 1;
        piVar3 = piVar5 + 2;
        piVar4 = piVar5 + 3;
        piVar5 = piVar5 + 4;
        iVar7 = iVar7 + iVar1;
        iVar8 = iVar8 + *piVar2;
        iVar9 = iVar9 + *piVar3;
        iVar10 = iVar10 + *piVar4;
      } while (piVar5 != param_1 + (ulong)((param_2 >> 2) - 1) * 4 + 4);
      uVar6 = param_2 & 0xfffffffc;
      iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
      if ((param_2 & 3) == 0) {
        return iVar7;
      }
    }
    iVar7 = iVar7 + param_1[(int)uVar6];
    if ((int)(uVar6 + 1) < (int)param_2) {
      iVar7 = iVar7 + param_1[(long)(int)uVar6 + 1];
      if ((int)(uVar6 + 2) < (int)param_2) {
        return iVar7 + param_1[(long)(int)uVar6 + 2];
      }
    }
  }
  return iVar7;
}



/* Function: array_string @ 001014f0 */

ulong array_string(char *param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  
  if (*param_1 != '\0') {
    uVar2 = 1;
    do {
      uVar3 = uVar2 & 0xffffffff;
      pcVar1 = param_1 + uVar2;
      uVar2 = uVar2 + 1;
    } while (*pcVar1 != '\0');
    return uVar3;
  }
  return 0;
}



/* Function: array_2d_stack @ 00101520 */

int array_2d_stack(int *param_1)

{
  return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
         param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}



/* Function: array_3d @ 00101560 */

int array_3d(int *param_1)

{
  return param_1[4] + *param_1 + param_1[8] + param_1[0xc] + param_1[0x10] + param_1[0x14] +
         param_1[0x18] + param_1[0x1c] + param_1[0x20] + param_1[0x24] + param_1[0x28] +
         param_1[0x2c] + param_1[0x30] + param_1[0x34] + param_1[0x38] + param_1[0x3c] +
         param_1[0x40] + param_1[0x44] + param_1[0x48] + param_1[0x4c] + param_1[0x50] +
         param_1[0x54] + param_1[0x58] + param_1[0x5c] + param_1[0x60] +
         param_1[6] + param_1[2] + param_1[10] + param_1[0xe] + param_1[0x12] + param_1[0x16] +
         param_1[0x1a] + param_1[0x1e] + param_1[0x22] + param_1[0x26] + param_1[0x2a] +
         param_1[0x2e] + param_1[0x32] + param_1[0x36] + param_1[0x3a] + param_1[0x3e] +
         param_1[0x42] + param_1[0x46] + param_1[0x4a] + param_1[0x4e] + param_1[0x52] +
         param_1[0x56] + param_1[0x5a] + param_1[0x5e] + param_1[0x62] +
         param_1[5] + param_1[1] + param_1[9] + param_1[0xd] + param_1[0x11] + param_1[0x15] +
         param_1[0x19] + param_1[0x1d] + param_1[0x21] + param_1[0x25] + param_1[0x29] +
         param_1[0x2d] + param_1[0x31] + param_1[0x35] + param_1[0x39] + param_1[0x3d] +
         param_1[0x41] + param_1[0x45] + param_1[0x49] + param_1[0x4d] + param_1[0x51] +
         param_1[0x55] + param_1[0x59] + param_1[0x5d] + param_1[0x61] +
         param_1[7] + param_1[3] + param_1[0xb] + param_1[0xf] + param_1[0x13] + param_1[0x17] +
         param_1[0x1b] + param_1[0x1f] + param_1[0x23] + param_1[0x27] + param_1[0x2b] +
         param_1[0x2f] + param_1[0x33] + param_1[0x37] + param_1[0x3b] + param_1[0x3f] +
         param_1[0x43] + param_1[0x47] + param_1[0x4b] + param_1[0x4f] + param_1[0x53] +
         param_1[0x57] + param_1[0x5b] + param_1[0x5f] + param_1[99] + param_1[100] + param_1[0x65]
         + param_1[0x66] + param_1[0x67] + param_1[0x68] + param_1[0x69] + param_1[0x6a] +
         param_1[0x6b] + param_1[0x6c] + param_1[0x6d] + param_1[0x6e] + param_1[0x6f] +
         param_1[0x70] + param_1[0x71] + param_1[0x72] + param_1[0x73] + param_1[0x74] +
         param_1[0x75] + param_1[0x76] + param_1[0x77] + param_1[0x78] + param_1[0x79] +
         param_1[0x7a] + param_1[0x7b] + param_1[0x7c];
}



/* Function: array_vla @ 00101730 */

int array_vla(uint param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((int)param_1 < 1) {
    iVar7 = 0;
  }
  else {
    if (param_1 - 1 < 3) {
      uVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      piVar5 = param_2;
      do {
        iVar1 = *piVar5;
        piVar2 = piVar5 + 1;
        piVar3 = piVar5 + 2;
        piVar4 = piVar5 + 3;
        piVar5 = piVar5 + 4;
        iVar7 = iVar7 + iVar1;
        iVar8 = iVar8 + *piVar2;
        iVar9 = iVar9 + *piVar3;
        iVar10 = iVar10 + *piVar4;
      } while (piVar5 != param_2 + (ulong)((param_1 >> 2) - 1) * 4 + 4);
      uVar6 = param_1 & 0xfffffffc;
      iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
      if ((param_1 & 3) == 0) {
        return iVar7;
      }
    }
    iVar7 = iVar7 + param_2[(int)uVar6];
    if ((int)(uVar6 + 1) < (int)param_1) {
      iVar7 = iVar7 + param_2[(long)(int)uVar6 + 1];
      if ((int)(uVar6 + 2) < (int)param_1) {
        return iVar7 + param_2[(long)(int)uVar6 + 2];
      }
    }
  }
  return iVar7;
}



/* Function: array_pointer @ 001017e0 */

int array_pointer(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_2) {
    piVar1 = param_1 + (ulong)(param_2 - 1) * 10 + 10;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 10;
    } while (param_1 != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: pointer_array @ 00101820 */

int pointer_array(undefined8 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 < 1) {
    iVar1 = 0;
  }
  else {
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
                      return iVar1 + *(int *)param_1[9];
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
  return iVar1;
}



/* Function: array_complex_index @ 001018e0 */

undefined4 array_complex_index(long param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
    return *(undefined4 *)(param_1 + (long)(int)(param_2 * param_5 + param_4) * 4);
  }
  return 0xffffffff;
}



/* Function: array_oob @ 00101910 */

int array_oob(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  if (param_2 < 0) {
    iVar8 = 0;
  }
  else {
    uVar7 = param_2 + 1;
    if (param_2 < 3) {
      uVar6 = 0;
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      iVar11 = 0;
      piVar5 = param_1;
      do {
        iVar1 = *piVar5;
        piVar2 = piVar5 + 1;
        piVar3 = piVar5 + 2;
        piVar4 = piVar5 + 3;
        piVar5 = piVar5 + 4;
        iVar8 = iVar8 + iVar1;
        iVar9 = iVar9 + *piVar2;
        iVar10 = iVar10 + *piVar3;
        iVar11 = iVar11 + *piVar4;
      } while (piVar5 != param_1 + (ulong)((uVar7 >> 2) - 1) * 4 + 4);
      uVar6 = uVar7 & 0xfffffffc;
      iVar8 = iVar8 + iVar10 + iVar9 + iVar11;
      if ((uVar7 & 3) == 0) {
        return iVar8;
      }
    }
    iVar8 = iVar8 + param_1[(int)uVar6];
    if ((int)(uVar6 + 1) <= param_2) {
      iVar8 = iVar8 + param_1[(long)(int)uVar6 + 1];
      if ((int)(uVar6 + 2) <= param_2) {
        return iVar8 + param_1[(long)(int)uVar6 + 2];
      }
    }
  }
  return iVar8;
}



/* Function: test_array_types @ 001019c0 */

void test_array_types(void)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  char local_16 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001033e1);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
  builtin_strncpy(local_16,"hello",6);
  uVar2 = 1;
  do {
    uVar3 = uVar2 & 0xffffffff;
    pcVar1 = local_16 + uVar2;
    uVar2 = uVar2 + 1;
  } while (*pcVar1 != '\0');
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar3);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",0x11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: ptr_single @ 00101af0 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00101b00 */

int ptr_double(undefined8 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00101b10 */

int ptr_triple(undefined8 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00101b20 */

int ptr_increment(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((int)param_2 < 1) {
    iVar7 = 0;
  }
  else {
    if (param_2 - 1 < 3) {
      uVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      piVar5 = param_1;
      do {
        iVar1 = *piVar5;
        piVar2 = piVar5 + 1;
        piVar3 = piVar5 + 2;
        piVar4 = piVar5 + 3;
        piVar5 = piVar5 + 4;
        iVar7 = iVar7 + iVar1;
        iVar8 = iVar8 + *piVar2;
        iVar9 = iVar9 + *piVar3;
        iVar10 = iVar10 + *piVar4;
      } while (param_1 + (ulong)((param_2 >> 2) - 1) * 4 + 4 != piVar5);
      uVar6 = param_2 & 0xfffffffc;
      param_1 = param_1 + uVar6;
      iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
      if (param_2 == uVar6) {
        return iVar7;
      }
    }
    iVar7 = iVar7 + *param_1;
    if ((int)(uVar6 + 1) < (int)param_2) {
      iVar7 = iVar7 + param_1[1];
      if ((int)(uVar6 + 2) < (int)param_2) {
        return iVar7 + param_1[2];
      }
    }
  }
  return iVar7;
}



/* Function: ptr_offset @ 00101bc0 */

undefined4 ptr_offset(long param_1,int param_2)

{
  return *(undefined4 *)(param_1 + (long)param_2 * 4);
}



/* Function: ptr_diff @ 00101bd0 */

ulong ptr_diff(long param_1,long param_2)

{
  return param_1 - param_2 >> 2 & 0xffffffff;
}



/* Function: ptr_void @ 00101be0 */

int ptr_void(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 == 1) {
    return (int)(char)*param_1;
  }
  return -1;
}



/* Function: ptr_const @ 00101c10 */

int ptr_const(int *param_1)

{
  return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00101c20 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 00101c30 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00101c39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_2);
  return;
}



/* Function: ptr_func_complex @ 00101c40 */

void ptr_func_complex(code *param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined *local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0;
  local_28 = &DAT_0010344f;
  (*param_1)(param_2,&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: ptr_cast @ 00101c90 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00101ca0 */

long opaque_handle_create(int param_1)

{
  return (long)param_1;
}



/* Function: opaque_handle_op @ 00101cb0 */

int opaque_handle_op(int param_1)

{
  return param_1 * 2;
}



/* Function: test_pointer_types @ 00101cc0 */

void test_pointer_types(void)

{
  puts(&DAT_00103454);
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
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",1);
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return;
}



/* Function: struct_simple @ 00101e30 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00101e40 */

int struct_array(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < param_2) {
    iVar3 = 0;
    piVar1 = param_1;
    do {
      piVar2 = piVar1 + 3;
      iVar3 = iVar3 + piVar1[1] + *piVar1 + piVar1[2];
      piVar1 = piVar2;
    } while (param_1 + (ulong)(param_2 - 1) * 3 + 3 != piVar2);
    return iVar3;
  }
  return 0;
}



/* Function: struct_nested @ 00101e90 */

int struct_nested(int *param_1)

{
  return *param_1 + param_1[3];
}



/* Function: struct_deep @ 00101ea0 */

int struct_deep(long param_1)

{
  return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}



/* Function: struct_with_ptr @ 00101eb0 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int **)(param_1 + 2) != (int *)0x0) {
    iVar1 = iVar1 + **(int **)(param_1 + 2);
  }
  return iVar1;
}



/* Function: struct_bitfields @ 00101ed0 */

short struct_bitfields(ushort *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*param_1;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00101f00 */

float union_type(float *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 != 1) {
    return (float)(int)*(char *)param_1;
  }
  return (float)(int)*param_1;
}



/* Function: union_array @ 00101f30 */

int union_array(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if ((int)param_2 < 1) {
    iVar7 = 0;
  }
  else {
    if (param_2 - 1 < 3) {
      uVar6 = 0;
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      iVar8 = 0;
      iVar9 = 0;
      iVar10 = 0;
      piVar5 = param_1;
      do {
        iVar1 = *piVar5;
        piVar2 = piVar5 + 1;
        piVar3 = piVar5 + 2;
        piVar4 = piVar5 + 3;
        piVar5 = piVar5 + 4;
        iVar7 = iVar7 + iVar1;
        iVar8 = iVar8 + *piVar2;
        iVar9 = iVar9 + *piVar3;
        iVar10 = iVar10 + *piVar4;
      } while (piVar5 != param_1 + (ulong)((param_2 >> 2) - 1) * 4 + 4);
      uVar6 = param_2 & 0xfffffffc;
      iVar7 = iVar7 + iVar9 + iVar8 + iVar10;
      if ((param_2 & 3) == 0) {
        return iVar7;
      }
    }
    iVar7 = iVar7 + param_1[(int)uVar6];
    if ((int)(uVar6 + 1) < (int)param_2) {
      iVar7 = iVar7 + param_1[(long)(int)uVar6 + 1];
      if ((int)(uVar6 + 2) < (int)param_2) {
        return iVar7 + param_1[(long)(int)uVar6 + 2];
      }
    }
  }
  return iVar7;
}



/* Function: enum_type @ 00101fe0 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 00101ff0 */

undefined4 enum_switch(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffff9d;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(CSWTCH_61 + (ulong)param_1 * 4);
  }
  return uVar1;
}



/* Function: struct_func_ptr @ 00102010 */

void struct_func_ptr(undefined4 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0010201a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 2))(*param_1);
  return;
}



/* Function: linked_list @ 00102020 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = iVar1 + *param_1;
    param_1 = *(int **)(param_1 + 2);
  } while (param_1 != (int *)0x0);
  return iVar1;
}



/* Function: doubly_linked_list @ 00102050 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  do {
    iVar1 = iVar1 + *param_1;
    param_1 = *(int **)(param_1 + 2);
  } while (param_1 != (int *)0x0);
  return iVar1;
}



/* Function: binary_tree_sum @ 00102080 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int *local_a0;
  int *local_98;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_58;
  
  local_58 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
    local_7c = 0;
    local_84 = *param_1;
    local_a0 = *(int **)(param_1 + 2);
    if (local_a0 != (int *)0x0) {
      do {
        local_78 = 0;
        local_80 = *local_a0;
        local_98 = *(int **)(local_a0 + 2);
        if (local_98 != (int *)0x0) {
          do {
            local_74 = 0;
            local_6c = *local_98;
            piVar12 = *(int **)(local_98 + 2);
            if (piVar12 != (int *)0x0) {
              do {
                local_70 = *piVar12;
                piVar6 = *(int **)(piVar12 + 2);
                iVar10 = 0;
                if (piVar6 != (int *)0x0) {
                  do {
                    piVar4 = *(int **)(piVar6 + 2);
                    iVar14 = *piVar6;
                    iVar11 = 0;
                    if (piVar4 != (int *)0x0) {
                      do {
                        piVar8 = *(int **)(piVar4 + 2);
                        iVar3 = *piVar4;
                        iVar9 = 0;
                        if (piVar8 != (int *)0x0) {
                          do {
                            local_88 = *piVar8;
                            piVar7 = *(int **)(piVar8 + 2);
                            iVar16 = 0;
                            if (piVar7 != (int *)0x0) {
                              do {
                                piVar13 = *(int **)(piVar7 + 2);
                                iVar15 = *piVar7;
                                iVar5 = 0;
                                if (piVar13 != (int *)0x0) {
                                  do {
                                    iVar2 = binary_tree_sum(*(undefined8 *)(piVar13 + 2));
                                    iVar1 = *piVar13;
                                    piVar13 = *(int **)(piVar13 + 4);
                                    iVar5 = iVar5 + iVar2 + iVar1;
                                  } while (piVar13 != (int *)0x0);
                                  iVar15 = iVar15 + iVar5;
                                }
                                piVar7 = *(int **)(piVar7 + 4);
                                iVar16 = iVar16 + iVar15;
                              } while (piVar7 != (int *)0x0);
                              local_88 = local_88 + iVar16;
                            }
                            piVar8 = *(int **)(piVar8 + 4);
                            iVar9 = iVar9 + local_88;
                          } while (piVar8 != (int *)0x0);
                          iVar3 = iVar3 + iVar9;
                        }
                        piVar4 = *(int **)(piVar4 + 4);
                        iVar11 = iVar11 + iVar3;
                      } while (piVar4 != (int *)0x0);
                      iVar14 = iVar14 + iVar11;
                    }
                    piVar6 = *(int **)(piVar6 + 4);
                    iVar10 = iVar10 + iVar14;
                  } while (piVar6 != (int *)0x0);
                  local_70 = local_70 + iVar10;
                }
                piVar12 = *(int **)(piVar12 + 4);
                local_74 = local_74 + local_70;
              } while (piVar12 != (int *)0x0);
              local_6c = local_6c + local_74;
            }
            local_78 = local_78 + local_6c;
            local_98 = *(int **)(local_98 + 4);
          } while (local_98 != (int *)0x0);
          local_80 = local_80 + local_78;
        }
        local_7c = local_7c + local_80;
        local_a0 = *(int **)(local_a0 + 4);
      } while (local_a0 != (int *)0x0);
      local_84 = local_84 + local_7c;
    }
    local_58 = local_58 + local_84;
  }
  return local_58;
}



/* Function: binary_tree @ 001022e0 */

int binary_tree(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  for (; param_1 != (int *)0x0; param_1 = *(int **)(param_1 + 4)) {
    piVar3 = *(int **)(param_1 + 2);
    iVar4 = *param_1;
    iVar6 = 0;
    if (piVar3 != (int *)0x0) {
      do {
        iVar2 = binary_tree_sum(*(undefined8 *)(piVar3 + 2));
        iVar1 = *piVar3;
        piVar3 = *(int **)(piVar3 + 4);
        iVar6 = iVar6 + iVar2 + iVar1;
      } while (piVar3 != (int *)0x0);
      iVar4 = iVar4 + iVar6;
    }
    iVar5 = iVar5 + iVar4;
  }
  return iVar5;
}



/* Function: graph_traverse @ 00102340 */

int graph_traverse(undefined8 *param_1)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  
  if (0 < *(int *)(param_1 + 10)) {
    iVar3 = 0;
    puVar1 = param_1 + (ulong)(*(int *)(param_1 + 10) - 1) + 1;
    do {
      for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = *(int **)(piVar2 + 2)) {
        iVar3 = iVar3 + *piVar2;
      }
      param_1 = param_1 + 1;
    } while (param_1 != puVar1);
    return iVar3;
  }
  return 0;
}



/* Function: test_composite_types @ 00102390 */

void test_composite_types(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  long in_FS_OFFSET;
  int local_68 [2];
  undefined4 *local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined4 local_48 [2];
  int *local_40;
  undefined8 local_38;
  int local_30 [2];
  undefined8 local_28;
  undefined4 *local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_0010354a);
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
  piVar2 = local_68;
  local_68[0] = 0x14;
  local_58[0] = 0x1e;
  local_50 = 0;
  local_60 = local_58;
  iVar3 = 10;
  do {
    iVar1 = *piVar2;
    piVar2 = *(int **)(piVar2 + 2);
    iVar3 = iVar3 + iVar1;
  } while (piVar2 != (int *)0x0);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
  piVar2 = local_30;
  local_48[0] = 10;
  local_40 = piVar2;
  local_38 = 0;
  local_30[0] = 0x14;
  local_28 = 0;
  local_20 = local_48;
  iVar3 = 10;
  do {
    iVar3 = iVar3 + *piVar2;
    piVar2 = *(int **)(piVar2 + 2);
  } while (piVar2 != (int *)0x0);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 001025c0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 62 */
