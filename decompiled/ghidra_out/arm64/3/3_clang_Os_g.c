/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/3/3_clang_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */

/* Function: _init @ 001008c8 */

int _init(EVP_PKEY_CTX *ctx)

{
  int iVar1;
  
  iVar1 = call_weak_fn((int)ctx);
  return iVar1;
}



/* Function: FUN_001008e0 @ 001008e0 */

void FUN_001008e0(void)

{
  (*(code *)(undefined *)0x0)();
  return;
}



/* Function: _start @ 00100a40 */

void _start(undefined8 param_1)

{
  undefined8 in_stack_00000000;
  
  __libc_start_main(main,in_stack_00000000,&stack0x00000008,0,0,param_1);
                    /* WARNING: Subroutine does not return */
  abort();
}



/* Function: call_weak_fn @ 00100a74 */

/* WARNING: Removing unreachable block (ram,0x00100a84) */

void call_weak_fn(void)

{
  __gmon_start__();
  return;
}



/* Function: deregister_tm_clones @ 00100a90 */

/* WARNING: Removing unreachable block (ram,0x00100aa8) */
/* WARNING: Removing unreachable block (ram,0x00100ab4) */

void deregister_tm_clones(void)

{
  return;
}



/* Function: register_tm_clones @ 00100ac0 */

/* WARNING: Removing unreachable block (ram,0x00100ae4) */
/* WARNING: Removing unreachable block (ram,0x00100af0) */

void register_tm_clones(void)

{
  return;
}



/* Function: FUN_00100afc @ 00100afc */

void FUN_00100afc(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: __do_global_dtors_aux @ 00100b00 */

void __do_global_dtors_aux(void)

{
  if (completed_0 == '\0') {
    __cxa_finalize(__dso_handle);
    deregister_tm_clones();
    completed_0 = '\x01';
  }
  return;
}



/* Function: local_vars @ 00100b54 */

int local_vars(int x)

{
                    /* Unresolved local var: int a@[DW_OP_reg0(x0)]
                       Unresolved local var: int b@[???]
                       Unresolved local var: int c@[???] */
  return x * 2 + 10;
}



/* Function: local_array @ 00100b60 */

int local_array(int n)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  int local_28 [10];
  
                    /* Unresolved local var: int[10] arr@[???] */
  iVar1 = 0;
  lVar2 = 0;
  uVar4 = 1;
  uVar3 = 0;
                    /* Unresolved local var: int i@[???] */
  do {
    if (uVar3 < 10) {
      *(int *)((long)local_28 + lVar2) = iVar1;
    }
    if (uVar4 < 10) {
      *(int *)((long)local_28 + lVar2 + 4) = n + iVar1;
    }
    uVar3 = uVar3 + 2;
    uVar4 = uVar4 + 2;
    lVar2 = lVar2 + 8;
    iVar1 = iVar1 + n * 2;
  } while (lVar2 != 0x28);
  return local_28[5];
}



/* Function: local_struct @ 00100be0 */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
                        */
  return x * 3;
}



/* Function: address_of_local @ 00100be8 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00100bfc */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
                       Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
  return *arr << 1;
}



/* Function: large_stack_frame @ 00100c08 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_810 [128];
  byte local_410;
  
                    /* Unresolved local var: char[2048] large_buf@[???] */
  lVar1 = 0;
  uVar3 = 0xf0e0d0c0b0a0908;
  uVar2 = 0x706050403020100;
  do {
                    /* Unresolved local var: int i@[???] */
    *(undefined8 *)((long)local_810 + lVar1 + 8) = uVar3;
    *(undefined8 *)((long)local_810 + lVar1) = uVar2;
    lVar1 = lVar1 + 0x10;
    uVar2 = CONCAT17((char)((ulong)uVar2 >> 0x38) + '\x10',
                     CONCAT16((char)((ulong)uVar2 >> 0x30) + '\x10',
                              CONCAT15((char)((ulong)uVar2 >> 0x28) + '\x10',
                                       CONCAT14((char)((ulong)uVar2 >> 0x20) + '\x10',
                                                CONCAT13((char)((ulong)uVar2 >> 0x18) + '\x10',
                                                         CONCAT12((char)((ulong)uVar2 >> 0x10) +
                                                                  '\x10',CONCAT11((char)((ulong)
                                                  uVar2 >> 8) + '\x10',(char)uVar2 + '\x10')))))));
    uVar3 = CONCAT17((char)((ulong)uVar3 >> 0x38) + '\x10',
                     CONCAT16((char)((ulong)uVar3 >> 0x30) + '\x10',
                              CONCAT15((char)((ulong)uVar3 >> 0x28) + '\x10',
                                       CONCAT14((char)((ulong)uVar3 >> 0x20) + '\x10',
                                                CONCAT13((char)((ulong)uVar3 >> 0x18) + '\x10',
                                                         CONCAT12((char)((ulong)uVar3 >> 0x10) +
                                                                  '\x10',CONCAT11((char)((ulong)
                                                  uVar3 >> 8) + '\x10',(char)uVar3 + '\x10')))))));
  } while (lVar1 != 0x800);
  return (int)local_410;
}



