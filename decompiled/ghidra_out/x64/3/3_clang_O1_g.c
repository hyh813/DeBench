/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_clang_O1_g
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



/* Function: _start @ 00101120 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101150 */

/* WARNING: Removing unreachable block (ram,0x00101163) */
/* WARNING: Removing unreachable block (ram,0x0010116f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101180 */

/* WARNING: Removing unreachable block (ram,0x001011a4) */
/* WARNING: Removing unreachable block (ram,0x001011b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001011c0 */

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



/* Function: local_vars @ 00101210 */

int local_vars(int x)

{
                    /* Unresolved local var: int a@[DW_OP_reg5(RDI)]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???] */
  return x * 2 + 10;
}



/* Function: local_array @ 00101220 */

int local_array(int n)

{
  int iVar1;
  long lVar2;
  int aiStack_28 [10];
  
                    /* Unresolved local var: int[10] arr@[???] */
  iVar1 = 0;
  lVar2 = 0;
                    /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
  do {
    aiStack_28[lVar2] = iVar1;
    lVar2 = lVar2 + 1;
    iVar1 = iVar1 + n;
  } while (lVar2 != 10);
  return aiStack_28[5];
}



/* Function: local_struct @ 00101250 */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_reg5(RDI); DW_OP_piece: 4;
                       DW_OP_breg5(RDI): 0; DW_OP_constu: 4294967295; DW_OP_and; DW_OP_lit1;
                       DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4] */
  return x * 3;
}



/* Function: address_of_local @ 00101260 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00101270 */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[DW_OP_reg5(RDI)]
                       Unresolved local var: int * p2@[DW_OP_reg5(RDI)] */
  return *arr * 2;
}



/* Function: large_stack_frame @ 00101280 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  long lVar1;
  char acStack_808 [2056];
  
                    /* Unresolved local var: char[2048] large_buf@[???] */
  lVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(RAX)] */
    acStack_808[lVar1] = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  return (int)acStack_808[0x400];
}



/* Function: vla_stack @ 001012b0 */

int vla_stack(int n)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[719] vla@[???] */
  iVar2 = -1;
  if (0xfffffc17 < n - 0x3e9U) {
    lVar1 = -8 - ((ulong)(uint)n * 4 + 0xf & 0xfffffffffffffff0);
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      lVar3 = 0;
      do {
        *(int *)(&stack0xfffffffffffffff8 + lVar3 * 2 + lVar1 + 8) = (int)lVar3;
        lVar3 = lVar3 + 2;
      } while ((ulong)(uint)n * 2 != lVar3);
    }
    iVar2 = *(int *)(&stack0xfffffffffffffff8 + (ulong)(uint)(n / 2) * 4 + lVar1 + 8);
  }
  return iVar2;
}



/* Function: alloca_usage @ 00101310 */

int alloca_usage(int n)

{
  long lVar1;
  undefined4 *puVar2;
  
                    /* Unresolved local var: int * arr@[???] */
  if (0 < n) {
                    /* Unresolved local var: int i@[???] */
    lVar1 = 0;
    puVar2 = (undefined4 *)(&stack0xfffffffffffffff8 + -((long)n * 4 + 0xfU & 0xfffffffffffffff0));
    do {
      *puVar2 = (int)lVar1;
      lVar1 = lVar1 + 3;
      puVar2 = puVar2 + 1;
    } while ((ulong)(uint)n * 3 != lVar1);
    return *(int *)((long)(&stack0xfffffffffffffff8 + -((long)n * 4 + 0xfU & 0xfffffffffffffff0)) +
                   (ulong)(uint)(n / 2) * 4);
  }
  return -1;
}



