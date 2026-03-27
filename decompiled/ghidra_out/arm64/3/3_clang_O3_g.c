/*
 * Decompiled by Ghidra 12.0
 * Binary: PROJECT_ROOT/compiler/build/arm64/3/3_clang_O3_g
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
                    /* Unresolved local var: int[10] arr@[???]
                       Unresolved local var: int i@[???] */
  return n * 5;
}



/* Function: local_struct @ 00100b68 */

int local_struct(int x)

{
                    /* Unresolved local var: Point p@[DW_OP_reg0(x0); DW_OP_piece: 4;
                       DW_OP_breg0(x0): 0; DW_OP_lit1; DW_OP_shl; DW_OP_stack_value; DW_OP_piece: 4]
                        */
  return x * 3;
}



/* Function: address_of_local @ 00100b70 */

int address_of_local(int *out)

{
                    /* Unresolved local var: int local@[???] */
  *out = 0x2a;
  return 0x2a;
}



/* Function: address_of_array @ 00100b84 */

int address_of_array(int *arr)

{
                    /* Unresolved local var: int * p1@[DW_OP_reg0(x0)]
                       Unresolved local var: int * p2@[DW_OP_reg0(x0)] */
  return *arr << 1;
}



/* Function: large_stack_frame @ 00100b90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int large_stack_frame(void)

{
  long lVar1;
  long lVar2;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar3;
  char cVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar11;
  char cVar18;
  undefined8 local_810 [128];
  byte local_410;
  
                    /* Unresolved local var: char[2048] large_buf@[???] */
  uVar11 = 0xf0e0d0c0b0a0908;
  uVar3 = 0x706050403020100;
  lVar2 = 0;
  do {
                    /* Unresolved local var: int i@[???] */
    cVar4 = (char)((ulong)uVar3 >> 8);
    cVar5 = (char)((ulong)uVar3 >> 0x10);
    cVar6 = (char)((ulong)uVar3 >> 0x18);
    cVar7 = (char)((ulong)uVar3 >> 0x20);
    cVar8 = (char)((ulong)uVar3 >> 0x28);
    cVar9 = (char)((ulong)uVar3 >> 0x30);
    cVar10 = (char)((ulong)uVar3 >> 0x38);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    cVar17 = (char)((ulong)uVar11 >> 0x30);
    cVar18 = (char)((ulong)uVar11 >> 0x38);
    lVar1 = lVar2 + 0x20;
    *(undefined8 *)((long)local_810 + lVar2 + 8) = uVar11;
    *(undefined8 *)((long)local_810 + lVar2) = uVar3;
    *(ulong *)((long)local_810 + lVar2 + 0x18) =
         CONCAT17(cVar18 + '\x10',
                  CONCAT16(cVar17 + '\x10',
                           CONCAT15(cVar16 + '\x10',
                                    CONCAT14(cVar15 + '\x10',
                                             CONCAT13(cVar14 + '\x10',
                                                      CONCAT12(cVar13 + '\x10',
                                                               CONCAT11(cVar12 + '\x10',
                                                                        (char)uVar11 + '\x10')))))))
    ;
    *(ulong *)((long)local_810 + lVar2 + 0x10) =
         CONCAT17(cVar10 + '\x10',
                  CONCAT16(cVar9 + '\x10',
                           CONCAT15(cVar8 + '\x10',
                                    CONCAT14(cVar7 + '\x10',
                                             CONCAT13(cVar6 + '\x10',
                                                      CONCAT12(cVar5 + '\x10',
                                                               CONCAT11(cVar4 + '\x10',
                                                                        (char)uVar3 + '\x10')))))));
    uVar3 = CONCAT17(cVar10 + ' ',
                     CONCAT16(cVar9 + ' ',
                              CONCAT15(cVar8 + ' ',
                                       CONCAT14(cVar7 + ' ',
                                                CONCAT13(cVar6 + ' ',
                                                         CONCAT12(cVar5 + ' ',
                                                                  CONCAT11(cVar4 + ' ',
                                                                           (char)uVar3 + ' ')))))));
    uVar11 = CONCAT17(cVar18 + ' ',
                      CONCAT16(cVar17 + ' ',
                               CONCAT15(cVar16 + ' ',
                                        CONCAT14(cVar15 + ' ',
                                                 CONCAT13(cVar14 + ' ',
                                                          CONCAT12(cVar13 + ' ',
                                                                   CONCAT11(cVar12 + ' ',
                                                                            (char)uVar11 + ' '))))))
                     );
    lVar2 = lVar1;
  } while (lVar1 != 0x800);
  return (int)local_410;
}



