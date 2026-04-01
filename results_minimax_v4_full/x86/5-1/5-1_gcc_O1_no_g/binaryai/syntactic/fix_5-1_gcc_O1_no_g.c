// Decompiled by BinaryAI
// SHA256: 15e496a6fbd5f53b610f503487ec0ea0f762d21c35ef20c0efe61b70166fb797

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

// Function: FUN_00011170 @ 0x11170
void * FUN_00011170(unsigned char *ptr)
{
 return (*(void *(*)(unsigned char *))((unsigned char *)ptr + 0x5c))((unsigned char *)ptr);
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0xc);
 func();
 return;
}

// Function: FUN_00011190 @ 0x11190
void FUN_00011190(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x10);
 func();
 return;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x14);
 func();
 return;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x18);
 func();
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x1c);
 func();
 return;
}

// Function: FUN_000111d0 @ 0x111d0
void FUN_000111d0(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x20);
 func();
 return;
}

// Function: FUN_000111e0 @ 0x111e0
void FUN_000111e0(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x24);
 func();
 return;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x28);
 func();
 return;
}

// Function: FUN_00011200 @ 0x11200
void FUN_00011200(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x2c);
 func();
 return;
}

// Function: FUN_00011210 @ 0x11210
void * FUN_00011210(unsigned char *ptr)
{
 return (*(void *(*)(unsigned char *))(ptr + 0x30))(ptr + 0x30);
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x34);
 func();
 return;
}

// Function: FUN_00011230 @ 0x11230
int FUN_00011230(unsigned char *ptr, void *param1, void *param2, void *param3)
{
 return (*(int (*)(unsigned char *, void *, void *, void *))(ptr + 0x38))(ptr, param1, param2, param3);
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x3c);
 func();
 return;
}

// Function: FUN_00011250 @ 0x11250
void FUN_00011250(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x40);
 func();
 return;
}

// Function: FUN_00011260 @ 0x11260
void FUN_00011260(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x44);
 func();
 return;
}

// Function: FUN_00011270 @ 0x11270
void FUN_00011270(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x48);
 func();
 return;
}

// Function: FUN_00011280 @ 0x11280
void FUN_00011280(unsigned char *ptr)
{
 void (*func)(void) = *(void (**)(void))(ptr + 0x4c);
 func();
 return;
}

// Function: FUN_00011290 @ 0x11290
unsigned long long FUN_00011290(void *ptr)
{
 return (*(unsigned long long (*)(void *))((unsigned char *)ptr + 0x50))(ptr);
}

// Function: FUN_000112a0 @ 0x112a0
unsigned long long FUN_000112a0(void *ptr)
{
 return (*(unsigned long long (*)(void *))((unsigned char *)ptr + 0x54))(ptr);
}

// Function: _start @ 0x112b0
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011200((unsigned char *)main);
 (void)param_2;
 (void)auStack_4;
 (void)param_1;
 do {
 } while( true );
}

// Function: __i686.get_pc_thunk.bx @ 0x112dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x112e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x112f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11330
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11380
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x3c8b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3c5b) != 0) {
 FUN_00011170(*(unsigned int *)(unaff_EDI + 0x3c77));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3c8f);
 while (uVar1 < ((unaff_EDI + 0x393b) - (unaff_EDI + 0x3937) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3c8f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x3937 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3c8f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3c8b) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11419
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1141d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Forward declarations for template/classes
struct MultiDerived;
struct Base;
struct DiamondDerived;
struct Derived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// Template/Class type aliases - using proper struct definitions
typedef struct Container_int { int data[10]; int size; } Container_int;
typedef struct Container_int_ { int data[10]; int size; } Container_int_;
typedef struct Container_double { double data[10]; int size; } Container_double;
typedef struct Container_double_ { double data[10]; int size; } Container_double_;

// Struct definitions for C++ classes
struct Base {
    void *vtable;
};

struct Derived {
    void *vtable;
    int multiplier;
};

struct MultiDerived {
    void *vtableA;
    void *vtableB;
};

struct DiamondDerived {
    void *vtable;
    int value;
};

struct RTTIDerivedA {
    void *vtable;
};

struct RTTIDerivedB {
    void *vtable;
};

struct LifecycleClass {
    void *vtable;
    int instance_count;
};

// Function: test_cpp_member_func @ 0x11421
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
 (void)FUN_000111c0(&local_30);
 iVar1 = 0x125c;
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1;
 }
 __stack_chk_fail_local();
}

// Global instance count for LifecycleClass
int LifecycleClass_instance_count = 0;

