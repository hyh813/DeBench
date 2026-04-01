/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_gcc_O1_g
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



/* Function: _start @ 00101220 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101250 */

/* WARNING: Removing unreachable block (ram,0x00101263) */
/* WARNING: Removing unreachable block (ram,0x0010126f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101280 */

/* WARNING: Removing unreachable block (ram,0x001012a4) */
/* WARNING: Removing unreachable block (ram,0x001012b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001012c0 */

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



/* Function: double_value @ 00101309 */

int double_value(int x)

{
  return x * 2;
}



/* Function: local_vars @ 00101311 */

int local_vars(int x)

{
  return x * 2 + 10;
}



/* Function: local_array @ 0010131a */

int local_array(int n)

{
  long *plVar1;
  int iVar2;
  long in_FS_OFFSET;
  int arr [10];
  long local_10 [2];
  
  plVar1 = (long *)arr;
  local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
                    /* Unresolved local var: int i@[???] */
  iVar2 = 0;
  do {
    *(int *)plVar1 = iVar2;
    iVar2 = iVar2 + n;
    plVar1 = (long *)((long)plVar1 + 4);
  } while (plVar1 != local_10);
  if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return arr[5];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: local_struct @ 0010136a */

int local_struct(int x)

{
  return x * 3;
}



/* Function: address_of_local @ 00101372 */

int address_of_local(int *out)

{
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00101382 */

int address_of_array(int *arr)

{
  return *arr * 2;
}



/* Function: large_stack_frame @ 0010138b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  char large_buf [2048];
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    large_buf[lVar2] = (char)lVar2;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x800);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)large_buf[0x400];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: vla_stack @ 001013e0 */

int vla_stack(int n)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_18 [8];
  long local_10;
  
  puVar5 = auStack_18;
  puVar4 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (n - 1U < 1000) {
    uVar3 = (long)n * 4 + 0xf;
    for (; puVar4 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar5 = puVar4 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
                    /* Unresolved local var: int i@[???] */
    uVar3 = 0;
    do {
      *(int *)(puVar4 + uVar3 * 4 + lVar1) = (int)uVar3 * 2;
      bVar6 = uVar3 != n - 1U;
      uVar3 = uVar3 + 1;
    } while (bVar6);
    iVar2 = *(int *)(puVar4 + (long)(n / 2) * 4 + lVar1);
  }
  else {
    iVar2 = -1;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = alloca_usage;
  __stack_chk_fail();
}



/* Function: alloca_usage @ 0010149c */

int alloca_usage(int n)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  puVar6 = auStack_18;
  puVar5 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (n < 1) {
    iVar2 = -1;
  }
  else {
    uVar3 = (long)n * 4 + 0x17;
    for (; puVar5 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar5 = puVar5 + -0x1000) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar5 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
                    /* Unresolved local var: int i@[???] */
    iVar2 = 0;
    piVar4 = (int *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    do {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 3;
      piVar4 = piVar4 + 1;
    } while (iVar2 != n * 3);
    iVar2 = ((int *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0))[n / 2];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar6 + -8) = stack_alias;
  __stack_chk_fail();
}



/* Function: stack_alias @ 00101558 */

int stack_alias(int *p1,int *p2)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00101562 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  
  puts(&DAT_00103004);
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



/* Function: heap_basic @ 0010168a */

int heap_basic(int n)

{
  void *__ptr;
  ulong uVar1;
  int iVar2;
  
  __ptr = malloc((long)n << 2);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      uVar1 = 0;
      do {
        *(int *)((long)__ptr + uVar1 * 4) = (int)uVar1 * 2;
        uVar1 = uVar1 + 1;
      } while (uVar1 != (uint)n);
    }
    iVar2 = *(int *)((long)__ptr + (long)(n / 2) * 4);
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_calloc @ 001016dd */

int heap_calloc(int n)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = calloc((long)n,4);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (n < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      piVar1 = __ptr;
      do {
        iVar2 = iVar2 + *piVar1;
        piVar1 = piVar1 + 1;
      } while (piVar1 != __ptr + (uint)n);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 0010172d */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  undefined4 *__ptr;
  void *__ptr_00;
  int iVar1;
  
  __ptr = malloc(0x14);
  if (__ptr == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    *__ptr = 1;
    __ptr[1] = 2;
    __ptr[2] = 3;
    __ptr[3] = 4;
    __ptr[4] = 5;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      iVar1 = -2;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      *(undefined4 *)((long)__ptr_00 + 0x14) = 0x32;
      *(undefined4 *)((long)__ptr_00 + 0x18) = 0x3c;
      *(undefined4 *)((long)__ptr_00 + 0x1c) = 0x46;
      *(undefined4 *)((long)__ptr_00 + 0x20) = 0x50;
      *(undefined4 *)((long)__ptr_00 + 0x24) = 0x5a;
      iVar1 = -3;
      if (*(int *)((long)__ptr_00 + 8) == 3) {
        iVar1 = 0x32;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 001017d3 */

int heap_array(int n)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = malloc((long)n << 2);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar2 = 0;
      piVar1 = __ptr;
      do {
        *piVar1 = iVar2;
        iVar2 = iVar2 + 3;
        piVar1 = piVar1 + 1;
      } while (iVar2 != n * 3);
    }
    iVar2 = __ptr[n / 2];
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_struct @ 00101829 */

int heap_struct(int x)

{
  void *__ptr;
  int iVar1;
  
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



/* Function: heap_nested @ 00101855 */

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



/* Function: linked_list_heap @ 001018c1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *__ptr;
  int *__ptr_00;
  int iVar3;
  
                    /* Unresolved local var: int i@[???] */
  iVar3 = 0;
  piVar2 = (int *)0x0;
  __ptr = (int *)0x0;
  do {
    piVar1 = malloc(0x10);
    if (piVar1 == (int *)0x0) {
                    /* Unresolved local var: Node * new_node@[???] */
      if (__ptr != (int *)0x0) {
        do {
                    /* Unresolved local var: Node * temp@[???] */
          piVar2 = *(int **)(__ptr + 2);
          free(__ptr);
          __ptr = piVar2;
        } while (piVar2 != (int *)0x0);
        return -1;
      }
      return -1;
    }
    *piVar1 = iVar3;
    piVar1[2] = 0;
    piVar1[3] = 0;
    __ptr_00 = piVar1;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar2 + 2) = piVar1;
      __ptr_00 = __ptr;
    }
    iVar3 = iVar3 + 10;
    piVar2 = piVar1;
    __ptr = __ptr_00;
  } while (iVar3 != 0x32);
  if (__ptr_00 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    piVar2 = __ptr_00;
    do {
      iVar3 = iVar3 + *piVar2;
      piVar2 = *(int **)(piVar2 + 2);
    } while (piVar2 != (int *)0x0);
    do {
                    /* Unresolved local var: Node * temp@[???] */
      piVar2 = *(int **)(__ptr_00 + 2);
      free(__ptr_00);
      __ptr_00 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return iVar3;
}



/* Function: create_tree_node @ 00101968 */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
  pTVar1 = malloc(0x18);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 00101992 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  TreeNode *__ptr;
  TreeNode *pTVar1;
  TreeNode *pTVar2;
  int iVar3;
  
  __ptr = create_tree_node(10);
  if (__ptr == (TreeNode *)0x0) {
    iVar3 = -1;
  }
  else {
    pTVar1 = create_tree_node(0x14);
    __ptr->left = pTVar1;
    pTVar2 = create_tree_node(0x1e);
    __ptr->right = pTVar2;
    pTVar1 = __ptr->left;
    if ((pTVar2 == (TreeNode *)0x0) || (pTVar1 == (TreeNode *)0x0)) {
      if (pTVar1 != (TreeNode *)0x0) {
        free(pTVar1);
      }
      if (__ptr->right != (TreeNode *)0x0) {
        free(__ptr->right);
      }
      free(__ptr);
      iVar3 = -2;
    }
    else {
      iVar3 = pTVar1->data + __ptr->data + pTVar2->data;
      free(pTVar1);
      free(__ptr->right);
      free(__ptr);
    }
  }
  return iVar3;
}



/* Function: memory_leak @ 00101a2b */

int memory_leak(int n)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = malloc((long)n << 2);
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
      } while (uVar3 != (uint)n);
    }
    iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
  }
  return iVar1;
}



