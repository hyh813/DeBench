/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O1_g
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



/* Function: _start @ 000110d0 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000110fc */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011100 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011110 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001112b) */
/* WARNING: Removing unreachable block (ram,0x00011135) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011150 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001117e) */
/* WARNING: Removing unreachable block (ram,0x00011188) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000111a0 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000111fc) */
/* WARNING: Removing unreachable block (ram,0x00011200) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 00011239 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 0001123d */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 00011241 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
  return x * 2;
}



/* Function: process_int @ 0001124c */

/* WARNING: Unknown calling convention */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: complex_callback @ 00011259 */

/* WARNING: Unknown calling convention */

int complex_callback(int *p,char **args)

{
  *p = *p + 10;
  return (uint)(*args != (char *)0x0);
}



/* Function: process_char @ 00011272 */

/* WARNING: Unknown calling convention */

char process_char(char c)

{
  if ((byte)(c + 0xbfU) < 0x1a) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 00011287 */

/* WARNING: Unknown calling convention */

short process_short(short a,short b)

{
  return b + a;
}



/* Function: process_long @ 00011295 */

/* WARNING: Unknown calling convention */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 000112a0 */

/* WARNING: Unknown calling convention */

longlong process_ll(longlong x)

{
  longlong lVar1;
  
  lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)x * x._4_4_ * 2,(int)lVar1);
}



/* Function: process_float @ 000112b6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 000112e0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

double process_double(double d)

{
  return (double)((float)d * 0.5 + 0.1);
}



/* Function: process_ld @ 0001130a */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
  longdouble *in_EAX;
  
  return in_EAX;
}



/* Function: process_bool @ 00011319 */

/* WARNING: Unknown calling convention */

_Bool process_bool(int x)

{
  _Bool _Var1;
  
  _Var1 = (_Bool)(~(byte)x & 1);
  if (x < 1) {
    _Var1 = false;
  }
  return _Var1;
}



/* Function: const_param @ 00011336 */

/* WARNING: Unknown calling convention */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 00011344 */

/* WARNING: Unknown calling convention */

int volatile_access(int *p)

{
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00011353 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  int vol_value;
  
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
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 0001149e */

int array_1d_stack(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
  }
  return iVar2;
}



/* Function: array_string @ 000114cb */

int array_string(char *str)

{
  int iVar1;
  
  if (*str != '\0') {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
    } while (str[iVar1] != '\0');
    return iVar1;
  }
  return 0;
}



/* Function: array_2d_stack @ 000114ed */

/* WARNING: Unknown calling convention */

int array_2d_stack(int (*arr) [10])

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  piVar1 = arr[0xb];
  iVar2 = 0;
  do {
    iVar2 = iVar2 + (*arr)[0];
    arr = (int (*) [10])(*(int (*) [10])((int)arr + 0x28) + 1);
  } while (arr != (int (*) [10])piVar1);
  return iVar2;
}



/* Function: array_3d @ 0001150e */

/* WARNING: Unknown calling convention */

int array_3d(int (*arr) [5] [5])

{
  int iVar1;
  int (*paiVar2) [5];
  int (*paiVar3) [5];
  
                    /* Unresolved local var: int i@[???] */
  paiVar2 = arr[1];
  iVar1 = 0;
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar3 = paiVar2 + -5;
    do {
                    /* Unresolved local var: int k@[???] */
      iVar1 = iVar1 + (*(int (*) [5] [5])paiVar3)[0][0] + (*(int (*) [5] [5])paiVar3)[0][1] +
              (*(int (*) [5] [5])paiVar3)[0][2] + (*(int (*) [5] [5])paiVar3)[0][3] +
              (*(int (*) [5] [5])paiVar3)[0][4];
      paiVar3 = *(int (*) [5] [5])paiVar3 + 1;
    } while (paiVar3 != paiVar2);
    paiVar2 = paiVar2 + 5;
  } while (paiVar2 != arr[6]);
  return iVar1;
}



/* Function: array_vla @ 00011546 */

int array_vla(int n,int *arr)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    piVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
  }
  return iVar2;
}



/* Function: array_pointer @ 00011573 */

int array_pointer(int (*arr) [10],int n)

