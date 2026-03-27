/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_clang_O3_g
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



/* Function: _start @ 00011080 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000110b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000110c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000110db) */
/* WARNING: Removing unreachable block (ram,0x000110e5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011100 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112e) */
/* WARNING: Removing unreachable block (ram,0x00011138) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111ac) */
/* WARNING: Removing unreachable block (ram,0x000111b0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000111e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000111ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: process_char @ 00011200 */

char process_char(char c)

{
  char cVar1;
  
  cVar1 = c + ' ';
  if (0x19 < (byte)(c + 0xbfU)) {
    cVar1 = c;
  }
  return cVar1;
}



/* Function: process_short @ 00011220 */

short process_short(short a,short b)

{
  return b + a;
}



/* Function: process_int @ 00011230 */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 00011240 */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 00011250 */

longlong process_ll(longlong x)

{
  longlong lVar1;
  
  lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + x._4_4_ * (int)x * 2,(int)lVar1);
}



/* Function: process_float @ 00011270 */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011290 */

double process_double(double d)

{
  return d * 0.5 + 0.1;
}



/* Function: process_ld @ 000112b0 */

longdouble * process_ld(longdouble *__return_storage_ptr__,longdouble d)

{
  longdouble *in_EAX;
  
  return in_EAX;
}



/* Function: process_bool @ 000112c0 */

_Bool process_bool(int x)

{
  return (x & 1U) == 0 && 0 < x;
}



/* Function: const_param @ 000112e0 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 000112f0 */

int volatile_access(int *p)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00011300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  longdouble lVar1;
  
                    /* Unresolved local var: int vol_value@[???]
                       Unresolved local var: int value@[???] */
  puts(&DAT_000135bf);
  printf("DT-L1-01 (process_char): %c\n",0x61);
  printf("DT-L1-01 (process_char): %c\n",0x62);
  printf("DT-L1-02 (process_short): %d\n",300);
  printf("DT-L1-03 (process_int): %d\n",0xb);
  printf("DT-L1-04 (process_long): %ld\n",200);
  printf("DT-L1-05 (process_ll): %lld\n",10000,0);
  printf("DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
  printf("DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
  lVar1 = (longdouble)10.0;
  printf("DT-L1-08 (process_ld): %.2Lf\n",SUB104(lVar1,0),(int)((unkuint10)lVar1 >> 0x20),
         (short)((unkuint10)lVar1 >> 0x40));
  printf("DT-L1-09 (process_bool): %d\n",1);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-09 (process_bool): %d\n",0);
  printf("DT-L1-10 (const_param): %d\n",0xf);
                    /* Unresolved local var: int a@[???] */
  printf("DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 00011430 */

int array_1d_stack(int *arr,int n)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    if (n - 1U < 7) {
      uVar2 = 0;
      iVar1 = 0;
    }
    else {
      uVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + arr[uVar2] + arr[uVar2 + 1] + arr[uVar2 + 2] + arr[uVar2 + 3] +
                arr[uVar2 + 4] + arr[uVar2 + 5] + arr[uVar2 + 6] + arr[uVar2 + 7];
        uVar2 = uVar2 + 8;
      } while ((n & 0xfffffff8U) != uVar2);
    }
    if ((n & 7U) != 0) {
      uVar3 = 0;
      do {
        iVar1 = iVar1 + arr[uVar2 + uVar3];
        uVar3 = uVar3 + 1;
      } while ((n & 7U) != uVar3);
    }
  }
  return iVar1;
}



/* Function: array_string @ 000114a0 */

int array_string(char *str)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int len@[DW_OP_breg0(EAX): +2; DW_OP_stack_value] */
  iVar2 = -1;
  do {
    iVar1 = iVar2 + 1;
    iVar2 = iVar2 + 1;
  } while (str[iVar1] != '\0');
  return iVar2;
}



/* Function: array_2d_stack @ 000114c0 */

int array_2d_stack(int (*arr) [10])

{
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  return arr[1][1] + (*arr)[0] + arr[2][2] + arr[3][3] + arr[4][4] + arr[5][5] + arr[6][6] +
         arr[7][7] + arr[8][8] + arr[9][9];
}



/* Function: array_3d @ 00011500 */

