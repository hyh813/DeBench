/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/2/2_gcc_O2_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

char process_char(char c)

{
  if ((byte)(c + 0xbfU) < 0x1a) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 00100900 */

short process_short(short a,short b)

{
  return b + a;
}



/* Function: process_int @ 00100910 */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 00100920 */

long process_long(long x)

{
  return x << 1;
}



/* Function: process_ll @ 00100930 */

longlong process_ll(longlong x)

{
  return x * x;
}



/* Function: process_float @ 00100940 */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 00100950 */

double process_double(double d)

{
  return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00100964 */

long_double process_ld(long_double d)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  
  uVar2 = __multf3(SUB168(d,0),SUB168(d,0));
  auVar1 = __addtf3(uVar2,0);
  return (long_double)auVar1;
}



/* Function: process_bool @ 00100990 */

_Bool process_bool(int x)

{
  _Bool _Var1;
  
  _Var1 = (_Bool)(~(byte)x & 1);
  if (x < 1) {
    _Var1 = false;
  }
  return _Var1;
}



/* Function: const_param @ 001009a4 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 001009b0 */

int volatile_access(int *p)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return *p + *p;
}



/* Function: test_data_types_l1 @ 001009c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  int vol_value;
  
                    /* Unresolved local var: int value@[???] */
  puts(&DAT_00102d48);
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
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 00100b10 */

int array_1d_stack(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = arr + lVar3;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + *piVar1;
    } while ((int)lVar3 < n);
    return iVar2;
  }
  return 0;
}



/* Function: array_string @ 00100b50 */

int array_string(char *str)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  
                    /* Unresolved local var: int len@[???] */
  if (*str != '\0') {
    lVar3 = 1;
    do {
      iVar2 = (int)lVar3;
      pcVar1 = str + lVar3;
      lVar3 = lVar3 + 1;
    } while (*pcVar1 != '\0');
    return iVar2;
  }
  return 0;
}



/* Function: array_2d_stack @ 00100b80 */

int array_2d_stack(int (*arr) [10])

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar1 = 0;
  piVar2 = *arr;
  do {
    piVar3 = piVar2 + 0xb;
    iVar1 = iVar1 + *piVar2;
    piVar2 = piVar3;
  } while ((int (*) [10])piVar3 != arr + 0xb);
  return iVar1;
}



/* Function: array_3d @ 00100ba4 */

int array_3d(int (*arr) [5] [5])

{
  int (*paiVar1) [5];
  int (*paaiVar2) [5] [5];
  int iVar3;
  int (*paiVar4) [5];
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  paiVar4 = arr[1];
  iVar3 = 0;
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar1 = (int (*) [5])(paiVar4 + -5);
    do {
      paaiVar2 = (int (*) [5] [5])paiVar1;
                    /* Unresolved local var: int k@[???] */
      iVar3 = iVar3 + (*paaiVar2)[0][0] + (*paaiVar2)[0][1] + (*paaiVar2)[0][2] + (*paaiVar2)[0][3]
              + (*paaiVar2)[0][4];
      paiVar1 = *paaiVar2 + 1;
    } while (*paaiVar2 + 1 != paiVar4);
    paiVar4 = paaiVar2[1] + 1;
  } while (paiVar4 != arr[6]);
  return iVar3;
}



/* Function: array_vla @ 00100bf4 */

int array_vla(int n,int *arr)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      piVar1 = arr + lVar3;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + *piVar1;
    } while ((int)lVar3 < n);
    return iVar2;
  }
  return 0;
}



/* Function: array_pointer @ 00100c30 */

int array_pointer(int (*arr) [10],int n)

{
  int iVar1;
  int (*paiVar2) [10];
  int (*paiVar3) [10];
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    paiVar2 = arr;
    do {
      paiVar3 = paiVar2 + 1;
      iVar1 = iVar1 + (*paiVar2)[0];
      paiVar2 = paiVar3;
    } while (paiVar3 != arr + (ulong)(n - 1) + 1);
    return iVar1;
  }
  return 0;
}



/* Function: pointer_array @ 00100c70 */

int pointer_array(int **arr,int n)

{
  int **ppiVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int count@[???] */
  iVar2 = n;
  if (10 < n) {
    iVar2 = 10;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar4 = 0;
    iVar3 = 0;
    do {
      ppiVar1 = arr + lVar4;
      lVar4 = lVar4 + 1;
      if (*ppiVar1 != (int *)0x0) {
        iVar3 = iVar3 + **ppiVar1;
      }
    } while ((int)lVar4 < iVar2);
    return iVar3;
  }
  return 0;
}



/* Function: array_complex_index @ 00100cc0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  if ((-1 < (x | y) && x < w) && (y < h)) {
    return arr[x + w * y];
  }
  return -1;
}



/* Function: array_oob @ 00100cf0 */

int array_oob(int *arr,int n)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (-1 < n) {
    iVar1 = 0;
    piVar2 = arr;
    do {
      piVar3 = piVar2 + 1;
      iVar1 = iVar1 + *piVar2;
      piVar2 = piVar3;
    } while (piVar3 != arr + (long)n + 1);
    return iVar1;
  }
  return 0;
}



/* Function: test_array_types @ 00100d24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  int (*paiVar6) [5];
  int (*paaiVar7) [5] [5];
  int *piVar8;
  int iVar9;
  int (*paiVar10) [5];
  int arr1 [5];
  int flat [20];
  int matrix [10] [10];
  int cube [5] [5] [5];
  int iStack_14;
  char str [6];
  
                    /* Unresolved local var: int[3] vla_arr@[???]
                       Unresolved local var: int[5][10] arr2@[???]
                       Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int *[10] ptr_arr@[???] */
  lVar2 = ___stack_chk_guard;
  puts(&DAT_00102ed8);
                    /* Unresolved local var: int sum@[???] */
  iVar9 = 0;
  lVar5 = 1;
  do {
    lVar1 = lVar5 + 1;
    iVar9 = iVar9 + flat[lVar5 + -7];
    lVar5 = lVar1;
  } while (lVar1 != 6);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar9);
  pcVar4 = str;
                    /* Unresolved local var: int len@[???] */
  iVar9 = 0;
  builtin_strncpy(str,"hello",6);
  do {
    pcVar4 = pcVar4 + 1;
    iVar9 = iVar9 + 1;
  } while (*pcVar4 != '\0');
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar9);
                    /* Unresolved local var: int i@[???] */
  iVar9 = 0;
  paiVar10 = (int (*) [5])matrix;
  do {
                    /* Unresolved local var: int j@[???] */
    lVar5 = 0;
    do {
      iVar3 = (int)lVar5;
      if (iVar9 != iVar3) {
        iVar3 = 0;
      }
      (*paiVar10)[lVar5] = iVar3;
      lVar5 = lVar5 + 1;
    } while (lVar5 != 10);
    iVar9 = iVar9 + 1;
    paiVar10 = paiVar10 + 2;
  } while (iVar9 != 10);
                    /* Unresolved local var: int sum@[???] */
  iVar9 = 0;
  paiVar10 = (int (*) [5])matrix;
  do {
    paiVar6 = paiVar10 + 2;
                    /* Unresolved local var: int i@[???] */
    iVar9 = iVar9 + (*paiVar10)[0];
    paiVar10 = (int (*) [5])(*paiVar6 + 1);
  } while (cube[0] + 2 != (int (*) [5])(*paiVar6 + 1));
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar9);
                    /* Unresolved local var: int i@[???] */
  paiVar10 = cube[0];
                    /* Unresolved local var: int j@[???]
                       Unresolved local var: int k@[???] */
  do {
    iVar9 = 5;
    paiVar6 = paiVar10;
    do {
      (*(int (*) [5])*paiVar6)[0] = 1;
      (*(int (*) [5])*paiVar6)[1] = 1;
      iVar9 = iVar9 + -1;
      (*(int (*) [5])*paiVar6)[2] = 1;
      (*(int (*) [5])*paiVar6)[3] = 1;
      (*paiVar6)[4] = 1;
      paiVar6 = paiVar6 + 1;
    } while (iVar9 != 0);
    paiVar10 = paiVar10 + 5;
  } while (paiVar10 != (int (*) [5])&iStack_14);
  paiVar10 = cube[1];
                    /* Unresolved local var: int sum@[???] */
  iVar9 = 0;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
    paiVar6 = (int (*) [5])(paiVar10 + -5);
    do {
      paaiVar7 = (int (*) [5] [5])paiVar6;
                    /* Unresolved local var: int k@[???] */
      iVar9 = iVar9 + (*paaiVar7)[0][0] + (*paaiVar7)[0][1] + (*paaiVar7)[0][2] + (*paaiVar7)[0][3]
              + (*paaiVar7)[0][4];
      paiVar6 = *paaiVar7 + 1;
    } while (*paaiVar7 + 1 != paiVar10);
    paiVar10 = paaiVar7[1] + 1;
  } while (paiVar10 != (int (*) [5])&stack0x00000050);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar9);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
                    /* Unresolved local var: int i@[???] */
  iVar9 = 0;
  piVar8 = flat;
  do {
    *piVar8 = iVar9;
    iVar9 = iVar9 + 1;
    piVar8 = piVar8 + 1;
  } while (iVar9 != 0x14);
  if (lVar2 - ___stack_chk_guard == 0) {
    __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,lVar2 - ___stack_chk_guard);
}



