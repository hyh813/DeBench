// Decompiled by BinaryAI
// SHA256: f69f080ece32f98187d177537404dc55ef9fc78f39a9395f2c9ad2df0cca91b7

// Function: _init @ 0x1009c0
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001009e0 @ 0x1009e0
void FUN_001009e0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x100a00
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memmove @ 0x100a10
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::exit @ 0x100a20
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100a30
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::perror @ 0x100a40
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100a50
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::fork @ 0x100a60
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::malloc @ 0x100a70
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memset @ 0x100a80
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::calloc @ 0x100a90
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::realloc @ 0x100aa0
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100ab0
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100ac0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100ad0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100ae0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x100af0
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x100b00
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::printf @ 0x100b10
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x100b20
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: _start @ 0x100b40
void _start(undefined8 param_1)
{
  undefined8 param_9;
  __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x100b74
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x100b90
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x100bc0
void register_tm_clones(void)
{
  return;
}

// Function: FUN_00100bfc @ 0x100bfc
void FUN_00100bfc(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: __do_global_dtors_aux @ 0x100c00
void __do_global_dtors_aux(void)
{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}

// Function: double_value @ 0x100c54
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: local_vars @ 0x100c6c
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x100ca0
undefined4 local_array(int param_1)
{
  int local_34;
  int aiStack_30 [12];
  for (local_34 = 0; local_34 < 10; local_34 = local_34 + 1) {
    aiStack_30[local_34] = local_34 * param_1;
  }
  return aiStack_30[5];
}

// Function: local_struct @ 0x100d30
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x100d60
undefined4 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x100d88
int address_of_array(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x100dbc
undefined large_stack_frame(void)
{
  int local_80c;
  undefined auStack_808 [2056];
  for (local_80c = 0; local_80c < 0x800; local_80c = local_80c + 1) {
    auStack_808[local_80c] = (char)local_80c;
  }
  return auStack_808[1024];
}

// Function: vla_stack @ 0x100e48
undefined4 vla_stack(int param_1)
{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long in_x4;
  ulong in_x5;
  long in_x6;
  undefined8 in_x7;
  undefined auStack_50 [16];
  int local_24;
  int local_1c;
  long local_8;
  puVar3 = auStack_50;
  local_8 = ___stack_chk_guard;
  if ((param_1 < 1) || (1000 < param_1)) {
    uVar4 = 0xffffffff;
  }
  else {
    in_x5 = (ulong)(long)param_1 >> 0x3b;
    in_x4 = (long)param_1 << 5;
    in_x6 = (long)param_1;
    in_x7 = 0;
    uVar1 = (long)param_1 * 4 + 0xf;
    for (; puVar3 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar3 = puVar3 + -0x10000) {
      *(undefined8 *)(puVar3 + -0xfc00) = 0;
    }
    lVar2 = -(uVar1 & 0xfff0);
    local_24 = param_1;
    *(undefined8 *)(puVar3 + lVar2) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar3 + lVar2 + 0x400) = 0;
    }
    for (local_1c = 0; local_1c < local_24; local_1c = local_1c + 1) {
      *(int *)(puVar3 + (long)local_1c * 4 + lVar2 + 0x10) = local_1c << 1;
    }
    uVar4 = *(undefined4 *)(puVar3 + (long)(local_24 / 2) * 4 + lVar2 + 0x10);
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar4,0,local_8 - ___stack_chk_guard,in_x4,in_x5,in_x6,in_x7
                    );
  }
  return uVar4;
}

// Function: alloca_usage @ 0x100fcc
undefined4 alloca_usage(int param_1)
{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined auStack_50 [16];
  int local_24;
  int local_14;
  long local_8;
  puVar3 = auStack_50;
  local_8 = ___stack_chk_guard;
  if (param_1 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = (long)param_1 * 4 + 0xf;
    for (; puVar3 != auStack_50 + -(uVar1 & 0xffffffffffff0000); puVar3 = puVar3 + -0x10000) {
      *(undefined8 *)(puVar3 + -0xfc00) = 0;
    }
    lVar2 = -(uVar1 & 0xfff0);
    local_24 = param_1;
    *(undefined8 *)(puVar3 + lVar2) = 0;
    if (0x3ff < (uVar1 & 0xfff0)) {
      *(undefined8 *)(puVar3 + lVar2 + 0x400) = 0;
    }
    for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
      *(int *)(puVar3 + (long)local_14 * 4 + lVar2 + 0x10) = local_14 * 3;
    }
    uVar4 = *(undefined4 *)(puVar3 + (long)(local_24 / 2) * 4 + lVar2 + 0x10);
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar4,0,local_8 - ___stack_chk_guard);
  }
  return uVar4;
}