/* Function: vla_stack @ 00100bdc */

int vla_stack(int n)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
                    /* Unresolved local var: unsigned long __vla_expr0@[???]
                       Unresolved local var: int[729] vla@[???] */
  if (n - 0x3e9U < 0xfffffc18) {
    return -1;
  }
  uVar2 = (ulong)(uint)n;
  lVar3 = -(uVar2 * 4 + 0xf & 0x7fffffff0);
  lVar1 = lVar3 + -0x10;
                    /* Unresolved local var: int i@[???] */
  if ((uint)n < 8) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar2 & 0xfffffff8;
    iVar10 = 2;
    iVar11 = 3;
    iVar8 = 0;
    iVar9 = 1;
    puVar5 = (undefined8 *)(&stack0x00000000 + lVar3);
    uVar6 = uVar4;
    do {
      iVar12 = iVar8 * 2;
      iVar13 = iVar9 * 2;
      iVar14 = iVar10 * 2;
      iVar15 = iVar11 * 2;
      uVar6 = uVar6 - 8;
      iVar8 = iVar8 + 8;
      iVar9 = iVar9 + 8;
      iVar10 = iVar10 + 8;
      iVar11 = iVar11 + 8;
      puVar5[-1] = CONCAT44(iVar15,iVar14);
      puVar5[-2] = CONCAT44(iVar13,iVar12);
      puVar5[1] = CONCAT44(iVar15 + 8,iVar14 + 8);
      *puVar5 = CONCAT44(iVar13 + 8,iVar12 + 8);
      puVar5 = puVar5 + 4;
    } while (uVar6 != 0);
    if (uVar4 == uVar2) goto LAB_00100c80;
  }
  iVar8 = (int)uVar4 << 1;
  lVar3 = uVar2 - uVar4;
  piVar7 = (int *)(&stack0xfffffffffffffff0 + uVar4 * 4 + lVar1 + 0x10);
  do {
    *piVar7 = iVar8;
    iVar8 = iVar8 + 2;
    lVar3 = lVar3 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar3 != 0);
LAB_00100c80:
  if (n < 0) {
    n = n + 1;
  }
  return *(int *)(&stack0xfffffffffffffff0 + (ulong)(uint)(n >> 1) * 4 + lVar1 + 0x10);
}



/* Function: alloca_usage @ 00100ca0 */

int alloca_usage(int n)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
                    /* Unresolved local var: int * arr@[???] */
  if (n < 1) {
    return -1;
  }
  uVar2 = (ulong)(uint)n;
  lVar3 = -(uVar2 * 4 + 0xf & 0x7fffffff0);
  lVar1 = lVar3 + -0x10;
                    /* Unresolved local var: int i@[???] */
  if ((uint)n < 8) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar2 & 0xfffffff8;
    iVar10 = 2;
    iVar11 = 3;
    iVar8 = 0;
    iVar9 = 1;
    puVar5 = (undefined8 *)(&stack0x00000000 + lVar3);
    uVar6 = uVar4;
    do {
      iVar12 = iVar8 * 3;
      iVar13 = iVar9 * 3;
      iVar14 = iVar10 * 3;
      iVar15 = iVar11 * 3;
      uVar6 = uVar6 - 8;
      iVar8 = iVar8 + 8;
      iVar9 = iVar9 + 8;
      iVar10 = iVar10 + 8;
      iVar11 = iVar11 + 8;
      puVar5[-1] = CONCAT44(iVar15,iVar14);
      puVar5[-2] = CONCAT44(iVar13,iVar12);
      puVar5[1] = CONCAT44(iVar15 + 0xc,iVar14 + 0xc);
      *puVar5 = CONCAT44(iVar13 + 0xc,iVar12 + 0xc);
      puVar5 = puVar5 + 4;
    } while (uVar6 != 0);
    if (uVar4 == uVar2) goto LAB_00100d44;
  }
  iVar8 = (int)uVar4 * 3;
  lVar3 = uVar2 - uVar4;
  piVar7 = (int *)(&stack0xfffffffffffffff0 + uVar4 * 4 + lVar1 + 0x10);
  do {
    *piVar7 = iVar8;
    iVar8 = iVar8 + 3;
    lVar3 = lVar3 + -1;
    piVar7 = piVar7 + 1;
  } while (lVar3 != 0);
