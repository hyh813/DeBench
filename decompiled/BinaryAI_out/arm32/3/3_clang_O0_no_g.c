// Decompiled by BinaryAI
// SHA256: f8b1a2f181028fcb828a37d761c797f5caf96000e18437a2d470c7e7d619466f

// Function: _init @ 0x1057c
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x1059c
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x105a8
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x105b4
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::printf @ 0x105c0
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::memmove @ 0x105cc
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::free @ 0x105d8
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x105e4
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x105f0
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::realloc @ 0x105fc
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::perror @ 0x10608
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::bcopy @ 0x10614
void bcopy(void *__src,void *__dest,size_t __n)
{
  bcopy(__src,__dest,__n);
  return;
}

// Function: <EXTERNAL>::waitpid @ 0x10620
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::malloc @ 0x1062c
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::exit @ 0x10644
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::memset @ 0x10650
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::fork @ 0x1065c
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::abort @ 0x10668
void abort(void)
{
  abort();
}

// Function: _start @ 0x10680
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x106c4
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x106e8
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x1072c
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1077c
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

// Function: local_vars @ 0x107e8
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x1081c
undefined4 local_array(int param_1)
{
  int local_30;
  int aiStack_2c [11];
  for (local_30 = 0; local_30 < 10; local_30 = local_30 + 1) {
    aiStack_2c[local_30] = local_30 * param_1;
  }
  return aiStack_2c[5];
}

// Function: local_struct @ 0x10874
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x108a4
undefined4 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x108cc
int address_of_array(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x10900
undefined large_stack_frame(void)
{
  int local_814;
  undefined auStack_810 [2048];
  for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
    auStack_810[local_814] = (char)local_814;
  }
  return auStack_810[1024];
}

// Function: vla_stack @ 0x1095c
undefined4 vla_stack(int param_1)
{
  int iVar1;
  int local_28 [5];
  undefined4 local_14;
  if ((param_1 < 1) || (1000 < param_1)) {
    local_14 = 0xffffffff;
  }
  else {
    iVar1 = -0x28 - (param_1 * 4 + 7U & 0xfffffff8);
    for (local_28[1] = 0; local_28[1] < param_1; local_28[1] = local_28[1] + 1) {
      *(int *)((int)local_28 + local_28[1] * 4 + iVar1 + 0x28) = local_28[1] << 1;
    }
    local_14 = *(undefined4 *)
                ((int)local_28 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x28);
  }
  return local_14;
}

// Function: alloca_usage @ 0x10a40
undefined4 alloca_usage(int param_1)
{
  int iVar1;
  int local_20 [4];
  if (param_1 < 1) {
    local_20[3] = 0xffffffff;
  }
  else {
    iVar1 = -0x20 - (param_1 * 4 + 7U & 0xfffffff8);
    for (local_20[0] = 0; local_20[0] < param_1; local_20[0] = local_20[0] + 1) {
      *(int *)((int)local_20 + local_20[0] * 4 + iVar1 + 0x20) = local_20[0] * 3;
    }
    local_20[3] = *(undefined4 *)
                   ((int)local_20 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU) + iVar1 + 0x20
                   );
  }
  return local_20[3];
}

// Function: stack_alias @ 0x10b00
undefined4 stack_alias(void)
{
  undefined4 local_10;
  undefined4 local_4;
  if (&stack0x00000000 == (undefined *)0x10) {
    local_4 = 0xffffffff;
  }
  else {
    local_4 = local_10;
  }
  return local_4;
}

