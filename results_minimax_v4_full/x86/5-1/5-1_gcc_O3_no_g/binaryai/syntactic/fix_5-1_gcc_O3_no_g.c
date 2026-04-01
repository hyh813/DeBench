// Decompiled by BinaryAI
// SHA256: d4488080025bddd3bb2ae89ddcee784921de9b9b481cbaf3bfa0cb6650c4c03e

// Forward declarations
class Base;
class Derived;
class MiddleA;
class MiddleB;
class MultiDerived;
class DiamondDerived;
class DerivedException;
class RTTIBase;
class RTTIDerivedA;
class RTTIDerivedB;
class LifecycleClass;
template<typename T> class Container;
typedef Container<int> Container_int_;
typedef Container<double> Container_double_;

// Class definitions for RTTI
class RTTIBase {
public:
    virtual ~RTTIBase() {}
    virtual unsigned int getType() = 0;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual unsigned int getType() override;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual unsigned int getType() override;
};

// Lifecycle class for constructor testing
class LifecycleClass {
public:
    static int instance_count;
    LifecycleClass() { instance_count++; }
    ~LifecycleClass() { instance_count--; }
};

int LifecycleClass::instance_count = 0;

// Class definitions for OO features
class Base {
public:
    virtual ~Base();
    virtual int virtual_func(int param_1);
    char* getName();
};

class Derived : public Base {
public:
    int multiplier;
    virtual ~Derived();
    virtual int virtual_func(int param_1) override;
    char* getName() override;
};

class MiddleA {
public:
    virtual ~MiddleA();
    virtual int func();
};

class MiddleB {
public:
    virtual ~MiddleB();
    virtual int func();
};

class MultiDerived : public MiddleA, public MiddleB {
public:
    virtual ~MultiDerived();
    virtual unsigned int funcA();
    virtual unsigned int funcB() override;
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    int value;
    virtual ~DiamondDerived();
    virtual int func() override;
};

class DerivedException {
public:
    static const char* typeinfo_name;
};

// Typeinfo structures
namespace {
    const char typeinfo_name_Base[] = "Base";
    const char typeinfo_name_Derived[] = "Derived";
    const char typeinfo_name_DerivedException[] = "DerivedException";
    
    // Define typeinfo_node_int for the exception handling code
    struct typeinfo_node { const char *name; };
    typeinfo_node typeinfo_node_int = { "int" };
}

// Template class definition
template<typename T> class Container {
public:
    T data[10];
    unsigned int size;
    Container() : size(0) {}
    void push(T param_1);
    T get(int param_1);
    unsigned int getSize();
};

template<typename T>
void Container<T>::push(T param_1) {
    if (size < 10) {
        data[size++] = param_1;
    }
}

template<typename T>
T Container<T>::get(int param_1) {
    if (param_1 >= 0 && param_1 < (int)size) {
        return data[param_1];
    }
    return T();
}

template<typename T>
unsigned int Container<T>::getSize() {
    return size;
}

typedef Container<int> Container_int_;
typedef Container<double> Container_double_;

// Typeinfo for int (placeholder - this is a runtime construct)
struct type_info_node { const char *name; };

// Forward declarations of member functions (needed for definitions outside class)
// Note: Actual declarations will be after class definitions

// Forward declarations for template class member functions
template<typename T> class Container;

// Exception handler structure (for exception handling)
struct ExceptionHandler {
    unsigned int *prev;
    unsigned int handler;
};

#define in_GS_OFFSET 0x14

// Function: _init @ 0x11000
int _init(void **ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
int FUN_00011030(void)
{
 // Empty function - was calling NULL
 return 0;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void *unaff_EBX)
{
 typedef void (*func_t)(void);
 func_t f = *(func_t *)((char *)unaff_EBX + 0x54);
 if (f) f();
 return;
}

// Function: FUN_00011160 @ 0x11160
void * FUN_00011160(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0xc)))();
}

// Function: FUN_00011170 @ 0x11170
void * FUN_00011170(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x10)))();
}

// Function: FUN_00011180 @ 0x11180
void * FUN_00011180(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x14)))();
}

// Function: FUN_00011190 @ 0x11190
void * FUN_00011190(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x18)))();
}

// Function: FUN_000111a0 @ 0x111a0
void * FUN_000111a0(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x1c)))();
}

// Function: FUN_000111b0 @ 0x111b0
void * FUN_000111b0(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x20)))();
}

// Function: FUN_000111c0 @ 0x111c0
void * FUN_000111c0(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x24)))();
}

// Function: FUN_000111d0 @ 0x111d0
void * FUN_000111d0(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x28)))();
}

