// Decompiled by BinaryAI
// SHA256: e24d0f4cf50be08b854c27a41772d5073e449fcb90adec53089a01c22ab6bc04

// Function: _init @ 0x100990
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}

// Function: FUN_001009b0 @ 0x1009b0
void FUN_001009b0(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x1009d0
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memmove @ 0x1009e0
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::exit @ 0x1009f0
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100a00
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::perror @ 0x100a10
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100a20
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: <EXTERNAL>::fork @ 0x100a30
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::malloc @ 0x100a40
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x100a50
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::memset @ 0x100a60
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::calloc @ 0x100a70
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::realloc @ 0x100a80
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x100a90
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100aa0
void __gmon_start__(void)
{
  __gmon_start__();
  return;
}

// Function: <EXTERNAL>::abort @ 0x100ab0
void abort(void)
{
  abort();
}

// Function: <EXTERNAL>::puts @ 0x100ac0
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x100ad0
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::free @ 0x100ae0
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::waitpid @ 0x100af0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: main @ 0x100b00
undefined8 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
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

// Function: local_vars @ 0x100c5c
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x100c68
void local_array(int param_1)
{
  long lVar1;
  int iVar2;
  int local_30 [12];
  iVar2 = 0;
  lVar1 = 0;
  do {
    local_30[lVar1] = iVar2;
    lVar1 = lVar1 + 1;
    iVar2 = iVar2 + param_1;
  } while (lVar1 != 10);
  return;
}

// Function: local_struct @ 0x100ccc
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x100cd4
void address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return;
}