/* Function: stack_alias @ 00101370 */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 00101380 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  uint *puVar1;
  long lVar2;
  uint local_808 [256];
  char local_408;
  
                    /* Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???]
                       Unresolved local var: int out@[???] */
  puVar1 = local_808;
  puts(&DAT_001035d9);
  lVar2 = 0;
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  do {
    *(int *)((long)local_808 + lVar2 * 2) = (int)lVar2;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x14);
  lVar2 = 0;
  printf("MEM-L1-02 (local_array): %d\n",(ulong)local_808[5]);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
                    /* Unresolved local var: char[2048] large_buf@[???]
                       Unresolved local var: int i@[DW_OP_reg3(RBX)] */
  do {
    *(char *)((long)local_808 + lVar2) = (char)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x800);
  lVar2 = 0;
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)(uint)(int)local_408);
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[719] vla@[???] */
                    /* Unresolved local var: int i@[???] */
  do {
    *(int *)((long)local_808 + lVar2 * 2) = (int)lVar2;
    lVar2 = lVar2 + 2;
  } while (lVar2 != 0x14);
  lVar2 = 0;
  printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_808[5]);
                    /* Unresolved local var: int * arr@[DW_OP_reg7(RSP)]
                       Unresolved local var: int i@[???] */
  do {
    *puVar1 = (int)lVar2;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x1e);
  printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_808[5]);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 001014b0 */

int heap_basic(int n)

{
  void *__ptr;
  long lVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc((long)n << 2);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      lVar1 = 0;
      do {
        *(int *)((long)__ptr + lVar1 * 2) = (int)lVar1;
        lVar1 = lVar1 + 2;
      } while ((ulong)(uint)n * 2 != lVar1);
    }
    iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_calloc @ 00101500 */

int heap_calloc(int n)

