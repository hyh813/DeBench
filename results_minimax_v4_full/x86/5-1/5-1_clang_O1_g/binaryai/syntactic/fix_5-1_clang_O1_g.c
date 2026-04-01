/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long size_t;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef unsigned int uint;

// Forward declarations for external functions
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern void __cxa_atexit(void);
extern int __dso_handle;

// External library function declarations
extern void *malloc(size_t size);
extern void free(void *ptr);
extern int printf(const char *format, ...);
extern int puts(const char *s);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern void *memcpy(void *dest, const void *src, size_t n);
extern void *__cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void *thrown_exception, void *type_info, void *dest);
extern void *__cxa_begin_catch(void *exception_object);
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void _Unwind_Resume(void *exception);
extern int __libc_start_main(int (*main)(int, char**, char**), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern void *__dynamic_cast(const void *ptr, const void *src_typeinfo, const void *dst_typeinfo, ptrdiff_t src2dst);

// operator new and delete
extern void *operator new(size_t size);
extern void *operator new[](size_t size);
extern void operator delete(void *ptr);
extern void operator delete[](void *ptr);

// Type info for exception handling
struct type_info {
    virtual ~type_info() {}
    bool operator==(const type_info& other) const { return this == &other; }
    bool operator!=(const type_info& other) const { return this != &other; }
};

// Exception type info declarations - make them extern (defined elsewhere)
extern const type_info int_typeinfo;
extern const type_info Z10RTTIBaseB;
extern const type_info Z16RTTIDerivedAB;
extern const type_info Z16RTTIDerivedBB;

// Class definitions
class Base {
public:
    virtual int virtual_func(int param_1);
    virtual ~Base();
    static type_info typeinfo;
    char* getName();
};

class Derived : public Base {
public:
    int value;
    virtual int virtual_func(int param_1);
    virtual ~Derived();
    char* getName();
};

class MultiDerived : public Base {
public:
    virtual unsigned int funcA();
    virtual unsigned int funcB();
    virtual ~MultiDerived();
};

class BaseA {
public:
    virtual unsigned int funcA();
    virtual ~BaseA();
};

class BaseB {
public:
    virtual unsigned int funcB();
    virtual ~BaseB();
};

class MiddleA : virtual public BaseA {
public:
    virtual int func();
    virtual ~MiddleA();
};

class MiddleB : virtual public BaseB {
public:
    virtual int func();
    virtual ~MiddleB();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
    virtual int func();
    virtual ~DiamondDerived();
};

class VirtualBase {
public:
    virtual unsigned int func();
    virtual ~VirtualBase();
};

class RTTIBase {
public:
    virtual ~RTTIBase();
    static type_info typeinfo;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    unsigned int getType();
    static type_info typeinfo;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    unsigned int getType();
    static type_info typeinfo;
};

// Template container class stubs
template<typename T>
class Container {
public:
    Container();
    void push(T value);
    T get(int index);
    unsigned int getSize();
};

// Explicit template instantiations
template<> class Container<int> {
public:
    unsigned int size;
    int data[10];
    Container() : size(0) {}
    void push(int value);
    int get(int index);
    unsigned int getSize();
};

template<> class Container<double> {
public:
    unsigned int size;
    double data[10];
    Container() : size(0) {}
    void push(double value);
    double get(int index);
    unsigned int getSize();
};

// Forward declaration for Container<double> internal type
typedef Container<double> Container_double_;

// Data pointers (defined elsewhere)
extern char PTR_virtual_func_00015ce4;
extern char PTR_virtual_func_00015d04;
extern char PTR_funcA_00015d28;
extern char PTR_funcB_00015d40;
extern char PTR_func_00015db0;
extern char PTR_func_00015dc8;
extern char PTR_func_00015de4;
extern char PTR__RTTIBase_00015ecc;
extern char PTR__RTTIBase_00015ee0;

// Data strings
extern char DAT_000131e5;
extern char DAT_00013081;
extern char DAT_0001309f;
extern char DAT_000130bb;
extern char DAT_000130d7;
extern char DAT_000130f3;
extern char DAT_00013110;
extern char DAT_0001312c;
extern char DAT_00013148;
extern char DAT_00013164;
extern char DAT_00013180;
extern char DAT_0001319d;
extern char DAT_000131ba;
extern char UNK_000131d8;

// Namespace std declarations
namespace std {
    struct ios_base {
        struct Init {
            void _Init();
        };
    };
    static ios_base::Init __ioinit;
};



// Decompiled by BinaryAI
// SHA256: 0a96bd41cb195b9185632e927b93f27c13250273ffd623ed96f7f06e151b4daf

// Function: _init @ 0x11000
void _init(void)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
// Already declared above as extern

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
// Already declared above as extern

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
// Already declared above as extern

// Function: <EXTERNAL>::strlen @ 0x11070
// Already declared above as extern

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
// Already declared above as extern

// Function: <EXTERNAL>::strcmp @ 0x11090
// Already declared above as extern

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
// Already declared above as extern

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
// Already declared above as extern

// Function: <EXTERNAL>::operator.delete @ 0x110c0
// Already declared above as extern

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
// Already declared above as extern

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
// Already declared above as extern

// Function: <EXTERNAL>::printf @ 0x110f0
// Already declared above as extern

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
// Already declared above as extern

// Function: <EXTERNAL>::puts @ 0x11110
// Already declared above as extern

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
// Already declared above in namespace std

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
// Already declared above as extern

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
// Already declared above as extern

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
// Already declared above as extern

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 uVar1 = 0x11178;
 // Call constructor via __cxa_atexit
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::_Init, &std::__ioinit, &__dso_handle);
 return;
}

