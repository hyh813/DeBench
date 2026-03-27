/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/3/3_gcc_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 00100990 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001009b0 @ 001009b0 */

void FUN_001009b0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00100b00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: _start @ 00100b40 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100b74 */

/* WARNING: Removing unreachable block (ram,0x00100b84) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100b90 */

/* WARNING: Removing unreachable block (ram,0x00100ba8) */
/* WARNING: Removing unreachable block (ram,0x00100bb4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100bc0 */

/* WARNING: Removing unreachable block (ram,0x00100be4) */
/* WARNING: Removing unreachable block (ram,0x00100bf0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100bfc @ 00100bfc */

void FUN_00100bfc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100c00 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: double_value @ 00100c54 */

int double_value(int x)

{
  return x << 1;
}



/* Function: local_vars @ 00100c5c */

int local_vars(int x)

{
                    /* Unresolved local var: int a@[DW_OP_reg0(x0)]
                       Unresolved local var: int b@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
                       DW_OP_stack_value]
                       Unresolved local var: int c@[DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl;
                       DW_OP_plus_uconst: 10; DW_OP_stack_value] */
  return x * 2 + 10;
}



/* Function: local_array @ 00100c68 */

/* WARNING: Removing unreachable block (ram,0x00100cc0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int local_array(int n)

{
  long lVar1;
  int iVar2;
  int arr [10];
  
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  lVar1 = 0;
  do {
    arr[lVar1] = iVar2;
    lVar1 = lVar1 + 1;
    iVar2 = iVar2 + n;
  } while (lVar1 != 10);
  return arr[5];
}



/* Function: local_struct @ 00100ccc */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
                        */
  return x * 3;
}



/* Function: address_of_local @ 00100cd4 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00100ce4 */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
                       Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
  return *arr << 1;
}



/* Function: large_stack_frame @ 00100cf0 */

