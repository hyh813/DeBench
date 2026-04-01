// Decompiled by BinaryAI
// SHA256: 8bbe137c2e0a46de512efe2cf96f4f1735cab1238b7a8d910c5fc86228d0cf98

#include <stdint.h>

// Function: _init @ 0x11000
int _init(void *ctx);
int __stack_chk_fail_local(void);
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
int test_cpp_virtual_func(void);
unsigned int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
unsigned int test_cpp_operator_overload(void);
int test_cpp_template_func(void);
int test_cpp_template_class(void);
unsigned int test_cpp_lambda(void);
int test_cpp_exception(void);
unsigned int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);

// Struct declarations
typedef struct Base Base;
int std___ioinit;
int __dso_handle;
int std__ios_base__Init__Init;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct unique_ptr_int_std__default_delete_int__ unique_ptr_int_std__default_delete_int__;
typedef struct unique_ptr_int___std__default_delete_int____ unique_ptr_int___std__default_delete_int____;
typedef struct pointer_____offset_0x8___ pointer_____offset_0x8___;

// Struct definitions
struct unique_ptr_int_std__default_delete_int__ {
 int ptr;
};

struct unique_ptr_int___std__default_delete_int____ {
 int ptr;
};

struct pointer_____offset_0x8___ {
 int field_0;
 int field_4;
};

struct Container_int_ {
 int data[10];
 int size;
};

struct Container_double_ {
 double data[10];
 int size;
};

struct MiddleA {
 int vtable;
 int field_4;
 int field_8;
};

struct MiddleB {
 int vtable;
 int field_4;
 int field_8;
};

struct DiamondDerived {
 int vtable;
 int field_4;
 int field_8;
 int field_c;
 int field_10;
 int field_14;
 int field_18;
};

// Function: _init @ 0x11000
int _init(void *ctx)
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
 ((void (*)(void))0x0)();
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x60))();
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0xc))();
 return;
}

// Function: FUN_000111a0 @ 0x111a0
int FUN_000111a0(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x10))();
}

// Function: FUN_000111b0 @ 0x111b0
int FUN_000111b0(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x14))();
}

// Function: FUN_000111c0 @ 0x111c0
int FUN_000111c0(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x18))();
}

// Function: FUN_000111d0 @ 0x111d0
int FUN_000111d0(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x1c))();
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x20))();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
int FUN_000111f0(int unaff_EBX, int param_2)
{
 return (*(int (**)(void))(unaff_EBX + 0x24))();
}

// Function: FUN_00011200 @ 0x11200
int FUN_00011200(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x28))();
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x2c))();
 return;
}

// Function: FUN_00011220 @ 0x11220
int FUN_00011220(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x30))();
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x34))();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x38))();
 return;
}

// Function: FUN_00011250 @ 0x11250
int FUN_00011250(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x3c))();
}

// Function: FUN_00011260 @ 0x11260
int FUN_00011260(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x40))();
}

// Function: FUN_00011270 @ 0x11270
unsigned long long FUN_00011270(int unaff_EBX)
{
 return (*(unsigned long long (**)(void))(unaff_EBX + 0x44))();
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x48))();
 return;
}

// Function: FUN_00011290 @ 0x11290
void FUN_00011290(int unaff_EBX)
{
 (*(void (**)(void))(unaff_EBX + 0x4c))();
 return;
}

// Function: FUN_000112a0 @ 0x112a0
int FUN_000112a0(int unaff_EBX)
{
 return (*(int (**)(void))(unaff_EBX + 0x50))();
}

// Function: FUN_000112b0 @ 0x112b0
unsigned long long FUN_000112b0(int unaff_EBX)
{
 return (*(unsigned long long (**)(void))(unaff_EBX + 0x54))();
}

// Function: FUN_000112c0 @ 0x112c0
unsigned int FUN_000112c0(int unaff_EBX)
{
 return (*(unsigned int (**)(void))(unaff_EBX + 0x58))();
}

