/*
 * Decompiled by Ghidra 12.0
 * Binary: /Users/eren/Desktop/Antigravity/compiler/build/arm32/3/3_gcc_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */

/* Function: _init @ 0001058c */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn();
  return iVar1;
}



/* Function: main @ 00010684 */

undefined4 main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
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

int double_value(int param_1)

{
  return param_1 << 1;
}



/* Function: alloca_usage.constprop.0 @ 000107a0 */

undefined4 alloca_usage_constprop_0(void)

{
  return 0xf;
}



/* Function: local_vars @ 000107a8 */

int local_vars(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: local_array @ 000107b4 */

int local_array(int param_1)

{
  return param_1 * 5;
}



/* Function: local_struct @ 000107bc */

int local_struct(int param_1)

{
  return param_1 * 3;
}



/* Function: address_of_local @ 000107c4 */

undefined4 address_of_local(undefined4 *param_1)

{
  *param_1 = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 000107d4 */

int address_of_array(int *param_1)

{
  return *param_1 << 1;
}



/* Function: large_stack_frame @ 000107e0 */

/* WARNING: Removing unreachable block (ram,0x00010848) */

void large_stack_frame(void)

{
  char cVar1;
  char *pcVar2;
  char cStack_80d;
  char local_80c [2056];
  
  cVar1 = '\0';
  pcVar2 = &cStack_80d;
  do {
    pcVar2 = pcVar2 + 1;
    *pcVar2 = cVar1;
    cVar1 = cVar1 + '\x01';
  } while (pcVar2 != local_80c + 0x7ff);
  return;
}



/* Function: vla_stack @ 00010850 */

void vla_stack(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int aiStack_14 [3];
  
  aiStack_14[2] = 0;
  if (param_1 - 1U < 1000) {
    iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
    iVar4 = 0;
    param_2 = param_1 * 2;
    piVar3 = (int *)((int)aiStack_14 + iVar1);
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = iVar4;
      iVar4 = iVar4 + 2;
    } while (iVar4 != param_2);
    uVar2 = *(undefined4 *)((int)aiStack_14 + (param_1 >> 1) * 4 + iVar1 + 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (aiStack_14[2] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,param_2,aiStack_14[2],0);
}



/* Function: alloca_usage @ 000108e0 */

void alloca_usage(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int aiStack_14 [3];
  
  aiStack_14[2] = 0;
  if (param_1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
    iVar3 = 0;
    piVar4 = (int *)((int)aiStack_14 + iVar1);
    param_2 = (int *)((int)aiStack_14 + param_1 * 4 + iVar1);
    do {
      piVar4 = piVar4 + 1;
      *piVar4 = iVar3;
      iVar3 = iVar3 + 3;
    } while (piVar4 != param_2);
    uVar2 = *(undefined4 *)((int)aiStack_14 + (param_1 >> 1) * 4 + iVar1 + 4);
  }
  if (aiStack_14[2] == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2,param_2,aiStack_14[2],0);
}



/* Function: stack_alias @ 00010970 */

undefined4 stack_alias(void)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00010978 */

void test_stack_memory(void)

{
  undefined4 uVar1;
  
  puts(&DAT_0001297c);
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



/* Function: heap_basic @ 00010a48 */

undefined4 heap_basic(int param_1)

{
  void *__ptr;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  __ptr = malloc(param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar2 = 0;
      piVar1 = (int *)((int)__ptr + -4);
      do {
        piVar1 = piVar1 + 1;
        *piVar1 = iVar2;
        iVar2 = iVar2 + 2;
      } while (iVar2 != param_1 * 2);
    }
    uVar3 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar3;
}



/* Function: heap_calloc @ 00010aa4 */

int heap_calloc(size_t param_1)

{
  void *__ptr;
  int *piVar1;
  int iVar2;
  
  __ptr = calloc(param_1,4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    if (0 < (int)param_1) {
      piVar1 = (int *)((int)__ptr + -4);
      do {
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + *piVar1;
      } while ((int *)((int)__ptr + param_1 * 4 + -4) != piVar1);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 00010af8 */

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
    __ptr[4] = 5;
    __ptr[2] = 3;
    __ptr[3] = 4;
    *__ptr = 1;
    __ptr[1] = 2;
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
    else {
      if (*(int *)((int)__ptr_00 + 8) == 3) {
        uVar1 = 0x32;
      }
      else {
        uVar1 = 0xfffffffd;
      }
      free(__ptr_00);
    }
  }
  return uVar1;
}



/* Function: heap_array @ 00010b74 */

undefined4 heap_array(int param_1)

{
  void *__ptr;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  __ptr = malloc(param_1 * 4);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar1 = 0;
      piVar2 = (int *)((int)__ptr + -4);
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar1 = iVar1 + 3;
      } while (piVar2 != (int *)((int)__ptr + (param_1 * 4 - 4U)));
    }
    uVar3 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar3;
}



/* Function: heap_struct @ 00010bd8 */

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



/* Function: heap_nested @ 00010c08 */

undefined4 heap_nested(undefined4 *param_1)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  
  __ptr = malloc(8);
  *param_1 = __ptr;
  if (__ptr == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *__ptr = 10;
  puVar1 = malloc(8);
  __ptr[1] = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x14;
    puVar1[1] = 0;
    return 0;
  }
  free(__ptr);
  return 0xfffffffe;
}



/* Function: linked_list_heap @ 00010c74 */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *__ptr;
  int *piVar4;
  int iVar5;
  
  piVar1 = malloc(8);
  iVar5 = 0;
  __ptr = (int *)0x0;
  piVar4 = (int *)0x0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
        piVar4 = (int *)__ptr[1];
        free(__ptr);
        __ptr = piVar4;
      }
      return -1;
    }
    *piVar1 = iVar5;
    piVar1[1] = 0;
    iVar5 = iVar5 + 10;
    piVar2 = piVar1;
    if (__ptr != (int *)0x0) {
      piVar4[1] = (int)piVar1;
      piVar2 = __ptr;
    }
    __ptr = piVar2;
    if (iVar5 == 0x32) break;
    piVar2 = malloc(8);
    piVar4 = piVar1;
    piVar1 = piVar2;
  }
  iVar5 = 0;
  piVar4 = __ptr;
  do {
    iVar3 = *piVar4;
    piVar4 = (int *)piVar4[1];
    iVar5 = iVar5 + iVar3;
  } while (piVar4 != (int *)0x0);
  do {
    piVar4 = (int *)__ptr[1];
    free(__ptr);
    __ptr = piVar4;
  } while (piVar4 != (int *)0x0);
  return iVar5;
}