// Function: address_of_array @ 0x100ce4
int address_of_array(int *param_1)
{
  return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100cf0
void large_stack_frame(void)
{
  long lVar1;
  undefined auStack_808 [2056];
  lVar1 = 0;
  do {
    auStack_808[lVar1] = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  return;
}

// Function: vla_stack @ 0x100d58
void vla_stack(ulong param_1)
{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined auStack_30 [16];
  long local_8;
  puVar2 = auStack_30;
  local_8 = ___stack_chk_guard;
  iVar3 = (int)param_1;
  if (iVar3 - 1U < 1000) {
    uVar5 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
    for (; puVar2 != auStack_30 + -(uVar5 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
      *(undefined8 *)(puVar2 + -0xfc00) = 0;
    }
    uVar5 = uVar5 & 0xfff0;
    lVar1 = -uVar5;
    *(undefined8 *)(puVar2 + lVar1) = 0;
    if (0x3ff < uVar5) {
      *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
    }
    lVar6 = 0;
    do {
      *(int *)(puVar2 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 << 1;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar3);
    uVar4 = *(undefined4 *)(puVar2 + (long)(iVar3 >> 1) * 4 + lVar1 + 0x10);
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar4,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: alloca_usage @ 0x100e1c
void alloca_usage(ulong param_1)
{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined auStack_30 [16];
  long local_8;
  puVar2 = auStack_30;
  local_8 = ___stack_chk_guard;
  iVar3 = (int)param_1;
  if (iVar3 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar5 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
    for (; puVar2 != auStack_30 + -(uVar5 & 0xffffffffffff0000); puVar2 = puVar2 + -0x10000) {
      *(undefined8 *)(puVar2 + -0xfc00) = 0;
    }
    uVar5 = uVar5 & 0xfff0;
    lVar1 = -uVar5;
    *(undefined8 *)(puVar2 + lVar1) = 0;
    if (0x3ff < uVar5) {
      *(undefined8 *)(puVar2 + lVar1 + 0x400) = 0;
    }
    lVar6 = 0;
    do {
      *(int *)(puVar2 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 * 3;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < iVar3);
    uVar4 = *(undefined4 *)(puVar2 + (long)(iVar3 >> 1) * 4 + lVar1 + 0x10);
  }
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(uVar4,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: stack_alias @ 0x100edc
undefined8 stack_alias(void)
{
  return 0x14;
}

// Function: test_stack_memory @ 0x100ee4
void test_stack_memory(void)
{
  undefined4 uVar1;
  puts(&DAT_00101d98);
  __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  uVar1 = local_array(2);
  __printf_chk(1,"MEM-L1-02 (local_array): %d\n",uVar1);
  __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
  uVar1 = large_stack_frame();
  __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
  uVar1 = vla_stack(10);
  __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",uVar1);
  uVar1 = alloca_usage(10);
  __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}

// Function: heap_basic @ 0x100fcc
undefined4 heap_basic(ulong param_1)
{
  void *__ptr;
  long lVar1;
  undefined4 uVar2;
  __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (lVar1 = 0; (int)lVar1 < (int)param_1; lVar1 = lVar1 + 1) {
      *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 << 1;
    }
    uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}

// Function: heap_calloc @ 0x10102c
int heap_calloc(int param_1)
{
  void *__ptr;
  long lVar1;
  int iVar2;
  __ptr = calloc((long)param_1,4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
      iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
    }
    free(__ptr);
  }
  return iVar2;
}

// Function: heap_realloc @ 0x101088
undefined4 heap_realloc(void)
{
  undefined8 *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  __ptr = (undefined8 *)malloc(0x14);
  if (__ptr == (undefined8 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *__ptr = 0x200000001;
    __ptr[1] = 0x400000003;
    *(undefined4 *)(__ptr + 2) = 5;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      uVar1 = 0xfffffffe;
      free(__ptr);
    }
    else {
      uVar1 = 0x32;
      if (*(int *)((long)__ptr_00 + 8) != 3) {
        uVar1 = 0xfffffffd;
      }
      free(__ptr_00);
    }
  }
  return uVar1;
}

// Function: heap_array @ 0x101110
undefined4 heap_array(ulong param_1)
{
  void *__ptr;
  long lVar1;
  undefined4 uVar2;
  __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (lVar1 = 0; (int)lVar1 < (int)param_1; lVar1 = lVar1 + 1) {
      *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 3;
    }
    uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}

// Function: heap_struct @ 0x101170
int heap_struct(int param_1)
{
  void *__ptr;
  __ptr = malloc(8);
  if (__ptr == (void *)0x0) {
    param_1 = -1;
  }
  else {
    param_1 = param_1 * 3;
    free(__ptr);
  }
  return param_1;
}

// Function: heap_nested @ 0x1011ac
undefined8 heap_nested(undefined8 *param_1)
{
  undefined4 *__ptr;
  undefined4 *puVar1;
  undefined8 uVar2;
  __ptr = (undefined4 *)malloc(0x10);
  *param_1 = __ptr;
  if (__ptr == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *__ptr = 10;
    puVar1 = (undefined4 *)malloc(0x10);
    *(undefined4 **)(__ptr + 2) = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      free(__ptr);
      uVar2 = 0xfffffffe;
    }
    else {
      *puVar1 = 0x14;
      *(undefined8 *)(puVar1 + 2) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

// Function: linked_list_heap @ 0x10121c
int linked_list_heap(void)
{
  int iVar1;
  int *piVar2;
  int *__ptr;
  int *__ptr_00;
  int iVar3;
  int *piVar4;
  iVar3 = 0;
  piVar4 = (int *)0x0;
  __ptr = (int *)0x0;
  do {
    piVar2 = (int *)malloc(0x10);
    if (piVar2 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
        piVar4 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar4;
      }
      return -1;
    }
    *piVar2 = iVar3;
    *(undefined8 *)(piVar2 + 2) = 0;
    __ptr_00 = piVar2;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar4 + 2) = piVar2;
      __ptr_00 = __ptr;
    }
    iVar3 = iVar3 + 10;
    piVar4 = piVar2;
    __ptr = __ptr_00;
  } while (iVar3 != 0x32);
  iVar3 = 0;
  piVar4 = __ptr_00;
  do {
    iVar1 = *piVar4;
    piVar4 = *(int **)(piVar4 + 2);
    iVar3 = iVar3 + iVar1;
  } while (piVar4 != (int *)0x0);
  do {
    piVar4 = *(int **)(__ptr_00 + 2);
    free(__ptr_00);
    __ptr_00 = piVar4;
  } while (piVar4 != (int *)0x0);
  return iVar3;
}

// Function: create_tree_node @ 0x1012c8
void create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)malloc(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
  }
  return;
}

// Function: tree_heap_traversal @ 0x1012f8
int tree_heap_traversal(void)
{
  int iVar1;
  int iVar2;
  int *__ptr;
  undefined8 uVar3;
  int *piVar4;
  int *__ptr_00;
  int iVar5;
  __ptr = (int *)create_tree_node(10);
  if (__ptr == (int *)0x0) {
    iVar5 = -1;
  }
  else {
    uVar3 = create_tree_node(0x14);
    *(undefined8 *)(__ptr + 2) = uVar3;
    piVar4 = (int *)create_tree_node(0x1e);
    __ptr_00 = *(int **)(__ptr + 2);
    *(int **)(__ptr + 4) = piVar4;
    if (__ptr_00 != (int *)0x0) {
      if (piVar4 != (int *)0x0) {
        iVar5 = *__ptr_00;
        iVar1 = *piVar4;
        iVar2 = *__ptr;
        free(__ptr_00);
        free(*(void **)(__ptr + 4));
        free(__ptr);
        return iVar2 + iVar5 + iVar1;
      }
      free(__ptr_00);
    }
    if (*(void **)(__ptr + 4) != (void *)0x0) {
      free(*(void **)(__ptr + 4));
    }
    iVar5 = -2;
    free(__ptr);
  }
  return iVar5;
}

// Function: memory_leak @ 0x10139c
undefined4 memory_leak(ulong param_1)
{
  undefined4 uVar1;
  void *pvVar2;
  long lVar3;
  pvVar2 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (lVar3 = 0; (int)lVar3 < (int)param_1; lVar3 = lVar3 + 1) {
      *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
    }
    uVar1 = *(undefined4 *)((long)pvVar2 + (long)((int)param_1 / 2) * 4);
  }
  return uVar1;
}

// Function: dangling_pointer @ 0x1013f0
undefined4 dangling_pointer(void)
{
  undefined4 uVar1;
  undefined4 *__ptr;
  __ptr = (undefined4 *)malloc(4);
  if (__ptr == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(__ptr);
    uVar1 = *__ptr;
  }
  return uVar1;
}

// Function: double_free @ 0x101440
undefined4 double_free(undefined4 *param_1)
{
  undefined4 uVar1;
  void *__ptr;
  if (param_1 == (undefined4 *)0x0) {
    __ptr = malloc(4);
    if (__ptr == (void *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      free(__ptr);
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
  return *param_1;
}

// Function: heap_overflow @ 0x10148c
undefined4 heap_overflow(void)
{
  undefined4 *__ptr;
  long lVar1;
  undefined4 uVar2;
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    lVar1 = 0;
    do {
      __ptr[lVar1] = (int)lVar1 * 100;
      lVar1 = lVar1 + 1;
    } while (lVar1 != 0xb);
    uVar2 = *__ptr;
    free(__ptr);
  }
  return uVar2;
}

// Function: test_heap_memory @ 0x1014e0
void test_heap_memory(void)
{
  undefined4 uVar1;
  __pid_t __pid;
  undefined *puVar2;
  uint uVar3;
  uint local_14;
  void *local_10;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00101ee1);
  uVar1 = heap_basic(10);
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar1);
  uVar1 = heap_calloc(5);
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",uVar1);
  uVar1 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar1);
  uVar1 = heap_array(10);
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar1);
  uVar1 = heap_struct(5);
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar1);
  local_10 = (void *)0x0;
  uVar1 = heap_nested(&local_10);
  __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
  if (local_10 != (void *)0x0) {
    free(*(void **)((long)local_10 + 8));
    free(local_10);
  }
  uVar1 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
  uVar1 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
  uVar1 = memory_leak(5);
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar1);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid == 0) {
    uVar1 = dangling_pointer();
    __printf_chk(1,&DAT_00102039,uVar1);
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_001020af);
  }
  else {
    waitpid(__pid,(int *)&local_14,0);
    uVar3 = local_14 & 0x7f;
    if ((local_14 & 0x7f) == 0) {
      uVar3 = local_14 >> 8 & 0xff;
      puVar2 = &DAT_00102049;
    }
    else {
      if ((int)((long)((ulong)(uVar3 + 1) << 0x38) >> 0x39) < 1) goto LAB_00101680;
      puVar2 = &DAT_0010206e;
    }
    __printf_chk(1,puVar2,uVar3);
  }
