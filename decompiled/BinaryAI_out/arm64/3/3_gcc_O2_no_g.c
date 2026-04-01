// Decompiled by BinaryAI
// SHA256: e94e8ce0bc182f25369574ad058ae54ded483f45d239fcee9fb03d3bf427eeb7

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

// Function: double_value @ 0x100c60
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: local_vars @ 0x100c70
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: FUN_00100c7c @ 0x100c7c
void FUN_00100c7c(int param_1)
{
  int iVar1;
  int *piVar2;
  int aiStack_30 [10];
  int aiStack_8 [2];
  int *piVar3;
  iVar1 = 0;
  piVar2 = aiStack_30;
  do {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar1;
    iVar1 = iVar1 + param_1;
    piVar2 = piVar3;
  } while (piVar3 != aiStack_8);
  return;
}

// Function: local_array @ 0x100c80
void local_array(int param_1)
{
  int iVar1;
  int *piVar2;
  int aiStack_30 [10];
  int local_8 [2];
  int *piVar3;
  iVar1 = 0;
  piVar2 = aiStack_30;
  do {
    piVar3 = piVar2 + 1;
    *piVar2 = iVar1;
    iVar1 = iVar1 + param_1;
    piVar2 = piVar3;
  } while (piVar3 != local_8);
  return;
}

// Function: local_struct @ 0x100ce4
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x100cf0
void address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return;
}

// Function: address_of_array @ 0x100d00
int address_of_array(int *param_1)
{
  return *param_1 << 1;
}

// Function: large_stack_frame @ 0x100d10
void large_stack_frame(void)
{
  int iVar1;
  undefined *puVar2;
  undefined auStack_808 [1024];
  undefined local_408;
  long local_8;
  iVar1 = 0;
  local_8 = ___stack_chk_guard;
  puVar2 = auStack_808;
  do {
    *puVar2 = (char)iVar1;
    iVar1 = iVar1 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar1 != 0x800);
  if (local_8 - ___stack_chk_guard == 0) {
    return;
  }
  __stack_chk_fail(local_408,&__stack_chk_guard,0,local_8 - ___stack_chk_guard);
}

// Function: vla_stack @ 0x100d80
void vla_stack(ulong param_1)
{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar5;
  long lVar6;
  undefined auStack_30 [16];
  undefined *puVar4;
  puVar3 = auStack_30;
  puVar4 = auStack_30;
  if ((int)param_1 - 1U < 1000) {
    uVar5 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
    puVar2 = auStack_30;
    while (puVar4 != auStack_30 + -(uVar5 & 0xffffffffffff0000)) {
      puVar3 = puVar2 + -0x10000;
      *(undefined8 *)(puVar2 + -0xfc00) = 0;
      puVar4 = puVar2 + -0x10000;
      puVar2 = puVar2 + -0x10000;
    }
    uVar5 = uVar5 & 0xfff0;
    lVar1 = -uVar5;
    *(undefined8 *)(puVar3 + lVar1) = 0;
    if (0x3ff < uVar5) {
      *(undefined8 *)(puVar3 + lVar1 + 0x400) = 0;
    }
    lVar6 = 0;
    do {
      *(int *)(puVar3 + lVar6 * 4 + lVar1 + 0x10) = (int)lVar6 << 1;
      lVar6 = lVar6 + 1;
    } while ((int)lVar6 < (int)param_1);
  }
  return;
}