/* Function: create_tree_node @ 00010d2c */

void create_tree_node(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}



/* Function: tree_heap_traversal @ 00010d54 */

undefined4 tree_heap_traversal(void)

{
  void *__ptr;
  void *pvVar1;
  void *__ptr_00;
  
  __ptr = malloc(0xc);
  if (__ptr == (void *)0x0) {
    return 0xffffffff;
  }
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
  return 0xfffffffe;
}



/* Function: memory_leak @ 00010ddc */

undefined4 memory_leak(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  
  pvVar1 = malloc(param_1 << 2);
  if (pvVar1 != (void *)0x0) {
    if (0 < param_1) {
      iVar3 = 0;
      piVar2 = (int *)((int)pvVar1 + -4);
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar3;
        iVar3 = iVar3 + 1;
      } while (param_1 != iVar3);
    }
    return *(undefined4 *)((int)pvVar1 + (param_1 / 2) * 4);
  }
  return 0xffffffff;
}



/* Function: dangling_pointer @ 00010e2c */

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



/* Function: double_free @ 00010e6c */

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



/* Function: heap_overflow @ 00010eac */

undefined4 heap_overflow(void)

{
  void *__ptr;
  
  __ptr = malloc(0x28);
  if (__ptr != (void *)0x0) {
    free(__ptr);
    return 0;
  }
  return 0xffffffff;
}



/* Function: test_heap_memory @ 00010ed4 */

