/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/2/2_gcc_O2_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

/* WARNING: Unknown calling convention */

char process_char(char c)

{
  if ((byte)(c + 0xbfU) < 0x1a) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 000112a0 */

/* WARNING: Unknown calling convention */

short process_short(short a,short b)

{
  return b + a;
}



/* Function: process_int @ 000112b0 */

/* WARNING: Unknown calling convention */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 000112c0 */

/* WARNING: Unknown calling convention */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 000112d0 */

/* WARNING: Unknown calling convention */

longlong process_ll(longlong x)

{
  longlong lVar1;
  
  lVar1 = (x & 0xffffffffU) * (x & 0xffffffffU);
  return CONCAT44((int)((ulonglong)lVar1 >> 0x20) + x._4_4_ * (int)x * 2,(int)lVar1);
}



/* Function: process_float @ 000112f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 00011320 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

double process_double(double d)

{
  return (double)((float)d * 0.5 + 0.1);
}



/* Function: process_ld @ 00011350 */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
  longdouble *in_EAX;
  
  return in_EAX;
}



/* Function: process_bool @ 00011360 */

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



/* Function: const_param @ 00011380 */

/* WARNING: Unknown calling convention */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 00011390 */

/* WARNING: Unknown calling convention */

int volatile_access(int *p)

{
  return *p + *p;
}



/* Function: test_data_types_l1 @ 000113a0 */

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



/* Function: array_1d_stack @ 000114f0 */

int array_1d_stack(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    piVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: array_string @ 00011520 */

int array_string(char *str)

{
  int iVar1;
  
  iVar1 = 0;
  if (*str != '\0') {
    do {
      iVar1 = iVar1 + 1;
    } while (str[iVar1] != '\0');
    return iVar1;
  }
  return iVar1;
}



/* Function: array_2d_stack @ 00011550 */

/* WARNING: Unknown calling convention */

int array_2d_stack(int (*arr) [10])

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  piVar1 = arr[0xb];
  do {
    iVar2 = iVar2 + (*arr)[0];
    arr = (int (*) [10])(*(int (*) [10])((int)arr + 0x28) + 1);
  } while (arr != (int (*) [10])piVar1);
  return iVar2;
}



/* Function: array_3d @ 00011570 */

/* WARNING: Unknown calling convention */

int array_3d(int (*arr) [5] [5])

{
  int (*paiVar1) [5];
  int iVar2;
  int (*paiVar3) [5];
  int (*paaiVar4) [5] [5];
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  paiVar3 = arr[1];
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar1 = (int (*) [5])(paiVar3 + -5);
    do {
      paaiVar4 = (int (*) [5] [5])paiVar1;
                    /* Unresolved local var: int k@[???] */
      iVar2 = iVar2 + (*paaiVar4)[0][0] + (*paaiVar4)[0][1] + (*paaiVar4)[0][2] + (*paaiVar4)[0][3]
              + (*paaiVar4)[0][4];
      paiVar1 = *paaiVar4 + 1;
    } while (*paaiVar4 + 1 != paiVar3);
    paiVar3 = paaiVar4[1] + 1;
  } while (paiVar3 != arr[6]);
  return iVar2;
}



/* Function: array_vla @ 000115b0 */

int array_vla(int n,int *arr)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    piVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: array_pointer @ 000115e0 */

int array_pointer(int (*arr) [10],int n)

{
  int (*paiVar1) [10];
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    paiVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (*arr)[0];
      arr = arr + 1;
    } while (arr != paiVar1);
    return iVar2;
  }
  return 0;
}



/* Function: pointer_array @ 00011620 */

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
  if (0 < n) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      if (arr[iVar1] != (int *)0x0) {
        iVar2 = iVar2 + *arr[iVar1];
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar3);
    return iVar2;
  }
  return 0;
}



/* Function: array_complex_index @ 00011660 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  if (((-1 < (x | y)) && (x < w)) && (y < h)) {
    return arr[w * y + x];
  }
  return -1;
}



/* Function: array_oob @ 000116a0 */

