/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/3/3_clang_O1_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001008c8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001008e0 @ 001008e0 */

void FUN_001008e0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100a40 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100a74 */

/* WARNING: Removing unreachable block (ram,0x00100a84) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100a90 */

/* WARNING: Removing unreachable block (ram,0x00100aa8) */
/* WARNING: Removing unreachable block (ram,0x00100ab4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100ac0 */

/* WARNING: Removing unreachable block (ram,0x00100ae4) */
/* WARNING: Removing unreachable block (ram,0x00100af0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100afc @ 00100afc */

void FUN_00100afc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100b00 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: local_vars @ 00100b54 */

int local_vars(int x)

{
                    /* Unresolved local var: int a@[DW_OP_reg0(x0)]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int c@[???] */
  return x * 2 + 10;
}



/* Function: local_array @ 00100b60 */

int local_array(int n)

{
  long lVar1;
  int iVar2;
  int local_28 [10];
  
                    /* Unresolved local var: int[10] arr@[???] */
  lVar1 = 0;
  iVar2 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    *(int *)((long)local_28 + lVar1) = iVar2;
    iVar2 = iVar2 + n;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  return local_28[5];
}



/* Function: local_struct @ 00100b90 */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
                        */
  return x * 3;
}



/* Function: address_of_local @ 00100b98 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00100bac */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
                       Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
  return *arr << 1;
}



/* Function: large_stack_frame @ 00100bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  long lVar1;
  byte local_810 [2048];
  
                    /* Unresolved local var: char[2048] large_buf@[???] */
  lVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg8(x8)] */
    local_810[lVar1] = (byte)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  return (int)local_810[0x400];
}



/* Function: vla_stack @ 00100be8 */

int vla_stack(int n)

{
  long lVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[708] vla@[???] */
  if (n - 0x3e9U < 0xfffffc18) {
    return -1;
  }
  uVar2 = (ulong)(uint)n;
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    lVar1 = 0;
    puVar3 = (undefined4 *)(&stack0xfffffffffffffff0 + -(uVar2 * 4 + 0xf & 0x7fffffff0));
    do {
      *puVar3 = (int)lVar1;
      lVar1 = lVar1 + 2;
      puVar3 = puVar3 + 1;
    } while (uVar2 * 2 - lVar1 != 0);
  }
  if (n < 0) {
    n = n + 1;
  }
  return *(int *)((long)(&stack0xfffffffffffffff0 + -(uVar2 * 4 + 0xf & 0x7fffffff0)) +
                 (ulong)(uint)(n >> 1) * 4);
}



/* Function: alloca_usage @ 00100c68 */

int alloca_usage(int n)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined4 *puVar4;
  
                    /* Unresolved local var: int * arr@[???] */
  uVar2 = (ulong)(uint)n;
  if (0 < n) {
    uVar1 = (uint)n >> 0x1f;
                    /* Unresolved local var: int i@[???] */
    lVar3 = 0;
    puVar4 = (undefined4 *)
             (&stack0xfffffffffffffff0 +
             -((-(ulong)uVar1 & 0xfffffffc00000000 | uVar2 << 2) + 0xf & 0xfffffffffffffff0));
    do {
      *puVar4 = (int)lVar3;
      lVar3 = lVar3 + 3;
      puVar4 = puVar4 + 1;
    } while (uVar2 + (ulong)(uint)n * 2 != lVar3);
    if (n < 0) {
      n = n + 1;
    }
    return *(int *)((long)(&stack0xfffffffffffffff0 +
                          -((-(ulong)uVar1 & 0xfffffffc00000000 | uVar2 << 2) + 0xf &
                           0xfffffffffffffff0)) + (ulong)(uint)(n >> 1) * 4);
  }
  return -1;
}



/* Function: stack_alias @ 00100cd4 */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 00100cdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  long lVar1;
  undefined4 *puVar2;
  undefined4 local_820 [5];
  uint local_80c;
  byte local_420;
  
                    /* Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???]
                       Unresolved local var: int out@[???] */
  puts(&DAT_00102225);
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  lVar1 = 0;
  puVar2 = local_820;
  do {
                    /* Unresolved local var: int[10] arr@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[???] */
    *puVar2 = (int)lVar1;
    lVar1 = lVar1 + 2;
    puVar2 = puVar2 + 1;
  } while (lVar1 != 0x14);
  printf("MEM-L1-02 (local_array): %d\n",(ulong)local_80c);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  lVar1 = 0;
  do {
                    /* Unresolved local var: char[2048] large_buf@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[DW_OP_reg8(x8)] */
    *(char *)((long)local_820 + lVar1) = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)local_420);
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[708] vla@[DW_OP_breg31(sp): 0] */
  lVar1 = 0;
  puVar2 = local_820;
  do {
                    /* Unresolved local var: int i@[???] */
    *puVar2 = (int)lVar1;
    lVar1 = lVar1 + 2;
    puVar2 = puVar2 + 1;
  } while (lVar1 != 0x14);
  printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_80c);
  lVar1 = 0;
  puVar2 = local_820;
  do {
                    /* Unresolved local var: int * arr@[DW_OP_reg31(sp)]
                       Unresolved local var: int i@[???] */
    *puVar2 = (int)lVar1;
    lVar1 = lVar1 + 3;
    puVar2 = puVar2 + 1;
  } while (lVar1 != 0x1e);
  printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_80c);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00100e00 */