// Function: alloca_usage @ 0x100e50
void alloca_usage(ulong param_1)
{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar5;
  ulong uVar6;
  int *piVar7;
  undefined auStack_30 [16];
  undefined *puVar4;
  puVar3 = auStack_30;
  puVar4 = auStack_30;
  if (0 < (int)param_1) {
    uVar6 = (-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2) + 0xf;
    puVar2 = auStack_30;
    while (puVar4 != auStack_30 + -(uVar6 & 0xffffffffffff0000)) {
      puVar3 = puVar2 + -0x10000;
      *(undefined8 *)(puVar2 + -0xfc00) = 0;
      puVar4 = puVar2 + -0x10000;
      puVar2 = puVar2 + -0x10000;
    }
    uVar6 = uVar6 & 0xfff0;
    lVar1 = -uVar6;
    *(undefined8 *)(puVar3 + lVar1) = 0;
    if (0x3ff < uVar6) {
      *(undefined8 *)(puVar3 + lVar1 + 0x400) = 0;
    }
    iVar5 = 0;
    piVar7 = (int *)(puVar3 + lVar1 + 0x10);
    do {
      *piVar7 = iVar5;
      iVar5 = iVar5 + 3;
      piVar7 = piVar7 + 1;
    } while (iVar5 != (int)param_1 * 3);
  }
  return;
}

// Function: stack_alias @ 0x100f20
undefined8 stack_alias(void)
{
  return 0x14;
}

// Function: test_stack_memory @ 0x100f30
void test_stack_memory(void)
{
  undefined4 uVar1;
  puts(&DAT_00101fa8);
  __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
  __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
  uVar1 = large_stack_frame();
  __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
  __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
  uVar1 = alloca_usage(10);
  __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}

// Function: heap_basic @ 0x101010
undefined4 heap_basic(ulong param_1)
{
  int iVar1;
  void *__ptr;
  long lVar2;
  undefined4 uVar3;
  iVar1 = (int)param_1;
  __ptr = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < iVar1) {
      lVar2 = 0;
      do {
        *(int *)((long)__ptr + lVar2 * 4) = (int)lVar2 << 1;
        lVar2 = lVar2 + 1;
      } while ((int)lVar2 < iVar1);
    }
    uVar3 = *(undefined4 *)((long)__ptr + (long)(iVar1 / 2) * 4);
    free(__ptr);
  }
  return uVar3;
}

// Function: heap_calloc @ 0x101074
int heap_calloc(int param_1)
{
  long lVar1;
  void *__ptr;
  long lVar2;
  int iVar3;
  __ptr = calloc((long)param_1,4);
  if (__ptr == (void *)0x0) {
    iVar3 = -1;
  }
  else {
    if (param_1 < 1) {
      iVar3 = 0;
    }
    else {
      lVar2 = 0;
      iVar3 = 0;
      do {
        lVar1 = lVar2 * 4;
        lVar2 = lVar2 + 1;
        iVar3 = iVar3 + *(int *)((long)__ptr + lVar1);
      } while ((int)lVar2 < param_1);
    }
    free(__ptr);
  }
  return iVar3;
}

// Function: heap_realloc @ 0x1010e0
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

// Function: heap_array @ 0x101164
int heap_array(ulong param_1)
{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int iVar3;
  iVar3 = (int)param_1;
  __ptr = (int *)malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    if (0 < iVar3) {
      iVar1 = 0;
      piVar2 = __ptr;
      do {
        *piVar2 = iVar1;
        iVar1 = iVar1 + 3;
        piVar2 = piVar2 + 1;
      } while (iVar1 != iVar3 * 3);
    }
    iVar3 = __ptr[iVar3 / 2];
    free(__ptr);
  }
  return iVar3;
}

// Function: heap_struct @ 0x1011d0
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

// Function: FUN_0010120c @ 0x10120c
undefined8 FUN_0010120c(undefined8 *param_1)
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
      uVar2 = 0;
      *puVar1 = 0x14;
      *(undefined8 *)(puVar1 + 2) = 0;
    }
  }
  return uVar2;
}

// Function: heap_nested @ 0x101210
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
      uVar2 = 0;
      *puVar1 = 0x14;
      *(undefined8 *)(puVar1 + 2) = 0;
    }
  }
  return uVar2;
}