int array_oob(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (-1 < n) {
    piVar1 = arr + n + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: test_array_types @ 000116e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  int iVar1;
  int (*paiVar2) [5];
  int iVar3;
  int iVar4;
  int (*paiVar5) [5];
  int iVar6;
  int (*paiVar7) [5];
  int (*paiVar8) [5];
  int in_GS_OFFSET;
  int flat [20];
  int matrix [10] [10];
  int cube [5] [5] [5];
  char str [6];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000133bd);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
  builtin_strncpy(str,"hello",6);
                    /* Unresolved local var: int len@[???] */
  iVar6 = 0;
  do {
    iVar3 = iVar6 + 1;
    iVar4 = iVar6 + 1;
    iVar6 = iVar3;
  } while (str[iVar4] != '\0');
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",iVar3);
  paiVar7 = (int (*) [5])matrix;
  iVar6 = 0;
  paiVar8 = paiVar7;
  do {
    iVar4 = 0;
    do {
      iVar3 = 0;
      if (iVar4 == iVar6) {
        iVar3 = iVar4;
      }
      (*paiVar8)[iVar4] = iVar3;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 10);
    iVar6 = iVar6 + 1;
    paiVar8 = paiVar8 + 2;
  } while (iVar6 != 10);
                    /* Unresolved local var: int sum@[???] */
  iVar6 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar6 = iVar6 + (*paiVar7)[0];
    paiVar7 = (int (*) [5])(paiVar7[2] + 1);
  } while (cube[0] + 2 != paiVar7);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar6);
                    /* Unresolved local var: int i@[???] */
  paiVar7 = cube[1];
  paiVar8 = paiVar7;
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar5 = (int (*) [5])(paiVar8 + -5);
    do {
                    /* Unresolved local var: int k@[???] */
      (*(int (*) [5] [5])paiVar5)[0][0] = 1;
      paiVar2 = *(int (*) [5] [5])paiVar5;
      (*(int (*) [5] [5])paiVar5)[0][1] = 1;
      (*(int (*) [5] [5])paiVar5)[0][2] = 1;
      (*(int (*) [5] [5])paiVar5)[0][3] = 1;
      (*(int (*) [5] [5])paiVar5)[0][4] = 1;
      paiVar5 = paiVar2 + 1;
    } while (paiVar8 != paiVar2 + 1);
    paiVar8 = paiVar8 + 5;
  } while ((int (*) [5])&stack0x0000003c != paiVar8);
                    /* Unresolved local var: int sum@[???] */
  iVar6 = 0;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
    paiVar8 = paiVar7 + -5;
    do {
                    /* Unresolved local var: int k@[???] */
      paiVar5 = paiVar8 + 1;
      iVar6 = iVar6 + (*paiVar8)[0] + (*paiVar8)[1] + (*paiVar8)[2] + (*paiVar8)[3] + (*paiVar8)[4];
      paiVar8 = paiVar5;
    } while (paiVar7 != paiVar5);
    paiVar7 = paiVar7 + 5;
  } while (paiVar7 != (int (*) [5])&stack0x0000003c);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar6);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
                    /* Unresolved local var: int i@[???] */
  iVar6 = 0;
  do {
    flat[iVar6] = iVar6;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_single @ 000118d0 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 000118e0 */

/* WARNING: Unknown calling convention */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 000118f0 */

/* WARNING: Unknown calling convention */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00011910 */

int ptr_increment(int *p,int n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar1 = 0;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + p[iVar1];
      iVar1 = iVar1 + 1;
    } while (n != iVar1);
    return iVar2;
  }
  return 0;
}



/* Function: ptr_offset @ 00011950 */

/* WARNING: Unknown calling convention */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00011960 */

/* WARNING: Unknown calling convention */

int ptr_diff(int *p1,int *p2)

{
  return (int)p1 - (int)p2 >> 2;
}



/* Function: ptr_void @ 00011970 */

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



/* Function: ptr_const @ 000119b0 */

/* WARNING: Unknown calling convention */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 000119c0 */

/* WARNING: Unknown calling convention */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 000119d0 */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000119e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 000119f0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char *args [2];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  args[1] = (char *)0x0;
  args[0] = "test";
  iVar2 = (*f)(p,args);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: ptr_cast @ 00011a50 */

/* WARNING: Unknown calling convention */

int ptr_cast(void *p)

{
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00011a60 */

/* WARNING: Unknown calling convention */

void * opaque_handle_create(int size)

{
  return (void *)size;
}



/* Function: opaque_handle_op @ 00011a70 */

/* WARNING: Unknown calling convention */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: test_pointer_types @ 00011a80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int arr4 [5];
  int local_10 [2];
  
  local_10[1] = 0x11a8b;
  local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013430);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
  arr4[0] = 1;
                    /* Unresolved local var: int sum@[???] */
  iVar3 = 0;
  iVar2 = 1;
  arr4[1] = 2;
  arr4[2] = 3;
  arr4[3] = 4;
  arr4[4] = 5;
                    /* Unresolved local var: int i@[???] */
  piVar1 = arr4;
  while( true ) {
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + iVar2;
    if (piVar1 == local_10) break;
    iVar2 = *piVar1;
  }
  __printf_chk(1,"PTR-L2-04 (ptr_increment): %d\n",iVar3);
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
  if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: struct_simple @ 00011c20 */