LAB_00100d44:
  if (n < 0) {
    n = n + 1;
  }
  return *(int *)(&stack0xfffffffffffffff0 + (ulong)(uint)(n >> 1) * 4 + lVar1 + 0x10);
}



/* Function: stack_alias @ 00100d60 */

int stack_alias(int *p1,int *p2)

{
                    /* Unresolved local var: int local@[???] */
  return 0x14;
}



/* Function: test_stack_memory @ 00100d68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_stack_memory(void)

{
  long lVar1;
  long lVar2;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar3;
  char cVar10;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  char cVar17;
  undefined8 uVar11;
  char cVar18;
  undefined8 local_820 [128];
  byte local_420;
  
                    /* Unresolved local var: int[10] arr5@[???]
                       Unresolved local var: int alias_val@[???]
                       Unresolved local var: int out@[???] */
  puts(&DAT_001022b9);
  printf("MEM-L1-01 (local_vars): %d\n",0x14);
  printf("MEM-L1-02 (local_array): %d\n",10);
  printf("MEM-L1-03 (local_struct): %d\n",0xf);
  printf("MEM-L1-04 (address_of_local): %d\n",0x2a);
  printf("MEM-L1-05 (address_of_array): %d\n",2);
  uVar11 = 0xf0e0d0c0b0a0908;
  uVar3 = 0x706050403020100;
  lVar2 = 0;
  do {
                    /* Unresolved local var: char[2048] large_buf@[DW_OP_breg31(sp): 0]
                       Unresolved local var: int i@[???] */
    cVar4 = (char)((ulong)uVar3 >> 8);
    cVar5 = (char)((ulong)uVar3 >> 0x10);
    cVar6 = (char)((ulong)uVar3 >> 0x18);
    cVar7 = (char)((ulong)uVar3 >> 0x20);
    cVar8 = (char)((ulong)uVar3 >> 0x28);
    cVar9 = (char)((ulong)uVar3 >> 0x30);
    cVar10 = (char)((ulong)uVar3 >> 0x38);
    cVar12 = (char)((ulong)uVar11 >> 8);
    cVar13 = (char)((ulong)uVar11 >> 0x10);
    cVar14 = (char)((ulong)uVar11 >> 0x18);
    cVar15 = (char)((ulong)uVar11 >> 0x20);
    cVar16 = (char)((ulong)uVar11 >> 0x28);
    cVar17 = (char)((ulong)uVar11 >> 0x30);
    cVar18 = (char)((ulong)uVar11 >> 0x38);
    lVar1 = lVar2 + 0x20;
    *(undefined8 *)((long)local_820 + lVar2 + 8) = uVar11;
    *(undefined8 *)((long)local_820 + lVar2) = uVar3;
    *(ulong *)((long)local_820 + lVar2 + 0x18) =
         CONCAT17(cVar18 + '\x10',
                  CONCAT16(cVar17 + '\x10',
                           CONCAT15(cVar16 + '\x10',
                                    CONCAT14(cVar15 + '\x10',
                                             CONCAT13(cVar14 + '\x10',
                                                      CONCAT12(cVar13 + '\x10',
                                                               CONCAT11(cVar12 + '\x10',
                                                                        (char)uVar11 + '\x10')))))))
    ;
    *(ulong *)((long)local_820 + lVar2 + 0x10) =
         CONCAT17(cVar10 + '\x10',
                  CONCAT16(cVar9 + '\x10',
                           CONCAT15(cVar8 + '\x10',
                                    CONCAT14(cVar7 + '\x10',
                                             CONCAT13(cVar6 + '\x10',
                                                      CONCAT12(cVar5 + '\x10',
                                                               CONCAT11(cVar4 + '\x10',
                                                                        (char)uVar3 + '\x10')))))));
    uVar3 = CONCAT17(cVar10 + ' ',
                     CONCAT16(cVar9 + ' ',
                              CONCAT15(cVar8 + ' ',
                                       CONCAT14(cVar7 + ' ',
                                                CONCAT13(cVar6 + ' ',
                                                         CONCAT12(cVar5 + ' ',
                                                                  CONCAT11(cVar4 + ' ',
                                                                           (char)uVar3 + ' ')))))));
    uVar11 = CONCAT17(cVar18 + ' ',
                      CONCAT16(cVar17 + ' ',
                               CONCAT15(cVar16 + ' ',
                                        CONCAT14(cVar15 + ' ',
                                                 CONCAT13(cVar14 + ' ',
                                                          CONCAT12(cVar13 + ' ',
                                                                   CONCAT11(cVar12 + ' ',
                                                                            (char)uVar11 + ' '))))))
                     );
    lVar2 = lVar1;
  } while (lVar1 != 0x800);
  printf("MEM-L2-01 (large_stack_frame): %d\n",(ulong)local_420);
  printf("MEM-L2-02 (vla_stack): %d\n",10);
  printf("MEM-L2-03 (alloca_usage): %d\n",0xf);
  printf("MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}



/* Function: heap_basic @ 00100e54 */

int heap_basic(int n)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  uVar6 = (ulong)(uint)n;
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
  if (__ptr == (void *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if ((uint)n < 8) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar6 & 0xfffffff8;
      iVar9 = 2;
      iVar10 = 3;
      iVar7 = 0;
      iVar8 = 1;
      puVar3 = (undefined8 *)((long)__ptr + 0x10);
      uVar4 = uVar2;
      do {
        iVar11 = iVar7 * 2;
        iVar12 = iVar8 * 2;
        iVar13 = iVar9 * 2;
        iVar14 = iVar10 * 2;
        uVar4 = uVar4 - 8;
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 8;
        iVar9 = iVar9 + 8;
        iVar10 = iVar10 + 8;
        puVar3[-1] = CONCAT44(iVar14,iVar13);
        puVar3[-2] = CONCAT44(iVar12,iVar11);
        puVar3[1] = CONCAT44(iVar14 + 8,iVar13 + 8);
        *puVar3 = CONCAT44(iVar12 + 8,iVar11 + 8);
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
      if (uVar2 == uVar6) goto LAB_00100ef8;
    }
    iVar7 = (int)uVar2 << 1;
    lVar1 = uVar6 - uVar2;
    piVar5 = (int *)((long)__ptr + uVar2 * 4);
    do {
      *piVar5 = iVar7;
      iVar7 = iVar7 + 2;
      lVar1 = lVar1 + -1;
      piVar5 = piVar5 + 1;
    } while (lVar1 != 0);
  }
LAB_00100ef8:
  if (n < 0) {
    n = n + 1;
  }
  iVar7 = *(int *)((long)__ptr + (long)(n >> 1) * 4);
  free(__ptr);
  return iVar7;
}



/* Function: heap_calloc @ 00100f1c */

int heap_calloc(int n)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *__ptr;
  long lVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  undefined8 uVar19;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int sum@[???] */
  __ptr = calloc((long)n,4);
  if (__ptr == (void *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if ((n < 1) || (n == 1)) {
    iVar11 = 0;
  }
  else {
    uVar7 = (ulong)(uint)n - 1;
    if (uVar7 < 8) {
      iVar11 = 0;
      uVar5 = 1;
    }
    else {
      uVar8 = uVar7 & 0xfffffffffffffff8;
      puVar9 = (undefined8 *)((long)__ptr + 0x14);
      iVar11 = 0;
      iVar12 = 0;
      iVar13 = 0;
      iVar14 = 0;
      uVar5 = uVar8 | 1;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      uVar10 = uVar8;
      do {
        puVar1 = puVar9 + -2;
        puVar2 = puVar9 + -1;
        puVar3 = puVar9 + 1;
        uVar19 = *puVar9;
        puVar9 = puVar9 + 4;
        uVar10 = uVar10 - 8;
        iVar11 = (int)*puVar1 + iVar11;
        iVar12 = (int)((ulong)*puVar1 >> 0x20) + iVar12;
        iVar13 = (int)*puVar2 + iVar13;
        iVar14 = (int)((ulong)*puVar2 >> 0x20) + iVar14;
        iVar15 = (int)uVar19 + iVar15;
        iVar16 = (int)((ulong)uVar19 >> 0x20) + iVar16;
        iVar17 = (int)*puVar3 + iVar17;
        iVar18 = (int)((ulong)*puVar3 >> 0x20) + iVar18;
      } while (uVar10 != 0);
      iVar11 = iVar15 + iVar11 + iVar16 + iVar12 + iVar17 + iVar13 + iVar18 + iVar14;
      if (uVar7 == uVar8) goto LAB_00100fe0;
    }
    lVar4 = (uint)n - uVar5;
    piVar6 = (int *)((long)__ptr + uVar5 * 4);
    do {
      lVar4 = lVar4 + -1;
      iVar11 = *piVar6 + iVar11;
      piVar6 = piVar6 + 1;
    } while (lVar4 != 0);
  }
LAB_00100fe0:
  free(__ptr);
  return iVar11;
}



/* Function: heap_realloc @ 00100ff4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_realloc(void)

{
  undefined8 *__ptr;
  undefined8 *puVar1;
  int iVar2;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr != (undefined8 *)0x0) {
                    /* Unresolved local var: int i@[???] */
    __ptr[1] = 0x400000003;
    *__ptr = 0x200000001;
    *(undefined4 *)(__ptr + 2) = 5;
    puVar1 = realloc(__ptr,0x28);
    if (puVar1 == (undefined8 *)0x0) {
      iVar2 = -2;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      *(undefined4 *)((long)puVar1 + 0x24) = 0x5a;
      iVar2 = 0x32;
      if (*(int *)(puVar1 + 1) != 3) {
        iVar2 = -3;
      }
      *(undefined8 *)((long)puVar1 + 0x1c) = 0x5000000046;
      *(undefined8 *)((long)puVar1 + 0x14) = 0x3c00000032;
      __ptr = puVar1;
    }
    free(__ptr);
    return iVar2;
  }
  return -1;
}



