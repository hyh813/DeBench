/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/3/3_clang_O2_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 0001055c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 00010654 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00010698 */

/* WARNING: Removing unreachable block (ram,0x000106ac) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 000106bc */

/* WARNING: Removing unreachable block (ram,0x000106dc) */
/* WARNING: Removing unreachable block (ram,0x000106e8) */
/* WARNING: Removing unreachable block (ram,0x000106ec) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010700 */

/* WARNING: Removing unreachable block (ram,0x0001072c) */
/* WARNING: Removing unreachable block (ram,0x00010738) */
/* WARNING: Removing unreachable block (ram,0x0001073c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00010750 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = 1;
    return;
  }
  return;
}



/* Function: local_vars @ 000107bc */

int local_vars(int x)

{
                    /* Unresolved local var: int a@[DW_OP_reg0(r0)]
                       Unresolved local var: int c@[???]
                       Unresolved local var: int b@[???] */
  return x * 2 + 10;
}



/* Function: local_array @ 000107c8 */

int local_array(int n)

{
                    /* Unresolved local var: int[10] arr@[???]
                       Unresolved local var: int i@[???] */
  return n * 5;
}



/* Function: local_struct @ 000107d0 */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_reg0(r0); DW_OP_piece: 4;
                       DW_OP_breg0(r0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
                        */
  return x * 3;
}



/* Function: address_of_local @ 000107d8 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 000107e8 */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[DW_OP_reg0(r0)]
                       Unresolved local var: int * p2@[DW_OP_reg0(r0)] */
  return *arr << 1;
}



/* Function: large_stack_frame @ 000107f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  int iVar1;
  byte local_808 [2048];
  
                    /* Unresolved local var: char[2048] large_buf@[???] */
  iVar1 = 0;
  do {
                    /* Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_808[iVar1] = (byte)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  return (uint)local_808[0x400];
}



/* Function: vla_stack @ 00010824 */

int vla_stack(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_10;
  
                    /* Unresolved local var: uint __vla_expr0@[???]
                       Unresolved local var: int[723] vla@[???] */
  iVar1 = -1;
  if (0xfffffc17 < n - 0x3e9U) {
    iVar1 = -0x10 - (n * 4 + 7U & 0xfffffff8);
    iVar3 = 0;
    iVar2 = n;
    do {
                    /* Unresolved local var: int i@[???] */
      *(int *)((int)&iStack_10 + iVar3 * 2 + iVar1 + 0x10) = iVar3;
      iVar3 = iVar3 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar1 = *(int *)((int)&iStack_10 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
  }
  return iVar1;
}



/* Function: alloca_usage @ 00010898 */

int alloca_usage(int n)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
                    /* Unresolved local var: int * arr@[???] */
  if (0 < n) {
    iVar1 = -0x10 - (n * 4 + 7U & 0xfffffff8);
    iVar2 = 0;
    iVar3 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg3(r3)] */
      *(int *)((int)&local_10 + iVar3 * 4 + iVar1 + 0x10) = iVar2;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 3;
    } while (n != iVar3);
    return *(int *)((int)&local_10 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x10);
  }
  return -1;
}



/* Function: stack_alias @ 000108fc */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 00010904 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  byte local_808 [2048];
  
                    /* Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???]
                       Unresolved local var: int out@[???] */
  puts(&DAT_00012d56);
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  printf("MEM-L1-02 (local_array): %d\n",10);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  iVar1 = 0;
  do {
                    /* Unresolved local var: char[2048] large_buf@[???]
                       Unresolved local var: int i@[DW_OP_reg0(r0)] */
    local_808[iVar1] = (byte)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  printf("MEM-L2-01 (large_stack_frame): %d\n",(uint)local_808[0x400]);
  printf("MEM-L2-02 (vla_stack): %d\n",10);
  printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 000109f0 */

int heap_basic(int n)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(n << 2);
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
    iVar2 = *(int *)((int)__ptr + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_calloc @ 00010a50 */

int heap_calloc(int n)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc(n,4);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = 0;
                    /* Unresolved local var: int i@[???] */
    if (1 < n) {
      iVar2 = n + -1;
      iVar3 = 0;
      piVar1 = __ptr;
      do {
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + -1;
        iVar3 = *piVar1 + iVar3;
      } while (iVar2 != 0);
    }
    free(__ptr);
  }
  return iVar3;
}