int array_3d(int (*arr) [5] [5])

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + *(int *)((int)(*arr)[0] + iVar2) + *(int *)((int)(*arr)[0] + iVar2 + 4) +
            *(int *)((int)(*arr)[0] + iVar2 + 8) + *(int *)((int)(*arr)[0] + iVar2 + 0xc) +
            *(int *)((int)(*arr)[0] + iVar2 + 0x10) + *(int *)((int)(*arr)[1] + iVar2) +
            *(int *)((int)(*arr)[1] + iVar2 + 4) + *(int *)((int)(*arr)[1] + iVar2 + 8) +
            *(int *)((int)(*arr)[1] + iVar2 + 0xc) + *(int *)((int)(*arr)[1] + iVar2 + 0x10) +
            *(int *)((int)(*arr)[2] + iVar2) + *(int *)((int)(*arr)[2] + iVar2 + 4) +
            *(int *)((int)(*arr)[2] + iVar2 + 8) + *(int *)((int)(*arr)[2] + iVar2 + 0xc) +
            *(int *)((int)(*arr)[2] + iVar2 + 0x10) + *(int *)((int)(*arr)[3] + iVar2) +
            *(int *)((int)(*arr)[3] + iVar2 + 4) + *(int *)((int)(*arr)[3] + iVar2 + 8) +
            *(int *)((int)(*arr)[3] + iVar2 + 0xc) + *(int *)((int)(*arr)[3] + iVar2 + 0x10) +
            *(int *)((int)(*arr)[4] + iVar2) + *(int *)((int)(*arr)[4] + iVar2 + 4) +
            *(int *)((int)(*arr)[4] + iVar2 + 8) + *(int *)((int)(*arr)[4] + iVar2 + 0xc) +
            *(int *)((int)(*arr)[4] + iVar2 + 0x10);
    iVar2 = iVar2 + 100;
  } while (iVar2 != 500);
  return iVar1;
}



/* Function: array_vla @ 00011580 */

int array_vla(int n,int *arr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    if (n - 1U < 7) {
      uVar2 = 0;
      iVar1 = 0;
    }
    else {
      uVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + arr[uVar2] + arr[uVar2 + 1] + arr[uVar2 + 2] + arr[uVar2 + 3] +
                arr[uVar2 + 4] + arr[uVar2 + 5] + arr[uVar2 + 6] + arr[uVar2 + 7];
        uVar2 = uVar2 + 8;
      } while ((n & 0xfffffff8U) != uVar2);
    }
    if ((n & 7U) != 0) {
      uVar3 = 0;
      do {
        iVar1 = iVar1 + arr[uVar2 + uVar3];
        uVar3 = uVar3 + 1;
      } while ((n & 7U) != uVar3);
    }
  }
  return iVar1;
}



/* Function: array_pointer @ 000115f0 */

int array_pointer(int (*arr) [10],int n)

{
  int iVar1;
  int (*paiVar2) [10];
  uint uVar3;
  int iVar4;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    if (n - 1U < 3) {
      uVar3 = 0;
      iVar1 = 0;
    }
    else {
      uVar3 = 0;
      iVar1 = 0;
      paiVar2 = arr;
      do {
        iVar1 = iVar1 + (*paiVar2)[0] + paiVar2[1][0] + paiVar2[2][0] + paiVar2[3][0];
        uVar3 = uVar3 + 4;
        paiVar2 = paiVar2 + 4;
      } while ((n & 0xfffffffcU) != uVar3);
    }
    if ((n & 3U) != 0) {
      iVar4 = 0;
      do {
        iVar1 = iVar1 + *(int *)((int)arr[uVar3] + iVar4);
        iVar4 = iVar4 + 0x28;
      } while ((n & 3U) * 0x28 != iVar4);
    }
  }
  return iVar1;
}



/* Function: pointer_array @ 00011660 */

int pointer_array(int **arr,int n)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* Unresolved local var: int count@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    uVar2 = 10;
    if ((uint)n < 10) {
      uVar2 = n;
    }
    if (uVar2 == 1) {
      uVar3 = 0;
      iVar1 = 0;
    }
    else {
      uVar3 = 0;
      iVar1 = 0;
      do {
        if (arr[uVar3] != (int *)0x0) {
          iVar1 = iVar1 + *arr[uVar3];
        }
        if (arr[uVar3 + 1] != (int *)0x0) {
          iVar1 = iVar1 + *arr[uVar3 + 1];
        }
        uVar3 = uVar3 + 2;
      } while ((uVar2 & 0xe) != uVar3);
    }
    if (((uVar2 & 1) != 0) && (arr[uVar3] != (int *)0x0)) {
      iVar1 = iVar1 + *arr[uVar3];
    }
    return iVar1;
  }
  return 0;
}



