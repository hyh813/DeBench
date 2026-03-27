/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O3_no_g
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



/* Function: main @ 000110d0 */

undefined4 main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _start @ 00011100 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001112c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011130 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011140 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001115b) */
/* WARNING: Removing unreachable block (ram,0x00011165) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111ae) */
/* WARNING: Removing unreachable block (ram,0x000111b8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111d0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001122c) */
/* WARNING: Removing unreachable block (ram,0x00011230) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011269 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001126d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: process_char @ 00011280 */

int process_char(int param_1)

{
  if ((byte)((char)param_1 + 0xbfU) < 0x1a) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}



/* Function: process_short @ 000112a0 */

short process_short(short param_1,short param_2)

{
  return param_2 + param_1;
}



/* Function: process_int @ 000112b0 */

int process_int(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: process_long @ 000112c0 */

int process_long(int param_1)

{
  return param_1 * 2;
}



/* Function: process_ll @ 000112d0 */

undefined8 process_ll(uint param_1,int param_2)

{
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_1 >> 0x20) + param_2 * param_1 * 2,
                  (int)((ulonglong)param_1 * (ulonglong)param_1));
}



/* Function: process_float @ 000112f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_float(float param_1)

{
  return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}



/* Function: process_double @ 00011320 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

longdouble process_double(double param_1)

{
  return (longdouble)0.1 + (longdouble)0.5 * (longdouble)param_1;
}



/* Function: process_ld @ 00011350 */

longdouble process_ld(longdouble param_1)

{
  return (longdouble)1 + param_1 * param_1;
}



/* Function: process_bool @ 00011360 */

uint process_bool(uint param_1)

{
  uint uVar1;
  
  uVar1 = ~param_1 & 1;
  if ((int)param_1 < 1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: const_param @ 00011380 */

int const_param(int *param_1)

{
  return *param_1 + 10;
}



/* Function: volatile_access @ 00011390 */

int volatile_access(int *param_1)

{
  return *param_1 + *param_1;
}



/* Function: test_data_types_l1 @ 000113a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_data_types_l1(void)

{
  puts(&DAT_00013008);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
  __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
  __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
  __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
  __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
  __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
  __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
  __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0xa0000000,0x4002);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",1);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 000114f0 */

int array_1d_stack(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_2) {
    piVar1 = param_1 + param_2;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (piVar1 != param_1);
    return iVar2;
  }
  return 0;
}



/* Function: array_string @ 00011520 */

void array_string(char *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*param_1 != '\0') {
    do {
      iVar1 = iVar1 + 1;
    } while (param_1[iVar1] != '\0');
    return;
  }
  return;
}



/* Function: array_2d_stack @ 00011550 */

int array_2d_stack(int *param_1)

{
  return param_1[0xb] + *param_1 + param_1[0x16] + param_1[0x21] + param_1[0x2c] + param_1[0x37] +
         param_1[0x42] + param_1[0x4d] + param_1[0x58] + param_1[99];
}



/* Function: array_3d @ 00011590 */

int array_3d(int *param_1)