/* Function: heap_realloc @ 00010aa8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  undefined4 *__ptr;
  undefined4 *__ptr_00;
  int iVar1;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr == (undefined4 *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    __ptr[3] = 4;
    __ptr[4] = 5;
    *__ptr = 1;
    __ptr[1] = 2;
    __ptr[2] = 3;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (undefined4 *)0x0) {
      iVar1 = -2;
      __ptr_00 = __ptr;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      __ptr_00[9] = 0x5a;
      __ptr_00[6] = 0x3c;
      iVar1 = -3;
      __ptr_00[5] = 0x32;
      __ptr_00[7] = 0x46;
      __ptr_00[8] = 0x50;
      if (__ptr_00[2] == 3) {
        iVar1 = 0x32;
      }
    }
    free(__ptr_00);
  }
  return iVar1;
}



/* Function: heap_array @ 00010b5c */

int heap_array(int n)

{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(n << 2);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar1 = 0;
      piVar2 = __ptr;
      iVar3 = n;
      do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 3;
        iVar3 = iVar3 + -1;
        piVar2 = piVar2 + 1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)((int)__ptr + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
    free(__ptr);
  }
  return iVar3;
}



/* Function: heap_struct @ 00010bc0 */

int heap_struct(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: Point * p@[???] */
  return x * 3;
}



/* Function: heap_nested @ 00010bc8 */

int heap_nested(Node **head)

{
  Node *__ptr;
  Node *pNVar1;
  
  __ptr = malloc(8);
  *head = __ptr;
  if (__ptr == (Node *)0x0) {
    return -1;
  }
  __ptr->data = 10;
  pNVar1 = malloc(8);
  __ptr->next = pNVar1;
  if (pNVar1 == (Node *)0x0) {
    free(__ptr);
    return -2;
  }
  pNVar1->data = 0x14;
  pNVar1->next = (Node *)0x0;
  return 0;
}



/* Function: linked_list_heap @ 00010c3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int *__ptr;
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * current@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: Node * temp@[???] */
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
  __ptr = malloc(8);
  iVar5 = -1;
  if (__ptr != (int *)0x0) {
    *__ptr = 0;
    puVar1 = malloc(8);
    if (puVar1 == (undefined4 *)0x0) {
      free(__ptr);
    }
    else {
      *puVar1 = 10;
      puVar1[1] = 0;
      __ptr[1] = (int)puVar1;
      puVar2 = malloc(8);
      if (puVar2 == (undefined4 *)0x0) {
        do {
                    /* Unresolved local var: Node * temp@[???] */
          piVar3 = (int *)__ptr[1];
          free(__ptr);
          __ptr = piVar3;
        } while (piVar3 != (int *)0x0);
      }
      else {
        *puVar2 = 0x14;
        puVar2[1] = 0;
        puVar1[1] = puVar2;
        puVar1 = malloc(8);
        if (puVar1 == (undefined4 *)0x0) {
          do {
            piVar3 = (int *)__ptr[1];
            free(__ptr);
            __ptr = piVar3;
          } while (piVar3 != (int *)0x0);
        }
        else {
          *puVar1 = 0x1e;
          puVar1[1] = 0;
          puVar2[1] = puVar1;
          puVar2 = malloc(8);
          if (puVar2 == (undefined4 *)0x0) {
            do {
              piVar3 = (int *)__ptr[1];
              free(__ptr);
              __ptr = piVar3;
            } while (piVar3 != (int *)0x0);
          }
          else {
            iVar5 = 0;
            puVar1[1] = puVar2;
            *puVar2 = 0x28;
            puVar2[1] = 0;
            piVar3 = __ptr;
            do {
              iVar4 = *piVar3;
              piVar3 = (int *)piVar3[1];
              iVar5 = iVar4 + iVar5;
            } while (piVar3 != (int *)0x0);
            do {
                    /* Unresolved local var: Node * temp@[DW_OP_reg5(r5)] */
              piVar3 = (int *)__ptr[1];
              free(__ptr);
              __ptr = piVar3;
            } while (piVar3 != (int *)0x0);
          }
        }
      }
    }
  }
  return iVar5;
}



/* Function: create_tree_node @ 00010d80 */

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



/* Function: tree_heap_traversal @ 00010dac */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: TreeNode * root@[???] */
  return 0x3c;
}



/* Function: memory_leak @ 00010db4 */

int memory_leak(int n)

{
  void *pvVar1;
  int iVar2;
  
                    /* Unresolved local var: int * leak@[???] */
  pvVar1 = malloc(n << 2);
  if (pvVar1 != (void *)0x0) {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      iVar2 = 0;
      do {
        *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
        iVar2 = iVar2 + 1;
      } while (n != iVar2);
    }
    return *(int *)((int)pvVar1 + ((n - (n >> 0x1f)) * 2 & 0xfffffffdU));
  }
  return -1;
}