int heap_basic(int n)

{
  undefined4 *__ptr;
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (__ptr == (undefined4 *)0x0) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      lVar1 = 0;
      puVar2 = __ptr;
      do {
        *puVar2 = (int)lVar1;
        lVar1 = lVar1 + 2;
        puVar2 = puVar2 + 1;
      } while ((ulong)(uint)n * 2 - lVar1 != 0);
    }
    if (n < 0) {
      n = n + 1;
    }
    iVar3 = __ptr[n >> 1];
    free(__ptr);
  }
  return iVar3;
}



/* Function: heap_calloc @ 00100e70 */

int heap_calloc(int n)

{
  int *__ptr;
  ulong uVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc((long)n,4);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (n < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      uVar1 = (ulong)(uint)n;
      piVar2 = __ptr;
      do {
        uVar1 = uVar1 - 1;
        iVar3 = *piVar2 + iVar3;
        piVar2 = piVar2 + 1;
      } while (uVar1 != 0);
    }
    free(__ptr);
  }
  return iVar3;
}



/* Function: heap_realloc @ 00100ed8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  long lVar1;
  void *__ptr;
  void *__ptr_00;
  int iVar2;
  long lVar3;
  int iVar4;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    iVar4 = -1;
  }
  else {
    lVar3 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      lVar1 = lVar3 + 1;
      *(int *)((long)__ptr + lVar3 * 4) = (int)lVar1;
      lVar3 = lVar1;
    } while (lVar1 != 5);
    iVar4 = *(int *)((long)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      iVar4 = -2;
      __ptr_00 = __ptr;
    }
    else {
      iVar2 = 0x32;
      lVar3 = 0x14;
      do {
                    /* Unresolved local var: int i@[???] */
        *(int *)((long)__ptr_00 + lVar3) = iVar2;
        iVar2 = iVar2 + 10;
        lVar3 = lVar3 + 4;
      } while (lVar3 != 0x28);
      if (*(int *)((long)__ptr_00 + 8) == iVar4) {
        iVar4 = *(int *)((long)__ptr_00 + 0x14);
      }
      else {
        iVar4 = -3;
      }
    }
    free(__ptr_00);
  }
  return iVar4;
}



/* Function: heap_array @ 00100f80 */

int heap_array(int n)

{
  undefined4 *__ptr;
  long lVar1;
  undefined4 *puVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (__ptr == (undefined4 *)0x0) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      lVar1 = 0;
      puVar2 = __ptr;
      do {
        *puVar2 = (int)lVar1;
        lVar1 = lVar1 + 3;
        puVar2 = puVar2 + 1;
      } while ((ulong)(uint)n * 3 != lVar1);
    }
    if (n < 0) {
      n = n + 1;
    }
    iVar3 = __ptr[n >> 1];
    free(__ptr);
  }
  return iVar3;
}



/* Function: heap_struct @ 00100ff0 */

int heap_struct(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: Point * p@[???] */
  return x * 3;
}



/* Function: heap_nested @ 00100ff8 */

int heap_nested(Node **head)

{
  int iVar1;
  Node *pNVar2;
  
  pNVar2 = malloc(0x10);
  *head = pNVar2;
  if (pNVar2 == (Node *)0x0) {
    iVar1 = -1;
  }
  else {
    pNVar2->data = 10;
    pNVar2 = malloc(0x10);
    (*head)->next = pNVar2;
    pNVar2 = (*head)->next;
    if (pNVar2 == (Node *)0x0) {
      free(*head);
      iVar1 = -2;
    }
    else {
      iVar1 = 0;
      pNVar2->next = (Node *)0x0;
      pNVar2->data = 0x14;
    }
  }
  return iVar1;
}