// Function: test_cpp_constructor @ 0x114b5
int test_cpp_constructor(void)
{
 int iVar1;
 int iVar2;
 iVar1 = FUN_00011210(0x14);
 *(unsigned int *)(iVar1 + 4) = 10;
 *(unsigned int *)(iVar1 + 8) = 0x14;
 *(unsigned int *)(iVar1 + 0xc) = 0x1e;
 *(unsigned int *)(iVar1 + 0x10) = 0x28;
 iVar2 = LifecycleClass_instance_count + 0x15;
 LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
 FUN_00011240(iVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar2;
}

// Function: call_virtual_func @ 0x11523
// Virtual function pointer type
typedef void (*VirtualFuncPtr)(Base*, int);

// Virtual function table for testing
VirtualFuncPtr PTR_virtual_func_00014cd4;
VirtualFuncPtr PTR_virtual_func_00014cec;

void call_virtual_func(Base *param_1,int param_2)
{
 void (*func)(Base*, int) = *(void (**)(Base*, int))(*(void **)param_1);
 func(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1153b
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
 local_1c = &PTR_virtual_func_00014cd4;
 local_18 = &PTR_virtual_func_00014cec;
 local_14 = 3;
 iVar1 = call_virtual_func((Base *)&local_1c,5);
 iVar2 = call_virtual_func((Base *)&local_18,5);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar1 + 0x15 + iVar2;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_multiple_inheritance @ 0x115b1
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x115bb
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_18;
 unsigned int local_14;
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 local_18 = 0x14dc0;
 local_14 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_18);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail_local();
}

// Function: test_cpp_operator_overload @ 0x11634
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1163e
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

// Function: test_cpp_template_class @ 0x116e2
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x116ec
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x116f6
int test_cpp_exception(void)
{
 unsigned int uVar1;
 int *piVar2;
 int iVar3;
 char **ppuVar4;
 char **ppuVar5;
 char *puVar6;
 int iVar7;
 unsigned long long uVar8;
 char *apuStack_60 [11];
 unsigned int uStack_34;
 unsigned int local_24;
 int local_20;
 apuStack_60[9] = (char *)0x4;
 apuStack_60[9] = (char *)FUN_000111b0();
 *(unsigned int *)apuStack_60[9] = 0x2a;
 uStack_34 = 0;
 apuStack_60[10] = &int::typeinfo;
 ppuVar5 = apuStack_60 + 9;
 uVar8 = FUN_00011290();
 uVar1 = (unsigned int)uVar8;
 if ((int)((ulonglong)uVar8 >> 0x20) == 1) goto LAB_00011750;
 local_20 = 0;
 ppuVar4 = apuStack_60 + 9;
 for (; (int)((ulonglong)uVar8 >> 0x20) != 1; uVar8 = CONCAT44(local_24,(int)uVar8)) {
 ppuVar5 = (char **)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar8;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11750;
 uVar1 = FUN_000112a0();
LAB_00011750:
 *(unsigned int *)((int)ppuVar5 + -0x10) = uVar1;
 *(unsigned int *)((int)ppuVar5 + -0x14) = 0x1175b;
 piVar2 = (int *)FUN_000111a0();
 local_20 = *piVar2;
 *(unsigned int *)((int)ppuVar5 + -4) = 0x11768;
 uVar8 = FUN_00011250();
 local_24 = (unsigned int)((ulonglong)uVar8 >> 0x20);
 *(unsigned int *)((int)ppuVar5 + -4) = 0x11778;
 FUN_00011280();
 ppuVar4 = ppuVar5;
 }
 puVar6 = (char *)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar8;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11788;
 piVar2 = (int *)FUN_000111a0();
 iVar7 = *piVar2 * 2 + local_20;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11794;
 FUN_00011280();
 *(unsigned int *)((int)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x117a0;
 uVar1 = FUN_000111b0();
 *(unsigned int *)((int)ppuVar4 + -8) = 0;
 *(pointer_____offset_0x8___ **)((int)ppuVar4 + -0xc) =
 &test_cpp_exception()::DerivedException::typeinfo;
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x117b2;
 uVar8 = FUN_00011290();
 iVar3 = (int)((ulonglong)uVar8 >> 0x20);
 uVar1 = (unsigned int)uVar8;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar1;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x117f6;
 FUN_000111a0();
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11801;
 FUN_00011280();
 return iVar7 + 200;
 }
 puVar6 = (char *)((int)ppuVar4 + -0x20);
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar1;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x117cb;
 uVar1 = FUN_000112a0();
 }
 *(unsigned int *)(puVar6 + -0x10) = uVar1;
 *(unsigned int *)(puVar6 + -0x14) = 0x117d6;
 FUN_000111a0();
 *(unsigned int *)(puVar6 + -0x14) = 0x117de;
 FUN_00011280();
 return iVar7 + 100;
}

