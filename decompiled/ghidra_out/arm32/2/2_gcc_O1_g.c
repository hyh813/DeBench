/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/2/2_gcc_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000103b8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 0001042c */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010470 */

/* WARNING: Removing unreachable block (ram,0x00010484) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010494 */

/* WARNING: Removing unreachable block (ram,0x000104a4) */
/* WARNING: Removing unreachable block (ram,0x000104ac) */
/* WARNING: Removing unreachable block (ram,0x000104b0) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000104c0 */

/* WARNING: Removing unreachable block (ram,0x000104dc) */
/* WARNING: Removing unreachable block (ram,0x000104e4) */
/* WARNING: Removing unreachable block (ram,0x000104e8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 000104f8 */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: double_value @ 00010524 */

int double_value(int x)

{
  return x << 1;
}



/* Function: process_int @ 0001052c */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: complex_callback @ 00010538 */

int complex_callback(int *p,char **args)

{
  *p = *p + 10;
  return (uint)(*args != (char *)0x0);
}



/* Function: process_char @ 00010554 */

char process_char(char c)

{
  if ((int)c - 0x41U < 0x1a) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 00010568 */

short process_short(short a,short b)

{
  return a + b;
}



/* Function: process_long @ 00010578 */

long process_long(long x)

{
  return x << 1;
}



/* Function: process_ll @ 00010580 */

longlong process_ll(longlong x)

{
  longlong lVar1;
  
  lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + (int)x * (int)((ulonglong)x >> 0x20) * 2,
                  (int)lVar1);
}



/* Function: process_float @ 00010594 */

float process_float(float f)

{
  undefined4 in_r0;
  undefined4 uVar1;
  float fVar2;
  
  uVar1 = __mulsf3(in_r0,0x3fc00000);
  fVar2 = (float)__addsf3(uVar1,0x3f000000);
  return fVar2;
}



/* Function: process_double @ 000105ac */

double process_double(double d)

{
  undefined4 in_r0;
  undefined4 in_r1;
  undefined4 uVar1;
  undefined4 extraout_s1;
  undefined8 uVar2;
  
  uVar2 = __muldf3(SUB84(d,0),in_r0,in_r1,0,0x3fe00000);
  uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0x9999999a,0x3fb99999);
  return (double)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_ld @ 000105d8 */

longdouble process_ld(longdouble d)

{
  undefined4 uVar1;
  undefined4 extraout_s1;
  undefined8 uVar2;
  
  uVar2 = __muldf3(SUB84(d,0));
  uVar1 = __aeabi_dadd((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),0,0x3ff00000);
  return (longdouble)CONCAT44(extraout_s1,uVar1);
}



/* Function: process_bool @ 000105fc */

_Bool process_bool(int x)

{
  byte bVar1;
  
  if (x < 1) {
    bVar1 = 0;
  }
  else {
    bVar1 = 1 - ((byte)x & 1);
  }
  return (_Bool)(bVar1 & 1);
}



/* Function: const_param @ 00010614 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 00010620 */

int volatile_access(int *p)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  return *p + *p;
}



/* Function: test_data_types_l1 @ 00010630 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  int vol_value;
  
                    /* Unresolved local var: int value@[???] */
  puts(&DAT_00011fa0);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x61);
  __printf_chk(1,"DT-L1-01 (process_char): %c\n",0x62);
  __printf_chk(1,"DT-L1-02 (process_short): %d\n",300);
  __printf_chk(1,"DT-L1-03 (process_int): %d\n",0xb);
  __printf_chk(1,"DT-L1-04 (process_long): %ld\n",200);
  __printf_chk(1,"DT-L1-05 (process_ll): %lld\n",10000,0);
  __printf_chk(1,"DT-L1-06 (process_float): %.2f\n",0,0x400c0000);
  __printf_chk(1,"DT-L1-07 (process_double): %.2f\n",0xcccccccd,0x4000cccc);
  __printf_chk(1,"DT-L1-08 (process_ld): %.2Lf\n",0,0x40240000);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n");
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-09 (process_bool): %d\n",0);
  __printf_chk(1,"DT-L1-10 (const_param): %d\n",0xf);
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 00010794 */

int array_1d_stack(int *arr,int n)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    piVar3 = arr + -1;
    piVar2 = piVar3 + n;
    iVar1 = 0;
    do {
      piVar3 = piVar3 + 1;
      iVar1 = iVar1 + *piVar3;
    } while (piVar3 != piVar2);
    return iVar1;
  }
  return 0;
}



/* Function: array_string @ 000107c4 */

int array_string(char *str)

{
  char *pcVar1;
  int iVar2;
  
                    /* Unresolved local var: int len@[???] */
  if (*str != '\0') {
    iVar2 = 1 - (int)str;
    do {
      pcVar1 = str + iVar2;
      str = str + 1;
    } while (*str != '\0');
    return (int)pcVar1;
  }
  return 0;
}



/* Function: array_2d_stack @ 000107f4 */

int array_2d_stack(int (*arr) [10])

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + (*arr)[iVar2];
    iVar2 = iVar2 + 0xb;
  } while (iVar2 != 0x6e);
  return iVar1;
}



/* Function: array_3d @ 00010818 */

int array_3d(int (*arr) [5] [5])

{
  int iVar1;
  int (*paiVar2) [5];
  int (*paiVar3) [5];
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  paiVar2 = arr[1];
  iVar1 = 0;
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar3 = paiVar2 + -5;
    do {
                    /* Unresolved local var: int k@[???] */
      iVar1 = iVar1 + (*(int (*) [5])*paiVar3)[0] + (*(int (*) [5])*paiVar3)[1] +
              (*(int (*) [5])*paiVar3)[2] + (*(int (*) [5])*paiVar3)[3] +
              (*(int (*) [5])*paiVar3)[4];
      paiVar3 = paiVar3 + 1;
    } while (paiVar3 != paiVar2);
    paiVar2 = paiVar2 + 5;
  } while (paiVar2 != arr[6]);
  return iVar1;
}



/* Function: array_vla @ 0001086c */

int array_vla(int n,int *arr)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    piVar2 = arr + -1;
    piVar3 = piVar2 + n;
    iVar1 = 0;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + *piVar2;
    } while (piVar2 != piVar3);
    return iVar1;
  }
  return 0;
}



/* Function: array_pointer @ 0001089c */

int array_pointer(int (*arr) [10],int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + (*arr)[iVar2];
      iVar2 = iVar2 + 10;
    } while (iVar2 != n * 10);
    return iVar1;
  }
  return 0;
}



/* Function: pointer_array @ 000108d8 */

int pointer_array(int **arr,int n)

{
  int iVar1;
  int **ppiVar2;
  int iVar3;
  int iVar4;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int count@[???] */
  iVar4 = n;
  if (9 < n) {
    iVar4 = 10;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    ppiVar2 = arr + -1;
    iVar3 = 0;
    iVar1 = 0;
    do {
      ppiVar2 = ppiVar2 + 1;
      if (*ppiVar2 != (int *)0x0) {
        iVar1 = iVar1 + **ppiVar2;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
    return iVar1;
  }
  return 0;
}



/* Function: array_complex_index @ 00010920 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  if (w <= x || (x | y) < 0) {
    return -1;
  }
  if (h <= y) {
    return -1;
  }
  return arr[y * w + x];
}



/* Function: array_oob @ 00010964 */

int array_oob(int *arr,int n)

{
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (-1 < n) {
    piVar2 = arr + -1;
    iVar1 = 0;
    do {
      piVar2 = piVar2 + 1;
      iVar1 = iVar1 + *piVar2;
    } while (piVar2 != arr + n);
    return iVar1;
  }
  return 0;
}



/* Function: test_array_types @ 00010994 */

/* WARNING: Removing unreachable block (ram,0x00010bf0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  int iVar1;
  int (*paiVar2) [5];
  int iVar3;
  int *piVar4;
  int **ppiVar5;
  int iVar6;
  int (*paiVar7) [5];
  int *piVar8;
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
  
  puts(&DAT_00012120);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  iVar1 = array_1d_stack(arr1,5);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar1);
  str[0] = 'h';
  str[1] = 'e';
  str[2] = 'l';
  str[3] = 'l';
  str[4] = 'o';
  str[5] = '\0';
  iVar1 = array_string(str);
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar1);
                    /* Unresolved local var: int i@[???] */
  piVar8 = arr2[4] + 9;
  iVar1 = 0;
  do {
                    /* Unresolved local var: int j@[???] */
    iVar6 = 0;
    piVar4 = piVar8;
    do {
      iVar3 = iVar6;
      if (iVar1 != iVar6) {
        iVar3 = 0;
      }
      piVar4 = piVar4 + 1;
      *piVar4 = iVar3;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 10);
    iVar1 = iVar1 + 1;
    piVar8 = piVar8 + 10;
  } while (iVar1 != 10);
  iVar1 = array_2d_stack(matrix);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar1);
                    /* Unresolved local var: int i@[???] */
  paiVar2 = cube[0];
                    /* Unresolved local var: int j@[???]
                       Unresolved local var: int k@[???] */
  do {
    iVar1 = 0;
    paiVar7 = paiVar2;
    do {
      (*(int (*) [5])*paiVar7)[0] = 1;
      (*(int (*) [5])*paiVar7)[1] = 1;
      (*(int (*) [5])*paiVar7)[2] = 1;
      (*(int (*) [5])*paiVar7)[3] = 1;
      (*(int (*) [5])*paiVar7)[4] = 1;
      iVar1 = iVar1 + 1;
      paiVar7 = paiVar7 + 1;
    } while (iVar1 != 5);
    paiVar2 = paiVar2 + 5;
  } while (paiVar2 != (int (*) [5])str);
  iVar1 = array_3d(cube);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar1);
  vla_arr[0] = 10;
  vla_arr[1] = 0x14;
  vla_arr[2] = 0x1e;
  iVar1 = array_vla(3,vla_arr);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",iVar1);
                    /* Unresolved local var: int i@[???] */
  arr2[0][0] = 0;
  arr2[1][0] = 10;
  arr2[2][0] = 0x14;
  arr2[3][0] = 0x1e;
  arr2[4][0] = 0x28;
  iVar1 = array_pointer(arr2,5);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",iVar1);
  a = 10;
  b = 0x14;
  c = 0x1e;
  ptr_arr[3] = (int *)0x0;
  ptr_arr[4] = (int *)0x0;
  ptr_arr[5] = (int *)0x0;
  ptr_arr[6] = (int *)0x0;
  ptr_arr[7] = (int *)0x0;
  ptr_arr[8] = (int *)0x0;
  ptr_arr[9] = (int *)0x0;
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  iVar1 = pointer_array(ptr_arr,3);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",iVar1);
                    /* Unresolved local var: int i@[???] */
  ppiVar5 = ptr_arr + 9;
  piVar8 = (int *)0x0;
  do {
    ppiVar5 = ppiVar5 + 1;
    *ppiVar5 = piVar8;
    piVar8 = (int *)((int)piVar8 + 1);
  } while (piVar8 != (int *)0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
  return;
}