// Forward declaration for main
int main(void);

// Function: _start @ 0x111b0
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main((void (*)(int, char**, char**))main, param_2, auStack_4, 0, 0, param_1, auStack_4);
 // Infinite loop to match original (in practice, __libc_start_main never returns)
 while(1) { }
}

// Function: __i686.get_pc_thunk.bx @ 0x111dc
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111e0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111f0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11230
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11280
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4ddf) == '\0') {
 if (*(int *)(unaff_EDI + 0x4d5b) != 0) {
 FUN_00011160(*(unsigned int *)(unaff_EDI + 0x4dcb));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4de3);
 while (uVar1 < ((unaff_EDI + 0x4a17) - (unaff_EDI + 0x4a13) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4de3) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4a13 + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x4de3);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4ddf) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x11319
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x1131d
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11330
int test_cpp_member_func(void)
{
 size_t sVar1;
 char local_28[8];
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int uStack_c;
 local_28[0] = 'T';
 local_28[1] = 'e';
 local_28[2] = 's';
 local_28[3] = 't';
 local_28[4] = '\0';
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 uStack_c = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}

// LifecycleClass definition
class LifecycleClass {
public:
    static int instance_count;
    int value[5];
    
    // Constructor
    LifecycleClass() {
        for (int i = 0; i < 5; i++) {
            value[i] = i * 10;
        }
    }
    
    // Destructor
    ~LifecycleClass() {
        // Cleanup if needed
    }
};

// Define the static member
int LifecycleClass::instance_count = 0;

// Function: test_cpp_constructor @ 0x113b0
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 LifecycleClass *obj;
 iVar3 = 0;
 piVar1 = (int *)operator new(sizeof(LifecycleClass));
 obj = new (piVar1) LifecycleClass();  // Placement new
 piVar2 = (int *)obj->value;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + obj->value[2];
 obj->~LifecycleClass();  // Call destructor
 operator delete(piVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3;
}

// Function: call_virtual_func @ 0x11420
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x11450
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 char **local_c;
 local_c = &PTR_virtual_func_00015ce4;
 local_14 = (void **)&PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base::virtual_func((Base *)&local_c,5);
 iVar2 = (**local_14)(&local_14,5);
 return iVar2 + iVar1 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x114b0
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 local_14 = (void **)&PTR_funcB_00015d40;
 local_10 = 200;
 iVar1 = MultiDerived::funcA();
 iVar2 = (**local_14)(&local_14);
 return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x11510
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 local_14 = (void **)&PTR_func_00015de4;
 local_10 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_14);
 local_10 = 100;
 iVar2 = (**local_14)(&local_14);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x11580
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11590
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x115a0
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x115b0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x115c0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void*)&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x116b0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x116c0
int test_cpp_rtti(void)
{
 char *__s1;
 char *__s1_00;
 int *piVar1;
 int *piVar2;
 int iVar3;
 size_t sVar4;
 uint uVar5;
 uint uVar6;
 bool bVar7;
 piVar1 = (int *)operator new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = (int *)operator new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (strcmp(__s1, "12RTTIDerivedA") == 0) {
 uVar6 = 10;
 }
 else {
 uVar6 = 0;
 }
 __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (strcmp(__s1_00, "12RTTIDerivedB") == 0) {
 bVar7 = true;
 }
 else {
 bVar7 = false;
 }
 uVar5 = uVar6 | 0x14;
 if (!bVar7) {
 uVar5 = uVar6;
 }
 iVar3 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1);
 (**(void **)(*piVar1 + 4))(piVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 return sVar4 + uVar5;
}

