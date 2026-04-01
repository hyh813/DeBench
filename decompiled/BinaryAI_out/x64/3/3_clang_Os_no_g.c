// Decompiled by BinaryAI
// SHA256: a73bd44d819e10a84c2f2cdf38d31c8283e685c463365486b865063ad90b9166

// Function: _init @ 0x101000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  iVar1 = __gmon_start__();
  return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: <EXTERNAL>::free @ 0x101030
void free(void *__ptr)
{
  free(__ptr);
  return;
}

// Function: <EXTERNAL>::puts @ 0x101040
int puts(char *__s)
{
  int iVar1;
  iVar1 = puts(__s);
  return iVar1;
}

// Function: <EXTERNAL>::printf @ 0x101050
int printf(char *__format,...)
{
  int iVar1;
  iVar1 = printf(__format);
  return iVar1;
}

// Function: <EXTERNAL>::memset @ 0x101060
void * memset(void *__s,int __c,size_t __n)
{
  void *pvVar1;
  pvVar1 = memset(__s,__c,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::memcmp @ 0x101070
int memcmp(void *__s1,void *__s2,size_t __n)
{
  int iVar1;
  iVar1 = memcmp(__s1,__s2,__n);
  return iVar1;
}

// Function: <EXTERNAL>::calloc @ 0x101080
void * calloc(size_t __nmemb,size_t __size)
{
  void *pvVar1;
  pvVar1 = calloc(__nmemb,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memcpy @ 0x101090
void * memcpy(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memcpy(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::malloc @ 0x1010a0
void * malloc(size_t __size)
{
  void *pvVar1;
  pvVar1 = malloc(__size);
  return pvVar1;
}

// Function: <EXTERNAL>::realloc @ 0x1010b0
void * realloc(void *__ptr,size_t __size)
{
  void *pvVar1;
  pvVar1 = realloc(__ptr,__size);
  return pvVar1;
}

// Function: <EXTERNAL>::memmove @ 0x1010c0
void * memmove(void *__dest,void *__src,size_t __n)
{
  void *pvVar1;
  pvVar1 = memmove(__dest,__src,__n);
  return pvVar1;
}

// Function: <EXTERNAL>::waitpid @ 0x1010d0
__pid_t waitpid(__pid_t __pid,int *__stat_loc,int __options)
{
  __pid_t _Var1;
  _Var1 = waitpid(__pid,__stat_loc,__options);
  return _Var1;
}

// Function: <EXTERNAL>::perror @ 0x1010e0
void perror(char *__s)
{
  perror(__s);
  return;
}

// Function: <EXTERNAL>::exit @ 0x1010f0
void exit(int __status)
{
  exit(__status);
}

// Function: <EXTERNAL>::fork @ 0x101100
__pid_t fork(void)
{
  __pid_t _Var1;
  _Var1 = fork();
  return _Var1;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101110
void __cxa_finalize(void)
{
  __cxa_finalize();
  return;
}

// Function: _start @ 0x101120
void processEntry _start(undefined8 param_1,undefined8 param_2)
{
  undefined auStack_8 [8];
  __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
  do {
  } while( true );
}

// Function: deregister_tm_clones @ 0x101150
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x101180
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x1011c0
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

// Function: local_vars @ 0x10120c
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x101213
undefined4 local_array(int param_1)
{
  int iVar1;
  long lVar2;
  int aiStack_28 [10];
  iVar1 = 0;
  lVar2 = 0;
  do {
    aiStack_28[lVar2] = iVar1;
    lVar2 = lVar2 + 1;
    iVar1 = iVar1 + param_1;
  } while (lVar2 != 10);
  return aiStack_28[5];
}

// Function: local_struct @ 0x10122b
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x10122f
undefined8 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x10123b
int address_of_array(int *param_1)
{
  return *param_1 * 2;
}

// Function: large_stack_frame @ 0x101240
int large_stack_frame(void)
{
  long lVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char acStack_808 [2056];
  cVar2 = '\0';
  cVar3 = '\x01';
  cVar4 = '\x02';
  cVar5 = '\x03';
  cVar6 = '\x04';
  cVar7 = '\x05';
  cVar8 = '\x06';
  cVar9 = '\a';
  cVar10 = '\b';
  cVar11 = '\t';
  cVar12 = '\n';
  cVar13 = '\v';
  cVar14 = '\f';
  cVar15 = '\r';
  cVar16 = '\x0e';
  cVar17 = '\x0f';
  lVar1 = 0;
  do {
    acStack_808[lVar1] = cVar2;
    acStack_808[lVar1 + 1] = cVar3;
    acStack_808[lVar1 + 2] = cVar4;
    acStack_808[lVar1 + 3] = cVar5;
    acStack_808[lVar1 + 4] = cVar6;
    acStack_808[lVar1 + 5] = cVar7;
    acStack_808[lVar1 + 6] = cVar8;
    acStack_808[lVar1 + 7] = cVar9;
    acStack_808[lVar1 + 8] = cVar10;
    acStack_808[lVar1 + 9] = cVar11;
    acStack_808[lVar1 + 10] = cVar12;
    acStack_808[lVar1 + 0xb] = cVar13;
    acStack_808[lVar1 + 0xc] = cVar14;
    acStack_808[lVar1 + 0xd] = cVar15;
    acStack_808[lVar1 + 0xe] = cVar16;
    acStack_808[lVar1 + 0xf] = cVar17;
    lVar1 = lVar1 + 0x10;
    cVar2 = cVar2 + '\x10';
    cVar3 = cVar3 + '\x10';
    cVar4 = cVar4 + '\x10';
    cVar5 = cVar5 + '\x10';
    cVar6 = cVar6 + '\x10';
    cVar7 = cVar7 + '\x10';
    cVar8 = cVar8 + '\x10';
    cVar9 = cVar9 + '\x10';
    cVar10 = cVar10 + '\x10';
    cVar11 = cVar11 + '\x10';
    cVar12 = cVar12 + '\x10';
    cVar13 = cVar13 + '\x10';
    cVar14 = cVar14 + '\x10';
    cVar15 = cVar15 + '\x10';
    cVar16 = cVar16 + '\x10';
    cVar17 = cVar17 + '\x10';
  } while (lVar1 != 0x800);
  return (int)acStack_808[1024];
}

// Function: vla_stack @ 0x10127f
undefined4 vla_stack(uint param_1)
{
  long lVar1;
  undefined4 uVar2;
  long lVar3;
  uVar2 = 0xffffffff;
  if (0xfffffc17 < param_1 - 0x3e9) {
    lVar1 = -8 - ((ulong)param_1 * 4 + 0xf & 0xfffffffffffffff0);
    lVar3 = 0;
    do {
      *(int *)(&stack0xfffffffffffffff8 + lVar3 * 2 + lVar1 + 8) = (int)lVar3;
      lVar3 = lVar3 + 2;
    } while ((ulong)param_1 * 2 != lVar3);
    uVar2 = *(undefined4 *)
             (&stack0xfffffffffffffff8 + (ulong)(uint)((int)param_1 / 2) * 4 + lVar1 + 8);
  }
  return uVar2;
}

// Function: alloca_usage @ 0x1012d5
undefined4 alloca_usage(uint param_1)
{
  long lVar1;
  undefined4 *puVar2;
  if (0 < (int)param_1) {
    lVar1 = 0;
    puVar2 = (undefined4 *)
             (&stack0xfffffffffffffff8 + -((ulong)param_1 * 4 + 0xf & 0xfffffffffffffff0));
    do {
      *puVar2 = (int)lVar1;
      lVar1 = lVar1 + 3;
      puVar2 = puVar2 + 1;
    } while ((ulong)param_1 * 3 != lVar1);
    return *(undefined4 *)
            ((long)(&stack0xfffffffffffffff8 + -((ulong)param_1 * 4 + 0xf & 0xfffffffffffffff0)) +
            (ulong)(uint)((int)param_1 / 2) * 4);
  }
  return 0xffffffff;
}

// Function: stack_alias @ 0x101323
undefined8 stack_alias(void)
{
  return 0x14;
}

// Function: test_stack_memory @ 0x101329
void test_stack_memory(void)
{
  long lVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  char cVar18;
  undefined4 local_818;
  char acStack_814 [16];
  uint local_804;
  char local_418;
  puVar2 = &local_818;
  puts(&DAT_001025e9);
  lVar1 = 0;
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  do {
    *(int *)(acStack_814 + lVar1 * 2 + -4) = (int)lVar1;
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  printf("MEM-L1-02 (local_array): %d\n",(ulong)local_804);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  cVar3 = '\0';
  cVar4 = '\x01';
  cVar5 = '\x02';
  cVar6 = '\x03';
  cVar7 = '\x04';
  cVar8 = '\x05';
  cVar9 = '\x06';
  cVar10 = '\a';
  cVar11 = '\b';
  cVar12 = '\t';
  cVar13 = '\n';
  cVar14 = '\v';
  cVar15 = '\f';
  cVar16 = '\r';
  cVar17 = '\x0e';
  cVar18 = '\x0f';
  do {
    acStack_814[lVar1 + -4] = cVar3;
    acStack_814[lVar1 + -3] = cVar4;
    acStack_814[lVar1 + -2] = cVar5;
    acStack_814[lVar1 + -1] = cVar6;
    acStack_814[lVar1] = cVar7;
    acStack_814[lVar1 + 1] = cVar8;
    acStack_814[lVar1 + 2] = cVar9;
    acStack_814[lVar1 + 3] = cVar10;
    acStack_814[lVar1 + 4] = cVar11;
    acStack_814[lVar1 + 5] = cVar12;
    acStack_814[lVar1 + 6] = cVar13;
    acStack_814[lVar1 + 7] = cVar14;
    acStack_814[lVar1 + 8] = cVar15;
    acStack_814[lVar1 + 9] = cVar16;
    acStack_814[lVar1 + 10] = cVar17;
    acStack_814[lVar1 + 0xb] = cVar18;
    lVar1 = lVar1 + 0x10;
    cVar3 = cVar3 + SUB161(_DAT_00102020,0);
    cVar4 = cVar4 + SUB161(_DAT_00102020,1);
    cVar5 = cVar5 + SUB161(_DAT_00102020,2);
    cVar6 = cVar6 + SUB161(_DAT_00102020,3);
    cVar7 = cVar7 + SUB161(_DAT_00102020,4);
    cVar8 = cVar8 + SUB161(_DAT_00102020,5);
    cVar9 = cVar9 + SUB161(_DAT_00102020,6);
    cVar10 = cVar10 + SUB161(_DAT_00102020,7);
    cVar11 = cVar11 + SUB161(_DAT_00102020,8);
    cVar12 = cVar12 + SUB161(_DAT_00102020,9);
    cVar13 = cVar13 + SUB161(_DAT_00102020,10);
    cVar14 = cVar14 + SUB161(_DAT_00102020,0xb);
    cVar15 = cVar15 + SUB161(_DAT_00102020,0xc);
    cVar16 = cVar16 + SUB161(_DAT_00102020,0xd);
    cVar17 = cVar17 + SUB161(_DAT_00102020,0xe);
    cVar18 = cVar18 + SUB161(_DAT_00102020,0xf);
  } while (lVar1 != 0x800);
  lVar1 = 0;
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)(uint)(int)local_418);
  do {
    *(int *)(acStack_814 + lVar1 * 2 + -4) = (int)lVar1;
    lVar1 = lVar1 + 2;
  } while (lVar1 != 0x14);
  lVar1 = 0;
  printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_804);
  do {
    *puVar2 = (int)lVar1;
    puVar2 = puVar2 + 1;
    lVar1 = lVar1 + 3;
  } while (lVar1 != 0x1e);
  printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_804);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}

// Function: heap_basic @ 0x101456
undefined4 heap_basic(uint param_1)
{
  void *__ptr;
  long lVar1;
  undefined4 uVar2;
  __ptr = malloc((long)(int)param_1 << 2);
  if (__ptr == (void *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < (int)param_1) {
      lVar1 = 0;
      do {
        *(int *)((long)__ptr + lVar1 * 2) = (int)lVar1;
        lVar1 = lVar1 + 2;
      } while ((ulong)param_1 * 2 != lVar1);
    }
    uVar2 = *(undefined4 *)((long)__ptr + (long)((int)param_1 / 2) * 4);
    free(__ptr);
  }
  return uVar2;
}

// Function: heap_calloc @ 0x1014a3
int heap_calloc(uint param_1)
{
  void *__ptr;
  ulong uVar1;
  int iVar2;
  __ptr = calloc((long)(int)param_1,4);
  if (__ptr == (void *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 0;
    if ((0 < (int)param_1) && (iVar2 = 0, param_1 != 1)) {
      iVar2 = 0;
      uVar1 = 1;
      do {
        iVar2 = iVar2 + *(int *)((long)__ptr + uVar1 * 4);
        uVar1 = uVar1 + 1;
      } while (param_1 != uVar1);
    }
    free(__ptr);
  }
  return iVar2;
}

// Function: heap_realloc @ 0x1014f1
undefined4 heap_realloc(void)
{
  long lVar1;
  int iVar2;
  void *__ptr;
  void *__ptr_00;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    uVar5 = 0xffffffff;
  }
  else {
    lVar3 = 0;
    do {
      lVar1 = lVar3 + 1;
      *(int *)((long)__ptr + lVar3 * 4) = (int)lVar1;
      lVar3 = lVar1;
    } while (lVar1 != 5);
    iVar2 = *(int *)((long)__ptr + 8);
    __ptr_00 = realloc(__ptr,0x28);
    if (__ptr_00 == (void *)0x0) {
      uVar5 = 0xfffffffe;
      __ptr_00 = __ptr;
    }
    else {
      lVar3 = 5;
      iVar4 = 0x32;
      do {
        *(int *)((long)__ptr_00 + lVar3 * 4) = iVar4;
        lVar3 = lVar3 + 1;
        iVar4 = iVar4 + 10;
      } while (lVar3 != 10);
      uVar5 = 0xfffffffd;
      if (*(int *)((long)__ptr_00 + 8) == iVar2) {
        uVar5 = *(undefined4 *)((long)__ptr_00 + 0x14);
      }
    }
    free(__ptr_00);
  }
  return uVar5;
}

// Function: heap_array @ 0x101576
undefined4 heap_array(uint param_1)
{
  undefined4 *__ptr;
  long lVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  __ptr = (undefined4 *)malloc((long)(int)param_1 << 2);
  if (__ptr == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < (int)param_1) {
      lVar1 = 0;
      puVar3 = __ptr;
      do {
        *puVar3 = (int)lVar1;
        lVar1 = lVar1 + 3;
        puVar3 = puVar3 + 1;
      } while ((ulong)param_1 * 3 != lVar1);
    }
    uVar2 = __ptr[(int)param_1 / 2];
    free(__ptr);
  }
  return uVar2;
}

// Function: heap_struct @ 0x1015ca
int heap_struct(int param_1)
{
  return param_1 * 3;
}

// Function: heap_nested @ 0x1015ce
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

// Function: linked_list_heap @ 0x101631
int linked_list_heap(void)
{
  int **ppiVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *__ptr;
  int *piVar7;
  bool bVar8;
  piVar2 = (int *)malloc(0x10);
  iVar5 = 0;
  if (piVar2 == (int *)0x0) {
    bVar8 = true;
    __ptr = (int *)0x0;
  }
  else {
    uVar4 = 0;
    piVar6 = (int *)0x0;
    piVar7 = (int *)0x0;
    do {
      piVar3 = piVar2;
      *piVar3 = iVar5;
      *(undefined8 *)(piVar3 + 2) = 0;
      __ptr = piVar3;
      if (piVar6 != (int *)0x0) {
        *(int **)(piVar7 + 2) = piVar3;
        __ptr = piVar6;
      }
      if (uVar4 == 0xfffffffc) {
        bVar8 = false;
        goto LAB_001016ba;
      }
      piVar2 = (int *)malloc(0x10);
      uVar4 = uVar4 - 1;
      iVar5 = iVar5 + 10;
      piVar6 = __ptr;
      piVar7 = piVar3;
    } while (piVar2 != (int *)0x0);
    bVar8 = ~uVar4 < 4;
  }
  while (__ptr != (int *)0x0) {
    piVar2 = *(int **)(__ptr + 2);
    free(__ptr);
    __ptr = piVar2;
  }
  __ptr = (int *)0x0;
LAB_001016ba:
  iVar5 = -1;
  if ((!bVar8) && (iVar5 = 0, piVar2 = __ptr, __ptr != (int *)0x0)) {
    do {
      iVar5 = iVar5 + *piVar2;
      ppiVar1 = (int **)(piVar2 + 2);
      piVar2 = *ppiVar1;
    } while (*ppiVar1 != (int *)0x0);
    while (__ptr != (int *)0x0) {
      piVar2 = *(int **)(__ptr + 2);
      free(__ptr);
      __ptr = piVar2;
    }
  }
  return iVar5;
}

// Function: create_tree_node @ 0x1016fe
void create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)malloc(0x18);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    *(undefined (*) [16])(puVar1 + 2) = ZEXT816(0);
  }
  return;
}