/* WARNING: Unknown calling convention */

int struct_simple(Point3D *p)

{
  return p->y + p->x + p->z;
}



/* Function: struct_array @ 00011c40 */

int struct_array(Point3D *pts,int n)

{
  Point3D *pPVar1;
  Point3D *pPVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar3 = 0;
    pPVar1 = pts;
    do {
      pPVar2 = pPVar1 + 1;
      iVar3 = iVar3 + pPVar1->y + pPVar1->x + pPVar1->z;
      pPVar1 = pPVar2;
    } while (pts + n != pPVar2);
    return iVar3;
  }
  return 0;
}



/* Function: struct_nested @ 00011c90 */

/* WARNING: Unknown calling convention */

int struct_nested(Rect *r)

{
  return (r->size).width + (r->position).x;
}



/* Function: struct_deep @ 00011ca0 */

/* WARNING: Unknown calling convention */

int struct_deep(Widget *w)

{
  return (w->style).fill.r + (w->bounds).position.z;
}



/* Function: struct_with_ptr @ 00011cb0 */

/* WARNING: Unknown calling convention */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  iVar1 = node->data;
  if (node->next != (Node *)0x0) {
    iVar1 = iVar1 + node->next->data;
  }
  return iVar1;
}



/* Function: struct_bitfields @ 00011cd0 */

/* WARNING: Unknown calling convention */

int struct_bitfields(Flags *f)

{
  byte bVar1;
  
  bVar1 = *(byte *)f;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00011d00 */

/* WARNING: Unknown calling convention */

int union_type(UnionData *u,int type)

{
  if (type == 0) {
    return u->i;
  }
  if (type != 1) {
    return (int)u->bytes[0];
  }
  return (int)ROUND(u->f);
}



/* Function: union_array @ 00011d60 */

int union_array(UnionData *arr,int n)

{
  UnionData *pUVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    pUVar1 = arr + n;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + arr->i;
      arr = arr + 1;
    } while (arr != pUVar1);
    return iVar2;
  }
  return 0;
}



/* Function: enum_type @ 00011d90 */

/* WARNING: Unknown calling convention */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00011da0 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* WARNING: Unknown calling convention */

int enum_switch(State s)