/* Function: vla_stack @ 00100c48 */

int vla_stack(int n)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[707] vla@[???] */
  if (n - 0x3e9U < 0xfffffc18) {
    return -1;
  }
  uVar3 = (ulong)(uint)n;
  lVar1 = -(uVar3 * 4 + 0xf & 0x7fffffff0);
                    /* Unresolved local var: int i@[???] */
  uVar2 = 0;
  piVar4 = (int *)(&stack0xfffffffffffffff4 + lVar1);
  uVar6 = 1;
  uVar5 = 0;
  do {
    if (uVar5 <= uVar3 - 1) {
      piVar4[-1] = (int)uVar2;
    }
    if (uVar6 <= uVar3 - 1) {
      *piVar4 = (int)uVar2 + 2;
    }
    uVar5 = uVar5 + 2;
    uVar6 = uVar6 + 2;
    piVar4 = piVar4 + 2;
    uVar2 = uVar2 + 4;
  } while ((uVar3 * 2 + 2 & 0x3fffffffc) != uVar2);
  if (n < 0) {
    n = n + 1;
  }
  return *(int *)(&stack0xfffffffffffffff0 + (ulong)(uint)(n >> 1) * 4 + lVar1);
}



/* Function: alloca_usage @ 00100d08 */

int alloca_usage(int n)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
                    /* Unresolved local var: int * arr@[???] */
  if (0 < n) {
    uVar3 = (ulong)(uint)n;
    lVar1 = -(uVar3 * 4 + 0xf & 0x7fffffff0);
                    /* Unresolved local var: int i@[???] */
    lVar2 = 0;
    piVar4 = (int *)(&stack0xfffffffffffffff4 + lVar1);
    uVar6 = 1;
    uVar5 = 0;
    do {
      if (uVar5 <= uVar3 - 1) {
        piVar4[-1] = (int)lVar2;
      }
      if (uVar6 <= uVar3 - 1) {
        *piVar4 = (int)lVar2 + 3;
      }
      uVar5 = uVar5 + 2;
      uVar6 = uVar6 + 2;
      piVar4 = piVar4 + 2;
      lVar2 = lVar2 + 6;
    } while (((uVar3 + 1 & 0xfffffffffffffffe) + (uVar3 + 1 >> 1)) * 2 - lVar2 != 0);
    if (n < 0) {
      n = n + 1;
    }
    return *(int *)(&stack0xfffffffffffffff0 + (ulong)(uint)(n >> 1) * 4 + lVar1);
  }
  return -1;
}