// Function: test_cpp_oo_features @ 0x11810
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int *piVar2;
 int iVar3;
 unsigned int uVar4;
 int *piVar5;
 int iVar6;
 void **local_3c;
 void **local_38 [4];
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int uStack_1c;
 char **local_14 [2];
 puts(&DAT_000131e5);
 local_38[0] = (void **)0x74736554;
 local_38[1] = (void **)0x0;
 local_38[2] = (void **)0x0;
 local_38[3] = (void **)0x0;
 local_28 = 0;
 local_24 = 0;
 local_20 = 0;
 uStack_1c = 0;
 local_3c = (void **)0xa;
 sVar1 = strlen((char *)local_38);
 printf(&DAT_00013081,sVar1 + 0x125c);
 iVar6 = 0;
 piVar2 = (int *)operator new(0x14);
 piVar5 = piVar2;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar6 = LifecycleClass::instance_count + piVar2[2];
 operator delete(piVar2);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_0001309f,LifecycleClass::instance_count * 1000 + iVar6);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = (void **)&PTR_virtual_func_00015d04;
 local_38[0] = (void **)0x3;
 iVar6 = Base::virtual_func((Base *)local_14,5);
 iVar3 = (**local_3c)(&local_3c,5);
 printf(&DAT_000130bb,iVar3 + iVar6 + 0x15);
 local_3c = (void **)&PTR_funcA_00015d28;
 local_38[1] = (void **)&PTR_funcB_00015d40;
 local_38[0] = (void **)0x64;
 local_38[2] = (void **)0xc8;
 iVar6 = MultiDerived::funcB((MultiDerived *)(local_38 + 1));
 printf(&DAT_000130d7,iVar6 + 0x1f);
 local_3c = (void **)&PTR_func_00015db0;
 local_38[3] = (void **)&PTR_func_00015de4;
 local_38[1] = (void **)&PTR_func_00015dc8;
 local_28 = 0x32;
 iVar6 = DiamondDerived::func((DiamondDerived *)(local_38 + 3));
 *(unsigned int *)((int)local_38 + (int)local_3c[-3]) = 100;
 iVar3 = (**local_38[3])(local_38 + 3);
 printf(&DAT_000130f3,iVar3 + iVar6);
 printf(&DAT_00013110,0x16);
 printf(&DAT_0001312c,0x27);
 printf(&DAT_00013148,0x10);
 printf(&DAT_00013164,0x55);
 uVar4 = test_cpp_exception();
 printf(&DAT_00013180,uVar4);
 printf(&DAT_0001319d,0x2bf);
 uVar4 = test_cpp_rtti();
 printf(&DAT_000131ba,uVar4);
 return;
}

// Function: main @ 0x11ab0
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x11ad0
int Base::virtual_func(int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11ae0
int Derived::virtual_func(int param_1)
{
 return value * param_1;
}

// Function: Base::~Base @ 0x11af0
Base::~Base()
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11b00
MultiDerived::~MultiDerived()
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11b10
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x11b20
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x11b30
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11b50
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11b70
Container<int>::Container()
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x11b80
void Container<int>::push(int param_1)
{
 if (this->size < 10) {
 this->data[this->size] = param_1;
 this->size = this->size + 1;
 }
 return;
}

// Function: Container<int>::get @ 0x11ba0
unsigned int Container<int>::get(int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 uVar1 = this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11bc0
unsigned int Container<int>::getSize()
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11bd0
Container<double>::Container()
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x11be0
void Container<double>::push(double param_1)
{
 if (this->size < 10) {
 this->data[this->size] = param_1;
 this->size = this->size + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x11c00
long double Container<double>::get(int param_1)
{
 long double lVar1;
 lVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 lVar1 = this->data[param_1];
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11c20
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x11c30
char * Base::getName(void)
{
 return &UNK_000131d8;
}

// Function: FUN_00011c35 @ 0x11c35
int FUN_00011c35(void)
{
 int unaff_retaddr;
 return unaff_retaddr + 0x15a3;
}

// Function: Base::~Base @ 0x11c50
Base::~Base()
{
 operator delete(this);
 return;
}

// Function: Derived::getName @ 0x11c80
char * Derived::getName(void)
{
 return "Derived";
}

// Function: FUN_00011c85 @ 0x11c85
int FUN_00011c85(void)
{
 int unaff_retaddr;
 return unaff_retaddr + 0x1558;
}

// Function: Derived::~Derived @ 0x11ca0
void __thiscall Derived::_Derived(Derived *this)
{
 operator delete(this);
 return;
}

// Function: MultiDerived::funcA @ 0x11cd0
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11d10
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x11d30
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d40
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator delete(this + -8);
 return;
}

// Function: BaseA::funcA @ 0x11d70
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x11d80
void __thiscall BaseA::_BaseA(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x11d90
void __thiscall BaseA::_BaseA(BaseA *this)
{
 operator delete(this);
 return;
}

// Function: BaseB::funcB @ 0x11dc0
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11dd0
void __thiscall BaseB::_BaseB(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x11de0
void __thiscall BaseB::_BaseB(BaseB *this)
{
 operator delete(this);
 return;
}

// Function: MiddleA::func @ 0x11e10
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e30
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11e40
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator delete(this);
 return;
}

// Function: MiddleA::func @ 0x11e70
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e90
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11ea0
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB::func @ 0x11ed0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x11ef0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f00
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator delete(this);
 return;
}

// Function: MiddleB::func @ 0x11f30
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x11f50
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x11f60
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::func @ 0x11f90
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11fb0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x11fe0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12000
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12010
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator delete(this + -8);
 return;
}

// Function: DiamondDerived::func @ 0x12040
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12060
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12070
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase::func @ 0x120a0
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x120b0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x120c0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 operator delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x120f0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x12120
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x12130
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x12140
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x12170
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x12180
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x121cc
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

