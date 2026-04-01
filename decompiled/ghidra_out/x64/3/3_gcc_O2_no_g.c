/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x64/3/3_gcc_O2_no_g
 * Processor: x86
 * Compiler Spec: gcc
 */

/* Function: _init @ 00101000 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = __gmon_start__();
  return iVar1;
}



/* Function: FUN_00101020 @ 00101020 */

void FUN_00101020(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: main @ 00101220 */

undefined8 main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: _start @ 00101250 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101280 */

/* WARNING: Removing unreachable block (ram,0x00101293) */
/* WARNING: Removing unreachable block (ram,0x0010129f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 001012b0 */

/* WARNING: Removing unreachable block (ram,0x001012d4) */
/* WARNING: Removing unreachable block (ram,0x001012e0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001012f0 */

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



/* Function: double_value @ 00101340 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: local_vars @ 00101350 */

int local_vars(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: local_array @ 00101360 */

undefined4 local_array(int param_1)

{
  long *plVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_38 [2];
  undefined4 local_24;
  long local_10 [2];
  
  plVar1 = local_38;
  iVar2 = 0;
  local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
  do {
    *(int *)plVar1 = iVar2;
    plVar1 = (long *)((long)plVar1 + 4);
    iVar2 = iVar2 + param_1;
  } while (plVar1 != local_10);
  if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: local_struct @ 001013b0 */

int local_struct(int param_1)

{
  return param_1 * 3;
}



/* Function: address_of_local @ 001013c0 */

undefined8 address_of_local(undefined4 *param_1)

{
  *param_1 = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 001013d0 */

int address_of_array(int *param_1)

{
  return *param_1 * 2;
}



/* Function: large_stack_frame @ 001013e0 */

int large_stack_frame(void)

{
  long lVar1;
  long in_FS_OFFSET;
  char local_818 [2056];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = 0;
  do {
    local_818[lVar1] = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (int)local_818[0x400];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: vla_stack @ 00101440 */

undefined4 vla_stack(uint param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar7;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar6;
  
  puVar7 = auStack_18;
  puVar5 = auStack_18;
  puVar6 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 - 1 < 1000) {
    uVar4 = (long)(int)param_1 * 4 + 0xf;
    puVar2 = auStack_18;
    while (puVar6 != auStack_18 + -(uVar4 & 0xfffffffffffff000)) {
      puVar5 = puVar2 + -0x1000;
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      puVar6 = puVar2 + -0x1000;
      puVar2 = puVar2 + -0x1000;
    }
    uVar4 = (ulong)((uint)uVar4 & 0xff0);
    lVar1 = -uVar4;
    puVar7 = puVar5 + lVar1;
    if (uVar4 != 0) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    uVar4 = 0;
    do {
      *(int *)(puVar5 + uVar4 * 4 + lVar1) = (int)uVar4 * 2;
      uVar4 = uVar4 + 1;
    } while (uVar4 != param_1);
    uVar3 = *(undefined4 *)(puVar5 + (long)((int)param_1 >> 1) * 4 + lVar1);
  }
  else {
    uVar3 = 0xffffffff;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar7 + -8) = &UNK_00101504;
    __stack_chk_fail();
  }
  return uVar3;
}



/* Function: alloca_usage @ 00101510 */

int alloca_usage(int param_1)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  ulong uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar7;
  
  puVar8 = auStack_18;
  puVar6 = auStack_18;
  puVar7 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    iVar3 = -1;
  }
  else {
    uVar4 = (long)param_1 * 4 + 0x17;
    puVar2 = auStack_18;
    while (puVar7 != auStack_18 + -(uVar4 & 0xfffffffffffff000)) {
      puVar6 = puVar2 + -0x1000;
      *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
      puVar7 = puVar2 + -0x1000;
      puVar2 = puVar2 + -0x1000;
    }
    uVar4 = (ulong)((uint)uVar4 & 0xff0);
    lVar1 = -uVar4;
    puVar8 = puVar6 + lVar1;
    if (uVar4 != 0) {
      *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
    }
    iVar3 = 0;
    piVar5 = (int *)((ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0);
    do {
      *piVar5 = iVar3;
      iVar3 = iVar3 + 3;
      piVar5 = piVar5 + 1;
    } while (iVar3 != param_1 * 3);
    iVar3 = ((int *)((ulong)(puVar6 + lVar1 + 0xf) & 0xfffffffffffffff0))[param_1 >> 1];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -8) = &UNK_001015d4;
    __stack_chk_fail();
  }
  return iVar3;
}



/* Function: stack_alias @ 001015e0 */

undefined8 stack_alias(void)

{
  return 0x14;
}



/* Function: test_stack_memory @ 001015f0 */

void test_stack_memory(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103004);
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



/* Function: heap_basic @ 001016f0 */

undefined4 heap_basic(int param_1)

{
  void *__ptr;
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  uVar2 = (ulong)param_1;
  __ptr = malloc(uVar2 * 4);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      uVar1 = 0;
      do {
        *(int *)((long)__ptr + uVar1 * 4) = (int)uVar1 * 2;
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar2);
    }
    uVar3 = *(undefined4 *)
             ((long)__ptr + (long)((int)(((uint)(uVar2 >> 0x1f) & 1) + param_1) >> 1) * 4);
    free(__ptr);
  }
  return uVar3;
}