/* Function: stack_alias @ 00100dc4 */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 00100dcc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_820 [2];
  undefined8 uStack_818;
  uint local_80c;
  byte local_420;
  
                    /* Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???]
                       Unresolved local var: int out@[???] */
  puts(&DAT_001022e9);
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  lVar1 = 0;
                    /* Unresolved local var: int[10] arr@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[???] */
  piVar2 = local_820 + 1;
  uVar4 = 1;
  uVar3 = 0;
  do {
    if (uVar3 < 10) {
      piVar2[-1] = (int)lVar1;
    }
    if (uVar4 < 10) {
      *piVar2 = (int)lVar1 + 2;
    }
    uVar3 = uVar3 + 2;
    uVar4 = uVar4 + 2;
    piVar2 = piVar2 + 2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x14);
  printf("MEM-L1-02 (local_array): %d\n",(ulong)local_80c);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  lVar1 = 0;
  uVar6 = 0xf0e0d0c0b0a0908;
  uVar5 = 0x706050403020100;
  do {
                    /* Unresolved local var: char[2048] large_buf@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[???] */
    *(undefined8 *)((long)&uStack_818 + lVar1) = uVar6;
    *(undefined8 *)((long)local_820 + lVar1) = uVar5;
    lVar1 = lVar1 + 0x10;
    uVar5 = CONCAT17((char)((ulong)uVar5 >> 0x38) + '\x10',
                     CONCAT16((char)((ulong)uVar5 >> 0x30) + '\x10',
                              CONCAT15((char)((ulong)uVar5 >> 0x28) + '\x10',
                                       CONCAT14((char)((ulong)uVar5 >> 0x20) + '\x10',
                                                CONCAT13((char)((ulong)uVar5 >> 0x18) + '\x10',
                                                         CONCAT12((char)((ulong)uVar5 >> 0x10) +
                                                                  '\x10',CONCAT11((char)((ulong)
                                                  uVar5 >> 8) + '\x10',(char)uVar5 + '\x10')))))));
    uVar6 = CONCAT17((char)((ulong)uVar6 >> 0x38) + '\x10',
                     CONCAT16((char)((ulong)uVar6 >> 0x30) + '\x10',
                              CONCAT15((char)((ulong)uVar6 >> 0x28) + '\x10',
                                       CONCAT14((char)((ulong)uVar6 >> 0x20) + '\x10',
                                                CONCAT13((char)((ulong)uVar6 >> 0x18) + '\x10',
                                                         CONCAT12((char)((ulong)uVar6 >> 0x10) +
                                                                  '\x10',CONCAT11((char)((ulong)
                                                  uVar6 >> 8) + '\x10',(char)uVar6 + '\x10')))))));
  } while (lVar1 != 0x800);
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)local_420);
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[707] vla@[DW_OP_breg31(sp): 0] */
  lVar1 = 0;
                    /* Unresolved local var: int i@[???] */
  piVar2 = local_820 + 1;
  uVar4 = 1;
  uVar3 = 0;
  do {
    if (uVar3 < 10) {
      piVar2[-1] = (int)lVar1;
    }
    if (uVar4 < 10) {
      *piVar2 = (int)lVar1 + 2;
    }
    uVar3 = uVar3 + 2;
    uVar4 = uVar4 + 2;
    piVar2 = piVar2 + 2;
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x14);
  printf("MEM-L2-02 (vla_stack): %d\n",(ulong)local_80c);
  lVar1 = 0;
                    /* Unresolved local var: int * arr@[DW_OP_reg31(sp)]
                       Unresolved local var: int i@[???] */
  piVar2 = (int *)((ulong)local_820 | 4);
  uVar4 = 1;
  uVar3 = 0;
  do {
    if (uVar3 < 10) {
      piVar2[-1] = (int)lVar1;
    }
    if (uVar4 < 10) {
      *piVar2 = (int)lVar1 + 3;
    }
    uVar3 = uVar3 + 2;
    uVar4 = uVar4 + 2;
    piVar2 = piVar2 + 2;
    lVar1 = lVar1 + 6;
  } while (lVar1 != 0x1e);
  printf("MEM-L2-03 (alloca_usage): %d\n",(ulong)local_80c);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00100fe4 */

int heap_basic(int n)

{
  void *__ptr;
  ulong uVar1;
  int *piVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (__ptr == (void *)0x0) {
    iVar4 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      uVar3 = (ulong)(uint)n - 1;
      uVar1 = 0;
      piVar2 = (int *)((long)__ptr + 4);
      uVar6 = 1;
      uVar5 = 0;
      do {
        if (uVar5 <= uVar3) {
          piVar2[-1] = (int)uVar1;
        }
        if (uVar6 <= uVar3) {
          *piVar2 = (int)uVar1 + 2;
        }
        uVar5 = uVar5 + 2;
        uVar6 = uVar6 + 2;
        piVar2 = piVar2 + 2;
        uVar1 = uVar1 + 4;
      } while (((ulong)(uint)n * 2 + 2 & 0x3fffffffc) != uVar1);
    }
    if (n < 0) {
      n = n + 1;
    }
    iVar4 = *(int *)((long)__ptr + (long)(n >> 1) * 4);
    free(__ptr);
  }
  return iVar4;
}



