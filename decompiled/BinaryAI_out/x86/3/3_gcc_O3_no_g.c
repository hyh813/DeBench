// Decompiled by BinaryAI
// SHA256: b361cd7555afe717eef0891732e3b1d59d7d3b64c38d3bc59999f66870c1e8c7

// Function: _init @ 0x11000
int _init(EVP_PKEY_CTX *ctx)
{
  int iVar1;
  __gmon_start__();
  frame_dummy();
  iVar1 = __do_global_ctors_aux();
  return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
  (*(code *)(undefined *)0x0)();
  return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x50))();
  return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0xc))();
  return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x10))();
  return;
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x14))();
  return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x18))();
  return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x1c))();
  return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x20))();
  return;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x24))();
  return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x28))();
  return;
}

// Function: FUN_000111d0 @ 0x111d0
void FUN_000111d0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x2c))();
  return;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x30))();
  return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x34))();
  return;
}

// Function: FUN_00011200 @ 0x11200
void FUN_00011200(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x38))();
  return;
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x3c))();
  return;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x40))();
  return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x44))();
  return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
  int unaff_EBX;
  (**(code **)(unaff_EBX + 0x48))();
  return;
}

// Function: main @ 0x11250
undefined4 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: _start @ 0x11280
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011150(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x112ac
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x112b0
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x112c0
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x11300
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11350
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x4cb7) == '\0') {
    if (*(int *)(unaff_EDI + 0x4c93) != 0) {
      FUN_00011140(*(undefined4 *)(unaff_EDI + 0x4ca7));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x4cbb);
    while (uVar1 < ((unaff_EDI + 0x4b67) - (unaff_EDI + 0x4b63) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x4cbb) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x4b63 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x4cbb);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x4cb7) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x113e9
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x113ed
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: double_value @ 0x11400
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: alloca_usage.constprop.0 @ 0x11410
undefined4 alloca_usage_constprop_0(void)
{
  return 0xf;
}

// Function: local_vars @ 0x11420
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x11430
int local_array(int param_1)
{
  return param_1 * 5;
}

// Function: local_struct @ 0x11440
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x11450
undefined4 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x11470
int address_of_array(int *param_1)
{
  return *param_1 * 2;
}

// Function: large_stack_frame @ 0x11480
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
    return (int)local_810[1024];
  }
  __stack_chk_fail_local();
}

// Function: vla_stack @ 0x114e0
undefined4 vla_stack(int param_1)
{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar8;
  int in_GS_OFFSET;
  undefined auStack_1c [12];
  int local_10;
  undefined *puVar7;
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
    *(undefined **)(puVar8 + -4) = &UNK_00011583;
    __stack_chk_fail_local();
  }
  return uVar4;
}

// Function: alloca_usage @ 0x11590
undefined4 alloca_usage(int param_1)
{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar8;
  int in_GS_OFFSET;
  undefined auStack_1c [12];
  int local_10;
  undefined *puVar7;
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
    *(undefined **)(puVar8 + -4) = &UNK_0001162b;
    __stack_chk_fail_local();
  }
  return uVar4;
}

// Function: stack_alias @ 0x11630
undefined4 stack_alias(void)
{
  return 0x14;
}