/* Function: array_complex_index @ 000116d0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int iVar1;
  
  iVar1 = -1;
  if ((((-1 < x) && (y < h)) && (x < w)) && (-1 < y)) {
    iVar1 = arr[y * w + x];
  }
  return iVar1;
}



/* Function: array_oob @ 00011710 */

int array_oob(int *arr,int n)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = n + 1U & 7;
    if ((uint)n < 7) {
      uVar3 = 0;
      iVar1 = 0;
    }
    else {
      uVar3 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + arr[uVar3] + arr[uVar3 + 1] + arr[uVar3 + 2] + arr[uVar3 + 3] +
                arr[uVar3 + 4] + arr[uVar3 + 5] + arr[uVar3 + 6] + arr[uVar3 + 7];
        uVar3 = uVar3 + 8;
      } while ((n + 1U & 0xfffffff8) != uVar3);
    }
    if (uVar2 != 0) {
      uVar4 = 0;
      do {
        iVar1 = iVar1 + arr[uVar3 + uVar4];
        uVar4 = uVar4 + 1;
      } while (uVar2 != uVar4);
    }
  }
  return iVar1;
}



/* Function: test_array_types @ 00011780 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  int iVar1;
  int local_1f8 [125];
  
                    /* Unresolved local var: int[10][10] matrix@[???]
                       Unresolved local var: int[5][5][5] cube@[???]
                       Unresolved local var: int[5][10] arr2@[???]
                       Unresolved local var: int *[10] ptr_arr@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int[20] flat@[???]
                       Unresolved local var: int[5] arr1@[???]
                       Unresolved local var: char[6] str@[???]
                       Unresolved local var: int[3] vla_arr@[???] */
  puts(&DAT_000135e0);
  printf("ARR-L1-01 (array_1d_stack): %d\n",0xf);
  printf("ARR-L1-02 (array_string): %d\n",5);
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  printf("ARR-L1-03 (array_2d_stack): %d\n",0x2d);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???]
                       Unresolved local var: int k@[???] */
    *(undefined4 *)((int)local_1f8 + iVar1) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 4) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 8) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0xc) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x10) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x14) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x18) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x1c) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x20) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x24) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x28) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x2c) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x30) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x34) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x38) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x3c) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x40) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x44) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x48) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x4c) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x50) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x54) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x58) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x5c) = 1;
    *(undefined4 *)((int)local_1f8 + iVar1 + 0x60) = 1;
    iVar1 = iVar1 + 100;
  } while (iVar1 != 500);
  iVar1 = array_3d((int (*) [5] [5])local_1f8);
  printf("ARR-L1-04 (array_3d): %d\n",iVar1);
  printf("ARR-L2-01 (array_vla): %d\n",0x3c);
  printf("ARR-L2-02 (array_pointer): %d\n",100);
  printf("ARR-L2-03 (pointer_array): %d\n",0x3c);
  printf("ARR-L2-04 (array_complex_index): %d\n",0x11);
  return;
}



/* Function: ptr_single @ 00011dc0 */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 00011dd0 */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 00011de0 */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00011df0 */

int ptr_increment(int *p,int n)

{
  int iVar1;
  uint uVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if (n - 1U < 7) {
      iVar1 = 0;
    }
    else {
      uVar2 = n & 0xfffffff8;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + *p + p[1] + p[2] + p[3] + p[4] + p[5] + p[6] + p[7];
        p = p + 8;
        uVar2 = uVar2 - 8;
      } while (uVar2 != 0);
    }
    if ((n & 7U) != 0) {
      uVar2 = 0;
      do {
        iVar1 = iVar1 + p[uVar2];
        uVar2 = uVar2 + 1;
      } while ((n & 7U) != uVar2);
    }
    return iVar1;
  }
  return 0;
}



/* Function: ptr_offset @ 00011e60 */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00011e70 */

int ptr_diff(int *p1,int *p2)