/* Function: ptr_single @ 00100f64 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00100f70 */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 00100f80 */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00100f94 */

int ptr_increment(int *p,int n)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    piVar2 = p;
    do {
      piVar3 = piVar2 + 1;
      iVar1 = iVar1 + *piVar2;
      piVar2 = piVar3;
    } while (piVar3 != p + n);
    return iVar1;
  }
  return 0;
}



/* Function: ptr_offset @ 00100fc4 */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00100fd0 */

int ptr_diff(int *p1,int *p2)

{
  return (int)((ulong)((long)p1 - (long)p2) >> 2);
}



/* Function: ptr_void @ 00100fe0 */

int ptr_void(void *p,int type)

{
  if (type == 0) {
    return *(int *)p;
  }
  if (type == 1) {
    return (int)*(byte *)p;
  }
  return -1;
}



/* Function: ptr_const @ 00101004 */

int ptr_const(int *p)

{
  return *p << 1;
}



/* Function: ptr_const_ptr @ 00101010 */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00101024 */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0010102c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00101030 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  long lVar1;
  int iVar2;
  char *args [2];
  
  lVar1 = ___stack_chk_guard;
  args[0] = "test";
  args[1] = (char *)0x0;
  iVar2 = (*f)(p,args);
  if (lVar1 - ___stack_chk_guard == 0) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2,&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: ptr_cast @ 00101090 */

int ptr_cast(void *p)

{
                    /* Unresolved local var: int * int_ptr@[DW_OP_reg0(x0)]
                       Unresolved local var: char * char_ptr@[DW_OP_reg0(x0)]
                       Unresolved local var: int * back_ptr@[DW_OP_reg0(x0)] */
  return *(int *)p;
}



/* Function: opaque_handle_create @ 001010a0 */

void * opaque_handle_create(int size)

{
  return (void *)(long)size;
}



/* Function: opaque_handle_op @ 001010b0 */

int opaque_handle_op(void *handle)

{
  return (int)handle << 1;
}



/* Function: test_pointer_types @ 001010c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int *piVar1;
  int iVar3;
  int arr4 [5];
  int iStack_c;
  long local_8;
  int *piVar2;
  
                    /* Unresolved local var: int val1@[???]
                       Unresolved local var: int val2@[???]
                       Unresolved local var: int * ptr2@[???]
                       Unresolved local var: int * * pptr2@[???]
                       Unresolved local var: int val3@[???]
                       Unresolved local var: int * ptr3@[???]
                       Unresolved local var: int * * pptr3@[???]
                       Unresolved local var: int * * * ppptr3@[???]
                       Unresolved local var: int[5] arr5@[???]
                       Unresolved local var: int[5] arr6@[???]
                       Unresolved local var: int val7@[???]
                       Unresolved local var: char c7@[???]
                       Unresolved local var: int val8@[???]
                       Unresolved local var: int val9@[???]
                       Unresolved local var: int val11@[???]
                       Unresolved local var: int val12@[???]
                       Unresolved local var: void * handle@[???] */
  local_8 = ___stack_chk_guard;
  puts(&DAT_00103010);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
                    /* Unresolved local var: int sum@[???] */
  iVar3 = 0;
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  piVar1 = arr4;
  do {
    piVar2 = piVar1 + 1;
                    /* Unresolved local var: int i@[???] */
    iVar3 = iVar3 + *piVar1;
    piVar1 = piVar2;
  } while (piVar2 != &iStack_c);
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar3);
  __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
  __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
  __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
  __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",10);
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n");
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  if (local_8 - ___stack_chk_guard == 0) {
    __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}



/* Function: struct_simple @ 00101264 */

int struct_simple(Point3D *p)

{
  return p->x + p->y + p->z;
}



/* Function: struct_array @ 00101280 */

int struct_array(Point3D *pts,int n)

{
  Point3D *pPVar1;
  int iVar2;
  Point3D *pPVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar2 = 0;
    pPVar3 = pts;
    do {
      pPVar1 = pPVar3 + 1;
      iVar2 = iVar2 + pPVar3->x + pPVar3->y + pPVar3->z;
      pPVar3 = pPVar1;
    } while (pPVar1 != pts + (ulong)(n - 1) + 1);
    return iVar2;
  }
  return 0;
}



/* Function: struct_nested @ 001012d0 */

int struct_nested(Rect *r)

{
  return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 001012e0 */

int struct_deep(Widget *w)

{
  return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 001012f0 */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  iVar1 = node->data;
  if (node->next != (Node *)0x0) {
    iVar1 = iVar1 + node->next->data;
  }
  return iVar1;
}



/* Function: struct_bitfields @ 00101310 */

int struct_bitfields(Flags *f)

{
  uint uVar1;
  
  uVar1 = *(uint *)f;
  return (uVar1 & 1) + (uVar1 >> 1 & 3) + (uVar1 >> 3 & 7) + (uVar1 >> 6 & 0x3ff);
}



/* Function: union_type @ 00101334 */

int union_type(UnionData *u,int type)

{
  if (type == 0) {
    return u->i;
  }
  if (type != 1) {
    return (int)(byte)u->bytes[0];
  }
  return (int)u->f;
}



/* Function: union_array @ 00101360 */

int union_array(UnionData *arr,int n)

{
  UnionData *pUVar1;
  int iVar2;
  long lVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar3 = 0;
    iVar2 = 0;
    do {
      pUVar1 = arr + lVar3;
      lVar3 = lVar3 + 1;
      iVar2 = iVar2 + pUVar1->i;
    } while ((int)lVar3 < n);
    return iVar2;
  }
  return 0;
}



/* Function: enum_type @ 001013a0 */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 001013b0 */

int enum_switch(State s)

{
  if (s < 4) {
    return *(int *)(CSWTCH_62 + (ulong)s * 4);
  }
  return -99;
}



/* Function: struct_func_ptr @ 001013d4 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x001013e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 001013f0 */

int linked_list(Node *head)