/* Function: ptr_single @ 00010c28 */

int ptr_single(int *p)

{
  return *p + 10;
}



/* Function: ptr_double @ 00010c34 */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 00010c44 */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00010c58 */

int ptr_increment(int *p,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + *p;
      iVar2 = iVar2 + 1;
      p = p + 1;
    } while (n != iVar2);
    return iVar1;
  }
  return 0;
}



/* Function: ptr_offset @ 00010c8c */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00010c94 */

int ptr_diff(int *p1,int *p2)

{
  return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00010ca0 */

int ptr_void(void *p,int type)

{
  uint uVar1;
  
  if (type == 0) {
    return *(int *)p;
  }
  if (type == 1) {
    uVar1 = (uint)*(byte *)p;
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: ptr_const @ 00010cc0 */

int ptr_const(int *p)

{
  return *p << 1;
}



/* Function: ptr_const_ptr @ 00010ccc */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00010ce0 */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00010cf4 */

/* WARNING: Removing unreachable block (ram,0x00010d4c) */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  char *args [2];
  
  args[0] = "test";
  args[1] = (char *)0x0;
  iVar1 = (*f)(p,args);
  return iVar1;
}



/* Function: ptr_cast @ 00010d58 */

int ptr_cast(void *p)

{
                    /* Unresolved local var: int * int_ptr@[DW_OP_reg0(r0)]
                       Unresolved local var: char * char_ptr@[DW_OP_reg0(r0)]
                       Unresolved local var: int * back_ptr@[DW_OP_reg0(r0)] */
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00010d60 */

void * opaque_handle_create(int size)

{
  return (void *)size;
}



/* Function: opaque_handle_op @ 00010d64 */

int opaque_handle_op(void *handle)

{
  return (int)handle << 1;
}



/* Function: test_pointer_types @ 00010d6c */

/* WARNING: Removing unreachable block (ram,0x00010eec) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int iVar1;
  int val3;
  int *ptr3;
  int **pptr3;
  int val11;
  int arr4 [5];
  
                    /* Unresolved local var: int val1@[???]
                       Unresolved local var: int val2@[???]
                       Unresolved local var: int * ptr2@[???]
                       Unresolved local var: int * * pptr2@[???]
                       Unresolved local var: int * * * ppptr3@[???]
                       Unresolved local var: int[5] arr5@[???]
                       Unresolved local var: int[5] arr6@[???]
                       Unresolved local var: int val7@[???]
                       Unresolved local var: char c7@[???]
                       Unresolved local var: int val8@[???]
                       Unresolved local var: int val9@[???]
                       Unresolved local var: int val12@[???]
                       Unresolved local var: void * handle@[???] */
  puts(&DAT_0001224c);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  val3 = 5;
  pptr3 = &ptr3;
  ptr3 = &val3;
  iVar1 = ptr_triple(&pptr3);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",iVar1);
  arr4[0] = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
  iVar1 = ptr_increment(arr4,5);
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar1);
  __printf_chk(1,"PTR-L2-05 (ptr_offset): %d\n",0x1e);
  __printf_chk(1,"PTR-L2-06 (ptr_diff): %d\n",4);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x2a);
  __printf_chk(1,"PTR-L2-07 (ptr_void): %d\n",0x41);
  __printf_chk(1,"PTR-L2-08 (ptr_const): %d\n",0x14);
  __printf_chk(1,"PTR-L2-09 (ptr_const_ptr): %d\n",0xf);
  iVar1 = ptr_func_simple(double_value,5);
  __printf_chk(1,"PTR-L2-10 (ptr_func_simple): %d\n",iVar1);
  val11 = 5;
  iVar1 = ptr_func_complex(complex_callback,&val11);
  __printf_chk(1,"PTR-L2-11 (ptr_func_complex): %d\n",iVar1);
  __printf_chk(1,"PTR-L2-12 (ptr_cast): 0x%x\n",0x12345678);
  __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
  return;
}



/* Function: struct_simple @ 00010f3c */

int struct_simple(Point3D *p)

{
  return p->x + p->y + p->z;
}



/* Function: struct_array @ 00010f54 */

int struct_array(Point3D *pts,int n)

{
  int iVar1;
  Point3D *pPVar2;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    pPVar2 = pts + n;
    iVar1 = 0;
    do {
      iVar1 = iVar1 + pts->x + pts->y + pts->z;
      pts = pts + 1;
    } while (pts != pPVar2);
    return iVar1;
  }
  return 0;
}



/* Function: struct_nested @ 00010f9c */

int struct_nested(Rect *r)

{
  return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00010fac */

int struct_deep(Widget *w)

{
  return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00010fbc */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  if (node->next == (Node *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = node->next->data;
  }
  return node->data + iVar1;
}



/* Function: struct_bitfields @ 00010fd8 */

int struct_bitfields(Flags *f)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)f;
  return (uVar1 & 1) + ((uVar1 << 0x1d) >> 0x1e) + ((uVar1 << 0x1a) >> 0x1d) +
         (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00010ffc */

int union_type(UnionData *u,int type)

{
  int iVar1;
  
  if (type == 0) {
    return u->i;
  }
  if (type != 1) {
    return (uint)(byte)u->bytes[0];
  }
  iVar1 = __fixsfsi(u->i);
  return iVar1;
}



/* Function: union_array @ 0001102c */

int union_array(UnionData *arr,int n)

{
  int iVar1;
  UnionData *pUVar2;
  UnionData *pUVar3;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (0 < n) {
    pUVar3 = arr + -1;
    pUVar2 = pUVar3 + n;
    iVar1 = 0;
    do {
      pUVar3 = pUVar3 + 1;
      iVar1 = iVar1 + pUVar3->i;
    } while (pUVar3 != pUVar2);
    return iVar1;
  }
  return 0;
}



/* Function: enum_type @ 0001105c */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00011068 */

int enum_switch(State s)

{
  switch(s) {
  case STATE_IDLE:
    return 0;
  case STATE_RUNNING:
    return 100;
  case STATE_PAUSED:
    return 0x32;
  case STATE_STOPPED:
    return -1;
  default:
    return -99;
  }
}



/* Function: struct_func_ptr @ 000110ac */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 000110c0 */

int linked_list(Node *head)

{
  int iVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: Node * current@[DW_OP_reg0(r0)] */
  if (head != (Node *)0x0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + head->data;
      head = head->next;
    } while (head != (Node *)0x0);
    return iVar1;
  }
  return 0;
}



/* Function: doubly_linked_list @ 000110ec */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: DNode * current@[DW_OP_reg0(r0)] */
  if (head != (DNode *)0x0) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + head->data;
      head = head->next;
    } while (head != (DNode *)0x0);
    return iVar1;
  }
  return 0;
}



/* Function: binary_tree_sum @ 00011118 */

int binary_tree_sum(TreeNode *root)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (root != (TreeNode *)0x0) {
    iVar1 = binary_tree_sum(root->left);
    iVar3 = root->data;
    iVar2 = binary_tree_sum(root->right);
    return iVar1 + iVar3 + iVar2;
  }
  return 0;
}



/* Function: binary_tree @ 0001114c */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00011158 */

int graph_traverse(Graph *g)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  if (g->numVertices < 1) {
    return 0;
  }
  piVar2 = &g[-1].numVertices;
  piVar4 = piVar2 + g->numVertices;
  iVar1 = 0;
  do {
    piVar2 = piVar2 + 1;
                    /* Unresolved local var: Edge * edge@[???] */
    for (piVar3 = (int *)*piVar2; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
      iVar1 = iVar1 + *piVar3;
    }
  } while (piVar2 != piVar4);
  return iVar1;
}



/* Function: test_composite_types @ 000111a4 */

