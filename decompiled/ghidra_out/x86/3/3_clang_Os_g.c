/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/3/3_clang_Os_g
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



/* Function: _start @ 00011140 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001116c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011170 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001119b) */
/* WARNING: Removing unreachable block (ram,0x000111a5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000111c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000111ee) */
/* WARNING: Removing unreachable block (ram,0x000111f8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011210 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001126c) */
/* WARNING: Removing unreachable block (ram,0x00011270) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000112a9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000112ad */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: local_vars @ 000112b4 */

int local_vars(int x)

{
                    /* Unresolved local var: int a@[???]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???] */
  return x * 2 + 10;
}



/* Function: local_array @ 000112be */

int local_array(int n)

{
  int iVar1;
  int iVar2;
  int local_28 [10];
  
                    /* Unresolved local var: int[10] arr@[???] */
  iVar1 = 0;
  iVar2 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg2(EDX)] */
    local_28[iVar2] = iVar1;
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + n;
  } while (iVar2 != 10);
  return local_28[5];
}



/* Function: local_struct @ 000112dc */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_breg4(ESP): +4; DW_OP_piece: 4;
                       DW_OP_breg4(ESP): +4; DW_OP_deref_size: 4; DW_OP_lit1; DW_OP_shl;
                       DW_OP_stack_value; DW_OP_piece: 4] */
  return x * 3;
}



/* Function: address_of_local @ 000112e4 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 000112f4 */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[???]
                       Unresolved local var: int * p2@[???] */
  return *arr * 2;
}



/* Function: large_stack_frame @ 000112fd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  int iVar1;
  char local_800 [2048];
  
                    /* Unresolved local var: char[2048] large_buf@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(EAX)] */
    local_800[iVar1] = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  return (int)local_800[0x400];
}



/* Function: vla_stack @ 0001131f */

/* WARNING: Unknown calling convention */

