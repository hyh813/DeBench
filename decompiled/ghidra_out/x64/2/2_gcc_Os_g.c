/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/2/2_gcc_Os_g
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



/* Function: double_value @ 001011b9 */

int double_value(int x)

{
  return x * 2;
}



/* Function: process_int @ 001011c1 */

int process_int(int x)

{
  return x * 2 + 1;
}



/* Function: complex_callback @ 001011ca */

int complex_callback(int *p,char **args)

{
  *p = *p + 10;
  return (int)(*args != (char *)0x0);
}



/* Function: process_char @ 001011db */

char process_char(char c)

{
  if ((byte)(c + 0xbfU) < 0x1a) {
    c = c + ' ';
  }
  return c;
}



/* Function: process_short @ 001011ed */

short process_short(short a,short b)

{
  return b + a;
}



/* Function: process_long @ 001011f5 */

long process_long(long x)

{
  return x * 2;
}



/* Function: process_ll @ 001011fe */

longlong process_ll(longlong x)

{
  return x * x;
}



/* Function: process_float @ 0010120a */

float process_float(float f)

{
  return f * 1.5 + 0.5;
}



/* Function: process_double @ 0010121f */

double process_double(double d)

{
  return d * 0.5 + 0.1;
}



/* Function: process_ld @ 00101234 */

/* WARNING: Unknown calling convention */

longdouble * process_ld(longdouble d)

{
  longdouble *in_RAX;
  
  return in_RAX;
}



/* Function: process_bool @ 00101243 */

_Bool process_bool(int x)

{
  _Bool _Var1;
  
  _Var1 = false;
  if (0 < x) {
    _Var1 = (_Bool)(~(byte)x & 1);
  }
  return _Var1;
}



/* Function: const_param @ 00101258 */

int const_param(int *p)

{
  return *p + 10;
}



/* Function: volatile_access @ 00101262 */

int volatile_access(int *p)

{
  return *p + *p;
}



/* Function: test_data_types_l1 @ 0010126d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_data_types_l1(void)

{
  int vol_value;
  
  puts(&DAT_00102004);
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



/* Function: array_1d_stack @ 001013ec */

int array_1d_stack(int *arr,int n)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + arr[lVar1];
  }
  return iVar2;
}



/* Function: array_string @ 00101406 */

int array_string(char *str)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  do {
    lVar2 = lVar1;
    lVar1 = lVar2 + 1;
  } while (str[lVar2] != '\0');
  return (int)lVar2;
}



/* Function: array_2d_stack @ 0010141d */

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



/* Function: array_3d @ 00101436 */

int array_3d(int (*arr) [5] [5])

{
  int (*paiVar1) [5];
  int (*paiVar2) [5];
  int iVar3;
  int (*paiVar4) [5];
  
                    /* Unresolved local var: int i@[???] */
  paiVar2 = arr[5];
  iVar3 = 0;
  do {
                    /* Unresolved local var: int j@[???] */
    paiVar1 = (int (*) [5])((long)arr + 100);
    paiVar4 = *arr;
    do {
                    /* Unresolved local var: int k@[???] */
      arr = (int (*) [5] [5])(paiVar4 + 1);
      iVar3 = iVar3 + (*(int (*) [5])*paiVar4)[0] + (*paiVar4)[1] + (*paiVar4)[2] + (*paiVar4)[3] +
              (*paiVar4)[4];
      paiVar4 = (int (*) [5])arr;
    } while (arr != (int (*) [5] [5])paiVar1);
  } while ((int (*) [5] [5])paiVar2 != arr);
  return iVar3;
}



/* Function: array_vla @ 00101464 */

int array_vla(int n,int *arr)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + arr[lVar1];
  }
  return iVar2;
}



/* Function: array_pointer @ 0010147e */

int array_pointer(int (*arr) [10],int n)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + arr[lVar1][0];
  }
  return iVar2;
}



/* Function: pointer_array @ 0010149c */

int pointer_array(int **arr,int n)

{
  long lVar1;
  int iVar2;
  
  if (10 < n) {
    n = 10;
  }
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    if (arr[lVar1] != (int *)0x0) {
      iVar2 = iVar2 + *arr[lVar1];
    }
  }
  return iVar2;
}



