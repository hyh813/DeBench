// Decompiled by BinaryAI
// SHA256: 462c52223355b8655fa69c7ca08e258b68986be89a14a9fb5c68f311ae7d7096

// Typedefs for template classes
typedef unsigned int Container_int_ [11];
typedef unsigned int Container_double_ [21];

// Forward declarations for classes
struct Base { int vtable[4]; };
struct Derived { int vtable[4]; int value; };
struct MultiDerived { int vtable[4]; };
struct VirtualBase { int vtable[4]; };
struct MiddleA { int vtable[4]; };
struct MiddleB { int vtable[4]; };
struct DiamondDerived { int vtable[4]; };
struct RTTIDerivedA { int vtable[4]; };
struct RTTIDerivedB { int vtable[4]; };

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
 (*(void (*)(void))0x0)();
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void)
{
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(void *param_1, void *param_2, void *param_3)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0xc))();
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x10))();
 return;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x14))();
}

// Function: FUN_000111c0 @ 0x111c0
void *FUN_000111c0(void)
{
 int unaff_EBX;
 void *result = (**(void (**)(void))(unaff_EBX + 0x18))();
 return result;
}

// Function: FUN_000111d0 @ 0x111d0
void FUN_000111d0(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x1c))();
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void *param_1, void *param_2, void *param_3)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x20))();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x24))();
 return;
}

// Function: FUN_00011200 @ 0x11200
void FUN_00011200(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x28))();
 return;
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x2c))();
 return;
}

// Function: FUN_00011220 @ 0x11220
void *FUN_00011220(void)
{
 int unaff_EBX;
 void *result = (**(void *(**)(void))(unaff_EBX + 0x30))();
 return result;
}

// Function: FUN_00011230 @ 0x11230
void *FUN_00011230(void)
{
 int unaff_EBX;
 void *result = (**(void *(**)(void))(unaff_EBX + 0x34))();
 return result;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x38))();
 return;
}

// Function: FUN_00011250 @ 0x11250
void FUN_00011250(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x3c))();
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x40))();
}

// Function: FUN_00011270 @ 0x11270
void FUN_00011270(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x44))();
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x48))();
}

// Function: FUN_00011290 @ 0x11290
void FUN_00011290(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x4c))();
}

// Function: FUN_000112a0 @ 0x112a0
void FUN_000112a0(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x50))();
}

// Function: FUN_000112b0 @ 0x112b0
unsigned long long FUN_000112b0(void)
{
 int unaff_EBX;
 unsigned long long result = (**(unsigned long long(**)(void))(unaff_EBX + 0x54))();
 return result;
}

// Function: FUN_000112c0 @ 0x112c0
void FUN_000112c0(void)
{
 int unaff_EBX;
 (**(void (**)(void))(unaff_EBX + 0x58))();
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
 puStack_3c = (unsigned int *)FUN_000111c0();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = &int::typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x11308;
 uVar8 = FUN_000112b0();
 iVar7 = 0;
 if ((int)((ulonglong)uVar8 >> 0x20) == 1) {
 uStack_50 = 0x1131e;
 local_4c = (int)uVar8;
 piVar1 = (int *)FUN_000111b0();
 iVar7 = *piVar1;
 uStack_40 = 0x11328;
 uVar8 = FUN_00011270();
 local_24 = (unsigned int)((ulonglong)uVar8 >> 0x20);
 local_20 = (unsigned int)uVar8;
 uStack_40 = 0x11339;
 FUN_000112a0();
 uVar8 = CONCAT44(local_24,local_20);
 }
 uVar2 = (unsigned int)uVar8;
 if ((int)((ulonglong)uVar8 >> 0x20) == 1) {
 ppuVar4 = (unsigned int **)&local_4c;
 puVar5 = &local_4c;
 uStack_50 = 0x1134d;
 local_4c = uVar2;
 piVar1 = (int *)FUN_000111b0();
 iVar7 = iVar7 + *piVar1 * 2;
 uStack_50 = 0x11358;
 FUN_000112a0();
 local_4c = 1;
 uStack_50 = 0x11364;
 local_4c = FUN_000111c0();
 ppuStack_48 = &test_cpp_exception()::DerivedException::typeinfo;
 uStack_44 = 0;
 uStack_50 = 0x11376;
 uVar8 = FUN_000112b0();
 iVar3 = (int)((ulonglong)uVar8 >> 0x20);
 uVar2 = (unsigned int)uVar8;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 iVar7 = iVar7 + 200;
 puVar6 = auStack_5c;
 auStack_5c[0] = uVar2;
 FUN_000111b0();
 goto LAB_000113b0;
 }
 goto LAB_00011384;
 }
 }
 else {
LAB_00011384:
 puVar5 = (unsigned int *)((int)ppuVar4 + -0x10);
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1138f;
 uVar2 = FUN_000112c0();
 }
 iVar7 = iVar7 + 100;
 puVar6 = (unsigned int *)((int)puVar5 + -0x10);
 *(unsigned int *)((int)puVar5 + -0x10) = uVar2;
 *(unsigned int *)((int)puVar5 + -0x14) = 0x1139d;
 FUN_000111b0();