{
  return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011e80 */

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



/* Function: ptr_const @ 00011ea0 */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 00011eb0 */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00011ec0 */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00011ee0 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  char *local_c;
  undefined4 local_8;
  
                    /* Unresolved local var: char *[2] args@[???] */
  local_c = "test";
  local_8 = 0;
  iVar1 = (*f)(p,&local_c);
  return iVar1;
}



/* Function: ptr_cast @ 00011f20 */

int ptr_cast(void *p)

{
                    /* Unresolved local var: int * back_ptr@[???]
                       Unresolved local var: char * char_ptr@[???]
                       Unresolved local var: int * int_ptr@[???] */
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00011f30 */

void * opaque_handle_create(int size)

{
  return (void *)size;
}



/* Function: opaque_handle_op @ 00011f40 */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: test_pointer_types @ 00011f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
                    /* Unresolved local var: int val1@[???]
                       Unresolved local var: int val2@[???]
                       Unresolved local var: int val3@[???]
                       Unresolved local var: int[5] arr4@[???]
                       Unresolved local var: int[5] arr5@[???]
                       Unresolved local var: char c7@[???]
                       Unresolved local var: int val7@[???]
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
  puts(&DAT_000135fb);
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
  printf("PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return;
}



/* Function: struct_simple @ 000120b0 */

int struct_simple(Point3D *p)

{
  return p->y + p->x + p->z;
}



/* Function: struct_array @ 000120c0 */

int struct_array(Point3D *pts,int n)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    if (n == 1) {
      uVar2 = 0;
      iVar1 = 0;
    }
    else {
      piVar3 = &pts[1].z;
      uVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + piVar3[-5] + piVar3[-4] + piVar3[-3] + ((Point3D *)(piVar3 + -2))->x +
                piVar3[-1] + *piVar3;
        uVar2 = uVar2 + 2;
        piVar3 = piVar3 + 6;
      } while ((n & 0xfffffffeU) != uVar2);
    }
    if ((n & 1U) != 0) {
      return iVar1 + pts[uVar2].x + pts[uVar2].y + pts[uVar2].z;
    }
  }
  return iVar1;
}



/* Function: struct_nested @ 00012130 */

int struct_nested(Rect *r)

{
  return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00012140 */

int struct_deep(Widget *w)

{
  return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00012150 */

int struct_with_ptr(Node *node)

{
  if (node->next != (Node *)0x0) {
    return node->next->data + node->data;
  }
  return node->data;
}



/* Function: struct_bitfields @ 00012170 */

int struct_bitfields(Flags *f)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)f;
  return (uint)(uVar1 >> 6) + (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7);
}



/* Function: union_type @ 000121a0 */

int union_type(UnionData *u,int type)

{
  if (type == 1) {
    return (int)ROUND(u->f);
  }
  if (type == 0) {
    return u->i;
  }
  return (int)u->bytes[0];
}



/* Function: union_array @ 000121f0 */

int union_array(UnionData *arr,int n)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar1 = 0;
  }
  else {
    if (n - 1U < 7) {
      uVar2 = 0;
      iVar1 = 0;
    }
    else {
      uVar2 = 0;
      iVar1 = 0;
      do {
        iVar1 = iVar1 + arr[uVar2].i + arr[uVar2 + 1].i + arr[uVar2 + 2].i + arr[uVar2 + 3].i +
                arr[uVar2 + 4].i + arr[uVar2 + 5].i + arr[uVar2 + 6].i + arr[uVar2 + 7].i;
        uVar2 = uVar2 + 8;
      } while ((n & 0xfffffff8U) != uVar2);
    }
    if ((n & 7U) != 0) {
      uVar3 = 0;
      do {
        iVar1 = iVar1 + arr[uVar2 + uVar3].i;
        uVar3 = uVar3 + 1;
      } while ((n & 7U) != uVar3);
    }
  }
  return iVar1;
}



/* Function: enum_type @ 00012260 */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00012270 */

int enum_switch(State s)

