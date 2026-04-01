/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/3/3_gcc_O2_g
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



/* Function: main @ 00011250 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: _start @ 00011280 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000112ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000112b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000112c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112db) */
/* WARNING: Removing unreachable block (ram,0x000112e5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011300 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001132e) */
/* WARNING: Removing unreachable block (ram,0x00011338) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000113ac) */
/* WARNING: Removing unreachable block (ram,0x000113b0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000113e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000113ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 00011400 */

/* WARNING: Unknown calling convention */

int double_value(int x)

{
  return x * 2;
}



/* Function: local_vars @ 00011410 */

/* WARNING: Unknown calling convention */

int local_vars(int x)

{
  return x * 2 + 10;
}



/* Function: local_array @ 00011420 */

/* WARNING: Unknown calling convention */

int local_array(int n)

{
  int *piVar1;
  int iVar2;
  int in_GS_OFFSET;
  int arr [10];
  int local_10 [3];
  
  iVar2 = 0;
  local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
                    /* Unresolved local var: int i@[???] */
  piVar1 = arr;
  do {
    *piVar1 = iVar2;
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + n;
  } while (piVar1 != local_10);
  if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
    return arr[5];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: local_struct @ 00011470 */

/* WARNING: Unknown calling convention */

int local_struct(int x)

{
  return x * 3;
}



/* Function: address_of_local @ 00011480 */

/* WARNING: Unknown calling convention */

int address_of_local(int *out)

{
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 000114a0 */

/* WARNING: Unknown calling convention */

int address_of_array(int *arr)

{
  return *arr * 2;
}



/* Function: large_stack_frame @ 000114b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  char large_buf [2048];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
  do {
    large_buf[iVar2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x800);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return (int)large_buf[0x400];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: vla_stack @ 00011510 */

int vla_stack(int n)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  undefined1 *puVar6;
  
  puVar7 = auStack_1c;
  puVar5 = auStack_1c;
  puVar6 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (n - 1U < 1000) {
    uVar4 = n * 4 + 0xf;
    puVar1 = auStack_1c;
    while (puVar6 != auStack_1c + -(uVar4 & 0xfffff000)) {
      puVar5 = puVar1 + -0x1000;
      *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + -4);
      puVar6 = puVar1 + -0x1000;
      puVar1 = puVar1 + -0x1000;
    }
    uVar4 = uVar4 & 0xff0;
    iVar3 = -uVar4;
    puVar7 = puVar5 + iVar3;
    if (uVar4 != 0) {
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
    }
                    /* Unresolved local var: int i@[???] */
    iVar2 = 0;
    do {
      *(int *)(puVar5 + iVar2 * 2 + iVar3) = iVar2;
      iVar2 = iVar2 + 2;
    } while (iVar2 != n * 2);
    iVar3 = *(int *)(puVar5 + (n >> 1) * 4 + iVar3);
  }
  else {
    iVar3 = -1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -4) = &UNK_000115b3;
    __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: alloca_usage @ 000115c0 */

int alloca_usage(int n)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  undefined1 *puVar6;
  
  puVar7 = auStack_1c;
  puVar5 = auStack_1c;
  puVar6 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (n < 1) {
    iVar3 = -1;
  }
  else {
    uVar4 = n * 4 + 0x1b;
    puVar1 = auStack_1c;
    while (puVar6 != auStack_1c + -(uVar4 & 0xfffff000)) {
      puVar5 = puVar1 + -0x1000;
      *(undefined4 *)(puVar1 + -4) = *(undefined4 *)(puVar1 + -4);
      puVar6 = puVar1 + -0x1000;
      puVar1 = puVar1 + -0x1000;
    }
    uVar4 = uVar4 & 0xff0;
    iVar3 = -uVar4;
    puVar7 = puVar5 + iVar3;
    if (uVar4 != 0) {
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
    }
                    /* Unresolved local var: int i@[???] */
    iVar2 = 0;
    do {
      *(int *)(((uint)(puVar5 + iVar3 + 0xf) & 0xfffffff0) + iVar2 * 4) = iVar2 * 3;
      iVar2 = iVar2 + 1;
    } while (n != iVar2);
    iVar3 = *(int *)(((uint)(puVar5 + iVar3 + 0xf) & 0xfffffff0) + (n >> 1) * 4);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -4) = &UNK_0001165b;
    __stack_chk_fail_local();
  }
  return iVar3;
}



/* Function: stack_alias @ 00011660 */

int stack_alias(int *p1,int *p2)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00011670 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  
  puts(&DAT_00013008);
  __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
  __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
  iVar1 = large_stack_frame();
  __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",iVar1);
                    /* Unresolved local var: int[7900] vla@[???] */
  __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
  iVar1 = alloca_usage(10);
  __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",iVar1);
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00011750 */

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



