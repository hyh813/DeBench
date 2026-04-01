// Decompiled by BinaryAI
// SHA256: 0cbf55c18d725ccdb21593724909a2eccc6548d01435e2ea16beb2e3d77d68ca

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

// Function: _start @ 0x11250
void processEntry _start(undefined4 param_1,undefined4 param_2)
{
  undefined auStack_4 [4];
  FUN_00011150(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
  do {
  } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1127c
void __i686_get_pc_thunk_bx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11280
void __x86_get_pc_thunk_bx(void)
{
  return;
}

// Function: deregister_tm_clones @ 0x11290
void deregister_tm_clones(void)
{
  return;
}

// Function: register_tm_clones @ 0x112d0
void register_tm_clones(void)
{
  return;
}

// Function: __do_global_dtors_aux @ 0x11320
void __do_global_dtors_aux(void)
{
  uint uVar1;
  int unaff_EDI;
  __x86_get_pc_thunk_di();
  if (*(char *)(unaff_EDI + 0x4d53) == '\0') {
    if (*(int *)(unaff_EDI + 0x4cc3) != 0) {
      FUN_00011140(*(undefined4 *)(unaff_EDI + 0x4cd7));
    }
    uVar1 = *(uint *)(unaff_EDI + 0x4d57);
    while (uVar1 < ((unaff_EDI + 0x4b97) - (unaff_EDI + 0x4b93) >> 2) - 1U) {
      *(uint *)(unaff_EDI + 0x4d57) = uVar1 + 1;
      (**(code **)(unaff_EDI + 0x4b93 + (uVar1 + 1) * 4))();
      uVar1 = *(uint *)(unaff_EDI + 0x4d57);
    }
    deregister_tm_clones();
    *(undefined *)(unaff_EDI + 0x4d53) = 1;
  }
  return;
}

// Function: __x86.get_pc_thunk.dx @ 0x113b9
void __x86_get_pc_thunk_dx(void)
{
  return;
}

// Function: __x86.get_pc_thunk.di @ 0x113bd
void __x86_get_pc_thunk_di(void)
{
  return;
}

// Function: double_value @ 0x113c1
int double_value(int param_1)
{
  return param_1 * 2;
}

// Function: local_vars @ 0x113d9
int local_vars(int param_1)
{
  return param_1 * 2 + 10;
}

// Function: local_array @ 0x11409
undefined4 local_array(int param_1)
{
  int in_GS_OFFSET;
  int local_3c;
  int aiStack_38 [10];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_3c = 0; local_3c < 10; local_3c = local_3c + 1) {
    aiStack_38[local_3c] = local_3c * param_1;
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    aiStack_38[5] = __stack_chk_fail_local();
  }
  return aiStack_38[5];
}

// Function: local_struct @ 0x11461
int local_struct(int param_1)
{
  return param_1 * 3;
}

// Function: address_of_local @ 0x1148d
undefined4 address_of_local(undefined4 *param_1)
{
  *param_1 = 0x2a;
  return 0x2a;
}

// Function: address_of_array @ 0x114b5
int address_of_array(int *param_1)
{
  return *param_1 + *param_1;
}

// Function: large_stack_frame @ 0x114e3
int large_stack_frame(void)
{
  int iVar1;
  int in_GS_OFFSET;
  int local_814;
  char local_810 [2048];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  for (local_814 = 0; local_814 < 0x800; local_814 = local_814 + 1) {
    local_810[local_814] = (char)local_814;
  }
  iVar1 = (int)local_810[1024];
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    iVar1 = __stack_chk_fail_local();
  }
  return iVar1;
}