{
  int (*paiVar1) [10];
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    paiVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (*arr)[0];
      arr = arr + 1;
    } while (arr != paiVar1);
  }
  return iVar2;
}



/* Function: pointer_array @ 000115a3 */

int pointer_array(int **arr,int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 10;
  if (n < 0xb) {
    iVar3 = n;
  }
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    do {
      if (arr[iVar1] != (int *)0x0) {
        iVar2 = iVar2 + *arr[iVar1];
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
  }
  return iVar2;
}



/* Function: array_complex_index @ 000115e7 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  int iVar1;
  
  if (((x | y) < 0) || (w <= x)) {
    iVar1 = -1;
  }
  else if (y < h) {
    iVar1 = arr[w * y + x];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: array_oob @ 00011624 */

int array_oob(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 0) {
    iVar2 = 0;
  }
  else {
    piVar1 = arr + n + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
  }
  return iVar2;
}



/* Function: test_array_types @ 00011652 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int (*paiVar4) [5];
  uint uVar5;
  int iVar6;
  int (*paiVar7) [5];
  int (*paiVar8) [10];
  int in_GS_OFFSET;
  int a;
  int b;
  int c;
  int vla_arr [3];
  int arr1 [5];
  int *ptr_arr [10];
  int flat [20];
  int arr2 [5] [10];
  int matrix [10] [10];
  int cube [5] [5] [5];
  char str [6];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000133bd);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  iVar2 = array_1d_stack(arr1,5);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar2);
  builtin_strncpy(str,"hello",6);
  iVar2 = array_string(str);
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar2);
                    /* Unresolved local var: int i@[???] */
  paiVar8 = matrix;
  iVar2 = 0;
                    /* Unresolved local var: int j@[???] */
  do {
    iVar3 = 0;
    do {
      iVar6 = 0;
      if (iVar2 == iVar3) {
        iVar6 = iVar3;
      }
      (*paiVar8)[iVar3] = iVar6;
      iVar3 = iVar3 + 1;
    } while (iVar3 != 10);
    iVar2 = iVar2 + 1;
    paiVar8 = paiVar8 + 1;
  } while (iVar2 != 10);
  iVar2 = array_2d_stack(matrix);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar2);
                    /* Unresolved local var: int i@[???] */
  paiVar7 = cube[1];
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar4 = paiVar7 + -5;
    do {
                    /* Unresolved local var: int k@[???] */
      (*(int (*) [5] [5])paiVar4)[0][0] = 1;
      (*(int (*) [5] [5])paiVar4)[0][1] = 1;
      (*(int (*) [5] [5])paiVar4)[0][2] = 1;
      (*(int (*) [5] [5])paiVar4)[0][3] = 1;
      (*(int (*) [5] [5])paiVar4)[0][4] = 1;
      paiVar4 = *(int (*) [5] [5])paiVar4 + 1;
    } while (paiVar7 != paiVar4);
    paiVar7 = paiVar7 + 5;
  } while (paiVar7 != (int (*) [5])&stack0x0000003c);
  iVar2 = array_3d(cube);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar2);
  vla_arr[0] = 10;
  vla_arr[1] = 0x14;
  vla_arr[2] = 0x1e;
  iVar2 = array_vla(3,vla_arr);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",iVar2);
                    /* Unresolved local var: int i@[???] */
  arr2[0][0] = 0;
  arr2[1][0] = 10;
  arr2[2][0] = 0x14;
  arr2[3][0] = 0x1e;
  arr2[4][0] = 0x28;
  iVar2 = array_pointer(arr2,5);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",iVar2);
  a = 10;
  b = 0x14;
  c = 0x1e;
  uVar5 = 0;
  do {
    *(undefined4 *)((int)ptr_arr + uVar5 + 0xc) = 0;
    uVar5 = uVar5 + 4;
  } while (uVar5 < 0x1c);
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  iVar2 = pointer_array(ptr_arr,3);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",iVar2);
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  do {
    flat[iVar2] = iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_single @ 0001191f */

/* WARNING: Unknown calling convention */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 0001192d */

/* WARNING: Unknown calling convention */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 0001193d */

/* WARNING: Unknown calling convention */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 0001194f */

int ptr_increment(int *p,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + p[iVar1];
      iVar1 = iVar1 + 1;
    } while (n != iVar1);
  }
  return iVar2;
}