// Function: test_stack_memory @ 0x10b78
void test_stack_memory(void)
{
  undefined4 uVar1;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined auStack_c [4];
  printf(&DAT_000135b4);
  uVar1 = local_vars();
  printf("MEM-L1-01 (local_vars): %d\n",uVar1);
  uVar1 = local_array();
  printf("MEM-L1-02 (local_array): %d\n",uVar1);
  uVar1 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n",uVar1);
  uVar1 = address_of_local(auStack_c);
  printf("MEM-L1-04 (address_of_local): %d\n",uVar1);
  memset(&local_34,0,0x28);
  local_34 = 1;
  local_30 = 2;
  local_2c = 3;
  uVar1 = address_of_array(&local_34);
  printf("MEM-L1-05 (address_of_array): %d\n",uVar1);
  uVar1 = large_stack_frame();
  printf("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
  uVar1 = vla_stack();
  printf("MEM-L2-02 (vla_stack): %d\n",uVar1);
  uVar1 = alloca_usage(10);
  printf("MEM-L2-03 (alloca_usage): %d\n",uVar1);
  local_38 = 0;
  uVar1 = stack_alias(&local_38);
  printf("MEM-L2-04 (stack_alias): %d\n",uVar1);
  return;
}

// Function: heap_basic @ 0x10ce0
undefined4 heap_basic(int param_1)
{
  void *__ptr;
  int local_18;
  undefined4 local_c;
  __ptr = malloc(param_1 << 2);
  if (__ptr == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)((int)__ptr + local_18 * 4) = local_18 << 1;
    }
    local_c = *(undefined4 *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
    free(__ptr);
  }
  return local_c;
}

// Function: heap_calloc @ 0x10da0
int heap_calloc(size_t param_1)
{
  void *__ptr;
  int local_1c;
  int local_18;
  int local_c;
  __ptr = calloc(param_1,4);
  if (__ptr == (void *)0x0) {
    local_c = -1;
  }
  else {
    local_18 = 0;
    for (local_1c = 0; local_1c < (int)param_1; local_1c = local_1c + 1) {
      local_18 = local_18 + *(int *)((int)__ptr + local_1c * 4);
    }
    free(__ptr);
    local_c = local_18;
  }
  return local_c;
}

// Function: heap_realloc @ 0x10e50
undefined4 heap_realloc(void)
{
  void *__ptr;
  int iVar1;
  void *__ptr_00;
  undefined4 local_28;
  int local_20;
  int local_14;
  undefined4 local_c;
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
      *(int *)((int)__ptr + local_14 * 4) = local_14 + 1;
    }
    iVar1 = *(int *)((int)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      local_c = 0xfffffffe;
    }
    else {
      for (local_20 = 5; local_20 < 10; local_20 = local_20 + 1) {
        *(int *)((int)__ptr_00 + local_20 * 4) = local_20 * 10;
      }
      if (*(int *)((int)__ptr_00 + 8) == iVar1) {
        local_28 = *(undefined4 *)((int)__ptr_00 + 0x14);
      }
      else {
        local_28 = 0xfffffffd;
      }
      free(__ptr_00);
      local_c = local_28;
    }
  }
  return local_c;
}

// Function: heap_array @ 0x10fb0
undefined4 heap_array(int param_1)
{
  void *__ptr;
  int local_18;
  undefined4 local_c;
  __ptr = malloc(param_1 << 2);
  if (__ptr == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)((int)__ptr + local_18 * 4) = local_18 * 3;
    }
    local_c = *(undefined4 *)((int)__ptr + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
    free(__ptr);
  }
  return local_c;
}

// Function: heap_struct @ 0x11070
int heap_struct(int param_1)
{
  int *__ptr;
  int local_c;
  __ptr = (int *)malloc(8);
  if (__ptr == (int *)0x0) {
    local_c = -1;
  }
  else {
    *__ptr = param_1;
    __ptr[1] = param_1 << 1;
    local_c = *__ptr + __ptr[1];
    free(__ptr);
  }
  return local_c;
}

// Function: heap_nested @ 0x110fc
undefined4 heap_nested(void **param_1)
{
  void *pvVar1;
  undefined4 local_c;
  pvVar1 = malloc(8);
  *param_1 = pvVar1;
  if (*param_1 == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = 10;
    pvVar1 = malloc(8);
    *(void **)((int)*param_1 + 4) = pvVar1;
    if (*(int *)((int)*param_1 + 4) == 0) {
      free(*param_1);
      local_c = 0xfffffffe;
    }
    else {
      **(undefined4 **)((int)*param_1 + 4) = 0x14;
      *(undefined4 *)(*(int *)((int)*param_1 + 4) + 4) = 0;
      local_c = 0;
    }
  }
  return local_c;
}