// Function: test_stack_memory @ 0x11640
void test_stack_memory(void)
{
  undefined4 uVar1;
  FUN_000111f0(&DAT_00013008);
  FUN_00011220(1,"MEM-L1-01 (local_vars): %d\n",0x14);
  FUN_00011220(1,"MEM-L1-02 (local_array): %d\n",10);
  FUN_00011220(1,"MEM-L1-03 (local_struct): %d\n",0xf);
  FUN_00011220(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
  FUN_00011220(1,"MEM-L1-05 (address_of_array): %d\n",2);
  uVar1 = large_stack_frame();
  FUN_00011220(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
  FUN_00011220(1,"MEM-L2-02 (vla_stack): %d\n",10);
  uVar1 = alloca_usage_constprop_0();
  FUN_00011220(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
  FUN_00011220(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
  return;
}

// Function: heap_basic @ 0x11720
undefined4 heap_basic(int param_1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  iVar1 = FUN_000111e0(param_1 * 4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar2 = 0;
      do {
        *(int *)(iVar1 + iVar2 * 2) = iVar2;
        iVar2 = iVar2 + 2;
      } while (param_1 * 2 != iVar2);
    }
    uVar3 = *(undefined4 *)(iVar1 + (param_1 / 2) * 4);
    FUN_00011170(iVar1);
  }
  return uVar3;
}

// Function: heap_calloc @ 0x11790
int heap_calloc(int param_1)
{
  int *piVar1;
  int *piVar2;
  int iVar3;
  piVar1 = (int *)FUN_00011240(param_1,4);
  if (piVar1 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    if (param_1 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = 0;
      piVar2 = piVar1;
      do {
        iVar3 = iVar3 + *piVar2;
        piVar2 = piVar2 + 1;
      } while (piVar1 + param_1 != piVar2);
    }
    FUN_00011170(piVar1);
  }
  return iVar3;
}

// Function: heap_realloc @ 0x11800
undefined4 heap_realloc(void)
{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  puVar1 = (undefined4 *)FUN_000111e0(0x14);
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    *puVar1 = 1;
    puVar1[1] = 2;
    puVar1[2] = 3;
    puVar1[3] = 4;
    puVar1[4] = 5;
    iVar2 = FUN_000111d0(puVar1,0x28);
    if (iVar2 == 0) {
      uVar3 = 0xfffffffe;
      FUN_00011170(puVar1);
    }
    else {
      uVar3 = 0x32;
      if (*(int *)(iVar2 + 8) != 3) {
        uVar3 = 0xfffffffd;
      }
      FUN_00011170(iVar2);
    }
  }
  return uVar3;
}

// Function: heap_array @ 0x118a0
undefined4 heap_array(int param_1)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  iVar1 = FUN_000111e0(param_1 * 4);
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar2 = 0;
      do {
        *(int *)(iVar1 + iVar2 * 4) = iVar2 * 3;
        iVar2 = iVar2 + 1;
      } while (param_1 != iVar2);
    }
    uVar3 = *(undefined4 *)(iVar1 + (param_1 / 2) * 4);
    FUN_00011170(iVar1);
  }
  return uVar3;
}

// Function: heap_struct @ 0x11910
int heap_struct(int param_1)
{
  int iVar1;
  iVar1 = FUN_000111e0(8);
  if (iVar1 == 0) {
    param_1 = -1;
  }
  else {
    param_1 = param_1 * 3;
    FUN_00011170(iVar1);
  }
  return param_1;
}

// Function: heap_nested @ 0x11960
undefined4 heap_nested(undefined4 *param_1)
{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  puVar1 = (undefined4 *)FUN_000111e0(8);
  *param_1 = puVar1;
  if (puVar1 == (undefined4 *)0x0) {
    uVar3 = 0xffffffff;
  }
  else {
    *puVar1 = 10;
    puVar2 = (undefined4 *)FUN_000111e0(8);
    puVar1[1] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      FUN_00011170(puVar1);
      uVar3 = 0xfffffffe;
    }
    else {
      *puVar2 = 0x14;
      puVar2[1] = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

// Function: linked_list_heap @ 0x119e0
int linked_list_heap(void)
{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  iVar4 = 0;
  piVar5 = (int *)0x0;
  piVar3 = (int *)0x0;
  while( true ) {
    piVar2 = (int *)FUN_000111e0(8);
    if (piVar2 == (int *)0x0) {
      while (piVar5 != (int *)0x0) {
        piVar3 = (int *)piVar5[1];
        FUN_00011170(piVar5);
        piVar5 = piVar3;
      }
      return -1;
    }
    *piVar2 = iVar4;
    piVar2[1] = 0;
    piVar1 = piVar2;
    if (piVar5 != (int *)0x0) {
      piVar3[1] = (int)piVar2;
      piVar1 = piVar5;
    }
    piVar5 = piVar1;
    if (iVar4 == 0x28) break;
    iVar4 = iVar4 + 10;
    piVar3 = piVar2;
  }
  iVar4 = 0;
  piVar3 = piVar5;
  do {
    iVar4 = iVar4 + *piVar3;
    piVar3 = (int *)piVar3[1];
  } while (piVar3 != (int *)0x0);
  do {
    piVar3 = (int *)piVar5[1];
    FUN_00011170(piVar5);
    piVar5 = piVar3;
  } while (piVar3 != (int *)0x0);
  return iVar4;
}

// Function: create_tree_node @ 0x11a90
void create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)FUN_000111e0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = param_1;
  }
  return;
}

