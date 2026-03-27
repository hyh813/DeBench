/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm32/3/3_gcc_O0_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 000105a8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: _start @ 000106a0 */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 000106e4 */

/* WARNING: Removing unreachable block (ram,0x000106f8) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00010708 */

/* WARNING: Removing unreachable block (ram,0x00010718) */
/* WARNING: Removing unreachable block (ram,0x00010720) */
/* WARNING: Removing unreachable block (ram,0x00010724) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00010734 */

/* WARNING: Removing unreachable block (ram,0x00010750) */
/* WARNING: Removing unreachable block (ram,0x00010758) */
/* WARNING: Removing unreachable block (ram,0x0001075c) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 0001076c */

void __do_global_dtors_aux(void)

{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}



/* Function: double_value @ 00010798 */

int double_value(int x)

{
  int x_local;
  
  return x << 1;
}



/* Function: local_vars @ 000107c0 */

int local_vars(int x)

{
  int x_local;
  int a;
  int b;
  int c;
  
  return x * 2 + 10;
}



/* Function: local_array @ 00010804 */

/* WARNING: Removing unreachable block (ram,0x00010884) */

int local_array(int n)

{
  int n_local;
  int i;
  int arr [10];
  
  for (i = 0; i < 10; i = i + 1) {
    arr[i] = i * n;
  }
  return arr[5];
}



/* Function: local_struct @ 00010898 */

int local_struct(int x)

{
  int x_local;
  Point p;
  
  return x * 3;
}



/* Function: address_of_local @ 000108d8 */

int address_of_local(int *out)

