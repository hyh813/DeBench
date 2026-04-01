/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/3/3_gcc_O1_g
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



/* Function: _start @ 00011250 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001127c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011280 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011290 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112ab) */
/* WARNING: Removing unreachable block (ram,0x000112b5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000112d0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112fe) */
/* WARNING: Removing unreachable block (ram,0x00011308) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011320 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001137c) */
/* WARNING: Removing unreachable block (ram,0x00011380) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000113b9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000113bd */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 000113c1 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
  return x * 2;
}



/* Function: local_vars @ 000113cc */

/* WARNING: Unknown calling convention */

int local_vars(int x)

{
  return x * 2 + 10;
}



/* Function: local_array @ 000113d9 */

/* WARNING: Unknown calling convention */

int local_array(int n)

{
  int *piVar1;
  int iVar2;
  int in_GS_OFFSET;
  int arr [10];
  int local_10 [3];
  
  local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int i@[???] */
  piVar1 = arr;
  iVar2 = 0;
  do {
    *piVar1 = iVar2;
    iVar2 = iVar2 + n;
    piVar1 = piVar1 + 1;
  } while (piVar1 != local_10);
  if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return arr[5];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: local_struct @ 00011424 */

/* WARNING: Unknown calling convention */

int local_struct(int x)

{
  return x * 3;
}



/* Function: address_of_local @ 00011430 */

/* WARNING: Unknown calling convention */

int address_of_local(int *out)

{
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00011444 */

/* WARNING: Unknown calling convention */

int address_of_array(int *arr)

{
  return *arr * 2;
}



/* Function: large_stack_frame @ 00011451 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char large_buf [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    large_buf[iVar2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x800);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return (int)large_buf[0x400];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: vla_stack @ 0001149c */

int vla_stack(int n)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  
  puVar5 = auStack_1c;
  puVar4 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (n - 1U < 1000) {
    uVar1 = n * 4 + 0xf;
    for (; puVar4 != auStack_1c + -(uVar1 & 0xfffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + -4);
    }
    uVar1 = uVar1 & 0xff0;
    iVar3 = -uVar1;
    puVar5 = puVar4 + iVar3;
    if (uVar1 != 0) {
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + -4);
    }
                    /* Unresolved local var: int i@[???] */
    iVar2 = 0;
    do {
      *(int *)(puVar4 + iVar2 * 2 + iVar3) = iVar2;
      iVar2 = iVar2 + 2;
    } while (iVar2 != n * 2);
    iVar3 = *(int *)(puVar4 + (n / 2) * 4 + iVar3);
  }
  else {
    iVar3 = -1;
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -4) = alloca_usage;
  __stack_chk_fail_local();
}



/* Function: alloca_usage @ 00011537 */

int alloca_usage(int n)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  
  puVar5 = auStack_1c;
  puVar4 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (n < 1) {
    iVar3 = -1;
  }
  else {
    uVar1 = n * 4 + 0x1b;
    for (; puVar4 != auStack_1c + -(uVar1 & 0xfffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + -4);
    }
    uVar1 = uVar1 & 0xff0;
    iVar3 = -uVar1;
    puVar5 = puVar4 + iVar3;
    if (uVar1 != 0) {
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + -4);
    }
                    /* Unresolved local var: int i@[???] */
    iVar2 = 0;
    do {
      *(int *)(((uint)(puVar4 + iVar3 + 0xf) & 0xfffffff0) + iVar2 * 4) = iVar2 * 3;
      iVar2 = iVar2 + 1;
    } while (n != iVar2);
    iVar3 = *(int *)(((uint)(puVar4 + iVar3 + 0xf) & 0xfffffff0) + (iVar2 / 2) * 4);
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -4) = stack_alias;
  __stack_chk_fail_local();
}



/* Function: stack_alias @ 000115d1 */

int stack_alias(int *p1,int *p2)

{
  return 0x14;
}



/* Function: test_stack_memory @ 000115db */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  
  puts(&DAT_00013008);
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