/* Function: linked_list_heap @ 0010106c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  uint uVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  int *__ptr;
  int iVar6;
  uint uVar7;
  
                    /* Unresolved local var: Node * current@[???]
                       Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * temp@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = (int *)0x0;
  bVar3 = true;
  piVar5 = (int *)0x0;
  uVar7 = 0;
  do {
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
    piVar4 = malloc(0x10);
    if (piVar4 == (int *)0x0) goto joined_r0x001010c4;
    piVar4[2] = 0;
    piVar4[3] = 0;
    *piVar4 = uVar7 * 10;
    piVar2 = piVar4;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar5 + 2) = piVar4;
      piVar2 = __ptr;
    }
    __ptr = piVar2;
    if (piVar4 == (int *)0x0) break;
    uVar1 = uVar7 + 1;
    bVar3 = uVar7 < 4;
    piVar5 = piVar4;
    uVar7 = uVar1;
  } while (uVar1 != 5);
LAB_00101108:
  if (bVar3) {
    iVar6 = -1;
  }
  else {
    iVar6 = 0;
    for (piVar5 = __ptr; piVar5 != (int *)0x0; piVar5 = *(int **)(piVar5 + 2)) {
      iVar6 = *piVar5 + iVar6;
    }
    while (__ptr != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[???] */
      piVar5 = *(int **)(__ptr + 2);
      free(__ptr);
      __ptr = piVar5;
    }
  }
  return iVar6;
joined_r0x001010c4:
  while (__ptr != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[DW_OP_reg19(x19)] */
    piVar5 = *(int **)(__ptr + 2);
    free(__ptr);
    __ptr = piVar5;
  }
  __ptr = (int *)0x0;
  goto LAB_00101108;
}



/* Function: create_tree_node @ 00101160 */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
                    /* Unresolved local var: TreeNode * node@[???] */
  pTVar1 = malloc(0x18);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 00101190 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  int *__ptr;
  int *__ptr_00;
  int *__ptr_01;
  int iVar1;
  
                    /* Unresolved local var: TreeNode * root@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: TreeNode * node@[???] */
  __ptr = malloc(0x18);
  if (__ptr == (int *)0x0) {
    return -1;
  }
  __ptr[2] = 0;
  __ptr[3] = 0;
  __ptr[4] = 0;
  __ptr[5] = 0;
  *__ptr = 10;
                    /* Unresolved local var: TreeNode * node@[???] */
  __ptr_00 = malloc(0x18);
  if (__ptr_00 != (int *)0x0) {
    __ptr_00[2] = 0;
    __ptr_00[3] = 0;
    __ptr_00[4] = 0;
    __ptr_00[5] = 0;
    *__ptr_00 = 0x14;
  }
                    /* Unresolved local var: TreeNode * node@[???] */
  *(int **)(__ptr + 2) = __ptr_00;
  __ptr_01 = malloc(0x18);
  if (__ptr_01 != (int *)0x0) {
    __ptr_01[2] = 0;
    __ptr_01[3] = 0;
    __ptr_01[4] = 0;
    __ptr_01[5] = 0;
    *__ptr_01 = 0x1e;
  }
  *(int **)(__ptr + 4) = __ptr_01;
  if ((__ptr_00 == (int *)0x0) || (__ptr_01 == (int *)0x0)) {
    if (__ptr_00 != (int *)0x0) {
      free(__ptr_00);
    }
    iVar1 = -2;
    if (__ptr_01 == (int *)0x0) goto LAB_0010124c;
  }
  else {
    iVar1 = *__ptr_00 + *__ptr + *__ptr_01;
    free(__ptr_00);
    __ptr_01 = *(int **)(__ptr + 4);
  }
  free(__ptr_01);
LAB_0010124c:
  free(__ptr);
  return iVar1;
}



/* Function: memory_leak @ 00101268 */

int memory_leak(int n)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  
                    /* Unresolved local var: int * leak@[???] */
  pvVar2 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (pvVar2 == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      uVar3 = 0;
      do {
        *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
        uVar3 = uVar3 + 1;
      } while ((uint)n != uVar3);
    }
    if (n < 0) {
      n = n + 1;
    }
    iVar1 = *(int *)((long)pvVar2 + (long)(n >> 1) * 4);
  }
  return iVar1;
}



/* Function: dangling_pointer @ 001012c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int iVar1;
  int *__ptr;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  __ptr = malloc(4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    *__ptr = 0x2a;
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    iVar1 = *__ptr;
  }
  return iVar1;
}



/* Function: double_free @ 0010131c */

int double_free(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -2;
}