void test_heap_memory(void)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  __pid_t __pid;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *__ptr;
  uint local_20;
  int local_1c;
  
  local_1c = 0;
  puts(&DAT_00012ad8);
  pvVar1 = malloc(0x28);
  if (pvVar1 == (void *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 4) = 2;
    *(undefined4 *)((int)pvVar1 + 8) = 4;
    *(undefined4 *)((int)pvVar1 + 0xc) = 6;
    *(undefined4 *)((int)pvVar1 + 0x10) = 8;
    *(undefined4 *)((int)pvVar1 + 0x18) = 0xc;
    *(undefined4 *)((int)pvVar1 + 0x14) = 10;
    *(undefined4 *)((int)pvVar1 + 0x24) = 0x12;
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0xe;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0x10;
    free(pvVar1);
    uVar6 = 10;
  }
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar6);
  piVar2 = calloc(5,4);
  if (piVar2 == (int *)0x0) {
    iVar8 = -1;
  }
  else {
    iVar8 = *piVar2 + piVar2[1] + piVar2[2] + piVar2[3] + piVar2[4];
    free(piVar2);
  }
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",iVar8);
  uVar6 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar6);
  pvVar1 = malloc(0x28);
  if (pvVar1 == (void *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    *(undefined4 *)((int)pvVar1 + 4) = 3;
    *(undefined4 *)((int)pvVar1 + 8) = 6;
    *(undefined4 *)((int)pvVar1 + 0xc) = 9;
    *(undefined4 *)((int)pvVar1 + 0x10) = 0xc;
    *(undefined4 *)((int)pvVar1 + 0x18) = 0x12;
    *(undefined4 *)((int)pvVar1 + 0x14) = 0xf;
    *(undefined4 *)((int)pvVar1 + 0x24) = 0x1b;
    *(undefined4 *)((int)pvVar1 + 0x1c) = 0x15;
    *(undefined4 *)((int)pvVar1 + 0x20) = 0x18;
    free(pvVar1);
    uVar6 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar6);
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
    uVar6 = 0xffffffff;
  }
  else {
    free(pvVar1);
    uVar6 = 0xf;
  }
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar6);
  pvVar1 = malloc(8);
  if (pvVar1 == (void *)0x0) {
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    puVar3 = malloc(8);
    *(undefined4 **)((int)pvVar1 + 4) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      free(pvVar1);
      uVar6 = 0xfffffffe;
    }
    else {
      uVar6 = 0;
      *puVar3 = 0x14;
      puVar3[1] = 0;
    }
    __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar6);
    free(*(void **)((int)pvVar1 + 4));
    free(pvVar1);
  }
  piVar4 = malloc(8);
  iVar8 = 0;
  __ptr = (int *)0x0;
  piVar2 = (int *)0x0;
  do {
    if (piVar4 == (int *)0x0) {
      while (__ptr != (int *)0x0) {
        piVar2 = (int *)__ptr[1];
        free(__ptr);
        __ptr = piVar2;
      }
      iVar8 = -1;
LAB_000110fc:
      __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",iVar8);
      uVar6 = tree_heap_traversal();
      __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar6);
      puVar3 = malloc(0x14);
      if (puVar3 == (undefined4 *)0x0) {
        uVar6 = 0xffffffff;
      }
      else {
        puVar3[2] = 2;
        puVar3[3] = 3;
        uVar6 = 2;
        *puVar3 = 0;
        puVar3[1] = 1;
        puVar3[4] = 4;
      }
      __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar6);
      __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
      __pid = fork();
      if (__pid == 0) {
        puVar3 = malloc(4);
        if (puVar3 == (undefined4 *)0x0) {
          uVar6 = 0xffffffff;
        }
        else {
          __printf_chk(1,"value before free: %d\n",0x2a);
          free(puVar3);
          uVar6 = *puVar3;
        }
        __printf_chk(1,&DAT_00012c24,uVar6);
                    /* WARNING: Subroutine does not return */
        exit(0);
      }
      if (__pid < 1) {
        if (local_1c == 0) {
          perror(&DAT_00012ca0);
          return;
        }
      }
      else {
        waitpid(__pid,(int *)&local_20,0);
        if ((local_20 & 0x7f) == 0) {
          __printf_chk(1,&DAT_00012c34,(int)local_20 >> 8 & 0xff);
        }
        else if (0x1ffffff < (int)(((local_20 & 0x7f) + 1) * 0x1000000)) {
          __printf_chk(1,&DAT_00012c5c);
        }
        if (local_1c == 0) {
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    *piVar4 = iVar8;
    piVar4[1] = 0;
    iVar8 = iVar8 + 10;
    piVar5 = piVar4;
    if (__ptr != (int *)0x0) {
      piVar2[1] = (int)piVar4;
      piVar5 = __ptr;
    }
    __ptr = piVar5;
    if (iVar8 == 0x32) {
      iVar8 = 0;
      piVar2 = __ptr;
      do {
        iVar7 = *piVar2;
        piVar2 = (int *)piVar2[1];
        iVar8 = iVar8 + iVar7;
      } while (piVar2 != (int *)0x0);
      do {
        piVar2 = (int *)__ptr[1];
        free(__ptr);
        __ptr = piVar2;
      } while (piVar2 != (int *)0x0);
      goto LAB_000110fc;
    }
    piVar5 = malloc(8);
    piVar2 = piVar4;
    piVar4 = piVar5;
  } while( true );
}



/* Function: global_var_access @ 00011330 */

void global_var_access(void)

{
  global_counter = global_counter + 1;
  return;
}



/* Function: global_var_read @ 00011348 */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 0001135c */