// Function: vla_stack @ 0x11559
undefined4 vla_stack(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int in_GS_OFFSET;
  int local_1c;
  int local_18;
  undefined *local_14;
  int local_10;
  piVar4 = &local_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if ((param_1 < 1) || (1000 < param_1)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_18 = param_1 + -1;
    uVar3 = ((param_1 * 4 + 0xfU) / 0x10) * 0x10;
    for (; piVar4 != (int *)((int)&local_1c - (uVar3 & 0xfffff000));
        piVar4 = (int *)((int)piVar4 + -0x1000)) {
      *(undefined4 *)((int)piVar4 + -4) = *(undefined4 *)((int)piVar4 + -4);
    }
    iVar1 = -(uVar3 & 0xfff);
    local_14 = (undefined *)((int)piVar4 + iVar1);
    if ((uVar3 & 0xfff) != 0) {
      *(undefined4 *)((int)piVar4 + ((uVar3 & 0xfff) - 4) + iVar1) =
           *(undefined4 *)((int)piVar4 + ((uVar3 & 0xfff) - 4) + iVar1);
    }
    for (local_1c = 0; local_1c < param_1; local_1c = local_1c + 1) {
      *(int *)((int)piVar4 + local_1c * 4 + iVar1) = local_1c * 2;
    }
    uVar2 = *(undefined4 *)((int)piVar4 + (param_1 / 2) * 4 + iVar1);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}

// Function: alloca_usage @ 0x11660
undefined4 alloca_usage(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int in_GS_OFFSET;
  undefined auStack_1c [4];
  int local_18;
  uint local_14;
  int local_10;
  puVar4 = auStack_1c;
  puVar5 = auStack_1c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  if (param_1 < 1) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar3 = ((param_1 * 4 + 0x1bU) / 0x10) * 0x10;
    for (; puVar4 != auStack_1c + -(uVar3 & 0xfffff000); puVar4 = puVar4 + -0x1000) {
      *(undefined4 *)(puVar4 + -4) = *(undefined4 *)(puVar4 + -4);
    }
    iVar1 = -(uVar3 & 0xfff);
    puVar5 = puVar4 + iVar1;
    if ((uVar3 & 0xfff) != 0) {
      *(undefined4 *)(puVar4 + ((uVar3 & 0xfff) - 4) + iVar1) =
           *(undefined4 *)(puVar4 + ((uVar3 & 0xfff) - 4) + iVar1);
    }
    local_14 = (uint)(puVar4 + iVar1 + 0xf) & 0xfffffff0;
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)(local_18 * 4 + local_14) = local_18 * 3;
    }
    uVar2 = *(undefined4 *)(local_14 + (param_1 / 2) * 4);
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    *(undefined4 *)(puVar5 + -4) = 0x1175d;
    uVar2 = __stack_chk_fail_local();
  }
  return uVar2;
}

// Function: stack_alias @ 0x1175f
undefined4 stack_alias(void)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  if (&stack0x00000000 == (undefined *)0x14) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0x14;
  }
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: test_stack_memory @ 0x117d3
void test_stack_memory(void)
{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int in_GS_OFFSET;
  byte bVar4;
  undefined local_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_10;
  bVar4 = 0;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011200(&DAT_00013008);
  uVar1 = local_vars(5);
  FUN_00011160("MEM-L1-01 (local_vars): %d\n",uVar1);
  uVar1 = local_array(2);
  FUN_00011160("MEM-L1-02 (local_array): %d\n",uVar1);
  uVar1 = local_struct(5);
  FUN_00011160("MEM-L1-03 (local_struct): %d\n",uVar1);
  uVar1 = address_of_local(local_40);
  FUN_00011160("MEM-L1-04 (address_of_local): %d\n",uVar1);
  puVar3 = &local_38;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_38 = 1;
  local_34 = 2;
  local_30 = 3;
  uVar1 = address_of_array(&local_38);
  FUN_00011160("MEM-L1-05 (address_of_array): %d\n",uVar1);
  uVar1 = large_stack_frame();
  FUN_00011160("MEM-L2-01 (large_stack_frame): %d\n",uVar1);
  uVar1 = vla_stack(10);
  FUN_00011160("MEM-L2-02 (vla_stack): %d\n",uVar1);
  uVar1 = alloca_usage(10);
  FUN_00011160("MEM-L2-03 (alloca_usage): %d\n",uVar1);
  local_3c = 0;
  uVar1 = stack_alias(&local_3c,&local_3c);
  FUN_00011160("MEM-L2-04 (stack_alias): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: heap_basic @ 0x1196f
undefined4 heap_basic(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  iVar1 = FUN_000111f0(param_1 << 2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)(iVar1 + local_18 * 4) = local_18 * 2;
    }
    uVar2 = *(undefined4 *)(iVar1 + (param_1 / 2) * 4);
    FUN_00011180(iVar1);
  }
  return uVar2;
}