int vla_stack(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: uint __vla_expr0@[???]
                       Unresolved local var: int[726] vla@[???] */
  if (n - 0x3e9U < 0xfffffc18) {
    iVar1 = -1;
  }
  else {
    iVar1 = -0xc - (n * 4 + 0xfU & 0xfffffff0);
    iVar2 = 0;
    iVar3 = n;
    do {
                    /* Unresolved local var: int i@[???] */
      *(int *)(&stack0xfffffff4 + iVar2 * 2 + iVar1 + 0xc) = iVar2;
      iVar2 = iVar2 + 2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar1 = *(int *)(&stack0xfffffff4 + (n - (n >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
  }
  return iVar1;
}



/* Function: alloca_usage @ 0001136f */

/* WARNING: Unknown calling convention */

int alloca_usage(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_c;
  
                    /* Unresolved local var: int * arr@[???] */
  if (n < 1) {
    iVar1 = -1;
  }
  else {
    iVar1 = -0xc - (n * 4 + 0xfU & 0xfffffff0);
    iVar2 = 0;
    iVar3 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg6(ESI)] */
      *(int *)((int)&iStack_c + iVar3 * 4 + iVar1 + 0xc) = iVar2;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 3;
    } while (n != iVar3);
    iVar1 = *(int *)((int)&iStack_c + (n - (n >> 0x1f) & 0xfffffffeU) * 2 + iVar1 + 0xc);
  }
  return iVar1;
}



/* Function: stack_alias @ 000113b2 */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 000113b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  int *piVar2;
  int local_80c [256];
  char local_40c;
  
                    /* Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???]
                       Unresolved local var: int out@[???] */
  puts(&DAT_000135c1);
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int[10] arr@[???]
                       Unresolved local var: int i@[???] */
    *(int *)((int)local_80c + iVar1 * 2) = iVar1;
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x14);
  printf("MEM-L1-02 (local_array): %d\n",local_80c[5]);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  iVar1 = 0;
  do {
                    /* Unresolved local var: char[2048] large_buf@[???]
                       Unresolved local var: int i@[DW_OP_reg0(EAX)] */
    *(char *)((int)local_80c + iVar1) = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  printf("MEM-L2-01 (large_stack_frame): %d\n",(int)local_40c);
                    /* Unresolved local var: uint __vla_expr0@[???]
                       Unresolved local var: int[726] vla@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    *(int *)((int)local_80c + iVar1 * 2) = iVar1;
    iVar1 = iVar1 + 2;
  } while (iVar1 != 0x14);
  piVar2 = local_80c;
  printf("MEM-L2-02 (vla_stack): %d\n",local_80c[5]);
  iVar1 = 0;
  do {
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int i@[???] */
    *piVar2 = iVar1;
    iVar1 = iVar1 + 3;
    piVar2 = piVar2 + 1;
  } while (iVar1 != 0x1e);
  printf("MEM-L2-03 (alloca_usage): %d\n",local_80c[5]);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 000114ed */

int heap_basic(int n)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(n * 4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      iVar2 = n;
      do {
        *(int *)((int)__ptr + iVar1 * 2) = iVar1;
        iVar1 = iVar1 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = *(int *)((int)__ptr + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_calloc @ 00011546 */

int heap_calloc(int n)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc(n,4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
                    /* Unresolved local var: int i@[???] */
    if (1 < n) {
      iVar2 = 0;
      iVar1 = 1;
      do {
        iVar2 = iVar2 + *(int *)((int)__ptr + iVar1 * 4);
        iVar1 = iVar1 + 1;
      } while (n != iVar1);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 0001159a */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  int iVar1;
  void *__ptr;
  int iVar2;
  void *__ptr_00;
  int *piVar3;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
    do {
                    /* Unresolved local var: int i@[???] */
      *(int *)((int)__ptr + iVar2 * 4 + -4) = iVar2;
      iVar2 = iVar2 + 1;
    } while (iVar2 != 6);
    iVar1 = *(int *)((int)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      iVar2 = -2;
      __ptr_00 = __ptr;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      piVar3 = (int *)((int)__ptr_00 + 0x14);
      iVar2 = 0x32;
      do {
        *piVar3 = iVar2;
        iVar2 = iVar2 + 10;
        piVar3 = piVar3 + 1;
      } while (iVar2 != 100);
      iVar2 = -3;
      if (*(int *)((int)__ptr_00 + 8) == iVar1) {
        iVar2 = *(int *)((int)__ptr_00 + 0x14);
      }
    }
    free(__ptr_00);
  }
  return iVar2;
}



/* Function: heap_array @ 00011627 */

int heap_array(int n)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(n * 4);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      iVar2 = 0;
      do {
        *(int *)((int)__ptr + iVar2 * 4) = iVar1;
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 3;
      } while (n != iVar2);
    }
    iVar1 = *(int *)((int)__ptr + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_struct @ 00011682 */

int heap_struct(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: Point * p@[???] */
  return x * 3;
}



/* Function: heap_nested @ 0001168a */

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



/* Function: linked_list_heap @ 000116f7 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *__ptr;
  bool bVar6;
  int *local_14;
  
                    /* Unresolved local var: Node * current@[???]
                       Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * temp@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
  piVar1 = malloc(8);
  if (piVar1 == (int *)0x0) {
    bVar6 = true;
    __ptr = (int *)0x0;
  }
  else {
    iVar3 = 0;
    uVar4 = 0;
    local_14 = (int *)0x0;
    piVar5 = (int *)0x0;
    do {
      piVar2 = piVar1;
      *piVar2 = iVar3;
      piVar2[1] = 0;
      __ptr = piVar2;
      if (piVar5 != (int *)0x0) {
        local_14[1] = (int)piVar2;
        __ptr = piVar5;
      }
      if (uVar4 == 0xfffffffc) {
        bVar6 = false;
        goto LAB_00011798;
      }
      piVar1 = malloc(8);
      uVar4 = uVar4 - 1;
      iVar3 = iVar3 + 10;
      piVar5 = __ptr;
      local_14 = piVar2;
    } while (piVar1 != (int *)0x0);
    bVar6 = ~uVar4 < 4;
  }
  if (__ptr == (int *)0x0) {
    __ptr = (int *)0x0;
  }
  else {
    do {
                    /* Unresolved local var: Node * temp@[DW_OP_reg7(EDI)] */
      piVar1 = (int *)__ptr[1];
      free(__ptr);
      __ptr = piVar1;
    } while (piVar1 != (int *)0x0);
    __ptr = (int *)0x0;
  }
LAB_00011798:
  if (bVar6) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
    piVar1 = __ptr;
    if (__ptr != (int *)0x0) {
      do {
        iVar3 = iVar3 + *piVar1;
        piVar5 = piVar1 + 1;
        piVar1 = (int *)*piVar5;
      } while ((int *)*piVar5 != (int *)0x0);
      while (__ptr != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[DW_OP_reg7(EDI)] */
        piVar1 = (int *)__ptr[1];
        free(__ptr);
        __ptr = piVar1;
      }
    }
  }
  return iVar3;
}



