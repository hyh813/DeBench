/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_clang_O1_g
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



/* Function: _start @ 00101060 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101090 */

/* WARNING: Removing unreachable block (ram,0x001010a3) */
/* WARNING: Removing unreachable block (ram,0x001010af) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001010c0 */

/* WARNING: Removing unreachable block (ram,0x001010e4) */
/* WARNING: Removing unreachable block (ram,0x001010f0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00101100 */

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



/* Function: process_char @ 00101150 */

char process_char(char c)

{
  char cVar1;
  
  cVar1 = c + ' ';
  if (0x19 < (byte)(c + 0xbfU)) {
    cVar1 = c;
  }
  return cVar1;
}



/* Function: process_short @ 00101160 */

short process_short(short a,short b)

{
  return a + b;
}



/* Function: process_int @ 00101170 */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 00101180 */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 00101190 */

longlong process_ll(longlong x)

{
  return x * x;
}



/* Function: process_float @ 001011a0 */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 001011c0 */

double process_double(double d)

{
  return d * 0.5 + 0.1;
}



/* Function: process_ld @ 001011e0 */

longdouble * process_ld(longdouble *__return_storage_ptr__,longdouble d)

{
  longdouble *in_RAX;
  
  return in_RAX;
}



/* Function: process_bool @ 001011f0 */

_Bool process_bool(int x)

{
  return (x & 1U) == 0 && 0 < x;
}



/* Function: const_param @ 00101200 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 00101210 */

int volatile_access(int *p)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00101220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
                    /* Unresolved local var: int vol_value@[???]
                       Unresolved local var: int value@[???] */
  puts(&DAT_001025bf);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n",10000);
  printf("DT-L1-06 (process_float): %.2f\n",0x400c000000000000);
  printf("DT-L1-07 (process_double): %.2f\n",0x4000cccccccccccd);
  printf("DT-L1-08 (process_ld): %.2Lf\n");
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
                    /* Unresolved local var: int a@[???] */
  printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 00101350 */

int array_1d_stack(int *arr,int n)

{
  int iVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + arr[uVar2];
      uVar2 = uVar2 + 1;
    } while ((uint)n != uVar2);
    return iVar1;
  }
  return 0;
}



/* Function: array_string @ 00101370 */

int array_string(char *str)

{
  char cVar1;
  int iVar2;
  
                    /* Unresolved local var: int len@[DW_OP_breg0(RAX): 0; DW_OP_constu: 4294967295;
                       DW_OP_and; DW_OP_consts: -1; DW_OP_minus; DW_OP_consts: +1; DW_OP_plus;
                       DW_OP_stack_value] */
  iVar2 = -1;
  do {
    iVar2 = iVar2 + 1;
    cVar1 = *str;
    str = str + 1;
  } while (cVar1 != '\0');
  return iVar2;
}



/* Function: array_2d_stack @ 00101390 */

int array_2d_stack(int (*arr) [10])

{
  int iVar1;
  long lVar2;
  
                    /* Unresolved local var: int sum@[???] */
  lVar2 = 0;
  iVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  do {
    iVar1 = iVar1 + *(int *)((long)*arr + lVar2);
    lVar2 = lVar2 + 0x2c;
  } while (lVar2 != 0x1b8);
  return iVar1;
}



/* Function: array_3d @ 001013c0 */

int array_3d(int (*arr) [5] [5])

{
  int iVar1;
  long lVar2;
  int (*paiVar3) [5];
  long lVar4;
  long lVar5;
  
                    /* Unresolved local var: int sum@[???] */
  lVar5 = 0;
  iVar1 = 0;
  do {
    lVar4 = 0;
    paiVar3 = *arr;
    do {
      lVar2 = 0;
                    /* Unresolved local var: int i@[DW_OP_reg8(R8)]
                       Unresolved local var: int j@[DW_OP_reg4(RSI)]
                       Unresolved local var: int k@[DW_OP_reg2(RCX)] */
      do {
        iVar1 = iVar1 + (*(int (*) [5])*paiVar3)[lVar2];
        lVar2 = lVar2 + 1;
      } while (lVar2 != 5);
      lVar4 = lVar4 + 1;
      paiVar3 = paiVar3 + 1;
    } while (lVar4 != 5);
    lVar5 = lVar5 + 1;
    arr = (int (*) [5] [5])((long)arr + 100);
  } while (lVar5 != 5);
  return iVar1;
}



/* Function: array_vla @ 00101420 */