// Function: linked_list_heap @ 0x111d0
int linked_list_heap(void)
{
  int *piVar1;
  int *piVar2;
  int *local_28;
  int local_24;
  int local_18;
  int *local_14;
  int *local_10;
  local_10 = (int *)0x0;
  local_14 = (int *)0x0;
  local_18 = 0;
  while( true ) {
    if (4 < local_18) {
      local_24 = 0;
      for (local_28 = local_10; local_28 != (int *)0x0; local_28 = (int *)local_28[1]) {
        local_24 = local_24 + *local_28;
      }
      while (local_10 != (int *)0x0) {
        piVar2 = (int *)local_10[1];
        free(local_10);
        local_10 = piVar2;
      }
      return local_24;
    }
    piVar2 = (int *)malloc(8);
    if (piVar2 == (int *)0x0) break;
    *piVar2 = local_18 * 10;
    piVar2[1] = 0;
    piVar1 = piVar2;
    if (local_10 != (int *)0x0) {
      local_14[1] = (int)piVar2;
      piVar1 = local_10;
    }
    local_10 = piVar1;
    local_18 = local_18 + 1;
    local_14 = piVar2;
  }
  while (local_10 != (int *)0x0) {
    piVar2 = (int *)local_10[1];
    free(local_10);
    local_10 = piVar2;
  }
  return -1;
}

// Function: create_tree_node @ 0x11364
undefined4 * create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)malloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return puVar1;
}

// Function: tree_heap_traversal @ 0x113c4
int tree_heap_traversal(void)
{
  int *__ptr;
  int iVar1;
  int local_c;
  __ptr = (int *)create_tree_node(10);
  if (__ptr == (int *)0x0) {
    local_c = -1;
  }
  else {
    iVar1 = create_tree_node(0x14);
    __ptr[1] = iVar1;
    iVar1 = create_tree_node(0x1e);
    __ptr[2] = iVar1;
    if ((__ptr[1] == 0) || (__ptr[2] == 0)) {
      if (__ptr[1] != 0) {
        free((void *)__ptr[1]);
      }
      if (__ptr[2] != 0) {
        free((void *)__ptr[2]);
      }
      free(__ptr);
      local_c = -2;
    }
    else {
      local_c = *__ptr + *(int *)__ptr[1] + *(int *)__ptr[2];
      free((void *)__ptr[1]);
      free((void *)__ptr[2]);
      free(__ptr);
    }
  }
  return local_c;
}

// Function: memory_leak @ 0x114fc
undefined4 memory_leak(int param_1)
{
  void *pvVar1;
  int local_18;
  undefined4 local_c;
  pvVar1 = malloc(param_1 << 2);
  if (pvVar1 == (void *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)((int)pvVar1 + local_18 * 4) = local_18;
    }
    local_c = *(undefined4 *)((int)pvVar1 + ((param_1 - (param_1 >> 0x1f)) * 2 & 0xfffffffdU));
  }
  return local_c;
}

// Function: dangling_pointer @ 0x115a8
undefined4 dangling_pointer(void)
{
  undefined4 *__ptr;
  undefined4 local_c;
  __ptr = (undefined4 *)malloc(4);
  if (__ptr == (undefined4 *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    *__ptr = 0x2a;
    printf("value before free: %d\n",*__ptr);
    free(__ptr);
    local_c = *__ptr;
  }
  return local_c;
}

// Function: double_free @ 0x11638
undefined4 double_free(undefined4 *param_1)
{
  undefined4 *__ptr;
  undefined4 local_c;
  if (param_1 == (undefined4 *)0x0) {
    __ptr = (undefined4 *)malloc(4);
    if (__ptr == (undefined4 *)0x0) {
      local_c = 0xffffffff;
    }
    else {
      *__ptr = 10;
      free(__ptr);
      free(__ptr);
      local_c = 0xfffffffe;
    }
  }
  else {
    local_c = *param_1;
  }
  return local_c;
}

// Function: heap_overflow @ 0x116c8
undefined4 heap_overflow(void)
{
  undefined4 *__ptr;
  int local_14;
  undefined4 local_c;
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    for (local_14 = 0; local_14 < 0xb; local_14 = local_14 + 1) {
      __ptr[local_14] = local_14 * 100;
    }
    local_c = *__ptr;
    free(__ptr);
  }
  return local_c;
}