/* Function: ptr_offset @ 0001197f */

/* WARNING: Unknown calling convention */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 0001198f */

/* WARNING: Unknown calling convention */

int ptr_diff(int *p1,int *p2)

{
  return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 0001199f */

int ptr_void(void *p,int type)

{
  if (type == 0) {
    return *(int *)p;
  }
  if (type == 1) {
    return (int)*(char *)p;
  }
  return -1;
}



/* Function: ptr_const @ 000119c5 */

/* WARNING: Unknown calling convention */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 000119d2 */

/* WARNING: Unknown calling convention */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 000119e2 */

/* WARNING: Unknown calling convention */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 000119f5 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char *args [2];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  args[0] = "test";
  args[1] = (char *)0x0;
  iVar2 = (*f)(p,args);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_cast @ 00011a4b */

/* WARNING: Unknown calling convention */

int ptr_cast(void *p)

{
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00011a56 */

/* WARNING: Unknown calling convention */

void * opaque_handle_create(int size)

{
  return (void *)size;
}



/* Function: opaque_handle_op @ 00011a5f */

/* WARNING: Unknown calling convention */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: test_pointer_types @ 00011a6a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int val3;
  int *ptr3;
  int **pptr3;
  int val11;
  int arr4 [5];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013430);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  val3 = 5;
  ptr3 = &val3;
  pptr3 = &ptr3;
  iVar2 = ptr_triple(&pptr3);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",iVar2);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  iVar2 = ptr_increment(arr4,5);
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar2);
  __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
  __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
  __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
  __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  iVar2 = ptr_func_simple(double_value,5);
  __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",iVar2);
  val11 = 5;
  iVar2 = ptr_func_complex(complex_callback,&val11);
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",iVar2);
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: struct_simple @ 00011c3d */

/* WARNING: Unknown calling convention */

int struct_simple(Point3D *p)

{
  return p->y + p->x + p->z;
}



/* Function: struct_array @ 00011c4e */

int struct_array(Point3D *pts,int n)

{
  Point3D *pPVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    pPVar1 = pts + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + pts->y + pts->x + pts->z;
      pts = pts + 1;
    } while (pts != pPVar1);
  }
  return iVar2;
}



/* Function: struct_nested @ 00011c88 */

/* WARNING: Unknown calling convention */

int struct_nested(Rect *r)

