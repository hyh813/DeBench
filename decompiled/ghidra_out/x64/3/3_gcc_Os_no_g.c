/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/x64/3/3_gcc_Os_no_g
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



/* Function: main @ 001011e0 */

undefined1  [16] main(void)

{
  undefined1 auVar1 [16];
  ulong in_RAX;
  
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_RAX;
  return auVar1 << 0x40;
}



/* Function: _start @ 00101210 */

void processEntry _start(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_8 [8];
  
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



/* Function: deregister_tm_clones @ 00101240 */

/* WARNING: Removing unreachable block (ram,0x00101253) */
/* WARNING: Removing unreachable block (ram,0x0010125f) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00101270 */

/* WARNING: Removing unreachable block (ram,0x00101294) */
/* WARNING: Removing unreachable block (ram,0x001012a0) */

void register_tm_clones(void)

{
  return;
}



/* Function: __do_global_dtors_aux @ 001012b0 */

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



/* Function: double_value @ 001012f9 */

int double_value(int param_1)

{
  return param_1 * 2;
}



/* Function: local_vars @ 00101301 */

int local_vars(int param_1)

{
  return param_1 * 2 + 10;
}



/* Function: local_array @ 0010130a */

undefined4 local_array(int param_1)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  int local_38 [10];
  long local_10;
  
  iVar2 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = 0;
  do {
    local_38[lVar1] = iVar2;
    lVar1 = lVar1 + 1;
    iVar2 = iVar2 + param_1;
  } while (lVar1 != 10);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_38[5];
}



/* Function: local_struct @ 00101350 */

int local_struct(int param_1)

{
  return param_1 * 3;
}



/* Function: address_of_local @ 00101358 */

undefined8 address_of_local(undefined4 *param_1)