/* Function: heap_calloc @ 00101760 */

int heap_calloc(uint param_1)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = calloc((long)(int)param_1,4);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    if ((int)param_1 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = 0;
      piVar1 = __ptr;
      do {
        iVar2 = iVar2 + *piVar1;
        piVar1 = piVar1 + 1;
      } while (piVar1 != __ptr + param_1);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 001017c0 */

undefined4 heap_realloc(void)

{
  undefined8 *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  
  __ptr = malloc(0x14);
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



/* Function: heap_array @ 00101850 */

int heap_array(int param_1)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = malloc((long)param_1 << 2);
  if (__ptr == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    if (0 < param_1) {
      iVar2 = 0;
      piVar1 = __ptr;
      do {
        *piVar1 = iVar2;
        iVar2 = iVar2 + 3;
        piVar1 = piVar1 + 1;
      } while (iVar2 != param_1 * 3);
    }
    iVar2 = __ptr[(int)(((uint)((ulong)(long)param_1 >> 0x1f) & 1) + param_1) >> 1];
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_struct @ 001018c0 */

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



/* Function: heap_nested @ 00101900 */

undefined8 heap_nested(undefined8 *param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  undefined8 uVar2;
  
  __ptr = malloc(0x10);
  *param_1 = __ptr;
  if (__ptr == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *__ptr = 10;
    puVar1 = malloc(0x10);
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



/* Function: linked_list_heap @ 00101970 */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *__ptr;
  int iVar4;
  
  iVar4 = 0;
  piVar1 = (int *)0x0;
  piVar3 = (int *)0x0;
  do {
    piVar2 = malloc(0x10);
    if (piVar2 == (int *)0x0) {
      while (piVar3 != (int *)0x0) {
        piVar1 = *(int **)(piVar3 + 2);
        free(piVar3);
        piVar3 = piVar1;
      }
      return -1;
    }
    *piVar2 = iVar4;
    piVar2[2] = 0;
    piVar2[3] = 0;
    __ptr = piVar2;
    if (piVar3 != (int *)0x0) {
      *(int **)(piVar1 + 2) = piVar2;
      __ptr = piVar3;
    }
    iVar4 = iVar4 + 10;
    piVar1 = piVar2;
    piVar3 = __ptr;
  } while (iVar4 != 0x32);
  iVar4 = 0;
  do {
    iVar4 = iVar4 + *piVar3;
    piVar3 = *(int **)(piVar3 + 2);
  } while (piVar3 != (int *)0x0);
  do {
    piVar3 = *(int **)(__ptr + 2);
    free(__ptr);
    __ptr = piVar3;
  } while (piVar3 != (int *)0x0);
  return iVar4;
}



/* Function: create_tree_node @ 00101a10 */

void create_tree_node(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined8 *)(puVar1 + 2) = 0;
    *(undefined8 *)(puVar1 + 4) = 0;
  }
  return;
}



/* Function: tree_heap_traversal @ 00101a40 */

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



/* Function: memory_leak @ 00101ae0 */

undefined4 memory_leak(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_1;
  pvVar2 = malloc(uVar4 * 4);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      uVar3 = 0;
      do {
        *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar4);
    }
    uVar1 = *(undefined4 *)
             ((long)pvVar2 + (long)((int)(((uint)(uVar4 >> 0x1f) & 1) + param_1) >> 1) * 4);
  }
  return uVar1;
}



/* Function: dangling_pointer @ 00101b40 */

undefined4 dangling_pointer(void)

