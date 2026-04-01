/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/x86/3/3_gcc_O3_no_g
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



/* Function: main @ 00011250 */

undefined4 main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: _start @ 00011280 */

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void processEntry _start(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_4 [4];
  
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: __i686.get_pc_thunk.bx @ 000112ac */

/* WARNING: This is an inlined function */

void __i686_get_pc_thunk_bx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.bx @ 000112b0 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_bx(void)

{
  return;
}



/* Function: deregister_tm_clones @ 000112c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000112db) */
/* WARNING: Removing unreachable block (ram,0x000112e5) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00011300 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x0001132e) */
/* WARNING: Removing unreachable block (ram,0x00011338) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 00011350 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */
/* WARNING: Removing unreachable block (ram,0x000113ac) */
/* WARNING: Removing unreachable block (ram,0x000113b0) */

void __do_global_dtors_aux(void)

{
  if (completed_1 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_1 = '\x01';
  }
  return;
}



/* Function: __x86.get_pc_thunk.dx @ 000113e9 */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_dx(void)

{
  return;
}



/* Function: __x86.get_pc_thunk.di @ 000113ed */

/* WARNING: This is an inlined function */

void __x86_get_pc_thunk_di(void)

{
  return;
}



/* Function: double_value @ 00011400 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: alloca_usage.constprop.0 @ 00011410 */

undefined4 alloca_usage_constprop_0(void)

{
  return 0xf;
}



/* Function: local_vars @ 00011420 */

int local_vars(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: local_array @ 00011430 */

int local_array(int param_1)

{
  return param_1 * 5;
}



/* Function: local_struct @ 00011440 */

int local_struct(int param_1)

{
  return param_1 * 3;
}



/* Function: address_of_local @ 00011450 */

undefined4 address_of_local(undefined4 *param_1)

{
  *param_1 = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00011470 */

int address_of_array(int *param_1)

{
  return *param_1 * 2;
}



/* Function: large_stack_frame @ 00011480 */

int large_stack_frame(void)

{
  int iVar1;
  int in_GS_OFFSET;
  char local_810 [2048];
  int local_10;
  
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  iVar1 = 0;
  do {
    local_810[iVar1] = (char)iVar1;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x800);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return (int)local_810[0x400];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: vla_stack @ 000114e0 */

undefined4 vla_stack(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar8;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  undefined1 *puVar7;
  
  puVar8 = auStack_1c;
  puVar6 = auStack_1c;
  puVar7 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (param_1 - 1U < 1000) {
    uVar5 = param_1 * 4 + 0xf;
    puVar2 = auStack_1c;
    while (puVar7 != auStack_1c + -(uVar5 & 0xfffff000)) {
      puVar6 = puVar2 + -0x1000;
      *(undefined4 *)(puVar2 + -4) = *(undefined4 *)(puVar2 + -4);
      puVar7 = puVar2 + -0x1000;
      puVar2 = puVar2 + -0x1000;
    }
    uVar5 = uVar5 & 0xff0;
    iVar1 = -uVar5;
    puVar8 = puVar6 + iVar1;
    if (uVar5 != 0) {
      *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(puVar6 + -4);
    }
    iVar3 = 0;
    do {
      *(int *)(puVar6 + iVar3 * 2 + iVar1) = iVar3;
      iVar3 = iVar3 + 2;
    } while (iVar3 != param_1 * 2);
    uVar4 = *(undefined4 *)(puVar6 + (param_1 >> 1) * 4 + iVar1);
  }
  else {
    uVar4 = 0xffffffff;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -4) = &UNK_00011583;
    __stack_chk_fail_local();
  }
  return uVar4;
}



/* Function: alloca_usage @ 00011590 */

undefined4 alloca_usage(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar8;
  int in_GS_OFFSET;
  undefined1 auStack_1c [12];
  int local_10;
  undefined1 *puVar7;
  
  puVar8 = auStack_1c;
  puVar6 = auStack_1c;
  puVar7 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (param_1 < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar5 = param_1 * 4 + 0x1b;
    puVar2 = auStack_1c;
    while (puVar7 != auStack_1c + -(uVar5 & 0xfffff000)) {
      puVar6 = puVar2 + -0x1000;
      *(undefined4 *)(puVar2 + -4) = *(undefined4 *)(puVar2 + -4);
      puVar7 = puVar2 + -0x1000;
      puVar2 = puVar2 + -0x1000;
    }
    uVar5 = uVar5 & 0xff0;
    iVar1 = -uVar5;
    puVar8 = puVar6 + iVar1;
    if (uVar5 != 0) {
      *(undefined4 *)(puVar6 + -4) = *(undefined4 *)(puVar6 + -4);
    }
    iVar3 = 0;
    do {
      *(int *)(((uint)(puVar6 + iVar1 + 0xf) & 0xfffffff0) + iVar3 * 4) = iVar3 * 3;
      iVar3 = iVar3 + 1;
    } while (param_1 != iVar3);
    uVar4 = *(undefined4 *)(((uint)(puVar6 + iVar1 + 0xf) & 0xfffffff0) + (param_1 >> 1) * 4);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar8 + -4) = &UNK_0001162b;
    __stack_chk_fail_local();
  }
  return uVar4;
}



/* Function: stack_alias @ 00011630 */

undefined4 stack_alias(void)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00011640 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_stack_memory(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00013008);
  __printf_chk(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  __printf_chk(1,"MEM-L1-02 (local_array): %d\n",10);
  __printf_chk(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  __printf_chk(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  __printf_chk(1,"MEM-L1-05 (address_of_array): %d\n",2);
  uVar1 = large_stack_frame();
  __printf_chk(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
  __printf_chk(1,"MEM-L2-02 (vla_stack): %d\n",10);
  uVar1 = alloca_usage_constprop_0();
  __printf_chk(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00011720 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_basic(int param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar1 = 0;
      do {
        *(int *)((int)__ptr + iVar1 * 2) = iVar1;
        iVar1 = iVar1 + 2;
      } while (param_1 * 2 != iVar1);
    }
    uVar2 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_calloc @ 00011790 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int heap_calloc(size_t param_1)

{
  int *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = calloc(param_1,4);
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
      } while (__ptr + param_1 != piVar1);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 00011800 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_realloc(void)

{
  undefined4 *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  
  __ptr = malloc(0x14);
  if (__ptr == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    *__ptr = 1;
    __ptr[1] = 2;
    __ptr[2] = 3;
    __ptr[3] = 4;
    __ptr[4] = 5;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      uVar1 = 0xfffffffe;
      free(__ptr);
    }
    else {
      uVar1 = 0x32;
      if (*(int *)((int)__ptr_00 + 8) != 3) {
        uVar1 = 0xfffffffd;
      }
      free(__ptr_00);
    }
  }
  return uVar1;
}



/* Function: heap_array @ 000118a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_array(int param_1)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar1 = 0;
      do {
        *(int *)((int)__ptr + iVar1 * 4) = iVar1 * 3;
        iVar1 = iVar1 + 1;
      } while (param_1 != iVar1);
    }
    uVar2 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_struct @ 00011910 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: heap_nested @ 00011960 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_nested(undefined4 *param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  __ptr = malloc(8);
  *param_1 = __ptr;
  if (__ptr == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *__ptr = 10;
    puVar1 = malloc(8);
    __ptr[1] = puVar1;
    if (puVar1 == (undefined4 *)0x0) {
      free(__ptr);
      uVar2 = 0xfffffffe;
    }
    else {
      *puVar1 = 0x14;
      puVar1[1] = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}



/* Function: linked_list_heap @ 000119e0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *__ptr;
  
  iVar4 = 0;
  __ptr = (int *)0x0;
  piVar3 = (int *)0x0;
  while( true ) {
    piVar2 = malloc(8);
    if (piVar2 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
        piVar3 = (int *)__ptr[1];
        free(__ptr);
        __ptr = piVar3;
      }
      return -1;
    }
    *piVar2 = iVar4;
    piVar2[1] = 0;
    piVar1 = piVar2;
    if (__ptr != (int *)0x0) {
      piVar3[1] = (int)piVar2;
      piVar1 = __ptr;
    }
    __ptr = piVar1;
    if (iVar4 == 0x28) break;
    iVar4 = iVar4 + 10;
    piVar3 = piVar2;
  }
  iVar4 = 0;
  piVar3 = __ptr;
  do {
    iVar4 = iVar4 + *piVar3;
    piVar3 = (int *)piVar3[1];
  } while (piVar3 != (int *)0x0);
  do {
    piVar3 = (int *)__ptr[1];
    free(__ptr);
    __ptr = piVar3;
  } while (piVar3 != (int *)0x0);
  return iVar4;
}



/* Function: create_tree_node @ 00011a90 */

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



/* Function: tree_heap_traversal @ 00011ad0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 tree_heap_traversal(void)

{
  void *__ptr;
  void *pvVar1;
  void *__ptr_00;
  undefined4 uVar2;
  
  __ptr = malloc(0xc);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pvVar1 = malloc(0xc);
    if (pvVar1 == (void *)0x0) {
      pvVar1 = malloc(0xc);
      if (pvVar1 != (void *)0x0) {
        free(pvVar1);
      }
    }
    else {
      __ptr_00 = malloc(0xc);
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



/* Function: memory_leak @ 00011b90 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 memory_leak(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  
  pvVar1 = malloc(param_1 * 4);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar3 = 0;
      do {
        *(int *)((int)pvVar1 + iVar3 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (param_1 != iVar3);
    }
    uVar2 = *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
  }
  return uVar2;
}



/* Function: dangling_pointer @ 00011bf0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 dangling_pointer(void)

{
  undefined4 *__ptr;
  undefined4 uVar1;
  
  __ptr = malloc(4);
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



/* Function: double_free @ 00011c40 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 double_free(undefined4 *param_1)

{
  void *__ptr;
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    __ptr = malloc(4);
    if (__ptr != (void *)0x0) {
      free(__ptr);
      free(__ptr);
      return 0xfffffffe;
    }
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* Function: heap_overflow @ 00011ca0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 heap_overflow(void)

{
  void *__ptr;
  undefined4 uVar1;
  
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    free(__ptr);
    uVar1 = 0;
  }
  return uVar1;
}



/* Function: test_heap_memory @ 00011ce0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_heap_memory(void)

{
  int *piVar1;
  void *pvVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  __pid_t __pid;
  uint uVar8;
  int iVar9;
  int in_GS_OFFSET;
  uint local_24;
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x11ced;
  local_20 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_000130ea);
  pvVar2 = malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)pvVar2 + 4) = 2;
    *(undefined4 *)((int)pvVar2 + 8) = 4;
    *(undefined4 *)((int)pvVar2 + 0xc) = 6;
    *(undefined4 *)((int)pvVar2 + 0x10) = 8;
    *(undefined4 *)((int)pvVar2 + 0x14) = 10;
    *(undefined4 *)((int)pvVar2 + 0x18) = 0xc;
    *(undefined4 *)((int)pvVar2 + 0x1c) = 0xe;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x10;
    *(undefined4 *)((int)pvVar2 + 0x24) = 0x12;
    free(pvVar2);
    uVar3 = 10;
  }
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar3);
  piVar4 = calloc(5,4);
  if (piVar4 == (int *)0x0) {
    iVar9 = -1;
  }
  else {
    iVar9 = piVar4[1] + *piVar4 + piVar4[2] + piVar4[3] + piVar4[4];
    free(piVar4);
  }
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar9);
  uVar3 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar3);
  pvVar2 = malloc(0x28);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)pvVar2 + 4) = 3;
    *(undefined4 *)((int)pvVar2 + 8) = 6;
    *(undefined4 *)((int)pvVar2 + 0xc) = 9;
    *(undefined4 *)((int)pvVar2 + 0x10) = 0xc;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0xf;
    *(undefined4 *)((int)pvVar2 + 0x18) = 0x12;
    *(undefined4 *)((int)pvVar2 + 0x1c) = 0x15;
    *(undefined4 *)((int)pvVar2 + 0x20) = 0x18;
    *(undefined4 *)((int)pvVar2 + 0x24) = 0x1b;
    free(pvVar2);
    uVar3 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar3);
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    free(pvVar2);
    uVar3 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar3);
  pvVar2 = malloc(8);
  if (pvVar2 == (void *)0x0) {
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff,0);
  }
  else {
    puVar5 = malloc(8);
    *(undefined4 **)((int)pvVar2 + 4) = puVar5;
    if (puVar5 == (undefined4 *)0x0) {
      free(pvVar2);
      uVar3 = 0xfffffffe;
    }
    else {
      *puVar5 = 0x14;
      puVar5[1] = 0;
      uVar3 = 0;
    }
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar3);
    free(*(void **)((int)pvVar2 + 4));
    free(pvVar2);
  }
  iVar9 = 0;
  piVar4 = (int *)0x0;
  piVar7 = (int *)0x0;
  do {
    piVar6 = malloc(8);
    if (piVar6 == (int *)0x0) {
      while (piVar4 != (int *)0x0) {
        piVar7 = (int *)piVar4[1];
        free(piVar4);
        piVar4 = piVar7;
      }
      iVar9 = -1;
LAB_00011f75:
      __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar9);
      uVar3 = tree_heap_traversal();
      __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar3);
      puVar5 = malloc(0x14);
      if (puVar5 == (undefined4 *)0x0) {
        uVar3 = 0xffffffff;
      }
      else {
        *puVar5 = 0;
        puVar5[1] = 1;
        puVar5[2] = 2;
        puVar5[3] = 3;
        puVar5[4] = 4;
        uVar3 = 2;
      }
      __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar3);
      __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
      __pid = fork();
      if (__pid == 0) {
        puVar5 = malloc(4);
        if (puVar5 == (undefined4 *)0x0) {
          uVar3 = 0xffffffff;
        }
        else {
          __printf_chk(1,"value before free: %d\n",0x2a);
          free(puVar5);
          uVar3 = *puVar5;
        }
        __printf_chk(1,&DAT_0001319c,uVar3);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (__pid < 1) {
        perror(&DAT_000131ac);
      }
      else {
        waitpid(__pid,(int *)&local_24,0);
        uVar8 = local_24 & 0x7f;
        if (uVar8 == 0) {
          __printf_chk(1,&DAT_000133bc,local_24 >> 8 & 0xff);
        }
        else if ('\x01' < (char)((char)uVar8 + '\x01')) {
          __printf_chk(1,&DAT_000133e4,uVar8);
        }
      }
      if (local_20 == *(int *)(in_GS_OFFSET + 0x14)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail_local();
    }
    *piVar6 = iVar9;
    piVar6[1] = 0;
    piVar1 = piVar6;
    if (piVar4 != (int *)0x0) {
      piVar7[1] = (int)piVar6;
      piVar1 = piVar4;
    }
    piVar4 = piVar1;
    if (iVar9 == 0x28) {
      iVar9 = 0;
      piVar7 = piVar4;
      do {
        iVar9 = iVar9 + *piVar7;
        piVar7 = (int *)piVar7[1];
      } while (piVar7 != (int *)0x0);
      do {
        piVar7 = (int *)piVar4[1];
        free(piVar4);
        piVar4 = piVar7;
      } while (piVar7 != (int *)0x0);
      goto LAB_00011f75;
    }
    iVar9 = iVar9 + 10;
    piVar7 = piVar6;
  } while( true );
}



/* Function: global_var_access @ 00012180 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

void global_var_access(void)

{
  global_counter = global_counter + 1;
  return;
}



/* Function: global_var_read @ 000121a0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 000121c0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */

undefined4 global_array_access(uint param_1)

{
  if (param_1 < 10) {
    return *(undefined4 *)(global_array + param_1 * 4);
  }
  return 0xffffffff;
}



/* Function: static_local @ 000121f0 */

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



/* Function: call_static_func @ 00012220 */

int call_static_func(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00012230 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00012250 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void call_extern_func(void)

{
  extern_function(5);
  return;
}



/* Function: read_const_data @ 00012270 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

int read_const_data(void)

{
  return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00012290 */

undefined4 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 000122a0 */

undefined4 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 000122b0 */

undefined4 global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 000122c0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_file_static(undefined4 param_1)

{
  file_scope_static = param_1;
  return;
}



/* Function: get_file_static @ 000122e0 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00012300 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

void set_global_callback(undefined4 param_1)

{
  global_func_ptr = param_1;
  return;
}



/* Function: call_global_callback @ 00012320 */

/* WARNING: Function: __x86.get_pc_thunk.ax replaced with injection: get_pc_thunk_ax */

undefined4 call_global_callback(void)

{
  undefined4 uVar1;
  
  if (global_func_ptr != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00012340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: global_heap_store @ 00012350 */

undefined4 global_heap_store(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}



/* Function: static_complex_init @ 00012370 */

undefined4 static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00012380 */

int tls_access(int param_1)

{
  return param_1 * 2;
}



/* Function: init_order_test @ 00012390 */

undefined4 init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 000123a0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_static_global(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00013428);
  global_counter = global_counter + 1;
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",counter_1);
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



/* Function: memop_memset @ 00012580 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
  uint uVar1;
  
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(param_1,param_3,param_2);
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}



/* Function: memop_memcpy @ 000125d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

undefined4 memop_memcpy(void *param_1,void *param_2,uint param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == (void *)0x0 || param_3 == 0) || (param_1 == (void *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memcpy(param_1,param_2,param_3);
    uVar1 = *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
  }
  return uVar1;
}



/* Function: memop_memmove @ 00012630 */

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



/* Function: memop_memcmp @ 00012680 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

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



/* Function: memop_bzero @ 000126f0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

uint memop_bzero(byte *param_1,size_t param_2)

{
  uint uVar1;
  
  if (param_1 == (byte *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    memset(param_1,0,param_2);
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}



/* Function: memop_bcopy @ 00012730 */

/* WARNING: Function: __x86.get_pc_thunk.di replaced with injection: get_pc_thunk_di */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
  uint uVar1;
  
  if ((param_2 == (byte *)0x0 || param_3 == 0) || (param_1 == (void *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memmove(param_2,param_1,param_3);
    uVar1 = (uint)*param_2;
  }
  return uVar1;
}



/* Function: memop_unaligned_access @ 00012790 */

undefined4 memop_unaligned_access(int param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}



/* Function: memop_memory_barrier @ 000127b0 */

int memop_memory_barrier(int *param_1)

{
  if (param_1 != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *param_1 + *param_1;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 000127d0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void test_memory_op_functions(void)

{
  int iVar1;
  int iVar2;
  int in_GS_OFFSET;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_125;
  undefined4 local_121;
  undefined2 local_11d;
  undefined4 local_11b;
  undefined4 local_117;
  undefined2 local_113;
  undefined1 local_111;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  int local_10;
  undefined4 uStack_8;
  
  uStack_8 = 0x127da;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  puts(&DAT_00013650);
  local_110 = 0x41414141;
  local_108 = 0x4141;
  local_10c = 0x41414141;
  __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
  __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  local_111 = 0;
  local_113 = 0x646c;
  local_11b = 0x6c6c6548;
  local_117 = 0x726f576f;
  memmove((void *)((int)&local_11b + 1),&local_11b,9);
  __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
  local_140 = 1;
  local_13c = 2;
  local_138 = 3;
  local_134 = 1;
  local_130 = 2;
  local_12c = 4;
  iVar1 = memcmp(&local_140,&local_134,0xc);
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar2);
  local_125 = 0;
  local_11d = 0;
  local_121 = 0;
  __printf_chk(1,"MEMOP-L2-05: %d\n",0);
  __printf_chk(1,"MEMOP-L2-06: %d\n",1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  LOCK();
  UNLOCK();
  __printf_chk(1,"MEMOP-L3-02: %d\n",10);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail_local();
}



/* Function: __x86.get_pc_thunk.ax @ 0001298f */

/* WARNING: This is an inlined function */

undefined4 __x86_get_pc_thunk_ax(void)

{
  undefined4 unaff_retaddr;
  
  return unaff_retaddr;
}



/* Function: extern_function @ 000129a0 */

int extern_function(int param_1)

{
  return param_1 * 3;
}



/* Function: __stack_chk_fail_local @ 000129b0 */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void __stack_chk_fail_local(void)

{
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: __do_global_ctors_aux @ 000129d0 */

/* WARNING: Function: __x86.get_pc_thunk.dx replaced with injection: get_pc_thunk_dx */
/* WARNING: Removing unreachable block (ram,0x000129ea) */
/* WARNING: Removing unreachable block (ram,0x00012a00) */
/* WARNING: Removing unreachable block (ram,0x00012a0d) */

void __do_global_ctors_aux(void)

{
  return;
}



/* Function: _fini @ 00012a1c */

/* WARNING: Function: __x86.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */

void _fini(void)

{
  __do_global_dtors_aux();
  return;
}



/* Total functions decompiled: 71 */
