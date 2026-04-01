// Decompiled by BinaryAI
// SHA256: 8cba3650ad161d61e357383dcad1b3dbfb1bbb690eb190b1216ec64cf8fd06d0

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101120
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::free @ 0x101130
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::puts @ 0x101140
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x101150
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::printf @ 0x101160
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101170
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x101180
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x101190
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x1011a0
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1011b0
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::realloc @ 0x1011c0
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memmove @ 0x1011d0
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x1011e0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::perror @ 0x1011f0
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::exit @ 0x101200
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::fork @ 0x101210
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: _start @ 0x101220
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x101250
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101280
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1012c0
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

// Function: double_value @ 0x101309
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: local_vars @ 0x10131b
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x101342
undefined4 local_array(int param_1)
{
  long in_FS_OFFSET;
  int local_3c;
  int aiStack_38 [10];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    aiStack_38[local_3c] = local_3c * param_1;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return aiStack_38[5];
}

// Function: local_struct @ 0x10139e
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x1013c1
undefined4 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x1013e2
int address_of_array(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x10140e
int large_stack_frame(void)
{
  long in_FS_OFFSET;
  int local_81c;
  char acStack_818 [2056];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_81c = 0; local_81c < 0x800; local_81c = local_81c + 1) {
    acStack_818[local_81c] = (char)local_81c;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return (int)acStack_818[1024];
}

// Function: vla_stack @ 0x101482
undefined4 vla_stack(int param_1)
{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  long in_FS_OFFSET;
  undefined auStack_48 [12];
  int local_3c;
  int local_34;
  long local_30;
  undefined *local_28;
  long local_20;
  puVar4 = auStack_48;
  local_3c = param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 1) || (1000 < param_1)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_30 = (long)param_1 + -1;
    uVar3 = (((long)param_1 * 4 + 0xfU) / 0x10) * 0x10;
    for (; puVar4 != auStack_48 + -(uVar3 & 0xfffffffffffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
    lVar1 = -(ulong)((uint)uVar3 & 0xfff);
    local_28 = puVar4 + lVar1;
    if ((uVar3 & 0xfff) != 0) {
      *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1);
    }
    for (local_34 = 0; local_34 < local_3c; local_34 = local_34 + 1) {
      *(int *)(puVar4 + (long)local_34 * 4 + lVar1) = local_34 * 2;
    }
    uVar2 = *(undefined4 *)(puVar4 + (long)(local_3c / 2) * 4 + lVar1);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return uVar2;
}

// Function: alloca_usage @ 0x1015cd
undefined4 alloca_usage(int param_1)
{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long in_FS_OFFSET;
  undefined auStack_38 [12];
  int local_2c;
  int local_1c;
  ulong local_18;
  long local_10;
  puVar4 = auStack_38;
  puVar5 = auStack_38;
  local_2c = param_1;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = (((long)param_1 * 4 + 0x17U) / 0x10) * 0x10;
    for (; puVar4 != auStack_38 + -(uVar3 & 0xfffffffffffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
    lVar1 = -(ulong)((uint)uVar3 & 0xfff);
    puVar5 = puVar4 + lVar1;
    if ((uVar3 & 0xfff) != 0) {
      *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1) =
           *(undefined8 *)(puVar4 + ((ulong)((uint)uVar3 & 0xfff) - 8) + lVar1);
    }
    local_18 = (ulong)(puVar4 + lVar1 + 0xf) & 0xfffffffffffffff0;
    for (local_1c = 0; local_1c < local_2c; local_1c = local_1c + 1) {
      *(int *)((long)local_1c * 4 + local_18) = local_1c * 3;
    }
    uVar2 = *(undefined4 *)(local_18 + (long)(local_2c / 2) * 4);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    *(undefined8 *)(puVar5 + -8) = 0x1016f1;
    __stack_chk_fail();
  }
  return uVar2;
}

// Function: stack_alias @ 0x1016f3
undefined4 stack_alias(void)
{
  undefined4 uVar1;
  long in_FS_OFFSET;
  if (&stack0x00000000 == (undefined *)0x14) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x14;
  }
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
  __stack_chk_fail();
}