{
  int iVar1;
  
  iVar1 = -99;
  if (s < 4) {
    iVar1 = *(int *)(&DAT_00013640 + s * 4);
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 000122a0 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 000122d0 */

int linked_list(Node *head)

{
  int iVar1;
  
                    /* Unresolved local var: Node * current@[DW_OP_breg4(ESP): +4]
                       Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (; head != (Node *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 000122f0 */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
                    /* Unresolved local var: DNode * current@[DW_OP_breg4(ESP): +4]
                       Unresolved local var: int sum@[???] */
  iVar1 = 0;
  for (; head != (DNode *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00012310 */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  for (; root != (TreeNode *)0x0; root = root->right) {
    iVar1 = root->data;
    iVar2 = binary_tree_sum(root->left);
    iVar3 = iVar3 + iVar1 + iVar2;
  }
  return iVar3;
}



/* Function: binary_tree @ 00012350 */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00012380 */

int graph_traverse(Graph *g)

{
  uint uVar1;
  Edge *pEVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
                    /* Unresolved local var: int sum@[???] */
  uVar1 = g->numVertices;
                    /* Unresolved local var: int i@[???] */
  if (0 < (int)uVar1) {
    if (uVar1 == 1) {
      uVar6 = 0;
      iVar5 = 0;
    }
    else {
      iVar5 = 0;
      pEVar2 = g->adjList[0];
      uVar4 = 0;
      while( true ) {
        for (; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
          iVar5 = iVar5 + pEVar2->dest;
        }
        for (piVar3 = *(int **)((int)g->adjList + (uVar4 * 4 | 4)); piVar3 != (int *)0x0;
            piVar3 = (int *)piVar3[1]) {
          iVar5 = iVar5 + *piVar3;
        }
        uVar6 = uVar4 + 2;
        if (uVar6 == (uVar1 & 0xfffffffe)) break;
        pEVar2 = g->adjList[uVar4 + 2];
        uVar4 = uVar6;
      }
    }
                    /* Unresolved local var: Edge * edge@[???] */
    if ((uVar1 & 1) != 0) {
      for (pEVar2 = g->adjList[uVar6]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
        iVar5 = iVar5 + pEVar2->dest;
      }
    }
    return iVar5;
  }
  return 0;
}



/* Function: test_composite_types @ 00012420 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  int local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  TreeNode local_2c;
  int local_1c;
  undefined4 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
                    /* Unresolved local var: Node[3] list@[???]
                       Unresolved local var: DNode[2] dlist@[???]
                       Unresolved local var: TreeNode tree@[???]
                       Unresolved local var: Point3D p1@[???]
                       Unresolved local var: Rect r@[???]
                       Unresolved local var: Widget w@[???]
                       Unresolved local var: Node node2@[???]
                       Unresolved local var: Node node1@[???]
                       Unresolved local var: Flags f@[???]
                       Unresolved local var: UnionData u@[???]
                       Unresolved local var: Device dev@[???]
                       Unresolved local var: Edge e1@[???]
                       Unresolved local var: Graph g@[???]
                       Unresolved local var: Point3D[2] pts@[???]
                       Unresolved local var: UnionData[3] arr_u@[???] */
  puts(&DAT_00013616);
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
  piVar1 = &local_44;
  local_44 = 10;
  local_40 = &local_3c;
  local_3c = 0x14;
  local_38 = &local_34;
  local_34 = 0x1e;
  local_30 = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-12 (linked_list): %d\n",iVar2);
  piVar1 = &local_1c;
  local_1c = 10;
  local_14 = 0;
  local_10 = 0x14;
  local_c = 0;
  local_8 = piVar1;
  local_18 = &local_10;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  printf("CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
  local_2c.right = (TreeNode *)0x0;
  local_2c.left = (TreeNode *)0x0;
  local_2c.data = 100;
  iVar2 = binary_tree_sum(&local_2c);
  printf("CMP-L2-14 (binary_tree): %d\n",iVar2);
  iVar2 = 1;
  piVar1 = (int *)0x0;
                    /* Unresolved local var: int sum@[DW_OP_reg0(EAX)]
                       Unresolved local var: int i@[???]
                       Unresolved local var: Edge * edge@[???] */
  bVar3 = false;
  while (bVar3) {
    iVar2 = iVar2 + *piVar1;
    piVar1 = (int *)piVar1[1];
    bVar3 = piVar1 != (int *)0x0;
  }
  printf("CMP-L2-15 (graph_traverse): %d\n",iVar2);
  return;
}



/* Function: main @ 00012660 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __do_global_ctors_aux @ 00012690 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000126aa) */
/* WARNING: Removing unreachable block (ram,0x000126c0) */
/* WARNING: Removing unreachable block (ram,0x000126cd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000126dc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 67 */