/* WARNING: Removing unreachable block (ram,0x00011420) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int iVar1;
  Node node2;
  Node node1;
  Flags f;
  Device dev;
  Edge e1;
  Point3D p1;
  TreeNode tree;
  UnionData arr_u [3];
  Point3D pts [2];
  Node list [3];
  DNode dlist [2];
  Graph g;
  
                    /* Unresolved local var: Rect r@[???]
                       Unresolved local var: Widget w@[???]
                       Unresolved local var: UnionData u@[???] */
  puts(&DAT_000123f4);
  p1.x = 1;
  p1.y = 2;
  p1.z = 3;
  iVar1 = struct_simple(&p1);
  __printf_chk(1,"CMP-L2-01 (struct_simple): %d\n",iVar1);
  pts[0].x = 1;
  pts[0].y = 1;
  pts[0].z = 1;
  pts[1].x = 2;
  pts[1].y = 2;
  pts[1].z = 2;
  iVar1 = struct_array(pts,2);
  __printf_chk(1,"CMP-L2-02 (struct_array): %d\n",iVar1);
  __printf_chk(1,"CMP-L2-03 (struct_nested): %d\n",0x69);
  __printf_chk(1,"CMP-L2-04 (struct_deep): %d\n",0x102);
  node2.data = 0x14;
  node2.next = (Node *)0x0;
  node1.data = 10;
  node1.next = &node2;
  iVar1 = struct_with_ptr(&node1);
  __printf_chk(1,"CMP-L2-05 (struct_with_ptr): %d\n",iVar1);
  f._0_4_ = 0x191d;
  f._4_4_ = 0;
  iVar1 = struct_bitfields(&f);
  __printf_chk(1,"CMP-L2-06 (struct_bitfields): %d\n",iVar1);
  __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
  arr_u[0].i = 10;
  arr_u[1].i = 0x14;
  arr_u[2].i = 0x1e;
  iVar1 = union_array(arr_u,3);
  __printf_chk(1,"CMP-L2-08 (union_array): %d\n",iVar1);
  __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
  __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
  dev.data = 10;
  dev.process = process_int;
  iVar1 = struct_func_ptr(&dev);
  __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",iVar1);
  list[0].data = 10;
  list[0].next = list + 1;
  list[1].data = 0x14;
  list[1].next = list + 2;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  iVar1 = linked_list(list);
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar1);
  dlist[0].data = 10;
  dlist[1].prev = dlist;
  dlist[0].next = dlist + 1;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  iVar1 = doubly_linked_list(dlist[1].prev);
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar1);
  tree.data = 100;
  tree.left = (TreeNode *)0x0;
  tree.right = (TreeNode *)0x0;
  iVar1 = binary_tree_sum(&tree);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar1);
  e1.dest = 1;
  e1.next = (Edge *)0x0;
  memset(g.adjList + 1,0,0x24);
  g.adjList[0] = &e1;
  g.numVertices = 2;
  iVar1 = graph_traverse(&g);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",iVar1);
  return;
}



/* Function: main @ 00011478 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_data_types_l1();
  test_array_types();
  test_pointer_types();
  test_composite_types();
  return 0;
}



/* Function: __muldf3 @ 00011494 */

ulonglong __muldf3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  byte bVar3;
  uint uVar4;
  uint extraout_r2;
  uint extraout_r3;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint unaff_r5;
  uint uVar9;
  uint uVar10;
  uint extraout_r12;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ulonglong uVar14;
  
  uVar14 = CONCAT44(param_2,param_1);
  uVar10 = 0x7ff;
  uVar6 = param_2 >> 0x14 & 0x7ff;
  bVar11 = uVar6 == 0;
  if (!bVar11) {
    unaff_r5 = param_4 >> 0x14 & 0x7ff;
    bVar11 = unaff_r5 == 0;
  }
  if (!bVar11) {
    bVar11 = uVar6 == 0x7ff;
  }
  if (!bVar11) {
    bVar11 = unaff_r5 == 0x7ff;
  }
  if (bVar11) {
    uVar14 = FUN_00011674();
    param_3 = extraout_r2;
    param_4 = extraout_r3;
    uVar10 = extraout_r12;
  }
  uVar4 = (uint)(uVar14 >> 0x20);
  iVar7 = uVar6 + unaff_r5;
  uVar9 = uVar4 ^ param_4;
  uVar4 = uVar4 & ~(uVar10 << 0x15);
  param_4 = param_4 & ~(uVar10 << 0x15);
  uVar6 = uVar4 | 0x100000;
  uVar5 = param_4 | 0x100000;
  if ((uint)uVar14 == 0 && (uVar4 & 0xfffff) == 0 || param_3 == 0 && (param_4 & 0xfffff) == 0) {
    param_3 = (uint)uVar14 | param_3;
    uVar5 = (uVar9 & 0x80000000 | uVar6) ^ uVar5;
    uVar6 = uVar10 >> 1;
    bVar13 = SBORROW4(iVar7,uVar6);
    uVar8 = iVar7 - uVar6;
    bVar11 = uVar8 == 0;
    uVar4 = uVar8;
    if (!bVar11 && (int)uVar6 <= iVar7) {
      bVar13 = SBORROW4(uVar10,uVar8);
      uVar4 = uVar10 - uVar8;
      bVar11 = uVar10 == uVar8;
    }
    if (!bVar11 && (int)uVar4 < 0 == bVar13) {
      return CONCAT44(uVar5 | uVar8 * 0x100000,param_3);
    }
    uVar5 = uVar5 | 0x100000;
    uVar10 = 0;
    bVar13 = SBORROW4(uVar8,1);
    uVar8 = uVar8 - 1;
    bVar11 = uVar8 == 0;
    uVar6 = uVar8;
  }
  else {
    uVar2 = (ulonglong)param_3 * (uVar14 & 0xffffffff);
    uVar14 = (ulonglong)uVar5 * (uVar14 & 0xffffffff) +
             (ulonglong)param_3 * (ulonglong)uVar6 + (uVar2 >> 0x20);
    uVar4 = (uint)uVar14;
    lVar1 = (ulonglong)uVar5 * (ulonglong)uVar6 + (uVar14 >> 0x20);
    uVar10 = (uint)lVar1;
    uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
    if ((int)uVar2 != 0) {
      uVar4 = uVar4 | 1;
    }
    uVar8 = (iVar7 + -0xff) - ((uVar6 < 0x200) + 0x300);
    if (uVar6 < 0x200) {
      bVar3 = (byte)(uVar4 >> 0x1f);
      uVar4 = uVar4 << 1;
      lVar1 = CONCAT44(uVar6 * 2 + (uint)(CARRY4(uVar10,uVar10) || CARRY4(uVar10 * 2,(uint)bVar3)),
                       uVar10 * 2 + (uint)bVar3);
    }
    uVar5 = uVar9 & 0x80000000 | (int)((ulonglong)lVar1 >> 0x20) << 0xb | (uint)lVar1 >> 0x15;
    param_3 = (uint)lVar1 << 0xb | uVar4 >> 0x15;
    uVar10 = uVar4 * 0x800;
    bVar12 = 0xfc < uVar8;
    bVar13 = SBORROW4(uVar8,0xfd);
    uVar9 = uVar8 - 0xfd;
    bVar11 = uVar9 == 0;
    uVar6 = uVar9;
    if (bVar12 && !bVar11) {
      bVar12 = 0x6ff < uVar9;
      bVar13 = SBORROW4(uVar9,0x700);
      uVar6 = uVar8 - 0x7fd;
      bVar11 = uVar9 == 0x700;
    }
    if (!bVar12 || bVar11) {
      bVar11 = 0x7fffffff < uVar10;
      if (uVar10 == 0x80000000) {
        bVar11 = (bool)((byte)(uVar4 >> 0x15) & 1);
      }
      return CONCAT44(uVar5 + uVar8 * 0x100000 + (uint)CARRY4(param_3,(uint)bVar11),param_3 + bVar11
                     );
    }
  }
  if (!bVar11 && (int)uVar6 < 0 == bVar13) {
    return (ulonglong)(uVar5 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  if (-0x36 < (int)uVar8) {
    uVar6 = -uVar8;
    uVar4 = uVar6 - 0x20;
    if (0x1f < (int)uVar6) {
      uVar9 = param_3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff);
      uVar6 = (uVar5 >> (uVar4 & 0xff) & ~((uVar5 & 0x80000000) >> (uVar4 & 0xff))) -
              ((int)uVar9 >> 0x1f);
      if ((uVar10 == 0 && param_3 << (0x20 - uVar4 & 0xff) == 0) && (uVar9 & 0x7fffffff) == 0) {
        uVar6 = uVar6 & ~(uVar9 >> 0x1f);
      }
      return CONCAT44(uVar5,uVar6) & 0x80000000ffffffff;
    }
    if (uVar6 - 0x14 != 0 && -0xd < (int)uVar4) {
      uVar4 = 0xc - (uVar6 - 0x14);
      uVar6 = param_3 << (uVar4 & 0xff);
      uVar4 = param_3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff);
      uVar9 = uVar4 + -((int)uVar6 >> 0x1f);
      if (uVar10 == 0 && (uVar6 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar6 >> 0x1f);
      }
      return CONCAT44((uVar5 & 0x80000000) + (uint)CARRY4(uVar4,-((int)uVar6 >> 0x1f)),uVar9);
    }
    uVar4 = param_3 << (uVar8 + 0x20 & 0xff);
    uVar9 = param_3 >> (uVar6 & 0xff) | uVar5 << (uVar8 + 0x20 & 0xff);
    uVar8 = uVar9 + -((int)uVar4 >> 0x1f);
    if (uVar10 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar8 = uVar8 & ~(uVar4 >> 0x1f);
    }
    return CONCAT44((uVar5 & 0x80000000) + ((uVar5 & 0x7fffffff) >> (uVar6 & 0xff)) +
                    (uint)CARRY4(uVar9,-((int)uVar4 >> 0x1f)),uVar8);
  }
  return (ulonglong)(uVar5 & 0x80000000) << 0x20;
}



/* Function: FUN_00011674 @ 00011674 */

