/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_gcc_O2_g
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

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

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

char process_char(char c)

{
  char cVar1;
  
  cVar1 = c + ' ';
  if (0x19 < (byte)(c + 0xbfU)) {
    cVar1 = c;
  }
  return cVar1;
}



/* Function: process_short @ 001011e0 */

short process_short(short a,short b)

{
  return b + a;
}



/* Function: process_int @ 001011f0 */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: process_long @ 00101200 */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 00101210 */

longlong process_ll(longlong x)

{
  return x * x;
}



/* Function: process_float @ 00101220 */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 00101240 */

double process_double(double d)

{
  return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00101260 */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
  longdouble *in_RAX;
  
  return in_RAX;
}



/* Function: process_bool @ 00101270 */

_Bool process_bool(int x)

{
  _Bool _Var1;
  
  _Var1 = (_Bool)(~(byte)x & 1);
  if (x < 1) {
    _Var1 = false;
  }
  return _Var1;
}



/* Function: const_param @ 00101290 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 001012a0 */

int volatile_access(int *p)

{
  return *p + *p;
}



/* Function: test_data_types_l1 @ 001012b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  int vol_value;
  
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
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int b@[???] */
  __printf_chk(1,"DT-L1-11 (volatile_access): %d\n",0x14);
  return;
}



/* Function: array_1d_stack @ 00101440 */

int array_1d_stack(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    piVar1 = arr + (ulong)(n - 1) + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: array_string @ 00101470 */

int array_string(char *str)

{
  long lVar1;
  long lVar2;
  
  if (*str != '\0') {
    lVar1 = 1;
    do {
      lVar2 = lVar1;
      lVar1 = lVar2 + 1;
    } while (str[lVar2] != '\0');
    return (int)lVar2;
  }
  return 0;
}



/* Function: array_2d_stack @ 001014a0 */

int array_2d_stack(int (*arr) [10])

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  piVar1 = arr[0xb];
  iVar2 = 0;
  do {
    iVar2 = iVar2 + (*arr)[0];
    arr = (int (*) [10])((long)arr + 0x2c);
  } while (arr != (int (*) [10])piVar1);
  return iVar2;
}



/* Function: array_3d @ 001014c0 */

int array_3d(int (*arr) [5] [5])

{
  int (*paiVar1) [5];
  int iVar2;
  int (*paiVar3) [5];
  int (*paaiVar4) [5] [5];
  
                    /* Unresolved local var: int i@[???] */
  paiVar3 = arr[1];
  iVar2 = 0;
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



/* Function: array_vla @ 00101500 */

int array_vla(int n,int *arr)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    piVar1 = arr + (ulong)(n - 1) + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: array_pointer @ 00101530 */

int array_pointer(int (*arr) [10],int n)

{
  int (*paiVar1) [10];
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    paiVar1 = arr + (ulong)(n - 1) + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + (*arr)[0];
      arr = arr + 1;
    } while (arr != paiVar1);
    return iVar2;
  }
  return 0;
}



/* Function: pointer_array @ 00101570 */

int pointer_array(int **arr,int n)

{
  long lVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 10;
  if (n < 0xb) {
    iVar2 = n;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar1 = 0;
    iVar3 = 0;
    do {
      if (arr[lVar1] != (int *)0x0) {
        iVar3 = iVar3 + *arr[lVar1];
      }
      lVar1 = lVar1 + 1;
    } while ((int)lVar1 < iVar2);
    return iVar3;
  }
  return 0;
}



/* Function: array_complex_index @ 001015c0 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  if (((-1 < (x | y)) && (x < w)) && (y < h)) {
    return arr[w * y + x];
  }
  return -1;
}



/* Function: array_oob @ 001015f0 */

