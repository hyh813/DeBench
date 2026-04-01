/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm64/3/3_gcc_O0_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001009c0 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001009e0 @ 001009e0 */

void FUN_001009e0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
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
  int x_local;
  
  return x << 1;
}



/* Function: local_vars @ 00100c6c */

int local_vars(int x)

{
  int x_local;
  int a;
  int b;
  int c;
  
  return x * 2 + 10;
}



/* Function: local_array @ 00100ca0 */

/* WARNING: Removing unreachable block (ram,0x00100d20) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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



/* Function: local_struct @ 00100d30 */

int local_struct(int x)

{
  int x_local;
  Point p;
  
  return x * 3;
}



/* Function: address_of_local @ 00100d60 */

int address_of_local(int *out)

{
  int *out_local;
  int local;
  
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00100d88 */

int address_of_array(int *arr)

{
  int *arr_local;
  int *p1;
  int *p2;
  
  return *arr + *arr;
}



/* Function: large_stack_frame @ 00100dbc */

/* WARNING: Removing unreachable block (ram,0x00100e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  int i;
  char large_buf [2048];
  
  for (i = 0; i < 0x800; i = i + 1) {
    large_buf[i] = (char)i;
  }
  return (int)(byte)large_buf[0x400];
}



/* Function: vla_stack @ 00100e48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int vla_stack(int n)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  int n_local;
  int i;
  int_0_ *vla;
  
  lVar3 = ___stack_chk_guard;
  puVar4 = auStack_50;
  if ((n < 1) || (1000 < n)) {
    iVar5 = -1;
  }
  else {
    uVar1 = (long)n * 4 + 0xf;
    for (; puVar4 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar4 = puVar4 + -0x10000) {
      *(undefined8 *)(puVar4 + -0xfc00) = 0;
    }
    lVar2 = -(uVar1 & 0xfff0);
    *(undefined8 *)(puVar4 + lVar2) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar4 + lVar2 + 0x400) = 0;
    }
    for (i = 0; i < n; i = i + 1) {
      *(int *)(puVar4 + (long)i * 4 + lVar2 + 0x10) = i << 1;
    }
    iVar5 = *(int *)(puVar4 + (long)(n / 2) * 4 + lVar2 + 0x10);
  }
  if (lVar3 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar5,0,lVar3 - ___stack_chk_guard);
  }
  return iVar5;
}



/* Function: alloca_usage @ 00100fcc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int alloca_usage(int n)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_50 [16];
  int n_local;
  int i;
  int *arr;
  
  lVar3 = ___stack_chk_guard;
  puVar4 = auStack_50;
  if (n < 1) {
    iVar5 = -1;
  }
  else {
    uVar1 = (long)n * 4 + 0xf;
    for (; puVar4 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar4 = puVar4 + -0x10000) {
      *(undefined8 *)(puVar4 + -0xfc00) = 0;
    }
    lVar2 = -(uVar1 & 0xfff0);
    *(undefined8 *)(puVar4 + lVar2) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar4 + lVar2 + 0x400) = 0;
    }
    for (i = 0; i < n; i = i + 1) {
      *(int *)(puVar4 + (long)i * 4 + lVar2 + 0x10) = i * 3;
    }
    iVar5 = *(int *)(puVar4 + (long)(n / 2) * 4 + lVar2 + 0x10);
  }
  if (lVar3 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar5,0,lVar3 - ___stack_chk_guard);
  }
  return iVar5;
}



/* Function: stack_alias @ 00101104 */

/* WARNING: Removing unreachable block (ram,0x00101198) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int stack_alias(int *p1,int *p2)

{
  int iVar1;
  int *p2_local;
  int *p1_local;
  int local;
  
  if (&stack0x00000000 == (undefined1 *)0xc) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0x14;
  }
  return iVar1;
}



/* Function: test_stack_memory @ 001011a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  long lVar1;
  uint uVar2;
  int out;
  int alias_val;
  int arr5 [10];
  
  lVar1 = ___stack_chk_guard;
  puts(&DAT_001028f8);
  uVar2 = local_vars(5);
  printf("MEM-L1-01 (local_vars): %d\n",(ulong)uVar2);
  uVar2 = local_array(2);
  printf("MEM-L1-02 (local_array): %d\n",(ulong)uVar2);
  uVar2 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n",(ulong)uVar2);
  uVar2 = address_of_local(&out);
  printf("MEM-L1-04 (address_of_local): %d\n",(ulong)uVar2);
  arr5[4] = 0;
  arr5[5] = 0;
  arr5[6] = 0;
  arr5[7] = 0;
  arr5[8] = 0;
  arr5[9] = 0;
  arr5[0] = 1;
  arr5[1] = 2;
  arr5[2] = 3;
  arr5[3] = 0;
  uVar2 = address_of_array(arr5);
  printf("MEM-L1-05 (address_of_array): %d\n",(ulong)uVar2);
  uVar2 = large_stack_frame();
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)uVar2);
  uVar2 = vla_stack(10);
  printf("MEM-L2-02 (vla_stack): %d\n",(ulong)uVar2);
  uVar2 = alloca_usage(10);
  printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)uVar2);
  alias_val = 0;
  uVar2 = stack_alias(&alias_val,&alias_val);
  printf("MEM-L2-04 (stack_alias): %d\n",(ulong)uVar2);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}



/* Function: heap_basic @ 001012fc */

int heap_basic(int n)

{
  int iVar1;
  void *__ptr;
  int n_local;
  int i;
  int result;
  int *arr;
  
  __ptr = malloc((long)n << 2);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < n; i = i + 1) {
      *(int *)((long)__ptr + (long)i * 4) = i << 1;
    }
    iVar1 = *(int *)((long)__ptr + (long)(n / 2) * 4);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_calloc @ 001013a8 */

int heap_calloc(int n)

{
  void *__ptr;
  int n_local;
  int sum;
  int i;
  int *arr;
  
  __ptr = calloc((long)n,4);
  if (__ptr == (void *)0x0) {
    sum = -1;
  }
  else {
    sum = 0;
    for (i = 0; i < n; i = i + 1) {
      sum = sum + *(int *)((long)__ptr + (long)i * 4);
    }
    free(__ptr);
  }
  return sum;
}



/* Function: heap_realloc @ 00101434 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  int iVar1;
  void *__ptr;
  void *__ptr_00;
  int i;
  int i_1;
  int old_val;
  int result;
  int *p;
  int *new_p;
  
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < 5; i = i + 1) {
      *(int *)((long)__ptr + (long)i * 4) = i + 1;
    }
    iVar1 = *(int *)((long)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      iVar1 = -2;
    }
    else {
      for (i_1 = 5; i_1 < 10; i_1 = i_1 + 1) {
        *(int *)((long)__ptr_00 + (long)i_1 * 4) = i_1 * 10;
      }
      if (iVar1 == *(int *)((long)__ptr_00 + 8)) {
        iVar1 = *(int *)((long)__ptr_00 + 0x14);
      }
      else {
        iVar1 = -3;
      }
      free(__ptr_00);
    }
  }
  return iVar1;
}



/* Function: heap_array @ 00101564 */

int heap_array(int n)

{
  int iVar1;
  void *__ptr;
  int n_local;
  int i;
  int result;
  int *arr;
  
  __ptr = malloc((long)n << 2);
  if (__ptr == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < n; i = i + 1) {
      *(int *)((long)__ptr + (long)i * 4) = i * 3;
    }
    iVar1 = *(int *)((long)__ptr + (long)(n / 2) * 4);
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_struct @ 00101618 */

int heap_struct(int x)

{
  int iVar1;
  int *__ptr;
  int x_local;
  int result;
  Point *p;
  
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



/* Function: heap_nested @ 0010168c */

int heap_nested(Node **head)

{
  int iVar1;
  Node *pNVar2;
  Node *pNVar3;
  Node **head_local;
  
  pNVar2 = malloc(0x10);
  *head = pNVar2;
  if (*head == (Node *)0x0) {
    iVar1 = -1;
  }
  else {
    (*head)->data = 10;
    pNVar3 = *head;
    pNVar2 = malloc(0x10);
    pNVar3->next = pNVar2;
    if ((*head)->next == (Node *)0x0) {
      free(*head);
      iVar1 = -2;
    }
    else {
      (*head)->next->data = 0x14;
      (*head)->next->next = (Node *)0x0;
      iVar1 = 0;
    }
  }
  return iVar1;
}



/* Function: linked_list_heap @ 00101748 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  Node *pNVar1;
  Node *pNVar2;
  int i;
  int sum;
  Node *head;
  Node *current;
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
    pNVar2 = malloc(0x10);
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



/* Function: create_tree_node @ 00101894 */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  int data_local;
  TreeNode *node;
  
  pTVar1 = malloc(0x18);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 001018e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
  int iVar1;
  TreeNode *__ptr;
  TreeNode *pTVar2;
  int sum;
  TreeNode *root;
  
  __ptr = create_tree_node(10);
  if (__ptr == (TreeNode *)0x0) {
    iVar1 = -1;
  }
  else {
    pTVar2 = create_tree_node(0x14);
    __ptr->left = pTVar2;
    pTVar2 = create_tree_node(0x1e);
    __ptr->right = pTVar2;
    if ((__ptr->left == (TreeNode *)0x0) || (__ptr->right == (TreeNode *)0x0)) {
      if (__ptr->left != (TreeNode *)0x0) {
        free(__ptr->left);
      }
      if (__ptr->right != (TreeNode *)0x0) {
        free(__ptr->right);
      }
      free(__ptr);
      iVar1 = -2;
    }
    else {
      iVar1 = __ptr->data + __ptr->left->data + __ptr->right->data;
      free(__ptr->left);
      free(__ptr->right);
      free(__ptr);
    }
  }
  return iVar1;
}



/* Function: memory_leak @ 001019f0 */

int memory_leak(int n)

{
  int iVar1;
  void *pvVar2;
  int n_local;
  int i;
  int *leak;
  
  pvVar2 = malloc((long)n << 2);
  if (pvVar2 == (void *)0x0) {
    iVar1 = -1;
  }
  else {
    for (i = 0; i < n; i = i + 1) {
      *(int *)((long)pvVar2 + (long)i * 4) = i;
    }
    iVar1 = *(int *)((long)pvVar2 + (long)(n / 2) * 4);
  }
  return iVar1;
}



/* Function: dangling_pointer @ 00101a88 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  uint uVar1;
  uint *__ptr;
  int value;
  int dangerous;
  int *p;
  
  __ptr = malloc(4);
  if (__ptr == (uint *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *__ptr = 0x2a;
    printf("value before free: %d\n",(ulong)*__ptr);
    free(__ptr);
    uVar1 = *__ptr;
  }
  return uVar1;
}



/* Function: double_free @ 00101af8 */

int double_free(int *p)

{
  int iVar1;
  undefined4 *__ptr;
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



/* Function: heap_overflow @ 00101b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int iVar1;
  int *__ptr;
  int i;
  int result;
  int *arr;
  
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



/* Function: test_heap_memory @ 00101bec */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  uint uVar1;
  int status;
  pid_t pid;
  int result;
  Node *head;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102a68);
  uVar1 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar1);
  uVar1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar1);
  uVar1 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
  uVar1 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar1);
  uVar1 = heap_struct(5);
  printf("HEAP-L2-05 (heap_struct): %d\n",(ulong)uVar1);
  head = (Node *)0x0;
  uVar1 = heap_nested(&head);
  printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
  if (head != (Node *)0x0) {
    free(head->next);
    free(head);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
  uVar1 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar1);
  uVar1 = memory_leak(5);
  printf("HEAP-L3-03 (memory_leak): %d\n",(ulong)uVar1);
  printf("HEAP-L3-04 (dangling_pointer): ");
  pid = fork();
  if (pid == 0) {
    result = dangling_pointer();
    printf(&DAT_00102bd8,(ulong)(uint)result);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (pid < 1) {
    perror(&DAT_00102c58);
  }
  else {
    waitpid(pid,&status,0);
    if ((status & 0x7fU) == 0) {
      printf(&DAT_00102be8,(ulong)(status >> 8 & 0xff));
    }
    else if ('\0' < (char)(((byte)status & 0x7f) + 1) >> 1) {
      printf(&DAT_00102c10,(ulong)(status & 0x7f));
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: global_var_access @ 00101e14 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00101e40 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 00101e54 */

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



/* Function: static_local @ 00101e94 */

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



/* Function: static_helper @ 00101eec */

int static_helper(int x)

{
  int x_local;
  
  return x << 1;
}



/* Function: call_static_func @ 00101f04 */

int call_static_func(int x)

{
  int iVar1;
  int x_local;
  
  iVar1 = static_helper(x);
  return iVar1 + 1;
}



/* Function: access_extern_global @ 00101f24 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101f38 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00101f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101f74 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return bss_var;
}



/* Function: access_bss_buffer @ 00101f84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return (int)(byte)bss_buffer[0];
}



/* Function: global_struct_access @ 00101f94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return global_point.x + global_point.y;
}



/* Function: set_file_static @ 00101fb4 */

void set_file_static(int val)

{
  int val_local;
  
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 00101fd8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00101fe8 */

void set_global_callback(_func_int_int *f)

{
  _func_int_int *f_local;
  
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 0010200c */

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



/* Function: global_heap_store @ 00102050 */

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



/* Function: static_complex_init @ 0010209c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return complex_init[0] + complex_init[2] + complex_init[4];
}



/* Function: tls_access @ 001020cc */

int tls_access(int val)

{
  long lVar1;
  int val_local;
  
  lVar1 = tpidr_el0;
  *(int *)(lVar1 + 0x10) = val;
  lVar1 = tpidr_el0;
  return *(int *)(lVar1 + 0x10) << 1;
}



/* Function: init_depends_on @ 00102104 */

int init_depends_on(int *p)

{
  int *p_local;
  
  if (p != (int *)0x0) {
    init_depends_on::static_depends = *p;
  }
  return init_depends_on::static_depends;
}



/* Function: init_order_test @ 00102140 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
  int iVar1;
  int external_val;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  external_val = 0x14;
  iVar1 = init_depends_on(&external_val);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,iVar1,0,local_8 - ___stack_chk_guard);
  }
  return iVar1;
}



/* Function: test_static_global @ 0010219c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  uint uVar1;
  int heap_val;
  long local_8;
  
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102c78);
  uVar1 = global_var_access();
  printf("STM-L1-01 (global_var_access): %d\n",(ulong)uVar1);
  uVar1 = global_var_read();
  printf("STM-L1-01 (global_var_read): %d\n",(ulong)uVar1);
  uVar1 = global_array_access(5);
  printf("STM-L1-02 (global_array_access): %d\n",(ulong)uVar1);
  static_local(1);
  uVar1 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",(ulong)uVar1);
  uVar1 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",(ulong)uVar1);
  uVar1 = call_static_func(5);
  printf("STM-L1-04 (call_static_func): %d\n",(ulong)uVar1);
  uVar1 = access_extern_global();
  printf("STM-L2-01 (access_extern_global): %d\n",(ulong)uVar1);
  uVar1 = call_extern_func();
  printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
  uVar1 = read_const_data();
  printf("STM-L2-03 (read_const_data): %d\n",(ulong)uVar1);
  uVar1 = access_bss_var();
  printf("STM-L2-04 (access_bss_var): %d\n",(ulong)uVar1);
  uVar1 = access_bss_buffer();
  printf("STM-L2-04 (access_bss_buffer): %d\n",(ulong)uVar1);
  uVar1 = global_struct_access();
  printf("STM-L2-05 (global_struct_access): %d\n",(ulong)uVar1);
  set_file_static(0x32);
  uVar1 = get_file_static();
  printf("STM-L2-06 (file_static): %d\n",(ulong)uVar1);
  set_global_callback(double_value);
  uVar1 = call_global_callback(5);
  printf("STM-L2-07 (global_func_ptr): %d\n",(ulong)uVar1);
  heap_val = 100;
  uVar1 = global_heap_store(&heap_val);
  printf("STM-L2-08 (global_heap_store): %d\n",(ulong)uVar1);
  uVar1 = static_complex_init();
  printf("STM-L2-09 (static_complex_init): %d\n",(ulong)uVar1);
  uVar1 = tls_access(10);
  printf("STM-L3-01 (tls_access): %d\n",(ulong)uVar1);
  uVar1 = init_order_test();
  printf("STM-L3-02 (init_order_test): %d\n",(ulong)uVar1);
  if (local_8 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}



/* Function: memop_memset @ 00102398 */

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



/* Function: memop_memcpy @ 001023ec */

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
    iVar1 = *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
  }
  return iVar1;
}



/* Function: memop_memmove @ 0010245c */

int memop_memmove(void *buf,size_t n)

{
  uint uVar1;
  size_t n_local;
  void *buf_local;
  
  if ((buf == (void *)0x0) || (n < 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove((void *)((long)buf + 1),buf,n - 1);
    uVar1 = (uint)*(byte *)((long)buf + 1);
  }
  return uVar1;
}



/* Function: memop_memcmp @ 001024c0 */

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



/* Function: memop_bzero @ 00102548 */

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



/* Function: memop_bcopy @ 00102598 */

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



/* Function: memop_unaligned_access @ 001025f8 */

/* WARNING: Removing unreachable block (ram,0x00102660) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int memop_unaligned_access(char *buf)

{
  int iVar1;
  char *buf_local;
  int value;
  
  if (buf == (char *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = *(int *)(buf + 1);
  }
  return iVar1;
}



/* Function: memop_memory_barrier @ 00102670 */

int memop_memory_barrier(int *flag)

{
  int iVar1;
  int *flag_local;
  int local;
  
  if (flag == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    DataMemoryBarrier(2,3);
    iVar1 = *flag + *flag;
  }
  return iVar1;
}



/* Function: test_memory_op_functions @ 001026b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
  long lVar1;
  uint uVar2;
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
  
  lVar1 = ___stack_chk_guard;
  puts(&DAT_00102f28);
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
  uVar2 = memop_memset(buffer,10,0x41);
  printf("MEMOP-L2-01: %d\n",(ulong)uVar2);
  uVar2 = memop_memcpy(int_dst,int_src,0x14);
  printf("MEMOP-L2-02: %d\n",(ulong)uVar2);
  builtin_strncpy(move_buf,"HelloWorld",0xb);
  uVar2 = memop_memmove(move_buf,10);
  printf("MEMOP-L2-03: %c\n",(ulong)uVar2);
  cmp_a[0] = 1;
  cmp_a[1] = 2;
  cmp_a[2] = 3;
  cmp_b[0] = 1;
  cmp_b[1] = 2;
  cmp_b[2] = 4;
  uVar2 = memop_memcmp(cmp_a,cmp_b,0xc);
  printf("MEMOP-L2-04: %d\n",(ulong)uVar2);
  uVar2 = memop_bzero(zero_buf,10);
  printf("MEMOP-L2-05: %d\n",(ulong)uVar2);
  builtin_strncpy(bcopy_src,"\x01\x02\x03\x04",4);
  bcopy_dst[0] = '\0';
  bcopy_dst[1] = '\0';
  bcopy_dst[2] = '\0';
  bcopy_dst[3] = '\0';
  uVar2 = memop_bcopy(bcopy_src,bcopy_dst,4);
  printf("MEMOP-L2-06: %d\n",(ulong)uVar2);
  unalign_buf[0] = '\0';
  unalign_buf[1] = '\x01';
  unalign_buf[2] = '\x02';
  unalign_buf[3] = '\x03';
  unalign_buf[4] = '\x04';
  unalign_buf[5] = '\x05';
  unalign_buf[6] = '\x06';
  unalign_buf[7] = '\a';
  uVar2 = memop_unaligned_access(unalign_buf);
  printf("MEMOP-L3-01: 0x%x\n",(ulong)uVar2);
  flag = 5;
  uVar2 = memop_memory_barrier(&flag);
  printf("MEMOP-L3-02: %d\n",(ulong)uVar2);
  if (lVar1 - ___stack_chk_guard != 0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(&__stack_chk_guard,0,lVar1 - ___stack_chk_guard);
  }
  return;
}



/* Function: main @ 00102898 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 001028bc */

int extern_function(int x)

{
  int x_local;
  
  return x * 3;
}



/* Function: _fini @ 001028dc */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 67 */