/* Function: heap_basic @ 000116cf */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_basic(int n)

{
  void *__ptr;
  int iVar1;
  
  __ptr = malloc(n * 4);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      do {
        *(int *)((int)__ptr + iVar1 * 2) = iVar1;
        iVar1 = iVar1 + 2;
      } while (iVar1 != n * 2);
    }
    iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_calloc @ 0001173a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_calloc(int n)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = calloc(n,4);
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
      } while (piVar1 != __ptr + n);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 0001179a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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
      *(undefined4 *)((int)__ptr_00 + 0x14) = 0x32;
      *(undefined4 *)((int)__ptr_00 + 0x18) = 0x3c;
      *(undefined4 *)((int)__ptr_00 + 0x1c) = 0x46;
      *(undefined4 *)((int)__ptr_00 + 0x20) = 0x50;
      *(undefined4 *)((int)__ptr_00 + 0x24) = 0x5a;
      iVar1 = -3;
      if (*(int *)((int)__ptr_00 + 8) == 3) {
        iVar1 = 0x32;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 00011859 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_array(int n)

{
  void *__ptr;
  int iVar1;
  
  __ptr = malloc(n * 4);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      do {
        *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
        iVar1 = iVar1 + 1;
      } while (n != iVar1);
    }
    iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_struct @ 000118c4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

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



/* Function: heap_nested @ 00011908 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int heap_nested(Node **head)

{
  Node *__ptr;
  Node *pNVar1;
  int iVar2;
  
  __ptr = malloc(8);
  *head = __ptr;
  if (__ptr == (Node *)0x0) {
    iVar2 = -1;
  }
  else {
    __ptr->data = 10;
    pNVar1 = malloc(8);
    __ptr->next = pNVar1;
    if (pNVar1 == (Node *)0x0) {
      free(__ptr);
      iVar2 = -2;
    }
    else {
      pNVar1->data = 0x14;
      pNVar1->next = (Node *)0x0;
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: linked_list_heap @ 0001197e */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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
    piVar1 = malloc(8);
    if (piVar1 == (int *)0x0) {
                    /* Unresolved local var: Node * new_node@[???] */
      if (__ptr != (int *)0x0) {
        do {
                    /* Unresolved local var: Node * temp@[???] */
          piVar2 = (int *)__ptr[1];
          free(__ptr);
          __ptr = piVar2;
        } while (piVar2 != (int *)0x0);
        return -1;
      }
      return -1;
    }
    *piVar1 = iVar3;
    piVar1[1] = 0;
    __ptr_00 = piVar1;
    if (__ptr != (int *)0x0) {
      piVar2[1] = (int)piVar1;
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
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    do {
                    /* Unresolved local var: Node * temp@[???] */
      piVar2 = (int *)__ptr_00[1];
      free(__ptr_00);
      __ptr_00 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return iVar3;
}



/* Function: create_tree_node @ 00011a35 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
  pTVar1 = malloc(0xc);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 00011a6f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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



/* Function: memory_leak @ 00011b2a */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memory_leak(int n)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = malloc(n * 4);
  if (pvVar1 == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar2 = 0;
      do {
        *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
        iVar2 = iVar2 + 1;
      } while (n != iVar2);
    }
    iVar2 = *(int *)((int)pvVar1 + (n / 2) * 4);
  }
  return iVar2;
}



/* Function: dangling_pointer @ 00011b82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  int iVar1;
  
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



/* Function: double_free @ 00011bd3 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int double_free(int *p)

{
  void *__ptr;
  int iVar1;
  
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
  }
  else {
    iVar1 = *p;
  }
  return iVar1;
}



/* Function: heap_overflow @ 00011c2c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
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



/* Function: test_heap_memory @ 00011c82 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  int iVar1;
  __pid_t __pid;
  int in_GS_OFFSET;
  Node *head;
  int status;
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000130ea);
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
    __printf_chk(1,&DAT_000131ba,iVar1);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_000131ca);
  }
  else {
    waitpid(__pid,&status,0);
    if ((status & 0x7fU) == 0) {
      __printf_chk(1,&DAT_000133bc,(uint)status >> 8 & 0xff);
    }
    else if ('\x01' < (char)(((byte)status & 0x7f) + 1)) {
      __printf_chk(1,&DAT_000133e4,status & 0x7fU);
    }
  }
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: global_var_access @ 00011e98 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00011eb7 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00011ece */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int global_array_access(int idx)