/* Function: heap_calloc @ 000117c0 */

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



/* Function: heap_realloc @ 00011830 */

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
      iVar1 = -2;
      free(__ptr);
    }
    else {
      iVar1 = 0x32;
      if (*(int *)((int)__ptr_00 + 8) != 3) {
        iVar1 = -3;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 000118d0 */

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



/* Function: heap_struct @ 00011940 */

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



/* Function: heap_nested @ 00011990 */

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



/* Function: linked_list_heap @ 00011a10 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *__ptr;
  
                    /* Unresolved local var: int i@[???] */
  iVar4 = 0;
  piVar1 = (int *)0x0;
  piVar3 = (int *)0x0;
  do {
                    /* Unresolved local var: Node * new_node@[???] */
    piVar2 = malloc(8);
    if (piVar2 == (int *)0x0) {
      while (piVar3 != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[???] */
        piVar1 = (int *)piVar3[1];
        free(piVar3);
        piVar3 = piVar1;
      }
      return -1;
    }
    *piVar2 = iVar4;
    piVar2[1] = 0;
    __ptr = piVar2;
    if (piVar3 != (int *)0x0) {
      piVar1[1] = (int)piVar2;
      __ptr = piVar3;
    }
    iVar4 = iVar4 + 10;
    piVar1 = piVar2;
    piVar3 = __ptr;
  } while (iVar4 != 0x32);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + *piVar3;
    piVar3 = (int *)piVar3[1];
  } while (piVar3 != (int *)0x0);
  do {
                    /* Unresolved local var: Node * temp@[???] */
    piVar3 = (int *)__ptr[1];
    free(__ptr);
    __ptr = piVar3;
  } while (piVar3 != (int *)0x0);
  return iVar4;
}



/* Function: create_tree_node @ 00011ac0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
  pTVar1 = malloc(0xc);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
    pTVar1->data = data;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 00011b00 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  void *__ptr;
  void *pvVar1;
  void *__ptr_00;
  int iVar2;
  
                    /* Unresolved local var: TreeNode * node@[???] */
  __ptr = malloc(0xc);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: TreeNode * node@[???] */
    pvVar1 = malloc(0xc);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = malloc(0xc);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
    }
    else {
                    /* Unresolved local var: TreeNode * node@[???] */
      __ptr_00 = malloc(0xc);
      if (__ptr_00 != (void *)0x0) {
        free(pvVar1);
        free(__ptr_00);
        free(__ptr);
        return 0x3c;
      }
      free(pvVar1);
    }
    free(__ptr);
    iVar2 = -2;
  }
  return iVar2;
}



/* Function: memory_leak @ 00011bd0 */

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



/* Function: dangling_pointer @ 00011c30 */

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



/* Function: double_free @ 00011c80 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention */

int double_free(int *p)

{
  void *__ptr;
  int iVar1;
  
  if (p == (int *)0x0) {
                    /* Unresolved local var: int * temp@[???] */
    __ptr = malloc(4);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      free(__ptr);
      return -2;
    }
    iVar1 = -1;
  }
  else {
    iVar1 = *p;
  }
  return iVar1;
}



/* Function: heap_overflow @ 00011ce0 */

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