{
  void *__ptr;
  ulong uVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc((long)n,4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (n < 1) {
      iVar2 = 0;
    }
    else {
      uVar1 = 0;
      iVar2 = 0;
      do {
        iVar2 = iVar2 + *(int *)((long)__ptr + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while ((uint)n != uVar1);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 00101550 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  void *__ptr_00;
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
                    /* Unresolved local var: int i@[???] */
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      *(int *)((long)__ptr + lVar3 * 4) = (int)lVar1;
      lVar3 = lVar1;
    } while (lVar1 != 5);
    iVar2 = *(int *)((long)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      iVar4 = -2;
      __ptr_00 = __ptr;
    }
    else {
      lVar3 = 5;
      iVar4 = 0x32;
      do {
                    /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
        *(int *)((long)__ptr_00 + lVar3 * 4) = iVar4;
        lVar3 = lVar3 + 1;
        iVar4 = iVar4 + 10;
      } while (lVar3 != 10);
      iVar4 = -3;
      if (*(int *)((long)__ptr_00 + 8) == iVar2) {
        iVar4 = *(int *)((long)__ptr_00 + 0x14);
      }
    }
    free(__ptr_00);
  }
  return iVar4;
}



/* Function: heap_array @ 001015e0 */

int heap_array(int n)

{
  undefined4 *__ptr;
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc((long)n << 2);
  if (__ptr == (undefined4 *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      lVar1 = 0;
      puVar3 = __ptr;
      do {
        *puVar3 = (int)lVar1;
        lVar1 = lVar1 + 3;
        puVar3 = puVar3 + 1;
      } while ((ulong)(uint)n * 3 != lVar1);
    }
    iVar2 = __ptr[n / 2];
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_struct @ 00101650 */

int heap_struct(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: Point * p@[???] */
  return x * 3;
}



/* Function: heap_nested @ 00101660 */

int heap_nested(Node **head)

{
  Node *pNVar1;
  
  pNVar1 = malloc(0x10);
  *head = pNVar1;
  if (pNVar1 == (Node *)0x0) {
    return -1;
  }
  pNVar1->data = 10;
  pNVar1 = malloc(0x10);
  (*head)->next = pNVar1;
  pNVar1 = (*head)->next;
  if (pNVar1 != (Node *)0x0) {
    pNVar1->data = 0x14;
    pNVar1->next = (Node *)0x0;
    return 0;
  }
  free(*head);
  return -2;
}



/* Function: linked_list_heap @ 001016c0 */

/* WARNING: Variable defined which should be unmapped: temp */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *__ptr;
  int *piVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  Node *temp;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * current@[???]
                       Unresolved local var: Node * temp@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = (int *)0x0;
  bVar6 = true;
  uVar4 = 0;
  piVar3 = (int *)0x0;
  do {
    piVar2 = malloc(0x10);
    if (piVar2 == (int *)0x0) goto joined_r0x00101743;
    *piVar2 = uVar4 * 10;
    piVar2[2] = 0;
    piVar2[3] = 0;
    piVar1 = piVar2;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar3 + 2) = piVar2;
      piVar1 = __ptr;
    }
    __ptr = piVar1;
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
    if (piVar2 == (int *)0x0) break;
    bVar6 = uVar4 < 4;
    uVar4 = uVar4 + 1;
    piVar3 = piVar2;
  } while (uVar4 != 5);
LAB_0010176b:
  iVar5 = -1;
  if (!bVar6) {
    iVar5 = 0;
    for (piVar3 = __ptr; piVar3 != (int *)0x0; piVar3 = *(int **)(piVar3 + 2)) {
      iVar5 = iVar5 + *piVar3;
    }
    while (__ptr != (int *)0x0) {
      piVar3 = *(int **)(__ptr + 2);
      free(__ptr);
      __ptr = piVar3;
    }
  }
  return iVar5;
joined_r0x00101743:
  while (__ptr != (int *)0x0) {
    piVar3 = *(int **)(__ptr + 2);
    free(__ptr);
    __ptr = piVar3;
  }
  __ptr = (int *)0x0;
  goto LAB_0010176b;
}



/* Function: create_tree_node @ 001017e0 */

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



/* Function: tree_heap_traversal @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  int *__ptr;
  int *__ptr_00;
  int *__ptr_01;
  int iVar1;
  
                    /* Unresolved local var: TreeNode * root@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: TreeNode * node@[???] */
  __ptr = malloc(0x18);
  if (__ptr == (int *)0x0) {
    return -1;
  }
  *__ptr = 10;
  __ptr[2] = 0;
  __ptr[3] = 0;
  __ptr[4] = 0;
  __ptr[5] = 0;
                    /* Unresolved local var: TreeNode * node@[???] */
  __ptr_00 = malloc(0x18);
  if (__ptr_00 != (int *)0x0) {
    *__ptr_00 = 0x14;
    __ptr_00[2] = 0;
    __ptr_00[3] = 0;
    __ptr_00[4] = 0;
    __ptr_00[5] = 0;
  }
  *(int **)(__ptr + 2) = __ptr_00;
                    /* Unresolved local var: TreeNode * node@[???] */
  __ptr_01 = malloc(0x18);
  if (__ptr_01 != (int *)0x0) {
    *__ptr_01 = 0x1e;
    __ptr_01[2] = 0;
    __ptr_01[3] = 0;
    __ptr_01[4] = 0;
    __ptr_01[5] = 0;
  }
  *(int **)(__ptr + 4) = __ptr_01;
  if ((__ptr_00 == (int *)0x0) || (__ptr_01 == (int *)0x0)) {
    if (__ptr_00 != (int *)0x0) {
      free(__ptr_00);
    }
    iVar1 = -2;
    if (__ptr_01 == (int *)0x0) goto LAB_001018b4;
  }
  else {
    iVar1 = *__ptr_00 + *__ptr + *__ptr_01;
    free(__ptr_00);
    __ptr_01 = *(int **)(__ptr + 4);
  }
  free(__ptr_01);
LAB_001018b4:
  free(__ptr);
  return iVar1;
}



/* Function: memory_leak @ 001018d0 */

int memory_leak(int n)

{
  void *pvVar1;
  ulong uVar2;
  
                    /* Unresolved local var: int * leak@[???] */
  pvVar1 = malloc((long)n << 2);
  if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      uVar2 = 0;
      do {
        *(int *)((long)pvVar1 + uVar2 * 4) = (int)uVar2;
        uVar2 = uVar2 + 1;
      } while ((uint)n != uVar2);
    }
    return *(int *)((long)pvVar1 + (long)(n / 2) * 4);
  }
  return -1;
}



/* Function: dangling_pointer @ 00101920 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  __ptr = malloc(4);
  if (__ptr != (int *)0x0) {
    *__ptr = 0x2a;
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return -1;
}



/* Function: double_free @ 00101960 */

int double_free(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -2;
}



/* Function: heap_overflow @ 00101970 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int *__ptr;
  long lVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    lVar1 = 0;
                    /* Unresolved local var: int i@[???] */
    piVar2 = __ptr;
    do {
      *piVar2 = (int)lVar1;
      lVar1 = lVar1 + 100;
      piVar2 = piVar2 + 1;
    } while (lVar1 != 0x44c);
    iVar3 = *__ptr;
    free(__ptr);
  }
  return iVar3;
}