/* Function: heap_calloc @ 0010109c */

int heap_calloc(int n)

{
  int *__ptr;
  long lVar1;
  int *piVar2;
  int iVar3;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc((long)n,4);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if ((n < 1) || (n == 1)) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      lVar1 = (ulong)(uint)n - 1;
      piVar2 = __ptr;
      do {
        piVar2 = piVar2 + 1;
        lVar1 = lVar1 + -1;
        iVar3 = *piVar2 + iVar3;
      } while (lVar1 != 0);
    }
    free(__ptr);
  }
  return iVar3;
}



/* Function: heap_realloc @ 00101110 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  long lVar1;
  int iVar2;
  void *__ptr;
  void *pvVar3;
  int iVar4;
  long lVar5;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr == (void *)0x0) {
    iVar4 = -1;
  }
  else {
    lVar5 = 0;
    do {
                    /* Unresolved local var: int i@[???] */
      lVar1 = lVar5 + 1;
      *(int *)((long)__ptr + lVar5 * 4) = (int)lVar1;
      lVar5 = lVar1;
    } while (lVar1 != 5);
    iVar2 = *(int *)((long)__ptr + 8);
    pvVar3 = realloc(__ptr,0x28);
    if (pvVar3 == (void *)0x0) {
      iVar4 = -2;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      *(undefined4 *)((long)pvVar3 + 0x24) = 0x5a;
      iVar4 = 0x32;
      if (*(int *)((long)pvVar3 + 8) != iVar2) {
        iVar4 = -3;
      }
      *(undefined8 *)((long)pvVar3 + 0x1c) = 0x5000000046;
      *(undefined8 *)((long)pvVar3 + 0x14) = 0x3c00000032;
      __ptr = pvVar3;
    }
    free(__ptr);
  }
  return iVar4;
}



/* Function: heap_array @ 001011ac */

int heap_array(int n)

{
  ulong uVar1;
  void *__ptr;
  long lVar2;
  int *piVar3;
  ulong uVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (__ptr == (void *)0x0) {
    iVar5 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      uVar1 = (ulong)(uint)n + 1;
      uVar4 = (ulong)(uint)n - 1;
      lVar2 = 0;
      piVar3 = (int *)((long)__ptr + 4);
      uVar7 = 1;
      uVar6 = 0;
      do {
        if (uVar6 <= uVar4) {
          piVar3[-1] = (int)lVar2;
        }
        if (uVar7 <= uVar4) {
          *piVar3 = (int)lVar2 + 3;
        }
        uVar6 = uVar6 + 2;
        uVar7 = uVar7 + 2;
        piVar3 = piVar3 + 2;
        lVar2 = lVar2 + 6;
      } while (((uVar1 & 0xfffffffffffffffe) + (uVar1 >> 1)) * 2 - lVar2 != 0);
    }
    if (n < 0) {
      n = n + 1;
    }
    iVar5 = *(int *)((long)__ptr + (long)(n >> 1) * 4);
    free(__ptr);
  }
  return iVar5;
}



/* Function: heap_struct @ 0010126c */

int heap_struct(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: Point * p@[???] */
  return x * 3;
}



/* Function: heap_nested @ 00101274 */

int heap_nested(Node **head)

{
  int iVar1;
  Node *__ptr;
  Node *pNVar2;
  
  __ptr = malloc(0x10);
  *head = __ptr;
  if (__ptr == (Node *)0x0) {
    iVar1 = -1;
  }
  else {
    __ptr->data = 10;
    pNVar2 = malloc(0x10);
    __ptr->next = pNVar2;
    if (pNVar2 == (Node *)0x0) {
      free(__ptr);
      iVar1 = -2;
    }
    else {
      iVar1 = 0;
      pNVar2->next = (Node *)0x0;
      pNVar2->data = 0x14;
    }
  }
  return iVar1;
}