int array_vla(int n,int *arr)

{
  int iVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + arr[uVar2];
      uVar2 = uVar2 + 1;
    } while ((uint)n != uVar2);
    return iVar1;
  }
  return 0;
}



/* Function: array_pointer @ 00101440 */

int array_pointer(int (*arr) [10],int n)

{
  int iVar1;
  long lVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)((long)*arr + lVar2);
      lVar2 = lVar2 + 0x28;
    } while ((ulong)(uint)n * 0x28 != lVar2);
    return iVar1;
  }
  return 0;
}



/* Function: pointer_array @ 00101470 */

int pointer_array(int **arr,int n)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int count@[???]
                       Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    uVar1 = 10;
    if (n < 10) {
      uVar1 = n;
    }
    uVar3 = 1;
    if (1 < (int)uVar1) {
      uVar3 = (ulong)uVar1;
    }
    uVar4 = 0;
    iVar2 = 0;
    do {
      if (arr[uVar4] != (int *)0x0) {
        iVar2 = iVar2 + *arr[uVar4];
      }
      uVar4 = uVar4 + 1;
    } while (uVar3 != uVar4);
  }
  return iVar2;
}



/* Function: array_complex_index @ 001014b0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int iVar1;
  
  iVar1 = -1;
  if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
    iVar1 = arr[y * w + x];
  }
  return iVar1;
}



/* Function: array_oob @ 001014e0 */

int array_oob(int *arr,int n)

{
  int iVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (-1 < n) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + arr[uVar2];
      uVar2 = uVar2 + 1;
    } while (n + 1 != uVar2);
    return iVar1;
  }
  return 0;
}



/* Function: test_array_types @ 00101500 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined4 local_514;
  undefined4 local_510;
  undefined4 local_50c;
  undefined4 *local_508 [10];
  uint auStack_4b8 [20];
  int aiStack_468 [52];
  undefined1 local_398 [400];
  undefined1 local_208 [512];
  
                    /* Unresolved local var: int[10][10] matrix@[???]
                       Unresolved local var: int[5][5][5] cube@[???]
                       Unresolved local var: int[5][10] arr2@[???]
                       Unresolved local var: int *[10] ptr_arr@[???]
                       Unresolved local var: int[20] flat@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int[5] arr1@[???]
                       Unresolved local var: char[6] str@[???]
                       Unresolved local var: int[3] vla_arr@[???] */
  puts(&DAT_001025e0);
  lVar5 = 0;
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n");
  puVar1 = local_398;
  do {
    lVar2 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg3(RBX)]
                       Unresolved local var: int j@[DW_OP_reg2(RCX)] */
      uVar4 = 0;
      if (lVar5 == lVar2) {
        uVar4 = (undefined4)lVar5;
      }
      *(undefined4 *)(puVar1 + lVar2 * 4) = uVar4;
      lVar2 = lVar2 + 1;
    } while (lVar2 != 10);
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 0x28;
  } while (lVar5 != 10);
  lVar5 = 0;
  do {
                    /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
                       Unresolved local var: int i@[???] */
    lVar5 = lVar5 + 0x2c;
  } while (lVar5 != 0x1b8);
  lVar5 = 0;
  printf("ARR-L1-03 (array_2d_stack): %d\n");
  puVar1 = local_208;
  do {
    lVar2 = 0;
    puVar3 = puVar1;
    do {
      lVar6 = 0;
      do {
                    /* Unresolved local var: int i@[DW_OP_reg3(RBX)]
                       Unresolved local var: int j@[DW_OP_reg1(RDX)]
                       Unresolved local var: int k@[DW_OP_reg4(RSI)] */
        *(undefined4 *)(puVar3 + lVar6 * 4) = 1;
        lVar6 = lVar6 + 1;
      } while (lVar6 != 5);
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 0x14;
    } while (lVar2 != 5);
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 100;
  } while (lVar5 != 5);
  lVar5 = 0;
  puVar1 = local_208;
  uVar7 = 0;
  do {
    lVar2 = 0;
    puVar3 = puVar1;
    do {
      lVar6 = 0;
      do {
                    /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
                       Unresolved local var: int i@[DW_OP_reg0(RAX)]
                       Unresolved local var: int j@[DW_OP_reg5(RDI)]
                       Unresolved local var: int k@[DW_OP_reg3(RBX)] */
        uVar7 = (ulong)(uint)((int)uVar7 + *(int *)(puVar3 + lVar6 * 4));
        lVar6 = lVar6 + 1;
      } while (lVar6 != 5);
      lVar2 = lVar2 + 1;
      puVar3 = puVar3 + 0x14;
    } while (lVar2 != 5);
    lVar5 = lVar5 + 1;
    puVar1 = puVar1 + 100;
  } while (lVar5 != 5);
  lVar5 = 0;
  printf("ARR-L1-04 (array_3d): %d\n",uVar7);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  do {
    aiStack_468[lVar5] = (int)lVar5;
    lVar5 = lVar5 + 10;
  } while (lVar5 != 0x32);
  lVar5 = 0;
  uVar7 = 0;
  do {
                    /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
                       Unresolved local var: int i@[???] */
    uVar7 = (ulong)(uint)((int)uVar7 + *(int *)((long)aiStack_468 + lVar5));
    lVar5 = lVar5 + 0x28;
  } while (lVar5 != 200);
  lVar5 = 0;
  printf("ARR-L2-02 (array_pointer): %d\n",uVar7);
  local_50c = 10;
  local_510 = 0x14;
  local_514 = 0x1e;
  local_508[0] = &local_50c;
  local_508[1] = &local_510;
  local_508[2] = &local_514;
  local_508[3] = (undefined4 *)0x0;
  local_508[4] = (undefined4 *)0x0;
  local_508[5] = (undefined4 *)0x0;
  local_508[6] = (undefined4 *)0x0;
  local_508[7] = (undefined4 *)0x0;
  local_508[8] = (undefined4 *)0x0;
  local_508[9] = (undefined4 *)0x0;
  uVar7 = 0;
  do {
    if (local_508[lVar5] != (int *)0x0) {
      uVar7 = (ulong)(uint)((int)uVar7 + *local_508[lVar5]);
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  lVar5 = 0;
  printf("ARR-L2-03 (pointer_array): %d\n",uVar7);
                    /* Unresolved local var: int i@[DW_OP_reg3(RBX)] */
  do {
    auStack_4b8[lVar5] = (uint)lVar5;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x14);
  printf("ARR-L2-04 (array_complex_index): %d\n",(ulong)auStack_4b8[0x11]);
  return;
}



/* Function: ptr_single @ 00101790 */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 001017a0 */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 001017b0 */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 001017c0 */

int ptr_increment(int *p,int n)

{
  int iVar1;
  long lVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + p[lVar2];
      lVar2 = lVar2 + 1;
    } while (n != (int)lVar2);
    return iVar1;
  }
  return 0;
}



