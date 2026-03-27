// Decompiled by BinaryAI
// SHA256: 2dba91fe76c3fa64261956397f32233bd4ba5dc78acfdbc5c17f056c0cbc547e

// Function: _init @ 0x1058c
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = call_weak_fn();
  return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x105ac
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x105b8
void __libc_start_main(void)
{
  __libc_start_main();
  return;
}

// Function: <EXTERNAL>::memmove @ 0x105c4
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::free @ 0x105d0
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::memcpy @ 0x105dc
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x105e8
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x105f4
void __stack_chk_fail(void)
{
  __stack_chk_fail();
}

// Function: <EXTERNAL>::realloc @ 0x10600
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::perror @ 0x1060c
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::waitpid @ 0x10618
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::puts @ 0x10624
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::malloc @ 0x10630
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::exit @ 0x10648
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::memset @ 0x10654
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10660
void __printf_chk(void)
{
  __printf_chk();
  return;
}

// Function: <EXTERNAL>::fork @ 0x1066c
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::abort @ 0x10678
void abort(void)
{
  abort();
}

// Function: _start @ 0x10684
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
  abort();
}

// Function: call_weak_fn @ 0x106c8
void call_weak_fn(void)
{
  __gmon_start__();
  return;
}

// Function: deregister_tm_clones @ 0x106ec
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x10718
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x10750
void __do_global_dtors_aux(void)
{
  if (completed_0 != '\0') {
    return;
  }
  deregister_tm_clones();
  completed_0 = 1;
  return;
}

// Function: double_value @ 0x1077c
int double_value(int param_1)
{
  return param_1 << 1;
}

// Function: local_vars @ 0x10784
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x10790
void local_array(int param_1)
{
  int *piVar1;
  int iVar2;
  int iStack_38;
  int local_34 [13];
  piVar1 = &iStack_38;
  iVar2 = 0;
  do {
    piVar1 = piVar1 + 1;
    *piVar1 = iVar2;
    iVar2 = iVar2 + param_1;
  } while (piVar1 != local_34 + 9);
  return;
}

// Function: local_struct @ 0x107f0
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x107f8
undefined4 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x10808
int address_of_array(int *param_1)
{
  return *param_1 << 1;
}

// Function: large_stack_frame @ 0x10814
void large_stack_frame(void)
{
  char *pcVar1;
  char cVar2;
  char cStack_80d;
  char local_80c [2060];
  pcVar1 = &cStack_80d;
  cVar2 = '\0';
  do {
    pcVar1 = pcVar1 + 1;
    *pcVar1 = cVar2;
    cVar2 = cVar2 + '\x01';
  } while (pcVar1 != local_80c + 0x7ff);
  return;
}

// Function: vla_stack @ 0x10884
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
    piVar3 = (int *)((int)aiStack_14 + iVar1);
    param_2 = param_1 * 2;
    iVar4 = 0;
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = iVar4;
      iVar4 = iVar4 + 2;
    } while (iVar4 != param_2);
    uVar2 = *(undefined4 *)((int)aiStack_14 + (param_1 / 2) * 4 + iVar1 + 4);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (aiStack_14[2] == 0) {
    return;
  }
  __stack_chk_fail(uVar2,param_2,aiStack_14[2],0);
}

// Function: alloca_usage @ 0x10918
void alloca_usage(int param_1,int *param_2)
{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int aiStack_14 [3];
  aiStack_14[2] = 0;
  if (param_1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = -(param_1 * 4 + 7U & 0xfffffff8);
    piVar3 = (int *)((int)aiStack_14 + iVar1);
    param_2 = (int *)((int)aiStack_14 + param_1 * 4 + iVar1);
    iVar4 = 0;
    do {
      piVar3 = piVar3 + 1;
      *piVar3 = iVar4;
      iVar4 = iVar4 + 3;
    } while (piVar3 != param_2);
    uVar2 = *(undefined4 *)((int)aiStack_14 + (param_1 / 2) * 4 + iVar1 + 4);
  }
  if (aiStack_14[2] == 0) {
    return;
  }
  __stack_chk_fail(uVar2,param_2,aiStack_14[2],0);
}

// Function: stack_alias @ 0x109ac
undefined4 stack_alias(void)
{
  return 0x14;
}