LAB_00101680:
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: global_var_access @ 0x1016d4
void global_var_access(void)
{
  global_counter = global_counter + 1;
  return;
}

// Function: global_var_read @ 0x1016e8
int global_var_read(void)
{
  return global_counter << 1;
}

// Function: global_array_access @ 0x1016f8
undefined4 global_array_access(uint param_1)
{
  undefined4 uVar1;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(&global_array + (long)(int)param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

// Function: static_local @ 0x101718
void static_local(int param_1)
{
  if (param_1 == 0) {
    counter_1 = counter_1 + 1;
  }
  else {
    counter_1 = 0;
  }
  return;
}

// Function: call_static_func @ 0x101740
int call_static_func(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x10174c
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101760
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x101768
int read_const_data(void)
{
  return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x10177c
undefined8 access_bss_var(void)
{
  return 0;
}

// Function: access_bss_buffer @ 0x101784
undefined8 access_bss_buffer(void)
{
  return 0;
}

// Function: global_struct_access @ 0x10178c
undefined8 global_struct_access(void)
{
  return 0x1e;
}

// Function: set_file_static @ 0x101794
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x1017a0
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x1017ac
void set_global_callback(undefined8 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x1017b8
undefined8 call_global_callback(void)
{
  undefined8 uVar1;
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}

// Function: global_heap_store @ 0x1017d4
undefined4 global_heap_store(undefined4 *param_1)
{
  undefined4 uVar1;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// Function: static_complex_init @ 0x1017e8
undefined8 static_complex_init(void)
{
  return 0xf;
}

// Function: tls_access @ 0x1017f0
int tls_access(int param_1)
{
  return param_1 << 1;
}

// Function: init_order_test @ 0x1017f8
undefined8 init_order_test(void)
{
  return 0x14;
}

// Function: test_static_global @ 0x101800
void test_static_global(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = puts(&DAT_001020ba);
  uVar2 = global_var_access(iVar1);
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar2);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n");
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  uVar2 = call_extern_func();
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar2);
  uVar2 = read_const_data();
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar2);
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  uVar2 = global_struct_access();
  __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar2);
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n");
  global_func_ptr = double_value;
  uVar2 = call_global_callback(5);
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar2);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  uVar2 = static_complex_init();
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar2);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}