// Function: tree_heap_traversal @ 0x11ad0
undefined4 tree_heap_traversal(void)
{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  iVar1 = FUN_000111e0(0xc);
  if (iVar1 == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    iVar2 = FUN_000111e0(0xc);
    if (iVar2 == 0) {
      iVar2 = FUN_000111e0(0xc);
      if (iVar2 != 0) {
        FUN_00011170(iVar2);
      }
    }
    else {
      iVar3 = FUN_000111e0(0xc);
      if (iVar3 != 0) {
        FUN_00011170(iVar2);
        FUN_00011170(iVar3);
        FUN_00011170(iVar1);
        return 0x3c;
      }
      FUN_00011170(iVar2);
    }
    FUN_00011170(iVar1);
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}

// Function: memory_leak @ 0x11b90
undefined4 memory_leak(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  iVar1 = FUN_000111e0(param_1 * 4);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (0 < param_1) {
      iVar3 = 0;
      do {
        *(int *)(iVar1 + iVar3 * 4) = iVar3;
        iVar3 = iVar3 + 1;
      } while (param_1 != iVar3);
    }
    uVar2 = *(undefined4 *)(iVar1 + (param_1 / 2) * 4);
  }
  return uVar2;
}

// Function: dangling_pointer @ 0x11bf0
undefined4 dangling_pointer(void)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  puVar1 = (undefined4 *)FUN_000111e0(4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00011220(1,"value before free: %d\n",0x2a);
    FUN_00011170(puVar1);
    uVar2 = *puVar1;
  }
  return uVar2;
}

// Function: double_free @ 0x11c40
undefined4 double_free(undefined4 *param_1)
{
  int iVar1;
  undefined4 uVar2;
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = FUN_000111e0(4);
    if (iVar1 != 0) {
      FUN_00011170(iVar1);
      FUN_00011170(iVar1);
      return 0xfffffffe;
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *param_1;
  }
  return uVar2;
}

// Function: heap_overflow @ 0x11ca0
undefined4 heap_overflow(void)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = FUN_000111e0(0x28);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    FUN_00011170(iVar1);
    uVar2 = 0;
  }
  return uVar2;
}