int array_oob(int *arr,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (-1 < n) {
    iVar2 = 0;
    piVar1 = arr + (long)n + 1;
    do {
      iVar2 = iVar2 + *arr;
      arr = arr + 1;
    } while (arr != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: test_array_types @ 00101620 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  int (*paaiVar5) [5] [5];
  int (*paiVar6) [5];
  int (*paiVar7) [5];
  int iVar8;
  int (*paiVar9) [5];
  int iVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  int flat [20];
  int matrix [10] [10];
  int cube [5] [5] [5];
  char str [6];
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001033e1);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",0xf);
  builtin_strncpy(str,"hello",6);
                    /* Unresolved local var: int len@[???] */
  uVar3 = 1;
  do {
    uVar11 = uVar3 & 0xffffffff;
    pcVar1 = str + uVar3;
    uVar3 = uVar3 + 1;
  } while (*pcVar1 != '\0');
  __printf_chk(1,"ARR-L1-02 (array_string): %d\n",uVar11);
                    /* Unresolved local var: int i@[???] */
  paiVar6 = (int (*) [5])matrix;
  iVar8 = 0;
                    /* Unresolved local var: int j@[???] */
  paiVar9 = paiVar6;
  do {
    lVar4 = 0;
    do {
      iVar10 = 0;
      if (iVar8 == (int)lVar4) {
        iVar10 = (int)lVar4;
      }
      (*paiVar9)[lVar4] = iVar10;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 10);
    iVar8 = iVar8 + 1;
    paiVar9 = paiVar9 + 2;
  } while (iVar8 != 10);
                    /* Unresolved local var: int sum@[???] */
  iVar8 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    iVar8 = iVar8 + (*paiVar6)[0];
    paiVar6 = (int (*) [5])(paiVar6[2] + 1);
  } while (cube[0] + 2 != paiVar6);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar8);
                    /* Unresolved local var: int i@[???] */
  paiVar9 = cube[1];
  paiVar6 = paiVar9;
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar7 = (int (*) [5])(paiVar6 + -5);
    do {
      paaiVar5 = (int (*) [5] [5])paiVar7;
                    /* Unresolved local var: int k@[???] */
      (*paaiVar5)[0][0] = 1;
      (*paaiVar5)[0][1] = 1;
      (*paaiVar5)[0][2] = 1;
      (*paaiVar5)[0][3] = 1;
      (*paaiVar5)[0][4] = 1;
      paiVar7 = *paaiVar5 + 1;
    } while (*paaiVar5 + 1 != paiVar6);
    paiVar6 = paaiVar5[1] + 1;
  } while ((int (*) [5])&stack0x00000040 != paiVar6);
                    /* Unresolved local var: int sum@[???] */
  iVar8 = 0;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: int j@[???] */
    paiVar6 = paiVar9 + -5;
    do {
                    /* Unresolved local var: int k@[???] */
      paiVar7 = paiVar6 + 1;
      iVar8 = iVar8 + (*paiVar6)[0] + (*paiVar6)[1] + (*paiVar6)[2] + (*paiVar6)[3] + (*paiVar6)[4];
      paiVar6 = paiVar7;
    } while (paiVar9 != paiVar7);
    paiVar9 = paiVar9 + 5;
  } while (paiVar9 != (int (*) [5])&stack0x00000040);
  __printf_chk(1,"ARR-L1-04 (array_3d): %d\n",iVar8);
  __printf_chk(1,"ARR-L2-01 (array_vla): %d\n",0x3c);
  __printf_chk(1,"ARR-L2-02 (array_pointer): %d\n",100);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",0x3c);
                    /* Unresolved local var: int i@[???] */
  lVar4 = 0;
  do {
    flat[lVar4] = (int)lVar4;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x14);
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: ptr_single @ 00101840 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 00101850 */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 00101860 */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 00101870 */

int ptr_increment(int *p,int n)

{
  int *piVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    iVar2 = 0;
    piVar1 = p + n;
    do {
      iVar2 = iVar2 + *p;
      p = p + 1;
    } while (p != piVar1);
    return iVar2;
  }
  return 0;
}



/* Function: ptr_offset @ 001018a0 */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 001018b0 */

int ptr_diff(int *p1,int *p2)

{
  return (int)((long)p1 - (long)p2 >> 2);
}



/* Function: ptr_void @ 001018c0 */

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



/* Function: ptr_const @ 001018f0 */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 00101900 */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 00101910 */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101919. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00101920 */

int ptr_func_complex(_func_int_int_ptr_char_ptr_ptr *f,int *p)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  char *args [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  args[1] = (char *)0x0;
  args[0] = "test";
  iVar2 = (*f)(p,args);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: ptr_cast @ 00101970 */

int ptr_cast(void *p)

{
  return *(int *)p;
}



/* Function: opaque_handle_create @ 00101980 */

void * opaque_handle_create(int size)

{
  return (void *)(long)size;
}



/* Function: opaque_handle_op @ 00101990 */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: test_pointer_types @ 001019a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  long in_FS_OFFSET;
  int arr4 [5];
  int local_14;
  long local_10;
  
  piVar1 = arr4;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103454);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  __printf_chk(1,"PTR-L2-03 (ptr_triple): %d\n",6);
  arr4[4] = 5;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???] */
  iVar2 = 1;
  arr4[0] = 1;
  arr4[1] = 2;
  iVar3 = 0;
  arr4[2] = 3;
  arr4[3] = 4;
  while( true ) {
    piVar1 = piVar1 + 1;
    iVar3 = iVar3 + iVar2;
    if (piVar1 == &local_14) break;
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
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,"PTR-L2-13 (opaque_handle_op): %d\n",0x14);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: struct_simple @ 00101b80 */