LAB_000113b0:
 *(unsigned int *)((int)puVar6 + -4) = 0x113b5;
 FUN_000112a0();
 return iVar7;
}

// Function: main @ 0x113c2
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113d5
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011290(&std::__ioinit);
 FUN_000111e0(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11420
void processEntry _start(unsigned int param_1,unsigned int param_2)
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
 uint uVar1;
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
 iVar1 = template_max_int_ (3,7);
 dVar2 = template_max_double_(2.5,1.5);
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
 Container_int_::push((Container_int_ *)local_3c,0x14);
 Container_int_::push((Container_int_ *)local_3c,0x1e);
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
 uint uVar5;
 int iVar6;
 char *pcVar7;
 pointer_____offset_0x8___ *ppuVar8;
 uVar5 = 10;
 piVar2 = (int *)FUN_000111a0(4);
 *piVar2 = (int)&PTR__RTTIDerivedA_00015dd0;
 piVar3 = (int *)FUN_000111a0(4);
 *piVar3 = (int)&PTR__RTTIDerivedB_00015de4;
 iVar1 = *piVar2;
 pcVar7 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((pcVar7 != "12RTTIDerivedA") && (uVar5 = 0, *pcVar7 != '*')) {
 iVar4 = FUN_00011200(pcVar7,"12RTTIDerivedA",0,0);
 uVar5 = -(uint)(iVar4 == 0) & 10;
 }
 iVar6 = uVar5 + 0x14;
 ppuVar8 = &RTTIBase::typeinfo;
 iVar4 = FUN_00011250(piVar2,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0,&RTTIBase::typeinfo);
 if (iVar4 != 0) {
 iVar6 = uVar5 + 0x78;
 }
 iVar4 = FUN_00011250(piVar3,ppuVar8,&RTTIDerivedB::typeinfo,0);
 if (iVar4 != 0) {
 iVar6 = iVar6 + 200;
 }
 if (*pcVar7 == '*') {
 pcVar7 = pcVar7 + 1;
 }
 iVar4 = FUN_000111d0(pcVar7);
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
 *local_28 = 200;
 local_24 = (unsigned int *)FUN_00011220(0x14);
 *local_24 = 1;
 local_24[1] = 2;
 local_24[2] = 3;
 local_24[3] = 4;
 local_24[4] = 5;
 std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 ((unique_ptr_int___std__default_delete_int____ *)&local_24);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_28);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_2c);
 if (local_20 != *(int *)(in_GS_OFFSET + 0x14)) {
 uVar1 = __stack_chk_fail_local();
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_28);
 std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_2c);
 FUN_000112c0(uVar1);
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
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_28);
 local_24 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_28);
 iVar2 = iVar2 + iVar1;
 DiamondDerived::_DiamondDerived((DiamondDerived *)local_38);
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
 uVar2 = test_cpp_virtual_func();
 FUN_00011190(1,&DAT_00013078,uVar2);
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
 uVar1 = test_cpp_smart_ptr();
 FUN_00011190(1,&DAT_0001315a,uVar1,extraout_ECX_00);
 uVar2 = test_cpp_rtti();
 FUN_00011190(1,&DAT_00013177,uVar2);
 return;
}

// Function: Base::virtual_func @ 0x11b66
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11b74
char * Base::getName(void)
{
 return &DAT_00013008;
}

// Function: Base::~Base @ 0x11b8a
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x11b90
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x11ba4
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11bba
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11bc4
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11bce
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x11bd8
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11be2
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: MiddleA::func @ 0x11be8
int MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11c02
void __thiscall MiddleA::func(MiddleA *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: MiddleB::func @ 0x11c16
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11c30
void __thiscall MiddleB::func(MiddleB *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x11c44
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11c5e
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + *(int *)(*(int *)this + -0xc));
 return;
}

// Function: DiamondDerived::func @ 0x11c71
void __thiscall DiamondDerived::func(DiamondDerived *this)
{
 func(this + -8);
 return;
}