// Function: test_heap_memory @ 0x11770
void test_heap_memory(void)
{
  undefined4 uVar1;
  uint local_18;
  undefined4 local_14;
  __pid_t local_10;
  void *local_c;
  printf(&DAT_000136fe);
  uVar1 = heap_basic();
  printf("HEAP-L2-01 (heap_basic): %d\n",uVar1);
  uVar1 = heap_calloc();
  printf("HEAP-L2-02 (heap_calloc): %d\n",uVar1);
  uVar1 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n",uVar1);
  uVar1 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",uVar1);
  uVar1 = heap_struct(5);
  printf("HEAP-L2-05 (heap_struct): %d\n",uVar1);
  local_c = (void *)0x0;
  uVar1 = heap_nested(&local_c);
  printf("HEAP-L2-06 (heap_nested): %d\n",uVar1);
  if (local_c != (void *)0x0) {
    free(*(void **)((int)local_c + 4));
    free(local_c);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
  uVar1 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
  uVar1 = memory_leak(5);
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar1);
  printf("HEAP-L3-04 (dangling_pointer): ");
  local_10 = fork();
  if (local_10 != 0) {
    if (local_10 < 1) {
      perror(&DAT_000138cd);
    }
    else {
      waitpid(local_10,(int *)&local_18,0);
      if ((local_18 & 0x7f) == 0) {
        printf(&DAT_00013867,local_18 >> 8 & 0xff);
      }
      else if (0 < (int)(((local_18 & 0x7f) + 1) * 0x1000000) >> 0x19) {
        printf(&DAT_0001388c,local_18 & 0x7f);
      }
    }
    return;
  }
  local_14 = dangling_pointer();
  printf(&DAT_00013857,local_14);
  exit(0);
}

// Function: global_var_access @ 0x119b0
int global_var_access(void)
{
  global_counter = global_counter + 1;
  return global_counter;
}

// Function: global_var_read @ 0x119e0
int global_var_read(void)
{
  return global_counter << 1;
}

// Function: global_array_access @ 0x119f4
undefined4 global_array_access(int param_1)
{
  undefined4 local_4;
  if ((param_1 < 0) || (9 < param_1)) {
    local_4 = 0xffffffff;
  }
  else {
    local_4 = *(undefined4 *)(&global_array + param_1 * 4);
  }
  return local_4;
}

// Function: static_local @ 0x11a50
int static_local(int param_1)
{
  if (param_1 == 0) {
    static_local_counter = static_local_counter + 1;
  }
  else {
    static_local_counter = 0;
  }
  return static_local_counter;
}

// Function: call_static_func @ 0x11ac4
int call_static_func(undefined4 param_1)
{
  int iVar1;
  iVar1 = static_helper(param_1);
  return iVar1 + 1;
}

// Function: static_helper @ 0x11aec
int static_helper(int param_1)
{
  return param_1 << 1;
}