/* Function: linked_list_heap @ 001012e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  uint uVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int *__ptr;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * current@[???]
                       Unresolved local var: Node * temp@[???]
                       Unresolved local var: int sum@[???] */
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
  piVar3 = malloc(0x10);
  if (piVar3 == (int *)0x0) {
    __ptr = (int *)0x0;
    bVar2 = true;
  }
  else {
    iVar5 = 0;
    piVar7 = (int *)0x0;
    piVar8 = (int *)0x0;
    uVar1 = 0;
    do {
      uVar6 = uVar1;
      piVar4 = piVar3;
      *piVar4 = iVar5;
      piVar4[2] = 0;
      piVar4[3] = 0;
      __ptr = piVar4;
      if (piVar7 != (int *)0x0) {
        *(int **)(piVar8 + 2) = piVar4;
        __ptr = piVar7;
      }
      if (uVar6 == 4) goto LAB_00101394;
      piVar3 = malloc(0x10);
      iVar5 = iVar5 + 10;
      piVar7 = __ptr;
      piVar8 = piVar4;
      uVar1 = uVar6 + 1;
    } while (piVar3 != (int *)0x0);
    bVar2 = uVar6 < 4;
    piVar3 = __ptr;
    while (piVar3 != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[DW_OP_reg19(x19)] */
      piVar7 = *(int **)(piVar3 + 2);
      free(piVar3);
      __ptr = (int *)0x0;
      piVar3 = piVar7;
    }
  }
  if (bVar2) {
    iVar5 = -1;
  }
  else {
LAB_00101394:
    iVar5 = 0;
    piVar3 = __ptr;
    if (__ptr != (int *)0x0) {
      do {
        piVar7 = piVar3 + 2;
        iVar5 = *piVar3 + iVar5;
        piVar3 = *(int **)piVar7;
      } while (*(int **)piVar7 != (int *)0x0);
      while (__ptr != (int *)0x0) {
                    /* Unresolved local var: Node * temp@[???] */
        piVar3 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar3;
      }
    }
  }
  return iVar5;
}



/* Function: create_tree_node @ 001013dc */

TreeNode * create_tree_node(int data)

{
  TreeNode *pTVar1;
  
                    /* Unresolved local var: TreeNode * node@[???] */
  pTVar1 = malloc(0x18);
  if (pTVar1 != (TreeNode *)0x0) {
    pTVar1->data = data;
    pTVar1->left = (TreeNode *)0x0;
    pTVar1->right = (TreeNode *)0x0;
  }
  return pTVar1;
}



/* Function: tree_heap_traversal @ 0010140c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: TreeNode * root@[???] */
  return 0x3c;
}



/* Function: memory_leak @ 00101414 */

int memory_leak(int n)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  
                    /* Unresolved local var: int * leak@[???] */
  pvVar2 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | (ulong)(uint)n << 2);
  if (pvVar2 == (void *)0x0) {
    iVar1 = -1;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    if (0 < n) {
      uVar3 = 0;
      do {
        *(int *)((long)pvVar2 + uVar3 * 4) = (int)uVar3;
        uVar3 = uVar3 + 1;
      } while ((uint)n != uVar3);
    }
    if (n < 0) {
      n = n + 1;
    }
    iVar1 = *(int *)((long)pvVar2 + (long)(n >> 1) * 4);
  }
  return iVar1;
}



/* Function: dangling_pointer @ 00101474 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int iVar1;
  int *__ptr;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  __ptr = malloc(4);
  if (__ptr == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    iVar1 = *__ptr;
  }
  return iVar1;
}



/* Function: double_free @ 001014c0 */

int double_free(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -2;
}



/* Function: heap_overflow @ 001014d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
  int *__ptr;
  long lVar1;
  int *piVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x28);
  if (__ptr == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    lVar1 = 0;
    uVar5 = 1;
    uVar4 = 0;
                    /* Unresolved local var: int i@[???] */
    piVar2 = __ptr + 1;
    do {
      if (uVar4 < 0xb) {
        piVar2[-1] = (int)lVar1;
      }
      if (uVar5 < 0xb) {
        *piVar2 = (int)lVar1 + 100;
      }
      uVar4 = uVar4 + 2;
      uVar5 = uVar5 + 2;
      piVar2 = piVar2 + 2;
      lVar1 = lVar1 + 200;
    } while (lVar1 != 0x4b0);
    iVar3 = *__ptr;
    free(__ptr);
  }
  return iVar3;
}