/* Function: heap_overflow @ 00101330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int *__ptr;
  long lVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    lVar1 = 0;
    iVar2 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      *(int *)((long)__ptr + lVar1) = iVar2;
      iVar2 = iVar2 + 100;
      lVar1 = lVar1 + 4;
    } while (lVar1 != 0x2c);
    iVar2 = *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: test_heap_memory @ 00101384 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  int *piVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  __pid_t __pid;
  undefined4 *puVar5;
  void *pvVar6;
  void *__ptr;
  undefined4 *puVar7;
  char *__format;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  uint local_24;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: pid_t pid@[???] */
  puts(&DAT_00102243);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  puVar5 = malloc(0x28);
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar11 = 0;
    puVar7 = puVar5;
    do {
                    /* Unresolved local var: int i@[???] */
      *puVar7 = (int)lVar11;
      lVar11 = lVar11 + 2;
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0x14);
    uVar4 = puVar5[5];
    free(puVar5);
  }
  printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar4);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  pvVar6 = calloc(5,4);
  if (pvVar6 == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar11 = 0;
    uVar4 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      piVar1 = (int *)((long)pvVar6 + lVar11);
      lVar11 = lVar11 + 4;
      uVar4 = *piVar1 + uVar4;
    } while (lVar11 != 0x14);
    free(pvVar6);
  }
  printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar4);
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???] */
  pvVar6 = malloc(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar11 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      lVar2 = lVar11 + 1;
      *(int *)((long)pvVar6 + lVar11 * 4) = (int)lVar2;
      lVar11 = lVar2;
    } while (lVar2 != 5);
    iVar3 = *(int *)((long)pvVar6 + 8);
    __ptr = realloc(pvVar6,0x28);
    if (__ptr == (void *)0x0) {
      uVar4 = 0xfffffffe;
      __ptr = pvVar6;
    }
    else {
      iVar10 = 0x32;
      lVar11 = 0x14;
      do {
                    /* Unresolved local var: int i@[???] */
        *(int *)((long)__ptr + lVar11) = iVar10;
        lVar11 = lVar11 + 4;
        iVar10 = iVar10 + 10;
      } while (lVar11 != 0x28);
      if (*(int *)((long)__ptr + 8) == iVar3) {
        uVar4 = *(uint *)((long)__ptr + 0x14);
      }
      else {
        uVar4 = 0xfffffffd;
      }
    }
    free(__ptr);
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar4);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  puVar5 = malloc(0x28);
  if (puVar5 == (undefined4 *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar11 = 0;
    puVar7 = puVar5;
    do {
                    /* Unresolved local var: int i@[???] */
      *puVar7 = (int)lVar11;
      lVar11 = lVar11 + 3;
      puVar7 = puVar7 + 1;
    } while (lVar11 != 0x1e);
    uVar4 = puVar5[5];
    free(puVar5);
  }
  printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar4);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  puVar5 = malloc(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    uVar8 = 0xffffffff;
  }
  else {
    *puVar5 = 10;
    puVar7 = malloc(0x10);
    *(undefined4 **)(puVar5 + 2) = puVar7;
    if (puVar7 == (undefined4 *)0x0) {
      free(puVar5);
      uVar8 = 0xfffffffe;
    }
    else {
      uVar8 = 0;
      *(undefined8 *)(puVar7 + 2) = 0;
      *puVar7 = 0x14;
    }
  }
  printf("HEAP-L2-06 (heap_nested): %d\n",uVar8);
  if (puVar5 != (undefined4 *)0x0) {
    free(*(void **)(puVar5 + 2));
    free(puVar5);
  }
  uVar4 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar4);
  uVar4 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar4);
                    /* Unresolved local var: int * leak@[???] */
  pvVar6 = malloc(0x14);
  if (pvVar6 == (void *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    lVar11 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg8(x8)] */
      *(int *)((long)pvVar6 + lVar11 * 4) = (int)lVar11;
      lVar11 = lVar11 + 1;
    } while (lVar11 != 5);
    uVar9 = (ulong)*(uint *)((long)pvVar6 + 8);
  }
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar9);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_00101f47);
    }
    else {
                    /* Unresolved local var: int status@[???] */
      waitpid(__pid,(int *)&local_24,0);
      uVar4 = local_24 & 0x7f;
      if ((local_24 & 0x7f) == 0) {
        uVar4 = local_24 >> 8 & 0xff;
        __format = &DAT_00101ee1;
      }
      else {
        if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
          return;
        }
        __format = &DAT_00101f06;
      }
      printf(__format,(ulong)uVar4);
    }
    return;
  }
                    /* Unresolved local var: int result@[???] */
  uVar4 = dangling_pointer();
  printf(&DAT_00101ed1,(ulong)uVar4);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 0010168c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 001016a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 001016b0 */