// Function: stack_alias @ 0x101104
undefined4 stack_alias(void)
{
  undefined4 uVar1;
  if (&stack0x00000000 == (undefined *)0xc) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x14;
  }
  return uVar1;
}

// Function: test_stack_memory @ 0x1011a8
void test_stack_memory(void)
{
  int iVar1;
  ulong uVar2;
  undefined auStack_38 [4];
  undefined4 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_001028f8);
  uVar2 = local_vars(5);
  printf("MEM-L1-01 (local_vars): %d\n",uVar2 & 0xffffffff);
  uVar2 = local_array(2);
  printf("MEM-L1-02 (local_array): %d\n",uVar2 & 0xffffffff);
  uVar2 = local_struct(5);
  printf("MEM-L1-03 (local_struct): %d\n",uVar2 & 0xffffffff);
  uVar2 = address_of_local(auStack_38);
  printf("MEM-L1-04 (address_of_local): %d\n",uVar2 & 0xffffffff);
  local_20 = 0;
  uStack_18 = 0;
  local_10 = 0;
  local_30 = 0x200000001;
  local_28 = 3;
  uVar2 = address_of_array(&local_30);
  iVar1 = printf("MEM-L1-05 (address_of_array): %d\n",uVar2 & 0xffffffff);
  uVar2 = large_stack_frame(iVar1);
  printf("MEM-L2-01 (large_stack_frame): %d\n",uVar2 & 0xffffffff);
  uVar2 = vla_stack(10);
  printf("MEM-L2-02 (vla_stack): %d\n",uVar2 & 0xffffffff);
  uVar2 = alloca_usage(10);
  printf("MEM-L2-03 (alloca_usage): %d\n",uVar2 & 0xffffffff);
  local_34 = 0;
  uVar2 = stack_alias(&local_34,&local_34);
  printf("MEM-L2-04 (stack_alias): %d\n",uVar2 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: heap_basic @ 0x1012fc
undefined4 heap_basic(int param_1)
{
  undefined4 uVar1;
  void *__ptr;
  int local_10;
  __ptr = malloc((long)param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
      *(int *)((long)__ptr + (long)local_10 * 4) = local_10 << 1;
    }
    uVar1 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar1;
}

// Function: heap_calloc @ 0x1013a8
int heap_calloc(int param_1)
{
  void *__ptr;
  int local_10;
  int local_c;
  __ptr = calloc((long)param_1,4);
  if (__ptr == (void *)0x0) {
    local_10 = -1;
  }
  else {
    local_10 = 0;
    for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
      local_10 = local_10 + *(int *)((long)__ptr + (long)local_c * 4);
    }
    free(__ptr);
  }
  return local_10;
}

// Function: heap_realloc @ 0x101434
undefined4 heap_realloc(void)
{
  int iVar1;
  undefined4 uVar2;
  void *__ptr;
  void *__ptr_00;
  int local_20;
  int local_1c;
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_20 = 0; local_20 < 5; local_20 = local_20 + 1) {
      *(int *)((long)__ptr + (long)local_20 * 4) = local_20 + 1;
    }
    iVar1 = *(int *)((long)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      uVar2 = 0xfffffffe;
    }
    else {
      for (local_1c = 5; local_1c < 10; local_1c = local_1c + 1) {
        *(int *)((long)__ptr_00 + (long)local_1c * 4) = local_1c * 10;
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

// Function: heap_array @ 0x101564
undefined4 heap_array(int param_1)
{
  undefined4 uVar1;
  void *__ptr;
  int local_10;
  __ptr = malloc((long)param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_10 = 0; local_10 < param_1; local_10 = local_10 + 1) {
      *(int *)((long)__ptr + (long)local_10 * 4) = local_10 * 3;
    }
    uVar1 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar1;
}

// Function: heap_struct @ 0x101618
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
    __ptr[1] = param_1 << 1;
    iVar1 = *__ptr + __ptr[1];
    free(__ptr);
  }
  return iVar1;
}

// Function: heap_nested @ 0x10168c
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
    pvVar3 = *param_1;
    pvVar1 = malloc(0x10);
    *(void **)((long)pvVar3 + 8) = pvVar1;
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