// Function: test_heap_memory @ 0x11ce0
void test_heap_memory(void)
{
  uint *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  uint **ppuVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int in_GS_OFFSET;
  uint *local_3c;
  char *pcStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined auStack_2c [8];
  uint local_24;
  undefined4 local_20;
  undefined4 uStack_14;
  uStack_14 = 0x11ced;
  local_20 = *(undefined4 *)(in_GS_OFFSET + 0x14);
  local_3c = (uint *)&DAT_000130ea;
  FUN_000111f0();
  local_3c = (uint *)0x28;
  local_3c = (uint *)FUN_000111e0();
  if (local_3c == (uint *)0x0) {
    uStack_34 = 0xffffffff;
  }
  else {
    local_3c[1] = 2;
    local_3c[2] = 4;
    local_3c[3] = 6;
    local_3c[4] = 8;
    local_3c[5] = 10;
    local_3c[6] = 0xc;
    local_3c[7] = 0xe;
    local_3c[8] = 0x10;
    local_3c[9] = 0x12;
    FUN_00011170();
    uStack_34 = 10;
  }
  pcStack_38 = "HEAP-L2-01 (heap_basic): %d\n";
  local_3c = (uint *)0x1;
  FUN_00011220();
  pcStack_38 = (char *)0x4;
  local_3c = (uint *)0x5;
  local_3c = (uint *)FUN_00011240();
  if (local_3c == (uint *)0x0) {
    iVar6 = -1;
  }
  else {
    iVar6 = local_3c[1] + *local_3c + local_3c[2] + local_3c[3] + local_3c[4];
    FUN_00011170();
  }
  pcStack_38 = "HEAP-L2-02 (heap_calloc): %d\n";
  local_3c = (uint *)0x1;
  uStack_34 = iVar6;
  FUN_00011220();
  uStack_34 = heap_realloc();
  pcStack_38 = "HEAP-L2-03 (heap_realloc): %d\n";
  local_3c = (uint *)0x1;
  FUN_00011220();
  local_3c = (uint *)0x28;
  local_3c = (uint *)FUN_000111e0();
  if (local_3c == (uint *)0x0) {
    uStack_34 = 0xffffffff;
  }
  else {
    local_3c[1] = 3;
    local_3c[2] = 6;
    local_3c[3] = 9;
    local_3c[4] = 0xc;
    local_3c[5] = 0xf;
    local_3c[6] = 0x12;
    local_3c[7] = 0x15;
    local_3c[8] = 0x18;
    local_3c[9] = 0x1b;
    FUN_00011170();
    uStack_34 = 0xf;
  }
  pcStack_38 = "HEAP-L2-04 (heap_array): %d\n";
  local_3c = (uint *)0x1;
  FUN_00011220();
  local_3c = (uint *)0x8;
  local_3c = (uint *)FUN_000111e0();
  if (local_3c == (uint *)0x0) {
    uStack_34 = 0xffffffff;
  }
  else {
    FUN_00011170();
    uStack_34 = 0xf;
  }
  ppuVar4 = (uint **)auStack_2c;
  pcStack_38 = "HEAP-L2-05 (heap_struct): %d\n";
  local_3c = (uint *)0x1;
  FUN_00011220();
  local_3c = (uint *)0x8;
  puVar1 = (uint *)FUN_000111e0();
  if (puVar1 == (uint *)0x0) {
    pcStack_38 = "HEAP-L2-06 (heap_nested): %d\n";
    uStack_34 = 0xffffffff;
    local_3c = (uint *)0x1;
    puStack_30 = puVar1;
    FUN_00011220();
  }
  else {
    local_3c = (uint *)0x8;
    puVar2 = (undefined4 *)FUN_000111e0();
    puVar1[1] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      local_3c = puVar1;
      FUN_00011170();
      uStack_34 = 0xfffffffe;
    }
    else {
      *puVar2 = 0x14;
      puVar2[1] = 0;
      uStack_34 = 0;
    }
    pcStack_38 = "HEAP-L2-06 (heap_nested): %d\n";
    local_3c = (uint *)0x1;
    FUN_00011220();
    local_3c = (uint *)puVar1[1];
    FUN_00011170();
    local_3c = puVar1;
    FUN_00011170();
  }
  uVar5 = 0;
  puVar1 = (uint *)0x0;
  puVar7 = (uint *)0x0;
  while( true ) {
    local_3c = (uint *)0x8;
    puVar3 = (uint *)FUN_000111e0();
    local_3c = puVar1;
    if (puVar3 == (uint *)0x0) break;
    *puVar3 = uVar5;
    puVar3[1] = 0;
    if (puVar1 != (uint *)0x0) {
      puVar7[1] = (uint)puVar3;
      if (uVar5 != 0x28) goto LAB_00011f2d;
LAB_00011f42:
      iVar6 = 0;
      puVar1 = local_3c;
      do {
        iVar6 = iVar6 + *puVar1;
        puVar1 = (uint *)puVar1[1];
      } while (puVar1 != (uint *)0x0);
      do {
        puVar1 = (uint *)local_3c[1];
        FUN_00011170();
        local_3c = puVar1;
      } while (puVar1 != (uint *)0x0);
      goto LAB_00011f75;
    }
    local_3c = puVar3;
    puVar1 = puVar3;
    if (uVar5 == 0x28) goto LAB_00011f42;
LAB_00011f2d:
    uVar5 = uVar5 + 10;
    puVar7 = puVar3;
  }
  while (local_3c != (uint *)0x0) {
    puVar1 = (uint *)local_3c[1];
    FUN_00011170();
    local_3c = puVar1;
  }
  iVar6 = -1;