int global_array_access(int idx)

{
  if (9 < (uint)idx) {
    return -1;
  }
  return global_array[idx];
}



/* Function: static_local @ 001016d0 */

int static_local(int reset)

{
  int iVar1;
  
  iVar1 = 0;
  if (reset == 0) {
    iVar1 = static_local::counter + 1;
  }
  static_local::counter = iVar1;
  return iVar1;
}



/* Function: call_static_func @ 001016e8 */

int call_static_func(int x)

{
  return x << 1 | 1;
}



/* Function: access_extern_global @ 001016f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 0010170c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00101724 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101738 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00101740 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00101748 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00101750 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 0010175c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00101768 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00101774 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 001017a0 */

int global_heap_store(int *p)

{
  global_heap_ptr = p;
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 001017bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 001017c4 */

int tls_access(int val)

{
  return val << 1;
}



/* Function: init_order_test @ 001017cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 001017d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  uint uVar1;
  int local_24;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_00102261);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n");
  printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter << 1));
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local::counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local::counter = static_local::counter + 1;
  printf("STM-L1-03 (static_local): %d\n");
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
  uVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
  printf("STM-L2-03 (read_const_data): %d\n",(ulong)((byte)const_string[4] + 0x2a));
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  global_heap_ptr = &local_24;
  local_24 = 100;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: double_value @ 00101994 */

int double_value(int x)

{
  return x << 1;
}



/* Function: memop_memset @ 0010199c */

int memop_memset(void *buf,size_t size,int fill_value)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((buf != (void *)0x0) && (size != 0)) {
    memset(buf,fill_value,size);
    uVar1 = (uint)*(byte *)buf;
  }
  return uVar1;
}



/* Function: memop_memcpy @ 001019dc */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  iVar1 = -1;
  if (((dst != (void *)0x0) && (src != (void *)0x0)) && (n != 0)) {
    memcpy(dst,src,n);
    iVar1 = *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
  }
  return iVar1;
}



/* Function: memop_memmove @ 00101a24 */

int memop_memmove(void *buf,size_t n)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((buf != (void *)0x0) && (1 < n)) {
    memmove((void *)((long)buf + 1),buf,n - 1);
    uVar1 = (uint)*(byte *)((long)buf + 1);
  }
  return uVar1;
}



/* Function: memop_memcmp @ 00101a64 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = 0;
  if (((p1 != (void *)0x0) && (p2 != (void *)0x0)) && (n != 0)) {
    iVar2 = memcmp(p1,p2,n);
    iVar1 = -(uint)(iVar2 != 0);
    if (0 < iVar2) {
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* Function: memop_bzero @ 00101aa0 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00101ad8 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (((src != (void *)0x0) && (dst != (void *)0x0)) && (n != 0)) {
    memmove(dst,src,n);
    uVar1 = (uint)*(byte *)dst;
  }
  return uVar1;
}



/* Function: memop_unaligned_access @ 00101b14 */

int memop_unaligned_access(char *buf)

{
                    /* Unresolved local var: int value@[???] */
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00101b28 */

int memop_memory_barrier(int *flag)

{
                    /* Unresolved local var: int local@[???] */
  if (flag != (int *)0x0) {
    DataMemoryBarrier(2,3);
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00101b48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
                    /* Unresolved local var: char[11] move_buf@[DW_OP_breg31(sp): +16; DW_OP_piece:
                       10]
                       Unresolved local var: int flag@[DW_OP_breg31(sp): +12]
                       Unresolved local var: char[256] buffer@[???]
                       Unresolved local var: int[5] int_dst@[???]
                       Unresolved local var: int[5] int_src@[???]
                       Unresolved local var: char[10] zero_buf@[???]
                       Unresolved local var: char[4] bcopy_dst@[???]
                       Unresolved local var: char[4] bcopy_src@[???]
                       Unresolved local var: char[8] unalign_buf@[???]
                       Unresolved local var: int[3] cmp_a@[???]
                       Unresolved local var: int[3] cmp_b@[???] */
  puts(&DAT_00102285);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  printf("MEMOP-L2-03: %c\n",0x48);
  printf("MEMOP-L2-04: %d\n",0xffffffff);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  DataMemoryBarrier(2,3);
  printf("MEMOP-L3-02: %d\n",10);
  return;
}



/* Function: main @ 00101c28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 00101c4c */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 00101c54 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 65 */