/* Function: test_heap_memory @ 00011d40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  void *pvVar1;
  int *__ptr;
  undefined4 uVar2;
  undefined4 *puVar3;
  __pid_t __pid;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int in_GS_OFFSET;
  int status;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x11d4b;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000130ea);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  pvVar1 = malloc(0x28);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      *(int *)((int)pvVar1 + iVar4 * 2) = iVar4;
      iVar4 = iVar4 + 2;
    } while (iVar4 != 0x14);
    uVar2 = *(undefined4 *)((int)pvVar1 + 0x14);
    free(pvVar1);
  }
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar2);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc(5,4);
  if (__ptr == (int *)0x0) {
    iVar4 = -1;
  }
  else {
    iVar4 = 0;
    piVar5 = __ptr;
    do {
                    /* Unresolved local var: int i@[???] */
      iVar4 = iVar4 + *piVar5;
      piVar5 = piVar5 + 1;
    } while (piVar5 != __ptr + 5);
    free(__ptr);
  }
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar4);
  iVar4 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",iVar4);
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  pvVar1 = malloc(0x28);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    iVar4 = 0;
    do {
      *(int *)((int)pvVar1 + iVar4 * 4) = iVar4 * 3;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 10);
    uVar2 = *(undefined4 *)((int)pvVar1 + 0x14);
    free(pvVar1);
  }
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar2);
                    /* Unresolved local var: Point * p@[???]
                       Unresolved local var: int result@[???] */
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    free(pvVar1);
    uVar2 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar2);
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff,0);
  }
  else {
    puVar3 = malloc(8);
    *(undefined4 **)((int)pvVar1 + 4) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      free(pvVar1);
      uVar2 = 0xfffffffe;
    }
    else {
      *puVar3 = 0x14;
      puVar3[1] = 0;
      uVar2 = 0;
    }
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar2);
    free(*(void **)((int)pvVar1 + 4));
    free(pvVar1);
  }
  iVar4 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar4);
  iVar4 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",iVar4);
                    /* Unresolved local var: int * leak@[???] */
  puVar3 = malloc(0x14);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    *puVar3 = 0;
    puVar3[1] = 1;
    puVar3[2] = 2;
    puVar3[3] = 3;
    puVar3[4] = 4;
    uVar2 = 2;
  }
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar2);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_000131ac);
    }
    else {
      waitpid(__pid,&status,0);
      uVar6 = status & 0x7f;
      if (uVar6 == 0) {
        __printf_chk(1,&DAT_000133bc,(uint)status >> 8 & 0xff);
      }
      else if ('\x01' < (char)((char)uVar6 + '\x01')) {
        __printf_chk(1,&DAT_000133e4,uVar6);
      }
    }
    if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail_local();
  }
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  puVar3 = malloc(4);
  if (puVar3 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(puVar3);
    uVar2 = *puVar3;
  }
  __printf_chk(1,&DAT_0001319c,uVar2);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 000120f0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00012110 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00012130 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

int global_array_access(int idx)

{
  if ((uint)idx < 10) {
    return global_array[idx];
  }
  return -1;
}



/* Function: static_local @ 00012160 */

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



/* Function: call_static_func @ 00012190 */

/* WARNING: Unknown calling convention */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 000121a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 000121c0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 000121e0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00012200 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00012210 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00012220 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00012230 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00012250 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00012270 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */
/* WARNING: Unknown calling convention */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00012290 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000122b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 000122c0 */

int global_heap_store(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 000122e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 000122f0 */

/* WARNING: Unknown calling convention */

int tls_access(int val)

{
  return val * 2;
}



/* Function: init_order_test @ 00012300 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 00012310 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  
  puts(&DAT_00013428);
  global_counter = global_counter + 1;
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  iVar1 = extern_function(5);
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",iVar1);
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",const_string[4] + 0x2a);
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: memop_memset @ 000124f0 */

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



/* Function: memop_memcpy @ 00012540 */

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



/* Function: memop_memmove @ 000125a0 */

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



/* Function: memop_memcmp @ 000125f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
  if ((p2 != (void *)0x0 && n != 0) && (p1 != (void *)0x0)) {
                    /* Unresolved local var: int result@[???] */
    iVar1 = memcmp(p1,p2,n);
    iVar2 = -(uint)(iVar1 != 0);
    if (0 < iVar1) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 0;
}



/* Function: memop_bzero @ 00012660 */

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



/* Function: memop_bcopy @ 000126a0 */

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



/* Function: memop_unaligned_access @ 00012700 */

int memop_unaligned_access(char *buf)

{
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00012720 */

int memop_memory_barrier(int *flag)

{
  if (flag != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00012740 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_GS_OFFSET;
  int flag;
  int cmp_a [3];
  int cmp_b [3];
  char zero_buf [10];
  char move_buf [11];
  char buffer [256];
  
  iVar1 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013650);
  __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
  __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  builtin_strncpy(move_buf,"HelloWorld",0xb);
  memmove(move_buf + 1,move_buf,9);
  __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_a[2] = 3;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_b[2] = 4;
                    /* Unresolved local var: int result@[???] */
  iVar2 = memcmp(cmp_a,cmp_b,0xc);
  iVar3 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar3 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar3);
  __printf_chk(1,"MEMOP-L2-05: %d\n",0);
  __printf_chk(1,"MEMOP-L2-06: %d\n",1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  LOCK();
  UNLOCK();
  __printf_chk(1,"MEMOP-L3-02: %d\n",10);
  if (iVar1 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 000128ff */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: extern_function @ 00012910 */

/* WARNING: Unknown calling convention */

int extern_function(int x)

{
  return x * 3;
}



/* Function: __stack_chk_fail_local @ 00012920 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012940 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001295a) */
/* WARNING: Removing unreachable block (ram,0x00012970) */
/* WARNING: Removing unreachable block (ram,0x0001297d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 0001298c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 70 */