/* Function: create_tree_node @ 000117d1 */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
                    /* Unresolved local var: TreeNode * node@[???] */
  pTVar1 = malloc(0xc);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 00011804 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: TreeNode * root@[???] */
  return 0x3c;
}



/* Function: memory_leak @ 0001180a */

int memory_leak(int n)

{
  void *pvVar1;
  int iVar2;
  
                    /* Unresolved local var: int * leak@[???] */
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
    iVar2 = *(int *)((int)pvVar1 + (n - (n >> 0x1f) & 0xfffffffeU) * 2);
  }
  return iVar2;
}



/* Function: dangling_pointer @ 00011856 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  int iVar1;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  __ptr = malloc(4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    iVar1 = *__ptr;
  }
  return iVar1;
}



/* Function: double_free @ 000118a4 */

int double_free(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -2;
}



/* Function: heap_overflow @ 000118b5 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    piVar2 = __ptr;
    do {
                    /* Unresolved local var: int i@[???] */
      *piVar2 = iVar1;
      iVar1 = iVar1 + 100;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 0x44c);
    iVar1 = *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: test_heap_memory @ 000118ff */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  Node *__ptr;
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  __pid_t __pid;
  uint uVar4;
  char *__format;
  uint local_10;
  Node *local_c;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: pid_t pid@[???] */
  puts(&DAT_000135df);
  iVar1 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n",iVar1);
  iVar1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n",iVar1);
  iVar1 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n",iVar1);
  iVar1 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",iVar1);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  local_c = (Node *)0x0;
  iVar1 = heap_nested(&local_c);
  printf("HEAP-L2-06 (heap_nested): %d\n",iVar1);
  __ptr = local_c;
  if (local_c != (Node *)0x0) {
    free(local_c->next);
    free(__ptr);
  }
  iVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
                    /* Unresolved local var: int * leak@[???] */
  pvVar2 = malloc(0x14);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar1 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg1(ECX)] */
      *(int *)((int)pvVar2 + iVar1 * 4) = iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 5);
    uVar3 = *(undefined4 *)((int)pvVar2 + 8);
  }
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar3);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_000132e3);
    }
    else {
                    /* Unresolved local var: int status@[???] */
      waitpid(__pid,(int *)&local_10,0);
      uVar4 = local_10 & 0x7f;
      if (uVar4 == 0) {
        uVar4 = local_10 >> 8 & 0xff;
        __format = &DAT_0001327d;
      }
      else {
        if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
          return;
        }
        __format = &DAT_000132a2;
      }
      printf(__format,uVar4);
    }
    return;
  }
                    /* Unresolved local var: int result@[???] */
  iVar1 = dangling_pointer();
  printf(&DAT_0001326d,iVar1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 00011aeb */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00011b05 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00011b1a */

int global_array_access(int idx)

{
  if (9 < (uint)idx) {
    return -1;
  }
  return global_array[idx];
}



/* Function: static_local @ 00011b3b */

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



/* Function: call_static_func @ 00011b5f */

int call_static_func(int x)

{
  return x * 2 + 1;
}



/* Function: access_extern_global @ 00011b67 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011b7f */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00011ba0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011bba */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00011bbd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00011bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00011bc6 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00011bdd */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00011bf0 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00011c07 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr == (_func_int_int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*global_func_ptr)(x);
  }
  return iVar1;
}