// Function: linked_list_heap @ 0x101284
int linked_list_heap(void)
{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *__ptr;
  int *piVar4;
  int iVar5;
  iVar5 = 0;
  piVar4 = (int *)0x0;
  piVar3 = (int *)0x0;
  do {
    piVar2 = (int *)malloc(0x10);
    if (piVar2 == (int *)0x0) {
      while (piVar3 != (int *)0x0) {
        piVar4 = *(int **)(piVar3 + 2);
        free(piVar3);
        piVar3 = piVar4;
      }
      return -1;
    }
    *piVar2 = iVar5;
    *(undefined8 *)(piVar2 + 2) = 0;
    __ptr = piVar2;
    if (piVar3 != (int *)0x0) {
      *(int **)(piVar4 + 2) = piVar2;
      __ptr = piVar3;
    }
    iVar5 = iVar5 + 10;
    piVar4 = piVar2;
    piVar3 = __ptr;
  } while (iVar5 != 0x32);
  iVar5 = 0;
  do {
    iVar1 = *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
    iVar5 = iVar5 + iVar1;
  } while (piVar3 != (int *)0x0);
  do {
    piVar3 = *(int **)(__ptr + 2);
    free(__ptr);
    __ptr = piVar3;
  } while (piVar3 != (int *)0x0);
  return iVar5;
}

// Function: create_tree_node @ 0x101330
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

// Function: tree_heap_traversal @ 0x101360
undefined8 tree_heap_traversal(void)
{
  void *__ptr;
  void *pvVar1;
  void *__ptr_00;
  undefined8 uVar2;
  __ptr = malloc(0x18);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pvVar1 = malloc(0x18);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = malloc(0x18);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
    }
    else {
      __ptr_00 = malloc(0x18);
      if (__ptr_00 != (void *)0x0) {
        free(pvVar1);
        free(__ptr_00);
        free(__ptr);
        return 0x3c;
      }
      free(pvVar1);
    }
    free(__ptr);
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}

// Function: memory_leak @ 0x101410
undefined4 memory_leak(ulong param_1)
{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  long lVar4;
  iVar1 = (int)param_1;
  pvVar3 = malloc(-(param_1 >> 0x1f & 1) & 0xfffffffc00000000 | (param_1 & 0xffffffff) << 2);
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < iVar1) {
      lVar4 = 0;
      do {
        *(int *)((long)pvVar3 + lVar4 * 4) = (int)lVar4;
        lVar4 = lVar4 + 1;
      } while ((int)lVar4 < iVar1);
    }
    uVar2 = *(undefined4 *)((long)pvVar3 + (long)(iVar1 / 2) * 4);
  }
  return uVar2;
}

// Function: dangling_pointer @ 0x101470
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

// Function: double_free @ 0x1014c0
undefined4 double_free(undefined4 *param_1)
{
  undefined4 uVar1;
  void *__ptr;
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
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

// Function: FUN_0010150c @ 0x10150c
int FUN_0010150c(void)
{
  int *__ptr;
  int iVar1;
  int *piVar2;
  __ptr = (int *)malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    piVar2 = __ptr;
    do {
      *piVar2 = iVar1;
      iVar1 = iVar1 + 100;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 0x44c);
    iVar1 = *__ptr;
    free(__ptr);
  }
  return iVar1;
}

// Function: heap_overflow @ 0x101510
int heap_overflow(void)
{
  int *__ptr;
  int iVar1;
  int *piVar2;
  __ptr = (int *)malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    piVar2 = __ptr;
    do {
      *piVar2 = iVar1;
      iVar1 = iVar1 + 100;
      piVar2 = piVar2 + 1;
    } while (iVar1 != 0x44c);
    iVar1 = *__ptr;
    free(__ptr);
  }
  return iVar1;
}