// Function: test_cpp_smart_ptr @ 0x11806
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11810
int test_cpp_rtti(void)
{
 int iVar1;
 char *pcVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 uint uVar7;
 piVar3 = (int *)FUN_00011190(4);
 *piVar3 = (int)&PTR__RTTIDerivedA_00014dd4;
 piVar4 = (int *)FUN_00011190(4);
 *piVar4 = (int)&PTR__RTTIDerivedB_00014de8;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
 uVar7 = 10;
 if ((pcVar2 != "12RTTIDerivedA") && (uVar7 = 0, *pcVar2 != '*')) {
 iVar5 = FUN_000111f0(pcVar2,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar5 == 0) & 10;
 }
 iVar6 = FUN_00011230(piVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = uVar7 + 0x14;
 if (iVar6 != 0) {
 iVar5 = uVar7 + 0x78;
 }
 iVar6 = FUN_00011230(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 200;
 }
 iVar6 = FUN_000111c0(pcVar2 + (*pcVar2 == '*'));
 (**(void **)(iVar1 + 4))(piVar3);
 (**(void **)(*piVar4 + 4))(piVar4);
 return iVar5 + iVar6;
}

// Function: test_cpp_oo_features @ 0x1193a
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 FUN_00011260(&DAT_00012018);
 uVar1 = test_cpp_member_func();
 FUN_00011180(1,&DAT_0001203c,uVar1);
 uVar1 = test_cpp_constructor();
 FUN_00011180(1,&DAT_0001205a,uVar1);
 uVar1 = test_cpp_virtual_func();
 FUN_00011180(1,&DAT_00012076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 FUN_00011180(1,&DAT_00012092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 FUN_00011180(1,&DAT_000120ae,uVar1);
 FUN_00011180(1,&DAT_000120cb,0x16);
 uVar1 = test_cpp_template_func();
 FUN_00011180(1,&DAT_000120e7,uVar1);
 FUN_00011180(1,&DAT_00012103,0x10);
 FUN_00011180(1,&DAT_0001211f,0x55);
 uVar1 = test_cpp_exception();
 FUN_00011180(1,&DAT_0001213b,uVar1);
 uVar1 = test_cpp_smart_ptr();
 FUN_00011180(1,&DAT_00012158,uVar1);
 uVar1 = test_cpp_rtti();
 FUN_00011180(1,&DAT_00012175,uVar1);
 return;
}

// Function: main @ 0x11a75
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x11a8b
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011270(&std::__ioinit);
 FUN_000111d0(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x11ac8
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11ad4
char * Base::getName(void)
{
 return &DAT_00012008;
}

// Function: Base::~Base @ 0x11aea
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x11af0
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x11b02
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11b18
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11b22
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11b2c
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11b36
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11b4d
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11b6a
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11b81
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11b9e
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11bb5
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11bd1
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x11bea
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11bf4
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11bfe
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11c04
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11c0a
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11c0f
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11c14
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11c1a
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11c1f
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x11c24
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x11c2a
void __thiscall Base::_Base(Base *this)
{
 FUN_000111e0(this,4);
 return;
}

// Function: Derived::~Derived @ 0x11c4e
void __thiscall Derived::_Derived(Derived *this)
{
 FUN_000111e0(this,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11c72
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 FUN_000111e0(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11c95
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 FUN_000111e0(this + -8,0x10);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11cbc
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 FUN_000111e0(this,4);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11ce0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 FUN_000111e0(this,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11d04
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 FUN_000111e0(this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11d27
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 FUN_000111e0(this + *(int *)(*(int *)this + -0x10),0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11d50
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 FUN_000111e0(this + -8,0x18);
 return;
}

// Function: template_max<int> @ 0x11d77
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11d89
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11d9c
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11db4
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11dc4
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

// Function: Container<int>::get @ 0x11de2
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11e02
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11e0e
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11e1e
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

// Function: Container<double>::get @ 0x11e40
longdouble __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if (param_1 < 0) {
 return (longdouble)0;
 }
 if (*(int *)(this + 0x50) == param_1 || *(int *)(this + 0x50) < param_1) {
 return (longdouble)0;
 }
 return (longdouble)*(double *)(this + param_1 * 8);
}

// Function: Container<double>::getSize @ 0x11e60
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x11e6c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.si @ 0x11e70
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x11e80
void __stack_chk_fail_local(void)
{
 FUN_00011220();
 return;
}

// Function: __do_global_ctors_aux @ 0x11ea0
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x11eec
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