/* Function: global_heap_store @ 00011c34 */

int global_heap_store(int *p)

{
  global_heap_ptr = p;
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 00011c55 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00011c5b */

int tls_access(int val)

{
  return val * 2;
}



/* Function: init_order_test @ 00011c62 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 00011c68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  int local_10;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_000135fd);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n",global_counter);
  printf("STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local::counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local::counter = static_local::counter + 1;
  printf("STM-L1-03 (static_local): %d\n",static_local::counter);
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  iVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",iVar1);
  printf("STM-L2-03 (read_const_data): %d\n",const_string[4] + 0x2a);
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  global_heap_ptr = &local_10;
  local_10 = 100;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: double_value @ 00011e5b */

int double_value(int x)

{
  return x * 2;
}



/* Function: memop_memset @ 00011e62 */

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



/* Function: memop_memcpy @ 00011e9e */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  iVar1 = -1;
  if (((dst != (void *)0x0) && (src != (void *)0x0)) && (n != 0)) {
    memcpy(dst,src,n);
    iVar1 = *(int *)(((n & 0xfffffffc) - 4) + (int)dst);
  }
  return iVar1;
}



/* Function: memop_memmove @ 00011ee1 */

int memop_memmove(void *buf,size_t n)

{
  int iVar1;
  
  iVar1 = -1;
  if ((buf != (void *)0x0) && (1 < n)) {
    memmove((void *)((int)buf + 1),buf,n - 1);
    iVar1 = (int)*(char *)((int)buf + 1);
  }
  return iVar1;
}



/* Function: memop_memcmp @ 00011f20 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = 0;
  if (((p1 != (void *)0x0) && (p2 != (void *)0x0)) && (n != 0)) {
    iVar2 = memcmp(p1,p2,n);
    iVar1 = 1;
    if (iVar2 < 1) {
      iVar1 = -(uint)(iVar2 != 0);
    }
  }
  return iVar1;
}



/* Function: memop_bzero @ 00011f70 */

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



/* Function: memop_bcopy @ 00011fa7 */

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



/* Function: memop_unaligned_access @ 00011fe8 */

int memop_unaligned_access(char *buf)

{
                    /* Unresolved local var: int value@[???] */
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00011ff8 */

int memop_memory_barrier(int *flag)

{
                    /* Unresolved local var: int local@[???] */
  if (flag != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 0001200e */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 in_stack_ffffffe4;
  
                    /* Unresolved local var: char[11] move_buf@[???]
                       Unresolved local var: int flag@[???]
                       Unresolved local var: char[256] buffer@[???]
                       Unresolved local var: int[5] int_dst@[???]
                       Unresolved local var: int[5] int_src@[???]
                       Unresolved local var: char[10] zero_buf@[???]
                       Unresolved local var: char[4] bcopy_dst@[???]
                       Unresolved local var: char[4] bcopy_src@[???]
                       Unresolved local var: char[8] unalign_buf@[???]
                       Unresolved local var: int[3] cmp_a@[???]
                       Unresolved local var: int[3] cmp_b@[???] */
  uVar4 = 0x12017;
  puts(&DAT_00013621);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  printf("MEMOP-L2-03: %c\n",0x48);
                    /* Unresolved local var: int result@[???] */
  uVar3 = 0xc;
  iVar1 = memcmp(&DAT_00013670,&DAT_0001367c,0xc);
  iVar2 = 1;
  if (iVar1 < 1) {
    iVar2 = -(uint)(iVar1 != 0);
  }
  printf("MEMOP-L2-04: %d\n",iVar2);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  LOCK();
  UNLOCK();
  printf("MEMOP-L3-02: %d\n",10,uVar3,uVar4,in_stack_ffffffe4);
  return;
}



/* Function: main @ 00012128 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 00012154 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: __do_global_ctors_aux @ 00012160 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001217a) */
/* WARNING: Removing unreachable block (ram,0x00012190) */
/* WARNING: Removing unreachable block (ram,0x0001219d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000121ac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 68 */