{
  int iVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: Node * current@[???] */
  iVar1 = 0;
  for (; head != (Node *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00101414 */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: DNode * current@[???] */
  iVar1 = 0;
  for (; head != (DNode *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00101434 */

int binary_tree_sum(TreeNode *root)

{
  int *piVar1;
  int iVar2;
  TreeNode *pTVar3;
  int iVar4;
  TreeNode *pTVar5;
  TreeNode *pTVar6;
  TreeNode *pTVar7;
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
  TreeNode *pTVar18;
  TreeNode *pTVar19;
  TreeNode *pTVar20;
  int iVar21;
  TreeNode *pTVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  
  iVar10 = 0;
  do {
    if (root == (TreeNode *)0x0) {
      return iVar10;
    }
    pTVar5 = root->left;
    iVar12 = 0;
    iVar11 = root->data;
    if (pTVar5 != (TreeNode *)0x0) {
      do {
        pTVar6 = pTVar5->left;
        iVar14 = 0;
        iVar13 = pTVar5->data;
        if (pTVar6 != (TreeNode *)0x0) {
          do {
            pTVar7 = pTVar6->left;
            iVar16 = 0;
            iVar15 = pTVar6->data;
            if (pTVar7 != (TreeNode *)0x0) {
              do {
                do {
                  iVar17 = pTVar7->data;
                  pTVar18 = pTVar7->left;
                  iVar26 = 0;
                  if (pTVar18 != (TreeNode *)0x0) {
                    do {
                      pTVar20 = pTVar18->left;
                      iVar24 = 0;
                      iVar21 = pTVar18->data;
                      if (pTVar20 != (TreeNode *)0x0) {
                        do {
                          pTVar3 = pTVar20->left;
                          iVar8 = 0;
                          iVar27 = pTVar20->data;
                          if (pTVar3 != (TreeNode *)0x0) {
                            do {
                              iVar9 = pTVar3->data;
                              pTVar19 = pTVar3->left;
                              iVar25 = 0;
                              if (pTVar19 != (TreeNode *)0x0) {
                                do {
                                  pTVar22 = pTVar19->left;
                                  iVar4 = 0;
                                  iVar23 = pTVar19->data;
                                  if (pTVar22 != (TreeNode *)0x0) {
                                    do {
                                      iVar2 = binary_tree_sum(pTVar22->left);
                                      piVar1 = &pTVar22->data;
                                      pTVar22 = pTVar22->right;
                                      iVar4 = iVar4 + iVar2 + *piVar1;
                                    } while (pTVar22 != (TreeNode *)0x0);
                                    iVar23 = iVar23 + iVar4;
                                  }
                                  pTVar19 = pTVar19->right;
                                  iVar25 = iVar25 + iVar23;
                                } while (pTVar19 != (TreeNode *)0x0);
                                iVar9 = iVar9 + iVar25;
                              }
                              pTVar3 = pTVar3->right;
                              iVar8 = iVar8 + iVar9;
                            } while (pTVar3 != (TreeNode *)0x0);
                            iVar27 = iVar27 + iVar8;
                          }
                          pTVar20 = pTVar20->right;
                          iVar24 = iVar24 + iVar27;
                        } while (pTVar20 != (TreeNode *)0x0);
                        iVar21 = iVar21 + iVar24;
                      }
                      pTVar18 = pTVar18->right;
                      iVar26 = iVar26 + iVar21;
                    } while (pTVar18 != (TreeNode *)0x0);
                    iVar17 = iVar17 + iVar26;
                  }
                  pTVar7 = pTVar7->right;
                  iVar16 = iVar16 + iVar17;
                } while (pTVar7 != (TreeNode *)0x0);
                pTVar6 = pTVar6->right;
                iVar14 = iVar14 + iVar15 + iVar16;
                while( true ) {
                  if (pTVar6 == (TreeNode *)0x0) {
                    pTVar5 = pTVar5->right;
                    iVar12 = iVar12 + iVar13 + iVar14;
                    while( true ) {
                      if (pTVar5 == (TreeNode *)0x0) {
                        root = root->right;
                        iVar10 = iVar10 + iVar11 + iVar12;
                        while( true ) {
                          if (root == (TreeNode *)0x0) {
                            return iVar10;
                          }
                          pTVar5 = root->left;
                          iVar12 = 0;
                          iVar11 = root->data;
                          if (pTVar5 != (TreeNode *)0x0) break;
                          root = root->right;
                          iVar10 = iVar10 + iVar11;
                        }
                      }
                      pTVar6 = pTVar5->left;
                      iVar14 = 0;
                      iVar13 = pTVar5->data;
                      if (pTVar6 != (TreeNode *)0x0) break;
                      pTVar5 = pTVar5->right;
                      iVar12 = iVar12 + iVar13;
                    }
                  }
                  pTVar7 = pTVar6->left;
                  iVar16 = 0;
                  iVar15 = pTVar6->data;
                  if (pTVar7 != (TreeNode *)0x0) break;
                  pTVar6 = pTVar6->right;
                  iVar14 = iVar14 + iVar15;
                }
              } while( true );
            }
            pTVar6 = pTVar6->right;
            iVar14 = iVar14 + iVar15;
          } while (pTVar6 != (TreeNode *)0x0);
          iVar13 = iVar13 + iVar14;
        }
        pTVar5 = pTVar5->right;
        iVar12 = iVar12 + iVar13;
      } while (pTVar5 != (TreeNode *)0x0);
      iVar11 = iVar11 + iVar12;
    }
    root = root->right;
    iVar10 = iVar10 + iVar11;
  } while( true );
}



/* Function: binary_tree @ 00101670 */

int binary_tree(TreeNode *root)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (; root != (TreeNode *)0x0; root = root->right) {
    iVar1 = binary_tree_sum(root->left);
    iVar2 = iVar2 + iVar1 + root->data;
  }
  return iVar2;
}



/* Function: graph_traverse @ 001016b4 */

int graph_traverse(Graph *g)

{
  int iVar1;
  Edge *pEVar2;
  long lVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (g->numVertices < 1) {
    return 0;
  }
  lVar3 = 0;
  iVar1 = 0;
  do {
                    /* Unresolved local var: Edge * edge@[???] */
    for (pEVar2 = g->adjList[lVar3]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
      iVar1 = iVar1 + pEVar2->dest;
    }
    lVar3 = lVar3 + 1;
  } while ((int)lVar3 < g->numVertices);
  return iVar1;
}



/* Function: test_composite_types @ 00101700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  DNode *pDVar4;
  int iVar5;
  Node list [3];
  DNode dlist [2];
  
                    /* Unresolved local var: Point3D p1@[???]
                       Unresolved local var: Point3D[2] pts@[???]
                       Unresolved local var: Rect r@[???]
                       Unresolved local var: Widget w@[???]
                       Unresolved local var: Node node2@[???]
                       Unresolved local var: Node node1@[???]
                       Unresolved local var: Flags f@[???]
                       Unresolved local var: UnionData u@[???]
                       Unresolved local var: UnionData[3] arr_u@[???]
                       Unresolved local var: Device dev@[???]
                       Unresolved local var: TreeNode tree@[???]
                       Unresolved local var: Edge e1@[???]
                       Unresolved local var: Graph g@[???] */
  lVar1 = ___stack_chk_guard;
  puts(&DAT_001031e8);
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
  list[2].next = (Node *)0x0;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: Node * current@[???] */
  iVar5 = 10;
  iVar2 = 0;
  list[0].data = 10;
  list[1].data = 0x14;
  list[1].next = list + 2;
  list[2].data = 0x1e;
  list[0].next = list + 1;
  for (pNVar3 = list[0].next; iVar2 = iVar2 + iVar5, pNVar3 != (Node *)0x0; pNVar3 = pNVar3->next) {
    iVar5 = pNVar3->data;
  }
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar2);
  pDVar4 = dlist;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: DNode * current@[???] */
  iVar5 = 10;
  iVar2 = 0;
  dlist[0].data = 10;
  dlist[0].next = dlist + 1;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  dlist[1].prev = pDVar4;
  while( true ) {
    pDVar4 = pDVar4->next;
    iVar2 = iVar2 + iVar5;
    if (pDVar4 == (DNode *)0x0) break;
    iVar5 = pDVar4->data;
  }
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
  iVar2 = binary_tree_sum((TreeNode *)0x0);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar2 + 100);
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: Edge * edge@[???] */
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
  if (lVar1 - ___stack_chk_guard == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
}



/* Function: FUN_0010190c @ 0010190c */

undefined1  [16] FUN_0010190c(undefined1 param_1 [16],undefined1 param_2 [16])

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
                goto LAB_00101c30;
              }
              goto LAB_00101ee4;
            }
            goto LAB_00101b8c;
          }
          uVar8 = ~uVar8;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            uVar20 = uVar19;
            goto LAB_00101d48;
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
          goto LAB_00101d48;
        }
        if (uVar16 != 0 || uVar23 != 0) {
          uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
          uVar11 = uVar4 >> 0x32 ^ 1;
          uVar10 = uVar4 >> 3;
          goto LAB_00101df4;
        }