/* Function: ptr_offset @ 001017e0 */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 001017f0 */

int ptr_diff(int *p1,int *p2)

{
  return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 00101800 */

int ptr_void(void *p,int type)

{
  int iVar1;
  
  if (type == 1) {
    iVar1 = (int)*(char *)p;
  }
  else {
    iVar1 = -1;
    if (type == 0) {
      return *(int *)p;
    }
  }
  return iVar1;
}



/* Function: ptr_const @ 00101820 */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 00101830 */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00101840 */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00101850 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
                    /* Unresolved local var: char *[2] args@[???] */
  local_18 = 0x102270;
  uStack_14 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  iVar1 = (*f)(p,(char **)&local_18);
  return iVar1;
}



/* Function: ptr_cast @ 00101880 */

int ptr_cast(void *p)

{
                    /* Unresolved local var: int * int_ptr@[DW_OP_reg5(RDI)]
                       Unresolved local var: char * char_ptr@[DW_OP_reg5(RDI)]
                       Unresolved local var: int * back_ptr@[DW_OP_reg5(RDI)] */
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00101890 */

void * opaque_handle_create(int size)

{
  return (void *)(long)size;
}



/* Function: opaque_handle_op @ 001018a0 */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: test_pointer_types @ 001018b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  long lVar1;
  ulong uVar2;
  int local_28 [8];
  
                    /* Unresolved local var: int[5] arr4@[???]
                       Unresolved local var: int val1@[???]
                       Unresolved local var: int val2@[???]
                       Unresolved local var: int val3@[???]
                       Unresolved local var: int[5] arr5@[???]
                       Unresolved local var: int val7@[???]
                       Unresolved local var: char c7@[???]
                       Unresolved local var: int val8@[???]
                       Unresolved local var: int val9@[???]
                       Unresolved local var: int val11@[???]
                       Unresolved local var: int val12@[???]
                       Unresolved local var: int * ptr2@[???]
                       Unresolved local var: int * * pptr2@[???]
                       Unresolved local var: int * ptr3@[???]
                       Unresolved local var: int * * pptr3@[???]
                       Unresolved local var: int * * * ppptr3@[???]
                       Unresolved local var: int[5] arr6@[???]
                       Unresolved local var: void * handle@[???] */
  puts(&DAT_001025fb);
  lVar1 = 0;
  printf("PTR-L2-01 (ptr_single): %d\n",0xf);
  printf("PTR-L2-02 (ptr_double): %d\n",0xf);
  printf("PTR-L2-03 (ptr_triple): %d\n",6);
  local_28[4] = 5;
  local_28[0] = 1;
  local_28[1] = 2;
  local_28[2] = 3;
  local_28[3] = 4;
  uVar2 = 0;
                    /* Unresolved local var: int sum@[DW_OP_reg4(RSI)]
                       Unresolved local var: int i@[???] */
  do {
    uVar2 = (ulong)(uint)((int)uVar2 + local_28[lVar1]);
    lVar1 = lVar1 + 1;
  } while ((int)lVar1 != 5);
  printf("PTR-L2-04 (ptr_increment): %d\n",uVar2);
  printf("PTR-L2-05 (ptr_offset): %d\n",0x1e);
  printf("PTR-L2-06 (ptr_diff): %d\n",4);
  printf("PTR-L2-07 (ptr_void): %d\n",0x2a);
  printf("PTR-L2-07 (ptr_void): %d\n",0x41);
  printf("PTR-L2-08 (ptr_const): %d\n",0x14);
  printf("PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  printf("PTR-L2-10 (ptr_func_simple): %d\n",10);
  printf("PTR-L2-11 (ptr_func_complex): %d\n",1);
  printf("PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return;
}



/* Function: struct_simple @ 00101a00 */

int struct_simple(Point3D *p)

{
  return p->y + p->x + p->z;
}



/* Function: struct_array @ 00101a10 */

int struct_array(Point3D *pts,int n)

{
  int iVar1;
  long lVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *(int *)((long)&pts->x + lVar2) + *(int *)((long)&pts->y + lVar2) +
              *(int *)((long)&pts->z + lVar2);
      lVar2 = lVar2 + 0xc;
    } while ((ulong)(uint)n * 0xc != lVar2);
    return iVar1;
  }
  return 0;
}