/* Function: dangling_pointer @ 00010e08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  __ptr = malloc(4);
  if (__ptr != (int *)0x0) {
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return -1;
}



/* Function: double_free @ 00010e50 */

int double_free(int *p)

{
  int iVar1;
  
  if (p == (int *)0x0) {
    iVar1 = -2;
  }
  else {
    iVar1 = *p;
  }
  return iVar1;
}



/* Function: heap_overflow @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int * arr@[???] */
  return 0;
}



/* Function: test_heap_memory @ 00010e68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  __pid_t __pid;
  char *__format;
  uint uVar4;
  undefined4 uVar5;
  uint local_14;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: pid_t pid@[???] */
  puts(&DAT_00012d74);
  printf("HEAP-L2-01 (heap_basic): %d\n",10);
  printf("HEAP-L2-02 (heap_calloc): %d\n",0);
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  puVar1 = malloc(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    puVar1[3] = 4;
    puVar1[4] = 5;
    *puVar1 = 1;
    puVar1[1] = 2;
    puVar1[2] = 3;
    puVar2 = realloc(puVar1,0x28);
    if (puVar2 == (undefined4 *)0x0) {
      uVar5 = 0xfffffffe;
      puVar2 = puVar1;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      puVar2[9] = 0x5a;
      puVar2[6] = 0x3c;
      uVar5 = 0xfffffffd;
      puVar2[5] = 0x32;
      puVar2[7] = 0x46;
      puVar2[8] = 0x50;
      if (puVar2[2] == 3) {
        uVar5 = 0x32;
      }
    }
    free(puVar2);
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n",uVar5);
  printf("HEAP-L2-04 (heap_array): %d\n",0xf);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  puVar1 = malloc(8);
  if (puVar1 == (undefined4 *)0x0) {
    printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    *puVar1 = 10;
    puVar2 = malloc(8);
    puVar1[1] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      free(puVar1);
      uVar5 = 0xfffffffe;
    }
    else {
      uVar5 = 0;
      *puVar2 = 0x14;
      puVar2[1] = 0;
    }
    printf("HEAP-L2-06 (heap_nested): %d\n",uVar5);
    free((void *)puVar1[1]);
    free(puVar1);
  }
  iVar3 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar3);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
  printf("HEAP-L3-03 (memory_leak): %d\n",2);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_00012a83);
      return;
    }
                    /* Unresolved local var: int status@[???] */
    waitpid(__pid,(int *)&local_14,0);
    uVar4 = local_14 & 0x7f;
    if (uVar4 == 0) {
      uVar4 = local_14 >> 8 & 0xff;
      __format = &DAT_00012a1d;
    }
    else {
      if ((int)(uVar4 * 0x1000000 + 0x1000000) < 0x2000000) {
        return;
      }
      __format = &DAT_00012a42;
    }
    printf(__format,uVar4);
    return;
  }
                    /* Unresolved local var: int result@[???] */
  iVar3 = dangling_pointer();
  printf(&DAT_00012a0d,iVar3);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 00011108 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 0001112c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 00011140 */

int global_array_access(int idx)

{
  int iVar1;
  
  iVar1 = -1;
  if ((uint)idx < 10) {
    iVar1 = global_array[idx];
  }
  return iVar1;
}



/* Function: static_local @ 00011160 */

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



/* Function: call_static_func @ 00011190 */

int call_static_func(int x)

{
  return x << 1 | 1;
}



/* Function: access_extern_global @ 0001119c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 000111b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 000111bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 000111d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 000111dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 000111e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 000111ec */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00011200 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00011210 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00011224 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 00011240 */

int global_heap_store(int *p)

{
  int iVar1;
  
  global_heap_ptr = p;
  if (p == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *p;
  }
  return iVar1;
}



/* Function: static_complex_init @ 00011260 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00011268 */

int tls_access(int val)

{
  return val << 1;
}



/* Function: init_order_test @ 00011270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 00011278 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  int local_14;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_00012d92);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n");
  printf("STM-L1-01 (global_var_read): %d\n",global_counter << 1);
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local::counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local::counter = static_local::counter + 1;
  printf("STM-L1-03 (static_local): %d\n");
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  iVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",iVar1);
  printf("STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  global_heap_ptr = &local_14;
  local_14 = 100;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: double_value @ 000114c0 */

int double_value(int x)

{
  return x << 1;
}



/* Function: memop_memset @ 000114c8 */

int memop_memset(void *buf,size_t size,int fill_value)