{
  return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00011c96 */

/* WARNING: Unknown calling convention */

int struct_deep(Widget *w)

{
  return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00011ca5 */

/* WARNING: Unknown calling convention */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  iVar1 = 0;
  if (node->next != (Node *)0x0) {
    iVar1 = node->next->data;
  }
  return node->data + iVar1;
}



/* Function: struct_bitfields @ 00011cc0 */

/* WARNING: Unknown calling convention */

int struct_bitfields(Flags *f)

{
  byte bVar1;
  
  bVar1 = *(byte *)f;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00011cf0 */

/* WARNING: Unknown calling convention */

int union_type(UnionData *u,int type)

{
  int iVar1;
  
  if (type == 0) {
    iVar1 = u->i;
  }
  else if (type == 1) {
    iVar1 = (int)ROUND(u->f);
  }
  else {
    iVar1 = (int)u->bytes[0];
  }
  return iVar1;
}



/* Function: union_array @ 00011d3e */

int union_array(UnionData *arr,int n)

{
  UnionData *pUVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (n < 1) {
    iVar2 = 0;
  }
  else {
    pUVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + arr->i;
      arr = arr + 1;
    } while (arr != pUVar1);
  }
  return iVar2;
}



/* Function: enum_type @ 00011d6b */

/* WARNING: Unknown calling convention */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00011d79 */

int enum_switch(State s)

{
  int iVar1;
  
  if (s == STATE_PAUSED) {
    return 0x32;
  }
  if (s < STATE_STOPPED) {
    return -(uint)(s != STATE_IDLE) & 100;
  }
  iVar1 = -99;
  if (s == STATE_STOPPED) {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 00011daa */

/* WARNING: Unknown calling convention */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00011dbe */

int linked_list(Node *head)

{
  int iVar1;
  
  if (head == (Node *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + head->data;
      head = head->next;
    } while (head != (Node *)0x0);
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011de2 */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
  if (head == (DNode *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + head->data;
      head = head->next;
    } while (head != (DNode *)0x0);
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011e06 */

/* WARNING: Unknown calling convention */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (root != (TreeNode *)0x0) {
    iVar3 = binary_tree_sum(root->left);
    iVar1 = root->data;
    iVar2 = binary_tree_sum(root->right);
    iVar2 = iVar2 + iVar3 + iVar1;
  }
  return iVar2;
}



/* Function: binary_tree @ 00011e41 */

/* WARNING: Unknown calling convention */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00011e55 */

int graph_traverse(Graph *g)

{
  int *piVar1;
  Edge *pEVar2;
  Edge **ppEVar3;
  int iVar4;
  
  piVar1 = &g->numVertices;
                    /* Unresolved local var: int i@[???] */
  if (*piVar1 < 1) {
    iVar4 = 0;
  }
  else {
    ppEVar3 = g->adjList;
    iVar4 = 0;
    do {
                    /* Unresolved local var: Edge * edge@[???] */
      for (pEVar2 = g->adjList[0]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
        iVar4 = iVar4 + pEVar2->dest;
      }
      g = (Graph *)(g->adjList + 1);
    } while (g != (Graph *)(ppEVar3 + *piVar1));
  }
  return iVar4;
}



/* Function: test_composite_types @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int iVar1;
  int iVar2;
  Edge **ppEVar3;
  int in_GS_OFFSET;
  byte bVar4;
  Node node2;
  Node node1;
  Flags f;
  Device dev;
  Edge e1;
  TreeNode tree;
  UnionData arr_u [3];
  Point3D pts [2];
  Node list [3];
  DNode dlist [2];
  Graph g;
  
  bVar4 = 0;
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013526);
  __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",6);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  iVar2 = struct_array(pts,2);
  __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",iVar2);
  __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
  __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
  node2.data = 0x14;
  node2.next = (Node *)0x0;
  node1.data = 10;
  node1.next = &node2;
  iVar2 = struct_with_ptr(&node1);
  __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",iVar2);
  f._0_2_ = 0x191d;
  f._4_4_ = f._4_4_ & 0xfff00000;
  iVar2 = struct_bitfields(&f);
  __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",iVar2);
  __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
  arr_u[0].i = 10;
  arr_u[1].i = 0x14;
  arr_u[2].i = 0x1e;
  iVar2 = union_array(arr_u,3);
  __printf_chk(1,"CMP-L2-08 (union_array): %d\n",iVar2);
  __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
  __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
  dev.data = 10;
  dev.process = process_int;
  iVar2 = struct_func_ptr(&dev);
  __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",iVar2);
  list[0].data = 10;
  list[0].next = list + 1;
  list[1].data = 0x14;
  list[1].next = list + 2;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  iVar2 = linked_list(list);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar2);
  dlist[0].data = 10;
  dlist[1].prev = dlist;
  dlist[0].next = dlist + 1;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  iVar2 = doubly_linked_list(dlist[1].prev);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar2);
  tree.data = 100;
  tree.left = (TreeNode *)0x0;
  tree.right = (TreeNode *)0x0;
  iVar2 = binary_tree_sum(&tree);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar2);
  e1.dest = 1;
  e1.next = (Edge *)0x0;
  ppEVar3 = g.adjList + 1;
  for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppEVar3 = (Edge *)0x0;
    ppEVar3 = ppEVar3 + (uint)bVar4 * -2 + 1;
  }
  g.adjList[0] = &e1;
  g.numVertices = 2;
  iVar2 = graph_traverse(&g);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",iVar2);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: main @ 000121e6 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 0001220b */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __stack_chk_fail_local @ 00012210 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012230 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001224a) */
/* WARNING: Removing unreachable block (ram,0x00012260) */
/* WARNING: Removing unreachable block (ram,0x0001226d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001227c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 71 */