// Function: access_extern_global @ 0x11b04
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x11b1c
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x11b34
int read_const_data(void)
{
  return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11b4c
undefined4 access_bss_var(void)
{
  return bss_var;
}

// Function: access_bss_buffer @ 0x11b5c
undefined access_bss_buffer(void)
{
  return bss_buffer[0];
}

// Function: global_struct_access @ 0x11b70
int global_struct_access(void)
{
  return (int)global_point + global_point._4_4_;
}

// Function: set_file_static @ 0x11b94
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x11bb8
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x11bc8
void set_global_callback(undefined4 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x11bec
undefined4 call_global_callback(undefined4 param_1)
{
  undefined4 local_c;
  if (global_func_ptr == (code *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    local_c = (*global_func_ptr)(param_1);
  }
  return local_c;
}

// Function: global_heap_store @ 0x11c50
undefined4 global_heap_store(undefined4 *param_1)
{
  undefined4 local_4;
  global_heap_ptr = param_1;
  if (param_1 == (undefined4 *)0x0) {
    local_4 = 0xffffffff;
  }
  else {
    local_4 = *param_1;
  }
  return local_4;
}

// Function: static_complex_init @ 0x11cb4
int static_complex_init(void)
{
  return complex_init._0_4_ + complex_init._8_4_ + complex_init._16_4_;
}

// Function: tls_access @ 0x11ce0
int tls_access(undefined4 param_1)
{
  int iVar1;
  undefined8 uVar2;
  uVar2 = __aeabi_read_tp(param_1,8);
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)((int)uVar2 + iVar1) = param_1;
  return *(int *)((int)uVar2 + iVar1) << 1;
}

// Function: init_order_test @ 0x11d18
void init_order_test(void)
{
  undefined4 local_c;
  local_c = 0x14;
  init_depends_on(&local_c);
  return;
}

// Function: init_depends_on @ 0x11d40
undefined4 init_depends_on(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    init_depends_on_static_depends = *param_1;
  }
  return init_depends_on_static_depends;
}

// Function: test_static_global @ 0x11d88
void test_static_global(void)
{
  undefined4 uVar1;
  undefined4 local_c;
  printf(&DAT_000138e3);
  uVar1 = global_var_access();
  printf("STM-L1-01 (global_var_access): %d\n",uVar1);
  uVar1 = global_var_read();
  printf("STM-L1-01 (global_var_read): %d\n",uVar1);
  uVar1 = global_array_access();
  printf("STM-L1-02 (global_array_access): %d\n",uVar1);
  static_local(1);
  uVar1 = static_local();
  printf("STM-L1-03 (static_local): %d\n",uVar1);
  uVar1 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",uVar1);
  uVar1 = call_static_func(5);
  printf("STM-L1-04 (call_static_func): %d\n",uVar1);
  uVar1 = access_extern_global();
  printf("STM-L2-01 (access_extern_global): %d\n",uVar1);
  uVar1 = call_extern_func();
  printf("STM-L2-02 (call_extern_func): %d\n",uVar1);
  uVar1 = read_const_data();
  printf("STM-L2-03 (read_const_data): %d\n",uVar1);
  uVar1 = access_bss_var();
  printf("STM-L2-04 (access_bss_var): %d\n",uVar1);
  uVar1 = access_bss_buffer();
  printf("STM-L2-04 (access_bss_buffer): %d\n",uVar1);
  uVar1 = global_struct_access();
  printf("STM-L2-05 (global_struct_access): %d\n",uVar1);
  set_file_static(0x32);
  uVar1 = get_file_static();
  printf("STM-L2-06 (file_static): %d\n",uVar1);
  set_global_callback(double_value);
  uVar1 = call_global_callback(5);
  printf("STM-L2-07 (global_func_ptr): %d\n",uVar1);
  local_c = 100;
  uVar1 = global_heap_store(&local_c);
  printf("STM-L2-08 (global_heap_store): %d\n",uVar1);
  uVar1 = static_complex_init();
  printf("STM-L2-09 (static_complex_init): %d\n",uVar1);
  uVar1 = tls_access(10);
  printf("STM-L3-01 (tls_access): %d\n",uVar1);
  uVar1 = init_order_test();
  printf("STM-L3-02 (init_order_test): %d\n",uVar1);
  return;
}

// Function: double_value @ 0x11fa8
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: memop_memset @ 0x11fc0
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
  uint local_c;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    local_c = 0xffffffff;
  }
  else {
    memset(param_1,param_3,param_2);
    local_c = (uint)*param_1;
  }
  return local_c;
}