// Function: tree_heap_traversal @ 0x10171b
undefined8 tree_heap_traversal(void)
{
  return 0x3c;
}

// Function: memory_leak @ 0x101721
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
      } while (param_1 != uVar3);
    }
    uVar1 = *(undefined4 *)((long)pvVar2 + (long)((int)param_1 / 2) * 4);
  }
  return uVar1;
}

// Function: dangling_pointer @ 0x101760
undefined4 dangling_pointer(void)
{
  undefined4 uVar1;
  undefined4 *__ptr;
  __ptr = (undefined4 *)malloc(4);
  if (__ptr == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    uVar1 = *__ptr;
  }
  return uVar1;
}

// Function: double_free @ 0x101799
undefined4 double_free(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xfffffffe;
}

// Function: heap_overflow @ 0x1017a7
undefined4 heap_overflow(void)
{
  undefined4 *__ptr;
  long lVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  __ptr = (undefined4 *)malloc(0x28);
  if (__ptr == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar1 = 0;
    puVar2 = __ptr;
    do {
      *puVar2 = (int)lVar1;
      lVar1 = lVar1 + 100;
      puVar2 = puVar2 + 1;
    } while (lVar1 != 0x44c);
    uVar3 = *__ptr;
    free(__ptr);
  }
  return uVar3;
}