{
  int iVar1;
  
  iVar1 = -99;
  if (s < 4) {
    iVar1 = *(int *)(CSWTCH_75 + s * 4);
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 00011dd0 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00011dde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00011df0 */

/* WARNING: Unknown calling convention */

int linked_list(Node *head)

{
  int iVar1;
  
  iVar1 = 0;
  for (; head != (Node *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00011e10 */

/* WARNING: Unknown calling convention */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
  iVar1 = 0;
  for (; head != (DNode *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00011e30 */

int binary_tree_sum(TreeNode *root)

{
  int *piVar1;
  int iVar2;
  TreeNode *pTVar3;
  int iVar4;
  int iVar5;
  TreeNode *pTVar6;
  TreeNode *pTVar7;
  TreeNode *pTVar8;
  int iVar9;
  TreeNode *pTVar10;
  int iVar11;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  TreeNode *local_54;
  TreeNode *local_50;
  TreeNode *local_4c;
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
  for (; root != (TreeNode *)0x0; root = root->right) {
    local_3c = 0;
    local_44 = root->data;
    local_54 = root->left;
    if (local_54 != (TreeNode *)0x0) {
      do {
        local_38 = 0;
        local_40 = local_54->data;
        local_50 = local_54->left;
        if (local_50 != (TreeNode *)0x0) {
          do {
            local_34 = 0;
            local_2c = local_50->data;
            local_4c = local_50->left;
            if (local_4c != (TreeNode *)0x0) {
              do {
                local_68 = 0;
                local_30 = local_4c->data;
                pTVar6 = local_4c->left;
                if (pTVar6 != (TreeNode *)0x0) {
                  do {
                    pTVar3 = pTVar6->left;
                    iVar5 = pTVar6->data;
                    local_70 = 0;
                    if (pTVar3 != (TreeNode *)0x0) {
                      do {
                        local_6c = pTVar3->data;
                        pTVar7 = pTVar3->left;
                        local_64 = 0;
                        if (pTVar7 != (TreeNode *)0x0) {
                          do {
                            local_48 = pTVar7->data;
                            pTVar8 = pTVar7->left;
                            iVar9 = 0;
                            if (pTVar8 != (TreeNode *)0x0) {
                              do {
                                pTVar10 = pTVar8->left;
                                iVar11 = pTVar8->data;
                                iVar4 = 0;
                                if (pTVar10 != (TreeNode *)0x0) {
                                  do {
                                    iVar2 = binary_tree_sum(pTVar10->left);
                                    piVar1 = &pTVar10->data;
                                    pTVar10 = pTVar10->right;
                                    iVar4 = iVar4 + iVar2 + *piVar1;
                                  } while (pTVar10 != (TreeNode *)0x0);
                                  iVar11 = iVar11 + iVar4;
                                }
                                pTVar8 = pTVar8->right;
                                iVar9 = iVar9 + iVar11;
                              } while (pTVar8 != (TreeNode *)0x0);
                              local_48 = local_48 + iVar9;
                            }
                            pTVar7 = pTVar7->right;
                            local_64 = local_64 + local_48;
                          } while (pTVar7 != (TreeNode *)0x0);
                          local_6c = local_6c + local_64;
                        }
                        pTVar3 = pTVar3->right;
                        local_70 = local_70 + local_6c;
                      } while (pTVar3 != (TreeNode *)0x0);
                      iVar5 = iVar5 + local_70;
                    }
                    pTVar6 = pTVar6->right;
                    local_68 = local_68 + iVar5;
                  } while (pTVar6 != (TreeNode *)0x0);
                  local_30 = local_30 + local_68;
                }
                local_34 = local_34 + local_30;
                local_4c = local_4c->right;
              } while (local_4c != (TreeNode *)0x0);
              local_2c = local_2c + local_34;
            }
            local_38 = local_38 + local_2c;
            local_50 = local_50->right;
          } while (local_50 != (TreeNode *)0x0);
          local_40 = local_40 + local_38;
        }
        local_3c = local_3c + local_40;
        local_54 = local_54->right;
      } while (local_54 != (TreeNode *)0x0);
      local_44 = local_44 + local_3c;
    }
    local_28 = local_28 + local_44;
  }
  return local_28;
}



/* Function: binary_tree @ 00012060 */

/* WARNING: Unknown calling convention */

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



/* Function: graph_traverse @ 000120a0 */

int graph_traverse(Graph *g)

{
  int *piVar1;
  Edge *pEVar2;
  Edge **ppEVar3;
  int iVar4;
  
  piVar1 = &g->numVertices;
                    /* Unresolved local var: int i@[???] */
  if (*piVar1 < 1) {
    return 0;
  }
  ppEVar3 = g->adjList;
  iVar4 = 0;
  do {
                    /* Unresolved local var: Edge * edge@[???] */
    for (pEVar2 = g->adjList[0]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
      iVar4 = iVar4 + pEVar2->dest;
    }
    g = (Graph *)(g->adjList + 1);
  } while (g != (Graph *)(ppEVar3 + *piVar1));
  return iVar4;
}



/* Function: test_composite_types @ 000120e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  int iVar1;
  Node *pNVar2;
  DNode *pDVar3;
  int iVar4;
  int iVar5;
  int in_GS_OFFSET;
  Node list [3];
  DNode dlist [2];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
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
  list[0].data = 10;
  list[1].next = list + 2;
  iVar4 = 10;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: Node * current@[???] */
  iVar5 = 0;
  list[1].data = 0x14;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  list[0].next = list + 1;
  for (pNVar2 = list[0].next; iVar5 = iVar5 + iVar4, pNVar2 != (Node *)0x0; pNVar2 = pNVar2->next) {
    iVar4 = pNVar2->data;
  }
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar5);
  pDVar3 = dlist;
  dlist[0].data = 10;
  dlist[0].next = dlist + 1;
  iVar4 = 10;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: DNode * current@[???] */
  iVar5 = 0;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  dlist[1].prev = pDVar3;
  while( true ) {
    pDVar3 = pDVar3->next;
    iVar5 = iVar5 + iVar4;
    if (pDVar3 == (DNode *)0x0) break;
    iVar4 = pDVar3->data;
  }
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar5);
  iVar4 = binary_tree_sum((TreeNode *)0x0);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar4 + 100);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 000122eb */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 000122ef */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: __stack_chk_fail_local @ 00012300 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012320 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001233a) */
/* WARNING: Removing unreachable block (ram,0x00012350) */
/* WARNING: Removing unreachable block (ram,0x0001235d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001236c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 70 */