/* Function: array_complex_index @ 001014c8 */

int array_complex_index(int *arr,int w,int h,int x,int y)

{
  if (((-1 < (x | y)) && (x < w)) && (y < h)) {
    return arr[w * y + x];
  }
  return -1;
}



/* Function: array_oob @ 001014ef */

int array_oob(int *arr,int n)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 <= n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + arr[lVar1];
  }
  return iVar2;
}



/* Function: test_array_types @ 00101509 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_array_types(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int (*paiVar5) [5];
  int (*paiVar6) [10];
  int (*paiVar7) [5];
  int **ppiVar8;
  long in_FS_OFFSET;
  byte bVar9;
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
  undefined1 local_18 [2];
  char str [6];
  
  bVar9 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_0010216f);
  arr1[0] = 1;
  arr1[1] = 2;
  arr1[2] = 3;
  arr1[3] = 4;
  arr1[4] = 5;
  iVar2 = array_1d_stack(arr1,5);
  __printf_chk(1,"ARR-L1-01 (array_1d_stack): %d\n",iVar2);
  builtin_strncpy(str,"hello",6);
  array_string(str);
  __printf_chk(1);
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
                    /* Unresolved local var: int j@[???] */
  paiVar6 = matrix;
  do {
    lVar4 = 0;
    do {
      iVar3 = (int)lVar4;
      if (iVar2 != iVar3) {
        iVar3 = 0;
      }
      (*paiVar6)[lVar4] = iVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 10);
    iVar2 = iVar2 + 1;
    paiVar6 = paiVar6 + 1;
  } while (iVar2 != 10);
  iVar2 = array_2d_stack(matrix);
  __printf_chk(1,"ARR-L1-03 (array_2d_stack): %d\n",iVar2);
                    /* Unresolved local var: int i@[???] */
  paiVar7 = cube[0];
  do {
                    /* Unresolved local var: int j@[???] */
    iVar2 = 5;
    paiVar5 = paiVar7;
    do {
                    /* Unresolved local var: int k@[???] */
      (*(int (*) [5])*paiVar5)[0] = 1;
      (*paiVar5)[1] = 1;
      (*paiVar5)[2] = 1;
      (*paiVar5)[3] = 1;
      (*paiVar5)[4] = 1;
      iVar2 = iVar2 + -1;
      paiVar5 = paiVar5 + 1;
    } while (iVar2 != 0);
    paiVar7 = paiVar7 + 5;
  } while ((int (*) [5])local_18 != paiVar7);
  iVar2 = array_3d((int (*) [5] [5])cube[0]);
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
  ppiVar8 = ptr_arr + 3;
  for (lVar4 = 0xe; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined4 *)ppiVar8 = 0;
    ppiVar8 = (int **)((long)ppiVar8 + (ulong)bVar9 * -8 + 4);
  }
  ptr_arr[0] = &a;
  ptr_arr[1] = &b;
  ptr_arr[2] = &c;
  a = 10;
  b = 0x14;
  c = 0x1e;
  iVar2 = pointer_array(ptr_arr,3);
  __printf_chk(1,"ARR-L2-03 (pointer_array): %d\n",iVar2);
                    /* Unresolved local var: int i@[???] */
  lVar4 = 0;
  do {
    flat[lVar4] = (int)lVar4;
    lVar4 = lVar4 + 1;
  } while (lVar4 != 0x14);
  __printf_chk(1,"ARR-L2-04 (array_complex_index): %d\n",flat[0x11]);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: ptr_single @ 001017b6 */

int ptr_single(int *param_1)

{
  return *param_1 + 10;
}



/* Function: ptr_double @ 001017c0 */

int ptr_double(int **p)

{
  return **p + 5;
}



/* Function: ptr_triple @ 001017cd */

int ptr_triple(int ***p)

{
  return ***p + 1;
}



/* Function: ptr_increment @ 001017dc */

int ptr_increment(int *p,int n)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + p[lVar1];
  }
  return iVar2;
}



/* Function: ptr_offset @ 001017f6 */

int ptr_offset(int *p,int offset)

{
  return p[offset];
}



/* Function: ptr_diff @ 00101801 */

int ptr_diff(int *p1,int *p2)