/* Function: heap_array @ 00101090 */

int heap_array(int n)

{
  void *__ptr;
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int *piVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
                    /* Unresolved local var: int * arr@[???]
                       Unresolved local var: int result@[???] */
  uVar6 = (ulong)(uint)n;
  __ptr = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2);
  if (__ptr == (void *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if ((uint)n < 8) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar6 & 0xfffffff8;
      iVar9 = 2;
      iVar10 = 3;
      iVar7 = 0;
      iVar8 = 1;
      puVar3 = (undefined8 *)((long)__ptr + 0x10);
      uVar4 = uVar2;
      do {
        iVar11 = iVar7 * 3;
        iVar12 = iVar8 * 3;
        iVar13 = iVar9 * 3;
        iVar14 = iVar10 * 3;
        uVar4 = uVar4 - 8;
        iVar7 = iVar7 + 8;
        iVar8 = iVar8 + 8;
        iVar9 = iVar9 + 8;
        iVar10 = iVar10 + 8;
        puVar3[-1] = CONCAT44(iVar14,iVar13);
        puVar3[-2] = CONCAT44(iVar12,iVar11);
        puVar3[1] = CONCAT44(iVar14 + 0xc,iVar13 + 0xc);
        *puVar3 = CONCAT44(iVar12 + 0xc,iVar11 + 0xc);
        puVar3 = puVar3 + 4;
      } while (uVar4 != 0);
      if (uVar2 == uVar6) goto LAB_0010113c;
    }
    iVar7 = (int)uVar2 * 3;
    lVar1 = uVar6 - uVar2;
    piVar5 = (int *)((long)__ptr + uVar2 * 4);
    do {
      *piVar5 = iVar7;
      iVar7 = iVar7 + 3;
      lVar1 = lVar1 + -1;
      piVar5 = piVar5 + 1;
    } while (lVar1 != 0);
  }