// Function: test_stack_memory @ 0x109b4
void test_stack_memory(void)
{
  undefined4 uVar1;
  puts(&DAT_000128a0);
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

// Function: heap_basic @ 0x10a98
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
      piVar1 = (int *)((int)__ptr + -4);
      iVar2 = 0;
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

// Function: heap_calloc @ 0x10af4
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
    if ((int)param_1 < 1) {
      iVar2 = 0;
    }
    else {
      piVar1 = (int *)((int)__ptr + -4);
      iVar2 = 0;
      do {
        piVar1 = piVar1 + 1;
        iVar2 = iVar2 + *piVar1;
      } while (piVar1 != (int *)((int)__ptr + param_1 * 4 + -4));
    }
    free(__ptr);
  }
  return iVar2;
}

// Function: heap_realloc @ 0x10b50
undefined4 heap_realloc(void)
{
  undefined4 *__ptr;
  void *__ptr_00;
  undefined4 uVar1;
  __ptr = (undefined4 *)malloc(0x14);
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
      *(undefined4 *)((int)__ptr_00 + 0x14) = 0x32;
      *(undefined4 *)((int)__ptr_00 + 0x18) = 0x3c;
      *(undefined4 *)((int)__ptr_00 + 0x1c) = 0x46;
      *(undefined4 *)((int)__ptr_00 + 0x20) = 0x50;
      *(undefined4 *)((int)__ptr_00 + 0x24) = 0x5a;
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

// Function: heap_array @ 0x10bfc
undefined4 heap_array(int param_1)
{
  void *__ptr;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  __ptr = malloc(param_1 * 4);
  if (__ptr == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      piVar1 = (int *)((int)__ptr + -4);
      iVar2 = 0;
      do {
        piVar1 = piVar1 + 1;
        *piVar1 = iVar2;
        iVar2 = iVar2 + 3;
      } while (piVar1 != (int *)((int)__ptr + (param_1 * 4 - 4U)));
    }
    uVar3 = *(undefined4 *)((int)__ptr + (param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar3;
}

// Function: heap_struct @ 0x10c60
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

// Function: heap_nested @ 0x10c90
undefined4 heap_nested(undefined4 *param_1)
{
  undefined4 *__ptr;
  undefined4 *puVar1;
  __ptr = (undefined4 *)malloc(8);
  *param_1 = __ptr;
  if (__ptr == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  *__ptr = 10;
  puVar1 = (undefined4 *)malloc(8);
  __ptr[1] = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0x14;
    puVar1[1] = 0;
    return 0;
  }
  free(__ptr);
  return 0xfffffffe;
}

// Function: linked_list_heap @ 0x10cfc
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
    piVar1 = (int *)malloc(8);
    if (piVar1 == (int *)0x0) {
      if (__ptr != (int *)0x0) {
        do {
          piVar2 = (int *)__ptr[1];
          free(__ptr);
          __ptr = piVar2;
        } while (piVar2 != (int *)0x0);
        return -1;
      }
      return -1;
    }
    *piVar1 = iVar3;
    piVar1[1] = 0;
    __ptr_00 = piVar1;
    if (__ptr != (int *)0x0) {
      piVar2[1] = (int)piVar1;
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
      piVar2 = (int *)piVar2[1];
    } while (piVar2 != (int *)0x0);
    do {
      piVar2 = (int *)__ptr_00[1];
      free(__ptr_00);
      __ptr_00 = piVar2;
    } while (piVar2 != (int *)0x0);
  }
  return iVar3;
}

// Function: create_tree_node @ 0x10dbc
void create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)malloc(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return;
}

// Function: tree_heap_traversal @ 0x10de4
int tree_heap_traversal(void)
{
  int *__ptr;
  int iVar1;
  int *piVar2;
  int *__ptr_00;
  __ptr = (int *)create_tree_node(10);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    iVar1 = create_tree_node(0x14);
    __ptr[1] = iVar1;
    piVar2 = (int *)create_tree_node(0x1e);
    __ptr[2] = (int)piVar2;
    __ptr_00 = (int *)__ptr[1];
    if (__ptr_00 == (int *)0x0 || piVar2 == (int *)0x0) {
      if (__ptr_00 != (int *)0x0) {
        free(__ptr_00);
      }
      if ((void *)__ptr[2] != (void *)0x0) {
        free((void *)__ptr[2]);
      }
      free(__ptr);
      iVar1 = -2;
    }
    else {
      iVar1 = *__ptr + *__ptr_00 + *piVar2;
      free(__ptr_00);
      free((void *)__ptr[2]);
      free(__ptr);
    }
  }
  return iVar1;
}