{
  return (int)((long)p1 - (long)p2 >> 2);
}



/* Function: ptr_void @ 0010180f */

int ptr_void(void *p,int type)

{
  int iVar1;
  
  if (type == 0) {
    return *(int *)p;
  }
  iVar1 = -1;
  if (type == 1) {
    iVar1 = (int)*(char *)p;
  }
  return iVar1;
}



/* Function: ptr_const @ 00101825 */

int ptr_const(int *p)

{
  return *p * 2;
}



/* Function: ptr_const_ptr @ 0010182e */

int ptr_const_ptr(int *p)

{
  int iVar1;
  
  iVar1 = *p;
  *p = iVar1 + 5;
  return iVar1 + 5;
}



/* Function: ptr_func_simple @ 0010183a */

int ptr_func_simple(_func_int_int *f,int x)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*f)(x);
  return iVar1;
}



/* Function: ptr_func_complex @ 00101845 */

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
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar2;
}



/* Function: ptr_cast @ 00101898 */

int ptr_cast(void *p)

{
  return *(int *)p;
}



/* Function: opaque_handle_create @ 0010189f */

void * opaque_handle_create(int size)

{
  return (void *)(long)size;
}



/* Function: opaque_handle_op @ 001018a7 */

int opaque_handle_op(void *handle)

{
  return (int)handle * 2;
}



/* Function: test_pointer_types @ 001018af */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_pointer_types(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int val3;
  int val11;
  int *ptr3;
  int **pptr3;
  int arr4 [5];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00102285);
  __printf_chk(1,"PTR-L2-01 (ptr_single): %d\n",0xf);
  __printf_chk(1,"PTR-L2-02 (ptr_double): %d\n",0xf);
  ptr3 = &val3;
  val3 = 5;
  pptr3 = &ptr3;
  ptr_triple(&pptr3);
  __printf_chk(1);
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
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: struct_simple @ 00101ab7 */

int struct_simple(Point3D *p)

{
  return p->y + p->x + p->z;
}



/* Function: struct_array @ 00101ac4 */

int struct_array(Point3D *pts,int n)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (iVar1 = 0; iVar1 < n; iVar1 = iVar1 + 1) {
    iVar2 = iVar2 + pts->y + pts->x + pts->z;
    pts = pts + 1;
  }
  return iVar2;
}



/* Function: struct_nested @ 00101ae8 */

int struct_nested(Rect *r)

{
  return (r->position).x + (r->size).width;
}



/* Function: struct_deep @ 00101af2 */

int struct_deep(Widget *w)

{
  return (w->bounds).position.z + (w->style).fill.r;
}



/* Function: struct_with_ptr @ 00101afd */

int struct_with_ptr(Node *node)

{
  int iVar1;
  
  iVar1 = 0;
  if (node->next != (Node *)0x0) {
    iVar1 = node->next->data;
  }
  return node->data + iVar1;
}



/* Function: struct_bitfields @ 00101b13 */

int struct_bitfields(Flags *f)

{
  byte bVar1;
  
  bVar1 = *(byte *)f;
  return (bVar1 & 1) + (bVar1 >> 1 & 3) + (bVar1 >> 3 & 7) + (*(uint *)f >> 6 & 0x3ff);
}



/* Function: union_type @ 00101b3b */

int union_type(UnionData *u,int type)

{
  if (type == 0) {
    return u->i;
  }
  if (type == 1) {
    return (int)u->f;
  }
  return (int)u->bytes[0];
}



/* Function: union_array @ 00101b53 */

int union_array(UnionData *arr,int n)

{
  long lVar1;
  int iVar2;
  
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
    iVar2 = iVar2 + arr[lVar1].i;
  }
  return iVar2;
}



/* Function: enum_type @ 00101b6d */

int enum_type(State s)

{
  return s * 10;
}



/* Function: enum_switch @ 00101b75 */

int enum_switch(State s)

{
  int iVar1;
  
  iVar1 = -99;
  if (s < 4) {
    iVar1 = (int)*(char *)((long)&CSWTCH_61 + (ulong)s);
  }
  return iVar1;
}



/* Function: struct_func_ptr @ 00101b91 */