{
  size_t in_r3;
  
  if (buf != (void *)0x0) {
    in_r3 = size;
  }
  if (buf != (void *)0x0 && size != 0) {
    memset(buf,fill_value,in_r3);
    return (uint)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_memcpy @ 00011508 */

int memop_memcpy(void *dst,void *src,size_t n)

{
  uint unaff_r4;
  
  if (dst != (void *)0x0) {
    if (src != (void *)0x0) {
      unaff_r4 = n;
    }
    if (src != (void *)0x0 && n != 0) {
      memcpy(dst,src,unaff_r4);
      return *(int *)((int)dst + ((unaff_r4 & 0xfffffffc) - 4));
    }
  }
  return -1;
}



/* Function: memop_memmove @ 00011554 */

int memop_memmove(void *buf,size_t n)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((buf != (void *)0x0) && (1 < n)) {
    memmove((void *)((int)buf + 1),buf,n - 1);
    uVar1 = (uint)*(byte *)((int)buf + 1);
  }
  return uVar1;
}



/* Function: memop_memcmp @ 0001158c */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  if (p1 == (void *)0x0) {
    return 0;
  }
  if (p2 == (void *)0x0 || n == 0) {
    return 0;
  }
  iVar1 = memcmp(p1,p2,n);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = -1;
  }
  if (0 < iVar1) {
    iVar2 = 1;
  }
  return iVar2;
}



/* Function: memop_bzero @ 000115d4 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (uint)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00011600 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  if ((src != (void *)0x0) && (dst != (void *)0x0 && n != 0)) {
    memmove(dst,src,n);
    return (uint)*(byte *)dst;
  }
  return -1;
}



/* Function: memop_unaligned_access @ 00011640 */

int memop_unaligned_access(char *buf)

{
                    /* Unresolved local var: int value@[???] */
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 0001166c */

int memop_memory_barrier(int *flag)

{
  int iVar1;
  
                    /* Unresolved local var: int local@[???] */
  if (flag != (int *)0x0) {
    iVar1 = *flag;
    __sync_synchronize();
    return *flag + iVar1;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00011698 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  int iVar1;
  undefined4 uVar2;
  uint local_14 [2];
  undefined2 local_c;
  
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
  puts(&DAT_00012db6);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  local_c = 0x646c;
  local_14[1] = 0x726f576f;
  local_14[0] = 0x6c6c6548;
  memmove((void *)((uint)local_14 | 1),local_14,9);
  printf("MEMOP-L2-03: %c\n",local_14[0] >> 8 & 0xff);
                    /* Unresolved local var: int result@[???] */
  iVar1 = memcmp(&DAT_00012e04,&DAT_00012e10,0xc);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = 0xffffffff;
  }
  if (0 < iVar1) {
    uVar2 = 1;
  }
  printf("MEMOP-L2-04: %d\n",uVar2);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  __sync_synchronize();
  printf("MEMOP-L3-02: %d\n",10);
  return;
}



/* Function: main @ 000117d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 000117f8 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: __sync_fetch_and_add_4 @ 00011800 */

int __sync_fetch_and_add_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 + param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_sub_4 @ 00011838 */

int __sync_fetch_and_sub_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(iVar2,iVar2 - param_2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_fetch_and_or_4 @ 00011870 */

uint __sync_fetch_and_or_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 | param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_and_4 @ 000118a8 */

uint __sync_fetch_and_and_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 & param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_xor_4 @ 000118e0 */

uint __sync_fetch_and_xor_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar2 ^ param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_nand_4 @ 00011918 */

uint __sync_fetch_and_nand_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,~(uVar2 & param_2),param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_fetch_and_add_2 @ 00011954 */

int __sync_fetch_and_add_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_sub_2 @ 000119b4 */

int __sync_fetch_and_sub_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_or_2 @ 00011a14 */

int __sync_fetch_and_or_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_and_2 @ 00011a74 */

int __sync_fetch_and_and_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_xor_2 @ 00011ad4 */

int __sync_fetch_and_xor_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_nand_2 @ 00011b34 */

int __sync_fetch_and_nand_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)uVar1;
}



/* Function: __sync_fetch_and_add_1 @ 00011b98 */

int __sync_fetch_and_add_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 + param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_sub_1 @ 00011bf4 */

int __sync_fetch_and_sub_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ uVar1 - param_2 << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_or_1 @ 00011c50 */

int __sync_fetch_and_or_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 | param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_and_1 @ 00011cac */

int __sync_fetch_and_and_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_xor_1 @ 00011d08 */