LAB_0010113c:
  if (n < 0) {
    n = n + 1;
  }
  iVar7 = *(int *)((long)__ptr + (long)(n >> 1) * 4);
  free(__ptr);
  return iVar7;
}



/* Function: heap_struct @ 00101160 */

int heap_struct(int x)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: Point * p@[???] */
  return x * 3;
}



/* Function: heap_nested @ 00101168 */

int heap_nested(Node **head)

{
  Node *__ptr;
  Node *pNVar1;
  
  __ptr = malloc(0x10);
  *head = __ptr;
  if (__ptr == (Node *)0x0) {
    return -1;
  }
  __ptr->data = 10;
  pNVar1 = malloc(0x10);
  __ptr->next = pNVar1;
  if (pNVar1 != (Node *)0x0) {
    pNVar1->next = (Node *)0x0;
    pNVar1->data = 0x14;
    return 0;
  }
  free(__ptr);
  return -2;
}



/* Function: linked_list_heap @ 001011ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int linked_list_heap(void)

{
  int iVar1;
  int *__ptr;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: Node * current@[???]
                       Unresolved local var: int sum@[???]
                       Unresolved local var: Node * temp@[???] */
                    /* Unresolved local var: int i@[???]
                       Unresolved local var: Node * new_node@[???] */
  __ptr = malloc(0x10);
  if (__ptr != (int *)0x0) {
    *__ptr = 0;
    puVar2 = malloc(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      free(__ptr);
      return -1;
    }
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined4 **)(__ptr + 2) = puVar2;
    *puVar2 = 10;
    puVar3 = malloc(0x10);
    if (puVar3 == (undefined4 *)0x0) {
      do {
                    /* Unresolved local var: Node * temp@[???] */
        piVar4 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar4;
      } while (piVar4 != (int *)0x0);
      return -1;
    }
    *(undefined8 *)(puVar3 + 2) = 0;
    *(undefined4 **)(puVar2 + 2) = puVar3;
    *puVar3 = 0x14;
    puVar2 = malloc(0x10);
    if (puVar2 == (undefined4 *)0x0) {
      do {
        piVar4 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar4;
      } while (piVar4 != (int *)0x0);
      return -1;
    }
    *(undefined8 *)(puVar2 + 2) = 0;
    *(undefined4 **)(puVar3 + 2) = puVar2;
    *puVar2 = 0x1e;
    puVar3 = malloc(0x10);
    if (puVar3 != (undefined4 *)0x0) {
      iVar5 = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *(undefined4 **)(puVar2 + 2) = puVar3;
      *puVar3 = 0x28;
      piVar4 = __ptr;
      do {
        iVar1 = *piVar4;
        piVar4 = *(int **)(piVar4 + 2);
        iVar5 = iVar1 + iVar5;
      } while (piVar4 != (int *)0x0);
      do {
                    /* Unresolved local var: Node * temp@[DW_OP_reg19(x19)] */
        piVar4 = *(int **)(__ptr + 2);
        free(__ptr);
        __ptr = piVar4;
      } while (piVar4 != (int *)0x0);
      return iVar5;
    }
    do {
      piVar4 = *(int **)(__ptr + 2);
      free(__ptr);
      __ptr = piVar4;
    } while (piVar4 != (int *)0x0);
  }
  return -1;
}