LAB_00101f78:
        uVar22 = 0;
        uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
        goto LAB_00101ac4;
      }
      uVar15 = uVar20 + 1;
      if ((uVar15 & 0x7ffe) == 0) {
        if (uVar20 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) {
              if (uVar19 != 0x7fff) goto LAB_00102200;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00101f78;
            }
            else {
              uVar11 = uVar3 >> 0x32 ^ 1;
              uVar8 = (uint)uVar11;
              if (uVar19 != 0x7fff) goto LAB_001023a8;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102440;
            }
LAB_0010246c:
            if ((uVar2 & 0x4000000000000) == 0) {
              uVar8 = 1;
            }
            uVar11 = (ulong)uVar8;
            if (uVar24 != 0 || uVar21 != 0) {
LAB_001023b0:
              uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
              uVar10 = uVar28 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
                uVar10 = uVar4 >> 3;
                uVar12 = uVar14;
              }
              goto LAB_00101df4;
            }
LAB_00102200:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
          }
          else {
            if (uVar19 == 0x7fff) {
              if (uVar16 != 0 || uVar23 != 0) goto LAB_0010246c;
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f78;
            }
            else {
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102200;
LAB_001023a8:
              if (uVar16 != 0 || uVar23 != 0) goto LAB_001023b0;
            }
LAB_00102440:
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
          }
          goto LAB_00101df4;
        }
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = 0;
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_00101bac;
          }
          goto LAB_00102178;
        }
        if (uVar16 == 0 && uVar23 == 0) goto LAB_00102178;
        uVar22 = uVar21 + uVar23;
        uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        if ((uVar25 >> 0x33 & 1) != 0) {
          uVar25 = uVar25 & 0xfff7ffffffffffff;
          uVar10 = 0;
          bVar6 = false;
          uVar15 = 1;
          goto LAB_00101a5c;
        }
LAB_00101a48:
        uVar17 = uVar22 | uVar25;
        goto LAB_00101a4c;
      }
      if (uVar15 != 0x7fff) {
        uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        bVar6 = false;
        uVar10 = uVar21 + uVar23 >> 1 & 7;
        uVar25 = uVar17 >> 1;
        uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
        goto LAB_00101a5c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 != 0) {
        if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102450:
          uVar11 = 0x14;
          lVar18 = 0;
          goto LAB_00101c9c;
        }
        if (uVar10 == 0x800000) {
          if (lVar18 == 0) goto LAB_001023ec;
LAB_001022b8:
          uVar11 = 0x14;
          lVar18 = 1;
          goto LAB_00101c9c;
        }
LAB_00102114:
        uVar14 = 0x14;
        if ((uVar13 & 0xc00000) == 0x400000) {
          uVar22 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          bVar6 = false;
          uVar11 = 0x14;
          uVar25 = uVar22;
          goto joined_r0x00102134;
        }
        goto LAB_00101c58;
      }
LAB_001021a4:
      uVar11 = 0x14;
    }
    else {
      if (uVar19 == 0) {
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            goto LAB_00101d48;
          }
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f78;
            goto LAB_00101c24;
          }
          goto LAB_00101b20;
        }
        uVar19 = uVar20;
        if (uVar20 != 0x7fff) goto LAB_00101b8c;
        uVar14 = uVar12;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00101ee4;
        uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
        uVar23 = uVar21;
        uVar16 = uVar24;
LAB_00101c30:
        uVar20 = 0x7fff;
        goto LAB_00101c38;
      }
      uVar16 = uVar16 | 0x8000000000000;
      if (uVar20 == 0x7fff) goto LAB_00101dd4;
LAB_00101b20:
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
LAB_00101d48:
      uVar19 = uVar20;
      uVar22 = uVar10;
      uVar25 = uVar16;
      if ((uVar16 >> 0x33 & 1) == 0) goto LAB_00101b8c;
      uVar15 = uVar20 + 1;
      if (uVar15 != 0x7fff) {
        bVar6 = false;
        uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
        uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
        uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
        goto LAB_00101a5c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 == 0) goto LAB_001021a4;
      if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102450;
      if (uVar10 != 0x800000) goto LAB_00102114;
      if (lVar18 != 0) goto LAB_001022b8;
LAB_001023ec:
      uVar22 = 0xffffffffffffffff;
      lVar18 = 0;
      uVar15 = 0x7ffe;
      uVar11 = 0x14;
      uVar25 = uVar22;
LAB_00101a8c:
      uVar14 = (uint)uVar11;
      uVar12 = (uint)lVar18;
      if (uVar15 + 1 != 0x7fff) {
        uVar10 = uVar25 >> 3 & 0xffffffffffff;
        uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
        uVar14 = (uint)(uVar15 + 1) & 0x7fff;
        goto LAB_00101aa8;
      }
LAB_00101c58:
      uVar12 = (uint)lVar18;
      uVar13 = uVar13 & 0xc00000;
      if (uVar13 != 0) {
        if (uVar13 == 0x400000) {
          if (lVar9 != 0) goto LAB_00101c74;
        }
        else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101c74:
          uVar22 = 0xffffffffffffffff;
          uVar11 = (ulong)(uVar14 | 0x14);
          uVar10 = 0x1fffffffffffffff;
          uVar20 = 0x7ffe;
          goto LAB_00101bac;
        }
      }
      uVar11 = (ulong)(uVar14 | 0x14);
    }