// Function: heap_calloc @ 0x11a05
int heap_calloc(int param_1)
{
  int iVar1;
  int local_18;
  int local_14;
  iVar1 = FUN_00011240(param_1,4);
  if (iVar1 == 0) {
    local_18 = -1;
  }
  else {
    local_18 = 0;
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      local_18 = local_18 + *(int *)(iVar1 + local_14 * 4);
    }
    FUN_00011180(iVar1);
  }
  return local_18;
}

// Function: heap_realloc @ 0x11a82
undefined4 heap_realloc(void)
{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int local_24;
  int local_20;
  iVar2 = FUN_000111f0(0x14);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    for (local_24 = 0; local_24 < 5; local_24 = local_24 + 1) {
      *(int *)(iVar2 + local_24 * 4) = local_24 + 1;
    }
    iVar1 = *(int *)(iVar2 + 8);
    iVar4 = FUN_000111e0(iVar2,0x28);
    if (iVar4 == 0) {
      FUN_00011180(iVar2);
      uVar3 = 0xfffffffe;
    }
    else {
      for (local_20 = 5; local_20 < 10; local_20 = local_20 + 1) {
        *(int *)(local_20 * 4 + iVar4) = local_20 * 10;
      }
      if (iVar1 == *(int *)(iVar4 + 8)) {
        uVar3 = *(undefined4 *)(iVar4 + 0x14);
      }
      else {
        uVar3 = 0xfffffffd;
      }
      FUN_00011180(iVar4);
    }
  }
  return uVar3;
}

// Function: heap_array @ 0x11b83
undefined4 heap_array(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  iVar1 = FUN_000111f0(param_1 << 2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
      *(int *)(local_18 * 4 + iVar1) = local_18 * 3;
    }
    uVar2 = *(undefined4 *)(iVar1 + (param_1 / 2) * 4);
    FUN_00011180(iVar1);
  }
  return uVar2;
}

// Function: heap_struct @ 0x11c1e
int heap_struct(int param_1)
{
  int *piVar1;
  int iVar2;
  piVar1 = (int *)FUN_000111f0(8);
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    *piVar1 = param_1;
    piVar1[1] = param_1 * 2;
    iVar2 = piVar1[1] + *piVar1;
    FUN_00011180(piVar1);
  }
  return iVar2;
}