/* Function: struct_nested @ 00101a50 */

int struct_nested(Rect *r)

{
  return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00101a60 */

int struct_deep(Widget *w)

{
  return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00101a70 */

int struct_with_ptr(Node *node)

{
  if (node->next != (Node *)0x0) {
    return node->next->data + node->data;
  }
  return node->data;
}



/* Function: struct_bitfields @ 00101a90 */

int struct_bitfields(Flags *f)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)f;
  return (uint)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 00101ac0 */

int union_type(UnionData *u,int type)

{
  if (type == 1) {
    return (int)u->f;
  }
  if (type == 0) {
    return u->i;
  }
  return (int)u->bytes[0];
}



/* Function: union_array @ 00101ae0 */

int union_array(UnionData *arr,int n)

{
  int iVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + arr[uVar2].i;
      uVar2 = uVar2 + 1;
    } while ((uint)n != uVar2);
    return iVar1;
  }
  return 0;
}



/* Function: enum_type @ 00101b00 */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00101b10 */

int enum_switch(State s)

{
  int iVar1;
  
  iVar1 = -99;
  if (s < 4) {
    iVar1 = *(int *)(&DAT_00102680 + (long)(int)s * 4);
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 00101b30 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00101b40 */

int linked_list(Node *head)

{
  int iVar1;
  
                    /* Unresolved local var: Node * current@[DW_OP_reg5(RDI)]
                       Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (; head != (Node *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00101b60 */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
                    /* Unresolved local var: DNode * current@[DW_OP_reg5(RDI)]
                       Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (; head != (DNode *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00101b80 */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (root != (TreeNode *)0x0) {
    iVar1 = root->data;
    iVar2 = binary_tree_sum(root->left);
    iVar3 = binary_tree_sum(root->right);
    return iVar3 + iVar2 + iVar1;
  }
  return 0;
}



/* Function: binary_tree @ 00101bb0 */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00101bc0 */

int graph_traverse(Graph *g)

{
  Edge *pEVar1;
  int iVar2;
  ulong uVar3;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (g->numVertices < 1) {
    iVar2 = 0;
  }
  else {
    uVar3 = 0;
    iVar2 = 0;
    do {
                    /* Unresolved local var: Edge * edge@[???] */
      for (pEVar1 = g->adjList[uVar3]; pEVar1 != (Edge *)0x0; pEVar1 = pEVar1->next) {
        iVar2 = iVar2 + pEVar1->dest;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != (uint)g->numVertices);
  }
  return iVar2;
}



/* Function: test_composite_types @ 00101c00 */

/* WARNING: Variable defined which should be unmapped: sum */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int *piVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  int local_f8 [2];
  undefined4 *local_f0;
  undefined4 local_e8 [2];
  undefined4 *local_e0;
  undefined4 local_d8 [2];
  undefined8 local_d0;
  int local_c8 [2];
  undefined4 *local_c0;
  undefined8 local_b8;
  undefined4 local_b0 [2];
  undefined8 local_a8;
  int *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  TreeNode local_88;
  undefined8 *local_68 [11];
  int sum;
  
                    /* Unresolved local var: Node[3] list@[???]
                       Unresolved local var: DNode[2] dlist@[???]
                       Unresolved local var: TreeNode tree@[???]
                       Unresolved local var: Edge e1@[???]
                       Unresolved local var: Graph g@[???]
                       Unresolved local var: Point3D p1@[???]
                       Unresolved local var: Rect r@[???]
                       Unresolved local var: Widget w@[???]
                       Unresolved local var: Node node1@[???]
                       Unresolved local var: UnionData u@[???]
                       Unresolved local var: Device dev@[???]
                       Unresolved local var: Point3D[2] pts@[???]
                       Unresolved local var: Node node2@[???]
                       Unresolved local var: Flags f@[???]
                       Unresolved local var: UnionData[3] arr_u@[???] */
  piVar1 = local_f8;
  puts(&DAT_00102616);
  uVar2 = 0;
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
  local_f8[0] = 10;
  local_f0 = local_e8;
  local_e8[0] = 0x14;
  local_e0 = local_d8;
  local_d8[0] = 0x1e;
  local_d0 = 0;
  do {
    uVar2 = uVar2 + *piVar1;
    piVar1 = *(int **)(piVar1 + 2);
  } while (piVar1 != (int *)0x0);
  uVar4 = 0;
  printf("CMP-L2-12 (linked_list): %d\n",(ulong)uVar2);
  piVar1 = local_c8;
  local_c8[0] = 10;
  local_c0 = local_b0;
  local_b8 = 0;
  local_b0[0] = 0x14;
  local_a8 = 0;
  local_a0 = piVar1;
                    /* Unresolved local var: DNode * current@[DW_OP_reg0(RAX)] */
  do {
    uVar4 = uVar4 + *piVar1;
    piVar1 = *(int **)(piVar1 + 2);
  } while (piVar1 != (int *)0x0);
  lVar3 = 0;
  printf("CMP-L2-13 (doubly_linked_list): %d\n",(ulong)uVar4);
  local_88.right = (TreeNode *)0x0;
  local_88.data = 100;
  local_88._4_4_ = 0;
  local_88.left = (TreeNode *)0x0;
  uVar2 = binary_tree_sum(&local_88);
  printf("CMP-L2-14 (binary_tree): %d\n",(ulong)uVar2);
  local_98 = 1;
  uStack_90 = 0;
  local_68[1] = (undefined8 *)0x0;
  local_68[8] = (undefined8 *)0x0;
  local_68[9] = (undefined8 *)0x0;
  local_68[6] = (undefined8 *)0x0;
  local_68[7] = (undefined8 *)0x0;
  local_68[4] = (undefined8 *)0x0;
  local_68[5] = (undefined8 *)0x0;
  local_68[2] = (undefined8 *)0x0;
  local_68[3] = (undefined8 *)0x0;
  local_68[0] = &local_98;
  local_68[10] = (undefined8 *)0x2;
  uVar5 = 0;
  do {
                    /* Unresolved local var: Edge * edge@[???] */
    for (piVar1 = (int *)local_68[lVar3]; piVar1 != (int *)0x0; piVar1 = *(int **)(piVar1 + 2)) {
      uVar5 = (ulong)(uint)((int)uVar5 + *piVar1);
    }
    lVar3 = lVar3 + 1;
  } while (lVar3 != 2);
  printf("CMP-L2-15 (graph_traverse): %d\n",uVar5);
  return;
}



/* Function: main @ 00101e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: _fini @ 00101eac */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 62 */