{
  return *param_1 + param_1[1] + param_1[2] + param_1[3] + param_1[4] + param_1[5] + param_1[6] +
         param_1[7] + param_1[8] + param_1[9] + param_1[10] + param_1[0xb] + param_1[0xc] +
         param_1[0xd] + param_1[0xe] + param_1[0xf] + param_1[0x10] + param_1[0x11] + param_1[0x12]
         + param_1[0x13] + param_1[0x14] + param_1[0x15] + param_1[0x16] + param_1[0x17] +
         param_1[0x18] + param_1[0x19] + param_1[0x1a] + param_1[0x1b] + param_1[0x1c] +
         param_1[0x1d] + param_1[0x1e] + param_1[0x1f] + param_1[0x20] + param_1[0x21] +
         param_1[0x22] + param_1[0x23] + param_1[0x24] + param_1[0x25] + param_1[0x26] +
         param_1[0x27] + param_1[0x28] + param_1[0x29] + param_1[0x2a] + param_1[0x2b] +
         param_1[0x2c] + param_1[0x2d] + param_1[0x2e] + param_1[0x2f] + param_1[0x30] +
         param_1[0x31] + param_1[0x32] + param_1[0x33] + param_1[0x34] + param_1[0x35] +
         param_1[0x36] + param_1[0x37] + param_1[0x38] + param_1[0x39] + param_1[0x3a] +
         param_1[0x3b] + param_1[0x3c] + param_1[0x3d] + param_1[0x3e] + param_1[0x3f] +
         param_1[0x40] + param_1[0x41] + param_1[0x42] + param_1[0x43] + param_1[0x44] +
         param_1[0x45] + param_1[0x46] + param_1[0x47] + param_1[0x48] + param_1[0x49] +
         param_1[0x4a] + param_1[0x4b] + param_1[0x4c] + param_1[0x4d] + param_1[0x4e] +
         param_1[0x4f] + param_1[0x50] + param_1[0x51] + param_1[0x52] + param_1[0x53] +
         param_1[0x54] + param_1[0x55] + param_1[0x56] + param_1[0x57] + param_1[0x58] +
         param_1[0x59] + param_1[0x5a] + param_1[0x5b] + param_1[0x5c] + param_1[0x5d] +
         param_1[0x5e] + param_1[0x5f] + param_1[0x60] + param_1[0x61] + param_1[0x62] + param_1[99]
         + param_1[100] + param_1[0x65] + param_1[0x66] + param_1[0x67] + param_1[0x68] +
         param_1[0x69] + param_1[0x6a] + param_1[0x6b] + param_1[0x6c] + param_1[0x6d] +
         param_1[0x6e] + param_1[0x6f] + param_1[0x70] + param_1[0x71] + param_1[0x72] +
         param_1[0x73] + param_1[0x74] + param_1[0x75] + param_1[0x76] + param_1[0x77] +
         param_1[0x78] + param_1[0x79] + param_1[0x7a] + param_1[0x7b] + param_1[0x7c];
}



/* Function: array_vla @ 00011830 */

int array_vla(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_1) {
    piVar1 = param_2 + param_1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_2;
      param_2 = param_2 + 1;
    } while (piVar1 != param_2);
    return iVar2;
  }
  return 0;
}



/* Function: array_pointer @ 00011860 */

int array_pointer(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_2) {
    piVar1 = param_1 + param_2 * 10;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 10;
    } while (piVar1 != param_1);
    return iVar2;
  }
  return 0;
}



/* Function: pointer_array @ 000118a0 */

int pointer_array(int *param_1,int param_2)

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



/* Function: array_complex_index @ 00011950 */

undefined4 array_complex_index(int param_1,int param_2,int param_3,uint param_4,uint param_5)

{
  if (((-1 < (int)(param_4 | param_5)) && ((int)param_4 < param_2)) && ((int)param_5 < param_3)) {
    return *(undefined4 *)(param_1 + (param_2 * param_5 + param_4) * 4);
  }
  return 0xffffffff;
}



/* Function: array_oob @ 00011990 */

int array_oob(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (-1 < param_2) {
    piVar1 = param_1 + param_2 + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (piVar1 != param_1);
    return iVar2;
  }
  return 0;
}



/* Function: test_array_types @ 000119d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_array_types(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int local_68 [20];
  undefined4 local_16;
  undefined2 local_12;
  int local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x119da;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000133bd);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
  local_16 = 0x6c6c6568;
  local_12 = 0x6f;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar3 + 1;
    iVar3 = iVar2;
  } while (*(char *)((int)&local_16 + iVar1) != '\0');
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar2);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",0x2d);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",0x7d);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
  iVar3 = 0;
  do {
    local_68[iVar3] = iVar3;
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",local_68[0x11]);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_single @ 00011b00 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00011b10 */

int ptr_double(undefined4 *param_1)

{
  return *(int *)*param_1 + 5;
}



/* Function: ptr_triple @ 00011b20 */

int ptr_triple(undefined4 *param_1)

{
  return **(int **)*param_1 + 1;
}



/* Function: ptr_increment @ 00011b40 */

int ptr_increment(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (0 < param_2) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *(int *)(param_1 + iVar1 * 4);
      iVar1 = iVar1 + 1;
    } while (param_2 != iVar1);
    return iVar2;
  }
  return 0;
}



/* Function: ptr_offset @ 00011b80 */

undefined4 ptr_offset(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + param_2 * 4);
}



/* Function: ptr_diff @ 00011b90 */

int ptr_diff(int param_1,int param_2)

{
  return param_1 - param_2 >> 2;
}



/* Function: ptr_void @ 00011ba0 */

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



/* Function: ptr_const @ 00011be0 */

int ptr_const(int *param_1)

{
  return *param_1 * 2;
}



/* Function: ptr_const_ptr @ 00011bf0 */

void ptr_const_ptr(int *param_1)