/* Function: test_heap_memory @ 00101570 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  Node *__ptr;
  uint uVar1;
  __pid_t __pid;
  void *pvVar2;
  char *__format;
  ulong uVar3;
  long lVar4;
  uint local_24;
  Node *local_8;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: pid_t pid@[???] */
  puts(&DAT_00102307);
  uVar1 = heap_basic(10);
  printf("HEAP-L2-01 (heap_basic): %d\n",(ulong)uVar1);
  uVar1 = heap_calloc(5);
  printf("HEAP-L2-02 (heap_calloc): %d\n",(ulong)uVar1);
  uVar1 = heap_realloc();
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
  uVar1 = heap_array(10);
  printf("HEAP-L2-04 (heap_array): %d\n",(ulong)uVar1);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  local_8 = (Node *)0x0;
  uVar1 = heap_nested(&local_8);
  printf("HEAP-L2-06 (heap_nested): %d\n",(ulong)uVar1);
  __ptr = local_8;
  if (local_8 != (Node *)0x0) {
    free(local_8->next);
    free(__ptr);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
                    /* Unresolved local var: int * leak@[???] */
  pvVar2 = malloc(0x14);
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    lVar4 = 0;
    do {
                    /* Unresolved local var: int i@[DW_OP_reg8(x8)] */
      *(int *)((long)pvVar2 + lVar4 * 4) = (int)lVar4;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 5);
    uVar3 = (ulong)*(uint *)((long)pvVar2 + 8);
  }
  printf("HEAP-L3-03 (memory_leak): %d\n",uVar3);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_0010200b);
      return;
    }
                    /* Unresolved local var: int status@[???] */
    waitpid(__pid,(int *)&local_24,0);
    uVar1 = local_24 & 0x7f;
    if ((local_24 & 0x7f) == 0) {
      uVar1 = local_24 >> 8 & 0xff;
      __format = &DAT_00101fa5;
    }
    else {
      if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) {
        return;
      }
      __format = &DAT_00101fca;
    }
    printf(__format,(ulong)uVar1);
    return;
  }
                    /* Unresolved local var: int result@[???] */
  uVar1 = dangling_pointer();
  printf(&DAT_00101f95,(ulong)uVar1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 00101730 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00101744 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 00101754 */

int global_array_access(int idx)

{
  if (9 < (uint)idx) {
    return -1;
  }
  return global_array[(uint)idx];
}



/* Function: static_local @ 00101774 */

int static_local(int reset)

{
  int iVar1;
  
  iVar1 = 0;
  if (reset == 0) {
    iVar1 = static_local::counter + 1;
  }
  static_local::counter = iVar1;
  return iVar1;
}



/* Function: call_static_func @ 0010178c */

int call_static_func(int x)

{
  return x << 1 | 1;
}



/* Function: access_extern_global @ 0010179c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 001017b0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 001017b8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 001017cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 001017d4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 001017dc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 001017e4 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 001017f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 001017fc */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 00101808 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00101814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 00101820 */

int global_heap_store(int *p)

{
  global_heap_ptr = p;
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 0010183c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00101844 */

int tls_access(int val)

{
  return val << 1;
}



/* Function: init_order_test @ 0010184c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 00101854 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  uint uVar1;
  int local_24;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_00102325);
  global_counter = global_counter + 1;
  printf("STM-L1-01 (global_var_access): %d\n");
  printf("STM-L1-01 (global_var_read): %d\n",(ulong)(uint)(global_counter << 1));
  printf("STM-L1-02 (global_array_access): %d\n",5);
  static_local::counter = 1;
  printf("STM-L1-03 (static_local): %d\n",1);
  static_local::counter = static_local::counter + 1;
  printf("STM-L1-03 (static_local): %d\n");
  printf("STM-L1-04 (call_static_func): %d\n",0xb);
  printf("STM-L2-01 (access_extern_global): %d\n",(ulong)(extern_global_var + 100));
  uVar1 = extern_function(5);
  printf("STM-L2-02 (call_extern_func): %d\n",(ulong)uVar1);
  printf("STM-L2-03 (read_const_data): %d\n",(ulong)((byte)const_string[4] + 0x2a));
  printf("STM-L2-04 (access_bss_var): %d\n",0);
  printf("STM-L2-04 (access_bss_buffer): %d\n",0);
  printf("STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  printf("STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  printf("STM-L2-07 (global_func_ptr): %d\n",10);
  global_heap_ptr = &local_24;
  local_24 = 100;
  printf("STM-L2-08 (global_heap_store): %d\n",100);
  printf("STM-L2-09 (static_complex_init): %d\n",0xf);
  printf("STM-L3-01 (tls_access): %d\n",0x14);
  printf("STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}



/* Function: double_value @ 00101a14 */

int double_value(int x)

{
  return x << 1;
}



/* Function: memop_memset @ 00101a1c */

int memop_memset(void *buf,size_t size,int fill_value)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((buf != (void *)0x0) && (size != 0)) {
    memset(buf,fill_value,size);
    uVar1 = (uint)*(byte *)buf;
  }
  return uVar1;
}



/* Function: memop_memcpy @ 00101a5c */

int memop_memcpy(void *dst,void *src,size_t n)

{
  int iVar1;
  
  iVar1 = -1;
  if (((dst != (void *)0x0) && (src != (void *)0x0)) && (n != 0)) {
    memcpy(dst,src,n);
    iVar1 = *(int *)((long)dst + ((n & 0xfffffffffffffffc) - 4));
  }
  return iVar1;
}



/* Function: memop_memmove @ 00101aa4 */

int memop_memmove(void *buf,size_t n)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if ((buf != (void *)0x0) && (1 < n)) {
    memmove((void *)((long)buf + 1),buf,n - 1);
    uVar1 = (uint)*(byte *)((long)buf + 1);
  }
  return uVar1;
}