// Function: test_heap_memory @ 0x101560
void test_heap_memory(void)
{
  undefined4 uVar1;
  __pid_t __pid;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  int *piVar7;
  undefined8 uVar9;
  int iVar10;
  uint local_c;
  long local_8;
  int *piVar8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_00102118);
  pvVar2 = malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar6 = 0;
    do {
      *(int *)((long)pvVar2 + lVar6 * 4) = (int)lVar6 << 1;
      lVar6 = lVar6 + 1;
    } while (lVar6 != 10);
    uVar1 = *(undefined4 *)((long)pvVar2 + 0x14);
    free(pvVar2);
  }
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar1);
  piVar3 = (int *)calloc(5,4);
  if (piVar3 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    piVar7 = piVar3;
    do {
      piVar8 = piVar7 + 1;
      iVar10 = iVar10 + *piVar7;
      piVar7 = piVar8;
    } while (piVar3 + 5 != piVar8);
    free(piVar3);
  }
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar10);
  uVar1 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar1);
  piVar3 = (int *)malloc(0x28);
  if (piVar3 == (int *)0x0) {
    iVar10 = -1;
  }
  else {
    iVar10 = 0;
    piVar7 = piVar3;
    do {
      *piVar7 = iVar10;
      iVar10 = iVar10 + 3;
      piVar7 = piVar7 + 1;
    } while (iVar10 != 0x1e);
    iVar10 = piVar3[5];
    free(piVar3);
  }
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar10);
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    free(pvVar2);
    uVar9 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar9);
  pvVar2 = malloc(0x10);
  if (pvVar2 == (void *)0x0) {
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    puVar4 = (undefined4 *)malloc(0x10);
    *(undefined4 **)((long)pvVar2 + 8) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      free(pvVar2);
      uVar9 = 0xfffffffe;
    }
    else {
      uVar9 = 0;
      *puVar4 = 0x14;
      *(undefined8 *)(puVar4 + 2) = 0;
    }
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar9);
    free(*(void **)((long)pvVar2 + 8));
    free(pvVar2);
  }
  uVar1 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
  uVar1 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
  puVar5 = (undefined8 *)malloc(0x14);
  if (puVar5 == (undefined8 *)0x0) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = 2;
    *puVar5 = 0x100000000;
    puVar5[1] = 0x300000002;
    *(undefined4 *)(puVar5 + 2) = 4;
  }
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar9);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      lVar6 = local_8 - ___stack_chk_guard;
      if (lVar6 == 0) {
        perror(&DAT_001022e8);
        return;
      }
    }
    else {
      waitpid(__pid,(int *)&local_c,0);
      if ((local_c & 0x7f) == 0) {
        __printf_chk(1,&DAT_00102278,local_c >> 8 & 0xff);
      }
      else if (0 < (int)((long)((ulong)((local_c & 0x7f) + 1) << 0x38) >> 0x39)) {
        __printf_chk(1,&DAT_001022a0);
      }
      lVar6 = local_8 - ___stack_chk_guard;
      if (lVar6 == 0) {
        return;
      }
    }
    __stack_chk_fail(&__stack_chk_guard,0,lVar6);
  }
  puVar4 = (undefined4 *)malloc(4);
  if (puVar4 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(puVar4);
    uVar1 = *puVar4;
  }
  __printf_chk(1,&DAT_00102268,uVar1);
  exit(0);
}

// Function: global_var_access @ 0x1018c0
void global_var_access(void)
{
  global_counter = global_counter + 1;
  return;
}

// Function: global_var_read @ 0x1018d4
int global_var_read(void)
{
  return global_counter << 1;
}

// Function: global_array_access @ 0x1018e4
undefined4 global_array_access(uint param_1)
{
  if (param_1 < 10) {
    return *(undefined4 *)(&global_array + (long)(int)param_1 * 4);
  }
  return 0xffffffff;
}

// Function: static_local @ 0x101904
void static_local(int param_1)
{
  if (param_1 == 0) {
    counter_1 = counter_1 + 1;
    return;
  }
  counter_1 = 0;
  return;
}