/* Function: test_heap_memory @ 001019c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  __pid_t __pid;
  undefined8 in_RAX;
  void *pvVar4;
  void *__ptr;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  undefined8 uVar10;
  ulong uVar11;
  char *__format;
  uint local_24;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: pid_t pid@[???] */
  local_24 = (uint)((ulong)in_RAX >> 0x20);
  puts(&DAT_001035f7);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  pvVar4 = malloc(0x28);
  uVar3 = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    lVar7 = 0;
    do {
      *(int *)((long)pvVar4 + lVar7 * 2) = (int)lVar7;
      lVar7 = lVar7 + 2;
    } while (lVar7 != 0x14);
    uVar3 = *(uint *)((long)pvVar4 + 0x14);
    free(pvVar4);
  }
  uVar9 = 0;
  printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar3);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  pvVar4 = calloc(5,4);
  uVar3 = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    lVar7 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
      uVar9 = uVar9 + *(int *)((long)pvVar4 + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (lVar7 != 5);
    free(pvVar4);
    uVar3 = uVar9;
  }
  printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar3);
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???] */
  pvVar4 = malloc(0x14);
  uVar9 = 0xffffffff;
  uVar3 = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
                    /* Unresolved local var: int i@[???] */
    lVar7 = 0;
    do {
      lVar1 = lVar7 + 1;
      *(int *)((long)pvVar4 + lVar7 * 4) = (int)lVar1;
      lVar7 = lVar1;
    } while (lVar1 != 5);
    iVar2 = *(int *)((long)pvVar4 + 8);
    __ptr = realloc(pvVar4,0x28);
    if (__ptr == (void *)0x0) {
      uVar3 = 0xfffffffe;
      __ptr = pvVar4;
    }
    else {
      lVar7 = 5;
      iVar8 = 0x32;
      do {
                    /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
        *(int *)((long)__ptr + lVar7 * 4) = iVar8;
        lVar7 = lVar7 + 1;
        iVar8 = iVar8 + 10;
      } while (lVar7 != 10);
      uVar3 = 0xfffffffd;
      if (*(int *)((long)__ptr + 8) == iVar2) {
        uVar3 = *(uint *)((long)__ptr + 0x14);
      }
    }
    free(__ptr);
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar3);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  puVar5 = malloc(0x28);
  if (puVar5 != (undefined4 *)0x0) {
    lVar7 = 0;
                    /* Unresolved local var: int i@[???] */
    puVar6 = puVar5;
    do {
      *puVar6 = (int)lVar7;
      lVar7 = lVar7 + 3;
      puVar6 = puVar6 + 1;
    } while (lVar7 != 0x1e);
    uVar9 = puVar5[5];
    free(puVar5);
  }
  printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar9);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  puVar5 = malloc(0x10);
  if (puVar5 == (undefined4 *)0x0) {
    uVar10 = 0xffffffff;
  }
  else {
    *puVar5 = 10;
    puVar6 = malloc(0x10);
    *(undefined4 **)(puVar5 + 2) = puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      free(puVar5);
      uVar10 = 0xfffffffe;
    }
    else {
      *puVar6 = 0x14;
      *(undefined8 *)(puVar6 + 2) = 0;
      uVar10 = 0;
    }
  }
  printf("HEAP-L2-06 (heap_nested): %d\n",uVar10);
  if (puVar5 != (undefined4 *)0x0) {
    free(*(void **)(puVar5 + 2));
    free(puVar5);
  }
  uVar3 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar3);
  uVar3 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar3);
                    /* Unresolved local var: int * leak@[???] */
  pvVar4 = malloc(0x14);
  if (pvVar4 == (void *)0x0) {
    uVar11 = 0xffffffff;
  }
  else {
    lVar7 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg2(RCX)] */
      *(int *)((long)pvVar4 + lVar7 * 4) = (int)lVar7;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 5);
    uVar11 = (ulong)*(uint *)((long)pvVar4 + 8);
  }
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar11);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_001032fb);
    }
    else {
                    /* Unresolved local var: int status@[???] */
      waitpid(__pid,(int *)&local_24,0);
      uVar3 = local_24 & 0x7f;
      if (uVar3 == 0) {
        uVar11 = (ulong)(byte)(local_24 >> 8);
        __format = &DAT_00103295;
      }
      else {
        if ((int)(uVar3 * 0x1000000 + 0x1000000) < 0x2000000) {
          return;
        }
        __format = &DAT_001032ba;
        uVar11 = (ulong)uVar3;
      }
      printf(__format,uVar11);
    }
    return;
  }
                    /* Unresolved local var: int result@[???] */
  uVar3 = dangling_pointer();
  printf(&DAT_00103285,(ulong)uVar3);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00101cd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00101ce0 */