// Function: test_cpp_exception @ 0x112d0
int test_cpp_exception(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int **ppuVar4;
 unsigned int *puVar5;
 unsigned int *puVar6;
 int iVar7;
 unsigned long long uVar8;
 unsigned int auStack_5c [3];
 unsigned int uStack_50;
 unsigned int local_4c;
 pointer_____offset_0x8___ *ppuStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 unsigned int *puStack_3c;
 char *puStack_38;
 unsigned int uStack_34;
 unsigned int local_24;
 unsigned int local_20;
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x112f1;
 puStack_3c = (unsigned int *)FUN_000111c0(0);
 if (puStack_3c) *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char *)&int::typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x11308;
 uVar8 = FUN_000112b0(0);
 iVar7 = 0;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) {
 uStack_50 = 0x1131e;
 local_4c = (int)uVar8;
 piVar1 = (int *)FUN_000111b0(0);
 if (piVar1) iVar7 = *piVar1;
 uStack_40 = 0x11328;
 uVar8 = FUN_00011270(0);
 local_24 = (unsigned int)((unsigned long long)uVar8 >> 0x20);
 local_20 = (unsigned int)uVar8;
 uStack_40 = 0x11339;
 (void)FUN_000112a0(0);
 uVar2 = 0;
 }
 else {
 uVar2 = (unsigned int)uVar8;
 if ((int)((unsigned long long)uVar8 >> 0x20) == 1) {
 ppuVar4 = (unsigned int **)&local_4c;
 puVar5 = &local_4c;
 uStack_50 = 0x1134d;
 local_4c = uVar2;
 piVar1 = (int *)FUN_000111b0(0);
 if (piVar1) iVar7 = iVar7 + *piVar1 * 2;
 uStack_50 = 0x11358;
 FUN_000112a0(0);
 local_4c = (unsigned int)FUN_000111c0(0);
 ppuStack_48 = (pointer_____offset_0x8___ *)0x0;
 uStack_44 = 0;
 uStack_50 = 0x11376;
 uVar8 = FUN_000112b0(0);
 iVar3 = (int)((unsigned long long)uVar8 >> 0x20);
 uVar2 = (unsigned int)uVar8;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 iVar7 = iVar7 + 200;
 puVar6 = auStack_5c;
 auStack_5c[0] = uVar2;
 FUN_000111b0(0);
 goto LAB_000113b0;
 }
 goto LAB_00011384;
 }
 }
 else {
LAB_00011384:
 puVar5 = (unsigned int *)((int)ppuVar4 + -0x10);
 *(unsigned int *)(puVar5) = uVar2;
 *(unsigned int *)((int)puVar5 + -4) = 0x1138f;
 uVar2 = FUN_000112c0(0);
 }
 }
 iVar7 = iVar7 + 100;
 puVar6 = (unsigned int *)((int)puVar5 + -0x10);
 *(unsigned int *)(puVar6) = uVar2;
 *(unsigned int *)((int)puVar6 + -4) = 0x1139d;
 (void)FUN_000111b0(0);
LAB_000113b0:
 *(unsigned int *)((int)puVar6 + -4) = 0x113b5;
 (void)FUN_000112a0(0);
 return iVar7;
}