int struct_func_ptr(Device *dev)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00101b9b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = (*dev->process)(dev->data);
  return iVar1;
}



/* Function: linked_list @ 00101b9d */

int linked_list(Node *head)

{
  int iVar1;
  
  iVar1 = 0;
  for (; head != (Node *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: doubly_linked_list @ 00101bb1 */

int doubly_linked_list(DNode *head)

{
  int iVar1;
  
  iVar1 = 0;
  for (; head != (DNode *)0x0; head = head->next) {
    iVar1 = iVar1 + head->data;
  }
  return iVar1;
}



/* Function: binary_tree_sum @ 00101bc5 */

int binary_tree_sum(TreeNode *root)

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



/* Function: binary_tree @ 00101bf4 */

int binary_tree(TreeNode *root)

{
  int iVar1;
  
  iVar1 = binary_tree_sum(root);
  return iVar1;
}



/* Function: graph_traverse @ 00101bfa */

int graph_traverse(Graph *g)

{
  long lVar1;
  Edge *pEVar2;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  for (lVar1 = 0; (int)lVar1 < g->numVertices; lVar1 = lVar1 + 1) {
                    /* Unresolved local var: Edge * edge@[???] */
    for (pEVar2 = g->adjList[lVar1]; pEVar2 != (Edge *)0x0; pEVar2 = pEVar2->next) {
      iVar3 = iVar3 + pEVar2->dest;
    }
  }
  return iVar3;
}



/* Function: test_composite_types @ 00101c25 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_composite_types(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  Edge **ppEVar4;
  long in_FS_OFFSET;
  byte bVar5;
  Flags f;
  Node node2;
  Node node1;
  Device dev;
  Edge e1;
  TreeNode tree;
  UnionData arr_u [3];
  Point3D pts [2];
  Node list [3];
  DNode dlist [2];
  Graph g;
  
  bVar5 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_0010241e);
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
  node1.next = &node2;
  node2.data = 0x14;
  node2.next = (Node *)0x0;
  node1.data = 10;
  struct_with_ptr(&node1);
  __printf_chk(1);
  f = (Flags)((ulong)f & 0xfff00000ffff0000 | 0x191d);
  struct_bitfields(&f);
  __printf_chk(1);
  __printf_chk(1,"CMP-L2-07 (union_type): %d\n",0x12345678);
  arr_u[0] = (UnionData)0xa;
  arr_u[1] = (UnionData)0x14;
  arr_u[2].i = 0x1e;
  iVar2 = union_array(arr_u,3);
  __printf_chk(1,"CMP-L2-08 (union_array): %d\n",iVar2);
  __printf_chk(1,"CMP-L2-09 (enum_type): %d\n",10);
  __printf_chk(1,"CMP-L2-10 (enum_switch): %d\n",0x32);
  dev.data = 10;
  dev.process = process_int;
  iVar2 = struct_func_ptr(&dev);
  __printf_chk(1,"CMP-L2-11 (struct_func_ptr): %d\n",iVar2);
  list[0].next = list + 1;
  list[0].data = 10;
  list[1].next = list + 2;
  list[1].data = 0x14;
  list[2].data = 0x1e;
  list[2].next = (Node *)0x0;
  linked_list(list);
  __printf_chk(1);
  dlist[1].prev = dlist;
  dlist[0].next = dlist + 1;
  dlist[0].data = 10;
  dlist[0].prev = (DNode *)0x0;
  dlist[1].data = 0x14;
  dlist[1].next = (DNode *)0x0;
  doubly_linked_list(dlist[1].prev);
  __printf_chk(1);
  tree.data = 100;
  tree.left = (TreeNode *)0x0;
  tree.right = (TreeNode *)0x0;
  binary_tree_sum(&tree);
  __printf_chk(1);
  ppEVar4 = g.adjList + 1;
  for (lVar3 = 0x14; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined4 *)ppEVar4 = 0;
    ppEVar4 = (Edge **)((long)ppEVar4 + (ulong)bVar5 * -8 + 4);
  }
  g.adjList[0] = &e1;
  e1.dest = 1;
  e1.next = (Edge *)0x0;
  g.numVertices = 2;
  graph_traverse(&g);
  __printf_chk(1);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: _fini @ 00101fa4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 64 */