// Function: linked_list_heap @ 0x101748
int linked_list_heap(void)
{
  int *piVar1;
  int *piVar2;
  int local_38;
  int local_34;
  int *local_30;
  int *local_28;
  int *local_20;
  local_30 = (int *)0x0;
  local_28 = (int *)0x0;
  local_38 = 0;
  while( true ) {
    if (4 < local_38) {
      local_34 = 0;
      for (local_20 = local_30; local_20 != (int *)0x0; local_20 = *(int **)(local_20 + 2)) {
        local_34 = local_34 + *local_20;
      }
      while (local_30 != (int *)0x0) {
        piVar2 = *(int **)(local_30 + 2);
        free(local_30);
        local_30 = piVar2;
      }
      return local_34;
    }
    piVar2 = (int *)malloc(0x10);
    if (piVar2 == (int *)0x0) break;
    *piVar2 = local_38 * 10;
    *(undefined8 *)(piVar2 + 2) = 0;
    piVar1 = piVar2;
    if (local_30 != (int *)0x0) {
      *(int **)(local_28 + 2) = piVar2;
      piVar1 = local_30;
    }
    local_30 = piVar1;
    local_38 = local_38 + 1;
    local_28 = piVar2;
  }
  while (local_30 != (int *)0x0) {
    piVar2 = *(int **)(local_30 + 2);
    free(local_30);
    local_30 = piVar2;
  }
  return -1;
}

// Function: create_tree_node @ 0x101894
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

// Function: tree_heap_traversal @ 0x1018e0
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
      iVar1 = *__ptr + **(int **)(__ptr + 2) + **(int **)(__ptr + 4);
      free(*(void **)(__ptr + 2));
      free(*(void **)(__ptr + 4));
      free(__ptr);
    }
  }
  return iVar1;
}

// Function: memory_leak @ 0x1019f0
undefined4 memory_leak(int param_1)
{
  undefined4 uVar1;
  void *pvVar2;
  int local_c;
  pvVar2 = malloc((long)param_1 << 2);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
      *(int *)((long)pvVar2 + (long)local_c * 4) = local_c;
    }
    uVar1 = *(undefined4 *)((long)pvVar2 + (long)(param_1 / 2) * 4);
  }
  return uVar1;
}

// Function: dangling_pointer @ 0x101a88
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

// Function: double_free @ 0x101af8
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

// Function: heap_overflow @ 0x101b64
undefined4 heap_overflow(void)
{
  undefined4 uVar1;
  undefined4 *__ptr;
  int local_10;
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (local_10 = 0; local_10 < 0xb; local_10 = local_10 + 1) {
      __ptr[local_10] = local_10 * 100;
    }
    uVar1 = *__ptr;
    free(__ptr);
  }
  return uVar1;
}

// Function: test_heap_memory @ 0x101bec
void test_heap_memory(void)
{
  int iVar1;
  ulong uVar2;
  uint local_1c;
  __pid_t local_18;
  uint local_14;
  void *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102a68);
  uVar2 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n",uVar2 & 0xffffffff);
  uVar2 = heap_calloc(5);
  iVar1 = printf("HEAP-L2-02 (heap_calloc): %d\n",uVar2 & 0xffffffff);
  uVar2 = heap_realloc(iVar1);
  printf("HEAP-L2-03 (heap_realloc): %d\n",uVar2 & 0xffffffff);
  uVar2 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",uVar2 & 0xffffffff);
  uVar2 = heap_struct(5);
  printf("HEAP-L2-05 (heap_struct): %d\n",uVar2 & 0xffffffff);
  local_10 = (void *)0x0;
  uVar2 = heap_nested(&local_10);
  printf("HEAP-L2-06 (heap_nested): %d\n",uVar2 & 0xffffffff);
  if (local_10 != (void *)0x0) {
    free(*(void **)((long)local_10 + 8));
    free(local_10);
  }
  uVar2 = linked_list_heap();
  iVar1 = printf("HEAP-L3-01 (linked_list_heap): %d\n",uVar2 & 0xffffffff);
  uVar2 = tree_heap_traversal(iVar1);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2 & 0xffffffff);
  uVar2 = memory_leak(5);
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar2 & 0xffffffff);
  printf("HEAP-L3-04 (dangling_pointer): ");
  local_18 = fork();
  if (local_18 == 0) {
    local_14 = dangling_pointer();
    printf(&DAT_00102bd8,(ulong)local_14);
    exit(0);
  }
  if (local_18 < 1) {
    perror(&DAT_00102c58);
  }
  else {
    waitpid(local_18,(int *)&local_1c,0);
    if ((local_1c & 0x7f) == 0) {
      printf(&DAT_00102be8,(ulong)((int)local_1c >> 8 & 0xff));
    }
    else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
      printf(&DAT_00102c10,(ulong)(local_1c & 0x7f));
    }
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: global_var_access @ 0x101e14
int global_var_access(void)
{
  global_counter = global_counter + 1;
  return global_counter;
}