// Function: FUN_000111e0 @ 0x111e0
void * FUN_000111e0(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x2c)))();
}

// Function: FUN_000111f0 @ 0x111f0
void * FUN_000111f0(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x30)))();
}

// Function: FUN_00011200 @ 0x11200
void * FUN_00011200(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x34)))();
}

// Function: FUN_00011210 @ 0x11210
void * FUN_00011210(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x38)))();
}

// Function: FUN_00011220 @ 0x11220
void * FUN_00011220(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x3c)))();
}

// Function: FUN_00011230 @ 0x11230
void * FUN_00011230(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x40)))();
}

// Function: FUN_00011240 @ 0x11240
void * FUN_00011240(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x44)))();
}

// Function: FUN_00011250 @ 0x11250
void * FUN_00011250(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x48)))();
}

// Function: FUN_00011260 @ 0x11260
void * FUN_00011260(void)
{
 int unaff_EBX;
 return (*(void *(*)(void))(*(void **)(unaff_EBX + 0x4c)))();
}

// Forward declarations of member functions - MOVED after class definitions

// Template function declarations
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

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
 puStack_3c = (unsigned int *)(long)FUN_00011190();
 *puStack_3c = 0x2a;
 uStack_34 = 0;
 puStack_38 = (char*)&typeinfo_node_int;
 ppuVar4 = &puStack_3c;
 uStack_40 = 0x112a8;
 uVar7 = FUN_00011250();
 if ((int)((ulonglong)uVar7 >> 0x20) == 1) {
 auStack_4c[0] = (int)uVar7;
 piVar1 = (int *)FUN_00011180();
 local_20 = *piVar1;
 uStack_40 = 0x112d4;
 uVar7 = FUN_00011210();
 local_24 = (unsigned int)((ulonglong)uVar7 >> 0x20);
 uStack_40 = 0x112e4;
 FUN_00011240();
 uVar7 = CONCAT44(local_24,(int)uVar7);
 }
 else {
 local_20 = 0;
 }
 if ((int)((ulonglong)uVar7 >> 0x20) != 1) {
 ppuVar4 = (unsigned int **)auStack_4c;
 auStack_4c[0] = (int)uVar7;
 FUN_00011260();
 }
 puVar5 = (char *)((int)ppuVar4 + -0x10);
 *(int *)((int)ppuVar4 + -0x10) = (int)uVar7;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11300;
 piVar1 = (int *)FUN_00011180();
 iVar6 = *piVar1 * 2 + local_20;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1130c;
 FUN_00011240();
 *(unsigned int *)((int)ppuVar4 + -0x10) = 1;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x11318;
 uVar2 = FUN_00011190();
 *(unsigned int *)((int)ppuVar4 + -8) = 0;
 *(pointer_____offset_0x8___ **)((int)ppuVar4 + -0xc) =
 &test_cpp_exception()::DerivedException::typeinfo;
 *(unsigned int *)((int)ppuVar4 + -0x10) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x14) = 0x1132a;
 uVar7 = FUN_00011250();
 iVar3 = (int)((ulonglong)uVar7 >> 0x20);
 uVar2 = (unsigned int)uVar7;
 if (iVar3 != 2) {
 if (iVar3 == 3) {
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x1136c;
 FUN_00011180();
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11371;
 FUN_00011240();
 return iVar6 + 200;
 }
 puVar5 = (char *)((int)ppuVar4 + -0x20);
 *(unsigned int *)((int)ppuVar4 + -0x20) = uVar2;
 *(unsigned int *)((int)ppuVar4 + -0x24) = 0x11343;
 uVar2 = FUN_00011260();
 }
 *(unsigned int *)(puVar5 + -0x10) = uVar2;
 *(unsigned int *)(puVar5 + -0x14) = 0x11351;
 FUN_00011180();
 *(unsigned int *)(puVar5 + -0x14) = 0x11356;
 FUN_00011240();
 return iVar6 + 100;
}