// Function: memop_memcpy @ 0x12034
undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)
{
  undefined4 local_c;
  if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
    local_c = 0xffffffff;
  }
  else {
    memcpy(param_1,param_2,param_3);
    local_c = *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
  }
  return local_c;
}

// Function: memop_memmove @ 0x120c4
uint memop_memmove(void *param_1,uint param_2)
{
  uint local_c;
  if ((param_1 == (void *)0x0) || (param_2 < 2)) {
    local_c = 0xffffffff;
  }
  else {
    memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
    local_c = (uint)*(byte *)((int)param_1 + 1);
  }
  return local_c;
}

// Function: memop_memcmp @ 0x12138
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int local_20;
  int local_c;
  if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
    local_c = 0;
  }
  else {
    local_20 = memcmp(param_1,param_2,param_3);
    if (local_20 < 1) {
      local_20 = local_20 >> 0x1f;
    }
    else {
      local_20 = 1;
    }
    local_c = local_20;
  }
  return local_c;
}

// Function: memop_bzero @ 0x121e8
uint memop_bzero(byte *param_1,size_t param_2)
{
  uint local_c;
  if (param_1 == (byte *)0x0) {
    local_c = 0xffffffff;
  }
  else {
    memset(param_1,0,param_2);
    local_c = (uint)*param_1;
  }
  return local_c;
}

// Function: memop_bcopy @ 0x12248
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
  uint local_c;
  if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
    local_c = 0xffffffff;
  }
  else {
    bcopy(param_1,param_2,param_3);
    local_c = (uint)*param_2;
  }
  return local_c;
}

// Function: memop_unaligned_access @ 0x122cc
undefined4 memop_unaligned_access(int param_1)
{
  undefined4 local_4;
  if (param_1 == 0) {
    local_4 = 0xffffffff;
  }
  else {
    local_4 = *(undefined4 *)(param_1 + 1);
  }
  return local_4;
}

// Function: memop_memory_barrier @ 0x1232c
int memop_memory_barrier(int *param_1)
{
  int local_c;
  if (param_1 == (int *)0x0) {
    local_c = -1;
  }
  else {
    local_c = *param_1;
    __sync_synchronize();
    local_c = local_c + *param_1;
  }
  return local_c;
}

// Function: test_memory_op_functions @ 0x12390
void test_memory_op_functions(void)
{
  undefined4 uVar1;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined auStack_166 [10];
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined2 local_13c;
  undefined local_13a;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined auStack_110 [256];
  printf(&DAT_00013b46);
  local_124 = 10;
  uStack_120 = 0x14;
  uStack_11c = 0x1e;
  uStack_118 = 0x28;
  uStack_114 = 0x32;
  local_128 = 0;
  local_12c = 0;
  local_130 = 0;
  local_134 = 0;
  local_138 = 0;
  uVar1 = memop_memset(auStack_110,10,0x41);
  printf("MEMOP-L2-01: %d\n",uVar1);
  uVar1 = memop_memcpy(&local_138,&local_124,0x14);
  printf("MEMOP-L2-02: %d\n",uVar1);
  local_13a = 0;
  local_13c = 0x646c;
  local_140 = 0x726f576f;
  local_144 = 0x6c6c6548;
  uVar1 = memop_memmove(&local_144,10);
  printf("MEMOP-L2-03: %c\n",uVar1);
  local_14c = 2;
  local_148 = 3;
  local_150 = 1;
  local_158 = 2;
  local_154 = 4;
  local_15c = 1;
  uVar1 = memop_memcmp(&local_150,&local_15c,0xc);
  printf("MEMOP-L2-04: %d\n",uVar1);
  uVar1 = memop_bzero(auStack_166,10);
  printf("MEMOP-L2-05: %d\n",uVar1);
  local_16c = 0x4030201;
  local_170 = 0;
  uVar1 = memop_bcopy(&local_16c,&local_170,4);
  printf("MEMOP-L2-06: %d\n",uVar1);
  local_174 = 0x7060504;
  local_178 = 0x3020100;
  uVar1 = memop_unaligned_access(&local_178);
  printf("MEMOP-L3-01: 0x%x\n",uVar1);
  local_17c = 5;
  uVar1 = memop_memory_barrier(&local_17c);
  printf("MEMOP-L3-02: %d\n",uVar1);
  return;
}