// Function: global_var_read @ 0x101e40
int global_var_read(void)
{
  return global_counter << 1;
}

// Function: global_array_access @ 0x101e54
undefined4 global_array_access(int param_1)
{
  undefined4 uVar1;
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(&global_array + (long)param_1 * 4);
  }
  return uVar1;
}

// Function: static_local @ 0x101e94
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

// Function: static_helper @ 0x101eec
int static_helper(int param_1)
{
  return param_1 << 1;
}

// Function: call_static_func @ 0x101f04
int call_static_func(undefined4 param_1)
{
  int iVar1;
  iVar1 = static_helper(param_1);
  return iVar1 + 1;
}

// Function: access_extern_global @ 0x101f24
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101f38
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x101f50
int read_const_data(void)
{
  return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101f74
undefined4 access_bss_var(void)
{
  return bss_var;
}

// Function: access_bss_buffer @ 0x101f84
undefined access_bss_buffer(void)
{
  return bss_buffer;
}

// Function: global_struct_access @ 0x101f94
int global_struct_access(void)
{
  return global_point + DAT_0011403c;
}

// Function: set_file_static @ 0x101fb4
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x101fd8
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x101fe8
void set_global_callback(undefined8 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x10200c
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

// Function: global_heap_store @ 0x102050
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

// Function: static_complex_init @ 0x10209c
int static_complex_init(void)
{
  return complex_init + DAT_00114050 + DAT_00114058;
}

// Function: tls_access @ 0x1020cc
int tls_access(undefined4 param_1)
{
  long lVar1;
  lVar1 = tpidr_el0;
  *(undefined4 *)(lVar1 + 0x10) = param_1;
  lVar1 = tpidr_el0;
  return *(int *)(lVar1 + 0x10) << 1;
}

// Function: init_depends_on @ 0x102104
undefined4 init_depends_on(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    static_depends_0 = *param_1;
  }
  return static_depends_0;
}

// Function: init_order_test @ 0x102140
undefined4 init_order_test(void)
{
  undefined4 uVar1;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  local_c = 0x14;
  uVar1 = init_depends_on(&local_c,0);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,uVar1,0,local_8 - ___stack_chk_guard);
  }
  return uVar1;
}

