/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x86/3/3_gcc_Os_no_g
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



/* Function: main @ 00011210 */

undefined4 main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: _start @ 00011240 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 0001126c */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 00011270 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 00011280 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001129b) */
/* WARNING: Removing unreachable block (ram,0x000112a5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 000112c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112ee) */
/* WARNING: Removing unreachable block (ram,0x000112f8) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011310 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x0001136c) */
/* WARNING: Removing unreachable block (ram,0x00011370) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000113a9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000113ad */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 000113b1 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: local_vars @ 000113bf */

int local_vars(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: local_array @ 000113d0 */

int local_array(int param_1)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  int aiStack_38 [10];
  int local_10;
  
  iVar2 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    aiStack_38[iVar1] = iVar2;
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + param_1;
  } while (iVar1 != 10);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    aiStack_38[5] = __stack_chk_fail_local();
  }
  return aiStack_38[5];
}



/* Function: local_struct @ 0001140a */

int local_struct(int param_1)

{
  return param_1 * 3;
}



/* Function: address_of_local @ 00011417 */

undefined4 address_of_local(undefined4 *param_1)

{
  *param_1 = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 0001142e */

int address_of_array(int *param_1)

{
  return *param_1 * 2;
}



/* Function: large_stack_frame @ 0001143e */

int large_stack_frame(void)

{
  int iVar1;
  int in_GS_OFFSET;
  char acStack_810 [2048];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    acStack_810[iVar1] = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  iVar1 = (int)acStack_810[0x400];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}



/* Function: vla_stack @ 0001147f */

undefined4 vla_stack(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  
  puVar6 = auStack_1c;
  puVar5 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  uVar2 = 0xffffffff;
  if (param_1 - 1U < 1000) {
    uVar3 = param_1 * 4 + 0xf;
    for (; puVar5 != auStack_1c + -(uVar3 & 0xfffff000); puVar5 = puVar5 + -0x1000) {
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
    }
    uVar3 = uVar3 & 0xff0;
    iVar1 = -uVar3;
    puVar6 = puVar5 + iVar1;
    if (uVar3 != 0) {
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
    }
    iVar4 = 0;
    do {
      *(int *)(puVar5 + iVar4 * 4 + iVar1) = iVar4 * 2;
      iVar4 = iVar4 + 1;
    } while (param_1 != iVar4);
    uVar2 = *(undefined4 *)(puVar5 + (param_1 >> 1) * 4 + iVar1);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    *(undefined4 *)(puVar6 + -4) = 0x11507;
    __stack_chk_fail_local();
    uVar2 = extraout_EDX;
  }
  return uVar2;
}



/* Function: alloca_usage @ 0001150e */

undefined4 alloca_usage(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_EDX;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  
  puVar6 = auStack_1c;
  puVar5 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  uVar2 = 0xffffffff;
  if (0 < param_1) {
    uVar3 = param_1 * 4 + 0x1b;
    for (; puVar5 != auStack_1c + -(uVar3 & 0xfffff000); puVar5 = puVar5 + -0x1000) {
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
    }
    uVar3 = uVar3 & 0xff0;
    iVar1 = -uVar3;
    puVar6 = puVar5 + iVar1;
    if (uVar3 != 0) {
      *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(puVar5 + -4);
    }
    iVar4 = 0;
    do {
      *(int *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + iVar4 * 4) = iVar4 * 3;
      iVar4 = iVar4 + 1;
    } while (param_1 != iVar4);
    uVar2 = *(undefined4 *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + (param_1 >> 1) * 4);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    *(undefined4 *)(puVar6 + -4) = 0x11594;
    __stack_chk_fail_local();
    uVar2 = extraout_EDX;
  }
  return uVar2;
}



/* Function: stack_alias @ 0001159b */

undefined4 stack_alias(void)

{
  return 0x14;
}



/* Function: test_stack_memory @ 000115a5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_stack_memory(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00013008);
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



/* Function: heap_basic @ 0001169f */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_basic(int param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  __ptr = malloc(param_1 * 4);
  iVar1 = 0;
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (; iVar1 < param_1; iVar1 = iVar1 + 1) {
      *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 2;
    }
    uVar2 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_calloc @ 0001170b */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_calloc(size_t param_1)

{
  void *__ptr;
  int iVar1;
  int iVar2;
  
  iVar2 = -1;
  __ptr = calloc(param_1,4);
  if (__ptr != (void *)0x0) {
    iVar2 = 0;
    for (iVar1 = 0; iVar1 < (int)param_1; iVar1 = iVar1 + 1) {
      iVar2 = iVar2 + *(int *)((int)__ptr + iVar1 * 4);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 0001175c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_realloc(void)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  void *__ptr_00;
  
  __ptr = malloc(0x14);
  uVar1 = 0xffffffff;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 1;
    __ptr[1] = 2;
    __ptr[2] = 3;
    __ptr[3] = 4;
    __ptr[4] = 5;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
    else {
      uVar1 = 0xfffffffd;
      if (*(int *)((int)__ptr_00 + 8) == 3) {
        uVar1 = 0x32;
      }
      free(__ptr_00);
    }
  }
  return uVar1;
}



/* Function: heap_array @ 000117f8 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_array(int param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  __ptr = malloc(param_1 * 4);
  iVar1 = 0;
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (; iVar1 < param_1; iVar1 = iVar1 + 1) {
      *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
    }
    uVar2 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_struct @ 00011864 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_struct(int param_1)

{
  void *__ptr;
  int iVar1;
  
  iVar1 = -1;
  __ptr = malloc(8);
  if (__ptr != (void *)0x0) {
    iVar1 = param_1 * 3;
    free(__ptr);
  }
  return iVar1;
}



/* Function: heap_nested @ 000118a5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_nested(undefined4 *param_1)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  undefined4 *puVar2;
  
  __ptr = malloc(8);
  *param_1 = __ptr;
  uVar1 = 0xffffffff;
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 10;
    puVar2 = malloc(8);
    __ptr[1] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
    else {
      *puVar2 = 0x14;
      puVar2[1] = 0;
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* Function: linked_list_heap @ 00011917 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *__ptr;
  int *__ptr_00;
  int iVar3;
  
  iVar3 = 0;
  piVar1 = (int *)0x0;
  __ptr = (int *)0x0;
  do {
    piVar2 = malloc(8);
    if (piVar2 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
        piVar1 = (int *)__ptr[1];
        free(__ptr);
        __ptr = piVar1;
      }
      return -1;
    }
    *piVar2 = iVar3;
    piVar2[1] = 0;
    __ptr_00 = piVar2;
    if (__ptr != (int *)0x0) {
      piVar1[1] = (int)piVar2;
      __ptr_00 = __ptr;
    }
    iVar3 = iVar3 + 10;
    piVar1 = piVar2;
    __ptr = __ptr_00;
  } while (iVar3 != 0x32);
  iVar3 = 0;
  piVar1 = __ptr_00;
  do {
    iVar3 = iVar3 + *piVar1;
    piVar1 = (int *)piVar1[1];
  } while (piVar1 != (int *)0x0);
  do {
    piVar1 = (int *)__ptr_00[1];
    free(__ptr_00);
    __ptr_00 = piVar1;
  } while (piVar1 != (int *)0x0);
  return iVar3;
}



/* Function: create_tree_node @ 000119b4 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void create_tree_node(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = param_1;
  }
  return;
}



/* Function: tree_heap_traversal @ 000119f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int tree_heap_traversal(void)

{
  int *__ptr;
  int iVar1;
  int iVar2;
  int *__ptr_00;
  int iVar3;
  int *piVar4;
  
  __ptr_00 = (int *)create_tree_node(10);
  iVar3 = -1;
  if (__ptr_00 != (int *)0x0) {
    iVar3 = create_tree_node(0x14);
    __ptr_00[1] = iVar3;
    piVar4 = (int *)create_tree_node(0x1e);
    __ptr = (int *)__ptr_00[1];
    __ptr_00[2] = (int)piVar4;
    if (__ptr != (int *)0x0) {
      if (piVar4 != (int *)0x0) {
        iVar3 = *__ptr;
        iVar1 = *__ptr_00;
        iVar2 = *piVar4;
        free(__ptr);
        free((void *)__ptr_00[2]);
        free(__ptr_00);
        return iVar3 + iVar1 + iVar2;
      }
      free(__ptr);
    }
    if ((void *)__ptr_00[2] != (void *)0x0) {
      free((void *)__ptr_00[2]);
    }
    free(__ptr_00);
    iVar3 = -2;
  }
  return iVar3;
}



/* Function: memory_leak @ 00011aac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 memory_leak(int param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  pvVar1 = malloc(param_1 * 4);
  iVar2 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    for (; iVar2 < param_1; iVar2 = iVar2 + 1) {
      *(int *)((int)pvVar1 + iVar2 * 4) = iVar2;
    }
    uVar3 = *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
  }
  return uVar3;
}



/* Function: dangling_pointer @ 00011b01 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 dangling_pointer(void)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  
  __ptr = malloc(4);
  uVar1 = 0xffffffff;
  if (__ptr != (undefined4 *)0x0) {
    __printf_chk(1,"value before free: %d\n",0x2a,0xffffffff);
    free(__ptr);
    uVar1 = *__ptr;
  }
  return uVar1;
}



/* Function: double_free @ 00011b50 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 double_free(undefined4 *param_1)

{
  void *__ptr;
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    __ptr = malloc(4);
    uVar1 = 0xffffffff;
    if (__ptr != (void *)0x0) {
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



/* Function: heap_overflow @ 00011ba5 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_overflow(void)

{
  undefined4 *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  __ptr = malloc(0x28);
  if (__ptr != (undefined4 *)0x0) {
    iVar1 = 0;
    do {
      __ptr[iVar1] = iVar1 * 100;
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0xb);
    uVar2 = *__ptr;
    free(__ptr);
  }
  return uVar2;
}



/* Function: test_heap_memory @ 00011bf2 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_heap_memory(void)

{
  undefined4 uVar1;
  __pid_t __pid;
  undefined *puVar2;
  undefined4 extraout_ECX;
  uint uVar3;
  int in_GS_OFFSET;
  undefined8 uVar4;
  uint uVar5;
  void *local_18;
  uint local_14;
  int local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x11bff;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013151);
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
  local_18 = (void *)0x0;
  uVar1 = heap_nested(&local_18);
  __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
  if (local_18 != (void *)0x0) {
    free(*(void **)((int)local_18 + 4));
    free(local_18);
  }
  uVar1 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar1,extraout_ECX);
  uVar1 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar1);
  uVar1 = memory_leak(5);
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar1);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid == 0) {
    uVar4 = dangling_pointer();
    __printf_chk(1,&DAT_000132a9,uVar4);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_0001331f);
  }
  else {
    waitpid(__pid,(int *)&local_14,0);
    uVar3 = local_14 & 0x7f;
    if (uVar3 == 0) {
      puVar2 = &DAT_000132b9;
      uVar5 = local_14 >> 8 & 0xff;
    }
    else {
      if ((char)uVar3 == '\0' || (char)((char)uVar3 + '\x01') < '\x01') goto LAB_00011dce;
      puVar2 = &DAT_000132de;
      uVar5 = uVar3;
    }
    __printf_chk(1,puVar2,uVar5,uVar3);
  }
LAB_00011dce:
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: global_var_access @ 00011de4 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void global_var_access(void)

{
  global_counter = global_counter + 1;
  return;
}



/* Function: global_var_read @ 00011e01 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00011e18 */

/* WARNING: Function: __x86.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */

undefined4 global_array_access(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(global_array + param_1 * 4);
  }
  return uVar1;
}



/* Function: static_local @ 00011e3e */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

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



/* Function: call_static_func @ 00011e67 */

int call_static_func(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00011e76 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00011e90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void call_extern_func(void)

{
  extern_function(5);
  return;
}



/* Function: read_const_data @ 00011eb2 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int read_const_data(void)

{
  return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00011ece */

undefined4 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00011ed5 */

undefined4 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00011edc */

undefined4 global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00011ee6 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_file_static(undefined4 param_1)

{
  file_scope_static = param_1;
  return;
}



/* Function: get_file_static @ 00011f02 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00011f17 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_global_callback(undefined4 param_1)

{
  global_func_ptr = param_1;
  return;
}



/* Function: call_global_callback @ 00011f33 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_global_callback(void)

{
  undefined4 uVar1;
  
  if (global_func_ptr != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011f55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: global_heap_store @ 00011f5c */

undefined4 global_heap_store(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* Function: static_complex_init @ 00011f71 */

undefined4 static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00011f7b */

int tls_access(int param_1)

{
  return param_1 * 2;
}



/* Function: init_order_test @ 00011f89 */

undefined4 init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 00011f93 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_static_global(void)

{
  undefined4 uVar1;
  
  puts(&DAT_0001332a);
  uVar1 = global_var_access();
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar1);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
  __printf_chk(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  __printf_chk(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  uVar1 = call_extern_func();
  __printf_chk(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
  uVar1 = read_const_data();
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",uVar1);
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  uVar1 = global_struct_access();
  __printf_chk(1,"STM-L2-05 (global_struct_access): %d\n",uVar1);
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  uVar1 = call_global_callback(5);
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar1);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  uVar1 = static_complex_init();
  __printf_chk(1,"STM-L2-09 (static_complex_init): %d\n",uVar1);
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: memop_memset @ 0001216c */

uint memop_memset(byte *param_1,int param_2,byte param_3)

{
  uint uVar1;
  byte *pbVar2;
  
  if ((param_1 == (byte *)0x0) || (pbVar2 = param_1, param_2 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *pbVar2 = param_3;
      pbVar2 = pbVar2 + 1;
    }
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}



/* Function: memop_memcpy @ 00012194 */

undefined4 memop_memcpy(undefined1 *param_1,undefined1 *param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  if ((param_3 == 0 || param_2 == (undefined1 *)0x0) || (param_1 == (undefined1 *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = param_3 & 0xfffffffc;
    puVar3 = param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    uVar1 = *(undefined4 *)(param_1 + (uVar2 - 4));
  }
  return uVar1;
}



/* Function: memop_memmove @ 000121d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memmove(void *param_1,uint param_2)

{
  int iVar1;
  
  if ((param_1 == (void *)0x0) || (param_2 < 2)) {
    iVar1 = -1;
  }
  else {
    memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
    iVar1 = (int)*(char *)((int)param_1 + 1);
  }
  return iVar1;
}



/* Function: memop_memcmp @ 00012213 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_3 == 0 || param_2 == (void *)0x0) || (param_1 == (void *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar1 = memcmp(param_1,param_2,param_3);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = -(uint)(iVar1 != 0);
    }
  }
  return iVar2;
}



/* Function: memop_bzero @ 00012271 */

uint memop_bzero(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  
  uVar1 = 0xffffffff;
  pbVar2 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *pbVar2 = 0;
      pbVar2 = pbVar2 + 1;
    }
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}



/* Function: memop_bcopy @ 00012292 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
  uint uVar1;
  
  if ((param_3 == 0 || param_2 == (byte *)0x0) || (param_1 == (void *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove(param_2,param_1,param_3);
    uVar1 = (uint)*param_2;
  }
  return uVar1;
}



/* Function: memop_unaligned_access @ 000122e1 */

undefined4 memop_unaligned_access(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 1);
  }
  return uVar1;
}



/* Function: memop_memory_barrier @ 000122f7 */

int memop_memory_barrier(int *param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != (int *)0x0) {
    LOCK();
    UNLOCK();
    iVar1 = *param_1 + *param_1;
  }
  return iVar1;
}



/* Function: test_memory_op_functions @ 00012315 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_memory_op_functions(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int in_GS_OFFSET;
  byte bVar8;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168 [5];
  undefined4 local_154 [5];
  undefined4 local_13d;
  undefined4 local_139;
  undefined1 local_135 [10];
  char local_12b [11];
  undefined1 local_120 [256];
  int local_20;
  undefined4 uStack_14;
  
  bVar8 = 0;
  uStack_14 = 0x1232a;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_0001358c);
  puVar4 = &DAT_00013660;
  puVar6 = local_168;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  puVar4 = local_154;
  for (iVar3 = 5; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + (uint)bVar8 * -2 + 1;
  }
  uVar1 = memop_memset(local_120,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
  uVar1 = memop_memcpy(local_154,local_168,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
  pcVar5 = "HelloWorld";
  pcVar7 = local_12b;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  uVar1 = memop_memmove(local_12b,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
  local_180 = 1;
  local_17c = 2;
  local_178 = 3;
  local_174 = 1;
  local_170 = 2;
  local_16c = 4;
  iVar3 = memcmp(&local_180,&local_174,0xc);
  iVar2 = 1;
  if (iVar3 < 1) {
    iVar2 = -(uint)(iVar3 != 0);
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2,iVar3);
  uVar1 = memop_bzero(local_135,10);
  __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
  local_13d = 0x4030201;
  local_139 = 0;
  uVar1 = memop_bcopy(&local_13d,&local_139,4);
  __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  local_184 = 5;
  uVar1 = memop_memory_barrier(&local_184);
  __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
  if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}



/* Function: __x86.get_pc_thunk.ax @ 00012523 */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: __x86.get_pc_thunk.cx @ 00012527 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_cx(void)

{
  return;
}



/* Function: extern_function @ 0001252b */

int extern_function(int param_1)

{
  return param_1 * 3;
}



/* Function: __stack_chk_fail_local @ 00012540 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 00012560 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001257a) */
/* WARNING: Removing unreachable block (ram,0x00012590) */
/* WARNING: Removing unreachable block (ram,0x0001259d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 000125ac */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 71 */