// Function: main @ 0x125b4
undefined4 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: extern_function @ 0x125ec
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: __sync_fetch_and_add_4 @ 0x12604
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

// Function: __sync_fetch_and_sub_4 @ 0x1263c
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

// Function: __sync_fetch_and_or_4 @ 0x12674
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

// Function: __sync_fetch_and_and_4 @ 0x126ac
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

// Function: __sync_fetch_and_xor_4 @ 0x126e4
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

// Function: __sync_fetch_and_nand_4 @ 0x1271c
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

// Function: __sync_fetch_and_add_2 @ 0x12758
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

// Function: __sync_fetch_and_sub_2 @ 0x127b8
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

// Function: __sync_fetch_and_or_2 @ 0x12818
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

// Function: __sync_fetch_and_and_2 @ 0x12878
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

// Function: __sync_fetch_and_xor_2 @ 0x128d8
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

// Function: __sync_fetch_and_nand_2 @ 0x12938
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

// Function: __sync_fetch_and_add_1 @ 0x1299c
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

// Function: __sync_fetch_and_sub_1 @ 0x129f8
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

// Function: __sync_fetch_and_or_1 @ 0x12a54
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

// Function: __sync_fetch_and_and_1 @ 0x12ab0
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

// Function: __sync_fetch_and_xor_1 @ 0x12b0c
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

// Function: __sync_fetch_and_nand_1 @ 0x12b68
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

// Function: __sync_add_and_fetch_4 @ 0x12bc8
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

// Function: __sync_sub_and_fetch_4 @ 0x12c00
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

// Function: __sync_or_and_fetch_4 @ 0x12c38
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

// Function: __sync_and_and_fetch_4 @ 0x12c70
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

// Function: __sync_xor_and_fetch_4 @ 0x12ca8
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

// Function: __sync_nand_and_fetch_4 @ 0x12ce0
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

// Function: __sync_add_and_fetch_2 @ 0x12d1c
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

// Function: __sync_sub_and_fetch_2 @ 0x12d84
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

// Function: __sync_or_and_fetch_2 @ 0x12dec
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

// Function: __sync_and_and_fetch_2 @ 0x12e54
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

// Function: __sync_xor_and_fetch_2 @ 0x12ebc
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

// Function: __sync_nand_and_fetch_2 @ 0x12f24
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

// Function: __sync_add_and_fetch_1 @ 0x12f90
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

// Function: __sync_sub_and_fetch_1 @ 0x12ff4
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

// Function: __sync_or_and_fetch_1 @ 0x13058
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

// Function: __sync_and_and_fetch_1 @ 0x130bc
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

// Function: __sync_xor_and_fetch_1 @ 0x13120
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

// Function: __sync_nand_and_fetch_1 @ 0x13184
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

// Function: __sync_val_compare_and_swap_4 @ 0x131ec
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

// Function: __sync_val_compare_and_swap_2 @ 0x1323c
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

// Function: __sync_val_compare_and_swap_1 @ 0x132b4
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

// Function: __sync_bool_compare_and_swap_4 @ 0x13328
bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  int iVar1;
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x13354
bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x13370
bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x13398
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

// Function: __sync_lock_test_and_set_2 @ 0x133d0
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

// Function: __sync_lock_test_and_set_1 @ 0x13430
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

// Function: __sync_lock_release_8 @ 0x1348c
void __sync_lock_release_8(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// Function: __sync_lock_release_4 @ 0x134b0
void __sync_lock_release_4(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_2 @ 0x134d0
void __sync_lock_release_2(undefined2 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_1 @ 0x134f0
void __sync_lock_release_1(undefined *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: _fini @ 0x13518
void _fini(void)
{
  return;
}