// Function: heap_nested @ 0x11c8b
undefined4 heap_nested(int *param_1)
{
  int iVar1;
  undefined4 uVar2;
  iVar1 = FUN_000111f0(8);
  *param_1 = iVar1;
  if (*param_1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    *(undefined4 *)*param_1 = 10;
    iVar1 = *param_1;
    uVar2 = FUN_000111f0(8);
    *(undefined4 *)(iVar1 + 4) = uVar2;
    if (*(int *)(*param_1 + 4) == 0) {
      FUN_00011180(*param_1);
      uVar2 = 0xfffffffe;
    }
    else {
      **(undefined4 **)(*param_1 + 4) = 0x14;
      *(undefined4 *)(*(int *)(*param_1 + 4) + 4) = 0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

// Function: linked_list_heap @ 0x11d30
int linked_list_heap(void)
{
  int *piVar1;
  int *piVar2;
  int *local_2c;
  int *local_28;
  int local_24;
  int local_20;
  int *local_1c;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  while( true ) {
    if (4 < local_24) {
      local_20 = 0;
      for (local_1c = local_2c; local_1c != (int *)0x0; local_1c = (int *)local_1c[1]) {
        local_20 = local_20 + *local_1c;
      }
      while (local_2c != (int *)0x0) {
        piVar2 = (int *)local_2c[1];
        FUN_00011180(local_2c);
        local_2c = piVar2;
      }
      return local_20;
    }
    piVar2 = (int *)FUN_000111f0(8);
    if (piVar2 == (int *)0x0) break;
    *piVar2 = local_24 * 10;
    piVar2[1] = 0;
    piVar1 = piVar2;
    if (local_2c != (int *)0x0) {
      local_28[1] = (int)piVar2;
      piVar1 = local_2c;
    }
    local_2c = piVar1;
    local_24 = local_24 + 1;
    local_28 = piVar2;
  }
  while (local_2c != (int *)0x0) {
    piVar2 = (int *)local_2c[1];
    FUN_00011180(local_2c);
    local_2c = piVar2;
  }
  return -1;
}

// Function: create_tree_node @ 0x11e46
undefined4 * create_tree_node(undefined4 param_1)
{
  undefined4 *puVar1;
  puVar1 = (undefined4 *)FUN_000111f0(0xc);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  return puVar1;
}

// Function: tree_heap_traversal @ 0x11e97
int tree_heap_traversal(void)
{
  int *piVar1;
  int iVar2;
  piVar1 = (int *)create_tree_node(10);
  if (piVar1 == (int *)0x0) {
    iVar2 = -1;
  }
  else {
    iVar2 = create_tree_node(0x14);
    piVar1[1] = iVar2;
    iVar2 = create_tree_node(0x1e);
    piVar1[2] = iVar2;
    if ((piVar1[1] == 0) || (piVar1[2] == 0)) {
      if (piVar1[1] != 0) {
        FUN_00011180(piVar1[1]);
      }
      if (piVar1[2] != 0) {
        FUN_00011180(piVar1[2]);
      }
      FUN_00011180(piVar1);
      iVar2 = -2;
    }
    else {
      iVar2 = *(int *)piVar1[2] + *piVar1 + *(int *)piVar1[1];
      FUN_00011180(piVar1[1]);
      FUN_00011180(piVar1[2]);
      FUN_00011180(piVar1);
    }
  }
  return iVar2;
}

// Function: memory_leak @ 0x11faa
undefined4 memory_leak(int param_1)
{
  int iVar1;
  undefined4 uVar2;
  int local_14;
  iVar1 = FUN_000111f0(param_1 << 2);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_14 = 0; local_14 < param_1; local_14 = local_14 + 1) {
      *(int *)(local_14 * 4 + iVar1) = local_14;
    }
    uVar2 = *(undefined4 *)(iVar1 + (param_1 / 2) * 4);
  }
  return uVar2;
}

// Function: dangling_pointer @ 0x1202b
undefined4 dangling_pointer(void)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  puVar1 = (undefined4 *)FUN_000111f0(4);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 0x2a;
    FUN_00011160("value before free: %d\n",*puVar1);
    FUN_00011180(puVar1);
    uVar2 = *puVar1;
  }
  return uVar2;
}

// Function: double_free @ 0x120a2
undefined4 double_free(undefined4 *param_1)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)FUN_000111f0(4);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0xffffffff;
    }
    else {
      *puVar1 = 10;
      FUN_00011180(puVar1);
      FUN_00011180(puVar1);
      uVar2 = 0xfffffffe;
    }
  }
  else {
    uVar2 = *param_1;
  }
  return uVar2;
}

// Function: heap_overflow @ 0x12111
undefined4 heap_overflow(void)
{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_18;
  puVar1 = (undefined4 *)FUN_000111f0(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    for (local_18 = 0; local_18 < 0xb; local_18 = local_18 + 1) {
      puVar1[local_18] = local_18 * 100;
    }
    uVar2 = *puVar1;
    FUN_00011180(puVar1);
  }
  return uVar2;
}