ulonglong FUN_00011674(int param_1,uint param_2,int param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint unaff_r4;
  uint uVar4;
  uint uVar5;
  uint in_r12;
  
  uVar4 = in_r12 & param_4 >> 0x14;
  if (unaff_r4 != in_r12 && uVar4 != in_r12) {
    if (param_1 == 0 && (param_2 & 0x7fffffff) == 0 || param_3 == 0 && (param_4 & 0x7fffffff) == 0)
    {
      return (ulonglong)((param_2 ^ param_4) & 0x80000000) << 0x20;
    }
    if (unaff_r4 == 0) {
      uVar5 = param_2 & 0x80000000;
      do {
        iVar2 = param_1 >> 0x1f;
        param_1 = param_1 << 1;
        param_2 = param_2 * 2 - iVar2;
      } while ((param_2 & 0x100000) == 0);
      param_2 = param_2 | uVar5;
      if (uVar4 != 0) {
        return CONCAT44(param_2,param_1);
      }
    }
    do {
      iVar2 = param_3 >> 0x1f;
      param_3 = param_3 << 1;
      param_4 = param_4 * 2 - iVar2;
    } while ((param_4 & 0x100000) == 0);
    return CONCAT44(param_2,param_1);
  }
  bVar1 = (param_2 & 0x7fffffff) != 0;
  uVar5 = param_4;
  iVar2 = param_3;
  if (param_1 != 0 || bVar1) {
    uVar5 = param_2;
    iVar2 = param_1;
  }
  uVar3 = uVar5;
  if ((((param_1 != 0 || bVar1) && (param_3 != 0 || (param_4 & 0x7fffffff) != 0)) &&
      ((unaff_r4 != in_r12 || (iVar2 == 0 && (uVar5 & 0xfffff) == 0)))) &&
     ((uVar4 != in_r12 ||
      (iVar2 = param_3, uVar3 = param_4, param_3 == 0 && (param_4 & 0xfffff) == 0)))) {
    return (ulonglong)((uVar5 ^ param_4) & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3,iVar2) | 0x7ff8000000000000;
}



/* Function: __mulsf3 @ 00011700 */

uint __mulsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  
  uVar3 = param_1 >> 0x17 & 0xff;
  bVar10 = uVar3 == 0;
  if (!bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = uVar3 == 0xff;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff;
  }
  if (bVar10) {
    param_4 = param_2 >> 0x17 & 0xff;
    if (uVar3 == 0xff || param_4 == 0xff) {
      uVar9 = param_2;
      if (param_1 != 0 && param_1 != 0x80000000) {
        uVar9 = param_1;
      }
      uVar5 = uVar9;
      if (((((param_1 == 0 || param_1 == 0x80000000) || param_2 == 0) || param_2 == 0x80000000) ||
          ((uVar3 == 0xff && ((uVar9 & 0x7fffff) != 0)))) ||
         ((param_4 == 0xff && (uVar5 = param_2, (param_2 & 0x7fffff) != 0)))) {
        return uVar5 | 0x7fc00000;
      }
      uVar9 = uVar9 ^ param_2;
      goto LAB_0001187c;
    }
    if ((param_1 & 0x7fffffff) == 0 || (param_2 & 0x7fffffff) == 0) {
      return (param_1 ^ param_2) & 0x80000000;
    }
    bVar10 = uVar3 == 0;
    uVar9 = param_1 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_1 = param_1 << 1;
        bVar10 = (param_1 & 0x800000) == 0;
      }
      if (!bVar10) break;
      uVar3 = uVar3 - 1;
    }
    param_1 = param_1 | uVar9;
    bVar10 = param_4 == 0;
    uVar9 = param_2 & 0x80000000;
    while( true ) {
      if (bVar10) {
        param_2 = param_2 << 1;
        bVar10 = (param_2 & 0x800000) == 0;
      }
      if (!bVar10) break;
      param_4 = param_4 - 1;
    }
    param_2 = param_2 | uVar9;
  }
  iVar4 = uVar3 + param_4;
  uVar9 = param_1 ^ param_2;
  uVar3 = param_1 << 9;
  bVar10 = uVar3 == 0;
  if (!bVar10) {
    param_2 = param_2 << 9;
    bVar10 = param_2 == 0;
  }
  if (bVar10) {
    if (uVar3 == 0) {
      param_2 = param_2 << 9;
    }
    uVar9 = uVar9 & 0x80000000 | param_1 & 0x7fffff | param_2 >> 9;
    bVar11 = SBORROW4(iVar4,0x7f);
    iVar6 = iVar4 + -0x7f;
    bVar10 = iVar6 == 0;
    iVar7 = iVar6;
    if (!bVar10 && 0x7e < iVar4) {
      bVar11 = SBORROW4(0xff,iVar6);
      iVar7 = -iVar6 + 0xff;
      bVar10 = -iVar6 == -0xff;
    }
    if (!bVar10 && iVar7 < 0 == bVar11) {
      return uVar9 | iVar6 * 0x800000;
    }
    uVar9 = uVar9 | 0x800000;
    uVar8 = 0;
    bVar11 = SBORROW4(iVar6,1);
    uVar5 = iVar4 - 0x80;
    bVar10 = uVar5 == 0;
    uVar3 = uVar5;
  }
  else {
    lVar2 = (ulonglong)(param_2 >> 5 | 0x8000000) * (ulonglong)(uVar3 >> 5 | 0x8000000);
    bVar10 = (uint)((ulonglong)lVar2 >> 0x20) < 0x800000;
    if (bVar10) {
      lVar2 = lVar2 * 2;
    }
    uVar8 = (uint)lVar2;
    uVar9 = uVar9 & 0x80000000 | (uint)((ulonglong)lVar2 >> 0x20);
    uVar5 = iVar4 - (bVar10 + 0x7f);
    bVar11 = SBORROW4(uVar5,0xfd);
    bVar10 = uVar5 == 0xfd;
    uVar3 = uVar5 - 0xfd;
    if (uVar5 < 0xfe) {
      uVar3 = uVar9 + uVar5 * 0x800000 + (uint)(0x7fffffff < uVar8);
      if (uVar8 == 0x80000000) {
        uVar3 = uVar3 & 0xfffffffe;
      }
      return uVar3;
    }
  }
  if (bVar10 || (int)uVar3 < 0 != bVar11) {
    if (-0x19 < (int)uVar5) {
      uVar1 = (uVar9 << 1) >> (-uVar5 & 0xff);
      uVar3 = uVar9 << (uVar5 + 0x20 & 0xff);
      uVar9 = (uVar9 & 0x80000000 | uVar1 >> 1) + (uint)((byte)uVar1 & 1);
      if (uVar8 == 0 && (uVar3 & 0x7fffffff) == 0) {
        uVar9 = uVar9 & ~(uVar3 >> 0x1f);
      }
      return uVar9;
    }
    return uVar9 & 0x80000000;
  }
LAB_0001187c:
  return uVar9 & 0x80000000 | 0x7f800000;
}



/* Function: __aeabi_drsub @ 00011898 */

void __aeabi_drsub(undefined4 param_1,uint param_2)

{
  __aeabi_dadd(param_1,param_2 ^ 0x80000000);
  return;
}



/* Function: __subdf3 @ 000118a0 */