/* Function: dangling_pointer @ 00101a72 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int iVar1;
  int *__ptr;
  
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



/* Function: double_free @ 00101ab7 */

int double_free(int *p)

{
  int iVar1;
  void *__ptr;
  
  if (p != (int *)0x0) {
    return *p;
  }
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



/* Function: heap_overflow @ 00101af4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    piVar1 = __ptr;
    do {
                    /* Unresolved local var: int i@[???] */
      *piVar1 = iVar2;
      iVar2 = iVar2 + 100;
      piVar1 = piVar1 + 1;
    } while (iVar2 != 0x44c);
    iVar2 = *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: test_heap_memory @ 00101b36 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  int iVar1;
  __pid_t __pid;
  long in_FS_OFFSET;
  int status;
  Node *head;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001030e6);
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
    __printf_chk(1,&DAT_001031b6,iVar1);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_001031c6);
  }
  else {
    waitpid(__pid,&status,0);
    if ((status & 0x7fU) == 0) {
      __printf_chk(1,&DAT_001033c8,(uint)status >> 8 & 0xff);
    }
    else if ('\x01' < (char)(((byte)status & 0x7f) + 1)) {
      __printf_chk(1,&DAT_001033f0,status & 0x7fU);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: global_var_access @ 00101d80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00101d94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00101da1 */

int global_array_access(int idx)

{
  if ((uint)idx < 10) {
    return global_array[idx];
  }
  return -1;
}



/* Function: static_local @ 00101dbe */

int static_local(int reset)

{
  int iVar1;
  
  iVar1 = 0;
  if (reset == 0) {
    iVar1 = counter_1 + 1;
  }
  counter_1 = iVar1;
  return iVar1;
}



/* Function: call_static_func @ 00101ddb */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 00101de4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101df2 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00101e09 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101e1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00101e26 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00101e30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00101e3a */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00101e45 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00101e50 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00101e5c */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 00101e7d */

int global_heap_store(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 00101e8f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00101e99 */

int tls_access(int val)

{
  return val * 2;
}



/* Function: init_order_test @ 00101ea1 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
  static_depends_0 = 0x14;
  return 0x14;
}



/* Function: test_static_global @ 00101eb5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  
  puts(&DAT_00103438);
  iVar1 = global_var_access();
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",iVar1);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
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
  __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  iVar1 = call_global_callback(5);
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",iVar1);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  iVar1 = static_complex_init();
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",iVar1);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  iVar1 = init_order_test();
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",iVar1);
  return;
}



/* Function: memop_memset @ 00102112 */

int memop_memset(void *buf,size_t size,int fill_value)

{
  uint uVar1;
  
  if (buf != (void *)0x0) {
    if (size == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      memset(buf,fill_value,size);
      uVar1 = (uint)*(byte *)buf;
    }
    return uVar1;
  }
  return -1;
}



/* Function: memop_memcpy @ 00102143 */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  if ((src == (void *)0x0 || n == 0) || (dst == (void *)0x0)) {
    iVar1 = -1;
  }
  else {
    memcpy(dst,src,n);
    iVar1 = *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
  }
  return iVar1;
}



/* Function: memop_memmove @ 00102186 */

int memop_memmove(void *buf,size_t n)

{
  int iVar1;
  
  if (buf != (void *)0x0) {
    if (n < 2) {
      iVar1 = -1;
    }
    else {
      memmove((void *)((long)buf + 1),buf,n - 1);
      iVar1 = (int)*(char *)((long)buf + 1);
    }
    return iVar1;
  }
  return -1;
}



/* Function: memop_memcmp @ 001021bc */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  if ((p2 != (void *)0x0 && n != 0) && (p1 != (void *)0x0)) {
    iVar1 = memcmp(p1,p2,n);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1 >> 0x1f;
    }
    return iVar2;
  }
  return 0;
}