{
  *param_1 = *param_1 + 5;
  return;
}



/* Function: ptr_func_simple @ 00011c00 */

void ptr_func_simple(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00011c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Function: ptr_func_complex @ 00011c20 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void ptr_func_complex(code *param_1,undefined4 param_2)

{
  int in_GS_OFFSET;
  undefined *local_18;
  undefined4 local_14;
  int local_10;
  undefined4 uStack_4;
  
  uStack_4 = 0x11c29;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14 = 0;
  local_18 = &DAT_0001342b;
  (*param_1)(param_2,&local_18);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_cast @ 00011c80 */

undefined4 ptr_cast(undefined4 *param_1)

{
  return *param_1;
}



/* Function: opaque_handle_create @ 00011c90 */

undefined4 opaque_handle_create(undefined4 param_1)

{
  return param_1;
}



/* Function: opaque_handle_op @ 00011ca0 */

int opaque_handle_op(int param_1)

{
  return param_1 * 2;
}



/* Function: test_pointer_types @ 00011cb0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_pointer_types(void)

{
  puts(&DAT_00013430);
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



/* Function: struct_simple @ 00011de0 */

int struct_simple(int *param_1)

{
  return param_1[1] + *param_1 + param_1[2];
}



/* Function: struct_array @ 00011e00 */

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
    } while (param_1 + param_2 * 3 != piVar2);
    return iVar3;
  }
  return 0;
}



/* Function: struct_nested @ 00011e50 */

int struct_nested(int *param_1)

{
  return param_1[3] + *param_1;
}



/* Function: struct_deep @ 00011e60 */

int struct_deep(int param_1)

{
  return *(int *)(param_1 + 0x14) + *(int *)(param_1 + 8);
}



/* Function: struct_with_ptr @ 00011e70 */

int struct_with_ptr(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if ((int *)param_1[1] != (int *)0x0) {
    iVar1 = iVar1 + *(int *)param_1[1];
  }
  return iVar1;
}



/* Function: struct_bitfields @ 00011e90 */

short struct_bitfields(ushort *param_1)

{
  byte bVar1;
  
  bVar1 = (byte)*param_1;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*param_1 >> 6);
}



/* Function: union_type @ 00011ec0 */

float union_type(float *param_1,int param_2)

{
  if (param_2 == 0) {
    return *param_1;
  }
  if (param_2 != 1) {
    return (float)(int)*(char *)param_1;
  }
  return (float)(int)ROUND(*param_1);
}



/* Function: union_array @ 00011f20 */

int union_array(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (0 < param_2) {
    piVar1 = param_1 + param_2;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *param_1;
      param_1 = param_1 + 1;
    } while (piVar1 != param_1);
    return iVar2;
  }
  return 0;
}



/* Function: enum_type @ 00011f50 */

int enum_type(int param_1)

{
  return param_1 * 10;
}



/* Function: enum_switch @ 00011f60 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 enum_switch(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffff9d;
  if (param_1 < 4) {
    uVar1 = *(undefined4 *)(CSWTCH_75 + param_1 * 4);
  }
  return uVar1;
}



/* Function: struct_func_ptr @ 00011f90 */

void struct_func_ptr(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00011f9e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 4))();
  return;
}



/* Function: linked_list @ 00011fb0 */

int linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011fd0 */