// Function: test_heap_memory @ 0x1218c
void test_heap_memory(void)
{
  undefined4 ***pppuVar1;
  int in_GS_OFFSET;
  undefined4 **ppuStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined auStack_2c [12];
  undefined4 **local_20;
  uint local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  uStack_30 = 0x1219c;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  ppuStack_3c = (undefined4 **)&DAT_00013158;
  FUN_00011200();
  ppuStack_3c = (undefined4 **)0xa;
  uStack_38 = heap_basic();
  ppuStack_3c = (undefined4 **)0x13176;
  FUN_00011160();
  ppuStack_3c = (undefined4 **)0x5;
  uStack_38 = heap_calloc();
  ppuStack_3c = (undefined4 **)0x13193;
  FUN_00011160();
  uStack_30 = 0x12204;
  uStack_38 = heap_realloc();
  ppuStack_3c = (undefined4 **)0x131b4;
  FUN_00011160();
  ppuStack_3c = (undefined4 **)0xa;
  uStack_38 = heap_array();
  ppuStack_3c = (undefined4 **)0x131d3;
  FUN_00011160();
  ppuStack_3c = (undefined4 **)0x5;
  uStack_38 = heap_struct();
  ppuStack_3c = (undefined4 **)0x131f0;
  FUN_00011160();
  local_20 = (undefined4 **)0x0;
  ppuStack_3c = &local_20;
  uStack_38 = heap_nested();
  ppuStack_3c = (undefined4 **)0x1320e;
  FUN_00011160();
  if (local_20 != (undefined4 **)0x0) {
    ppuStack_3c = (undefined4 **)local_20[1];
    FUN_00011180();
    ppuStack_3c = local_20;
    FUN_00011180();
  }
  uStack_30 = 0x122ad;
  uStack_38 = linked_list_heap();
  ppuStack_3c = (undefined4 **)0x1322c;
  FUN_00011160();
  uStack_30 = 0x122c5;
  uStack_38 = tree_heap_traversal();
  ppuStack_3c = (undefined4 **)0x13250;
  FUN_00011160();
  ppuStack_3c = (undefined4 **)0x5;
  uStack_38 = memory_leak();
  ppuStack_3c = (undefined4 **)0x13276;
  FUN_00011160();
  ppuStack_3c = (undefined4 **)0x13294;
  FUN_00011160();
  uStack_30 = 0x1230f;
  local_18 = FUN_00011230();
  pppuVar1 = (undefined4 ***)auStack_2c;
  if (local_18 == 0) {
    uStack_30 = 0x1231d;
    uStack_38 = dangling_pointer();
    ppuStack_3c = (undefined4 **)&DAT_000132b4;
    local_14 = uStack_38;
    FUN_00011160();
    ppuStack_3c = (undefined4 **)0x0;
    FUN_00011210();
    pppuVar1 = &ppuStack_3c;
  }
  if (local_18 < 1) {
    *(undefined **)((int)pppuVar1 + -0x10) = &DAT_0001332d;
    *(undefined4 *)((int)pppuVar1 + -0x14) = 0x123ba;
    FUN_000111c0();
  }
  else {
    *(undefined4 *)((int)pppuVar1 + -8) = 0;
    *(uint **)((int)pppuVar1 + -0xc) = &local_1c;
    *(int *)((int)pppuVar1 + -0x10) = local_18;
    *(undefined4 *)((int)pppuVar1 + -0x14) = 0x12356;
    FUN_000111d0();
    if ((local_1c & 0x7f) == 0) {
      *(uint *)((int)pppuVar1 + -0xc) = (int)local_1c >> 8 & 0xff;
      *(undefined **)((int)pppuVar1 + -0x10) = &DAT_000132c4;
      *(undefined4 *)((int)pppuVar1 + -0x14) = 0x1237c;
      FUN_00011160();
    }
    else if ('\0' < (char)(((byte)local_1c & 0x7f) + 1) >> 1) {
      *(uint *)((int)pppuVar1 + -0xc) = local_1c & 0x7f;
      *(undefined **)((int)pppuVar1 + -0x10) = &DAT_000132ec;
      *(undefined4 *)((int)pppuVar1 + -0x14) = 0x123a6;
      FUN_00011160();
    }
  }
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    *(undefined4 *)((int)pppuVar1 + -4) = 0x123cf;
    __stack_chk_fail_local();
  }
  return;
}