LAB_00101c9c:
    uVar22 = 0;
    uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
    goto LAB_00101cb0;
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
          goto LAB_001019e4;
        }
        lVar9 = lVar18;
        if (uVar22 != 0 || uVar10 != 0) goto LAB_001019e4;
        uVar22 = 0;
        uVar20 = 0;
        uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
        uVar10 = 0;
        goto LAB_00101bac;
      }
      if (uVar20 == 0) {
        if (uVar24 != 0 || uVar21 != 0) {
          if (uVar16 == 0 && uVar23 == 0) goto LAB_00102178;
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          if ((uVar25 >> 0x33 & 1) == 0) {
            if (uVar22 != 0 || uVar25 != 0) {
              uVar10 = 0;
              bVar6 = true;
              uVar15 = uVar20;
              goto LAB_00101a5c;
            }
            goto LAB_00102250;
          }
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          uVar17 = uVar22 | uVar25;
          goto LAB_00101a4c;
        }
        uVar22 = uVar23;
        uVar25 = uVar16;
        lVar18 = lVar9;
        if (uVar16 == 0 && uVar23 == 0) {
LAB_00102250:
          uVar10 = 0;
          uVar22 = 0;
          uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
          goto LAB_00101bac;
        }
LAB_00102178:
        uVar10 = 0;
        uVar15 = 0;
        goto LAB_00102180;
      }
      if (uVar20 == 0x7fff) {
        if (uVar24 == 0 && uVar21 == 0) {
          if (uVar19 != 0x7fff) goto LAB_001020b8;
        }
        else {
          uVar11 = uVar3 >> 0x32 ^ 1;
          if (uVar19 != 0x7fff) goto LAB_00102088;
        }
LAB_00102300:
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = (uint)uVar11;
          if ((uVar2 & 0x4000000000000) == 0) {
            uVar8 = 1;
          }
          uVar11 = (ulong)uVar8;
          if (uVar24 == 0 && uVar21 == 0) {
LAB_0010237c:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
            goto LAB_00101df4;
          }
LAB_00102318:
          uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
          uVar10 = uVar28 & 0xffffffffffff;
          if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
          }
          goto LAB_00101df4;
        }
        if (uVar24 != 0 || uVar21 != 0) goto LAB_00102088;
      }
      else {
        if (uVar19 == 0x7fff) goto LAB_00102300;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00102088:
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
            goto LAB_00101df4;
          }
          goto LAB_00102318;
        }
LAB_001020b8:
        uVar11 = 0;
        if (uVar16 != 0 || uVar23 != 0) goto LAB_0010237c;
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
              goto LAB_00101c30;
            }
            goto LAB_00101ee4;
          }
          goto LAB_00101b8c;
        }
        uVar8 = ~uVar8;
        if (uVar8 == 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_001019dc;
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
        goto LAB_001019dc;
      }
      if (uVar16 == 0 && uVar23 == 0) goto LAB_00101f78;
      uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
      uVar11 = uVar4 >> 0x32 ^ 1;
      uVar10 = uVar4 >> 3;
      uVar12 = uVar14;
LAB_00101df4:
      if (uVar10 == 0 && uVar22 == 0) {
        uVar22 = 0;
        uVar14 = 0x7fff;
        uVar10 = 0;
        goto LAB_00101aa8;
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
          goto LAB_001019dc;
        }
        goto LAB_00101988;
      }
      uVar19 = uVar20;
      lVar9 = lVar18;
      if (uVar20 == 0x7fff) {
        uVar14 = uVar12;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00101c24:
          uVar11 = uVar3 >> 0x32 ^ 1;
          uVar23 = uVar21;
          uVar16 = uVar24;
          goto LAB_00101c30;
        }
LAB_00101ee4:
        uVar22 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = uVar14;
        goto LAB_00101df4;
      }
LAB_00101b8c:
      uVar12 = (uint)lVar9;
      uVar17 = uVar22 | uVar25;
      uVar10 = uVar22 & 7;
      bVar6 = false;
      uVar15 = uVar19;
      lVar18 = lVar9;
      if (uVar19 == 0) goto joined_r0x00101b9c;
LAB_00101a5c:
      if (uVar10 == 0) {
        uVar10 = uVar25 & 0x8000000000000;
        uVar11 = 0;
        if (bVar6) {
LAB_00102180:
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
joined_r0x00102134:
          if (lVar18 == 0) {
LAB_00101d84:
            bVar7 = 0xfffffffffffffff7 < uVar22;
            uVar22 = uVar22 + 8;
            if (bVar7) {
              uVar25 = uVar25 + 1;
            }
          }
        }
        else if (uVar10 == 0x800000) {
          uVar11 = 0x10;
          if (lVar18 != 0) goto LAB_00101d84;
        }
        else {
          if (uVar10 != 0) {
            uVar10 = uVar25 & 0x8000000000000;
            uVar11 = 0x10;
            if (bVar6) {
              uVar11 = 0x18;
            }
            goto LAB_00101a88;
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
LAB_00101a88:
      uVar12 = (uint)lVar18;
      uVar20 = uVar15;
      uVar23 = uVar22;
      uVar16 = uVar25;
      lVar9 = lVar18;
      if (uVar10 != 0) goto LAB_00101a8c;
LAB_00101c38:
      uVar10 = uVar16 >> 3;
      uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
      if (uVar20 == 0x7fff) goto LAB_00101df4;
    }
    else {
      uVar16 = uVar16 | 0x8000000000000;
LAB_00101988:
      if (uVar20 == 0x7fff) {
LAB_00101dd4:
        lVar9 = lVar18;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f78;
        uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
        uVar11 = uVar3 >> 0x32 ^ 1;
        uVar10 = uVar28 & 0xffffffffffff;
        goto LAB_00101df4;
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
LAB_001019dc:
      uVar10 = uVar25 & 0x7ffffffffffff;
      uVar20 = uVar19;
      if ((uVar25 >> 0x33 & 1) == 0) goto LAB_00101b8c;
LAB_001019e4:
      if (uVar10 == 0) {
        uVar12 = (int)LZCOUNT(uVar22) + 0x34;
        if (uVar12 < 0x40) goto LAB_001019f0;
        uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
        uVar17 = 0;
      }
      else {
        uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_001019f0:
        uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
        uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
      }
      if ((long)(int)uVar12 < (long)uVar20) {
        uVar19 = uVar20 - (long)(int)uVar12;
        uVar22 = uVar17;
        uVar25 = uVar10 & 0xfff7ffffffffffff;
        goto LAB_00101b8c;
      }
      iVar1 = uVar12 - (int)uVar20;
      uVar12 = iVar1 + 1;
      if ((int)uVar12 < 0x40) {
        uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
        uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
                 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
        goto LAB_00101a48;
      }
      uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
      if (uVar12 == 0x40) {
        uVar22 = uVar17;
      }
      uVar25 = 0;
      uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
      uVar22 = uVar17;
LAB_00101a4c:
      uVar12 = (uint)lVar9;
joined_r0x00101b9c:
      if (uVar17 != 0) {
        uVar10 = uVar22 & 7;
        bVar6 = true;
        uVar15 = 0;
        lVar18 = lVar9;
        goto LAB_00101a5c;
      }
      uVar22 = 0;
      uVar20 = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
LAB_00101bac:
    uVar10 = uVar10 & 0xffffffffffff;
    uVar14 = (uint)uVar20 & 0x7fff;
  }
LAB_00101aa8:
  uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
  if ((int)uVar11 == 0) {
LAB_00101ac4:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar22;
    return auVar27;
  }
LAB_00101cb0:
  __sfp_handle_exceptions(uVar11);
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar22;
  return auVar5;
}



/* Function: __addtf3 @ 00101910 */

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
                goto LAB_00101c30;
              }
              goto LAB_00101ee4;
            }
            goto LAB_00101b8c;
          }
          uVar8 = ~uVar8;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            uVar20 = uVar19;
            goto LAB_00101d48;
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
          goto LAB_00101d48;
        }
        if (uVar16 != 0 || uVar23 != 0) {
          uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
          uVar11 = uVar4 >> 0x32 ^ 1;
          uVar10 = uVar4 >> 3;
          goto LAB_00101df4;
        }