/* Function: create_tree_node @ 00101370 */

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



/* Function: tree_heap_traversal @ 001013a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int tree_heap_traversal(void)

{
                    /* Unresolved local var: int sum@[???]
                       Unresolved local var: TreeNode * root@[???] */
  return 0x3c;
}



/* Function: memory_leak @ 001013a8 */

int memory_leak(int n)

{
  void *pvVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  
                    /* Unresolved local var: int * leak@[???] */
  uVar5 = (ulong)(uint)n;
  pvVar1 = malloc(-(ulong)((uint)n >> 0x1f) & 0xfffffffc00000000 | uVar5 << 2);
  if (pvVar1 == (void *)0x0) {
    return -1;
  }
                    /* Unresolved local var: int i@[???] */
  if (0 < n) {
    if ((uint)n < 8) {
      uVar2 = 0;
    }
    else {
      uVar2 = uVar5 & 0xfffffff8;
      uVar8 = 0x300000002;
      uVar6 = 0x100000000;
      puVar3 = (undefined8 *)((long)pvVar1 + 0x10);
      uVar4 = uVar2;
      do {
        iVar7 = (int)((ulong)uVar6 >> 0x20);
        iVar9 = (int)((ulong)uVar8 >> 0x20);
        uVar4 = uVar4 - 8;
        puVar3[-1] = uVar8;
        puVar3[-2] = uVar6;
        puVar3[1] = CONCAT44(iVar9 + 4,(int)uVar8 + 4);
        *puVar3 = CONCAT44(iVar7 + 4,(int)uVar6 + 4);
        puVar3 = puVar3 + 4;
        uVar6 = CONCAT44(iVar7 + 8,(int)uVar6 + 8);
        uVar8 = CONCAT44(iVar9 + 8,(int)uVar8 + 8);
      } while (uVar4 != 0);
      if (uVar2 == uVar5) goto LAB_0010143c;
    }
    do {
      *(int *)((long)pvVar1 + uVar2 * 4) = (int)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar5 != uVar2);
  }
LAB_0010143c:
  if (n < 0) {
    n = n + 1;
  }
  return *(int *)((long)pvVar1 + (long)(n >> 1) * 4);
}



/* Function: dangling_pointer @ 00101458 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int dangling_pointer(void)

{
  int *__ptr;
  
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int value@[???]
                       Unresolved local var: int dangerous@[???] */
  __ptr = malloc(4);
  if (__ptr != (int *)0x0) {
    printf("value before free: %d\n",0x2a);
    free(__ptr);
    return *__ptr;
  }
  return -1;
}