/* WARNING: Removing unreachable block (ram,0x00100d48) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  long lVar1;
  char large_buf [2048];
  
                    /* Unresolved local var: int i@[???] */
  lVar1 = 0;
  do {
    large_buf[lVar1] = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  return (int)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00100d58 */

/* WARNING: Removing unreachable block (ram,0x00100e04) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int vla_stack(int n)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
                    /* Unresolved local var: int[11220] vla@[???]
                       Unresolved local var: ulong anon_var_0@[???] */
  puVar2 = auStack_30;
  if (n - 1U < 1000) {
    uVar4 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
    for (; puVar2 != auStack_30 + -(uVar4 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
      *(undefined8 *)(puVar2 + -0xfc00) = 0;
    }
    uVar4 = uVar4 & 0xfff0;
    lVar1 = -uVar4;
    *(undefined8 *)(puVar2 + lVar1) = 0;
    if (0x3ff < uVar4) {
      *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
    }
                    /* Unresolved local var: int i@[???] */
    lVar5 = 0;
    do {
      *(int *)(puVar2 + lVar5 * 4 + lVar1 + 0x10) = (int)lVar5 << 1;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < n);
    iVar3 = *(int *)(puVar2 + (long)(n >> 1) * 4 + lVar1 + 0x10);
  }
  else {
    iVar3 = -1;
  }
  return iVar3;
}



/* Function: alloca_usage @ 00100e1c */

/* WARNING: Removing unreachable block (ram,0x00100ec4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int alloca_usage(int n)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_30 [16];
  
                    /* Unresolved local var: int * arr@[???] */
  puVar2 = auStack_30;
  if (n < 1) {
    iVar3 = -1;
  }
  else {
    uVar4 = (-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2) + 0xf;
    for (; puVar2 != auStack_30 + -(uVar4 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
      *(undefined8 *)(puVar2 + -0xfc00) = 0;
    }
    uVar4 = uVar4 & 0xfff0;
    lVar1 = -uVar4;
    *(undefined8 *)(puVar2 + lVar1) = 0;
    if (0x3ff < uVar4) {
      *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
    }
                    /* Unresolved local var: int i@[???] */
    lVar5 = 0;
    do {
      *(int *)(puVar2 + lVar5 * 4 + lVar1 + 0x10) = (int)lVar5 * 3;
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < n);
    iVar3 = *(int *)(puVar2 + (long)(n >> 1) * 4 + lVar1 + 0x10);
  }
  return iVar3;
}



/* Function: stack_alias @ 00100edc */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 00100ee4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  
                    /* Unresolved local var: int out@[???]
                       Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???] */
  puts(&DAT_00101d98);
  __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  iVar1 = local_array(2);
  __printf_chk(1,"MEM-L1-02 (local_array): %d\n",iVar1);
  __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
  iVar1 = large_stack_frame();
  __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
  iVar1 = vla_stack(10);
  __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",iVar1);
  iVar1 = alloca_usage(10);
  __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00100fcc */

int heap_basic(int n)

{
  void *__ptr;
  long lVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
      *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 << 1;
    }
    iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_calloc @ 0010102c */

int heap_calloc(int n)

{
  void *__ptr;
  long lVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc((long)n,4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
    for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
      iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 00101088 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  undefined8 *__ptr;
  void *__ptr_00;
  int iVar1;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr == (undefined8 *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    *__ptr = 0x200000001;
    __ptr[1] = 0x400000003;
    *(undefined4 *)(__ptr + 2) = 5;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      iVar1 = -2;
      free(__ptr);
    }
    else {
      iVar1 = 0x32;
      if (*(int *)((long)__ptr_00 + 8) != 3) {
        iVar1 = -3;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 00101110 */

int heap_array(int n)

{
  void *__ptr;
  long lVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (lVar1 = 0; (int)lVar1 < n; lVar1 = lVar1 + 1) {
      *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 3;
    }
    iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_struct @ 00101170 */

int heap_struct(int x)

{
  void *__ptr;
  int iVar1;
  
                    /* Unresolved local var: Point * p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(8);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = x * 3;
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_nested @ 001011ac */

int heap_nested(Node **head)

{
  int iVar1;
  Node *__ptr;
  Node *pNVar2;
  
  __ptr = malloc(0x10);
  *head = __ptr;
  if (__ptr == (Node *)0x0) {
    iVar1 = -1;
  }
  else {
    __ptr->data = 10;
    pNVar2 = malloc(0x10);
    __ptr->next = pNVar2;
    if (pNVar2 == (Node *)0x0) {
      free(__ptr);
      iVar1 = -2;
    }
    else {
      pNVar2->data = 0x14;
      pNVar2->next = (Node *)0x0;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* Function: linked_list_heap @ 0010121c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int iVar1;
  int *piVar2;
  int *__ptr;
  int *__ptr_00;
  int iVar3;
  int *piVar4;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * current@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: Node * temp@[???]
                       Unresolved local var: int i@[???] */
  iVar3 = 0;
  piVar4 = (int *)0x0;
  __ptr = (int *)0x0;
  do {
                    /* Unresolved local var: Node * new_node@[???] */
    piVar2 = malloc(0x10);
    if (piVar2 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[???] */
        piVar4 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar4;
      }
      return -1;
    }
    *piVar2 = iVar3;
    piVar2[2] = 0;
    piVar2[3] = 0;
    __ptr_00 = piVar2;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar4 + 2) = piVar2;
      __ptr_00 = __ptr;
    }
    iVar3 = iVar3 + 10;
    piVar4 = piVar2;
    __ptr = __ptr_00;
  } while (iVar3 != 0x32);
  iVar3 = 0;
  piVar4 = __ptr_00;
  do {
    iVar1 = *piVar4;
    piVar4 = *(int **)(piVar4 + 2);
    iVar3 = iVar3 + iVar1;
  } while (piVar4 != (int *)0x0);
  do {
                    /* Unresolved local var: Node * temp@[???] */
    piVar4 = *(int **)(__ptr_00 + 2);
    free(__ptr_00);
    __ptr_00 = piVar4;
  } while (piVar4 != (int *)0x0);
  return iVar3;
}



/* Function: create_tree_node @ 001012c8 */

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



/* Function: tree_heap_traversal @ 001012f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  int iVar1;
  int iVar2;
  TreeNode *__ptr;
  TreeNode *pTVar3;
  TreeNode *__ptr_00;
  int iVar4;
  
                    /* Unresolved local var: TreeNode * root@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = create_tree_node(10);
  if (__ptr == (TreeNode *)0x0) {
    iVar4 = -1;
  }
  else {
    pTVar3 = create_tree_node(0x14);
    __ptr->left = pTVar3;
    pTVar3 = create_tree_node(0x1e);
    __ptr_00 = __ptr->left;
    __ptr->right = pTVar3;
    if (__ptr_00 != (TreeNode *)0x0) {
      if (pTVar3 != (TreeNode *)0x0) {
        iVar4 = __ptr_00->data;
        iVar1 = pTVar3->data;
        iVar2 = __ptr->data;
        free(__ptr_00);
        free(__ptr->right);
        free(__ptr);
        return iVar2 + iVar4 + iVar1;
      }
      free(__ptr_00);
    }
    if (__ptr->right != (TreeNode *)0x0) {
      free(__ptr->right);
    }
    iVar4 = -2;
    free(__ptr);
  }
  return iVar4;
}



/* Function: memory_leak @ 0010139c */

int memory_leak(int n)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
                    /* Unresolved local var: int * leak@[???] */
  pvVar2 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (pvVar2 == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    for (lVar3 = 0; (int)lVar3 < n; lVar3 = lVar3 + 1) {
      *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
    }
    iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
  }
  return iVar1;
}



/* Function: dangling_pointer @ 001013f0 */

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
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(__ptr);
    iVar1 = *__ptr;
  }
  return iVar1;
}



/* Function: double_free @ 00101440 */

int double_free(int *p)

{
  int iVar1;
  void *__ptr;
  
  if (p == (int *)0x0) {
                    /* Unresolved local var: int * temp@[???] */
    __ptr = malloc(4);
    if (__ptr == (void *)0x0) {
      iVar1 = -1;
    }
    else {
      free(__ptr);
      free(__ptr);
      iVar1 = -2;
    }
    return iVar1;
  }
  return *p;
}



/* Function: heap_overflow @ 0010148c */

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
                    /* Unresolved local var: int i@[???] */
    do {
      __ptr[lVar1] = (int)lVar1 * 100;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0xb);
    iVar2 = *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: test_heap_memory @ 001014e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  int iVar1;
  __pid_t __pid;
  undefined *puVar2;
  uint uVar3;
  int status;
  Node *head;
  long local_8;
  
                    /* Unresolved local var: pid_t pid@[???] */
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101ee1);
  iVar1 = heap_basic(10);
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",iVar1);
  iVar1 = heap_calloc(5);
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar1);
  iVar1 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar1);
  iVar1 = heap_array(10);
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar1);
  iVar1 = heap_struct(5);
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",iVar1);
  head = (Node *)0x0;
  iVar1 = heap_nested(&head);
  __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",iVar1);
  if (head != (Node *)0x0) {
    free(head->next);
    free(head);
  }
  iVar1 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
  iVar1 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
  iVar1 = memory_leak(5);
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",iVar1);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid == 0) {
                    /* Unresolved local var: int result@[???] */
    iVar1 = dangling_pointer();
    __printf_chk(1,&DAT_00102039,iVar1);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_001020af);
  }
  else {
    waitpid(__pid,&status,0);
    uVar3 = status & 0x7f;
    if ((status & 0x7fU) == 0) {
      uVar3 = (uint)status >> 8 & 0xff;
      puVar2 = &DAT_00102049;
    }
    else {
      if ((int)((long)((ulong)(uVar3 + 1) << 0x38) >> 0x39) < 1) goto LAB_00101680;
      puVar2 = &DAT_0010206e;
    }
    __printf_chk(1,puVar2,uVar3);
  }