LAB_00101f78:
        uVar22 = 0;
        uVar10 = lVar9 << 0x3f | 0x7fff000000000000;
        goto LAB_00101ac4;
      }
      uVar15 = uVar20 + 1;
      if ((uVar15 & 0x7ffe) == 0) {
        if (uVar20 != 0) {
          uVar8 = 0;
          uVar11 = 0;
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) {
              if (uVar19 != 0x7fff) goto LAB_00102200;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00101f78;
            }
            else {
              uVar11 = uVar3 >> 0x32 ^ 1;
              uVar8 = (uint)uVar11;
              if (uVar19 != 0x7fff) goto LAB_001023a8;
              if (uVar16 == 0 && uVar23 == 0) goto LAB_00102440;
            }
LAB_0010246c:
            if ((uVar2 & 0x4000000000000) == 0) {
              uVar8 = 1;
            }
            uVar11 = (ulong)uVar8;
            if (uVar24 != 0 || uVar21 != 0) {
LAB_001023b0:
              uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
              uVar10 = uVar28 & 0xffffffffffff;
              if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
                uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
                uVar10 = uVar4 >> 3;
                uVar12 = uVar14;
              }
              goto LAB_00101df4;
            }
LAB_00102200:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
          }
          else {
            if (uVar19 == 0x7fff) {
              if (uVar16 != 0 || uVar23 != 0) goto LAB_0010246c;
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f78;
            }
            else {
              if (uVar24 == 0 && uVar21 == 0) goto LAB_00102200;
LAB_001023a8:
              if (uVar16 != 0 || uVar23 != 0) goto LAB_001023b0;
            }
LAB_00102440:
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
          }
          goto LAB_00101df4;
        }
        if (uVar24 == 0 && uVar21 == 0) {
          uVar22 = uVar23;
          uVar25 = uVar16;
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = 0;
            uVar11 = 0;
            uVar10 = 0;
            goto LAB_00101bac;
          }
          goto LAB_00102178;
        }
        if (uVar16 == 0 && uVar23 == 0) goto LAB_00102178;
        uVar22 = uVar21 + uVar23;
        uVar25 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        if ((uVar25 >> 0x33 & 1) != 0) {
          uVar25 = uVar25 & 0xfff7ffffffffffff;
          uVar10 = 0;
          bVar6 = false;
          uVar15 = 1;
          goto LAB_00101a5c;
        }
LAB_00101a48:
        uVar17 = uVar22 | uVar25;
        goto LAB_00101a4c;
      }
      if (uVar15 != 0x7fff) {
        uVar17 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
        bVar6 = false;
        uVar10 = uVar21 + uVar23 >> 1 & 7;
        uVar25 = uVar17 >> 1;
        uVar22 = uVar21 + uVar23 >> 1 | uVar17 << 0x3f;
        goto LAB_00101a5c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 != 0) {
        if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) {
LAB_00102450:
          uVar11 = 0x14;
          lVar18 = 0;
          goto LAB_00101c9c;
        }
        if (uVar10 == 0x800000) {
          if (lVar18 == 0) goto LAB_001023ec;
LAB_001022b8:
          uVar11 = 0x14;
          lVar18 = 1;
          goto LAB_00101c9c;
        }
LAB_00102114:
        uVar14 = 0x14;
        if ((uVar13 & 0xc00000) == 0x400000) {
          uVar22 = 0xffffffffffffffff;
          uVar15 = 0x7ffe;
          bVar6 = false;
          uVar11 = 0x14;
          uVar25 = uVar22;
          goto joined_r0x00102134;
        }
        goto LAB_00101c58;
      }
LAB_001021a4:
      uVar11 = 0x14;
    }
    else {
      if (uVar19 == 0) {
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            uVar10 = uVar21 + uVar23;
            uVar16 = uVar16 + uVar24 + (ulong)CARRY8(uVar21,uVar23);
            goto LAB_00101d48;
          }
          if (uVar20 == 0x7fff) {
            if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f78;
            goto LAB_00101c24;
          }
          goto LAB_00101b20;
        }
        uVar19 = uVar20;
        if (uVar20 != 0x7fff) goto LAB_00101b8c;
        uVar14 = uVar12;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00101ee4;
        uVar11 = (ulong)((uint)(uVar3 >> 0x32) ^ 1);
        uVar23 = uVar21;
        uVar16 = uVar24;
LAB_00101c30:
        uVar20 = 0x7fff;
        goto LAB_00101c38;
      }
      uVar16 = uVar16 | 0x8000000000000;
      if (uVar20 == 0x7fff) goto LAB_00101dd4;
LAB_00101b20:
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
LAB_00101d48:
      uVar19 = uVar20;
      uVar22 = uVar10;
      uVar25 = uVar16;
      if ((uVar16 >> 0x33 & 1) == 0) goto LAB_00101b8c;
      uVar15 = uVar20 + 1;
      if (uVar15 != 0x7fff) {
        bVar6 = false;
        uVar22 = uVar10 & 1 | uVar10 >> 1 | uVar16 << 0x3f;
        uVar25 = (uVar16 & 0xfff7ffffffffffff) >> 1;
        uVar10 = uVar10 & 1 | uVar10 >> 1 & 7;
        goto LAB_00101a5c;
      }
      uVar10 = uVar13 & 0xc00000;
      if (uVar10 == 0) goto LAB_001021a4;
      if (((uint)(uVar10 == 0x400000) & (uVar12 ^ 1)) != 0) goto LAB_00102450;
      if (uVar10 != 0x800000) goto LAB_00102114;
      if (lVar18 != 0) goto LAB_001022b8;
LAB_001023ec:
      uVar22 = 0xffffffffffffffff;
      lVar18 = 0;
      uVar15 = 0x7ffe;
      uVar11 = 0x14;
      uVar25 = uVar22;
LAB_00101a8c:
      uVar14 = (uint)uVar11;
      uVar12 = (uint)lVar18;
      if (uVar15 + 1 != 0x7fff) {
        uVar10 = uVar25 >> 3 & 0xffffffffffff;
        uVar22 = uVar22 >> 3 | uVar25 << 0x3d;
        uVar14 = (uint)(uVar15 + 1) & 0x7fff;
        goto LAB_00101aa8;
      }
LAB_00101c58:
      uVar12 = (uint)lVar18;
      uVar13 = uVar13 & 0xc00000;
      if (uVar13 != 0) {
        if (uVar13 == 0x400000) {
          if (lVar9 != 0) goto LAB_00101c74;
        }
        else if (((uint)(uVar13 == 0x800000) & (uint)lVar9) == 0) {
LAB_00101c74:
          uVar22 = 0xffffffffffffffff;
          uVar11 = (ulong)(uVar14 | 0x14);
          uVar10 = 0x1fffffffffffffff;
          uVar20 = 0x7ffe;
          goto LAB_00101bac;
        }
      }
      uVar11 = (ulong)(uVar14 | 0x14);
    }