// Function: test_stack_memory @ 0x10176b
void test_stack_memory(void)
{
  uint uVar1;
  long in_FS_OFFSET;
  undefined local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103008);
  uVar1 = local_vars(5);
  printf("MEM-L1-01 (local_vars): %d\n",(ulong)uVar1);
  uVar1 = local_array(2);
  printf("MEM-L1-02 (local_array): %d\n",(ulong)uVar1);
  uVar1 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n",(ulong)uVar1);
  uVar1 = address_of_local(local_40);
  printf("MEM-L1-04 (address_of_local): %d\n",(ulong)uVar1);
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_38 = 0x200000001;
  local_30 = 3;
  uVar1 = address_of_array(&local_38);
  printf("MEM-L1-05 (address_of_array): %d\n",(ulong)uVar1);
  uVar1 = large_stack_frame();
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)uVar1);
  uVar1 = vla_stack(10);
  printf("MEM-L2-02 (vla_stack): %d\n",(ulong)uVar1);
  uVar1 = alloca_usage(10);
  printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)uVar1);
  local_3c = 0;
  uVar1 = stack_alias(&local_3c,&local_3c);
  printf("MEM-L2-04 (stack_alias): %d\n",(ulong)uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: heap_basic @ 0x10191d
undefined4 heap_basic(int param_1)
{
  undefined4 uVar1;
  void *__ptr;
  int local_18;
  __ptr = malloc((long)param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)((long)__ptr + (long)local_18 * 4) = local_18 * 2;
    }
    uVar1 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar1;
}

// Function: heap_calloc @ 0x1019b2
int heap_calloc(int param_1)
{
  void *__ptr;
  int local_18;
  int local_14;
  __ptr = calloc((long)param_1,4);
  if (__ptr == (void *)0x0) {
    local_18 = -1;
  }
  else {
    local_18 = 0;
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      local_18 = local_18 + *(int *)((long)__ptr + (long)local_14 * 4);
    }
    free(__ptr);
  }
  return local_18;
}

// Function: heap_realloc @ 0x101a2b
undefined4 heap_realloc(void)
{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  void *__ptr_00;
  int local_28;
  int local_24;
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_28 = 0; local_28 < 5; local_28 = local_28 + 1) {
      *(int *)((long)__ptr + (long)local_28 * 4) = local_28 + 1;
    }
    iVar1 = *(int *)((long)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      uVar2 = 0xfffffffe;
    }
    else {
      for (local_24 = 5; local_24 < 10; local_24 = local_24 + 1) {
        *(int *)((long)local_24 * 4 + (long)__ptr_00) = local_24 * 10;
      }
      if (iVar1 == *(int *)((long)__ptr_00 + 8)) {
        uVar2 = *(undefined4 *)((long)__ptr_00 + 0x14);
      }
      else {
        uVar2 = 0xfffffffd;
      }
      free(__ptr_00);
    }
  }
  return uVar2;
}

// Function: heap_array @ 0x101b2d
undefined4 heap_array(int param_1)
{
  undefined4 uVar1;
  void *__ptr;
  int local_18;
  __ptr = malloc((long)param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)((long)local_18 * 4 + (long)__ptr) = local_18 * 3;
    }
    uVar1 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar1;
}

// Function: heap_struct @ 0x101bc7
int heap_struct(int param_1)
{
  int iVar1;
  int *__ptr;
  __ptr = (int *)malloc(8);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    *__ptr = param_1;
    __ptr[1] = param_1 * 2;
    iVar1 = __ptr[1] + *__ptr;
    free(__ptr);
  }
  return iVar1;
}

