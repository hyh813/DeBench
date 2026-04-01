// Decompiled by BinaryAI
// SHA256: c0ef99c012439f7943635ebecda90c0a77f5c85507db876bd7aa89b66e1ad395

// Forward declarations for template classes
template<typename T> struct Container;

// Forward declarations for base classes  
struct Base;
struct MiddleA;
struct MiddleB;

// Forward declarations for derived classes
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct LifecycleClass;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct test_cpp_exception_DerivedException;

// Forward declarations for RTTI types
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Forward declarations for Container instantiations
struct Container_int_;
struct Container_double_;

// Struct definitions
struct Base {
    void *vtable_ptr;
};

struct Derived {
    void *vtable_ptr;
    int multiplier;
};

struct MultiDerived {
    void *vtable_ptr;
    int value_a;
    int value_b;
};

struct DiamondDerived {
    void *vtable_ptr;
    int value;
};

struct MiddleA {
    void *vtable_ptr;
    int value;
};

struct MiddleB {
    void *vtable_ptr;
    int value;
};

struct LifecycleClass {
    int instance_count;
};

struct RTTIDerivedA {
    void *vtable_ptr;
};

struct RTTIDerivedB {
    void *vtable_ptr;
};

struct test_cpp_exception_DerivedException {
    int value;
};

// Constructor/destructor vtable call function
void FUN_000111c0(void *obj, int offset)
{
    // This calls the destructor through vtable
    (*(void(**)(void))(*(void **)((char *)obj + offset)))();
}

// Type definitions for template instantiations
typedef Container<int> Container_int;
typedef Container<double> Container_double;

// Template class definitions
template<typename T>
struct Container {
    void *vtable_ptr;
    // Simplified - actual implementation would have more members
};

// Container<int> type alias
typedef Container<int> *Container_int_;

// Container<double> type alias  
typedef Container<double> *Container_double_;

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

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void *vtable_ptr)
{
 void (**vfunc)(void) = (void (**)(void))vtable_ptr;
 (*vfunc)();
 return;
}

// Function: call_vtable_entry @ 0x11150 (alternate)
void call_vtable_entry(void *vtable_ptr)
{
 void (**vfunc)(void) = (void (**)(void))vtable_ptr;
 (*vfunc)();
 return;
}

// Function: FUN_00011160 @ 0x11160
void *FUN_00011160(void *obj)
{
 void *(**vfunc)(void) = (void (**)(void))((char *)obj + 0xc);
 return (*vfunc)();
}

// Function: FUN_00011170 @ 0x11170
void *FUN_00011170(void *obj)
{
 void *(**vfunc)(void) = (void (**)(void))((char *)obj + 0x10);
 return (*vfunc)();
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(char *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x14)))();
 return;
}

// Function: FUN_00011190 @ 0x11190
void *FUN_00011190(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x18)))();
 return unaff_EBX;
}

// Function: FUN_000111a0 @ 0x111a0
void *FUN_000111a0(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x1c)))();
 return unaff_EBX;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x20)))();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x24)))();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
void FUN_000111d0(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x28)))();
 return;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x2c)))();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x30)))();
 return;
}

// Function: FUN_00011200 @ 0x11200
void *FUN_00011200(void *unaff_EBX)
{
 return (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x34)))();
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x38)))();
 return;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x3c)))();
 return;
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x40)))();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x44)))();
 return;
}

// Function: FUN_00011250 @ 0x11250
void *FUN_00011250(void *unaff_EBX)
{
 return (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x48)))();
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(void *unaff_EBX)
{
 (*(void(**)(void))(*(void **)((char *)unaff_EBX + 0x4c)))();
 return;
}