LAB_00101c9c:
    uVar22 = 0;
    uVar10 = lVar18 << 0x3f | 0x7fff000000000000;
    goto LAB_00101cb0;
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
          goto LAB_001019e4;
        }
        lVar9 = lVar18;
        if (uVar22 != 0 || uVar10 != 0) goto LAB_001019e4;
        uVar22 = 0;
        uVar20 = 0;
        uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
        uVar10 = 0;
        goto LAB_00101bac;
      }
      if (uVar20 == 0) {
        if (uVar24 != 0 || uVar21 != 0) {
          if (uVar16 == 0 && uVar23 == 0) goto LAB_00102178;
          uVar22 = uVar21 + uVar29 * -8;
          uVar25 = uVar24 - (uVar16 + (uVar21 < uVar23));
          if ((uVar25 >> 0x33 & 1) == 0) {
            if (uVar22 != 0 || uVar25 != 0) {
              uVar10 = 0;
              bVar6 = true;
              uVar15 = uVar20;
              goto LAB_00101a5c;
            }
            goto LAB_00102250;
          }
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          uVar17 = uVar22 | uVar25;
          goto LAB_00101a4c;
        }
        uVar22 = uVar23;
        uVar25 = uVar16;
        lVar18 = lVar9;
        if (uVar16 == 0 && uVar23 == 0) {
LAB_00102250:
          uVar10 = 0;
          uVar22 = 0;
          uVar12 = (uint)((uVar13 & 0xc00000) == 0x800000);
          goto LAB_00101bac;
        }
LAB_00102178:
        uVar10 = 0;
        uVar15 = 0;
        goto LAB_00102180;
      }
      if (uVar20 == 0x7fff) {
        if (uVar24 == 0 && uVar21 == 0) {
          if (uVar19 != 0x7fff) goto LAB_001020b8;
        }
        else {
          uVar11 = uVar3 >> 0x32 ^ 1;
          if (uVar19 != 0x7fff) goto LAB_00102088;
        }
LAB_00102300:
        if (uVar16 != 0 || uVar23 != 0) {
          uVar8 = (uint)uVar11;
          if ((uVar2 & 0x4000000000000) == 0) {
            uVar8 = 1;
          }
          uVar11 = (ulong)uVar8;
          if (uVar24 == 0 && uVar21 == 0) {
LAB_0010237c:
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
            goto LAB_00101df4;
          }
LAB_00102318:
          uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
          uVar10 = uVar28 & 0xffffffffffff;
          if ((uVar3 >> 0x32 != 0) && (uVar4 >> 0x32 == 0)) {
            uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
            uVar10 = uVar4 >> 3;
            uVar12 = uVar14;
          }
          goto LAB_00101df4;
        }
        if (uVar24 != 0 || uVar21 != 0) goto LAB_00102088;
      }
      else {
        if (uVar19 == 0x7fff) goto LAB_00102300;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00102088:
          if (uVar16 == 0 && uVar23 == 0) {
            uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
            uVar10 = uVar28 & 0xffffffffffff;
            goto LAB_00101df4;
          }
          goto LAB_00102318;
        }
LAB_001020b8:
        uVar11 = 0;
        if (uVar16 != 0 || uVar23 != 0) goto LAB_0010237c;
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
              goto LAB_00101c30;
            }
            goto LAB_00101ee4;
          }
          goto LAB_00101b8c;
        }
        uVar8 = ~uVar8;
        if (uVar8 == 0) {
          uVar22 = uVar23 + uVar26 * -8;
          uVar25 = uVar16 - (uVar24 + (uVar23 < uVar21));
          goto LAB_001019dc;
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
        goto LAB_001019dc;
      }
      if (uVar16 == 0 && uVar23 == 0) goto LAB_00101f78;
      uVar22 = uVar29 & 0x1fffffffffffffff | uVar17 << 0x3d;
      uVar11 = uVar4 >> 0x32 ^ 1;
      uVar10 = uVar4 >> 3;
      uVar12 = uVar14;
LAB_00101df4:
      if (uVar10 == 0 && uVar22 == 0) {
        uVar22 = 0;
        uVar14 = 0x7fff;
        uVar10 = 0;
        goto LAB_00101aa8;
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
          goto LAB_001019dc;
        }
        goto LAB_00101988;
      }
      uVar19 = uVar20;
      lVar9 = lVar18;
      if (uVar20 == 0x7fff) {
        uVar14 = uVar12;
        if (uVar24 != 0 || uVar21 != 0) {
LAB_00101c24:
          uVar11 = uVar3 >> 0x32 ^ 1;
          uVar23 = uVar21;
          uVar16 = uVar24;
          goto LAB_00101c30;
        }
LAB_00101ee4:
        uVar22 = 0;
        uVar11 = 0;
        uVar10 = 0;
        uVar12 = uVar14;
        goto LAB_00101df4;
      }
LAB_00101b8c:
      uVar12 = (uint)lVar9;
      uVar17 = uVar22 | uVar25;
      uVar10 = uVar22 & 7;
      bVar6 = false;
      uVar15 = uVar19;
      lVar18 = lVar9;
      if (uVar19 == 0) goto joined_r0x00101b9c;
LAB_00101a5c:
      if (uVar10 == 0) {
        uVar10 = uVar25 & 0x8000000000000;
        uVar11 = 0;
        if (bVar6) {
LAB_00102180:
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
joined_r0x00102134:
          if (lVar18 == 0) {
LAB_00101d84:
            bVar7 = 0xfffffffffffffff7 < uVar22;
            uVar22 = uVar22 + 8;
            if (bVar7) {
              uVar25 = uVar25 + 1;
            }
          }
        }
        else if (uVar10 == 0x800000) {
          uVar11 = 0x10;
          if (lVar18 != 0) goto LAB_00101d84;
        }
        else {
          if (uVar10 != 0) {
            uVar10 = uVar25 & 0x8000000000000;
            uVar11 = 0x10;
            if (bVar6) {
              uVar11 = 0x18;
            }
            goto LAB_00101a88;
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
LAB_00101a88:
      uVar12 = (uint)lVar18;
      uVar20 = uVar15;
      uVar23 = uVar22;
      uVar16 = uVar25;
      lVar9 = lVar18;
      if (uVar10 != 0) goto LAB_00101a8c;
LAB_00101c38:
      uVar10 = uVar16 >> 3;
      uVar22 = uVar23 >> 3 | uVar16 << 0x3d;
      if (uVar20 == 0x7fff) goto LAB_00101df4;
    }
    else {
      uVar16 = uVar16 | 0x8000000000000;
LAB_00101988:
      if (uVar20 == 0x7fff) {
LAB_00101dd4:
        lVar9 = lVar18;
        if (uVar24 == 0 && uVar21 == 0) goto LAB_00101f78;
        uVar22 = uVar26 & 0x1fffffffffffffff | uVar10 << 0x3d;
        uVar11 = uVar3 >> 0x32 ^ 1;
        uVar10 = uVar28 & 0xffffffffffff;
        goto LAB_00101df4;
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
LAB_001019dc:
      uVar10 = uVar25 & 0x7ffffffffffff;
      uVar20 = uVar19;
      if ((uVar25 >> 0x33 & 1) == 0) goto LAB_00101b8c;
LAB_001019e4:
      if (uVar10 == 0) {
        uVar12 = (int)LZCOUNT(uVar22) + 0x34;
        if (uVar12 < 0x40) goto LAB_001019f0;
        uVar10 = uVar22 << ((ulong)((int)LZCOUNT(uVar22) - 0xc) & 0x3f);
        uVar17 = 0;
      }
      else {
        uVar12 = (int)LZCOUNT(uVar10) - 0xc;
LAB_001019f0:
        uVar17 = uVar22 << ((ulong)uVar12 & 0x3f);
        uVar10 = uVar22 >> ((ulong)-uVar12 & 0x3f) | uVar10 << ((ulong)uVar12 & 0x3f);
      }
      if ((long)(int)uVar12 < (long)uVar20) {
        uVar19 = uVar20 - (long)(int)uVar12;
        uVar22 = uVar17;
        uVar25 = uVar10 & 0xfff7ffffffffffff;
        goto LAB_00101b8c;
      }
      iVar1 = uVar12 - (int)uVar20;
      uVar12 = iVar1 + 1;
      if ((int)uVar12 < 0x40) {
        uVar25 = uVar10 >> ((ulong)uVar12 & 0x3f);
        uVar22 = uVar10 << ((ulong)(0x40 - uVar12) & 0x3f) | uVar17 >> ((ulong)uVar12 & 0x3f) |
                 (ulong)(uVar17 << ((ulong)(0x40 - uVar12) & 0x3f) != 0);
        goto LAB_00101a48;
      }
      uVar22 = uVar17 | uVar10 << ((ulong)(0x80 - uVar12) & 0x3f);
      if (uVar12 == 0x40) {
        uVar22 = uVar17;
      }
      uVar25 = 0;
      uVar17 = (ulong)(uVar22 != 0) | uVar10 >> ((ulong)(iVar1 - 0x3f) & 0x3f);
      uVar22 = uVar17;
LAB_00101a4c:
      uVar12 = (uint)lVar9;
joined_r0x00101b9c:
      if (uVar17 != 0) {
        uVar10 = uVar22 & 7;
        bVar6 = true;
        uVar15 = 0;
        lVar18 = lVar9;
        goto LAB_00101a5c;
      }
      uVar22 = 0;
      uVar20 = 0;
      uVar11 = 0;
      uVar10 = 0;
    }
LAB_00101bac:
    uVar10 = uVar10 & 0xffffffffffff;
    uVar14 = (uint)uVar20 & 0x7fff;
  }
LAB_00101aa8:
  uVar10 = uVar10 | (ulong)(uVar14 | uVar12 << 0xf) << 0x30;
  if ((int)uVar11 == 0) {
LAB_00101ac4:
    auVar27._8_8_ = uVar10;
    auVar27._0_8_ = uVar22;
    return auVar27;
  }
LAB_00101cb0:
  __sfp_handle_exceptions(uVar11);
  auVar5._8_8_ = uVar10;
  auVar5._0_8_ = uVar22;
  return auVar5;
}



/* Function: __multf3 @ 001024b0 */

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
        if (uVar11 < 0x3d) goto LAB_00102908;
        uVar11 = 0;
        uVar19 = uVar15 << ((ulong)(iVar8 - 0x3d) & 0x3f);
      }
      else {
        lVar13 = LZCOUNT(uVar19);
        iVar8 = (int)lVar13 + -0xf;
LAB_00102908:
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
        if (uVar21 < 0x3d) goto LAB_001028ac;
        uVar21 = uVar17 << ((ulong)(iVar8 - 0x3d) & 0x3f);
        uVar17 = 0;
      }
      else {
        lVar23 = LZCOUNT(uVar15);
        iVar8 = (int)lVar23 + -0xf;
LAB_001028ac:
        uVar21 = uVar17 >> ((ulong)(0x3d - iVar8) & 0x3f) | uVar15 << ((ulong)(iVar8 + 3) & 0x3f);
        uVar17 = uVar17 << ((ulong)(iVar8 + 3) & 0x3f);
      }
      lVar20 = (lVar13 - lVar23) + -0x3fef;
      lVar23 = (lVar13 - lVar23) + -0x3fee;
      lVar12 = 0;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    if (uVar7 < 0xb) {
LAB_001025bc:
      uVar15 = uVar21;
      if (2 < uVar7) {
LAB_00102638:
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
            goto LAB_001025ec;
          }
          uVar25 = uVar17;
          uVar21 = uVar15;
          uVar26 = uVar14;
          lVar9 = lVar12;
          if ((uVar7 & 0x88) == 0) goto LAB_001026dc;
        }