LAB_00101680:
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: global_var_access @ 001016d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 001016e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 001016f8 */

int global_array_access(int idx)

{
  int iVar1;
  
  if ((uint)idx < 10) {
    iVar1 = global_array[idx];
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}



/* Function: static_local @ 00101718 */

int static_local(int reset)

{
  if (reset == 0) {
    counter_1 = counter_1 + 1;
  }
  else {
    counter_1 = 0;
  }
  return counter_1;
}



/* Function: call_static_func @ 00101740 */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 0010174c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101760 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00101768 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 0010177c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00101784 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 0010178c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00101794 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 001017a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 001017ac */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 001017b8 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001017c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 001017d4 */

int global_heap_store(int *p)

{
  int iVar1;
  
  if (p == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *p;
  }
  return iVar1;
}



/* Function: static_complex_init @ 001017e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 001017f0 */

int tls_access(int val)

{
  return val << 1;
}



/* Function: init_order_test @ 001017f8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_001020ba);
  iVar1 = global_var_access();
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",iVar1);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n");
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  iVar1 = call_extern_func();
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
  iVar1 = read_const_data();
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",iVar1);
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  iVar1 = global_struct_access();
  __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",iVar1);
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n");
  global_func_ptr = double_value;
  iVar1 = call_global_callback(5);
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",iVar1);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  iVar1 = static_complex_init();
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",iVar1);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: memop_memset @ 001019e8 */

int memop_memset(void *buf,size_t size,int fill_value)

{
  if (buf != (void *)0x0 && size != 0) {
    memset(buf,fill_value,size);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_memcpy @ 00101a2c */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  if (dst != (void *)0x0 && src != (void *)0x0) {
    if (n == 0) {
      iVar1 = -1;
    }
    else {
      memcpy(dst,src,n);
      iVar1 = *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
    }
    return iVar1;
  }
  return -1;
}



/* Function: memop_memmove @ 00101a7c */

int memop_memmove(void *buf,size_t n)

{
  if (buf != (void *)0x0 && 1 < n) {
    memmove((void *)((long)buf + 1),buf,n - 1);
    return (int)*(byte *)((long)buf + 1);
  }
  return -1;
}



/* Function: memop_memcmp @ 00101ac0 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  if ((p1 != (void *)0x0 && p2 != (void *)0x0) && (n != 0)) {
                    /* Unresolved local var: int result@[???] */
    iVar2 = memcmp(p1,p2,n);
    iVar1 = -(uint)(iVar2 != 0);
    if (0 < iVar2) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 0;
}



/* Function: memop_bzero @ 00101af8 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00101b30 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  byte *pbVar1;
  
  if ((src != (void *)0x0 && dst != (void *)0x0) && (n != 0)) {
    pbVar1 = memmove(dst,src,n);
    return (int)*pbVar1;
  }
  return -1;
}



/* Function: memop_unaligned_access @ 00101b6c */

int memop_unaligned_access(char *buf)

{
  int iVar1;
  
                    /* Unresolved local var: int value@[???] */
  if (buf == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(buf + 1);
  }
  return iVar1;
}



/* Function: memop_memory_barrier @ 00101b80 */

int memop_memory_barrier(int *flag)

{
  int iVar1;
  
                    /* Unresolved local var: int local@[???] */
  if (flag == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    DataMemoryBarrier(2,3);
    iVar1 = *flag + *flag;
  }
  return iVar1;
}



/* Function: test_memory_op_functions @ 00101ba0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int flag;
  int cmp_a [3];
  int cmp_b [3];
  int int_src [5];
  int int_dst [5];
  char bcopy_src [4];
  char bcopy_dst [4];
  char zero_buf [10];
  char move_buf [11];
  char buffer [256];
  
                    /* Unresolved local var: char[8] unalign_buf@[???] */
  lVar1 = ___stack_chk_guard;
  puts(&DAT_0010231c);
  int_dst[0] = 0;
  int_dst[1] = 0;
  int_dst[2] = 0;
  int_dst[3] = 0;
  int_dst[4] = 0;
  int_src[0] = 10;
  int_src[1] = 0x14;
  int_src[2] = 0x1e;
  int_src[3] = 0x28;
  int_src[4] = 0x32;
  iVar2 = memop_memset(buffer,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",iVar2);
  iVar2 = memop_memcpy(int_dst,int_src,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",iVar2);
                    /* Unresolved local var: int result@[???] */
  builtin_strncpy(move_buf,"HelloWorld",0xb);
  iVar2 = memop_memmove(move_buf,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",iVar2);
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_a[2] = 3;
  cmp_b[2] = 4;
  iVar3 = memcmp(cmp_a,cmp_b,0xc);
  iVar2 = -(uint)(iVar3 != 0);
  if (0 < iVar3) {
    iVar2 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
  iVar2 = memop_bzero(zero_buf,10);
  __printf_chk(1,"MEMOP-L2-05: %d\n",iVar2);
  builtin_strncpy(bcopy_src,"\x01\x02\x03\x04",4);
  bcopy_dst[0] = '\0';
  bcopy_dst[1] = '\0';
  bcopy_dst[2] = '\0';
  bcopy_dst[3] = '\0';
  iVar2 = memop_bcopy(bcopy_src,bcopy_dst,4);
  __printf_chk(1,"MEMOP-L2-06: %d\n",iVar2);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  flag = 5;
  iVar2 = memop_memory_barrier(&flag);
  __printf_chk(1,"MEMOP-L3-02: %d\n",iVar2);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}



/* Function: extern_function @ 00101d78 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 00101d80 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 65 */