// Function: test_cpp_exception @ 0x11270
int test_cpp_exception(void)
{
 int *piVar1;
 unsigned int uVar2;
 int iVar3;
 unsigned int **ppuVar4;
 char *puVar5;
 int iVar6;
 unsigned long long uVar7;
 unsigned int auStack_80 [13];
 unsigned int auStack_4c [3];
 unsigned int uStack_40;
 unsigned int *puStack_3c;
 char *puStack_38;
 unsigned int uStack_34;
 unsigned int local_24;
 int local_20;
 puStack_3c = (unsigned int *)0x4;
 uStack_40 = 0x11291;
 (void)FUN_00011190((void*)0x4);
 puStack_3c = (unsigned int *)0x4;
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char*)&int::typeinfo;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x112a8;
 uVar7 = FUN_00011250();
 if ((int)((ulonglong)uVar7 >> 0x20) == 1) {
 auStack_4c[0] = (int)uVar7;
 piVar1 = (int *)FUN_00011180((char*)puStack_3c);
 local_20 = *piVar1;
 uStack_40 = 0x112d4;
 uVar7 = FUN_00011210(puStack_3c);
 local_24 = (unsigned int)((ulonglong)uVar7 >> 0x20);
 uStack_40 = 0x112e4;
 FUN_00011240(puStack_3c);
 uVar7 = CONCAT44(local_24,(int)uVar7);
 }
 else {
 local_20 = 0;
 }
 if ((int)((ulonglong)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260(puStack_3c);
 }
 puVar5 = (char *)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar7;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180((char*)puStack_3c);
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1130c;
 FUN_00011240(puStack_3c);
 *(unsigned int *)((int)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11318;
 uVar2 = (unsigned int)FUN_00011190((void*)puStack_3c);
 *(unsigned int *)((int)ppuVar4 + -8) = 0;
 *(unsigned int **)((int)ppuVar4 + -0xc) =
 (unsigned int*)&test_cpp_exception()::DerivedException::typeinfo;
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1132a;
 uVar7 = FUN_00011250(puStack_3c);
 iVar3 = (int)((ulonglong)uVar7 >> 0x20);
 uVar2 = (unsigned int)uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180((char*)puStack_3c);
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240(puStack_3c);
 return iVar6 + 200;
 }
 puVar5 = (char *)((int)ppuVar4 + -0x20);
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11343;
 uVar2 = (unsigned int)FUN_00011260(puStack_3c);
 }
 *(unsigned int *)(puVar5 + -0x10) = uVar2;
 *(unsigned int *)(puVar5 + -0x14) = 0x11351;
 FUN_00011180((char*)puStack_3c);
 *(unsigned int *)(puVar5 + -0x14) = 0x11356;
 FUN_00011240(puStack_3c);
 return iVar6 + 100;
}

// Function: main @ 0x11380
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 // These would be calls to register initialization - using empty stubs
 return;
}