undefined4 global_array_access(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(&global_array + param_1 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



/* Function: static_local @ 00011374 */

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



/* Function: call_static_func @ 00011398 */

int call_static_func(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 000113a4 */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 000113b8 */

void call_extern_func(void)

{
  extern_function(5);
  return;
}



/* Function: read_const_data @ 000113c0 */

int read_const_data(void)

{
  return *(byte *)(const_string + 4) + 0x2a;
}



/* Function: access_bss_var @ 000113d8 */

undefined4 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 000113e0 */

undefined4 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 000113e8 */

undefined4 global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 000113f0 */

void set_file_static(undefined4 param_1)

{
  file_scope_static = param_1;
  return;
}



/* Function: get_file_static @ 00011400 */

undefined4 get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00011410 */

void set_global_callback(undefined4 param_1)

{
  global_func_ptr = param_1;
  return;
}



/* Function: call_global_callback @ 00011420 */

undefined4 call_global_callback(void)

{
  undefined4 uVar1;
  
  if (global_func_ptr != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00011430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: global_heap_store @ 00011440 */

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



/* Function: static_complex_init @ 00011450 */

undefined4 static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00011458 */

int tls_access(int param_1)

{
  return param_1 << 1;
}



/* Function: init_order_test @ 00011460 */

undefined4 init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 00011468 */

void test_static_global(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00012ccc);
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
  __printf_chk(1,"STM-L2-03 (read_const_data): %d\n",*(byte *)(const_string + 4) + 0x2a);
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



/* Function: memop_memset @ 0001163c */

uint memop_memset(byte *param_1,size_t param_2,int param_3)

{
  if (param_2 != 0 && param_1 != (byte *)0x0) {
    memset(param_1,param_3,param_2);
    return (uint)*param_1;
  }
  return 0xffffffff;
}



/* Function: memop_memcpy @ 00011670 */

undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
  if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
    return 0xffffffff;
  }
  memcpy(param_1,param_2,param_3);
  return *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
}



/* Function: memop_memmove @ 000116b8 */

uint memop_memmove(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0 && 1 < param_2) {
    memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
    return (uint)*(byte *)((int)param_1 + 1);
  }
  return 0xffffffff;
}



/* Function: memop_memcmp @ 000116f0 */

undefined4 memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
    return 0;
  }
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xffffffff;
    }
    return uVar2;
  }
  return 1;
}



/* Function: memop_bzero @ 0001173c */

uint memop_bzero(byte *param_1,size_t param_2)

{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (uint)*param_1;
  }
  return 0xffffffff;
}



/* Function: memop_bcopy @ 00011764 */

uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
  if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (byte *)0x0)) {
    return 0xffffffff;
  }
  memmove(param_2,param_1,param_3);
  return (uint)*param_2;
}



/* Function: memop_unaligned_access @ 000117a8 */

void memop_unaligned_access(int param_1)

{
  undefined4 local_10;
  int local_c;
  
  local_c = 0;
  if (param_1 == 0) {
    local_10 = 0xffffffff;
  }
  else {
    memcpy(&local_10,(void *)(param_1 + 1),4);
  }
  if (local_c == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_10);
}



/* Function: memop_memory_barrier @ 0001180c */