// Function: memop_memset @ 0x1019e8
ulong memop_memset(byte *param_1,size_t param_2,int param_3)
{
  if (param_1 != (byte *)0x0 && param_2 != 0) {
    memset(param_1,param_3,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_memcpy @ 0x101a2c
undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
  undefined4 uVar1;
  if (param_1 != (void *)0x0 && param_2 != (void *)0x0) {
    if (param_3 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      memcpy(param_1,param_2,param_3);
      uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
    }
    return uVar1;
  }
  return 0xffffffff;
}

// Function: memop_memmove @ 0x101a7c
ulong memop_memmove(void *param_1,long param_2)
{
  if ((param_1 != (void *)0x0 && param_2 != 0) && (param_1 == (void *)0x0 || param_2 != 1)) {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    return (ulong)*(byte *)((long)param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memcmp @ 0x101ac0
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  int iVar2;
  if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) && (param_3 != 0)) {
    iVar2 = memcmp(param_1,param_2,param_3);
    iVar1 = -(uint)(iVar2 != 0);
    if (0 < iVar2) {
      iVar1 = 1;
    }
    return iVar1;
  }
  return 0;
}

// Function: memop_bzero @ 0x101af8
ulong memop_bzero(byte *param_1,size_t param_2)
{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_bcopy @ 0x101b30
ulong memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
  byte *pbVar1;
  if ((param_1 != (void *)0x0 && param_2 != (void *)0x0) && (param_3 != 0)) {
    pbVar1 = (byte *)memmove(param_2,param_1,param_3);
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x101b6c
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

// Function: memop_memory_barrier @ 0x101b80
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

// Function: test_memory_op_functions @ 0x101ba0
void test_memory_op_functions(void)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined8 local_178;
  undefined4 local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 local_138 [2];
  undefined4 local_130 [2];
  undefined auStack_128 [16];
  undefined7 local_118;
  undefined4 uStack_111;
  undefined auStack_108 [256];
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_0010231c);
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 0;
  local_168 = 0x140000000a;
  uStack_160 = 0x280000001e;
  local_158 = 0x32;
  uVar2 = memop_memset(auStack_108,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",uVar2);
  uVar2 = memop_memcpy(&local_150,&local_168,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",uVar2);
  local_118 = 0x6f576f6c6c6548;
  uStack_111._0_1_ = 'r';
  uStack_111._1_1_ = 'l';
  uStack_111._2_1_ = 'd';
  uStack_111._3_1_ = '\0';
  uVar2 = memop_memmove(&local_118,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",uVar2);
  local_188 = 0x200000001;
  local_178 = 0x200000001;
  local_180 = 3;
  local_170 = 4;
  iVar3 = memcmp(&local_188,&local_178,0xc);
  iVar1 = -(uint)(iVar3 != 0);
  if (0 < iVar3) {
    iVar1 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
  uVar2 = memop_bzero(auStack_128,10);
  __printf_chk(1,"MEMOP-L2-05: %d\n",uVar2);
  local_138[0] = 0x4030201;
  local_130[0] = 0;
  uVar2 = memop_bcopy(local_138,local_130,4);
  __printf_chk(1,"MEMOP-L2-06: %d\n",uVar2);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  local_18c = 5;
  uVar2 = memop_memory_barrier(&local_18c);
  __printf_chk(1,"MEMOP-L3-02: %d\n",uVar2);
  if (local_8 - ___stack_chk_guard != 0) {
    __stack_chk_fail(&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
  }
  return;
}

// Function: extern_function @ 0x101d78
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: _fini @ 0x101d80
void _fini(void)
{
  return;
}