// Function: _start @ 0x113e0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 FUN_000111e0(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x1140c
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x11410
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x11420
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11460
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x114b0
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2b5b) == '\0') {
 if (*(int *)(unaff_EDI + 0x2b2b) != 0) {
 FUN_00011150(*(unsigned int *)(unaff_EDI + 0x2b47));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2b5f);
 while (uVar1 < ((unaff_EDI + 0x297f) - (unaff_EDI + 0x297b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2b5f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x297b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2b5f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2b5b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11549
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1154d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11560
int test_cpp_member_func(void)
{
 int iVar1;
 int in_GS_OFFSET;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned short local_14;
 char local_12;
 char local_11;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1156c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_30 = 0x74736554;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_12 = 0;
 local_11 = 0;
 FUN_000111a0(&local_30);
 iVar1 = 0;
 (void)uStack_8;
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x125c;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_constructor @ 0x11600
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x11620
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x11630
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x11640
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x11650
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11660
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11670
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
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)ROUND(dVar2) + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_template_class @ 0x11720
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11730
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x11740
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11750
int test_cpp_rtti(void)
{
 int iVar1;
 char *pcVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 uint uVar7;
 uVar7 = 10;
 piVar3 = (int *)FUN_00011170(4);
 *piVar3 = (int)&PTR__RTTIDerivedA_00013e48;
 piVar4 = (int *)FUN_00011170(4);
 *piVar4 = (int)&PTR__RTTIDerivedB_00013e5c;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if ((pcVar2 != "12RTTIDerivedA") && (uVar7 = 0, *pcVar2 != '*')) {
 iVar5 = FUN_000111d0(pcVar2,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar5 == 0) & 10;
 }
 iVar6 = FUN_00011200(piVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = uVar7 + 0x14;
 if (iVar6 != 0) {
 iVar5 = uVar7 + 0x78;
 }
 iVar6 = FUN_00011200(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
 iVar6 = FUN_000111a0(pcVar2 + (*pcVar2 == '*'));
 (**(void **)(iVar1 + 4))(piVar3);
 (**(void **)(*piVar4 + 4))(piVar4);
 return iVar5 + iVar6;
}

// Function: test_cpp_oo_features @ 0x11880
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 unsigned int local_30;
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned short local_14;
 char local_12;
 char local_11;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1188a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011220(&DAT_00012018);
 local_12 = 0;
 local_14 = 0;
 local_30 = 0x74736554;
 local_2c = 0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_11 = 0;
 iVar1 = FUN_000111a0(&local_30);
 FUN_00011160(1,&DAT_0001203c,iVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 FUN_00011160(1,&DAT_0001205a,uVar2);
 FUN_00011160(1,&DAT_00012076,0x2a);
 FUN_00011160(1,&DAT_00012092,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 FUN_00011160(1,&DAT_000120ae,uVar2);
 FUN_00011160(1,&DAT_000120cb,0x16);
 uVar2 = test_cpp_template_func();
 FUN_00011160(1,&DAT_000120e7,uVar2);
 FUN_00011160(1,&DAT_00012103,0x10);
 FUN_00011160(1,&DAT_0001211f,0x55);
 uVar2 = test_cpp_exception();
 FUN_00011160(1,&DAT_0001213b,uVar2);
 uVar2 = test_cpp_smart_ptr();
 FUN_00011160(1,&DAT_00012158,uVar2);
 uVar2 = test_cpp_rtti();
 FUN_00011160(1,&DAT_00012175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Forward declarations for member functions
// (needed to resolve before struct definitions are fully known)

// Function: Base::virtual_func @ 0x11a30
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11a40
char * Base::getName(void)
{
 return &DAT_00012008;
}

// Function: Base::~Base @ 0x11a60
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x11a70
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x11a90
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11ab0
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11ac0
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11ad0
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11ae0
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11b00
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11b20
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11b40
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11b60
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11b80
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11ba0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x11bc0
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11bd0
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11be0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11bf0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11c00
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11c10
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11c20
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11c30
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11c40
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x11c50
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x11c60
void __thiscall Base::_Base(Base *this)
{
 FUN_000111c0(this,4);
 return;
}

// Function: Derived::~Derived @ 0x11c90
void __thiscall Derived::_Derived(Derived *this)
{
 FUN_000111c0(this,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11cc0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 FUN_000111c0(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11cf0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 FUN_000111c0(this + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11d20
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 FUN_000111c0(this,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11d50
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 FUN_000111c0(this,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11d80
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 FUN_000111c0(this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11db0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 FUN_000111c0(this + *(int *)(*(int *)this + -0x10),0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11de0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 FUN_000111c0(this + -8,0x18);
 return;
}

// Function: template_max<int> @ 0x11e10
int template_max(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11e30
double template_max(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11e50
void template_swap(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11e70
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11e80
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11ea0
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11ed0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11ee0
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11ef0
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

// Function: Container<double>::get @ 0x11f20
longdouble __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return (longdouble)*(double *)(this + param_1 * 8);
 }
 return (longdouble)0;
}

// Function: Container<double>::getSize @ 0x11f50
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11f5c
void __x86_get_pc_thunk_ax(void)
{
 return;
}

// Function: __x86.get_pc_thunk.si @ 0x11f60
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11f70
void __stack_chk_fail_local(void)
{
 FUN_000111f0();
 return;
}

// Function: __do_global_ctors_aux @ 0x11f90
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11fdc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