// Function: test_heap_memory @ 0x1017e4
void test_heap_memory(void)
{
  uint uVar1;
  __pid_t __pid;
  void *pvVar2;
  long lVar3;
  ulong uVar4;
  char *__format;
  uint local_14;
  void *local_10;
  puts(&DAT_00102607);
  uVar1 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar1);
  uVar1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar1);
  uVar1 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
  uVar1 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar1);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  local_10 = (void *)0x0;
  uVar1 = heap_nested(&local_10);
  printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
  pvVar2 = local_10;
  if (local_10 != (void *)0x0) {
    free(*(void **)((long)local_10 + 8));
    free(pvVar2);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
  pvVar2 = malloc(0x14);
  if (pvVar2 == (void *)0x0) {
    uVar4 = 0xffffffff;
  }
  else {
    lVar3 = 0;
    do {
      *(int *)((long)pvVar2 + lVar3 * 4) = (int)lVar3;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 5);
    uVar4 = (ulong)*(uint *)((long)pvVar2 + 8);
  }
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar4);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_0010230b);
      return;
    }
    waitpid(__pid,(int *)&local_14,0);
    uVar1 = local_14 & 0x7f;
    if (uVar1 == 0) {
      uVar4 = (ulong)(byte)(local_14 >> 8);
      __format = &DAT_001022a5;
    }
    else {
      if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) {
        return;
      }
      __format = &DAT_001022ca;
      uVar4 = (ulong)uVar1;
    }
    printf(__format,uVar4);
    return;
  }
  uVar1 = dangling_pointer();
  printf(&DAT_00102295,(ulong)uVar1);
  exit(0);
}