LAB_00011f75:
  pcStack_38 = "HEAP-L3-01 (linked_list_heap): %d\n";
  local_3c = (uint *)0x1;
  uStack_34 = iVar6;
  FUN_00011220();
  uStack_34 = tree_heap_traversal();
  pcStack_38 = "HEAP-L3-02 (tree_heap_traversal): %d\n";
  local_3c = (uint *)0x1;
  FUN_00011220();
  local_3c = (uint *)0x14;
  puVar2 = (undefined4 *)FUN_000111e0();
  if (puVar2 == (undefined4 *)0x0) {
    uStack_34 = 0xffffffff;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 1;
    puVar2[2] = 2;
    puVar2[3] = 3;
    puVar2[4] = 4;
    uStack_34 = 2;
  }
  pcStack_38 = "HEAP-L3-03 (memory_leak): %d\n";
  local_3c = (uint *)0x1;
  FUN_00011220();
  pcStack_38 = "HEAP-L3-04 (dangling_pointer): ";
  local_3c = (uint *)0x1;
  FUN_00011220();
  local_3c = (uint *)FUN_00011230();
  if (local_3c == (uint *)0x0) {
    local_3c = (uint *)0x4;
    puVar1 = (uint *)FUN_000111e0();
    if (puVar1 == (uint *)0x0) {
      uStack_34 = 0xffffffff;
    }
    else {
      pcStack_38 = "value before free: %d\n";
      uStack_34 = 0x2a;
      local_3c = (uint *)0x1;
      FUN_00011220();
      local_3c = puVar1;
      FUN_00011170();
      uStack_34 = *puVar1;
    }
    pcStack_38 = &DAT_0001319c;
    ppuVar4 = &local_3c;
    local_3c = (uint *)0x1;
    FUN_00011220();
    local_3c = (uint *)0x0;
    local_24 = FUN_00011200();
  }
  else {
    if ((int)local_3c < 1) {
      local_3c = (uint *)&DAT_000131ac;
      FUN_000111b0();
      goto LAB_00012062;
    }
    uStack_34 = 0;
    pcStack_38 = (char *)&local_24;
    FUN_000111c0();
    uVar5 = local_24 & 0x7f;
    ppuVar4 = (uint **)auStack_2c;
    if (uVar5 != 0) {
      ppuVar4 = (uint **)auStack_2c;
      if ('\x01' < (char)((char)uVar5 + '\x01')) {
        pcStack_38 = &DAT_000133e4;
        local_3c = (uint *)0x1;
        uStack_34 = uVar5;
        FUN_00011220();
        ppuVar4 = (uint **)auStack_2c;
      }
      goto LAB_00012062;
    }
  }
  *(uint *)((int)ppuVar4 + -8) = local_24 >> 8 & 0xff;
  *(undefined **)((int)ppuVar4 + -0xc) = &DAT_000133bc;
  *(undefined4 *)((int)ppuVar4 + -0x10) = 1;
  *(undefined4 *)((int)ppuVar4 + -0x14) = 0x120ed;
  FUN_00011220();