{
  if ((uint)idx < 10) {
    return global_array[idx];
  }
  return -1;
}



/* Function: static_local @ 00011ef4 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention */

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



/* Function: call_static_func @ 00011f1f */

/* WARNING: Unknown calling convention */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 00011f2c */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011f46 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00011f65 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011f81 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00011f8b */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00011f95 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00011f9f */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00011fb8 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00011fcd */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00011fe6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 00012011 */

int global_heap_store(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 00012026 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00012030 */

/* WARNING: Unknown calling convention */

int tls_access(int val)

{
  return val * 2;
}



/* Function: init_order_test @ 0001203b */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
  static_depends_0 = 0x14;
  return 0x14;
}



/* Function: test_static_global @ 00012059 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  
  puts(&DAT_00013428);
  iVar1 = global_var_access();
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",iVar1);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
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



/* Function: memop_memset @ 00012231 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memop_memset(void *buf,size_t size,int fill_value)

{
  uint uVar1;
  
  if ((buf == (void *)0x0) || (size == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(buf,fill_value,size);
    uVar1 = (uint)*(byte *)buf;
  }
  return uVar1;
}



/* Function: memop_memcpy @ 00012276 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  if ((src == (void *)0x0 || n == 0) || (dst == (void *)0x0)) {
    iVar1 = -1;
  }
  else {
    memcpy(dst,src,n);
    iVar1 = *(int *)((int)dst + ((n & 0xfffffffc) - 4));
  }
  return iVar1;
}



/* Function: memop_memmove @ 000122c6 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memop_memmove(void *buf,size_t n)

{
  int iVar1;
  
  if ((buf == (void *)0x0) || (n < 2)) {
    iVar1 = -1;
  }
  else {
    memmove((void *)((int)buf + 1),buf,n - 1);
    iVar1 = (int)*(char *)((int)buf + 1);
  }
  return iVar1;
}



/* Function: memop_memcmp @ 00012310 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  if ((p2 == (void *)0x0 || n == 0) || (p1 == (void *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar1 = memcmp(p1,p2,n);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1 >> 0x1f;
    }
  }
  return iVar2;
}



/* Function: memop_bzero @ 00012364 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int memop_bzero(void *buf,size_t n)

{
  uint uVar1;
  
  if (buf == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(buf,0,n);
    uVar1 = (uint)*(byte *)buf;
  }
  return uVar1;
}



/* Function: memop_bcopy @ 000123a2 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */

int memop_bcopy(void *src,void *dst,size_t n)

{
  uint uVar1;
  
  if ((dst == (void *)0x0 || n == 0) || (src == (void *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove(dst,src,n);
    uVar1 = (uint)*(byte *)dst;
  }
  return uVar1;
}



/* Function: memop_unaligned_access @ 000123f0 */

int memop_unaligned_access(char *buf)

{
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00012406 */

int memop_memory_barrier(int *flag)

{
  if (flag != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00012424 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
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
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013650);
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
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: main @ 00012635 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: __x86.get_pc_thunk.ax @ 0001265a */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: extern_function @ 0001265e */

/* WARNING: Unknown calling convention */

int extern_function(int x)

{
  return x * 3;
}



/* Function: __stack_chk_fail_local @ 00012670 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012690 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000126aa) */
/* WARNING: Removing unreachable block (ram,0x000126c0) */
/* WARNING: Removing unreachable block (ram,0x000126cd) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000126dc */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 70 */
