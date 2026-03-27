/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/3/3_gcc_O1_no_g
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



/* Function: _start @ 00101220 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101250 */

/* WARNING: Removing unreachable block (ram,0x00101263) */
/* WARNING: Removing unreachable block (ram,0x0010126f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101280 */

/* WARNING: Removing unreachable block (ram,0x001012a4) */
/* WARNING: Removing unreachable block (ram,0x001012b0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001012c0 */

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



/* Function: double_value @ 00101309 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: local_vars @ 00101311 */

int local_vars(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: local_array @ 0010131a */

undefined4 local_array(int param_1)

{
  long *plVar1;
  int iVar2;
  long in_FS_OFFSET;
  long local_38 [2];
  undefined4 local_24;
  long local_10 [2];
  
  plVar1 = local_38;
  local_10[0] = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = 0;
  do {
    *(int *)plVar1 = iVar2;
    iVar2 = iVar2 + param_1;
    plVar1 = (long *)((long)plVar1 + 4);
  } while (plVar1 != local_10);
  if (local_10[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_24;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: local_struct @ 0010136a */

int local_struct(int param_1)

{
  return param_1 * 3;
}



/* Function: address_of_local @ 00101372 */

undefined8 address_of_local(undefined4 *param_1)

{
  *param_1 = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00101382 */

int address_of_array(int *param_1)

{
  return *param_1 * 2;
}



/* Function: large_stack_frame @ 0010138b */

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



/* Function: vla_stack @ 001013e0 */

undefined4 vla_stack(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  undefined1 auStack_18 [8];
  long local_10;
  
  puVar5 = auStack_18;
  puVar4 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 - 1U < 1000) {
    uVar3 = (long)param_1 * 4 + 0xf;
    for (; puVar4 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar5 = puVar4 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    }
    uVar3 = 0;
    do {
      *(int *)(puVar4 + uVar3 * 4 + lVar1) = (int)uVar3 * 2;
      bVar6 = uVar3 != param_1 - 1U;
      uVar3 = uVar3 + 1;
    } while (bVar6);
    uVar2 = *(undefined4 *)(puVar4 + (long)(param_1 / 2) * 4 + lVar1);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar5 + -8) = alloca_usage;
  __stack_chk_fail();
}



/* Function: alloca_usage @ 0010149c */

int alloca_usage(int param_1)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  puVar6 = auStack_18;
  puVar5 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 1) {
    iVar2 = -1;
  }
  else {
    uVar3 = (long)param_1 * 4 + 0x17;
    for (; puVar5 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar5 = puVar5 + -0x1000) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar5 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    iVar2 = 0;
    piVar4 = (int *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0);
    do {
      *piVar4 = iVar2;
      iVar2 = iVar2 + 3;
      piVar4 = piVar4 + 1;
    } while (iVar2 != param_1 * 3);
    iVar2 = ((int *)((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0))[param_1 / 2];
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar6 + -8) = stack_alias;
  __stack_chk_fail();
}



/* Function: stack_alias @ 00101558 */

undefined8 stack_alias(void)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00101562 */

void test_stack_memory(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103004);
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



/* Function: heap_basic @ 0010168a */

undefined4 heap_basic(uint param_1)

{
  void *__ptr;
  ulong uVar1;
  undefined4 uVar2;
  
  __ptr = malloc((long)(int)param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < (int)param_1) {
      uVar1 = 0;
      do {
        *(int *)((long)__ptr + uVar1 * 4) = (int)uVar1 * 2;
        uVar1 = uVar1 + 1;
      } while (uVar1 != param_1);
    }
    uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_calloc @ 001016dd */

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



/* Function: heap_realloc @ 0010172d */

undefined8 heap_realloc(void)

{
  undefined4 *__ptr;
  void *__ptr_00;
  undefined8 uVar1;
  
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
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
    else {
      *(undefined4 *)((long)__ptr_00 + 0x14) = 0x32;
      *(undefined4 *)((long)__ptr_00 + 0x18) = 0x3c;
      *(undefined4 *)((long)__ptr_00 + 0x1c) = 0x46;
      *(undefined4 *)((long)__ptr_00 + 0x20) = 0x50;
      *(undefined4 *)((long)__ptr_00 + 0x24) = 0x5a;
      uVar1 = 0xfffffffd;
      if (*(int *)((long)__ptr_00 + 8) == 3) {
        uVar1 = 0x32;
      }
      free(__ptr_00);
    }
  }
  return uVar1;
}



/* Function: heap_array @ 001017d3 */

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
    iVar2 = __ptr[param_1 / 2];
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_struct @ 00101829 */

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



/* Function: heap_nested @ 00101855 */

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



/* Function: linked_list_heap @ 001018c1 */

int linked_list_heap(void)

{
  int *piVar1;
  int *piVar2;
  int *__ptr;
  int *__ptr_00;
  int iVar3;
  
  iVar3 = 0;
  piVar2 = (int *)0x0;
  __ptr = (int *)0x0;
  do {
    piVar1 = malloc(0x10);
    if (piVar1 == (int *)0x0) {
      if (__ptr != (int *)0x0) {
        do {
          piVar2 = *(int **)(__ptr + 2);
          free(__ptr);
          __ptr = piVar2;
        } while (piVar2 != (int *)0x0);
        return -1;
      }
      return -1;
    }
    *piVar1 = iVar3;
    piVar1[2] = 0;
    piVar1[3] = 0;
    __ptr_00 = piVar1;
    if (__ptr != (int *)0x0) {
      *(int **)(piVar2 + 2) = piVar1;
      __ptr_00 = __ptr;
    }
    iVar3 = iVar3 + 10;
    piVar2 = piVar1;
    __ptr = __ptr_00;
  } while (iVar3 != 0x32);
  if (__ptr_00 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    piVar2 = __ptr_00;
    do {
      iVar3 = iVar3 + *piVar2;
      piVar2 = *(int **)(piVar2 + 2);
    } while (piVar2 != (int *)0x0);
    do {
      piVar2 = *(int **)(__ptr_00 + 2);
      free(__ptr_00);
      __ptr_00 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return iVar3;
}



/* Function: create_tree_node @ 00101968 */

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



/* Function: tree_heap_traversal @ 00101992 */

int tree_heap_traversal(void)

{
  int *__ptr;
  int *__ptr_00;
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  
  __ptr_00 = (int *)create_tree_node(10);
  if (__ptr_00 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    uVar1 = create_tree_node(0x14);
    *(undefined8 *)(__ptr_00 + 2) = uVar1;
    piVar2 = (int *)create_tree_node(0x1e);
    *(int **)(__ptr_00 + 4) = piVar2;
    __ptr = *(int **)(__ptr_00 + 2);
    if ((piVar2 == (int *)0x0) || (__ptr == (int *)0x0)) {
      if (__ptr != (int *)0x0) {
        free(__ptr);
      }
      if (*(void **)(__ptr_00 + 4) != (void *)0x0) {
        free(*(void **)(__ptr_00 + 4));
      }
      free(__ptr_00);
      iVar3 = -2;
    }
    else {
      iVar3 = *__ptr + *__ptr_00 + *piVar2;
      free(__ptr);
      free(*(void **)(__ptr_00 + 4));
      free(__ptr_00);
    }
  }
  return iVar3;
}



/* Function: memory_leak @ 00101a2b */

undefined4 memory_leak(uint param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  ulong uVar3;
  
  pvVar2 = malloc((long)(int)param_1 << 2);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (0 < (int)param_1) {
      uVar3 = 0;
      do {
        *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
        uVar3 = uVar3 + 1;
      } while (uVar3 != param_1);
    }
    uVar1 = *(undefined4 *)((long)pvVar2 + (long)((int)param_1 / 2) * 4);
  }
  return uVar1;
}



/* Function: dangling_pointer @ 00101a72 */

undefined4 dangling_pointer(void)

{
  undefined4 uVar1;
  undefined4 *__ptr;
  
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



/* Function: double_free @ 00101ab7 */

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



/* Function: heap_overflow @ 00101af4 */

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



/* Function: test_heap_memory @ 00101b36 */

void test_heap_memory(void)

{
  undefined4 uVar1;
  __pid_t __pid;
  long in_FS_OFFSET;
  uint local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_001030e6);
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
    free(*(void **)((long)local_18 + 8));
    free(local_18);
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
    __printf_chk(1,&DAT_001031b6,uVar1);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_001031c6);
  }
  else {
    waitpid(__pid,(int *)&local_1c,0);
    if ((local_1c & 0x7f) == 0) {
      __printf_chk(1,&DAT_001033c8,local_1c >> 8 & 0xff);
    }
    else if ('\x01' < (char)(((byte)local_1c & 0x7f) + 1)) {
      __printf_chk(1,&DAT_001033f0,local_1c & 0x7f);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: global_var_access @ 00101d80 */

void global_var_access(void)

{
  global_counter = global_counter + 1;
  return;
}



/* Function: global_var_read @ 00101d94 */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00101da1 */

undefined4 global_array_access(uint param_1)

{
  if (param_1 < 10) {
    return *(undefined4 *)(global_array + (long)(int)param_1 * 4);
  }
  return 0xffffffff;
}



/* Function: static_local @ 00101dbe */

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



/* Function: call_static_func @ 00101ddb */

int call_static_func(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00101de4 */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101df2 */

void call_extern_func(void)

{
  extern_function(5);
  return;
}



/* Function: read_const_data @ 00101e09 */

int read_const_data(void)

{
  return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101e1c */

undefined8 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00101e26 */

undefined8 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00101e30 */

undefined8 global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00101e3a */

void set_file_static(undefined4 param_1)

{
  file_scope_static = param_1;
  return;
}



/* Function: get_file_static @ 00101e45 */

undefined4 get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00101e50 */

void set_global_callback(undefined8 param_1)

{
  global_func_ptr = param_1;
  return;
}



/* Function: call_global_callback @ 00101e5c */

undefined8 call_global_callback(void)

{
  undefined8 uVar1;
  
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: global_heap_store @ 00101e7d */

undefined4 global_heap_store(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}



/* Function: static_complex_init @ 00101e8f */

undefined8 static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00101e99 */

int tls_access(int param_1)

{
  return param_1 * 2;
}



/* Function: init_order_test @ 00101ea1 */

undefined8 init_order_test(void)

{
  static_depends_0 = 0x14;
  return 0x14;
}



/* Function: test_static_global @ 00101eb5 */

void test_static_global(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103438);
  uVar1 = global_var_access();
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar1);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  __printf_chk(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  __printf_chk(1,"STM-L1-03 (static_local): %d\n");
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
  uVar1 = init_order_test();
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",uVar1);
  return;
}



/* Function: memop_memset @ 00102112 */

ulong memop_memset(byte *param_1,size_t param_2,int param_3)

{
  ulong uVar1;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 == 0) {
      uVar1 = 0xffffffff;
    }
    else {
      memset(param_1,param_3,param_2);
      uVar1 = (ulong)*param_1;
    }
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: memop_memcpy @ 00102143 */

undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)

{
  undefined4 uVar1;
  
  if ((param_2 == (void *)0x0 || param_3 == 0) || (param_1 == (void *)0x0)) {
    uVar1 = 0xffffffff;
  }
  else {
    memcpy(param_1,param_2,param_3);
    uVar1 = *(undefined4 *)((long)param_1 + ((param_3 & 0xfffffffffffffffc) - 4));
  }
  return uVar1;
}



/* Function: memop_memmove @ 00102186 */

int memop_memmove(void *param_1,ulong param_2)

{
  int iVar1;
  
  if (param_1 != (void *)0x0) {
    if (param_2 < 2) {
      iVar1 = -1;
    }
    else {
      memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
      iVar1 = (int)*(char *)((long)param_1 + 1);
    }
    return iVar1;
  }
  return -1;
}



/* Function: memop_memcmp @ 001021bc */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
    iVar1 = memcmp(param_1,param_2,param_3);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = iVar1 >> 0x1f;
    }
    return iVar2;
  }
  return 0;
}



/* Function: memop_bzero @ 001021f4 */

ulong memop_bzero(byte *param_1,size_t param_2)

{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}



/* Function: memop_bcopy @ 00102219 */

ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)

{
  ulong uVar1;
  
  if (param_2 != (byte *)0x0 && param_3 != 0) {
    if (param_1 == (void *)0x0) {
      uVar1 = 0xffffffff;
    }
    else {
      memmove(param_2,param_1,param_3);
      uVar1 = (ulong)*param_2;
    }
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: memop_unaligned_access @ 00102253 */

undefined4 memop_unaligned_access(long param_1)

{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}



/* Function: memop_memory_barrier @ 00102266 */

int memop_memory_barrier(int *param_1)

{
  if (param_1 != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *param_1 + *param_1;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00102282 */

void test_memory_op_functions(void)

{
  undefined4 uVar1;
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
  undefined4 local_135;
  undefined4 local_131;
  undefined1 local_12d [10];
  undefined8 local_123;
  undefined2 local_11b;
  undefined1 local_119;
  undefined1 local_118 [264];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103688);
  local_178 = 10;
  local_174 = 0x14;
  local_170 = 0x1e;
  local_16c = 0x28;
  local_168 = 0x32;
  local_158 = 0;
  local_150 = 0;
  local_148 = 0;
  uVar1 = memop_memset(local_118,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
  uVar1 = memop_memcpy(&local_158,&local_178,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
  local_123 = 0x726f576f6c6c6548;
  local_11b = 0x646c;
  local_119 = 0;
  uVar1 = memop_memmove(&local_123,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
  local_190 = 1;
  local_18c = 2;
  local_188 = 3;
  local_184 = 1;
  local_180 = 2;
  local_17c = 4;
  uVar1 = memop_memcmp(&local_190,&local_184,0xc);
  __printf_chk(1,"MEMOP-L2-04: %d\n",uVar1);
  uVar1 = memop_bzero(local_12d,10);
  __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
  local_135 = 0x4030201;
  local_131 = 0;
  uVar1 = memop_bcopy(&local_135,&local_131,4);
  __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  local_194 = 5;
  uVar1 = memop_memory_barrier(&local_194);
  __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Function: main @ 001024af */

undefined8 main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 001024e9 */

int extern_function(int param_1)

{
  return param_1 * 3;
}



/* Function: _fini @ 001024f4 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 63 */