LAB_00012062:
  if (*(int *)((int)ppuVar4 + 0xc) == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
  *(undefined4 *)((int)ppuVar4 + -4) = 0x1214e;
  __stack_chk_fail_local();
}

// Function: global_var_access @ 0x12180
void global_var_access(void)
{
  global_counter = global_counter + 1;
  return;
}

// Function: global_var_read @ 0x121a0
int global_var_read(void)
{
  return global_counter * 2;
}

// Function: global_array_access @ 0x121c0
undefined4 global_array_access(uint param_1)
{
  if (param_1 < 10) {
    return *(undefined4 *)(global_array + param_1 * 4);
  }
  return 0xffffffff;
}

// Function: static_local @ 0x121f0
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

// Function: call_static_func @ 0x12220
int call_static_func(int param_1)
{
  return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x12230
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x12250
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x12270
int read_const_data(void)
{
  return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x12290
undefined4 access_bss_var(void)
{
  return 0;
}

// Function: access_bss_buffer @ 0x122a0
undefined4 access_bss_buffer(void)
{
  return 0;
}

// Function: global_struct_access @ 0x122b0
undefined4 global_struct_access(void)
{
  return 0x1e;
}

// Function: set_file_static @ 0x122c0
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x122e0
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x12300
void set_global_callback(undefined4 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x12320
undefined4 call_global_callback(void)
{
  undefined4 uVar1;
  if (global_func_ptr != (code *)0x0) {
    uVar1 = (*global_func_ptr)();
    return uVar1;
  }
  return 0xffffffff;
}

// Function: global_heap_store @ 0x12350
undefined4 global_heap_store(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0xffffffff;
}

// Function: static_complex_init @ 0x12370
undefined4 static_complex_init(void)
{
  return 0xf;
}

// Function: tls_access @ 0x12380
int tls_access(int param_1)
{
  return param_1 * 2;
}

// Function: init_order_test @ 0x12390
undefined4 init_order_test(void)
{
  return 0x14;
}

// Function: test_static_global @ 0x123a0
void test_static_global(void)
{
  undefined4 uVar1;
  FUN_000111f0(&DAT_00013428);
  global_counter = global_counter + 1;
  FUN_00011220(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
  FUN_00011220(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
  FUN_00011220(1,"STM-L1-02 (global_array_access): %d\n",5);
  counter_1 = 1;
  FUN_00011220(1,"STM-L1-03 (static_local): %d\n",1);
  counter_1 = counter_1 + 1;
  FUN_00011220(1,"STM-L1-03 (static_local): %d\n",counter_1);
  FUN_00011220(1,"STM-L1-04 (call_static_func): %d\n",0xb);
  FUN_00011220(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
  uVar1 = extern_function(5);
  FUN_00011220(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
  FUN_00011220(1,"STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
  FUN_00011220(1,"STM-L2-04 (access_bss_var): %d\n",0);
  FUN_00011220(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
  FUN_00011220(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
  file_scope_static = 0x32;
  FUN_00011220(1,"STM-L2-06 (file_static): %d\n",0x32);
  global_func_ptr = double_value;
  FUN_00011220(1,"STM-L2-07 (global_func_ptr): %d\n",10);
  FUN_00011220(1,"STM-L2-08 (global_heap_store): %d\n",100);
  FUN_00011220(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
  FUN_00011220(1,"STM-L3-01 (tls_access): %d\n",0x14);
  FUN_00011220(1,"STM-L3-02 (init_order_test): %d\n",0x14);
  return;
}

// Function: memop_memset @ 0x12580
uint memop_memset(byte *param_1,int param_2,undefined4 param_3)
{
  uint uVar1;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011210(param_1,param_3,param_2);
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}

// Function: memop_memcpy @ 0x125d0
undefined4 memop_memcpy(int param_1,int param_2,uint param_3)
{
  undefined4 uVar1;
  if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011180(param_1,param_2,param_3,0x125e0);
    uVar1 = *(undefined4 *)(param_1 + -4 + (param_3 & 0xfffffffc));
  }
  return uVar1;
}

// Function: memop_memmove @ 0x12630
int memop_memmove(int param_1,uint param_2)
{
  int iVar1;
  if ((param_1 == 0) || (param_2 < 2)) {
    iVar1 = -1;
  }
  else {
    FUN_00011160(param_1 + 1,param_1,param_2 - 1);
    iVar1 = (int)*(char *)(param_1 + 1);
  }
  return iVar1;
}

// Function: memop_memcmp @ 0x12680
int memop_memcmp(int param_1,int param_2,int param_3)
{
  int iVar1;
  int iVar2;
  if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
    iVar1 = FUN_00011190(param_1,param_2,param_3,0x12690);
    iVar2 = -(uint)(iVar1 != 0);
    if (0 < iVar1) {
      iVar2 = 1;
    }
    return iVar2;
  }
  return 0;
}

// Function: memop_bzero @ 0x126f0
uint memop_bzero(byte *param_1,undefined4 param_2)
{
  uint uVar1;
  if (param_1 == (byte *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011210(param_1,0,param_2);
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}

// Function: memop_bcopy @ 0x12730
uint memop_bcopy(int param_1,byte *param_2,int param_3)
{
  uint uVar1;
  __x86_get_pc_thunk_di();
  if ((param_2 == (byte *)0x0 || param_3 == 0) || (param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011160(param_2,param_1,param_3);
    uVar1 = (uint)*param_2;
  }
  return uVar1;
}

// Function: memop_unaligned_access @ 0x12790
undefined4 memop_unaligned_access(int param_1)
{
  if (param_1 != 0) {
    return *(undefined4 *)(param_1 + 1);
  }
  return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x127b0
int memop_memory_barrier(int *param_1)
{
  if (param_1 != (int *)0x0) {
    LOCK();
    UNLOCK();
    return *param_1 + *param_1;
  }
  return -1;
}

// Function: test_memory_op_functions @ 0x127d0
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
  undefined local_111;
  undefined4 local_110;
  undefined4 local_10c;
  undefined2 local_108;
  int local_10;
  undefined4 uStack_8;
  uStack_8 = 0x127da;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_000111f0(&DAT_00013650);
  local_110 = 0x41414141;
  local_108 = 0x4141;
  local_10c = 0x41414141;
  FUN_00011220(1,"MEMOP-L2-01: %d\n",0x41);
  FUN_00011220(1,"MEMOP-L2-02: %d\n",0x32);
  local_111 = 0;
  local_113 = 0x646c;
  local_11b = 0x6c6c6548;
  local_117 = 0x726f576f;
  FUN_00011160((int)&local_11b + 1,&local_11b,9);
  FUN_00011220(1,"MEMOP-L2-03: %c\n",0x48);
  local_140 = 1;
  local_13c = 2;
  local_138 = 3;
  local_134 = 1;
  local_130 = 2;
  local_12c = 4;
  iVar1 = FUN_00011190(&local_140,&local_134,0xc);
  iVar2 = -(uint)(iVar1 != 0);
  if (0 < iVar1) {
    iVar2 = 1;
  }
  FUN_00011220(1,"MEMOP-L2-04: %d\n",iVar2);
  local_125 = 0;
  local_11d = 0;
  local_121 = 0;
  FUN_00011220(1,"MEMOP-L2-05: %d\n",0);
  FUN_00011220(1,"MEMOP-L2-06: %d\n",1);
  FUN_00011220(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
  LOCK();
  UNLOCK();
  FUN_00011220(1,"MEMOP-L3-02: %d\n",10);
  if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
    return;
  }
  __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.ax @ 0x1298f
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: extern_function @ 0x129a0
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: __stack_chk_fail_local @ 0x129b0
void __stack_chk_fail_local(void)
{
  FUN_000111a0();
  return;
}

// Function: __do_global_ctors_aux @ 0x129d0
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x12a1c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