/* Function: double_free @ 001014ac */

int double_free(int *p)

{
  if (p != (int *)0x0) {
    return *p;
  }
  return -2;
}



/* Function: heap_overflow @ 001014c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int heap_overflow(void)

{
                    /* Unresolved local var: int result@[???]
                       Unresolved local var: int * arr@[???] */
  return 0;
}



/* Function: test_heap_memory @ 001014c8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_heap_memory(void)

{
  uint uVar1;
  __pid_t __pid;
  undefined8 *__ptr;
  undefined8 *puVar2;
  undefined4 *__ptr_00;
  undefined4 *puVar3;
  char *__format;
  undefined8 uVar4;
  uint local_24;
  
                    /* Unresolved local var: Node * head@[???]
                       Unresolved local var: pid_t pid@[???] */
  puts(&DAT_001022d7);
  printf("HEAP-L2-01 (heap_basic): %d\n",10);
  printf("HEAP-L2-02 (heap_calloc): %d\n",0);
                    /* Unresolved local var: int * p@[???]
                       Unresolved local var: int old_val@[???]
                       Unresolved local var: int * new_p@[???]
                       Unresolved local var: int result@[???] */
  __ptr = malloc(0x14);
  if (__ptr == (undefined8 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
                    /* Unresolved local var: int i@[???] */
    __ptr[1] = 0x400000003;
    *__ptr = 0x200000001;
    *(undefined4 *)(__ptr + 2) = 5;
    puVar2 = realloc(__ptr,0x28);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0xfffffffe;
    }
    else {
                    /* Unresolved local var: int i@[???] */
      *(undefined4 *)((long)puVar2 + 0x24) = 0x5a;
      uVar1 = 0x32;
      if (*(int *)(puVar2 + 1) != 3) {
        uVar1 = 0xfffffffd;
      }
      *(undefined8 *)((long)puVar2 + 0x1c) = 0x5000000046;
      *(undefined8 *)((long)puVar2 + 0x14) = 0x3c00000032;
      __ptr = puVar2;
    }
    free(__ptr);
  }
  printf("HEAP-L2-03 (heap_realloc): %d\n",(ulong)uVar1);
  printf("HEAP-L2-04 (heap_array): %d\n",0xf);
  printf("HEAP-L2-05 (heap_struct): %d\n",0xf);
  __ptr_00 = malloc(0x10);
  if (__ptr_00 == (undefined4 *)0x0) {
    printf("HEAP-L2-06 (heap_nested): %d\n",0xffffffff);
  }
  else {
    *__ptr_00 = 10;
    puVar3 = malloc(0x10);
    *(undefined4 **)(__ptr_00 + 2) = puVar3;
    if (puVar3 == (undefined4 *)0x0) {
      free(__ptr_00);
      uVar4 = 0xfffffffe;
    }
    else {
      uVar4 = 0;
      *(undefined8 *)(puVar3 + 2) = 0;
      *puVar3 = 0x14;
    }
    printf("HEAP-L2-06 (heap_nested): %d\n",uVar4);
    free(*(void **)(__ptr_00 + 2));
    free(__ptr_00);
  }
  uVar1 = linked_list_heap();
  printf("HEAP-L3-01 (linked_list_heap): %d\n",(ulong)uVar1);
  printf("HEAP-L3-02 (tree_heap_traversal): %d\n",0x3c);
  printf("HEAP-L3-03 (memory_leak): %d\n",2);
  printf("HEAP-L3-04 (dangling_pointer): ");
  __pid = fork();
  if (__pid != 0) {
    if (__pid < 1) {
      perror(&DAT_00101fdb);
      return;
    }
                    /* Unresolved local var: int status@[???] */
    waitpid(__pid,(int *)&local_24,0);
    uVar1 = local_24 & 0x7f;
    if ((local_24 & 0x7f) == 0) {
      uVar1 = local_24 >> 8 & 0xff;
      __format = &DAT_00101f75;
    }
    else {
      if ((int)(uVar1 * 0x1000000 + 0x1000000) < 0x2000000) {
        return;
      }
      __format = &DAT_00101f9a;
    }
    printf(__format,(ulong)uVar1);
    return;
  }
                    /* Unresolved local var: int result@[???] */
  uVar1 = dangling_pointer();
  printf(&DAT_00101f65,(ulong)uVar1);
                    /* WARNING: Subroutine does not return */
  exit(0);
}