// Function: global_var_access @ 0x10199a
void global_var_access(void)
{
  global_counter = global_counter + 1;
  return;
}

// Function: global_var_read @ 0x1019a9
int global_var_read(void)
{
  return global_counter * 2;
}

// Function: global_array_access @ 0x1019b2
undefined4 global_array_access(uint param_1)
{
  undefined4 uVar1;
  uVar1 = 0xffffffff;
  if (param_1 < 10) {
    uVar1 = *(undefined4 *)(global_array + (ulong)param_1 * 4);
  }
  return uVar1;
}

// Function: static_local @ 0x1019c9
void static_local(int param_1)
{
  int iVar1;
  iVar1 = 0;
  if (param_1 == 0) {
    iVar1 = static_local_counter + 1;
  }
  static_local_counter = iVar1;
  return;
}

// Function: call_static_func @ 0x1019df
int call_static_func(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x1019e5
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x1019f2
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x1019fc
int read_const_data(void)
{
  return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x101a0b
undefined8 access_bss_var(void)
{
  return 0;
}

// Function: access_bss_buffer @ 0x101a0e
undefined8 access_bss_buffer(void)
{
  return 0;
}

// Function: global_struct_access @ 0x101a11
undefined8 global_struct_access(void)
{
  return 0x1e;
}

// Function: set_file_static @ 0x101a17
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x101a1e
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x101a25
void set_global_callback(undefined8 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x101a2d
undefined8 call_global_callback(void)
{
  undefined8 uVar1;
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}

// Function: global_heap_store @ 0x101a41
undefined4 global_heap_store(undefined4 *param_1)
{
  global_heap_ptr = param_1;
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}

// Function: static_complex_init @ 0x101a56
undefined8 static_complex_init(void)
{
  return 0xf;
}

// Function: tls_access @ 0x101a5c
int tls_access(int param_1)
{
  return param_1 * 2;
}

// Function: init_order_test @ 0x101a60
undefined8 init_order_test(void)
{
  return 0x14;
}

// Function: test_static_global @ 0x101a66
void test_static_global(void)
{
  uint uVar1;
  undefined4 local_c;
  puts(&DAT_00102625);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n");
  printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter * 2));
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local_counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local_counter = static_local_counter + 1;
  printf("STM-L1-03 (static_local): %d\n");
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
  uVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
  printf("STM-L2-03 (read_const_data): %d\n",(ulong)((int)(char)const_string[4] + 0x2a));
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  global_heap_ptr = &local_c;
  local_c = 100;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}

// Function: double_value @ 0x101c2c
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: memop_memset @ 0x101c30
ulong memop_memset(byte *param_1,size_t param_2,int param_3)
{
  ulong uVar1;
  uVar1 = 0xffffffff;
  if ((param_1 != (byte *)0x0) && (param_2 != 0)) {
    memset(param_1,param_3,param_2);
    uVar1 = (ulong)*param_1;
  }
  return uVar1;
}

// Function: memop_memcpy @ 0x101c55
undefined4 memop_memcpy(void *param_1,void *param_2,size_t param_3)
{
  undefined4 uVar1;
  uVar1 = 0xffffffff;
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
    memcpy(param_1,param_2,param_3);
    uVar1 = *(undefined4 *)(((param_3 & 0xfffffffffffffffc) - 4) + (long)param_1);
  }
  return uVar1;
}