// Function: test_static_global @ 0x10219c
void test_static_global(void)
{
  int iVar1;
  ulong uVar2;
  undefined4 local_c;
  long local_8;
  local_8 = ___stack_chk_guard;
  iVar1 = puts(&DAT_00102c78);
  uVar2 = global_var_access(iVar1);
  iVar1 = printf("STM-L1-01 (global_var_access): %d\n",uVar2 & 0xffffffff);
  uVar2 = global_var_read(iVar1);
  printf("STM-L1-01 (global_var_read): %d\n",uVar2 & 0xffffffff);
  uVar2 = global_array_access(5);
  printf("STM-L1-02 (global_array_access): %d\n",uVar2 & 0xffffffff);
  static_local(1);
  uVar2 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
  uVar2 = static_local(0);
  printf("STM-L1-03 (static_local): %d\n",uVar2 & 0xffffffff);
  uVar2 = call_static_func(5);
  iVar1 = printf("STM-L1-04 (call_static_func): %d\n",uVar2 & 0xffffffff);
  uVar2 = access_extern_global(iVar1);
  iVar1 = printf("STM-L2-01 (access_extern_global): %d\n",uVar2 & 0xffffffff);
  uVar2 = call_extern_func(iVar1);
  iVar1 = printf("STM-L2-02 (call_extern_func): %d\n",uVar2 & 0xffffffff);
  uVar2 = read_const_data(iVar1);
  iVar1 = printf("STM-L2-03 (read_const_data): %d\n",uVar2 & 0xffffffff);
  uVar2 = access_bss_var(iVar1);
  iVar1 = printf("STM-L2-04 (access_bss_var): %d\n",uVar2 & 0xffffffff);
  uVar2 = access_bss_buffer(iVar1);
  iVar1 = printf("STM-L2-04 (access_bss_buffer): %d\n",uVar2 & 0xffffffff);
  uVar2 = global_struct_access(iVar1);
  printf("STM-L2-05 (global_struct_access): %d\n",uVar2 & 0xffffffff);
  set_file_static(0x32);
  uVar2 = get_file_static();
  printf("STM-L2-06 (file_static): %d\n",uVar2 & 0xffffffff);
  set_global_callback(double_value);
  uVar2 = call_global_callback(5);
  printf("STM-L2-07 (global_func_ptr): %d\n",uVar2 & 0xffffffff);
  local_c = 100;
  uVar2 = global_heap_store(&local_c);
  iVar1 = printf("STM-L2-08 (global_heap_store): %d\n",uVar2 & 0xffffffff);
  uVar2 = static_complex_init(iVar1);
  printf("STM-L2-09 (static_complex_init): %d\n",uVar2 & 0xffffffff);
  uVar2 = tls_access(10);
  iVar1 = printf("STM-L3-01 (tls_access): %d\n",uVar2 & 0xffffffff);
  uVar2 = init_order_test(iVar1);
  printf("STM-L3-02 (init_order_test): %d\n",uVar2 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: memop_memset @ 0x102398
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

// Function: memop_memcpy @ 0x1023ec
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

// Function: memop_memmove @ 0x10245c
ulong memop_memmove(void *param_1,ulong param_2)
{
  ulong uVar1;
  if ((param_1 == (void *)0x0) || (param_2 < 2)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    uVar1 = (ulong)*(byte *)((long)param_1 + 1);
  }
  return uVar1;
}

// Function: memop_memcmp @ 0x1024c0
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

// Function: memop_bzero @ 0x102548
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

// Function: memop_bcopy @ 0x102598
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

// Function: memop_unaligned_access @ 0x1025f8
undefined4 memop_unaligned_access(long param_1)
{
  undefined4 uVar1;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 1);
  }
  return uVar1;
}

// Function: memop_memory_barrier @ 0x102670
int memop_memory_barrier(int *param_1)
{
  int iVar1;
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    DataMemoryBarrier(2,3);
    iVar1 = *param_1 + *param_1;
  }
  return iVar1;
}

// Function: test_memory_op_functions @ 0x1026b4
void test_memory_op_functions(void)
{
  ulong uVar1;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined4 local_140 [2];
  undefined4 local_138 [2];
  undefined8 local_130;
  undefined auStack_128 [16];
  undefined7 local_118;
  undefined4 uStack_111;
  undefined auStack_108 [256];
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102f28);
  local_170 = 0x140000000a;
  uStack_168 = 0x280000001e;
  local_160 = 0x32;
  local_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uVar1 = memop_memset(auStack_108,10,0x41);
  printf("MEMOP-L2-01: %d\n",uVar1 & 0xffffffff);
  uVar1 = memop_memcpy(&local_158,&local_170,0x14);
  printf("MEMOP-L2-02: %d\n",uVar1 & 0xffffffff);
  local_118 = 0x6f576f6c6c6548;
  uStack_111._0_1_ = 'r';
  uStack_111._1_1_ = 'l';
  uStack_111._2_1_ = 'd';
  uStack_111._3_1_ = '\0';
  uVar1 = memop_memmove(&local_118,10);
  printf("MEMOP-L2-03: %c\n",uVar1 & 0xffffffff);
  local_190 = 0x200000001;
  local_188 = 3;
  local_180 = 0x200000001;
  local_178 = 4;
  uVar1 = memop_memcmp(&local_190,&local_180,0xc);
  printf("MEMOP-L2-04: %d\n",uVar1 & 0xffffffff);
  uVar1 = memop_bzero(auStack_128,10);
  printf("MEMOP-L2-05: %d\n",uVar1 & 0xffffffff);
  local_140[0] = 0x4030201;
  local_138[0] = 0;
  uVar1 = memop_bcopy(local_140,local_138,4);
  printf("MEMOP-L2-06: %d\n",uVar1 & 0xffffffff);
  local_130 = 0x706050403020100;
  uVar1 = memop_unaligned_access(&local_130);
  printf("MEMOP-L3-01: 0x%x\n",uVar1 & 0xffffffff);
  local_194 = 5;
  uVar1 = memop_memory_barrier(&local_194);
  printf("MEMOP-L3-02: %d\n",uVar1 & 0xffffffff);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: main @ 0x102898
undefined8 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: extern_function @ 0x1028bc
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: _fini @ 0x1028dc
void _fini(void)
{
  return;
}