int doubly_linked_list(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[1]) {
    iVar1 = iVar1 + *param_1;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011ff0 */

int binary_tree_sum(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int *local_54;
  int *local_50;
  int *local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  local_28 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
    local_3c = 0;
    local_44 = *param_1;
    local_54 = (int *)param_1[1];
    if (local_54 != (int *)0x0) {
      do {
        local_38 = 0;
        local_40 = *local_54;
        local_50 = (int *)local_54[1];
        if (local_50 != (int *)0x0) {
          do {
            local_34 = 0;
            local_2c = *local_50;
            local_4c = (int *)local_50[1];
            if (local_4c != (int *)0x0) {
              do {
                local_68 = 0;
                local_30 = *local_4c;
                piVar6 = (int *)local_4c[1];
                if (piVar6 != (int *)0x0) {
                  do {
                    piVar3 = (int *)piVar6[1];
                    iVar5 = *piVar6;
                    local_70 = 0;
                    if (piVar3 != (int *)0x0) {
                      do {
                        local_6c = *piVar3;
                        piVar7 = (int *)piVar3[1];
                        local_64 = 0;
                        if (piVar7 != (int *)0x0) {
                          do {
                            local_48 = *piVar7;
                            piVar8 = (int *)piVar7[1];
                            iVar9 = 0;
                            if (piVar8 != (int *)0x0) {
                              do {
                                piVar10 = (int *)piVar8[1];
                                iVar11 = *piVar8;
                                iVar4 = 0;
                                if (piVar10 != (int *)0x0) {
                                  do {
                                    iVar2 = binary_tree_sum(piVar10[1]);
                                    iVar1 = *piVar10;
                                    piVar10 = (int *)piVar10[2];
                                    iVar4 = iVar4 + iVar2 + iVar1;
                                  } while (piVar10 != (int *)0x0);
                                  iVar11 = iVar11 + iVar4;
                                }
                                piVar8 = (int *)piVar8[2];
                                iVar9 = iVar9 + iVar11;
                              } while (piVar8 != (int *)0x0);
                              local_48 = local_48 + iVar9;
                            }
                            piVar7 = (int *)piVar7[2];
                            local_64 = local_64 + local_48;
                          } while (piVar7 != (int *)0x0);
                          local_6c = local_6c + local_64;
                        }
                        piVar3 = (int *)piVar3[2];
                        local_70 = local_70 + local_6c;
                      } while (piVar3 != (int *)0x0);
                      iVar5 = iVar5 + local_70;
                    }
                    piVar6 = (int *)piVar6[2];
                    local_68 = local_68 + iVar5;
                  } while (piVar6 != (int *)0x0);
                  local_30 = local_30 + local_68;
                }
                local_34 = local_34 + local_30;
                local_4c = (int *)local_4c[2];
              } while (local_4c != (int *)0x0);
              local_2c = local_2c + local_34;
            }
            local_38 = local_38 + local_2c;
            local_50 = (int *)local_50[2];
          } while (local_50 != (int *)0x0);
          local_40 = local_40 + local_38;
        }
        local_3c = local_3c + local_40;
        local_54 = (int *)local_54[2];
      } while (local_54 != (int *)0x0);
      local_44 = local_44 + local_3c;
    }
    local_28 = local_28 + local_44;
  }
  return local_28;
}



/* Function: binary_tree @ 00012220 */

int binary_tree(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_20;
  
  local_20 = 0;
  for (; param_1 != (int *)0x0; param_1 = (int *)param_1[2]) {
    piVar3 = (int *)param_1[1];
    iVar5 = *param_1;
    iVar4 = 0;
    if (piVar3 != (int *)0x0) {
      do {
        iVar2 = binary_tree_sum(piVar3[1]);
        iVar1 = *piVar3;
        piVar3 = (int *)piVar3[2];
        iVar4 = iVar4 + iVar2 + iVar1;
      } while (piVar3 != (int *)0x0);
      iVar5 = iVar5 + iVar4;
    }
    local_20 = local_20 + iVar5;
  }
  return local_20;
}



/* Function: graph_traverse @ 00012280 */

int graph_traverse(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  if ((int)param_1[10] < 1) {
    return 0;
  }
  puVar1 = param_1 + param_1[10];
  iVar3 = 0;
  do {
    for (piVar2 = (int *)*param_1; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
      iVar3 = iVar3 + *piVar2;
    }
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  return iVar3;
}



/* Function: test_composite_types @ 000122c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_composite_types(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int in_GS_OFFSET;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int *local_24;
  undefined4 local_20;
  int local_1c [2];
  undefined4 *local_14;
  int local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x122ca;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013526);
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
  piVar2 = &local_38;
  local_34 = &local_30;
  iVar3 = 10;
  local_38 = 0x14;
  local_30 = 0x1e;
  local_2c = 0;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)piVar2[1];
    iVar3 = iVar3 + iVar1;
  } while (piVar2 != (int *)0x0);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar3);
  piVar2 = local_1c;
  local_28 = 10;
  local_14 = &local_28;
  iVar3 = 10;
  local_24 = piVar2;
  local_20 = 0;
  local_1c[0] = 0x14;
  local_1c[1] = 0;
  do {
    iVar3 = iVar3 + *piVar2;
    piVar2 = (int *)piVar2[1];
  } while (piVar2 != (int *)0x0);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar3);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",100);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 000124b3 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 000124b7 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 000124c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 000124e0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000124fa) */
/* WARNING: Removing unreachable block (ram,0x00012510) */
/* WARNING: Removing unreachable block (ram,0x0001251d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001252c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 70 */