/* Function: memop_bzero @ 001021f4 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00102219 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  uint uVar1;
  
  if (dst != (void *)0x0 && n != 0) {
    if (src == (void *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      memmove(dst,src,n);
      uVar1 = (uint)*(byte *)dst;
    }
    return uVar1;
  }
  return -1;
}



/* Function: memop_unaligned_access @ 00102253 */

int memop_unaligned_access(char *buf)

{
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00102266 */

int memop_memory_barrier(int *flag)

{
  if (flag != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00102282 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
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
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103688);
  int_src[0] = 10;
  int_src[1] = 0x14;
  int_src[2] = 0x1e;
  int_src[3] = 0x28;
  int_src[4] = 0x32;
  int_dst[0] = 0;
  int_dst[1] = 0;
  int_dst[2] = 0;
  int_dst[3] = 0;
  int_dst[4] = 0;
  iVar2 = memop_memset(buffer,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",iVar2);
  iVar2 = memop_memcpy(int_dst,int_src,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",iVar2);
  builtin_strncpy(move_buf,"HelloWorld",0xb);
  iVar2 = memop_memmove(move_buf,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",iVar2);
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_a[2] = 3;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_b[2] = 4;
  iVar2 = memop_memcmp(cmp_a,cmp_b,0xc);
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: main @ 001024af */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 001024e9 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 001024f4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 63 */