int __sync_fetch_and_xor_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ (uVar1 ^ param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_fetch_and_nand_1 @ 00011d64 */

int __sync_fetch_and_nand_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(uVar2 ^ ~(uVar1 & param_2) << iVar4) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)uVar1;
}



/* Function: __sync_add_and_fetch_4 @ 00011dc4 */

int __sync_add_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 + param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_sub_and_fetch_4 @ 00011dfc */

int __sync_sub_and_fetch_4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  do {
    iVar2 = *param_1 - param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,iVar2,param_1);
  } while (iVar1 != 0);
  return iVar2;
}



/* Function: __sync_or_and_fetch_4 @ 00011e34 */

uint __sync_or_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 | param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_and_and_fetch_4 @ 00011e6c */

uint __sync_and_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 & param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_xor_and_fetch_4 @ 00011ea4 */

uint __sync_xor_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = *param_1 ^ param_2;
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_nand_and_fetch_4 @ 00011edc */

uint __sync_nand_and_fetch_4(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  do {
    uVar2 = ~(*param_1 & param_2);
    iVar1 = (*(code *)&SUB_ffff0fc0)(*param_1,uVar2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_add_and_fetch_2 @ 00011f18 */

int __sync_add_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_2 @ 00011f80 */

int __sync_sub_and_fetch_2(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_2 @ 00011fe8 */

int __sync_or_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_2 @ 00012050 */

int __sync_and_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_2 @ 000120b8 */

int __sync_xor_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_2 @ 00012120 */

int __sync_nand_and_fetch_2(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xffff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(short)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_add_and_fetch_1 @ 0001218c */

int __sync_add_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ param_2 + ((uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_sub_and_fetch_1 @ 000121f0 */

int __sync_sub_and_fetch_1(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ((uVar1 & uVar2) >> iVar5) - param_2 << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_or_and_fetch_1 @ 00012254 */

int __sync_or_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 | (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_and_and_fetch_1 @ 000122b8 */

int __sync_and_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_xor_and_fetch_1 @ 0001231c */

int __sync_xor_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ (param_2 ^ (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_nand_and_fetch_1 @ 00012380 */

int __sync_nand_and_fetch_1(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = (param_1 & 3) << 3;
  uVar1 = 0xff << iVar5;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar4 = (uVar2 ^ ~(param_2 & (uVar1 & uVar2) >> iVar5) << iVar5) & uVar1 ^ uVar2;
    iVar3 = (*(code *)&SUB_ffff0fc0)(uVar2,uVar4,(uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return (int)(char)((uVar1 & uVar4) >> iVar5);
}



/* Function: __sync_val_compare_and_swap_4 @ 000123e8 */

int __sync_val_compare_and_swap_4(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  do {
    if (*param_1 != param_2) {
      return *param_1;
    }
    iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  } while (iVar1 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_2 @ 00012438 */

uint __sync_val_compare_and_swap_2(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xffff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xffff)) {
      return (int)(short)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xffff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_val_compare_and_swap_1 @ 000124b0 */

uint __sync_val_compare_and_swap_1(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    uVar1 = (0xff << iVar4 & uVar2) >> iVar4;
    if (uVar1 != (param_2 & 0xff)) {
      return (int)(char)uVar1;
    }
    iVar3 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_3 << iVar4 ^ uVar2) & 0xff << iVar4 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar3 != 0);
  return param_2;
}



/* Function: __sync_bool_compare_and_swap_4 @ 00012524 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00012550 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 0001256c */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00012594 */

undefined4 __sync_lock_test_and_set_4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    uVar2 = *param_1;
    iVar1 = (*(code *)&SUB_ffff0fc0)(uVar2,param_2,param_1);
  } while (iVar1 != 0);
  return uVar2;
}



/* Function: __sync_lock_test_and_set_2 @ 000125cc */

int __sync_lock_test_and_set_2(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xffff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(short)((0xffff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_test_and_set_1 @ 0001262c */

int __sync_lock_test_and_set_1(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = (param_1 & 3) << 3;
  do {
    uVar2 = *(uint *)(param_1 & 0xfffffffc);
    iVar1 = (*(code *)&SUB_ffff0fc0)
                      (uVar2,(param_2 << iVar3 ^ uVar2) & 0xff << iVar3 ^ uVar2,
                       (uint *)(param_1 & 0xfffffffc));
  } while (iVar1 != 0);
  return (int)(char)((0xff << iVar3 & uVar2) >> iVar3);
}



/* Function: __sync_lock_release_8 @ 00012688 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 000126ac */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 000126cc */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 000126ec */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 0001270c */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 112 */