// Function: call_static_func @ 0x101940
int call_static_func(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x101950
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x101964
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x101970
int read_const_data(void)
{
  return (byte)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101984
undefined8 access_bss_var(void)
{
  return 0;
}

// Function: access_bss_buffer @ 0x101990
undefined8 access_bss_buffer(void)
{
  return 0;
}

// Function: global_struct_access @ 0x1019a0
undefined8 global_struct_access(void)
{
  return 0x1e;
}

// Function: set_file_static @ 0x1019b0
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x1019c0
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x1019d0
void set_global_callback(undefined8 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x1019e0
undefined8 call_global_callback(void)
{
  undefined8 uVar1;
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}

// Function: global_heap_store @ 0x101a00
undefined4 global_heap_store(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}

// Function: static_complex_init @ 0x101a14
undefined8 static_complex_init(void)
{
  return 0xf;
}

// Function: tls_access @ 0x101a20
int tls_access(int param_1)
{
  return param_1 << 1;
}

// Function: init_order_test @ 0x101a30
undefined8 init_order_test(void)
{
  return 0x14;
}

// Function: test_static_global @ 0x101a40
void test_static_global(void)
{
  undefined4 uVar1;
  puts(&DAT_00102318);
  global_counter = global_counter + 1;
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n");
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  uVar1 = extern_function(5);
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(byte)const_string[4] + 0x2a);
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n");
  global_func_ptr = double_value;
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",10);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}

// Function: memop_memset @ 0x101c30
ulong memop_memset(byte *param_1,size_t param_2,int param_3)
{
  if (param_1 != (byte *)0x0 && param_2 != 0) {
    memset(param_1,param_3,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_memcpy @ 0x101c74
undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
  if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
    memcpy(param_1,param_2,param_3);
    return *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
  }
  return 0xffffffff;
}

// Function: memop_memmove @ 0x101cc0
ulong memop_memmove(void *param_1,long param_2)
{
  if ((param_1 != (void *)0x0 && param_2 != 0) && (param_1 == (void *)0x0 || param_2 != 1)) {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    return (ulong)*(byte *)((long)param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memcmp @ 0x101d04
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  int iVar2;
  if ((param_2 == (void *)0x0 || param_3 == 0) || param_1 == (void *)0x0) {
    return 0;
  }
  iVar2 = memcmp(param_1,param_2,param_3);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  return iVar1;
}

// Function: memop_bzero @ 0x101d40
ulong memop_bzero(byte *param_1,size_t param_2)
{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_bcopy @ 0x101d80
ulong memop_bcopy(void *param_1,void *param_2,size_t param_3)
{
  byte *pbVar1;
  if ((param_2 != (void *)0x0 && param_3 != 0) && param_1 != (void *)0x0) {
    pbVar1 = (byte *)memmove(param_2,param_1,param_3);
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}

// Function: memop_unaligned_access @ 0x101dc0
undefined4 memop_unaligned_access(long param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x101dd4
int memop_memory_barrier(int *param_1)
{
  if (param_1 != (int *)0x0) {
    DataMemoryBarrier(2,3);
    return *param_1 + *param_1;
  }
  return -1;
}

// Function: test_memory_op_functions @ 0x101df4
void test_memory_op_functions(void)
{
  int iVar1;
  int iVar2;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined8 local_128;
  undefined2 local_120;
  undefined local_118 [7];
  undefined4 uStack_111;
  undefined8 local_108;
  undefined2 local_100;
  long local_8;
  local_8 = ___stack_chk_guard;
  puts(&DAT_001025c8);
  local_108 = 0x4141414141414141;
  local_100 = 0x4141;
  __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
  __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  local_118 = (undefined  [7])0x6f576f6c6c6548;
  uStack_111._0_1_ = 'r';
  uStack_111._1_1_ = 'l';
  uStack_111._2_1_ = 'd';
  uStack_111._3_1_ = '\0';
  memmove(local_118 + 1,local_118,9);
  __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
  local_148 = 0x200000001;
  local_140 = 3;
  local_138 = 0x200000001;
  local_130 = 4;
  iVar2 = memcmp(&local_148,&local_138,0xc);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
  local_128 = 0;
  local_120 = 0;
  __printf_chk(1,"MEMOP-L2-05: %d\n",0);
  __printf_chk(1,"MEMOP-L2-06: %d\n",1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  DataMemoryBarrier(2,3);
  if (local_8 == ___stack_chk_guard) {
    __printf_chk(1,"MEMOP-L3-02: %d\n",10);
    return;
  }
  __stack_chk_fail();
}

// Function: extern_function @ 0x101f80
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: _fini @ 0x101f88
void _fini(void)
{
  return;
}