{
  int *out_local;
  int local;
  
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00010910 */

int address_of_array(int *arr)

{
  int *arr_local;
  int *p1;
  int *p2;
  
  return *arr + *arr;
}



/* Function: large_stack_frame @ 00010954 */

/* WARNING: Removing unreachable block (ram,0x000109d8) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  int i;
  char large_buf [2048];
  
  for (i = 0; i < 0x800; i = i + 1) {
    large_buf[i] = (char)i;
  }
  return (uint)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 000109ec */

/* WARNING: Removing unreachable block (ram,0x00010b28) */

int vla_stack(int n)

{
  uint uVar1;
  int iVar2;
  int iStack_30;
  int n_local;
  int i;
  int_0_ *vla;
  
  if ((n < 1) || (1000 < n)) {
    iVar2 = -1;
  }
  else {
    uVar1 = n * 4 + 7U & 0xfffffff8;
    for (i = 0; i < n; i = i + 1) {
      *(int *)((int)&iStack_30 + (i * 4 - uVar1)) = i << 1;
    }
    iVar2 = *(int *)((int)&iStack_30 + ((n / 2) * 4 - uVar1));
  }
  return iVar2;
}



/* Function: alloca_usage @ 00010b3c */

/* WARNING: Removing unreachable block (ram,0x00010c20) */

int alloca_usage(int n)

{
  uint uVar1;
  int iVar2;
  int iStack_20;
  int n_local;
  int i;
  int *arr;
  
  if (n < 1) {
    iVar2 = -1;
  }
  else {
    uVar1 = n * 4 + 7U & 0xfffffff8;
    for (i = 0; i < n; i = i + 1) {
      *(int *)((int)&iStack_20 + (i * 4 - uVar1)) = i * 3;
    }
    iVar2 = *(int *)((int)&iStack_20 + ((n / 2) * 4 - uVar1));
  }
  return iVar2;
}



/* Function: stack_alias @ 00010c34 */

/* WARNING: Removing unreachable block (ram,0x00010cc0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
  int iVar1;
  int *p2_local;
  int *p1_local;
  int local;
  
  if (&stack0x00000000 == (undefined1 *)0x10) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x14;
  }
  return iVar1;
}



/* Function: test_stack_memory @ 00010cd4 */

/* WARNING: Removing unreachable block (ram,0x00010e30) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  int iVar1;
  int out;
  int alias_val;
  int arr5 [10];
  
  puts(&DAT_00013734);
  iVar1 = local_vars(5);
  printf("MEM-L1-01 (local_vars): %d\n",iVar1);
  iVar1 = local_array(2);
  printf("MEM-L1-02 (local_array): %d\n",iVar1);
  iVar1 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n",iVar1);
  iVar1 = address_of_local(&out);
  printf("MEM-L1-04 (address_of_local): %d\n",iVar1);
  memset(arr5,0,0x28);
  arr5[0] = 1;
  arr5[1] = 2;
  arr5[2] = 3;
  iVar1 = address_of_array(arr5);
  printf("MEM-L1-05 (address_of_array): %d\n",iVar1);
  iVar1 = large_stack_frame();
  printf("MEM-L2-01 (large_stack_frame): %d\n",iVar1);
  iVar1 = vla_stack(10);
  printf("MEM-L2-02 (vla_stack): %d\n",iVar1);
  iVar1 = alloca_usage(10);
  printf("MEM-L2-03 (alloca_usage): %d\n",iVar1);
  alias_val = 0;
  iVar1 = stack_alias(&alias_val,&alias_val);
  printf("MEM-L2-04 (stack_alias): %d\n",iVar1);
  return;
}



/* Function: heap_basic @ 00010e68 */

int heap_basic(int n)

{
  void *__ptr;
  int iVar1;
  int n_local;
  int i;
  int *arr;
  int result;
  
  __ptr = malloc(n << 2);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < n; i = i + 1) {
      *(int *)((int)__ptr + i * 4) = i << 1;
    }
    iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_calloc @ 00010f24 */

int heap_calloc(int n)

{
  void *__ptr;
  int n_local;
  int sum;
  int i;
  int *arr;
  
  __ptr = calloc(n,4);
  if (__ptr == (void *)0x0) {
    sum = -1;
  }
  else {
    sum = 0;
    for (i = 0; i < n; i = i + 1) {
      sum = sum + *(int *)((int)__ptr + i * 4);
    }
    free(__ptr);
  }
  return sum;
}



/* Function: heap_realloc @ 00010fc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  void *__ptr;
  void *__ptr_00;
  int iVar1;
  int i;
  int i_1;
  int *p;
  int old_val;
  int *new_p;
  int result;
  
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < 5; i = i + 1) {
      *(int *)((int)__ptr + i * 4) = i + 1;
    }
    iVar1 = *(int *)((int)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      iVar1 = -2;
    }
    else {
      for (i_1 = 5; i_1 < 10; i_1 = i_1 + 1) {
        *(int *)((int)__ptr_00 + i_1 * 4) = i_1 * 10;
      }
      if (iVar1 == *(int *)((int)__ptr_00 + 8)) {
        iVar1 = *(int *)((int)__ptr_00 + 0x14);
      }
      else {
        iVar1 = -3;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 00011108 */

int heap_array(int n)

{
  void *__ptr;
  int iVar1;
  int n_local;
  int i;
  int *arr;
  int result;
  
  __ptr = malloc(n << 2);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < n; i = i + 1) {
      *(int *)((int)__ptr + i * 4) = i * 3;
    }
    iVar1 = *(int *)((int)__ptr + (n / 2) * 4);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_struct @ 000111cc */

int heap_struct(int x)

{
  int *__ptr;
  int iVar1;
  int x_local;
  Point *p;
  int result;
  
  __ptr = malloc(8);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    *__ptr = x;
    __ptr[1] = x << 1;
    iVar1 = *__ptr + __ptr[1];
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_nested @ 0001124c */

int heap_nested(Node **head)

{
  Node *pNVar1;
  int iVar2;
  Node *pNVar3;
  Node **head_local;
  
  pNVar1 = malloc(8);
  *head = pNVar1;
  if (*head == (Node *)0x0) {
    iVar2 = -1;
  }
  else {
    (*head)->data = 10;
    pNVar3 = *head;
    pNVar1 = malloc(8);
    pNVar3->next = pNVar1;
    if ((*head)->next == (Node *)0x0) {
      free(*head);
      iVar2 = -2;
    }
    else {
      (*head)->next->data = 0x14;
      (*head)->next->next = (Node *)0x0;
      iVar2 = 0;
    }
  }
  return iVar2;
}



/* Function: linked_list_heap @ 00011318 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  Node *pNVar1;
  Node *pNVar2;
  Node *head;
  Node *current;
  int i;
  int sum;
  Node *temp;
  Node *temp_2;
  Node *new_node;
  Node *temp_1;
  
  head = (Node *)0x0;
  current = (Node *)0x0;
  i = 0;
  while( true ) {
    if (4 < i) {
      sum = 0;
      for (temp = head; temp != (Node *)0x0; temp = temp->next) {
        sum = sum + temp->data;
      }
      while (head != (Node *)0x0) {
        pNVar2 = head->next;
        free(head);
        head = pNVar2;
      }
      return sum;
    }
    pNVar2 = malloc(8);
    if (pNVar2 == (Node *)0x0) break;
    pNVar2->data = i * 10;
    pNVar2->next = (Node *)0x0;
    pNVar1 = pNVar2;
    if (head != (Node *)0x0) {
      current->next = pNVar2;
      pNVar1 = head;
    }
    head = pNVar1;
    i = i + 1;
    current = pNVar2;
  }
  while (head != (Node *)0x0) {
    pNVar2 = head->next;
    free(head);
    head = pNVar2;
  }
  return -1;
}



/* Function: create_tree_node @ 00011484 */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  int data_local;
  TreeNode *node;
  
  pTVar1 = malloc(0xc);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 000114e4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  TreeNode *__ptr;
  TreeNode *pTVar1;
  int iVar2;
  TreeNode *root;
  int sum;
  
  __ptr = create_tree_node(10);
  if (__ptr == (TreeNode *)0x0) {
    iVar2 = -1;
  }
  else {
    pTVar1 = create_tree_node(0x14);
    __ptr->left = pTVar1;
    pTVar1 = create_tree_node(0x1e);
    __ptr->right = pTVar1;
    if ((__ptr->left == (TreeNode *)0x0) || (__ptr->right == (TreeNode *)0x0)) {
      if (__ptr->left != (TreeNode *)0x0) {
        free(__ptr->left);
      }
      if (__ptr->right != (TreeNode *)0x0) {
        free(__ptr->right);
      }
      free(__ptr);
      iVar2 = -2;
    }
    else {
      iVar2 = __ptr->data + __ptr->left->data + __ptr->right->data;
      free(__ptr->left);
      free(__ptr->right);
      free(__ptr);
    }
  }
  return iVar2;
}



/* Function: memory_leak @ 0001160c */

int memory_leak(int n)

{
  void *pvVar1;
  int iVar2;
  int n_local;
  int i;
  int *leak;
  
  pvVar1 = malloc(n << 2);
  if (pvVar1 == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    for (i = 0; i < n; i = i + 1) {
      *(int *)((int)pvVar1 + i * 4) = i;
    }
    iVar2 = *(int *)((int)pvVar1 + (n / 2) * 4);
  }
  return iVar2;
}



/* Function: dangling_pointer @ 000116b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  int iVar1;
  int *p;
  int value;
  int dangerous;
  
  __ptr = malloc(4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    *__ptr = 0x2a;
    printf("value before free: %d\n",*__ptr);
    free(__ptr);
    iVar1 = *__ptr;
  }
  return iVar1;
}



/* Function: double_free @ 00011730 */

int double_free(int *p)

{
  undefined4 *__ptr;
  int iVar1;
  int *p_local;
  int *temp;
  
  if (p == (int *)0x0) {
    __ptr = malloc(4);
    if (__ptr == (undefined4 *)0x0) {
      iVar1 = -1;
    }
    else {
      *__ptr = 10;
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



/* Function: heap_overflow @ 000117a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int *__ptr;
  int iVar1;
  int i;
  int *arr;
  int result;
  
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < 0xb; i = i + 1) {
      __ptr[i] = i * 100;
    }
    iVar1 = *__ptr;
    free(__ptr);
  }
  return iVar1;
}



/* Function: test_heap_memory @ 00011850 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  int iVar1;
  Node *head;
  int status;
  pid_t pid;
  int result;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013890);
  iVar1 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n",iVar1);
  iVar1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n",iVar1);
  iVar1 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n",iVar1);
  iVar1 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",iVar1);
  iVar1 = heap_struct(5);
  printf("HEAP-L2-05 (heap_struct): %d\n",iVar1);
  head = (Node *)0x0;
  iVar1 = heap_nested(&head);
  printf("HEAP-L2-06 (heap_nested): %d\n",iVar1);
  if (head != (Node *)0x0) {
    free(head->next);
    free(head);
  }
  iVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",iVar1);
  iVar1 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",iVar1);
  iVar1 = memory_leak(5);
  printf("HEAP-L3-03 (memory_leak): %d\n",iVar1);
  printf("HEAP-L3-04 (dangling_pointer): ");
  pid = fork();
  if (pid == 0) {
    result = dangling_pointer();
    printf(&DAT_000139fc,result);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (pid < 1) {
    perror(&DAT_00013a78);
  }
  else {
    waitpid(pid,&status,0);
    if ((status & 0x7fU) == 0) {
      printf(&DAT_00013a0c,status >> 8 & 0xff);
    }
    else if ('\0' < (char)((int)(((status & 0x7fU) + 1) * 0x1000000) >> 0x19)) {
      printf(&DAT_00013a34,status & 0x7f);
    }
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: global_var_access @ 00011ab8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00011af0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 00011b18 */

int global_array_access(int idx)

{
  int iVar1;
  int idx_local;
  
  if ((idx < 0) || (9 < idx)) {
    iVar1 = -1;
  }
  else {
    iVar1 = global_array[idx];
  }
  return iVar1;
}



/* Function: static_local @ 00011b68 */

int static_local(int reset)

{
  int reset_local;
  
  if (reset == 0) {
    static_local::counter = static_local::counter + 1;
  }
  else {
    static_local::counter = 0;
  }
  return static_local::counter;
}



/* Function: static_helper @ 00011bc8 */

int static_helper(int x)

{
  int x_local;
  
  return x << 1;
}



/* Function: call_static_func @ 00011bf0 */

int call_static_func(int x)

{
  int iVar1;
  int x_local;
  
  iVar1 = static_helper(x);
  return iVar1 + 1;
}



/* Function: access_extern_global @ 00011c1c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011c44 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00011c60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return bss_var;
}



/* Function: access_bss_buffer @ 00011cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return (uint)(byte)bss_buffer[0];
}



/* Function: global_struct_access @ 00011ce0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return global_point.x + global_point.y;
}



/* Function: set_file_static @ 00011d10 */

void set_file_static(int val)

{
  int val_local;
  
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00011d40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00011d64 */

void set_global_callback(_func_int_int *f)

{
  _func_int_int *f_local;
  
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00011d94 */

int call_global_callback(int x)

{
  int iVar1;
  int x_local;
  
  if (global_func_ptr == (_func_int_int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = (*global_func_ptr)(x);
  }
  return iVar1;
}



/* Function: global_heap_store @ 00011de0 */

int global_heap_store(int *p)

{
  int iVar1;
  int *p_local;
  
  global_heap_ptr = p;
  if (p == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *p;
  }
  return iVar1;
}



/* Function: static_complex_init @ 00011e34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return complex_init[0] + complex_init[2] + complex_init[4];
}



/* Function: tls_access @ 00011e70 */

int tls_access(int val)

{
  int iVar1;
  int val_local;
  
  iVar1 = __aeabi_read_tp();
  *(int *)(iVar1 + 8) = val;
  iVar1 = __aeabi_read_tp();
  return *(int *)(iVar1 + 8) << 1;
}



/* Function: init_depends_on @ 00011eb8 */

int init_depends_on(int *p)

{
  int *p_local;
  
  if (p != (int *)0x0) {
    init_depends_on::static_depends = *p;
  }
  return init_depends_on::static_depends;
}



/* Function: init_order_test @ 00011f00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
  int iVar1;
  int external_val;
  int local_c;
  
  local_c = 0;
  external_val = 0x14;
  iVar1 = init_depends_on(&external_val);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1,local_c,0);
  }
  return iVar1;
}



/* Function: test_static_global @ 00011f60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  int iVar1;
  int heap_val;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00013a94);
  iVar1 = global_var_access();
  printf("STM-L1-01 (global_var_access): %d\n",iVar1);
  iVar1 = global_var_read();
  printf("STM-L1-01 (global_var_read): %d\n",iVar1);
  iVar1 = global_array_access(5);
  printf("STM-L1-02 (global_array_access): %d\n",iVar1);
  static_local(1);
  iVar1 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",iVar1);
  iVar1 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",iVar1);
  iVar1 = call_static_func(5);
  printf("STM-L1-04 (call_static_func): %d\n",iVar1);
  iVar1 = access_extern_global();
  printf("STM-L2-01 (access_extern_global): %d\n",iVar1);
  iVar1 = call_extern_func();
  printf("STM-L2-02 (call_extern_func): %d\n",iVar1);
  iVar1 = read_const_data();
  printf("STM-L2-03 (read_const_data): %d\n",iVar1);
  iVar1 = access_bss_var();
  printf("STM-L2-04 (access_bss_var): %d\n",iVar1);
  iVar1 = access_bss_buffer();
  printf("STM-L2-04 (access_bss_buffer): %d\n",iVar1);
  iVar1 = global_struct_access();
  printf("STM-L2-05 (global_struct_access): %d\n",iVar1);
  set_file_static(0x32);
  iVar1 = get_file_static();
  printf("STM-L2-06 (file_static): %d\n",iVar1);
  set_global_callback(double_value);
  iVar1 = call_global_callback(5);
  printf("STM-L2-07 (global_func_ptr): %d\n",iVar1);
  heap_val = 100;
  iVar1 = global_heap_store(&heap_val);
  printf("STM-L2-08 (global_heap_store): %d\n",iVar1);
  iVar1 = static_complex_init();
  printf("STM-L2-09 (static_complex_init): %d\n",iVar1);
  iVar1 = tls_access(10);
  printf("STM-L3-01 (tls_access): %d\n",iVar1);
  iVar1 = init_order_test();
  iVar1 = printf("STM-L3-02 (init_order_test): %d\n",iVar1);
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar1);
  }
  return;
}



/* Function: memop_memset @ 000121a4 */

int memop_memset(void *buf,size_t size,int fill_value)

{
  uint uVar1;
  int fill_value_local;
  size_t size_local;
  void *buf_local;
  
  if ((buf == (void *)0x0) || (size == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(buf,fill_value,size);
    uVar1 = (uint)*(byte *)buf;
  }
  return uVar1;
}



/* Function: memop_memcpy @ 00012200 */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  size_t n_local;
  void *src_local;
  void *dst_local;
  
  if (((dst == (void *)0x0) || (src == (void *)0x0)) || (n == 0)) {
    iVar1 = -1;
  }
  else {
    memcpy(dst,src,n);
    iVar1 = *(int *)((int)dst + ((n & 0xfffffffc) - 4));
  }
  return iVar1;
}



/* Function: memop_memmove @ 00012278 */

int memop_memmove(void *buf,size_t n)

{
  uint uVar1;
  size_t n_local;
  void *buf_local;
  
  if ((buf == (void *)0x0) || (n < 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove((void *)((int)buf + 1),buf,n - 1);
    uVar1 = (uint)*(byte *)((int)buf + 1);
  }
  return uVar1;
}



/* Function: memop_memcmp @ 000122e0 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  size_t n_local;
  void *p2_local;
  void *p1_local;
  int result;
  
  if (((p1 == (void *)0x0) || (p2 == (void *)0x0)) || (n == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = memcmp(p1,p2,n);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        iVar1 = -1;
      }
      else {
        iVar1 = 0;
      }
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* Function: memop_bzero @ 00012370 */

int memop_bzero(void *buf,size_t n)

{
  uint uVar1;
  size_t n_local;
  void *buf_local;
  
  if (buf == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(buf,0,n);
    uVar1 = (uint)*(byte *)buf;
  }
  return uVar1;
}



/* Function: memop_bcopy @ 000123c4 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  uint uVar1;
  size_t n_local;
  void *dst_local;
  void *src_local;
  
  if (((src == (void *)0x0) || (dst == (void *)0x0)) || (n == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove(dst,src,n);
    uVar1 = (uint)*(byte *)dst;
  }
  return uVar1;
}



/* Function: memop_unaligned_access @ 0001242c */

int memop_unaligned_access(char *buf)

{
  void *pvVar1;
  char *buf_local;
  int value;
  int local_c;
  
  local_c = 0;
  if (buf == (char *)0x0) {
    value = -1;
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = memcpy(&value,buf + 1,4);
  }
  if (local_c != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pvVar1,local_c,0);
  }
  return value;
}



/* Function: memop_memory_barrier @ 000124a8 */

int memop_memory_barrier(int *flag)

{
  int iVar1;
  int *flag_local;
  int local;
  
  if (flag == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *flag;
    __sync_synchronize();
    iVar1 = *flag + iVar1;
  }
  return iVar1;
}



/* Function: test_memory_op_functions @ 000124f8 */

/* WARNING: Removing unreachable block (ram,0x000126e0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  int iVar1;
  int flag;
  int cmp_a [3];
  int cmp_b [3];
  int int_src [5];
  int int_dst [5];
  char bcopy_src [4];
  char bcopy_dst [4];
  char unalign_buf [8];
  char zero_buf [10];
  char move_buf [11];
  char buffer [256];
  
  puts(&DAT_00013d18);
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
  iVar1 = memop_memset(buffer,10,0x41);
  printf("MEMOP-L2-01: %d\n",iVar1);
  iVar1 = memop_memcpy(int_dst,int_src,0x14);
  printf("MEMOP-L2-02: %d\n",iVar1);
  move_buf[0] = 'H';
  move_buf[1] = 'e';
  move_buf[2] = 'l';
  move_buf[3] = 'l';
  move_buf[4] = 'o';
  move_buf[5] = 'W';
  move_buf[6] = 'o';
  move_buf[7] = 'r';
  move_buf[8] = 'l';
  move_buf[9] = 'd';
  move_buf[10] = '\0';
  iVar1 = memop_memmove(move_buf,10);
  printf("MEMOP-L2-03: %c\n",iVar1);
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_a[2] = 3;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_b[2] = 4;
  iVar1 = memop_memcmp(cmp_a,cmp_b,0xc);
  printf("MEMOP-L2-04: %d\n",iVar1);
  iVar1 = memop_bzero(zero_buf,10);
  printf("MEMOP-L2-05: %d\n",iVar1);
  builtin_strncpy(bcopy_src,"\x01\x02\x03\x04",4);
  bcopy_dst[0] = '\0';
  bcopy_dst[1] = '\0';
  bcopy_dst[2] = '\0';
  bcopy_dst[3] = '\0';
  iVar1 = memop_bcopy(bcopy_src,bcopy_dst,4);
  printf("MEMOP-L2-06: %d\n",iVar1);
  unalign_buf[0] = '\0';
  unalign_buf[1] = '\x01';
  unalign_buf[2] = '\x02';
  unalign_buf[3] = '\x03';
  unalign_buf[4] = '\x04';
  unalign_buf[5] = '\x05';
  unalign_buf[6] = '\x06';
  unalign_buf[7] = '\a';
  iVar1 = memop_unaligned_access(unalign_buf);
  printf("MEMOP-L3-01: 0x%x\n",iVar1);
  flag = 5;
  iVar1 = memop_memory_barrier(&flag);
  printf("MEMOP-L3-02: %d\n",iVar1);
  return;
}



/* Function: main @ 0001272c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 00012750 */

int extern_function(int x)

{
  int x_local;
  
  return x * 3;
}



/* Function: __sync_fetch_and_add_4 @ 00012780 */

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



/* Function: __sync_fetch_and_sub_4 @ 000127b8 */

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



/* Function: __sync_fetch_and_or_4 @ 000127f0 */

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



/* Function: __sync_fetch_and_and_4 @ 00012828 */

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



/* Function: __sync_fetch_and_xor_4 @ 00012860 */

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



/* Function: __sync_fetch_and_nand_4 @ 00012898 */

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



/* Function: __sync_fetch_and_add_2 @ 000128d4 */

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



/* Function: __sync_fetch_and_sub_2 @ 00012934 */

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



/* Function: __sync_fetch_and_or_2 @ 00012994 */

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



/* Function: __sync_fetch_and_and_2 @ 000129f4 */

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



/* Function: __sync_fetch_and_xor_2 @ 00012a54 */

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



/* Function: __sync_fetch_and_nand_2 @ 00012ab4 */

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



/* Function: __sync_fetch_and_add_1 @ 00012b18 */

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



/* Function: __sync_fetch_and_sub_1 @ 00012b74 */

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



/* Function: __sync_fetch_and_or_1 @ 00012bd0 */

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



/* Function: __sync_fetch_and_and_1 @ 00012c2c */

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



/* Function: __sync_fetch_and_xor_1 @ 00012c88 */

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



/* Function: __sync_fetch_and_nand_1 @ 00012ce4 */

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



/* Function: __sync_add_and_fetch_4 @ 00012d44 */

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



/* Function: __sync_sub_and_fetch_4 @ 00012d7c */

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



/* Function: __sync_or_and_fetch_4 @ 00012db4 */

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



/* Function: __sync_and_and_fetch_4 @ 00012dec */

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



/* Function: __sync_xor_and_fetch_4 @ 00012e24 */

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



/* Function: __sync_nand_and_fetch_4 @ 00012e5c */

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



/* Function: __sync_add_and_fetch_2 @ 00012e98 */

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



/* Function: __sync_sub_and_fetch_2 @ 00012f00 */

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



/* Function: __sync_or_and_fetch_2 @ 00012f68 */

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



/* Function: __sync_and_and_fetch_2 @ 00012fd0 */

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



/* Function: __sync_xor_and_fetch_2 @ 00013038 */

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



/* Function: __sync_nand_and_fetch_2 @ 000130a0 */

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



/* Function: __sync_add_and_fetch_1 @ 0001310c */

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



/* Function: __sync_sub_and_fetch_1 @ 00013170 */

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



/* Function: __sync_or_and_fetch_1 @ 000131d4 */

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



/* Function: __sync_and_and_fetch_1 @ 00013238 */

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



/* Function: __sync_xor_and_fetch_1 @ 0001329c */

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



/* Function: __sync_nand_and_fetch_1 @ 00013300 */

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



/* Function: __sync_val_compare_and_swap_4 @ 00013368 */

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



/* Function: __sync_val_compare_and_swap_2 @ 000133b8 */

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



/* Function: __sync_val_compare_and_swap_1 @ 00013430 */

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



/* Function: __sync_bool_compare_and_swap_4 @ 000134a4 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 000134d0 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 000134ec */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00013514 */

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



/* Function: __sync_lock_test_and_set_2 @ 0001354c */

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



/* Function: __sync_lock_test_and_set_1 @ 000135ac */

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



/* Function: __sync_lock_release_8 @ 00013608 */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 0001362c */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 0001364c */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 0001366c */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 00013698 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 114 */