// Function: global_var_access @ 0x123d4
int global_var_access(void)
{
  global_counter = global_counter + 1;
  return global_counter;
}

// Function: global_var_read @ 0x123fc
int global_var_read(void)
{
  return global_counter * 2;
}

// Function: global_array_access @ 0x12417
undefined4 global_array_access(int param_1)
{
  undefined4 uVar1;
  if ((param_1 < 0) || (9 < param_1)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(global_array + param_1 * 4);
  }
  return uVar1;
}

// Function: static_local @ 0x12447
int static_local(int param_1)
{
  if (param_1 == 0) {
    counter_1 = counter_1 + 1;
  }
  else {
    counter_1 = 0;
  }
  return counter_1;
}

// Function: static_helper @ 0x12486
int static_helper(int param_1)
{
  return param_1 * 2;
}

// Function: call_static_func @ 0x1249e
int call_static_func(undefined4 param_1)
{
  int iVar1;
  iVar1 = static_helper(param_1);
  return iVar1 + 1;
}

// Function: access_extern_global @ 0x124bf
int access_extern_global(void)
{
  return extern_global_var + 100;
}

// Function: call_extern_func @ 0x124dd
void call_extern_func(void)
{
  extern_function(5);
  return;
}

// Function: read_const_data @ 0x12506
int read_const_data(void)
{
  return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x1252f
undefined4 access_bss_var(void)
{
  return bss_var;
}

// Function: access_bss_buffer @ 0x12548
int access_bss_buffer(void)
{
  return (int)bss_buffer;
}

// Function: global_struct_access @ 0x12565
int global_struct_access(void)
{
  return DAT_0001604c + global_point;
}

// Function: set_file_static @ 0x12586
void set_file_static(undefined4 param_1)
{
  file_scope_static = param_1;
  return;
}

// Function: get_file_static @ 0x125a3
undefined4 get_file_static(void)
{
  return file_scope_static;
}

// Function: set_global_callback @ 0x125bc
void set_global_callback(undefined4 param_1)
{
  global_func_ptr = param_1;
  return;
}

// Function: call_global_callback @ 0x125d9
undefined4 call_global_callback(undefined4 param_1)
{
  undefined4 uVar1;
  if (global_func_ptr == (code *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (*global_func_ptr)(param_1);
  }
  return uVar1;
}

// Function: global_heap_store @ 0x12611
undefined4 global_heap_store(undefined4 *param_1)
{
  undefined4 uVar1;
  global_heap_ptr = param_1;
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *param_1;
  }
  return uVar1;
}

// Function: static_complex_init @ 0x12646
int static_complex_init(void)
{
  return DAT_00016064 + DAT_0001605c + complex_init;
}

// Function: tls_access @ 0x1266f
int tls_access(undefined4 param_1)
{
  int in_GS_OFFSET;
  *(undefined4 *)(in_GS_OFFSET + -4) = param_1;
  return *(int *)(in_GS_OFFSET + -4) * 2;
}

// Function: init_depends_on @ 0x12693
undefined4 init_depends_on(undefined4 *param_1)
{
  if (param_1 != (undefined4 *)0x0) {
    static_depends_0 = *param_1;
  }
  return static_depends_0;
}

// Function: init_order_test @ 0x126bd
void init_order_test(void)
{
  int in_GS_OFFSET;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  local_14 = 0x14;
  init_depends_on(&local_14);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: test_static_global @ 0x12702
void test_static_global(void)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined4 local_14;
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011200(&DAT_00013348);
  uVar1 = global_var_access();
  FUN_00011160("STM-L1-01 (global_var_access): %d\n",uVar1);
  uVar1 = global_var_read();
  FUN_00011160("STM-L1-01 (global_var_read): %d\n",uVar1);
  uVar1 = global_array_access(5);
  FUN_00011160("STM-L1-02 (global_array_access): %d\n",uVar1);
  static_local(1);
  uVar1 = static_local(0);
  FUN_00011160("STM-L1-03 (static_local): %d\n",uVar1);
  uVar1 = static_local(0);
  FUN_00011160("STM-L1-03 (static_local): %d\n",uVar1);
  uVar1 = call_static_func(5);
  FUN_00011160("STM-L1-04 (call_static_func): %d\n",uVar1);
  uVar1 = access_extern_global();
  FUN_00011160("STM-L2-01 (access_extern_global): %d\n",uVar1);
  uVar1 = call_extern_func();
  FUN_00011160("STM-L2-02 (call_extern_func): %d\n",uVar1);
  uVar1 = read_const_data();
  FUN_00011160("STM-L2-03 (read_const_data): %d\n",uVar1);
  uVar1 = access_bss_var();
  FUN_00011160("STM-L2-04 (access_bss_var): %d\n",uVar1);
  uVar1 = access_bss_buffer();
  FUN_00011160("STM-L2-04 (access_bss_buffer): %d\n",uVar1);
  uVar1 = global_struct_access();
  FUN_00011160("STM-L2-05 (global_struct_access): %d\n",uVar1);
  set_file_static(0x32);
  uVar1 = get_file_static();
  FUN_00011160("STM-L2-06 (file_static): %d\n",uVar1);
  set_global_callback(double_value);
  uVar1 = call_global_callback(5);
  FUN_00011160("STM-L2-07 (global_func_ptr): %d\n",uVar1);
  local_14 = 100;
  uVar1 = global_heap_store(&local_14);
  FUN_00011160("STM-L2-08 (global_heap_store): %d\n",uVar1);
  uVar1 = static_complex_init();
  FUN_00011160("STM-L2-09 (static_complex_init): %d\n",uVar1);
  uVar1 = tls_access(10);
  FUN_00011160("STM-L3-01 (tls_access): %d\n",uVar1);
  uVar1 = init_order_test();
  FUN_00011160("STM-L3-02 (init_order_test): %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: memop_memset @ 0x12969
uint memop_memset(byte *param_1,int param_2,undefined4 param_3)
{
  uint uVar1;
  if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011220(param_1,param_3,param_2,0x12979);
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}

// Function: memop_memcpy @ 0x129b5
undefined4 memop_memcpy(int param_1,int param_2,uint param_3)
{
  undefined4 uVar1;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011190(param_1,param_2,param_3,0x129c5);
    uVar1 = *(undefined4 *)(param_1 + ((param_3 & 0xfffffffc) - 4));
  }
  return uVar1;
}

// Function: memop_memmove @ 0x12a0e
int memop_memmove(int param_1,uint param_2)
{
  int iVar1;
  if ((param_1 == 0) || (param_2 < 2)) {
    iVar1 = -1;
  }
  else {
    FUN_00011170(param_1 + 1,param_1,param_2 - 1,0x12a1e);
    iVar1 = (int)*(char *)(param_1 + 1);
  }
  return iVar1;
}

// Function: memop_memcmp @ 0x12a65
undefined4 memop_memcmp(int param_1,int param_2,int param_3)
{
  undefined4 uVar1;
  int iVar2;
  if (((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) {
    uVar1 = 0;
  }
  else {
    iVar2 = FUN_000111a0(param_1,param_2,param_3,0x12a75);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        uVar1 = 0xffffffff;
      }
      else {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}

// Function: memop_bzero @ 0x12ad0
uint memop_bzero(byte *param_1,undefined4 param_2)
{
  uint uVar1;
  if (param_1 == (byte *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011220(param_1,0,param_2,0x12ae0);
    uVar1 = (uint)*param_1;
  }
  return uVar1;
}

// Function: memop_bcopy @ 0x12b19
uint memop_bcopy(int param_1,byte *param_2,int param_3)
{
  uint uVar1;
  if (((param_1 == 0) || (param_2 == (byte *)0x0)) || (param_3 == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    FUN_00011170(param_2,param_1,param_3,0x12b29);
    uVar1 = (uint)*param_2;
  }
  return uVar1;
}

// Function: memop_unaligned_access @ 0x12b6b
undefined4 memop_unaligned_access(int param_1)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  if (param_1 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 1);
  }
  if (*(int *)(in_GS_OFFSET + 0x14) != *(int *)(in_GS_OFFSET + 0x14)) {
    uVar1 = __stack_chk_fail_local();
  }
  return uVar1;
}

// Function: memop_memory_barrier @ 0x12bbe
int memop_memory_barrier(int *param_1)
{
  int iVar1;
  if (param_1 == (int *)0x0) {
    iVar1 = -1;
  }
  else {
    LOCK();
    UNLOCK();
    iVar1 = *param_1 + *param_1;
  }
  return iVar1;
}

// Function: test_memory_op_functions @ 0x12bf8
void test_memory_op_functions(void)
{
  undefined4 uVar1;
  int in_GS_OFFSET;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_135;
  undefined4 local_131;
  undefined4 local_12d;
  undefined4 local_129;
  undefined local_125 [10];
  undefined4 local_11b;
  undefined4 local_117;
  undefined2 local_113;
  undefined local_111;
  undefined local_110 [256];
  int local_10;
  local_10 = *(int *)(in_GS_OFFSET + 0x14);
  FUN_00011200(&DAT_000135c4);
  local_160 = 10;
  local_15c = 0x14;
  local_158 = 0x1e;
  local_154 = 0x28;
  local_150 = 0x32;
  local_14c = 0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0;
  local_13c = 0;
  uVar1 = memop_memset(local_110,10,0x41);
  FUN_00011160("MEMOP-L2-01: %d\n",uVar1);
  uVar1 = memop_memcpy(&local_14c,&local_160,0x14);
  FUN_00011160("MEMOP-L2-02: %d\n",uVar1);
  local_11b = 0x6c6c6548;
  local_117 = 0x726f576f;
  local_113 = 0x646c;
  local_111 = 0;
  uVar1 = memop_memmove(&local_11b,10);
  FUN_00011160("MEMOP-L2-03: %c\n",uVar1);
  local_178 = 1;
  local_174 = 2;
  local_170 = 3;
  local_16c = 1;
  local_168 = 2;
  local_164 = 4;
  uVar1 = memop_memcmp(&local_178,&local_16c,0xc);
  FUN_00011160("MEMOP-L2-04: %d\n",uVar1);
  uVar1 = memop_bzero(local_125,10);
  FUN_00011160("MEMOP-L2-05: %d\n",uVar1);
  local_135 = 0x4030201;
  local_131 = 0;
  uVar1 = memop_bcopy(&local_135,&local_131,4);
  FUN_00011160("MEMOP-L2-06: %d\n",uVar1);
  local_12d = 0x3020100;
  local_129 = 0x7060504;
  uVar1 = memop_unaligned_access(&local_12d);
  FUN_00011160("MEMOP-L3-01: 0x%x\n",uVar1);
  local_17c = 5;
  uVar1 = memop_memory_barrier(&local_17c);
  FUN_00011160("MEMOP-L3-02: %d\n",uVar1);
  if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
    __stack_chk_fail_local();
  }
  return;
}

// Function: main @ 0x12e86
undefined4 main(void)
{
  test_stack_memory();
  test_heap_memory();
  test_static_global();
  test_memory_op_functions();
  return 0;
}

// Function: __x86.get_pc_thunk.ax @ 0x12eb5
undefined4 __x86_get_pc_thunk_ax(void)
{
  undefined4 unaff_retaddr;
  return unaff_retaddr;
}

// Function: extern_function @ 0x12eb9
int extern_function(int param_1)
{
  return param_1 * 3;
}

// Function: __stack_chk_fail_local @ 0x12ee0
void __stack_chk_fail_local(void)
{
  FUN_000111b0();
  return;
}

// Function: __do_global_ctors_aux @ 0x12f00
void __do_global_ctors_aux(void)
{
  return;
}

// Function: _fini @ 0x12f4c
void _fini(void)
{
  __do_global_dtors_aux();
  return;
}