// Function: memory_leak @ 0x10e88
undefined4 memory_leak(int param_1)
{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  pvVar1 = malloc(param_1 << 2);
  if (pvVar1 != (void *)0x0) {
    if (0 < param_1) {
      piVar2 = (int *)((int)pvVar1 + -4);
      iVar3 = 0;
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

// Function: dangling_pointer @ 0x10ed8
undefined4 dangling_pointer(void)
{
  undefined4 *__ptr;
  __ptr = (undefined4 *)malloc(4);
  if (__ptr != (undefined4 *)0x0) {
    __printf_chk(1,"value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return 0xffffffff;
}

// Function: double_free @ 0x10f18
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

// Function: heap_overflow @ 0x10f5c
undefined4 heap_overflow(void)
{
  undefined4 *__ptr;
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    piVar1 = __ptr + -1;
    iVar2 = 0;
    do {
      piVar1 = piVar1 + 1;
      *piVar1 = iVar2;
      iVar2 = iVar2 + 100;
    } while (iVar2 != 0x44c);
    uVar3 = *__ptr;
    free(__ptr);
  }
  return uVar3;
}

// Function: test_heap_memory @ 0x10fa8
void test_heap_memory(void)
{
  undefined4 uVar1;
  __pid_t __pid;
  void *local_14;
  uint local_10;
  int local_c;
  local_c = 0;
  puts(&DAT_000129fc);
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
  local_14 = (void *)0x0;
  uVar1 = heap_nested(&local_14);
  __printf_chk(1,"HEAP-L2-06 (heap_nested): %d\n",uVar1);
  if (local_14 != (void *)0x0) {
    free(*(void **)((int)local_14 + 4));
    free(local_14);
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
    __printf_chk(1,&DAT_00012b68,uVar1);
    exit(0);
  }
  if (__pid < 1) {
    perror(&DAT_00012be4);
  }
  else {
    waitpid(__pid,(int *)&local_10,0);
    if ((local_10 & 0x7f) == 0) {
      __printf_chk(1,&DAT_00012b78,(int)local_10 >> 8 & 0xff);
    }
    else if (0x1ffffff < (int)(((local_10 & 0x7f) + 1) * 0x1000000)) {
      __printf_chk(1,&DAT_00012ba0);
    }
  }
  if (local_c == 0) {
    return;
  }
  __stack_chk_fail();
}

// Function: global_var_access @ 0x111b4
void global_var_access(void)
{
  global_counter = global_counter + 1;
  return;
}

// Function: global_var_read @ 0x111cc
int global_var_read(void)
{
  return global_counter << 1;
}

// Function: global_array_access @ 0x111e0
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

// Function: static_local @ 0x111f8
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

// Function: call_static_func @ 0x1121c
int call_static_func(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x11228
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1123c
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x1124c
int read_const_data(void)
{
  return *(byte *)(const_string + 4) + 0x2a;
}

// Function: access_bss_var @ 0x11264
undefined4 access_bss_var(void)
{
  return 0;
}

// Function: access_bss_buffer @ 0x1126c
undefined4 access_bss_buffer(void)
{
  return 0;
}

// Function: global_struct_access @ 0x11274
undefined4 global_struct_access(void)
{
  return 0x1e;
}

// Function: set_file_static @ 0x1127c
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x1128c
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x1129c
void set_global_callback(undefined4 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x112ac
undefined4 call_global_callback(void)
{
  undefined4 uVar1;
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}

// Function: global_heap_store @ 0x112d4
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

// Function: static_complex_init @ 0x112e4
undefined4 static_complex_init(void)
{
  return 0xf;
}

// Function: tls_access @ 0x112ec
int tls_access(int param_1)
{
  return param_1 << 1;
}

// Function: init_order_test @ 0x112f4
void init_order_test(void)
{
  static_depends_0 = 0x14;
  return;
}

// Function: test_static_global @ 0x11308
void test_static_global(void)
{
  undefined4 uVar1;
  puts(&DAT_00012bf0);
  uVar1 = global_var_access();
  __printf_chk(1,"STM-L1-01 (global_var_access): %d\n",uVar1);
  __printf_chk(1,"STM-L1-01 (global_var_read): %d\n",global_counter << 1);
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
  __printf_chk(1,"STM-L2-06 (file_static): %d\n");
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

// Function: memop_memset @ 0x114e4
uint memop_memset(byte *param_1,size_t param_2,int param_3)
{
  if (param_2 != 0 && param_1 != (byte *)0x0) {
    memset(param_1,param_3,param_2);
    return (uint)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_memcpy @ 0x11518
undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
  if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
    return 0xffffffff;
  }
  memcpy(param_1,param_2,param_3);
  return *(undefined4 *)((int)param_1 + ((param_3 & 0xfffffffc) - 4));
}

// Function: memop_memmove @ 0x11564
uint memop_memmove(void *param_1,int param_2)
{
  if ((param_1 == (void *)0x0 || param_2 != 0) && (param_1 != (void *)0x0 && param_2 != 1)) {
    memmove((void *)((int)param_1 + 1),param_1,param_2 - 1);
    return (uint)*(byte *)((int)param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memcmp @ 0x11598
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (void *)0x0)) {
    return 0;
  }
  iVar1 = memcmp(param_1,param_2,param_3);
  if (iVar1 < 1) {
    return iVar1 >> 0x1f;
  }
  return 1;
}

// Function: memop_bzero @ 0x115e4
uint memop_bzero(byte *param_1,size_t param_2)
{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (uint)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_bcopy @ 0x11610
uint memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
  if (param_1 == (void *)0x0 || (param_3 == 0 || param_2 == (byte *)0x0)) {
    return 0xffffffff;
  }
  memmove(param_2,param_1,param_3);
  return (uint)*param_2;
}

// Function: memop_unaligned_access @ 0x11654
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
  __stack_chk_fail(local_10);
}

// Function: memop_memory_barrier @ 0x116b8
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

// Function: test_memory_op_functions @ 0x116e0
void test_memory_op_functions(void)
{
  undefined4 uVar1;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined auStack_12c [12];
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined2 uStack_118;
  undefined local_116;
  undefined auStack_114 [256];
  int local_14;
  local_14 = 0;
  puts(&DAT_00012e74);
  local_164 = 10;
  uStack_160 = 0x14;
  uStack_15c = 0x1e;
  uStack_158 = 0x28;
  local_154 = 0x32;
  local_150 = 0;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  uVar1 = memop_memset(auStack_114,10,0x41);
  __printf_chk(1,"MEMOP-L2-01: %d\n",uVar1);
  uVar1 = memop_memcpy(&local_150,&local_164,0x14);
  __printf_chk(1,"MEMOP-L2-02: %d\n",uVar1);
  local_120._0_1_ = 'H';
  local_120._1_1_ = 'e';
  local_120._2_1_ = 'l';
  local_120._3_1_ = 'l';
  uStack_11c._0_1_ = 'o';
  uStack_11c._1_1_ = 'W';
  uStack_11c._2_1_ = 'o';
  uStack_11c._3_1_ = 'r';
  uStack_118 = 0x646c;
  local_116 = 0;
  uVar1 = memop_memmove(&local_120,10);
  __printf_chk(1,"MEMOP-L2-03: %c\n",uVar1);
  local_17c = 1;
  uStack_178 = 2;
  uStack_174 = 3;
  local_170 = 1;
  uStack_16c = 2;
  uStack_168 = 4;
  uVar1 = memop_memcmp(&local_17c,&local_170,0xc);
  __printf_chk(1,"MEMOP-L2-04: %d\n",uVar1);
  uVar1 = memop_bzero(auStack_12c,10);
  __printf_chk(1,"MEMOP-L2-05: %d\n",uVar1);
  local_13c = 0x4030201;
  local_138 = 0;
  uVar1 = memop_bcopy(&local_13c,&local_138,4);
  __printf_chk(1,"MEMOP-L2-06: %d\n",uVar1);
  local_134 = 0x3020100;
  uStack_130 = 0x7060504;
  uVar1 = memop_unaligned_access(&local_134);
  __printf_chk(1,"MEMOP-L3-01: 0x%x\n",uVar1);
  local_180 = 5;
  uVar1 = memop_memory_barrier(&local_180);
  __printf_chk(1,"MEMOP-L3-02: %d\n",uVar1);
  if (local_14 == 0) {
    return;
  }
  __stack_chk_fail();
}

// Function: main @ 0x118d4
undefined4 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: extern_function @ 0x118f0
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: __sync_fetch_and_add_4 @ 0x118f8
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

// Function: __sync_fetch_and_sub_4 @ 0x11930
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

// Function: __sync_fetch_and_or_4 @ 0x11968
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

// Function: __sync_fetch_and_and_4 @ 0x119a0
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

// Function: __sync_fetch_and_xor_4 @ 0x119d8
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

// Function: __sync_fetch_and_nand_4 @ 0x11a10
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

// Function: __sync_fetch_and_add_2 @ 0x11a4c
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

// Function: __sync_fetch_and_sub_2 @ 0x11aac
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

// Function: __sync_fetch_and_or_2 @ 0x11b0c
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

// Function: __sync_fetch_and_and_2 @ 0x11b6c
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

// Function: __sync_fetch_and_xor_2 @ 0x11bcc
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

// Function: __sync_fetch_and_nand_2 @ 0x11c2c
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

// Function: __sync_fetch_and_add_1 @ 0x11c90
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

// Function: __sync_fetch_and_sub_1 @ 0x11cec
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

// Function: __sync_fetch_and_or_1 @ 0x11d48
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

// Function: __sync_fetch_and_and_1 @ 0x11da4
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

// Function: __sync_fetch_and_xor_1 @ 0x11e00
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

// Function: __sync_fetch_and_nand_1 @ 0x11e5c
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

// Function: __sync_add_and_fetch_4 @ 0x11ebc
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

// Function: __sync_sub_and_fetch_4 @ 0x11ef4
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

// Function: __sync_or_and_fetch_4 @ 0x11f2c
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

// Function: __sync_and_and_fetch_4 @ 0x11f64
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

// Function: __sync_xor_and_fetch_4 @ 0x11f9c
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

// Function: __sync_nand_and_fetch_4 @ 0x11fd4
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

// Function: __sync_add_and_fetch_2 @ 0x12010
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

// Function: __sync_sub_and_fetch_2 @ 0x12078
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

// Function: __sync_or_and_fetch_2 @ 0x120e0
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

// Function: __sync_and_and_fetch_2 @ 0x12148
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

// Function: __sync_xor_and_fetch_2 @ 0x121b0
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

// Function: __sync_nand_and_fetch_2 @ 0x12218
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

// Function: __sync_add_and_fetch_1 @ 0x12284
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

// Function: __sync_sub_and_fetch_1 @ 0x122e8
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

// Function: __sync_or_and_fetch_1 @ 0x1234c
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

// Function: __sync_and_and_fetch_1 @ 0x123b0
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

// Function: __sync_xor_and_fetch_1 @ 0x12414
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

// Function: __sync_nand_and_fetch_1 @ 0x12478
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

// Function: __sync_val_compare_and_swap_4 @ 0x124e0
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

// Function: __sync_val_compare_and_swap_2 @ 0x12530
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

// Function: __sync_val_compare_and_swap_1 @ 0x125a8
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

// Function: __sync_bool_compare_and_swap_4 @ 0x1261c
bool __sync_bool_compare_and_swap_4(undefined4 param_1,undefined4 param_2,undefined4 param_3)
{
  int iVar1;
  iVar1 = (*(code *)&SUB_ffff0fc0)(param_2,param_3,param_1);
  return iVar1 == 0;
}

// Function: __sync_bool_compare_and_swap_2 @ 0x12648
bool __sync_bool_compare_and_swap_2(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_2();
  return param_2 == iVar1;
}

// Function: __sync_bool_compare_and_swap_1 @ 0x12664
bool __sync_bool_compare_and_swap_1(undefined4 param_1,int param_2)
{
  int iVar1;
  iVar1 = __sync_val_compare_and_swap_1();
  return param_2 == iVar1;
}

// Function: __sync_lock_test_and_set_4 @ 0x1268c
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

// Function: __sync_lock_test_and_set_2 @ 0x126c4
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

// Function: __sync_lock_test_and_set_1 @ 0x12724
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

// Function: __sync_lock_release_8 @ 0x12780
void __sync_lock_release_8(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

// Function: __sync_lock_release_4 @ 0x127a4
void __sync_lock_release_4(undefined4 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_2 @ 0x127c4
void __sync_lock_release_2(undefined2 *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: __sync_lock_release_1 @ 0x127e4
void __sync_lock_release_1(undefined *param_1)
{
  (*(code *)&SUB_ffff0fa0)();
  *param_1 = 0;
  return;
}

// Function: _fini @ 0x12804
void _fini(void)
{
  return;
}