// Function: MiddleA::~MiddleA @ 0x11c7c
void __thiscall MiddleA::~_MiddleA(MiddleA *this)
{
 *(unsigned int *)this = 0x15c94;
 *(unsigned int *)(this + 8) = 0x15cb0;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11ca1
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this + -0x10);
 *(unsigned int *)(this + iVar1) = 0x15c94;
 *(unsigned int *)((int)(this + iVar1) + 8) = 0x15cb0;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11ccc
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 *(unsigned int *)this = 0x15cd0;
 *(unsigned int *)(this + 8) = 0x15cec;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11cf1
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this + -0x10);
 *(unsigned int *)(this + iVar1) = 0x15cd0;
 *(unsigned int *)((int)(this + iVar1) + 8) = 0x15cec;
 return;
}

// Function: RTTIDerivedA::getType @ 0x11d1c
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11d26
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d30
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d36
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d3c
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d41
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x11d46
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x11d4c
void __thiscall Base::_Base(Base *this)
{
 FUN_000111f0(this,4);
 return;
}

// Function: Derived::~Derived @ 0x11d74
void __thiscall Derived::_Derived(Derived *this)
{
 FUN_000111f0(this,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d9c
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 FUN_000111f0(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11dc4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 _MultiDerived(this + -8);
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x11dd0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 FUN_000111f0(this,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11df8
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 FUN_000111f0(this,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11e20
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 FUN_000111f0(this,4);
 return;
}

// Function: MiddleA::~MiddleA @ 0x11e48
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 *(unsigned int *)this = 0x15c94;
 *(unsigned int *)(this + 8) = 0x15cb0;
 FUN_000111f0(this,0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x11e7f
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB::~MiddleB @ 0x11e92
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 *(unsigned int *)this = 0x15cd0;
 *(unsigned int *)(this + 8) = 0x15cec;
 FUN_000111f0(this,0x10);
 return;
}

// Function: MiddleB::~MiddleB @ 0x11ec9
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleA::~MiddleA @ 0x11edc
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar1 = 0x15c94;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)this = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cb0;
 iVar1 = 8;
 }
 *(int *)(this + iVar1) = iVar2;
 return;
}

// Function: MiddleA::~MiddleA @ 0x11f26
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 _MiddleA(this);
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f42
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar1 = 0x15cd0;
 if (in_stack_00000008 == 0) {
 iVar1 = *in_stack_0000000c;
 }
 *(int *)this = iVar1;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[1];
 iVar1 = *(int *)(iVar1 + -0xc);
 }
 else {
 iVar2 = 0x15cec;
 iVar1 = 8;
 }
 *(int *)(this + iVar1) = iVar2;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f8c
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 _MiddleB(this);
 return;
}

// Function: template_max<int> @ 0x11fa8
int template_max_int_(int param_1,int param_2)
{
 if ((param_1) < (param_2)) {
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

// Function: Container<int>::Container @ 0x11fee
void __thiscall Container_int_::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x12002
void __thiscall Container_int_::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x12022
unsigned int __thiscall Container_int_::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x12040
unsigned int __thiscall Container_int_::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x12050
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x12064
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x12088
longdouble __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 longdouble lVar1;
 lVar1 = (longdouble)0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 lVar1 = (longdouble)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x120a8
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x120b8
void __thiscall
std::unique_ptr<int,std::default_delete<int>>::_unique_ptr
 (unique_ptr_int_std__default_delete_int__ *this)
{
 if (*(int *)this != 0) {
 FUN_000111f0(*(int *)this,4);
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x120e8
void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::_unique_ptr
 (unique_ptr_int___std__default_delete_int____ *this)
{
 if (*(int *)this != 0) {
 FUN_00011260(*(int *)this);
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12116
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 int iVar1;
 int iVar2;
 int in_stack_00000008;
 int *in_stack_0000000c;
 iVar2 = 0x15d88;
 if (in_stack_00000008 == 0) {
 iVar2 = *in_stack_0000000c;
 }
 *(int *)this = iVar2;
 if (in_stack_00000008 == 0) {
 iVar1 = in_stack_0000000c[5];
 iVar2 = *(int *)(iVar2 + -0xc);
 }
 else {
 iVar1 = 0x15dbc;
 iVar2 = 0x10;
 }
 *(int *)(this + iVar2) = iVar1;
 iVar2 = 0x15da0;
 if (in_stack_00000008 == 0) {
 iVar2 = in_stack_0000000c[6];
 }
 *(int *)(this + 8) = iVar2;
 MiddleB::_MiddleB((MiddleB *)(this + 8));
 MiddleA::_MiddleA((MiddleA *)this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121b0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121cb
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121d6
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x121ea
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
 FUN_000111f0(this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1221e
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + -8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12229
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1223c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 _DiamondDerived(this);
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