int global_array_access(int idx)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)idx < 10) {
    iVar1 = global_array[idx];
  }
  return iVar1;
}



/* Function: static_local @ 00101d00 */

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



/* Function: call_static_func @ 00101d20 */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 00101d30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00101d50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101d60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00101d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00101d80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00101d90 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00101da0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00101db0 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00101dc0 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 00101de0 */

int global_heap_store(int *p)

{
  global_heap_ptr = p;
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 00101e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00101e10 */

int tls_access(int val)

{
  return val * 2;
}



/* Function: init_order_test @ 00101e20 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 00101e30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  uint uVar1;
  int local_c;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_00103615);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n");
  printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter * 2));
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local::counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local::counter = static_local::counter + 1;
  printf("STM-L1-03 (static_local): %d\n");
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
  uVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
  printf("STM-L2-03 (read_const_data): %d\n",(ulong)((int)const_string[4] + 0x2a));
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  local_c = 100;
  global_heap_ptr = &local_c;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: double_value @ 00102000 */

int double_value(int x)

{
  return x * 2;
}



/* Function: memop_memset @ 00102010 */

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



/* Function: memop_memcpy @ 00102040 */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  iVar1 = -1;
  if (((dst != (void *)0x0) && (src != (void *)0x0)) && (n != 0)) {
    memcpy(dst,src,n);
    iVar1 = *(int *)(((n & 0xfffffffffffffffc) - 4) + (long)dst);
  }
  return iVar1;
}



/* Function: memop_memmove @ 00102080 */

int memop_memmove(void *buf,size_t n)

{
  int iVar1;
  
  iVar1 = -1;
  if ((buf != (void *)0x0) && (1 < n)) {
    memmove((void *)((long)buf + 1),buf,n - 1);
    iVar1 = (int)*(char *)((long)buf + 1);
  }
  return iVar1;
}



/* Function: memop_memcmp @ 001020b0 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  iVar2 = 0;
  if (((p1 != (void *)0x0) && (p2 != (void *)0x0)) && (n != 0)) {
    iVar1 = memcmp(p1,p2,n);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = -(uint)(iVar1 != 0);
    }
  }
  return iVar2;
}



/* Function: memop_bzero @ 001020e0 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00102100 */

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



/* Function: memop_unaligned_access @ 00102130 */

int memop_unaligned_access(char *buf)

{
                    /* Unresolved local var: int value@[???] */
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00102140 */

int memop_memory_barrier(int *flag)

{
                    /* Unresolved local var: int local@[???] */
  if (flag != (int *)0x0) {
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00102160 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
                    /* Unresolved local var: char[11] move_buf@[???]
                       Unresolved local var: int flag@[???]
                       Unresolved local var: int[5] int_src@[???]
                       Unresolved local var: int[5] int_dst@[???]
                       Unresolved local var: char[256] buffer@[???]
                       Unresolved local var: char[10] zero_buf@[???]
                       Unresolved local var: char[4] bcopy_src@[???]
                       Unresolved local var: char[4] bcopy_dst@[???]
                       Unresolved local var: char[8] unalign_buf@[???]
                       Unresolved local var: int[3] cmp_a@[???]
                       Unresolved local var: int[3] cmp_b@[???] */
  puts(&DAT_00103639);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  printf("MEMOP-L2-03: %c\n",0x48);
  printf("MEMOP-L2-04: %d\n",0xffffffff);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  printf("MEMOP-L3-02: %d\n",10);
  return;
}



/* Function: main @ 00102240 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 00102260 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 00102264 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 63 */