int struct_simple(Point3D *p)

{
  return p->y + p->x + p->z;
}



/* Function: struct_array @ 00101b90 */

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
    } while (pPVar2 != pts + (ulong)(n - 1) + 1);
    return iVar3;
  }
  return 0;
}



/* Function: struct_nested @ 00101be0 */

int struct_nested(Rect *r)

{
  return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00101bf0 */

int struct_deep(Widget *w)

{
  return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00101c00 */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  iVar1 = node->data;
  if (node->next != (Node *)0x0) {
    iVar1 = iVar1 + node->next->data;
  }
  return iVar1;
}



/* Function: struct_bitfields @ 00101c20 */

int struct_bitfields(Flags *f)

{
  byte bVar1;
  
  bVar1 = *(byte *)f;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (uint)(*(ushort *)f >> 6);
}



/* Function: union_type @ 00101c50 */

int union_type(UnionData *u,int type)

{
  if (type == 0) {
    return u->i;
  }
  if (type != 1) {
    return (int)u->bytes[0];
  }
  return (int)u->f;
}



/* Function: union_array @ 00101c80 */

int union_array(UnionData *arr,int n)

{
  UnionData *pUVar1;
  int iVar2;
  
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    pUVar1 = arr + (ulong)(n - 1) + 1;
    iVar2 = 0;
    do {
      iVar2 = iVar2 + arr->i;
      arr = arr + 1;
    } while (arr != pUVar1);
    return iVar2;
  }
  return 0;
}



/* Function: enum_type @ 00101cb0 */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00101cc0 */

int enum_switch(State s)

{
  int iVar1;
  
  iVar1 = -99;
  if (s < 4) {
    iVar1 = *(int *)(CSWTCH_61 + (ulong)s * 4);
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 00101ce0 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00101cf0 */

int linked_list(Node *head)

{
  int iVar1;
  
  iVar1 = 0;
  if (head == (Node *)0x0) {
    return 0;
  }
  do {
    iVar1 = iVar1 + head->data;
    head = head->next;
  } while (head != (Node *)0x0);
  return iVar1;
}



/* Function: doubly_linked_list @ 00101d20 */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
  iVar1 = 0;
  if (head == (DNode *)0x0) {
    return 0;
  }
  do {
    iVar1 = iVar1 + head->data;
    head = head->next;
  } while (head != (DNode *)0x0);
  return iVar1;
}



/* Function: binary_tree_sum @ 00101d50 */

int binary_tree_sum(TreeNode *root)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  TreeNode *pTVar4;
  int iVar5;
  TreeNode *pTVar6;
  TreeNode *pTVar7;
  TreeNode *pTVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  TreeNode *pTVar12;
  TreeNode *pTVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  TreeNode *local_a0;
  TreeNode *local_98;
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
  for (; root != (TreeNode *)0x0; root = root->right) {
    local_7c = 0;
    local_84 = root->data;
    local_a0 = root->left;
    if (local_a0 != (TreeNode *)0x0) {
      do {
        local_78 = 0;
        local_80 = local_a0->data;
        local_98 = local_a0->left;
        if (local_98 != (TreeNode *)0x0) {
          do {
            local_74 = 0;
            local_6c = local_98->data;
            pTVar12 = local_98->left;
            if (pTVar12 != (TreeNode *)0x0) {
              do {
                local_70 = pTVar12->data;
                pTVar6 = pTVar12->left;
                iVar10 = 0;
                if (pTVar6 != (TreeNode *)0x0) {
                  do {
                    pTVar4 = pTVar6->left;
                    iVar14 = pTVar6->data;
                    iVar11 = 0;
                    if (pTVar4 != (TreeNode *)0x0) {
                      do {
                        pTVar8 = pTVar4->left;
                        iVar3 = pTVar4->data;
                        iVar9 = 0;
                        if (pTVar8 != (TreeNode *)0x0) {
                          do {
                            local_88 = pTVar8->data;
                            pTVar7 = pTVar8->left;
                            iVar16 = 0;
                            if (pTVar7 != (TreeNode *)0x0) {
                              do {
                                pTVar13 = pTVar7->left;
                                iVar15 = pTVar7->data;
                                iVar5 = 0;
                                if (pTVar13 != (TreeNode *)0x0) {
                                  do {
                                    iVar2 = binary_tree_sum(pTVar13->left);
                                    piVar1 = &pTVar13->data;
                                    pTVar13 = pTVar13->right;
                                    iVar5 = iVar5 + iVar2 + *piVar1;
                                  } while (pTVar13 != (TreeNode *)0x0);
                                  iVar15 = iVar15 + iVar5;
                                }
                                pTVar7 = pTVar7->right;
                                iVar16 = iVar16 + iVar15;
                              } while (pTVar7 != (TreeNode *)0x0);
                              local_88 = local_88 + iVar16;
                            }
                            pTVar8 = pTVar8->right;
                            iVar9 = iVar9 + local_88;
                          } while (pTVar8 != (TreeNode *)0x0);
                          iVar3 = iVar3 + iVar9;
                        }
                        pTVar4 = pTVar4->right;
                        iVar11 = iVar11 + iVar3;
                      } while (pTVar4 != (TreeNode *)0x0);
                      iVar14 = iVar14 + iVar11;
                    }
                    pTVar6 = pTVar6->right;
                    iVar10 = iVar10 + iVar14;
                  } while (pTVar6 != (TreeNode *)0x0);
                  local_70 = local_70 + iVar10;
                }
                pTVar12 = pTVar12->right;
                local_74 = local_74 + local_70;
              } while (pTVar12 != (TreeNode *)0x0);
              local_6c = local_6c + local_74;
            }
            local_78 = local_78 + local_6c;
            local_98 = local_98->right;
          } while (local_98 != (TreeNode *)0x0);
          local_80 = local_80 + local_78;
        }
        local_7c = local_7c + local_80;
        local_a0 = local_a0->right;
      } while (local_a0 != (TreeNode *)0x0);
      local_84 = local_84 + local_7c;
    }
    local_58 = local_58 + local_84;
  }
  return local_58;
}