{
  *param_1 = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00101368 */

int address_of_array(int *param_1)

{
  return *param_1 * 2;
}



/* Function: large_stack_frame @ 00101371 */

int large_stack_frame(void)

{
  long lVar1;
  long in_FS_OFFSET;
  char acStack_810 [2048];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = 0;
  do {
    acStack_810[lVar1] = (char)lVar1;
    lVar1 = lVar1 + 1;
  } while (lVar1 != 0x800);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return (int)acStack_810[0x400];
}



/* Function: vla_stack @ 001013c6 */

undefined4 vla_stack(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  puVar6 = auStack_18;
  puVar5 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0xffffffff;
  if (param_1 - 1U < 1000) {
    uVar3 = (long)param_1 * 4 + 0xf;
    for (; puVar5 != auStack_18 + -(uVar3 & 0xfffffffffffff000); puVar5 = puVar5 + -0x1000) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    uVar3 = (ulong)((uint)uVar3 & 0xff0);
    lVar1 = -uVar3;
    puVar6 = puVar5 + lVar1;
    if (uVar3 != 0) {
      *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    }
    lVar4 = 0;
    do {
      *(int *)(puVar5 + lVar4 * 4 + lVar1) = (int)lVar4 * 2;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < param_1);
    uVar2 = *(undefined4 *)(puVar5 + (long)(param_1 >> 1) * 4 + lVar1);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar6 + -8) = 0x101466;
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: alloca_usage @ 00101468 */

undefined4 alloca_usage(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined1 auStack_18 [8];
  long local_10;
  
  puVar6 = auStack_18;
  puVar5 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0xffffffff;
  if (0 < param_1) {
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
    lVar4 = 0;
    do {
      *(int *)(((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0) + lVar4 * 4) = (int)lVar4 * 3;
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < param_1);
    uVar2 = *(undefined4 *)
             (((ulong)(puVar5 + lVar1 + 0xf) & 0xfffffffffffffff0) + (long)(param_1 >> 1) * 4);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined8 *)(puVar6 + -8) = 0x101507;
    __stack_chk_fail();
  }
  return uVar2;
}



/* Function: stack_alias @ 00101509 */

undefined8 stack_alias(void)

{
  return 0x14;
}



/* Function: test_stack_memory @ 00101513 */

void test_stack_memory(void)

{
  undefined4 uVar1;
  undefined8 in_RAX;
  
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
  __printf_chk(1,"MEM-L2-04 (stack_alias): %d\n",0x14,in_RAX);
  return;
}



/* Function: heap_basic @ 00101616 */

undefined4 heap_basic(int param_1)

{
  void *__ptr;
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  __ptr = malloc((long)param_1 << 2);
  if (__ptr != (void *)0x0) {
    for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
      *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 2;
    }
    uVar2 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_calloc @ 00101667 */

int heap_calloc(int param_1)

{
  void *__ptr;
  long lVar1;
  int iVar2;
  
  iVar2 = -1;
  __ptr = calloc((long)param_1,4);
  if (__ptr != (void *)0x0) {
    iVar2 = 0;
    for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
      iVar2 = iVar2 + *(int *)((long)__ptr + lVar1 * 4);
    }
    free(__ptr);
  }
  return iVar2;
}



/* Function: heap_realloc @ 001016aa */

undefined4 heap_realloc(void)

{
  undefined8 *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  __ptr = malloc(0x14);
  if (__ptr != (undefined8 *)0x0) {
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



/* Function: heap_array @ 00101730 */

undefined4 heap_array(int param_1)

{
  void *__ptr;
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  __ptr = malloc((long)param_1 << 2);
  if (__ptr != (void *)0x0) {
    for (lVar1 = 0; (int)lVar1 < param_1; lVar1 = lVar1 + 1) {
      *(int *)((long)__ptr + lVar1 * 4) = (int)lVar1 * 3;
    }
    uVar2 = *(undefined4 *)((long)__ptr + (long)(param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}



/* Function: heap_struct @ 00101781 */

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



/* Function: heap_nested @ 001017b2 */

undefined1  [16]
heap_nested(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *__ptr;
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  __ptr = malloc(0x10);
  *param_1 = __ptr;
  uVar2 = 0xffffffff;
  if (__ptr != (undefined4 *)0x0) {
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
  auVar3._8_8_ = param_4;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Function: linked_list_heap @ 00101811 */

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
      while (__ptr != (int *)0x0) {
        piVar2 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar2;
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
  return iVar3;
}



/* Function: create_tree_node @ 0010189c */

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



/* Function: tree_heap_traversal @ 001018c6 */

int tree_heap_traversal(void)

{
  int iVar1;
  int iVar2;
  int *__ptr;
  int *__ptr_00;
  undefined8 uVar3;
  int *piVar4;
  int iVar5;
  
  iVar5 = -1;
  __ptr_00 = (int *)create_tree_node(10);
  if (__ptr_00 != (int *)0x0) {
    uVar3 = create_tree_node(0x14);
    *(undefined8 *)(__ptr_00 + 2) = uVar3;
    piVar4 = (int *)create_tree_node(0x1e);
    __ptr = *(int **)(__ptr_00 + 2);
    *(int **)(__ptr_00 + 4) = piVar4;
    if (__ptr != (int *)0x0) {
      if (piVar4 != (int *)0x0) {
        iVar5 = *__ptr;
        iVar1 = *__ptr_00;
        iVar2 = *piVar4;
        free(__ptr);
        free(*(void **)(__ptr_00 + 4));
        free(__ptr_00);
        return iVar5 + iVar1 + iVar2;
      }
      free(__ptr);
    }
    if (*(void **)(__ptr_00 + 4) != (void *)0x0) {
      free(*(void **)(__ptr_00 + 4));
    }
    iVar5 = -2;
    free(__ptr_00);
  }
  return iVar5;
}



/* Function: memory_leak @ 00101959 */

undefined4 memory_leak(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = malloc((long)param_1 << 2);
  lVar3 = 0;
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    for (; (int)lVar3 < param_1; lVar3 = lVar3 + 1) {
      *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
    }
    uVar1 = *(undefined4 *)((long)pvVar2 + (long)(param_1 / 2) * 4);
  }
  return uVar1;
}



/* Function: dangling_pointer @ 00101999 */

undefined4 dangling_pointer(void)

{
  undefined4 uVar1;
  undefined4 *__ptr;
  
  __ptr = malloc(4);
  uVar1 = 0xffffffff;
  if (__ptr != (undefined4 *)0x0) {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(__ptr);
    uVar1 = *__ptr;
  }
  return uVar1;
}



/* Function: double_free @ 001019d7 */

undefined4 double_free(undefined4 *param_1)

{
  undefined4 uVar1;
  void *__ptr;
  
  if (param_1 == (undefined4 *)0x0) {
    __ptr = malloc(4);
    uVar1 = 0xffffffff;
    if (__ptr != (void *)0x0) {
      free(__ptr);
      free(__ptr);
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
  return *param_1;
}



/* Function: heap_overflow @ 00101a12 */

undefined4 heap_overflow(void)

{
  undefined4 *__ptr;
  long lVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  __ptr = malloc(0x28);
  if (__ptr != (undefined4 *)0x0) {
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



/* Function: test_heap_memory @ 00101a4d */

void test_heap_memory(void)

{
  uint uVar1;
  undefined4 uVar2;
  __pid_t __pid;
  undefined *puVar3;
  uint uVar4;
  long in_FS_OFFSET;
  uint local_1c;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_0010314d);
  uVar2 = heap_basic(10);
  __printf_chk(1,"HEAP-L2-01 (heap_basic): %d\n",uVar2);
  uVar2 = heap_calloc(5);
  __printf_chk(1,"HEAP-L2-02 (heap_calloc): %d\n",uVar2);
  uVar2 = heap_realloc();
  __printf_chk(1,"HEAP-L2-03 (heap_realloc): %d\n",uVar2);
  uVar2 = heap_array(10);
  __printf_chk(1,"HEAP-L2-04 (heap_array): %d\n",uVar2);
  uVar2 = heap_struct(5);
  __printf_chk(1,"HEAP-L2-05 (heap_struct): %d\n",uVar2);
  local_18 = (void *)0x0;
  uVar2 = heap_nested(&local_18);
  __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar2);
  if (local_18 != (void *)0x0) {
    free(*(void **)((long)local_18 + 8));
    free(local_18);
  }
  uVar2 = linked_list_heap();
  __printf_chk(1,"HEAP-L3-01 (linked_list_heap): %d\n",uVar2);
  uVar2 = tree_heap_traversal();
  __printf_chk(1,"HEAP-L3-02 (tree_heap_traversal): %d\n",uVar2);
  uVar2 = memory_leak(5);
  __printf_chk(1,"HEAP-L3-03 (memory_leak): %d\n",uVar2);
  __printf_chk(1,"HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid == 0) {
    uVar2 = dangling_pointer();
    __printf_chk(1,&DAT_001032a5,uVar2);
                    /* WARNING: Subroutine does not return */
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_0010331b);
  }
  else {
    waitpid(__pid,(int *)&local_1c,0);
    puVar3 = &DAT_001032b5;
    uVar4 = local_1c & 0x7f;
    uVar1 = local_1c >> 8 & 0xff;
    if (uVar4 != 0) {
      if ((char)((char)uVar4 + '\x01') < '\x02') goto LAB_00101c37;
      puVar3 = &DAT_001032da;
      uVar1 = uVar4;
    }
    __printf_chk(1,puVar3,uVar1);
  }
LAB_00101c37:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: global_var_access @ 00101c51 */

void global_var_access(void)

{
  global_counter = global_counter + 1;
  return;
}



/* Function: global_var_read @ 00101c64 */

int global_var_read(void)

{
  return global_counter * 2;
}



/* Function: global_array_access @ 00101c71 */

undefined4 global_array_access(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(global_array + (long)(int)param_1 * 4);
  }
  return uVar1;
}



/* Function: static_local @ 00101c8b */

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



/* Function: call_static_func @ 00101ca4 */

int call_static_func(int param_1)

{
  return param_1 * 2 + 1;
}



/* Function: access_extern_global @ 00101cad */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 00101cbb */

void call_extern_func(void)

{
  extern_function(5);
  return;
}



/* Function: read_const_data @ 00101cc9 */

int read_const_data(void)

{
  return (char)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101cdc */

undefined8 access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 00101ce3 */

undefined8 access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 00101cea */

undefined8 global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 00101cf4 */

void set_file_static(undefined4 param_1)

{
  file_scope_static = param_1;
  return;
}



/* Function: get_file_static @ 00101cff */

undefined4 get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 00101d0a */

void set_global_callback(undefined8 param_1)

{
  global_func_ptr = param_1;
  return;
}



/* Function: call_global_callback @ 00101d16 */

undefined8 call_global_callback(void)

{
  undefined8 uVar1;
  
  if (global_func_ptr != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101d26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}



/* Function: global_heap_store @ 00101d2c */

undefined4 global_heap_store(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



/* Function: static_complex_init @ 00101d3b */

undefined8 static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00101d45 */

int tls_access(int param_1)

{
  return param_1 * 2;
}



/* Function: init_order_test @ 00101d4d */

undefined8 init_order_test(void)

{
  return 0x14;
}



/* Function: test_static_global @ 00101d57 */

void test_static_global(void)

{
  undefined4 uVar1;
  
  puts(&DAT_00103326);
  global_var_access(1,"STM-L1-01 (global_var_access): %d\n");
  __printf_chk();
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
  read_const_data(1,"STM-L2-03 (read_const_data): %d\n");
  __printf_chk();
  __printf_chk(1,"STM-L2-04 (access_bss_var): %d\n",0);
  __printf_chk(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  global_struct_access(1,"STM-L2-05 (global_struct_access): %d\n");
  __printf_chk();
  file_scope_static = 0x32;
  __printf_chk(1,"STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  uVar1 = call_global_callback(5);
  __printf_chk(1,"STM-L2-07 (global_func_ptr): %d\n",uVar1);
  __printf_chk(1,"STM-L2-08 (global_heap_store): %d\n",100);
  static_complex_init(1,"STM-L2-09 (static_complex_init): %d\n");
  __printf_chk();
  __printf_chk(1,"STM-L3-01 (tls_access): %d\n",0x14);
  __printf_chk(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: memop_memset @ 00101f61 */

ulong memop_memset(byte *param_1,long param_2,byte param_3)

{
  byte *pbVar1;
  
  if ((param_1 != (byte *)0x0) && (pbVar1 = param_1, param_2 != 0)) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *pbVar1 = param_3;
      pbVar1 = pbVar1 + 1;
    }
    return (ulong)*param_1;
  }
  return 0xffffffff;
}



/* Function: memop_memcpy @ 00101f82 */

undefined4 memop_memcpy(undefined1 *param_1,undefined1 *param_2,ulong param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  
  if ((param_2 != (undefined1 *)0x0 && param_3 != 0) && (param_1 != (undefined1 *)0x0)) {
    uVar1 = param_3 & 0xfffffffffffffffc;
    puVar2 = param_1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      *puVar2 = *param_2;
      param_2 = param_2 + 1;
      puVar2 = puVar2 + 1;
    }
    return *(undefined4 *)(param_1 + (uVar1 - 4));
  }
  return 0xffffffff;
}



/* Function: memop_memmove @ 00101fb5 */

int memop_memmove(void *param_1,ulong param_2)

{
  if ((param_1 != (void *)0x0) && (1 < param_2)) {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    return (int)*(char *)((long)param_1 + 1);
  }
  return -1;
}



/* Function: memop_memcmp @ 00101fe2 */

int memop_memcmp(void *param_1,void *param_2,size_t param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
    iVar1 = memcmp(param_1,param_2,param_3);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = -(uint)(iVar1 != 0);
    }
    return iVar2;
  }
  return 0;
}



/* Function: memop_bzero @ 0010201d */

ulong memop_bzero(byte *param_1,long param_2)

{
  ulong uVar1;
  byte *pbVar2;
  
  uVar1 = 0xffffffff;
  pbVar2 = param_1;
  if (param_1 != (byte *)0x0) {
    for (; param_2 != 0; param_2 = param_2 + -1) {
      *pbVar2 = 0;
      pbVar2 = pbVar2 + 1;
    }
    uVar1 = (ulong)*param_1;
  }
  return uVar1;
}



/* Function: memop_bcopy @ 00102037 */

undefined1  [16] memop_bcopy(void *param_1,void *param_2,size_t param_3)

{
  undefined8 in_RAX;
  byte *pbVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  auVar2._9_7_ = (int7)((ulong)in_RAX >> 8);
  auVar2[8] = param_2 == (void *)0x0 || param_3 == 0;
  if ((param_2 != (void *)0x0 && param_3 != 0) && (param_1 != (void *)0x0)) {
    pbVar1 = memmove(param_2,param_1,param_3);
    auVar2._1_7_ = 0;
    auVar2[0] = *pbVar1;
    return auVar2;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = 0xffffffff;
  return auVar3;
}



/* Function: memop_unaligned_access @ 0010206a */

undefined4 memop_unaligned_access(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 1);
  }
  return uVar1;
}



/* Function: memop_memory_barrier @ 0010207a */

int memop_memory_barrier(int *param_1)

{
  int iVar1;
  
  iVar1 = -1;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1 + *param_1;
  }
  return iVar1;
}



/* Function: test_memory_op_functions @ 00102090 */

void test_memory_op_functions(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *puVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  byte bVar8;
  undefined4 local_174;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_164;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 local_144 [5];
  undefined4 local_12d;
  undefined4 local_129;
  undefined1 local_125 [10];
  char local_11b [11];
  undefined1 local_110 [256];
  long local_10;
  
  bVar8 = 0;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puts(&DAT_00103588);
  local_158 = 0x140000000a;
  local_150 = 0x280000001e;
  puVar6 = local_144;
  for (lVar3 = 5; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + (ulong)bVar8 * -2 + 1;
  }
  local_148 = 0x32;
  uVar1 = memop_memset(local_110,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
  uVar1 = memop_memcpy(local_144,&local_158,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
  pcVar5 = "HelloWorld";
  pcVar7 = local_11b;
  for (lVar3 = 0xb; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pcVar7 = *pcVar5;
    pcVar5 = pcVar5 + (ulong)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (ulong)bVar8 * -2 + 1;
  }
  uVar1 = memop_memmove(local_11b,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
  local_170 = 0x200000001;
  local_168 = 3;
  local_164 = 0x200000001;
  local_15c = 4;
  iVar2 = memcmp(&local_170,&local_164,0xc);
  iVar4 = 1;
  if (iVar2 < 1) {
    iVar4 = -(uint)(iVar2 != 0);
  }
  __printf_chk(1,"MEMOP-L2-04: %d\n",iVar4);
  uVar1 = memop_bzero(local_125,10);
  __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
  local_12d = 0x4030201;
  local_129 = 0;
  uVar1 = memop_bcopy(&local_12d,&local_129,4);
  __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  local_174 = 5;
  memop_memory_barrier(&local_174,"MEMOP-L3-02: %d\n");
  __printf_chk(1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Function: extern_function @ 0010228f */

int extern_function(int param_1)

{
  return param_1 * 3;
}



/* Function: _fini @ 00102298 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 63 */