// Function: memop_memmove @ 0x101c8c
int memop_memmove(void *param_1,ulong param_2)
{
  int iVar1;
  iVar1 = -1;
  if ((param_1 != (void *)0x0) && (1 < param_2)) {
    memmove((void *)((long)param_1 + 1),param_1,param_2 - 1);
    iVar1 = (int)*(char *)((long)param_1 + 1);
  }
  return iVar1;
}

// Function: memop_memcmp @ 0x101cb7
int memop_memcmp(void *param_1,void *param_2,size_t param_3)
{
  int iVar1;
  int iVar2;
  iVar2 = 0;
  if (((param_1 != (void *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) {
    iVar1 = memcmp(param_1,param_2,param_3);
    iVar2 = 1;
    if (iVar1 < 1) {
      iVar2 = -(uint)(iVar1 != 0);
    }
  }
  return iVar2;
}

// Function: memop_bzero @ 0x101ce6
ulong memop_bzero(byte *param_1,size_t param_2)
{
  if (param_1 != (byte *)0x0) {
    memset(param_1,0,param_2);
    return (ulong)*param_1;
  }
  return 0xffffffff;
}

// Function: memop_bcopy @ 0x101d04
ulong memop_bcopy(void *param_1,byte *param_2,size_t param_3)
{
  ulong uVar1;
  uVar1 = 0xffffffff;
  if (((param_1 != (void *)0x0) && (param_2 != (byte *)0x0)) && (param_3 != 0)) {
    memmove(param_2,param_1,param_3);
    uVar1 = (ulong)*param_2;
  }
  return uVar1;
}

// Function: memop_unaligned_access @ 0x101d2c
undefined4 memop_unaligned_access(long param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x101d3b
int memop_memory_barrier(int *param_1)
{
  if (param_1 != (int *)0x0) {
    return *param_1 + *param_1;
  }
  return -1;
}

// Function: test_memory_op_functions @ 0x101d4e
void test_memory_op_functions(void)
{
  puts(&DAT_00102649);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  printf("MEMOP-L2-03: %c\n",0x48);
  printf("MEMOP-L2-04: %d\n",0xffffffff);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
  printf("MEMOP-L3-02: %d\n",10);
  return;
}

// Function: main @ 0x101e25
undefined8 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: extern_function @ 0x101e40
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: _fini @ 0x101e44
void _fini(void)
{
  return;
}