{
  undefined4 *__ptr;
  
  __ptr = malloc(4);
  if (__ptr != (undefined4 *)0x0) {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return 0xffffffff;
}



/* Function: double_free @ 00101b80 */

undefined4 double_free(undefined4 *param_1)

{
  void *__ptr;
  
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  __ptr = malloc(4);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    free(__ptr);
    return 0xfffffffe;
  }
  return 0xffffffff;
}



/* Function: heap_overflow @ 00101bc0 */

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
      *piVar1 = iVar2;
      iVar2 = iVar2 + 100;
      piVar1 = piVar1 + 1;
    } while (iVar2 != 0x44c);
    iVar2 = *__ptr;
    free(__ptr);
  }
  return iVar2;
}



/* Function: test_heap_memory @ 00101c10 */

void test_heap_memory(void)

{
  undefined4 uVar1;
  __pid_t __pid;
  void *pvVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001030e6);
  pvVar2 = malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    lVar7 = 0;
    do {
      *(int *)((long)pvVar2 + lVar7 * 4) = (int)lVar7 * 2;
      lVar7 = lVar7 + 1;
    } while (lVar7 != 10);
    uVar1 = *(undefined4 *)((long)pvVar2 + 0x14);
    free(pvVar2);
  }
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar1);
  piVar3 = calloc(5,4);
  if (piVar3 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = 0;
    piVar6 = piVar3;
    do {
      iVar9 = iVar9 + *piVar6;
      piVar6 = piVar6 + 1;
    } while (piVar3 + 5 != piVar6);
    free(piVar3);
  }
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar9);
  uVar1 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar1);
  piVar3 = malloc(0x28);
  if (piVar3 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = 0;
    piVar6 = piVar3;
    do {
      *piVar6 = iVar9;
      iVar9 = iVar9 + 3;
      piVar6 = piVar6 + 1;
    } while (iVar9 != 0x1e);
    iVar9 = piVar3[5];
    free(piVar3);
  }
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",iVar9);
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
    uVar8 = 0xffffffff;
  }
  else {
    free(pvVar2);
    uVar8 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar8);
  pvVar2 = malloc(0x10);
  if (pvVar2 == (void *)0x0) {
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    puVar4 = malloc(0x10);
    *(undefined4 **)((long)pvVar2 + 8) = puVar4;
    if (puVar4 == (undefined4 *)0x0) {
      free(pvVar2);
      uVar8 = 0xfffffffe;
    }
    else {
      *puVar4 = 0x14;
      uVar8 = 0;
      *(undefined8 *)(puVar4 + 2) = 0;
    }
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar8);
    free(*(void **)((long)pvVar2 + 8));
    free(pvVar2);
  }
  uVar1 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1);
  uVar1 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
  puVar5 = malloc(0x14);
  if (puVar5 == (undefined8 *)0x0) {
    uVar8 = 0xffffffff;
  }
  else {
    *(undefined4 *)(puVar5 + 2) = 4;
    uVar8 = 2;
    *puVar5 = 0x100000000;
    puVar5[1] = 0x300000002;
  }
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar8);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        perror(&DAT_001031a8);
        return;
      }
    }
    else {
      waitpid(__pid,(int *)&local_14,0);
      if ((local_14 & 0x7f) == 0) {
        __printf_chk(1,&DAT_001033c8,local_14 >> 8 & 0xff);
      }
      else if ('\x01' < (char)((char)(local_14 & 0x7f) + '\x01')) {
        __printf_chk(1,&DAT_001033f0);
      }
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  puVar4 = malloc(4);
  if (puVar4 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(puVar4);
    uVar1 = *puVar4;
  }
  __printf_chk(1,&DAT_00103198,uVar1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 00101fe0 */

void global_var_access(void)

{
  global_counter = global_counter + 1;
  return;
}



/* Function: global_var_read @ 00102000 */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00102010 */

undefined4 global_array_access(uint param_1)

{
  if (param_1 < 10) {
    return *(undefined4 *)(global_array + (long)(int)param_1 * 4);
  }
  return 0xffffffff;
}



/* Function: static_local @ 00102040 */

void static_local(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = counter_1 + 1;
  }
  counter_1 = iVar1;
  return;
}



/* Function: call_static_func @ 00102060 */

int call_static_func(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00102070 */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00102080 */

void call_extern_func(void)

{
  extern_function(5);
  return;
}



/* Function: read_const_data @ 00102090 */

int read_const_data(void)

{
  return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001020b0 */

undefined8 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 001020c0 */

undefined8 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 001020d0 */

undefined8 global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 001020e0 */

void set_file_static(undefined4 param_1)

{
  file_scope_static = param_1;
  return;
}



/* Function: get_file_static @ 001020f0 */

undefined4 get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00102100 */

void set_global_callback(undefined8 param_1)

{
  global_func_ptr = param_1;
  return;
}



/* Function: call_global_callback @ 00102110 */

undefined8 call_global_callback(void)

{
  undefined8 uVar1;
  
  if (global_func_ptr != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00102120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: global_heap_store @ 00102130 */

undefined4 global_heap_store(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}



/* Function: static_complex_init @ 00102150 */

undefined8 static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00102160 */

int tls_access(int param_1)

{
  return param_1 * 2;
}



/* Function: init_order_test @ 00102170 */

undefined8 init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 00102180 */

void test_static_global(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103438);
  global_counter = global_counter + 1;
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n");
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n");
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  uVar1 = extern_function(5);
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
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



/* Function: memop_memset @ 00102390 */

ulong memop_memset(void *param_1,size_t param_2,int param_3)

{
  byte *pbVar1;
  
  if ((param_1 != (void *)0x0) && (param_2 != 0)) {
    pbVar1 = memset(param_1,param_3,param_2);
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}



/* Function: memop_memcpy @ 001023d0 */

undefined4 memop_memcpy(void *param_1,void *param_2,ulong param_3)

{
  void *pvVar1;
  
  if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
    pvVar1 = memcpy(param_1,param_2,param_3);
    return *(undefined4 *)((long)pvVar1 + ((param_3 & 0xfffffffffffffffc) - 4));
  }
  return 0xffffffff;
}



/* Function: memop_memmove @ 00102410 */

int memop_memmove(void *param_1,ulong param_2)

{
  if ((param_1 != (void *)0x0) && (1 < param_2)) {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    return (int)*(char *)((long)param_1 + 1);
  }
  return -1;
}



/* Function: memop_memcmp @ 00102450 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
    iVar1 = memcmp(param_1,param_2,param_3);
    iVar2 = -(uint)(iVar1 != 0);
    if (0 < iVar1) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 0;
}



/* Function: memop_bzero @ 001024a0 */

ulong memop_bzero(void *param_1,size_t param_2)

{
  byte *pbVar1;
  
  if (param_1 != (void *)0x0) {
    pbVar1 = memset(param_1,0,param_2);
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}



/* Function: memop_bcopy @ 001024d0 */

ulong memop_bcopy(void *param_1,void *param_2,size_t param_3)

{
  byte *pbVar1;
  
  if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
    pbVar1 = memmove(param_2,param_1,param_3);
    return (ulong)*pbVar1;
  }
  return 0xffffffff;
}



/* Function: memop_unaligned_access @ 00102510 */

undefined4 memop_unaligned_access(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00102530 */

int memop_memory_barrier(int *param_1)

{
  if (param_1 != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *param_1 + *param_1;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00102550 */

void test_memory_op_functions(void)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_12d;
  undefined2 local_125;
  undefined8 local_123;
  undefined2 local_11b;
  undefined1 local_119;
  undefined8 local_118;
  undefined2 local_110;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103688);
  local_118 = 0x4141414141414141;
  local_110 = 0x4141;
  __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
  __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  local_11b = 0x646c;
  local_123 = 0x726f576f6c6c6548;
  local_119 = 0;
  memmove((void *)((long)&local_123 + 1),&local_123,9);
  __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
  local_148 = 0x200000001;
  local_140 = 3;
  local_13c = 0x200000001;
  local_134 = 4;
  iVar2 = memcmp(&local_148,&local_13c,0xc);
  iVar1 = -(uint)(iVar2 != 0);
  if (0 < iVar2) {
    iVar1 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar1);
  local_125 = 0;
  local_12d = 0;
  __printf_chk(1,"MEMOP-L2-05: %d\n",0);
  __printf_chk(1,"MEMOP-L2-06: %d\n",1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  LOCK();
  UNLOCK();
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    __printf_chk(1,"MEMOP-L3-02: %d\n",10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: extern_function @ 00102710 */

int extern_function(int param_1)

{
  return param_1 * 3;
}



/* Function: _fini @ 00102718 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 63 */