int memop_memory_barrier(int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    __sync_synchronize();
    return *param_1 + iVar1;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00011834 */

void test_memory_op_functions(void)

{
  undefined4 uVar1;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined2 local_11c;
  char local_118;
  char acStack_117 [3];
  char acStack_114 [4];
  undefined2 uStack_110;
  undefined1 local_10e;
  undefined4 local_10c;
  undefined4 local_108;
  undefined2 local_104;
  int local_c;
  
  local_c = 0;
  puts(&DAT_00012f50);
  local_10c = 0x41414141;
  local_108 = 0x41414141;
  local_104 = 0x4141;
  __printf_chk(1,"MEMOP-L2-01: %d\n",0x41);
  __printf_chk(1,"MEMOP-L2-02: %d\n",0x32);
  local_118 = 'H';
  register0x00000021 = 'e';
  register0x00000022 = 'l';
  register0x00000023 = 'l';
  acStack_114[0] = 'o';
  acStack_114[1] = 'W';
  acStack_114[2] = 'o';
  acStack_114[3] = 'r';
  uStack_110 = 0x646c;
  local_10e = 0;
  memmove(acStack_117,&local_118,9);
  __printf_chk(1,"MEMOP-L2-03: %c\n",0x48);
  local_13c = 1;
  uStack_138 = 2;
  uStack_134 = 3;
  local_130 = 1;
  uStack_12c = 2;
  uStack_128 = 4;
  memcmp(&local_13c,&local_130,0xc);
  __printf_chk(1,"MEMOP-L2-04: %d\n");
  local_124 = 0;
  local_11c = 0;
  local_120 = 0;
  __printf_chk(1,"MEMOP-L2-05: %d\n");
  __printf_chk(1,"MEMOP-L2-06: %d\n");
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  uVar1 = __sync_synchronize();
  if (local_c == 0) {
    __printf_chk(1,"MEMOP-L3-02: %d\n",10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1,local_c,0);
}



/* Function: extern_function @ 000119cc */

int extern_function(int param_1)

{
  return param_1 * 3;
}



/* Function: __sync_fetch_and_add_4 @ 000119d4 */

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



/* Function: __sync_fetch_and_sub_4 @ 00011a0c */

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



/* Function: __sync_fetch_and_or_4 @ 00011a44 */

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



/* Function: __sync_fetch_and_and_4 @ 00011a7c */

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



/* Function: __sync_fetch_and_xor_4 @ 00011ab4 */

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



/* Function: __sync_fetch_and_nand_4 @ 00011aec */

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



/* Function: __sync_fetch_and_add_2 @ 00011b28 */

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



/* Function: __sync_fetch_and_sub_2 @ 00011b88 */

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



/* Function: __sync_fetch_and_or_2 @ 00011be8 */

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



/* Function: __sync_fetch_and_and_2 @ 00011c48 */

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



/* Function: __sync_fetch_and_xor_2 @ 00011ca8 */

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



/* Function: __sync_fetch_and_nand_2 @ 00011d08 */

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



/* Function: __sync_fetch_and_add_1 @ 00011d6c */

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



/* Function: __sync_fetch_and_sub_1 @ 00011dc8 */

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



/* Function: __sync_fetch_and_or_1 @ 00011e24 */

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



/* Function: __sync_fetch_and_and_1 @ 00011e80 */

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



/* Function: __sync_fetch_and_xor_1 @ 00011edc */

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



/* Function: __sync_fetch_and_nand_1 @ 00011f38 */

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



/* Function: __sync_add_and_fetch_4 @ 00011f98 */

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



/* Function: __sync_sub_and_fetch_4 @ 00011fd0 */

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



/* Function: __sync_or_and_fetch_4 @ 00012008 */

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



/* Function: __sync_and_and_fetch_4 @ 00012040 */

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



/* Function: __sync_xor_and_fetch_4 @ 00012078 */

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



/* Function: __sync_nand_and_fetch_4 @ 000120b0 */

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



/* Function: __sync_add_and_fetch_2 @ 000120ec */

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



/* Function: __sync_sub_and_fetch_2 @ 00012154 */

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



/* Function: __sync_or_and_fetch_2 @ 000121bc */

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



/* Function: __sync_and_and_fetch_2 @ 00012224 */

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



/* Function: __sync_xor_and_fetch_2 @ 0001228c */

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



/* Function: __sync_nand_and_fetch_2 @ 000122f4 */

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



/* Function: __sync_add_and_fetch_1 @ 00012360 */

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



/* Function: __sync_sub_and_fetch_1 @ 000123c4 */

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



/* Function: __sync_or_and_fetch_1 @ 00012428 */

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



/* Function: __sync_and_and_fetch_1 @ 0001248c */

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



/* Function: __sync_xor_and_fetch_1 @ 000124f0 */

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



/* Function: __sync_nand_and_fetch_1 @ 00012554 */

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



/* Function: __sync_val_compare_and_swap_4 @ 000125bc */

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



/* Function: __sync_val_compare_and_swap_2 @ 0001260c */

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



/* Function: __sync_val_compare_and_swap_1 @ 00012684 */

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



/* Function: __sync_bool_compare_and_swap_4 @ 000126f8 */

bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}



/* Function: __sync_bool_compare_and_swap_2 @ 00012724 */

bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}



/* Function: __sync_bool_compare_and_swap_1 @ 00012740 */

bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}



/* Function: __sync_lock_test_and_set_4 @ 00012768 */

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



/* Function: __sync_lock_test_and_set_2 @ 000127a0 */

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



/* Function: __sync_lock_test_and_set_1 @ 00012800 */

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



/* Function: __sync_lock_release_8 @ 0001285c */

void __sync_lock_release_8(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



/* Function: __sync_lock_release_4 @ 00012880 */

void __sync_lock_release_4(undefined4 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_2 @ 000128a0 */

void __sync_lock_release_2(undefined2 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: __sync_lock_release_1 @ 000128c0 */

void __sync_lock_release_1(undefined1 *param_1)

{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}



/* Function: _fini @ 000128e0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 113 */