// Function: main @ 0x113c2
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113d5
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011290(&std___ioinit);
 FUN_000111e0(std__ios_base__Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11420
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011210(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1144c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11450
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11460
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x114a0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114f0
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4b1b) == '\0') {
 if (*(int *)(unaff_EDI + 0x4aeb) != 0) {
 FUN_00011180(*(unsigned int *)(unaff_EDI + 0x4b07));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4b1f);
 while (uVar1 < ((unaff_EDI + 0x474f) - (unaff_EDI + 0x474b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4b1f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x474b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4b1f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4b1b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11589
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1158d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11591
int test_cpp_member_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char local_30 [31];
 char local_11;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011230(local_30,&DAT_00013015,0x1f);
 local_11 = 0;
 iVar1 = FUN_000111d0(local_30);
 iVar1 = iVar1 + 0x125c;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_constructor @ 0x115f1
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1160d
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x11621
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 char **local_1c;
 char **local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_1c = &PTR_virtual_func_00015c58;
 local_18 = &PTR_virtual_func_00015c70;
 local_14 = 3;
 iVar1 = call_virtual_func((Base *)&local_1c,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 iVar2 = iVar1 + 0x15 + iVar2;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: test_cpp_multiple_inheritance @ 0x1168f
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x11699
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x116a3
int test_cpp_template_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 (void)dVar2;
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 iVar1 = (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_template_class @ 0x11735
int test_cpp_template_class(void)
{
 int iVar1;
 int in_GS_OFFSET;
 int local_3c [10];
 int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_14 = 1;
 local_3c[0] = 10;
 Container_int__push((Container_int_ *)&local_3c,0x14);
 Container_int__push((Container_int_ *)&local_3c,0x1e);
 iVar1 = 0;
 if (0 < local_14) {
 iVar1 = local_3c[0];
 }
 iVar1 = local_14 + 3 + iVar1;
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar1 = __stack_chk_fail_local();
 }
 return iVar1;
}

// Function: test_cpp_lambda @ 0x11797
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x117a1
int test_cpp_rtti(void)
{
 int iVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 unsigned int uVar5;
 int iVar6;
 char *pcVar7;
 pointer_____offset_0x8___ *ppuVar8;
 uVar5 = 10;
 piVar2 = (int *)FUN_000111a0(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00015dd0;
 piVar3 = (int *)FUN_000111a0(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00015de4;
 iVar1 = *piVar2;
 pcVar7 = (char *)((int)piVar2 - 4);
 uVar5 = 0;
 if ((pcVar7 != (char *)"12RTTIDerivedA") && (*pcVar7 != '*')) {
 iVar4 = FUN_00011200((int)pcVar7);
 uVar5 = (unsigned int)(iVar4 == 0) & 10;
 }
 iVar6 = uVar5 + 0x14;
 ppuVar8 = (pointer_____offset_0x8___ *)&RTTIBase_typeinfo;
 iVar4 = FUN_00011250(*piVar2);
 if (iVar4 != 0) {
  iVar6 = uVar5 + 0x78;
 }
 iVar4 = FUN_00011250((int)*piVar3);
 if (iVar4 != 0) {
 iVar6 = iVar6 + 200;
 }
 if (*pcVar7 == '*') {
 pcVar7 = pcVar7 + 1;
 }
 iVar4 = FUN_000111d0((int)pcVar7);
 iVar4 = iVar4 + iVar6;
 (**(void **)(iVar1 + 4))(piVar2);
 (**(void **)(*piVar3 + 4))(piVar3);
 return iVar4;
}

// Function: test_cpp_smart_ptr @ 0x118c9
unsigned int test_cpp_smart_ptr(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_2c;
 unsigned int *local_28;
 unsigned int *local_24;
 int local_20;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = (unsigned int *)FUN_000111a0(4);
 local_2c = 0;
 if (local_28) *local_28 = 200;
 local_24 = FUN_00011220(0x14);
 *(unsigned int *)local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 (void)std_unique_ptr_int___std__default_delete_int_____D(
 (unique_ptr_int___std__default_delete_int____ *)local_24);
 (void)std_unique_ptr_int_std__default_delete_int___D(
 (unique_ptr_int_std__default_delete_int__ *)local_28);
 if (local_2c != 0) {
  (void)std_unique_ptr_int_std__default_delete_int___D(
  (unique_ptr_int_std__default_delete_int__ *)(uintptr_t)local_2c);
 }
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 __stack_chk_fail_local();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x1199d
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_38 [2];
 unsigned int local_30;
 unsigned int local_28;
 unsigned int local_24;
 int local_20;
 local_38[0] = 0x15d88;
 local_20 = *(int *)(in_GS_OFFSET + 0x14);
 local_28 = 0x15dbc;
 local_30 = 0x15da0;
 local_24 = 0x32;
 iVar1 = DiamondDerived__func((DiamondDerived *)&local_30);
 local_24 = 100;
 iVar2 = DiamondDerived__func((DiamondDerived *)&local_30);
 iVar2 = iVar2 + iVar1;
 DiamondDerived__D((DiamondDerived *)(uintptr_t)local_38[0]);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 iVar2 = __stack_chk_fail_local();
 }
 return iVar2;
}

// Function: test_cpp_oo_features @ 0x11a22
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 unsigned int extraout_ECX;
 unsigned int extraout_ECX_00;
 unsigned long long uVar2;
 FUN_00011280(&DAT_0001301a);
 uVar1 = test_cpp_member_func();
 FUN_00011190(1,&DAT_0001303e,uVar1);
 uVar1 = test_cpp_constructor();
 FUN_00011190(1,&DAT_0001305c,uVar1);
 test_cpp_virtual_func();
 FUN_00011190(1,&DAT_00013078,0);
 uVar1 = test_cpp_multiple_inheritance();
 FUN_00011190(1,&DAT_00013094,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 FUN_00011190(1,&DAT_000130b0,uVar1);
 uVar1 = test_cpp_operator_overload();
 FUN_00011190(1,&DAT_000130cd,uVar1);
 uVar1 = test_cpp_template_func();
 FUN_00011190(1,&DAT_000130e9,uVar1,extraout_ECX);
 uVar1 = test_cpp_template_class();
 FUN_00011190(1,&DAT_00013105,uVar1);
 uVar1 = test_cpp_lambda();
 FUN_00011190(1,&DAT_00013121,uVar1);
 uVar2 = test_cpp_exception();
 FUN_00011190(1,&DAT_0001313d,uVar2);
 test_cpp_smart_ptr();
 FUN_00011190(1,&DAT_0001315a,0,extraout_ECX_00);
 uVar2 = test_cpp_rtti();
 FUN_00011190(1,&DAT_00013177,uVar2);
 return;
}

// Function: Base_virtual_func @ 0x11b66
int Base_virtual_func(Base *this_ptr,int param_1)
{
 (void)this_ptr;
 return param_1 + 1;
}

// Function: Base_getName @ 0x11b74
char * Base_getName(void)
{
 return &DAT_00013008;
}

// Function: Base__D @ 0x11b8a
void Base__D(Base *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Derived_virtual_func @ 0x11b90
int Derived_virtual_func(Derived *this_ptr,int param_1)
{
 return param_1 * *(int *)(this_ptr + 4);
}

// Function: Derived_getName @ 0x11ba4
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived__funcA @ 0x11bba
unsigned int MultiDerived__funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived__funcB @ 0x11bce
unsigned int MultiDerived__funcB(MultiDerived *this_ptr)
{
 (void)this_ptr;
 return 0x28;
}

// Function: VirtualBase_func @ 0x11bd8
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase__D @ 0x11be2
void VirtualBase__D(VirtualBase *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MiddleA_func @ 0x11be8
int MiddleA_func(MiddleA *this_ptr)
{
 return *(int *)(this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0x96;
}

// Function: MiddleA_func_1 @ 0x11c02
void MiddleA_func_1(MiddleA *this_ptr)
{
 MiddleA_func((MiddleA *)((int)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
 return;
}

// Function: MiddleB_func @ 0x11c16
int MiddleB_func(MiddleB *this_ptr)
{
 return *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 200;
}

// Function: MiddleB_func_1 @ 0x11c30
void MiddleB_func_1(MiddleB *this_ptr)
{
 MiddleB_func((MiddleB *)((int)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
 return;
}

// Function: DiamondDerived_func @ 0x11c44
int DiamondDerived_func(DiamondDerived *this_ptr)
{
 return *(int *)((int)this_ptr + *(int *)(*(int *)this_ptr + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived_func_1 @ 0x11c5e
void DiamondDerived_func_1(DiamondDerived *this_ptr)
{
 DiamondDerived_func((DiamondDerived *)((int)this_ptr + *(int *)(*(int *)this_ptr + -0xc)));
 return;
}

// Function: DiamondDerived_func_2 @ 0x11c71
void DiamondDerived_func_2(DiamondDerived *this_ptr)
{
 DiamondDerived_func(this_ptr + -8);
 return;
}

// Function: MiddleA__MiddleA @ 0x11c7c
void MiddleA__MiddleA(MiddleA *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15c94;
 *(unsigned int *)(this_ptr + 8) = 0x15cb0;
 return;
}

// Function: MiddleA__MiddleA_1 @ 0x11ca1
void MiddleA__MiddleA_1(MiddleA *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(unsigned int *)(this_ptr + iVar1) = 0x15c94;
 *(unsigned int *)((int)(this_ptr + iVar1) + 8) = 0x15cb0;
 return;
}

// Function: MiddleB__MiddleB @ 0x11ccc
void MiddleB__MiddleB(MiddleB *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15cd0;
 *(unsigned int *)(this_ptr + 8) = 0x15cec;
 return;
}

// Function: MiddleB__MiddleB_1 @ 0x11cf1
void MiddleB__MiddleB_1(MiddleB *this_ptr)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this_ptr + -0x10);
 *(unsigned int *)(this_ptr + iVar1) = 0x15cd0;
 *(unsigned int *)((int)(this_ptr + iVar1) + 8) = 0x15cec;
 return;
}

// Function: RTTIDerivedA_getType @ 0x11d1c
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB_getType @ 0x11d26
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB__D @ 0x11d30
void RTTIDerivedB__D(RTTIDerivedB *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: RTTIDerivedA__D @ 0x11d36
void RTTIDerivedA__D(RTTIDerivedA *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: MultiDerived__D @ 0x11d3c
void MultiDerived__D(MultiDerived *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Derived__D @ 0x11d46
void Derived__D(Derived *this_ptr)
{
 (void)this_ptr;
 return;
}

// Function: Base__D @ 0x11d4c
void Base__D(Base *this_ptr)
{
 FUN_000111f0(this_ptr,4);
 return;
}

// Function: Derived__D @ 0x11d74
void Derived__D(Derived *this_ptr)
{
 FUN_000111f0(this_ptr,8);
 return;
}

// Function: MultiDerived__D @ 0x11d9c
void MultiDerived__D(MultiDerived *this_ptr)
{
 FUN_000111f0(this_ptr,0x10);
 return;
}

// Function: MultiDerived__D_1 @ 0x11dc4
void MultiDerived__D_1(MultiDerived *this_ptr)
{
 MultiDerived__D(this_ptr + -8);
 return;
}

// Function: VirtualBase__D @ 0x11dd0
void VirtualBase__D(VirtualBase *this_ptr)
{
 FUN_000111f0(this_ptr,8);
 return;
}

// Function: RTTIDerivedB__D @ 0x11df8
void RTTIDerivedB__D(RTTIDerivedB *this_ptr)
{
 FUN_000111f0(this_ptr,4);
 return;
}

// Function: RTTIDerivedA__D @ 0x11e20
void RTTIDerivedA__D(RTTIDerivedA *this_ptr)
{
 FUN_000111f0(this_ptr,4);
 return;
}

// Function: MiddleA__D @ 0x11e48
void MiddleA__D(MiddleA *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15c94;
 *(unsigned int *)(this_ptr + 8) = 0x15cb0;
 FUN_000111f0(this_ptr,0x10);
 return;
}

// Function: MiddleA__D_1 @ 0x11e7f
void MiddleA__D_1(MiddleA *this_ptr)
{
 MiddleA__D(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}

// Function: MiddleB__D @ 0x11e92
void MiddleB__D(MiddleB *this_ptr)
{
 *(unsigned int *)this_ptr = 0x15cd0;
 *(unsigned int *)(this_ptr + 8) = 0x15cec;
 FUN_000111f0(this_ptr,0x10);
 return;
}

// Function: MiddleB__D_1 @ 0x11ec9
void MiddleB__D_1(MiddleB *this_ptr)
{
 MiddleB__D(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}

// Function: MiddleA__D_2 @ 0x11edc
void MiddleA__D_2(MiddleA *this_ptr)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar1 = 0x15c94;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)this_ptr = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cb0;
 iVar1 = 8;
 }
 *(int *)(this_ptr + iVar1) = iVar2;
 return;
}

// Function: MiddleA__D_3 @ 0x11f26
void MiddleA__D_3(MiddleA *this_ptr)
{
 MiddleA__D(this_ptr);
 return;
}

// Function: MiddleB__D_2 @ 0x11f42
void MiddleB__D_2(MiddleB *this_ptr)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar1 = 0x15cd0;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)this_ptr = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cec;
 iVar1 = 8;
 }
 *(int *)(this_ptr + iVar1) = iVar2;
 return;
}

// Function: MiddleB__D_3 @ 0x11f8c
void MiddleB__D_3(MiddleB *this_ptr)
{
 MiddleB__D(this_ptr);
 return;
}

// Function: template_max<int> @ 0x11fa8
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11fbc
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11fd5
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int__Container @ 0x11fee
void Container_int__Container(Container_int_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x28) = 0;
 return;
}

// Function: Container_int__push @ 0x12002
void Container_int__push(Container_int_ *this_ptr,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x28) = iVar1 + 1;
 *(int *)(this_ptr + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int__get @ 0x12022
unsigned int Container_int__get(Container_int_ *this_ptr,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this_ptr + 0x28) != param_1 && param_1 <= *(int *)(this_ptr + 0x28))) {
 uVar1 = *(unsigned int *)(this_ptr + param_1 * 4);
 }
 return uVar1;
}

// Function: Container_int__getSize @ 0x12040
unsigned int Container_int__getSize(Container_int_ *this_ptr)
{
 (void)this_ptr;
 return *(unsigned int *)(this_ptr + 0x28);
}

// Function: Container_double__Container @ 0x12050
void Container_double__Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this_ptr + 0x50) = 0;
 return;
}

// Function: Container_double__push @ 0x12064
void Container_double__push(Container_double_ *this_ptr,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this_ptr + 0x50);
 if (iVar1 < 10) {
 *(int *)(this_ptr + 0x50) = iVar1 + 1;
 *(double *)(this_ptr + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double__get @ 0x12088
double Container_double__get(Container_double_ *this_ptr,int param_1)
{
 double lVar1;
 lVar1 = 0.0;
 if ((-1 < param_1) && (param_1 < *(int *)(this_ptr + 0x50))) {
 lVar1 = *(double *)(this_ptr + param_1 * 8);
 }
 return lVar1;
}

// Function: Container_double__getSize @ 0x120a8
unsigned int Container_double__getSize(Container_double_ *this_ptr)
{
 (void)this_ptr;
 return *(unsigned int *)(this_ptr + 0x50);
}

// Function: std_unique_ptr_int_std__default_delete_int____D @ 0x120b8
void std_unique_ptr_int_std__default_delete_int____D
 (unique_ptr_int_std__default_delete_int__ *this_ptr)
{
 if (*(int *)this_ptr != 0) {
 FUN_000111f0(*(int *)this_ptr,4);
 }
 return;
}

// Function: std_unique_ptr_int___std__default_delete_int_____D @ 0x120e8
void std_unique_ptr_int___std__default_delete_int_____D
 (unique_ptr_int___std__default_delete_int____ *this_ptr)
{
 if (*(int *)this_ptr != 0) {
 FUN_00011260((int)*(int *)this_ptr);
 }
 return;
}

// Function: DiamondDerived__C @ 0x12116
void DiamondDerived__C(DiamondDerived *this_ptr)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar2 = 0x15d88;
 if (in_stack_00000008 == 0) {
 iVar2 = *in_stack_0000000c;
 }
 *(int *)this_ptr = iVar2;
 if (in_stack_00000008 == 0) {
 iVar1 = in_stack_0000000c[5];
 iVar2 = *(int *)(iVar2 + -0xc);
 }
 else {
 iVar1 = 0x15dbc;
 iVar2 = 0x10;
 }
 *(int *)(this_ptr + iVar2) = iVar1;
 iVar2 = 0x15da0;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[6];
 }
 *(int *)(this_ptr + 8) = iVar2;
 MiddleB__MiddleB((MiddleB *)(this_ptr + 8));
 MiddleA__MiddleA((MiddleA *)this_ptr);
 return;
}

// Function: DiamondDerived__C_1 @ 0x121b0
void DiamondDerived__C_1(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr);
 return;
}

// Function: DiamondDerived__C_2 @ 0x121cb
void DiamondDerived__C_2(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr + -8);
 return;
}

// Function: DiamondDerived__C_3 @ 0x121d6
void DiamondDerived__C_3(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}

// Function: DiamondDerived__C_4 @ 0x121ea
void DiamondDerived__C_4(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr);
 FUN_000111f0(this_ptr,0x18);
 return;
}

// Function: DiamondDerived__C_5 @ 0x1221e
void DiamondDerived__C_5(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr + -8);
 return;
}

// Function: DiamondDerived__C_6 @ 0x12229
void DiamondDerived__C_6(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr + *(int *)(*(int *)this_ptr + -0x10));
 return;
}

// Function: DiamondDerived__C_7 @ 0x1223c
void DiamondDerived__C_7(DiamondDerived *this_ptr)
{
 DiamondDerived__C(this_ptr);
 return;
}

// Function: __x86.get_pc_thunk.ax @ 0x12258
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.cx @ 0x1225c
void __x86_get_pc_thunk_cx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x12260
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x12270
void __stack_chk_fail_local(void)
{
 FUN_00011240();
 return;
}

// Function: __do_global_ctors_aux @ 0x12290
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x122dc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