// Function: heap_nested @ 0x101c2b
undefined8 heap_nested(void **param_1)
{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  pvVar1 = malloc(0x10);
  *param_1 = pvVar1;
  if (*param_1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = 10;
    pvVar1 = *param_1;
    pvVar3 = malloc(0x10);
    *(void **)((long)pvVar1 + 8) = pvVar3;
    if (*(long *)((long)*param_1 + 8) == 0) {
      free(*param_1);
      uVar2 = 0xfffffffe;
    }
    else {
      **(undefined4 **)((long)*param_1 + 8) = 0x14;
      *(undefined8 *)(*(long *)((long)*param_1 + 8) + 8) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

// Function: linked_list_heap @ 0x101cda
int linked_list_heap(void)
{
  int *piVar1;
  int *piVar2;
  int local_40;
  int local_3c;
  int *local_38;
  int *local_30;
  int *local_28;
  local_38 = (int *)0x0;
  local_30 = (int *)0x0;
  local_40 = 0;
  while( true ) {
    if (4 < local_40) {
      local_3c = 0;
      for (local_28 = local_38; local_28 != (int *)0x0; local_28 = *(int **)(local_28 + 2)) {
        local_3c = local_3c + *local_28;
      }
      while (local_38 != (int *)0x0) {
        piVar2 = *(int **)(local_38 + 2);
        free(local_38);
        local_38 = piVar2;
      }
      return local_3c;
    }
    piVar2 = (int *)malloc(0x10);
    if (piVar2 == (int *)0x0) break;
    *piVar2 = local_40 * 10;
    *(undefined8 *)(piVar2 + 2) = 0;
    piVar1 = piVar2;
    if (local_38 != (int *)0x0) {
      *(int **)(local_30 + 2) = piVar2;
      piVar1 = local_38;
    }
    local_38 = piVar1;
    local_40 = local_40 + 1;
    local_30 = piVar2;
  }
  while (local_38 != (int *)0x0) {
    piVar2 = *(int **)(local_38 + 2);
    free(local_38);
    local_38 = piVar2;
  }
  return -1;
}

// Function: create_tree_node @ 0x101e00
undefined4 * create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)malloc(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
  }
  return puVar1;
}

// Function: tree_heap_traversal @ 0x101e4b
int tree_heap_traversal(void)
{
  int iVar1;
  int *__ptr;
  undefined8 uVar2;
  __ptr = (int *)create_tree_node(10);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    uVar2 = create_tree_node(0x14);
    *(undefined8 *)(__ptr + 2) = uVar2;
    uVar2 = create_tree_node(0x1e);
    *(undefined8 *)(__ptr + 4) = uVar2;
    if ((*(long *)(__ptr + 2) == 0) || (*(long *)(__ptr + 4) == 0)) {
      if (*(long *)(__ptr + 2) != 0) {
        free(*(void **)(__ptr + 2));
      }
      if (*(long *)(__ptr + 4) != 0) {
        free(*(void **)(__ptr + 4));
      }
      free(__ptr);
      iVar1 = -2;
    }
    else {
      iVar1 = **(int **)(__ptr + 4) + *__ptr + **(int **)(__ptr + 2);
      free(*(void **)(__ptr + 2));
      free(*(void **)(__ptr + 4));
      free(__ptr);
    }
  }
  return iVar1;
}

// Function: memory_leak @ 0x101f53
undefined4 memory_leak(int param_1)
{
  undefined4 uVar1;
  void *pvVar2;
  int local_14;
  pvVar2 = malloc((long)param_1 << 2);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      *(int *)((long)local_14 * 4 + (long)pvVar2) = local_14;
    }
    uVar1 = *(undefined4 *)((long)pvVar2 + (long)(param_1 / 2) * 4);
  }
  return uVar1;
}