/* Function: memop_memcmp @ 00101ae4 */

int memop_memcmp(void *p1,void *p2,size_t n)

{
  int iVar1;
  int iVar2;
  
                    /* Unresolved local var: int result@[???] */
  iVar1 = 0;
  if (((p1 != (void *)0x0) && (p2 != (void *)0x0)) && (n != 0)) {
    iVar2 = memcmp(p1,p2,n);
    iVar1 = -(uint)(iVar2 != 0);
    if (0 < iVar2) {
      iVar1 = 1;
    }
  }
  return iVar1;
}



/* Function: memop_bzero @ 00101b20 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00101b58 */

int memop_bcopy(void *src,void *dst,size_t n)

{
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (((src != (void *)0x0) && (dst != (void *)0x0)) && (n != 0)) {
    memmove(dst,src,n);
    uVar1 = (uint)*(byte *)dst;
  }
  return uVar1;
}



/* Function: memop_unaligned_access @ 00101b94 */

int memop_unaligned_access(char *buf)

{
                    /* Unresolved local var: int value@[???] */
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00101ba8 */

int memop_memory_barrier(int *flag)

{
                    /* Unresolved local var: int local@[???] */
  if (flag != (int *)0x0) {
    DataMemoryBarrier(2,3);
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00101bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_memory_op_functions(void)

{
                    /* Unresolved local var: char[11] move_buf@[DW_OP_breg31(sp): +16; DW_OP_piece:
                       10]
                       Unresolved local var: int flag@[DW_OP_breg31(sp): +12]
                       Unresolved local var: char[256] buffer@[???]
                       Unresolved local var: int[5] int_dst@[???]
                       Unresolved local var: int[5] int_src@[???]
                       Unresolved local var: char[10] zero_buf@[???]
                       Unresolved local var: char[4] bcopy_dst@[???]
                       Unresolved local var: char[4] bcopy_src@[???]
                       Unresolved local var: char[8] unalign_buf@[???]
                       Unresolved local var: int[3] cmp_a@[???]
                       Unresolved local var: int[3] cmp_b@[???] */
  puts(&DAT_00102349);
  printf("MEMOP-L2-01: %d\n",0x41);
  printf("MEMOP-L2-02: %d\n",0x32);
  printf("MEMOP-L2-03: %c\n",0x48);
  printf("MEMOP-L2-04: %d\n",0xffffffff);
  printf("MEMOP-L2-05: %d\n",0);
  printf("MEMOP-L2-06: %d\n",1);
  printf("MEMOP-L3-01: 0x%x\n",0x4030201);
                    /* Unresolved local var: int local@[???] */
  DataMemoryBarrier(2,3);
  printf("MEMOP-L3-02: %d\n",10);
  return;
}



/* Function: main @ 00101ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 00101cc8 */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 00101cd0 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 65 */