ulonglong __subdf3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar8 = param_4 ^ 0x80000000;
  uVar11 = param_2 << 1;
  param_4 = param_4 << 1;
  iVar10 = (int)uVar11 >> 0x15;
  iVar1 = (int)param_4 >> 0x15;
  if ((((uVar11 == param_4 && param_1 == param_3 || uVar11 == 0 && param_1 == 0) ||
       param_4 == 0 && param_3 == 0) || iVar10 == -1) || iVar1 == -1) {
    if (iVar10 == -1 || iVar1 == -1) {
      uVar11 = param_3;
      uVar12 = uVar8;
      if (iVar10 == -1) {
        uVar11 = param_1;
        uVar12 = param_2;
      }
      if (iVar10 != -1 || iVar1 != -1) {
        param_3 = uVar11;
        uVar8 = uVar12;
      }
      bVar14 = (uVar12 & 0xfffff) == 0;
      bVar15 = uVar11 == 0 && bVar14;
      if (uVar11 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (uVar8 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar12 != uVar8) {
        uVar12 = uVar12 | 0x80000;
      }
      return CONCAT44(uVar12,uVar11);
    }
    if (uVar11 != param_4 || param_1 != param_3) {
      if (uVar11 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = uVar8;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != uVar8) {
      return 0;
    }
    if (uVar11 >> 0x15 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar11 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar11 = uVar11 | 0x80000000;
      }
      return CONCAT44(uVar11,param_1 << 1);
    }
    if (uVar11 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_00011b14:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar11 = uVar11 >> 0x15;
  param_4 = param_4 >> 0x15;
  uVar12 = param_4 - uVar11;
  bVar14 = uVar12 != 0;
  if (param_4 < uVar11) {
    uVar12 = -uVar12;
  }
  uVar6 = param_1;
  uVar9 = param_2;
  if (bVar14 && uVar11 <= param_4) {
    uVar11 = uVar11 + uVar12;
    uVar6 = param_3;
    uVar9 = uVar8;
    param_3 = param_1;
    uVar8 = param_2;
  }
  if (0x36 < uVar12) {
    return CONCAT44(uVar9,uVar6);
  }
  uVar5 = uVar9 & 0xfffff | 0x100000;
  if ((uVar9 & 0x80000000) != 0) {
    bVar14 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar9 = uVar8 & 0xfffff | 0x100000;
  if ((uVar8 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar9 = -(uVar9 + bVar14);
  }
  if (uVar11 == uVar12) {
    uVar9 = uVar9 ^ 0x100000;
    if (uVar11 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar11 = 1;
    }
    else {
      uVar12 = uVar12 - 1;
    }
  }
  uVar8 = -uVar12 + 0x20;
  if ((int)uVar12 < 0x21) {
    uVar13 = param_3 << (uVar8 & 0xff);
    param_3 = param_3 >> (uVar12 & 0xff);
    uVar4 = uVar6 + param_3;
    uVar7 = uVar9 << (uVar8 & 0xff);
    uVar8 = uVar4 + uVar7;
    uVar12 = uVar5 + CARRY4(uVar6,param_3) + ((int)uVar9 >> (uVar12 & 0xff)) +
             (uint)CARRY4(uVar4,uVar7);
  }
  else {
    uVar13 = uVar9 << (-uVar12 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar13 = uVar13 | 2;
    }
    uVar12 = (int)uVar9 >> (uVar12 - 0x20 & 0xff);
    uVar8 = uVar6 + uVar12;
    uVar12 = uVar5 + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar12);
  }
  param_2 = uVar12 & 0x80000000;
  uVar6 = uVar12;
  if ((int)uVar12 < 0) {
    bVar14 = uVar13 == 0;
    uVar13 = -uVar13;
    uVar6 = -uVar8;
    uVar8 = -(uVar8 + !bVar14);
    uVar6 = -(uVar12 + (bVar14 <= uVar6));
  }
  if (0xfffff < uVar6) {
    uVar9 = uVar11 - 1;
    if (0x1fffff < uVar6) {
      bVar2 = (byte)uVar6;
      uVar6 = uVar6 >> 1;
      bVar3 = (byte)uVar8;
      uVar8 = (uint)(bVar2 & 1) << 0x1f | uVar8 >> 1;
      uVar13 = (uint)(bVar3 & 1) << 0x1f | uVar13 >> 1;
      uVar9 = uVar11;
      if (0xffbfffff < uVar11 * 0x200000) goto LAB_00011b14;
    }
LAB_000119bc:
    bVar14 = 0x7fffffff < uVar13;
    if (uVar13 == 0x80000000) {
      bVar14 = (bool)((byte)uVar8 & 1);
    }
    return CONCAT44(uVar6 + uVar9 * 0x100000 + (uint)CARRY4(uVar8,(uint)bVar14) | param_2,
                    uVar8 + bVar14);
  }
  bVar2 = (byte)(uVar13 >> 0x1f);
  uVar13 = uVar13 << 1;
  uVar9 = uVar8 * 2;
  bVar14 = CARRY4(uVar8,uVar8);
  uVar8 = uVar8 * 2 + (uint)bVar2;
  uVar6 = uVar6 * 2 + (uint)(bVar14 || CARRY4(uVar9,(uint)bVar2));
  uVar9 = uVar11 - 2;
  if (uVar11 - 1 != 0 && 0xfffff < uVar6) goto LAB_000119bc;
  uVar11 = uVar8;
  uVar5 = uVar6;
  if (uVar6 == 0) {
    uVar11 = 0;
    uVar5 = uVar8;
  }
  iVar10 = LZCOUNT(uVar5);
  if (uVar6 == 0) {
    iVar10 = iVar10 + 0x20;
  }
  uVar4 = iVar10 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar7 = iVar10 - 0x2b;
  bVar14 = uVar7 == 0;
  uVar8 = uVar7;
  uVar6 = uVar7;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar7,0xc);
    uVar6 = iVar10 - 0x1f;
    bVar14 = uVar6 == 0;
    uVar8 = uVar4;
    if (!bVar14 && -0xd < (int)uVar7) {
      uVar11 = uVar5 << (uVar4 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar6 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar14 || (int)uVar6 < 0 != bVar15) {
    uVar13 = 0x20 - uVar8;
  }
  uVar5 = uVar5 << (uVar8 & 0xff);
  if (bVar14 || (int)uVar6 < 0 != bVar15) {
    uVar5 = uVar5 | uVar11 >> (uVar13 & 0xff);
    uVar11 = uVar11 << (uVar8 & 0xff);
  }
LAB_00011a3c:
  if ((int)uVar4 <= (int)uVar9) {
    return CONCAT44(uVar5 + (uVar9 - uVar4) * 0x100000 | param_2,uVar11);
  }
  uVar8 = ~(uVar9 - uVar4);
  if ((int)uVar8 < 0x1f) {
    if (uVar8 - 0x13 != 0 && -0xd < (int)(uVar8 - 0x1f)) {
      uVar8 = 0xc - (uVar8 - 0x13);
      return CONCAT44(uVar12,uVar11 >> (0x20 - uVar8 & 0xff) | uVar5 << (uVar8 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar8 = uVar8 + 1;
    return CONCAT44(param_2 | uVar5 >> (uVar8 & 0xff),
                    uVar11 >> (uVar8 & 0xff) | uVar5 << (0x20 - uVar8 & 0xff));
  }
  return CONCAT44(uVar12,uVar5 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_dadd @ 000118a4 */

ulonglong __aeabi_dadd(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  
  uVar9 = param_2 << 1;
  uVar5 = param_4 << 1;
  iVar8 = (int)uVar9 >> 0x15;
  iVar1 = (int)uVar5 >> 0x15;
  if ((((uVar9 == uVar5 && param_1 == param_3 || uVar9 == 0 && param_1 == 0) ||
       uVar5 == 0 && param_3 == 0) || iVar8 == -1) || iVar1 == -1) {
    if (iVar8 == -1 || iVar1 == -1) {
      uVar9 = param_3;
      uVar5 = param_4;
      if (iVar8 == -1) {
        uVar9 = param_1;
        uVar5 = param_2;
      }
      if (iVar8 != -1 || iVar1 != -1) {
        param_3 = uVar9;
        param_4 = uVar5;
      }
      bVar14 = (uVar5 & 0xfffff) == 0;
      bVar15 = uVar9 == 0 && bVar14;
      if (uVar9 == 0 && bVar14) {
        bVar15 = param_3 == 0 && (param_4 & 0xfffff) == 0;
      }
      if (!bVar15 || uVar5 != param_4) {
        uVar5 = uVar5 | 0x80000;
      }
      return CONCAT44(uVar5,uVar9);
    }
    if (uVar9 != uVar5 || param_1 != param_3) {
      if (uVar9 == 0 && param_1 == 0) {
        param_1 = param_3;
        param_2 = param_4;
      }
      return CONCAT44(param_2,param_1);
    }
    if (param_2 != param_4) {
      return 0;
    }
    if (uVar9 >> 0x15 == 0) {
      bVar2 = (byte)(param_1 >> 0x1f);
      uVar9 = param_2 * 2 + (uint)bVar2;
      if (CARRY4(param_2,param_2) || CARRY4(param_2 * 2,(uint)bVar2)) {
        uVar9 = uVar9 | 0x80000000;
      }
      return CONCAT44(uVar9,param_1 << 1);
    }
    if (uVar9 < 0xffc00000) {
      return CONCAT44(param_2 + 0x100000,param_1);
    }
    param_2 = param_2 & 0x80000000;
LAB_00011b14:
    return (ulonglong)(param_2 | 0x7ff00000) << 0x20;
  }
  uVar9 = uVar9 >> 0x15;
  uVar5 = uVar5 >> 0x15;
  uVar11 = uVar5 - uVar9;
  bVar14 = uVar11 != 0;
  if (uVar5 < uVar9) {
    uVar11 = -uVar11;
  }
  uVar10 = param_1;
  uVar7 = param_2;
  if (bVar14 && uVar9 <= uVar5) {
    uVar9 = uVar9 + uVar11;
    uVar10 = param_3;
    uVar7 = param_4;
    param_3 = param_1;
    param_4 = param_2;
  }
  if (0x36 < uVar11) {
    return CONCAT44(uVar7,uVar10);
  }
  uVar5 = uVar7 & 0xfffff | 0x100000;
  if ((uVar7 & 0x80000000) != 0) {
    bVar14 = uVar10 != 0;
    uVar10 = -uVar10;
    uVar5 = -(uVar5 + bVar14);
  }
  uVar7 = param_4 & 0xfffff | 0x100000;
  if ((param_4 & 0x80000000) != 0) {
    bVar14 = param_3 != 0;
    param_3 = -param_3;
    uVar7 = -(uVar7 + bVar14);
  }
  if (uVar9 == uVar11) {
    uVar7 = uVar7 ^ 0x100000;
    if (uVar9 == 0) {
      uVar5 = uVar5 ^ 0x100000;
      uVar9 = 1;
    }
    else {
      uVar11 = uVar11 - 1;
    }
  }
  uVar13 = -uVar11 + 0x20;
  if ((int)uVar11 < 0x21) {
    uVar12 = param_3 << (uVar13 & 0xff);
    param_3 = param_3 >> (uVar11 & 0xff);
    uVar4 = uVar10 + param_3;
    uVar6 = uVar7 << (uVar13 & 0xff);
    uVar13 = uVar4 + uVar6;
    uVar5 = uVar5 + CARRY4(uVar10,param_3) + ((int)uVar7 >> (uVar11 & 0xff)) +
            (uint)CARRY4(uVar4,uVar6);
  }
  else {
    uVar12 = uVar7 << (-uVar11 + 0x40 & 0xff);
    if (param_3 != 0) {
      uVar12 = uVar12 | 2;
    }
    uVar11 = (int)uVar7 >> (uVar11 - 0x20 & 0xff);
    uVar13 = uVar10 + uVar11;
    uVar5 = uVar5 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
  }
  param_2 = uVar5 & 0x80000000;
  uVar11 = uVar5;
  if ((int)uVar5 < 0) {
    bVar14 = uVar12 == 0;
    uVar12 = -uVar12;
    uVar11 = -uVar13;
    uVar13 = -(uVar13 + !bVar14);
    uVar11 = -(uVar5 + (bVar14 <= uVar11));
  }
  if (0xfffff < uVar11) {
    uVar10 = uVar9 - 1;
    if (0x1fffff < uVar11) {
      bVar2 = (byte)uVar11;
      uVar11 = uVar11 >> 1;
      bVar3 = (byte)uVar13;
      uVar13 = (uint)(bVar2 & 1) << 0x1f | uVar13 >> 1;
      uVar12 = (uint)(bVar3 & 1) << 0x1f | uVar12 >> 1;
      uVar10 = uVar9;
      if (0xffbfffff < uVar9 * 0x200000) goto LAB_00011b14;
    }
LAB_000119bc:
    bVar14 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar14 = (bool)((byte)uVar13 & 1);
    }
    return CONCAT44(uVar11 + uVar10 * 0x100000 + (uint)CARRY4(uVar13,(uint)bVar14) | param_2,
                    uVar13 + bVar14);
  }
  bVar2 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar10 = uVar13 * 2;
  bVar14 = CARRY4(uVar13,uVar13);
  uVar13 = uVar13 * 2 + (uint)bVar2;
  uVar11 = uVar11 * 2 + (uint)(bVar14 || CARRY4(uVar10,(uint)bVar2));
  uVar10 = uVar9 - 2;
  if (uVar9 - 1 != 0 && 0xfffff < uVar11) goto LAB_000119bc;
  uVar9 = uVar13;
  uVar7 = uVar11;
  if (uVar11 == 0) {
    uVar9 = 0;
    uVar7 = uVar13;
  }
  iVar8 = LZCOUNT(uVar7);
  if (uVar11 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar4 = iVar8 - 0xb;
  bVar15 = SBORROW4(uVar4,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar14 = uVar6 == 0;
  uVar11 = uVar6;
  uVar13 = uVar6;
  if ((int)uVar4 < 0x20) {
    bVar15 = SCARRY4(uVar6,0xc);
    uVar13 = iVar8 - 0x1f;
    bVar14 = uVar13 == 0;
    uVar11 = uVar4;
    if (!bVar14 && -0xd < (int)uVar6) {
      uVar9 = uVar7 << (uVar4 & 0xff);
      uVar7 = uVar7 >> (0xc - uVar13 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar12 = 0x20 - uVar11;
  }
  uVar7 = uVar7 << (uVar11 & 0xff);
  if (bVar14 || (int)uVar13 < 0 != bVar15) {
    uVar7 = uVar7 | uVar9 >> (uVar12 & 0xff);
    uVar9 = uVar9 << (uVar11 & 0xff);
  }
LAB_00011a3c:
  if ((int)uVar4 <= (int)uVar10) {
    return CONCAT44(uVar7 + (uVar10 - uVar4) * 0x100000 | param_2,uVar9);
  }
  uVar11 = ~(uVar10 - uVar4);
  if ((int)uVar11 < 0x1f) {
    if (uVar11 - 0x13 != 0 && -0xd < (int)(uVar11 - 0x1f)) {
      uVar11 = 0xc - (uVar11 - 0x13);
      return CONCAT44(uVar5,uVar9 >> (0x20 - uVar11 & 0xff) | uVar7 << (uVar11 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar11 = uVar11 + 1;
    return CONCAT44(param_2 | uVar7 >> (uVar11 & 0xff),
                    uVar9 >> (uVar11 & 0xff) | uVar7 << (0x20 - uVar11 & 0xff));
  }
  return CONCAT44(uVar5,uVar7 >> (uVar11 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_ui2d @ 00011b50 */

ulonglong __aeabi_ui2d(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint in_r12;
  bool bVar7;
  bool bVar8;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = 0;
  iVar4 = LZCOUNT(param_1);
  uVar5 = iVar4 + 0x15;
  bVar8 = SBORROW4(uVar5,0x20);
  uVar2 = iVar4 - 0xb;
  bVar7 = uVar2 == 0;
  uVar6 = uVar2;
  uVar3 = uVar2;
  if (uVar5 < 0x20) {
    bVar8 = SCARRY4(uVar2,0xc);
    uVar3 = iVar4 + 1;
    bVar7 = uVar3 == 0;
    uVar6 = uVar5;
    if (!bVar7 && -0xd < (int)uVar2) {
      uVar1 = param_1 << uVar5;
      param_1 = param_1 >> (0xc - uVar3 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    in_r12 = 0x20 - uVar6;
  }
  param_1 = param_1 << (uVar6 & 0xff);
  if (bVar7 || (int)uVar3 < 0 != bVar8) {
    param_1 = param_1 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar6 & 0xff);
  }
LAB_00011a3c:
  if (uVar5 < 0x433) {
    return CONCAT44(param_1 + (0x432 - uVar5) * 0x100000,uVar1);
  }
  uVar6 = ~(0x432 - uVar5);
  if (0x1e < (int)uVar6) {
    return (ulonglong)(param_1 >> (uVar6 - 0x1f & 0xff));
  }
  if (uVar6 - 0x13 == 0 || (int)(uVar6 - 0x1f) < -0xc) {
    uVar6 = uVar6 + 1;
    return CONCAT44(param_1 >> (uVar6 & 0xff),
                    uVar1 >> (uVar6 & 0xff) | param_1 << (0x20 - uVar6 & 0xff));
  }
  uVar6 = 0xc - (uVar6 - 0x13);
  return (ulonglong)(uVar1 >> (0x20 - uVar6 & 0xff) | param_1 << (uVar6 & 0xff));
}



/* Function: __floatsidf @ 00011b74 */

ulonglong __floatsidf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint in_r12;
  bool bVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar8 = param_1 & 0x80000000;
  uVar2 = param_1;
  if ((int)uVar8 < 0) {
    uVar2 = -param_1;
  }
  uVar1 = 0;
  iVar5 = LZCOUNT(uVar2);
  uVar6 = iVar5 + 0x15;
  bVar10 = SBORROW4(uVar6,0x20);
  uVar3 = iVar5 - 0xb;
  bVar9 = uVar3 == 0;
  uVar7 = uVar3;
  uVar4 = uVar3;
  if (uVar6 < 0x20) {
    bVar10 = SCARRY4(uVar3,0xc);
    uVar4 = iVar5 + 1;
    bVar9 = uVar4 == 0;
    uVar7 = uVar6;
    if (!bVar9 && -0xd < (int)uVar3) {
      uVar1 = uVar2 << uVar6;
      uVar2 = uVar2 >> (0xc - uVar4 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    in_r12 = 0x20 - uVar7;
  }
  uVar2 = uVar2 << (uVar7 & 0xff);
  if (bVar9 || (int)uVar4 < 0 != bVar10) {
    uVar2 = uVar2 | 0U >> (in_r12 & 0xff);
    uVar1 = 0 << (uVar7 & 0xff);
  }
LAB_00011a3c:
  if (uVar6 < 0x433) {
    return CONCAT44(uVar2 + (0x432 - uVar6) * 0x100000 | uVar8,uVar1);
  }
  uVar7 = ~(0x432 - uVar6);
  if (0x1e < (int)uVar7) {
    return CONCAT44(param_1,uVar2 >> (uVar7 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar7 - 0x13 == 0 || (int)(uVar7 - 0x1f) < -0xc) {
    uVar7 = uVar7 + 1;
    return CONCAT44(uVar8 | uVar2 >> (uVar7 & 0xff),
                    uVar1 >> (uVar7 & 0xff) | uVar2 << (0x20 - uVar7 & 0xff));
  }
  uVar8 = 0xc - (uVar7 - 0x13);
  return CONCAT44(param_1,uVar1 >> (0x20 - uVar8 & 0xff) | uVar2 << (uVar8 & 0xff)) &
         0x80000000ffffffff;
}



/* Function: __extendsfdf2 @ 00011b9c */

ulonglong __extendsfdf2(uint param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint in_r12;
  bool bVar10;
  bool bVar11;
  
  uVar2 = param_1 << 1;
  bVar10 = uVar2 == 0;
  uVar9 = param_1 & 0x80000000;
  uVar8 = (uint)((int)uVar2 >> 3) >> 1;
  uVar1 = uVar9 | uVar8;
  param_1 = param_1 << 0x1d;
  if (!bVar10) {
    param_4 = uVar2 & 0xff000000;
    bVar10 = param_4 == 0;
  }
  if (!bVar10) {
    bVar10 = param_4 == 0xff000000;
  }
  if (!bVar10) {
    return CONCAT44(uVar1,param_1) ^ 0x3800000000000000;
  }
  if ((uVar2 & 0xffffff) == 0) {
    return CONCAT44(uVar1,param_1);
  }
  if (param_4 == 0xff000000) {
    return CONCAT44(uVar1,param_1) | 0x8000000000000;
  }
  uVar2 = param_1;
  uVar3 = uVar8;
  if (uVar8 == 0) {
    uVar2 = 0;
    uVar3 = param_1;
  }
  iVar6 = LZCOUNT(uVar3);
  if (uVar8 == 0) {
    iVar6 = iVar6 + 0x20;
  }
  uVar7 = iVar6 - 0xb;
  bVar11 = SBORROW4(uVar7,0x20);
  uVar4 = iVar6 - 0x2b;
  bVar10 = uVar4 == 0;
  uVar8 = uVar4;
  uVar5 = uVar4;
  if ((int)uVar7 < 0x20) {
    bVar11 = SCARRY4(uVar4,0xc);
    uVar5 = iVar6 - 0x1f;
    bVar10 = uVar5 == 0;
    uVar8 = uVar7;
    if (!bVar10 && -0xd < (int)uVar4) {
      uVar2 = uVar3 << (uVar7 & 0xff);
      uVar3 = uVar3 >> (0xc - uVar5 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    in_r12 = 0x20 - uVar8;
  }
  uVar3 = uVar3 << (uVar8 & 0xff);
  if (bVar10 || (int)uVar5 < 0 != bVar11) {
    uVar3 = uVar3 | uVar2 >> (in_r12 & 0xff);
    uVar2 = uVar2 << (uVar8 & 0xff);
  }
LAB_00011a3c:
  if ((int)uVar7 < 0x381) {
    return CONCAT44(uVar3 + (0x380 - uVar7) * 0x100000 | uVar9,uVar2);
  }
  uVar8 = ~(0x380 - uVar7);
  if (0x1e < (int)uVar8) {
    return CONCAT44(uVar1,uVar3 >> (uVar8 - 0x1f & 0xff)) & 0x80000000ffffffff;
  }
  if (uVar8 - 0x13 == 0 || (int)(uVar8 - 0x1f) < -0xc) {
    uVar8 = uVar8 + 1;
    return CONCAT44(uVar9 | uVar3 >> (uVar8 & 0xff),
                    uVar2 >> (uVar8 & 0xff) | uVar3 << (0x20 - uVar8 & 0xff));
  }
  uVar9 = 0xc - (uVar8 - 0x13);
  return CONCAT44(uVar1,uVar2 >> (0x20 - uVar9 & 0xff) | uVar3 << (uVar9 & 0xff)) &
         0x80000000ffffffff;
}



/* Function: __floatundidf @ 00011be4 */

ulonglong __floatundidf(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  iVar11 = 0x432;
  uVar10 = 0;
  if (param_2 >> 0x16 != 0) {
    iVar11 = 3;
    if (param_2 >> 0x19 != 0) {
      iVar11 = 6;
    }
    if (param_2 >> 0x1c != 0) {
      iVar11 = iVar11 + 3;
    }
    iVar11 = iVar11 - ((int)param_2 >> 0x1f);
    uVar10 = param_1 << (0x20U - iVar11 & 0xff);
    param_1 = param_1 >> iVar11 | param_2 << (0x20U - iVar11 & 0xff);
    param_2 = param_2 >> iVar11;
    iVar11 = iVar11 + 0x432;
  }
  if (0xfffff < param_2) {
    if (0x1fffff < param_2) {
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar10 = (uint)(bVar2 & 1) << 0x1f | uVar10 >> 1;
      iVar11 = iVar11 + 1;
      if (0xffbfffff < (uint)(iVar11 * 0x200000)) {
        return 0x7ff0000000000000;
      }
    }
LAB_000119bc:
    bVar12 = 0x7fffffff < uVar10;
    if (uVar10 == 0x80000000) {
      bVar12 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(param_2 + iVar11 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar12),
                    param_1 + bVar12);
  }
  bVar1 = (byte)(uVar10 >> 0x1f);
  uVar10 = uVar10 << 1;
  uVar3 = param_1 * 2;
  bVar12 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  param_2 = param_2 * 2 + (uint)(bVar12 || CARRY4(uVar3,(uint)bVar1));
  bVar12 = iVar11 != 0;
  iVar11 = iVar11 + -1;
  if (bVar12 && 0xfffff < param_2) goto LAB_000119bc;
  uVar3 = param_1;
  uVar4 = param_2;
  if (param_2 == 0) {
    uVar3 = 0;
    uVar4 = param_1;
  }
  iVar8 = LZCOUNT(uVar4);
  if (param_2 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar13 = SBORROW4(uVar9,0x20);
  uVar5 = iVar8 - 0x2b;
  bVar12 = uVar5 == 0;
  uVar7 = uVar5;
  uVar6 = uVar5;
  if ((int)uVar9 < 0x20) {
    bVar13 = SCARRY4(uVar5,0xc);
    uVar6 = iVar8 - 0x1f;
    bVar12 = uVar6 == 0;
    uVar7 = uVar9;
    if (!bVar12 && -0xd < (int)uVar5) {
      uVar3 = uVar4 << (uVar9 & 0xff);
      uVar4 = uVar4 >> (0xc - uVar6 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar10 = 0x20 - uVar7;
  }
  uVar4 = uVar4 << (uVar7 & 0xff);
  if (bVar12 || (int)uVar6 < 0 != bVar13) {
    uVar4 = uVar4 | uVar3 >> (uVar10 & 0xff);
    uVar3 = uVar3 << (uVar7 & 0xff);
  }
LAB_00011a3c:
  if ((int)uVar9 <= iVar11) {
    return CONCAT44(uVar4 + (iVar11 - uVar9) * 0x100000,uVar3);
  }
  uVar10 = ~(iVar11 - uVar9);
  if ((int)uVar10 < 0x1f) {
    if (uVar10 - 0x13 != 0 && -0xd < (int)(uVar10 - 0x1f)) {
      uVar10 = 0xc - (uVar10 - 0x13);
      return (ulonglong)(uVar3 >> (0x20 - uVar10 & 0xff) | uVar4 << (uVar10 & 0xff));
    }
    uVar10 = uVar10 + 1;
    return CONCAT44(uVar4 >> (uVar10 & 0xff),
                    uVar3 >> (uVar10 & 0xff) | uVar4 << (0x20 - uVar10 & 0xff));
  }
  return (ulonglong)(uVar4 >> (uVar10 - 0x1f & 0xff));
}



/* Function: __aeabi_l2d @ 00011bf8 */

ulonglong __aeabi_l2d(uint param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if (param_1 == 0 && param_2 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar11 = param_2 & 0x80000000;
  uVar4 = param_2;
  if ((int)uVar11 < 0) {
    bVar13 = param_1 != 0;
    param_1 = -param_1;
    uVar4 = -(param_2 + bVar13);
  }
  iVar10 = 0x432;
  uVar12 = 0;
  if (uVar4 >> 0x16 != 0) {
    iVar10 = 3;
    if (uVar4 >> 0x19 != 0) {
      iVar10 = 6;
    }
    if (uVar4 >> 0x1c != 0) {
      iVar10 = iVar10 + 3;
    }
    iVar10 = iVar10 - ((int)uVar4 >> 0x1f);
    uVar12 = param_1 << (0x20U - iVar10 & 0xff);
    param_1 = param_1 >> iVar10 | uVar4 << (0x20U - iVar10 & 0xff);
    uVar4 = uVar4 >> iVar10;
    iVar10 = iVar10 + 0x432;
  }
  if (0xfffff < uVar4) {
    if (0x1fffff < uVar4) {
      bVar1 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      bVar2 = (byte)param_1;
      param_1 = (uint)(bVar1 & 1) << 0x1f | param_1 >> 1;
      uVar12 = (uint)(bVar2 & 1) << 0x1f | uVar12 >> 1;
      iVar10 = iVar10 + 1;
      if (0xffbfffff < (uint)(iVar10 * 0x200000)) {
        return (ulonglong)(uVar11 | 0x7ff00000) << 0x20;
      }
    }
LAB_000119bc:
    bVar13 = 0x7fffffff < uVar12;
    if (uVar12 == 0x80000000) {
      bVar13 = (bool)((byte)param_1 & 1);
    }
    return CONCAT44(uVar4 + iVar10 * 0x100000 + (uint)CARRY4(param_1,(uint)bVar13) | uVar11,
                    param_1 + bVar13);
  }
  bVar1 = (byte)(uVar12 >> 0x1f);
  uVar12 = uVar12 << 1;
  uVar3 = param_1 * 2;
  bVar13 = CARRY4(param_1,param_1);
  param_1 = param_1 * 2 + (uint)bVar1;
  uVar4 = uVar4 * 2 + (uint)(bVar13 || CARRY4(uVar3,(uint)bVar1));
  bVar13 = iVar10 != 0;
  iVar10 = iVar10 + -1;
  if (bVar13 && 0xfffff < uVar4) goto LAB_000119bc;
  uVar3 = param_1;
  uVar5 = uVar4;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar5 = param_1;
  }
  iVar8 = LZCOUNT(uVar5);
  if (uVar4 == 0) {
    iVar8 = iVar8 + 0x20;
  }
  uVar9 = iVar8 - 0xb;
  bVar14 = SBORROW4(uVar9,0x20);
  uVar6 = iVar8 - 0x2b;
  bVar13 = uVar6 == 0;
  uVar4 = uVar6;
  uVar7 = uVar6;
  if ((int)uVar9 < 0x20) {
    bVar14 = SCARRY4(uVar6,0xc);
    uVar7 = iVar8 - 0x1f;
    bVar13 = uVar7 == 0;
    uVar4 = uVar9;
    if (!bVar13 && -0xd < (int)uVar6) {
      uVar3 = uVar5 << (uVar9 & 0xff);
      uVar5 = uVar5 >> (0xc - uVar7 & 0xff);
      goto LAB_00011a3c;
    }
  }
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar12 = 0x20 - uVar4;
  }
  uVar5 = uVar5 << (uVar4 & 0xff);
  if (bVar13 || (int)uVar7 < 0 != bVar14) {
    uVar5 = uVar5 | uVar3 >> (uVar12 & 0xff);
    uVar3 = uVar3 << (uVar4 & 0xff);
  }
LAB_00011a3c:
  if ((int)uVar9 <= iVar10) {
    return CONCAT44(uVar5 + (iVar10 - uVar9) * 0x100000 | uVar11,uVar3);
  }
  uVar4 = ~(iVar10 - uVar9);
  if ((int)uVar4 < 0x1f) {
    if (uVar4 - 0x13 != 0 && -0xd < (int)(uVar4 - 0x1f)) {
      uVar4 = 0xc - (uVar4 - 0x13);
      return CONCAT44(param_2,uVar3 >> (0x20 - uVar4 & 0xff) | uVar5 << (uVar4 & 0xff)) &
             0x80000000ffffffff;
    }
    uVar4 = uVar4 + 1;
    return CONCAT44(uVar11 | uVar5 >> (uVar4 & 0xff),
                    uVar3 >> (uVar4 & 0xff) | uVar5 << (0x20 - uVar4 & 0xff));
  }
  return CONCAT44(param_2,uVar5 >> (uVar4 - 0x1f & 0xff)) & 0x80000000ffffffff;
}



/* Function: __aeabi_frsub @ 00011c58 */

void __aeabi_frsub(uint param_1)

{
  __addsf3(param_1 ^ 0x80000000);
  return;
}



/* Function: __aeabi_fsub @ 00011c60 */

uint __aeabi_fsub(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar5 = param_2 ^ 0x80000000;
  uVar4 = param_1 << 1;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    param_4 = param_2 << 1;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar9) {
    bVar9 = iVar1 == -1;
  }
  if (!bVar9) {
    bVar9 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar9) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = uVar5;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        uVar5 = uVar4;
      }
      if (((uVar4 & 0x7fffff) != 0 || (uVar5 & 0x7fffff) != 0) || uVar4 != uVar5) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (uVar4 != param_2 << 1) {
      if (uVar4 == 0) {
        param_1 = uVar5;
      }
      return param_1;
    }
    if (param_1 != uVar5) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if (SUB41(param_1 >> 0x1f,0)) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_00011dc4:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar8 = param_4 - uVar4;
  uVar6 = uVar5;
  uVar7 = uVar4;
  if (uVar8 != 0 && uVar4 <= param_4) {
    uVar7 = uVar4 + uVar8;
    uVar6 = param_1;
    param_1 = uVar5;
  }
  if (param_4 < uVar4) {
    uVar8 = -uVar8;
  }
  if (0x19 < uVar8) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar5 = uVar6 & 0xffffff | 0x800000;
  if ((uVar6 & 0x80000000) != 0) {
    uVar5 = -uVar5;
  }
  if (uVar7 == uVar8) {
    uVar5 = uVar5 ^ 0x800000;
    if (uVar7 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar7 = 1;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar5 >> (uVar8 & 0xff));
  uVar5 = uVar5 << (0x20 - uVar8 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar9 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar4 = -(uVar4 + bVar9);
  }
  if (uVar4 < 0x800000) {
    iVar1 = (int)uVar5 >> 0x1f;
    uVar5 = uVar5 << 1;
    uVar4 = uVar4 * 2 - iVar1;
    uVar8 = uVar7 - 2;
    if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
      uVar5 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar5 & 0xff);
      if ((int)uVar8 < (int)uVar5) {
        uVar4 = uVar4 >> (-(uVar8 - uVar5) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar8 - uVar5) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar8 = uVar7 - 1;
    if (0xffffff < uVar4) {
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      uVar5 = (uint)(bVar3 & 1) << 0x1f | uVar5 >> 1;
      uVar8 = uVar7;
      if (0xfd < uVar7) goto LAB_00011dc4;
    }
  }
  uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar5);
  if (uVar5 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}



/* Function: __addsf3 @ 00011c64 */

uint __addsf3(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  uVar4 = param_1 << 1;
  bVar9 = uVar4 == 0;
  if (!bVar9) {
    param_4 = param_2 << 1;
    bVar9 = param_4 == 0;
  }
  if (!bVar9) {
    bVar9 = uVar4 == param_4;
  }
  iVar1 = (int)uVar4 >> 0x18;
  if (!bVar9) {
    bVar9 = iVar1 == -1;
  }
  if (!bVar9) {
    bVar9 = (int)param_4 >> 0x18 == -1;
  }
  if (bVar9) {
    iVar2 = (int)(param_2 << 1) >> 0x18;
    if (iVar1 == -1 || iVar2 == -1) {
      uVar4 = param_2;
      if (iVar1 == -1) {
        uVar4 = param_1;
      }
      if (iVar1 != -1 || iVar2 != -1) {
        param_2 = uVar4;
      }
      if (((uVar4 & 0x7fffff) != 0 || (param_2 & 0x7fffff) != 0) || uVar4 != param_2) {
        uVar4 = uVar4 | 0x400000;
      }
      return uVar4;
    }
    if (uVar4 != param_2 << 1) {
      if (uVar4 == 0) {
        param_1 = param_2;
      }
      return param_1;
    }
    if (param_1 != param_2) {
      return 0;
    }
    if ((uVar4 & 0xff000000) == 0) {
      uVar4 = param_1 << 1;
      if (SUB41(param_1 >> 0x1f,0)) {
        uVar4 = uVar4 | 0x80000000;
      }
      return uVar4;
    }
    if (uVar4 < 0xfe000000) {
      return param_1 + 0x800000;
    }
    param_1 = param_1 & 0x80000000;
LAB_00011dc4:
    return param_1 | 0x7f800000;
  }
  uVar4 = uVar4 >> 0x18;
  param_4 = param_4 >> 0x18;
  uVar8 = param_4 - uVar4;
  uVar5 = param_2;
  uVar7 = uVar4;
  if (uVar8 != 0 && uVar4 <= param_4) {
    uVar7 = uVar4 + uVar8;
    uVar5 = param_1;
    param_1 = param_2;
  }
  if (param_4 < uVar4) {
    uVar8 = -uVar8;
  }
  if (0x19 < uVar8) {
    return param_1;
  }
  uVar4 = param_1 & 0xffffff | 0x800000;
  if ((param_1 & 0x80000000) != 0) {
    uVar4 = -uVar4;
  }
  uVar6 = uVar5 & 0xffffff | 0x800000;
  if ((uVar5 & 0x80000000) != 0) {
    uVar6 = -uVar6;
  }
  if (uVar7 == uVar8) {
    uVar6 = uVar6 ^ 0x800000;
    if (uVar7 == 0) {
      uVar4 = uVar4 ^ 0x800000;
      uVar7 = 1;
    }
    else {
      uVar8 = uVar8 - 1;
    }
  }
  uVar4 = uVar4 + ((int)uVar6 >> (uVar8 & 0xff));
  uVar6 = uVar6 << (0x20 - uVar8 & 0xff);
  param_1 = uVar4 & 0x80000000;
  if ((int)uVar4 < 0) {
    bVar9 = uVar6 != 0;
    uVar6 = -uVar6;
    uVar4 = -(uVar4 + bVar9);
  }
  if (uVar4 < 0x800000) {
    iVar1 = (int)uVar6 >> 0x1f;
    uVar6 = uVar6 << 1;
    uVar4 = uVar4 * 2 - iVar1;
    uVar8 = uVar7 - 2;
    if (uVar7 - 1 == 0 || uVar4 < 0x800000) {
      uVar7 = LZCOUNT(uVar4) - 8;
      uVar4 = uVar4 << (uVar7 & 0xff);
      if ((int)uVar8 < (int)uVar7) {
        uVar4 = uVar4 >> (-(uVar8 - uVar7) & 0xff);
      }
      else {
        uVar4 = uVar4 + (uVar8 - uVar7) * 0x800000;
      }
      return uVar4 | param_1;
    }
  }
  else {
    uVar8 = uVar7 - 1;
    if (0xffffff < uVar4) {
      bVar3 = (byte)uVar4;
      uVar4 = uVar4 >> 1;
      uVar6 = (uint)(bVar3 & 1) << 0x1f | uVar6 >> 1;
      uVar8 = uVar7;
      if (0xfd < uVar7) goto LAB_00011dc4;
    }
  }
  uVar4 = uVar4 + uVar8 * 0x800000 + (uint)(0x7fffffff < uVar6);
  if (uVar6 == 0x80000000) {
    uVar4 = uVar4 & 0xfffffffe;
  }
  return uVar4 | param_1;
}



/* Function: __aeabi_ui2f @ 00011df4 */

uint __aeabi_ui2f(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar3 = uVar2 * -0x800000 + 0x4a800000;
  if (7 < uVar1) {
    uVar1 = 0 << (uVar2 & 0xff);
    uVar2 = iVar3 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
            (uint)(0x7fffffff < uVar1);
    if (uVar1 == 0x80000000) {
      uVar2 = uVar2 & 0xfffffffe;
    }
    return uVar2;
  }
  uVar2 = param_1 << uVar1 + 0x18;
  uVar1 = (iVar3 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar2 >> 0x1f);
  if ((uVar2 & 0x7fffffff) == 0) {
    uVar1 = uVar1 & ~(uVar2 >> 0x1f);
  }
  return uVar1;
}



/* Function: __floatsisf @ 00011dfc */

uint __floatsisf(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = param_1 & 0x80000000;
  if ((int)uVar3 < 0) {
    param_1 = -param_1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = LZCOUNT(param_1);
  uVar2 = uVar1 - 8;
  iVar4 = ((uVar3 | 0x4b000000) - 0x800000) + uVar2 * -0x800000;
  if (7 < uVar1) {
    uVar3 = 0 << (uVar2 & 0xff);
    uVar1 = iVar4 + (param_1 << (uVar2 & 0xff)) + (0U >> (0x20 - uVar2 & 0xff)) +
            (uint)(0x7fffffff < uVar3);
    if (uVar3 == 0x80000000) {
      uVar1 = uVar1 & 0xfffffffe;
    }
    return uVar1;
  }
  uVar3 = param_1 << uVar1 + 0x18;
  uVar1 = (iVar4 + (param_1 >> (0x20 - (uVar1 + 0x18) & 0xff))) - ((int)uVar3 >> 0x1f);
  if ((uVar3 & 0x7fffffff) == 0) {
    uVar1 = uVar1 & ~(uVar3 >> 0x1f);
  }
  return uVar1;
}



/* Function: __floatundisf @ 00011e1c */

uint __floatundisf(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  iVar5 = 0x5b000000;
  if (param_2 == 0) {
    iVar5 = 0x4b000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar5 = iVar5 + -0x800000 + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar4 = uVar2 << uVar3 + 0x18;
    uVar2 = (iVar5 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar4 >> 0x1f);
    if (uVar1 == 0 && (uVar4 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar4 >> 0x1f);
    }
    return uVar2;
  }
  uVar3 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar5 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
          (uint)(0x7fffffff < uVar3);
  if (uVar3 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



/* Function: __aeabi_l2f @ 00011e2c */

uint __aeabi_l2f(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  if (param_1 == 0 && param_2 == 0) {
    return param_1;
  }
  uVar5 = param_2 & 0x80000000;
  if ((int)uVar5 < 0) {
    bVar7 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + bVar7);
  }
  uVar1 = param_1;
  uVar2 = param_2;
  if (param_2 == 0) {
    uVar1 = 0;
    uVar2 = param_1;
  }
  uVar5 = uVar5 | 0x5b000000;
  if (param_2 == 0) {
    uVar5 = uVar5 + 0xf0000000;
  }
  uVar3 = LZCOUNT(uVar2);
  uVar4 = uVar3 - 8;
  iVar6 = (uVar5 - 0x800000) + uVar4 * -0x800000;
  if (uVar3 < 8) {
    uVar5 = uVar2 << uVar3 + 0x18;
    uVar2 = (iVar6 + (uVar2 >> (0x20 - (uVar3 + 0x18) & 0xff))) - ((int)uVar5 >> 0x1f);
    if (uVar1 == 0 && (uVar5 & 0x7fffffff) == 0) {
      uVar2 = uVar2 & ~(uVar5 >> 0x1f);
    }
    return uVar2;
  }
  uVar5 = uVar1 << (uVar4 & 0xff);
  uVar2 = iVar6 + (uVar2 << (uVar4 & 0xff)) + (uVar1 >> (0x20 - uVar4 & 0xff)) +
          (uint)(0x7fffffff < uVar5);
  if (uVar5 == 0x80000000) {
    uVar2 = uVar2 & 0xfffffffe;
  }
  return uVar2;
}



/* Function: __fixsfsi @ 00011ea8 */

uint __fixsfsi(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 << 1 < 0x7f000000) {
    return 0;
  }
  uVar1 = (param_1 << 1) >> 0x18;
  uVar2 = 0x9e - uVar1;
  if (uVar1 < 0x9f && uVar2 != 0) {
    uVar1 = (param_1 << 8 | 0x80000000) >> (uVar2 & 0xff);
    if ((param_1 & 0x80000000) != 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  if ((uVar2 == 0xffffff9f) && ((param_1 & 0x7fffff) != 0)) {
    return 0;
  }
  param_1 = param_1 & 0x80000000;
  if (param_1 == 0) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}



/* Function: _fini @ 00011f04 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 83 */