/* Function: binary_tree @ 00101fb0 */

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



/* Function: graph_traverse @ 00101ff0 */

int graph_traverse(Graph *g)

{
  int *piVar1;
  Edge *pEVar2;
  Edge **ppEVar3;
  int iVar4;
  
  piVar1 = &g->numVertices;
                    /* Unresolved local var: int i@[???] */
  if (0 < *piVar1) {
    iVar4 = 0;
    ppEVar3 = g->adjList;
    do {
                    /* Unresolved local var: Edge * edge@[???] */
      for (pEVar2 = g->adjList[0]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
        iVar4 = iVar4 + pEVar2->dest;
      }
      g = (Graph *)(g->adjList + 1);
    } while (g != (Graph *)(ppEVar3 + (ulong)(*piVar1 - 1) + 1));
    return iVar4;
  }
  return 0;
}



/* Function: test_composite_types @ 00102040 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  long lVar1;
  int iVar2;
  Node *pNVar3;
  DNode *pDVar4;
  int iVar5;
  long in_FS_OFFSET;
  Node list [3];
  DNode dlist [2];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
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
  list[0].data = 10;
  list[1].next = list + 2;
  iVar2 = 10;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: Node * current@[???] */
  iVar5 = 0;
  list[1].data = 0x14;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  list[0].next = list + 1;
  for (pNVar3 = list[0].next; iVar5 = iVar5 + iVar2, pNVar3 != (Node *)0x0; pNVar3 = pNVar3->next) {
    iVar2 = pNVar3->data;
  }
  __printf_chk(1,"CMP-L2-12 (linked_list): %d\n",iVar5);
  pDVar4 = dlist;
  dlist[0].data = 10;
  dlist[0].next = dlist + 1;
  iVar2 = 10;
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: DNode * current@[???] */
  iVar5 = 0;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  dlist[1].prev = pDVar4;
  while( true ) {
    pDVar4 = pDVar4->next;
    iVar5 = iVar5 + iVar2;
    if (pDVar4 == (DNode *)0x0) break;
    iVar2 = pDVar4->data;
  }
  __printf_chk(1,"CMP-L2-13 (doubly_linked_list): %d\n",iVar5);
  iVar2 = binary_tree_sum((TreeNode *)0x0);
  __printf_chk(1,"CMP-L2-14 (binary_tree): %d\n",iVar2 + 100);
  __printf_chk(1,"CMP-L2-15 (graph_traverse): %d\n",1);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: _fini @ 00102280 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 62 */