LAB_0010267c:
        lVar12 = lVar9;
        uVar14 = uVar26;
        uVar17 = uVar25;
        uVar22 = uVar14;
        if (lVar12 == 2) {
LAB_001026cc:
          uVar4 = 0x7fff;
          uVar15 = 0;
          uVar11 = 0;
          uVar10 = uVar22;
          goto LAB_001025ec;
        }
        goto LAB_00102698;
      }
      if (uVar7 - 1 < 2) {
        if (lVar12 == 2) goto LAB_001026cc;
        goto LAB_001025d8;
      }
LAB_001026dc:
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
LAB_0010283c:
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
            if ((uVar17 & 7) != 0 || uVar11 != 0) goto LAB_00102a24;
            if ((uVar15 >> 0x33 & 1) == 0) goto LAB_00102b6c;
LAB_00102bd8:
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
LAB_00102b6c:
              uVar17 = 0;
              uVar4 = 0;
              uVar11 = uVar19 >> 3 | uVar15 << 0x3d;
              uVar15 = uVar15 >> 3 & 0xffffffffffff;
              if (((uint)uVar18 >> 0xb & 1) == 0) goto LAB_001025ec;
              uVar6 = (ulong)(uVar5 | 8);
            }
            else {
              uVar15 = 0;
LAB_00102a24:
              uVar18 = uVar18 & 0xc00000;
              if (uVar18 == 0x400000) {
                if (uVar22 == 0) {
LAB_00102bcc:
                  bVar3 = 0xfffffffffffffff7 < uVar19;
                  uVar19 = uVar19 + 8;
                  if (bVar3) {
                    uVar15 = uVar15 + 1;
                  }
                }
              }
              else if (uVar18 == 0x800000) {
                if (uVar22 != 0) goto LAB_00102bcc;
              }
              else if (((uVar18 == 0) && ((uVar19 & 0xf) != 4)) &&
                      (bVar3 = 0xfffffffffffffffb < uVar19, uVar19 = uVar19 + 4, bVar3)) {
                uVar15 = uVar15 + 1;
              }
              if ((uVar15 >> 0x33 & 1) != 0) goto LAB_00102bd8;
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
LAB_00102bbc:
              bVar3 = 0xfffffffffffffff7 < uVar17;
              uVar17 = uVar17 + 8;
              if (bVar3) {
                uVar21 = uVar21 + 1;
              }
            }
          }
          else if (uVar19 == 0x800000) {
            if (uVar22 != 0) goto LAB_00102bbc;
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
          goto LAB_001025ec;
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
      goto LAB_00102aa4;
    }
LAB_00102570:
    if (uVar7 != 0xb) {
LAB_00102578:
      uVar25 = uVar11;
      uVar21 = uVar19;
      uVar26 = uVar10;
      lVar9 = lVar24;
      goto LAB_0010267c;
    }
LAB_00102698:
    uVar22 = uVar14;
    if (lVar12 == 3) {
      uVar15 = uVar21 & 0xffffffffffff | 0x800000000000;
      uVar4 = 0x7fff;
      uVar11 = uVar17;
      uVar10 = uVar14;
    }
    else {
LAB_001025d8:
      lVar20 = lVar23;
      if (lVar12 != 1) goto LAB_0010283c;
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
      if (10 < uVar7) goto LAB_00102570;
      goto LAB_001025bc;
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
        goto LAB_00102c14;
      }
      goto LAB_00102638;
    }
    uVar22 = (ulong)((uVar4 ^ uVar5) >> 0x1f);
    uVar7 = uVar7 | 2;
    lVar23 = lVar13 + 0x8000;
    uVar17 = 0;
    if (uVar7 < 0xb) {
      uVar21 = 0;
      lVar12 = 2;
      goto LAB_001025bc;
    }
    lVar9 = 2;
    uVar15 = 0;
LAB_00102c14:
    lVar23 = lVar13 + 0x8000;
    if (uVar7 != 0xf) {
      uVar25 = uVar17;
      uVar21 = uVar15;
      uVar26 = uVar14;
      if (uVar7 != 0xb) goto LAB_00102578;
      goto LAB_0010267c;
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
LAB_001025ec:
  uVar15 = uVar15 | (ulong)(uVar4 | (int)uVar10 << 0xf) << 0x30;
  if ((int)uVar6 == 0) {
    auVar31._8_8_ = uVar15;
    auVar31._0_8_ = uVar11;
    return auVar31;
  }
LAB_00102aa4:
  __sfp_handle_exceptions(uVar6);
  auVar2._8_8_ = uVar15;
  auVar2._0_8_ = uVar11;
  return auVar2;
}



/* Function: __sfp_handle_exceptions @ 00102cb0 */

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



/* Function: _fini @ 00102d20 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 68 */