/* Function: global_var_access @ 001016fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_access(void)

{
  global_counter = global_counter + 1;
  return global_counter;
}



/* Function: global_var_read @ 00101710 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_var_read(void)

{
  return global_counter << 1;
}



/* Function: global_array_access @ 00101720 */

int global_array_access(int idx)

{
  if (9 < (uint)idx) {
    return -1;
  }
  return global_array[(uint)idx];
}



/* Function: static_local @ 00101740 */

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



/* Function: call_static_func @ 00101758 */

int call_static_func(int x)

{
  return x << 1 | 1;
}



/* Function: access_extern_global @ 00101768 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_extern_global(void)

{
  return extern_global_var + 100;
}



/* Function: call_extern_func @ 0010177c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int call_extern_func(void)

{
  int iVar1;
  
  iVar1 = extern_function(5);
  return iVar1;
}



/* Function: read_const_data @ 00101784 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int read_const_data(void)

{
  return (byte)const_string[4] + 0x2a;
}



/* Function: access_bss_var @ 00101798 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_var(void)

{
  return 0;
}



/* Function: access_bss_buffer @ 001017a0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int access_bss_buffer(void)

{
  return 0;
}



/* Function: global_struct_access @ 001017a8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int global_struct_access(void)

{
  return 0x1e;
}



/* Function: set_file_static @ 001017b0 */

void set_file_static(int val)

{
  file_scope_static = val;
  return;
}



/* Function: get_file_static @ 001017bc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int get_file_static(void)

{
  return file_scope_static;
}



/* Function: set_global_callback @ 001017c8 */

void set_global_callback(_func_int_int *f)

{
  global_func_ptr = f;
  return;
}



/* Function: call_global_callback @ 001017d4 */

int call_global_callback(int x)

{
  int iVar1;
  
  if (global_func_ptr != (_func_int_int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001017e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar1 = (*global_func_ptr)(x);
    return iVar1;
  }
  return -1;
}



/* Function: global_heap_store @ 001017ec */

int global_heap_store(int *p)

{
  global_heap_ptr = p;
  if (p != (int *)0x0) {
    return *p;
  }
  return -1;
}



/* Function: static_complex_init @ 00101808 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int static_complex_init(void)

{
  return 0xf;
}



/* Function: tls_access @ 00101810 */

int tls_access(int val)

{
  return val << 1;
}



/* Function: init_order_test @ 00101818 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int init_order_test(void)

{
                    /* Unresolved local var: int external_val@[???] */
  return 0x14;
}



/* Function: test_static_global @ 00101820 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_static_global(void)

{
  uint uVar1;
  int local_24;
  
                    /* Unresolved local var: int heap_val@[???] */
  puts(&DAT_001022f5);
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



/* Function: double_value @ 001019d8 */

int double_value(int x)

{
  return x << 1;
}



/* Function: memop_memset @ 001019e0 */

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



/* Function: memop_memcpy @ 00101a20 */

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



/* Function: memop_memmove @ 00101a68 */

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



/* Function: memop_memcmp @ 00101aa8 */

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



/* Function: memop_bzero @ 00101ae4 */

int memop_bzero(void *buf,size_t n)

{
  if (buf != (void *)0x0) {
    memset(buf,0,n);
    return (int)*(byte *)buf;
  }
  return -1;
}



/* Function: memop_bcopy @ 00101b1c */

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



/* Function: memop_unaligned_access @ 00101b58 */

int memop_unaligned_access(char *buf)

{
                    /* Unresolved local var: int value@[???] */
  if (buf != (char *)0x0) {
    return *(int *)(buf + 1);
  }
  return -1;
}



/* Function: memop_memory_barrier @ 00101b6c */

int memop_memory_barrier(int *flag)

{
                    /* Unresolved local var: int local@[???] */
  if (flag != (int *)0x0) {
    DataMemoryBarrier(2,3);
    return *flag + *flag;
  }
  return -1;
}



/* Function: test_memory_op_functions @ 00101b8c */

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
  puts(&DAT_00102319);
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



/* Function: main @ 00101c68 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}



/* Function: extern_function @ 00101c8c */

int extern_function(int x)

{
  return x * 3;
}



/* Function: _fini @ 00101c94 */

void _fini(void)

{
  return;
}



/* Total functions decompiled: 65 */