// Function: dangling_pointer @ 0x101fd4
uint dangling_pointer(void)
{
  uint uVar1;
  uint *__ptr;
  __ptr = (uint *)malloc(4);
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

// Function: double_free @ 0x102042
undefined4 double_free(undefined4 *param_1)
{
  undefined4 uVar1;
  undefined4 *__ptr;
  if (param_1 == (undefined4 *)0x0) {
    __ptr = (undefined4 *)malloc(4);
    if (__ptr == (undefined4 *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      *__ptr = 10;
      free(__ptr);
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// Function: heap_overflow @ 0x1020a6
undefined4 heap_overflow(void)
{
  undefined4 uVar1;
  undefined4 *__ptr;
  int local_18;
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
      __ptr[local_18] = local_18 * 100;
    }
    uVar1 = *__ptr;
    free(__ptr);
  }
  return uVar1;
}

// Function: test_heap_memory @ 0x102117
void test_heap_memory(void)
{
  uint uVar1;
  long in_FS_OFFSET;
  uint local_24;
  __pid_t local_20;
  uint local_1c;
  void *local_18;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103160);
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
  local_18 = (void *)0x0;
  uVar1 = heap_nested(&local_18);
  printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
  if (local_18 != (void *)0x0) {
    free(*(void **)((long)local_18 + 8));
    free(local_18);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
  uVar1 = tree_heap_traversal();
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",(ulong)uVar1);
  uVar1 = memory_leak(5);
  printf("HEAP-L3-03 (memory_leak): %d\n",(ulong)uVar1);
  printf("HEAP-L3-04 (dangling_pointer): ");
  local_20 = fork();
  if (local_20 == 0) {
    local_1c = dangling_pointer();
    printf(&DAT_001032c8,(ulong)local_1c);
    exit(0);
  }
  if (local_20 < 1) {
    perror(&DAT_00103341);
  }
  else {
    waitpid(local_20,(int *)&local_24,0);
    if ((local_24 & 0x7f) == 0) {
      printf(&DAT_001032d8,(ulong)((int)local_24 >> 8 & 0xff));
    }
    else if ('\0' < (char)(((byte)local_24 & 0x7f) + 1) >> 1) {
      printf(&DAT_00103300,(ulong)(local_24 & 0x7f));
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: global_var_access @ 0x10237c
int global_var_access(void)
{
  global_counter = global_counter + 1;
  return global_counter;
}

// Function: global_var_read @ 0x10239b
int global_var_read(void)
{
  return global_counter * 2;
}

// Function: global_array_access @ 0x1023ad
undefined4 global_array_access(int param_1)
{
  undefined4 uVar1;
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(global_array + (long)param_1 * 4);
  }
  return uVar1;
}

// Function: static_local @ 0x1023e4
int static_local(int param_1)
{
  if (param_1 == 0) {
    counter_1 = counter_1 + 1;
  }
  else {
    counter_1 = 0;
  }
  return counter_1;
}

// Function: static_helper @ 0x10241d
int static_helper(int param_1)
{
  return param_1 * 2;
}

// Function: call_static_func @ 0x10242f
int call_static_func(undefined4 param_1)
{
  int iVar1;
  iVar1 = static_helper(param_1);
  return iVar1 + 1;
}

// Function: access_extern_global @ 0x10244d
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x102460
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x102474
int read_const_data(void)
{
  return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x102496
undefined4 access_bss_var(void)
{
  return bss_var;
}

// Function: access_bss_buffer @ 0x1024a6
int access_bss_buffer(void)
{
  return (int)bss_buffer;
}

// Function: global_struct_access @ 0x1024ba
int global_struct_access(void)
{
  return DAT_0010604c + global_point;
}

// Function: set_file_static @ 0x1024d2
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x1024e9
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x1024f9
void set_global_callback(undefined8 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x102513
undefined8 call_global_callback(undefined4 param_1)
{
  undefined8 uVar1;
  if (global_func_ptr == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*global_func_ptr)(param_1);
  }
  return uVar1;
}

// Function: global_heap_store @ 0x102545
undefined4 global_heap_store(undefined4 *param_1)
{
  undefined4 uVar1;
  global_heap_ptr = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// Function: static_complex_init @ 0x10257a
int static_complex_init(void)
{
  return DAT_00106070 + complex_init + DAT_00106068;
}

// Function: tls_access @ 0x10259a
int tls_access(undefined4 param_1)
{
  long in_FS_OFFSET;
  *(undefined4 *)(in_FS_OFFSET + -4) = param_1;
  return *(int *)(in_FS_OFFSET + -4) * 2;
}

// Function: init_depends_on @ 0x1025bc
undefined4 init_depends_on(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    static_depends_0 = *param_1;
  }
  return static_depends_0;
}

// Function: init_order_test @ 0x1025e3
void init_order_test(void)
{
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0x14;
  init_depends_on(&local_14);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: test_static_global @ 0x102627
void test_static_global(void)
{
  uint uVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103360);
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
  local_14 = 100;
  uVar1 = global_heap_store(&local_14);
  printf("STM-L2-08 (global_heap_store): %d\n",(ulong)uVar1);
  uVar1 = static_complex_init();
  printf("STM-L2-09 (static_complex_init): %d\n",(ulong)uVar1);
  uVar1 = tls_access(10);
  printf("STM-L3-01 (tls_access): %d\n",(ulong)uVar1);
  uVar1 = init_order_test();
  printf("STM-L3-02 (init_order_test): %d\n",(ulong)uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: memop_memset @ 0x1028d4
ulong memop_memset(byte *param_1,size_t param_2,int param_3)
{
  ulong uVar1;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(param_1,param_3,param_2);
    uVar1 = (ulong)*param_1;
  }
  return uVar1;
}

// Function: memop_memcpy @ 0x102921
undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)
{
  undefined4 uVar1;
  if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memcpy(param_1,param_2,param_3);
    uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
  }
  return uVar1;
}

// Function: memop_memmove @ 0x102983
int memop_memmove(void *param_1,ulong param_2)
{
  int iVar1;
  if ((param_1 == (void *)0x0) || (param_2 < 2)) {
    iVar1 = -1;
  }
  else {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    iVar1 = (int)*(char *)((long)param_1 + 1);
  }
  return iVar1;
}

// Function: memop_memcmp @ 0x1029db
undefined8 memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  undefined8 uVar2;
  if (((param_1 == (void *)0x0) || (param_2 == (void *)0x0)) || (param_3 == 0)) {
    uVar2 = 0;
  }
  else {
    iVar1 = memcmp(param_1,param_2,param_3);
    if (iVar1 < 1) {
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// Function: memop_bzero @ 0x102a4a
ulong memop_bzero(byte *param_1,size_t param_2)
{
  ulong uVar1;
  if (param_1 == (byte *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(param_1,0,param_2);
    uVar1 = (ulong)*param_1;
  }
  return uVar1;
}

// Function: memop_bcopy @ 0x102a93
ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
  ulong uVar1;
  if (((param_1 == (void *)0x0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove(param_2,param_1,param_3);
    uVar1 = (ulong)*param_2;
  }
  return uVar1;
}

// Function: memop_unaligned_access @ 0x102aea
undefined4 memop_unaligned_access(long param_1)
{
  undefined4 uVar1;
  long in_FS_OFFSET;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 1);
  }
  if (*(long *)(in_FS_OFFSET + 0x28) != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return uVar1;
}

// Function: memop_memory_barrier @ 0x102b3d
int memop_memory_barrier(int *param_1)
{
  int iVar1;
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    LOCK();
    UNLOCK();
    iVar1 = *param_1 + *param_1;
  }
  return iVar1;
}

// Function: test_memory_op_functions @ 0x102b73
void test_memory_op_functions(void)
{
  uint uVar1;
  long in_FS_OFFSET;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_13d;
  undefined4 local_139;
  undefined8 local_135;
  undefined local_12d [10];
  undefined8 local_123;
  undefined2 local_11b;
  undefined local_119;
  undefined local_118 [264];
  long local_10;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103610);
  local_178 = 10;
  local_174 = 0x14;
  local_170 = 0x1e;
  local_16c = 0x28;
  local_168 = 0x32;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  uVar1 = memop_memset(local_118,10,0x41);
  printf("MEMOP-L2-01: %d\n",(ulong)uVar1);
  uVar1 = memop_memcpy(&local_158,&local_178,0x14);
  printf("MEMOP-L2-02: %d\n",(ulong)uVar1);
  local_123 = 0x726f576f6c6c6548;
  local_11b = 0x646c;
  local_119 = 0;
  uVar1 = memop_memmove(&local_123,10);
  printf("MEMOP-L2-03: %c\n",(ulong)uVar1);
  local_190 = 1;
  local_18c = 2;
  local_188 = 3;
  local_184 = 1;
  local_180 = 2;
  local_17c = 4;
  uVar1 = memop_memcmp(&local_190,&local_184,0xc);
  printf("MEMOP-L2-04: %d\n",(ulong)uVar1);
  uVar1 = memop_bzero(local_12d,10);
  printf("MEMOP-L2-05: %d\n",(ulong)uVar1);
  local_13d = 0x4030201;
  local_139 = 0;
  uVar1 = memop_bcopy(&local_13d,&local_139,4);
  printf("MEMOP-L2-06: %d\n",(ulong)uVar1);
  local_135 = 0x706050403020100;
  uVar1 = memop_unaligned_access(&local_135);
  printf("MEMOP-L3-01: 0x%x\n",(ulong)uVar1);
  local_194 = 5;
  uVar1 = memop_memory_barrier(&local_194);
  printf("MEMOP-L3-02: %d\n",(ulong)uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
    __stack_chk_fail();
  }
  return;
}

// Function: main @ 0x102dfe
undefined8 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: extern_function @ 0x102e35
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: _fini @ 0x102e4c
void _fini(void)
{
  return;
}