// Function: main @ 0x11380
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x113a0
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 FUN_00011230(&std::__ioinit);
 FUN_000111b0(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
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
 if (*(char *)(unaff_EDI + 0x3b5b) == '\0') {
 if (*(int *)(unaff_EDI + 0x3b2b) != 0) {
 FUN_00011150(*(unsigned int *)(unaff_EDI + 0x3b47));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x3b5f);
 while (uVar1 < ((unaff_EDI + 0x397f) - (unaff_EDI + 0x397b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x3b5f) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x397b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x3b5f);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x3b5b) = 1;
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
 iVar1 = FUN_000111a0(&local_30);
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
 piVar3 = (int *)FUN_00011170(4);
 *piVar3 = (int)&PTR__RTTIDerivedA_00014e48;
 piVar4 = (int *)FUN_00011170(4);
 *piVar4 = (int)&PTR__RTTIDerivedB_00014e5c;
 iVar1 = *piVar3;
 pcVar2 = *(char **)(*(int *)(iVar1 + -4) + 4);
 if (pcVar2 == "12RTTIDerivedA") {
 iVar5 = 0x1e;
 }
 else if (*pcVar2 == '*') {
 iVar5 = 0x14;
 }
 else {
 iVar5 = FUN_000111d0(pcVar2,"12RTTIDerivedA");
 iVar5 = (-(uint)(iVar5 == 0) & 10) + 0x14;
 }
 iVar6 = FUN_00011200(piVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar6 != 0) {
 iVar5 = iVar5 + 100;
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

// Function: test_cpp_oo_features @ 0x118c0
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 int in_GS_OFFSET;
 double dVar3;
 int local_3c;
 int local_38 [2];
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
 unsigned int uStack_c;
 uStack_c = 0x118cb;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_00011220(&DAT_00013018);
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
 FUN_00011160(1,&DAT_0001303c,iVar1 + 0x125c);
 FUN_00011160(1,&DAT_0001305a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 FUN_00011160(1,&DAT_00013076,0x2a);
 FUN_00011160(1,&DAT_00013092,0x47);
 FUN_00011160(1,&DAT_000130ae,0x28a);
 FUN_00011160(1,&DAT_000130cb,0x16);
 iVar1 = template_max_int_(3,7);
 dVar3 = template_max_double_(2.5,1.5);
 local_3c = 10;
 local_38[0] = 0x14;
 template_swap_int_(&local_3c,local_38);
 FUN_00011160(1,&DAT_000130e7,(int)ROUND(dVar3) + iVar1 + local_3c + local_38[0]);
 FUN_00011160(1,&DAT_00013103,0x10);
 FUN_00011160(1,&DAT_0001311f,0x55);
 uVar2 = test_cpp_exception();
 FUN_00011160(1,&DAT_0001313b,uVar2);
 FUN_00011160(1,&DAT_00013158,0x2bf);
 uVar2 = test_cpp_rtti();
 FUN_00011160(1,&DAT_00013175,uVar2);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: Base::virtual_func @ 0x11ae0
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11af0
char * Base::getName(void)
{
 return &DAT_00013008;
}

// Function: Base::~Base @ 0x11b10
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x11b20
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)((char*)this + 4);
}

// Function: Derived::getName @ 0x11b40
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11b60
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11b70
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11b80
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11b90
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11bb0
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11bd0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11bf0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11c10
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11c30
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11c50
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x11c70
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11c80
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11c90
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11ca0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11cb0
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11cc0
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11cd0
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11ce0
void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11cf0
void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x11d00
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x11d10
void __thiscall Base::_Base(Base *this)
{
 FUN_000111c0(this,4);
 return;
}

// Function: Derived::~Derived @ 0x11d40
void __thiscall Derived::_Derived(Derived *this)
{
 FUN_000111c0(this,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d70
void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)
{
 FUN_000111c0(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11da0
void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)
{
 FUN_000111c0((char*)this + -8,0x10);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11dd0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 FUN_000111c0(this,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11e00
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 FUN_000111c0(this,4);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11e30
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 FUN_000111c0(this,0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11e60
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 FUN_000111c0((char*)this + *(int *)(*(int *)this + -0x10),0x18);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11e90
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 FUN_000111c0((char*)this + -8,0x18);
 return;
}

// Function: template_max<int> @ 0x11ec0
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11ee0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11f00
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11f20
void __thiscall Container<int>::Container(Container<int> *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11f30
void __thiscall Container<int>::push(Container<int> *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11f50
unsigned int __thiscall Container<int>::get(Container<int> *this,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11f80
unsigned int __thiscall Container<int>::getSize(Container<int> *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11f90
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11fa0
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

// Function: Container<double>::get @ 0x11fd0
longdouble __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 return (longdouble)*(double *)(this + param_1 * 8);
 }
 return (longdouble)0;
}

// Function: Container<double>::getSize @ 0x12000
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: __x86.get_pc_thunk.ax @ 0x1200c
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: __x86.get_pc_thunk.si @ 0x12010
void __x86_get_pc_thunk_si(void)
{
 return;
}

// Function: __stack_chk_fail_local @ 0x12020
void __stack_chk_fail_local(void)
{
 FUN_000111f0();
 return;
}

// Function: __do_global_ctors_aux @ 0x12040
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1208c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

