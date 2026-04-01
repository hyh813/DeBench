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

// Type info structures for RTTI
struct type_info { const char* name; };

// Forward declarations for C++ classes - add forward declarations for classes used in function declarations
struct MiddleA;
struct MiddleB;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct LifecycleClass;

// Forward declarations for Container template classes
struct Container_int_;
struct Container_double_;
template<typename T> struct Container;

// Forward declarations for DiamondDerived (diamond inheritance)
struct DiamondDerived;

// Forward declarations for MultiDerived (multiple inheritance)
struct MultiDerived;

// Forward declare member functions that are called before full class definition
int MiddleA_func_(MiddleA *);
int MiddleB_func_(MiddleB *);
int DiamondDerived_func_(DiamondDerived *);
unsigned long long MultiDerived_funcA_(MultiDerived *);
unsigned long long MultiDerived_funcB_(MultiDerived *);
unsigned long long RTTIDerivedA_getType_(RTTIDerivedA *);
unsigned long long RTTIDerivedB_getType_(RTTIDerivedB *);

// Forward declare Container class methods
void Container_int_Container_(Container_int_ *);
void Container_int_push_(Container_int_ *, int);
unsigned int Container_int_get_(Container_int_ *, int);
unsigned int Container_int_getSize_(Container_int_ *);
void Container_double_Container_(Container_double_ *);
void Container_double_push_(Container_double_ *, double);
unsigned long long Container_double_get_(Container_double_ *, int);
unsigned int Container_double_getSize_(Container_double_ *);
struct Init;
struct std { struct ios_base { struct Init {}; }; };
namespace std { extern ios_base::Init __ioinit; };

// Forward declare template functions
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int*, int*);

// Forward declare member functions that are called before full class definition
int MiddleA_func_(MiddleA *);
int MiddleB_func_(MiddleB *);
int DiamondDerived_func_(DiamondDerived *);
unsigned long long MultiDerived_funcA_(MultiDerived *);
unsigned long long MultiDerived_funcB_(MultiDerived *);
unsigned long long RTTIDerivedA_getType_(RTTIDerivedA *);
unsigned long long RTTIDerivedB_getType_(RTTIDerivedB *);

// Full class definitions - base classes first, then derived
// MiddleA and MiddleB must be fully defined before DiamondDerived
// NOTE: In C, we cannot have function declarations inside structs
// So we just define the data members here
struct MiddleA { 
    int middlea_data;
};
struct MiddleB { 
    int middleb_data;
};
struct Base { 
    int base_data;
};
struct Derived : public Base { 
    int derived_data;
};
struct MultiDerived : public Base { 
    int multifunc_data[2];
};

struct RTTIBase { static struct type_info typeinfo; };
struct RTTIDerivedA : public RTTIBase { 
    int rtti_data;
};
struct RTTIDerivedB : public RTTIBase { 
    int rtti_data_b;
};
struct LifecycleClass { 
    static int instance_count; 
    int lifecycle_data;
};

// Container template class instantiations
struct Container_int_ {
    unsigned int size;
    int data[10];
};

struct Container_double_ {
    unsigned int size;
    double data[10];
};

// DiamondDerived must be defined after MiddleA and MiddleB
struct DiamondDerived : public MiddleA, public MiddleB { 
    int diamond_data;
};

// Template function declarations
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int*, int*);

// Decompiled by BinaryAI
// SHA256: 436ad07bdf577c26fb3a12339d016f2d035b8245377271a3adbecd940c1f377c

// Function: _init @ 0x101000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00101020 @ 0x101020
void FUN_00101020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101130
void __cxa_finalize(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101140
int __printf_chk(int flag, char *format, ...)
{
 // External function - implementation not available
 return 0;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101150
void *__cxa_begin_catch(void *param_1)
{
 // External function - implementation not available
 return param_1;
}

// Function: <EXTERNAL>::strlen @ 0x101160
size_t strlen(char *__s)
{
 size_t sVar1;
 char *tmp = __s;
 sVar1 = 0;
 while (*tmp) { sVar1++; tmp++; }
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101170
void* __cxa_allocate_exception(size_t param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101180
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator new @ 0x101190
void* operator new(size_t param_1)
{
 return (void*)malloc(param_1);
}

// Function: <EXTERNAL>::operator.delete @ 0x1011a0
void operator_delete(void *param_1, unsigned long param_2)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1011b0
void __stack_chk_fail(void)
{
 // External function - don't call recursively
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1011c0
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x1011d0
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1011e0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x1011f0
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::puts @ 0x101200
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101210
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101220
void __cxa_throw(void *throwable, void *type_info, void *dest)
{
 // External function - implementation not available
 while(1); // Hang to simulate unhandled exception
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101230
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: test_cpp_exception @ 0x101240
int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&type_info_int,0);
 return 0;
}

// Function: main @ 0x101310
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x101330
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101360
void processEntry _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x101390
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1013c0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101400
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x101450
int test_cpp_member_func(void)
{
 size_t sVar1;
 long in_FS_OFFSET;
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_16 = 0;
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_15 = 0;
 sVar1 = strlen((char *)&local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x1014d0
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1014f0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x101500
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101510
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101520
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x101530
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101540
int test_cpp_template_func(void)
{
 int iVar1;
 long in_FS_OFFSET;
 double dVar2;
 int local_18;
 int local_14;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 iVar1 = template_max_int_(3,7);
 dVar2 = template_max_double_(2.5,1.5);
 local_18 = 10;
 local_14 = 0x14;
 template_swap_int_(&local_18,&local_14);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)dVar2 + iVar1 + local_18 + local_14;
 }
 __stack_chk_fail();
}

// Function: test_cpp_template_class @ 0x1015e0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1015f0
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x101600
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101610
int test_cpp_rtti(void)
{
 long lVar1;
 char *__s1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 uint uVar7;
 uVar7 = 10;
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if ((__s1 != "12RTTIDerivedA") && (uVar7 = 0, *__s1 != '*')) {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = -(uint)(iVar2 == 0) & 10;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar2 = uVar7 + 0x14;
 if (lVar5 != 0) {
 iVar2 = uVar7 + 0x78;
 }
 lVar5 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 sVar6 = strlen(__s1 + (*__s1 == '*'));
 (**(void **)(lVar1 + 8))(plVar3);
 (**(void **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x101740
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 size_t sVar2;
 long in_FS_OFFSET;
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts("C++ OO Features Test");
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar2 = strlen((char *)&local_34);
 __printf_chk(1,"String: %s",(int)sVar2 + 0x125c);
 test_cpp_constructor();
 __printf_chk(1,"Constructor: %d",LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,"Virtual: %d",0x2a);
 __printf_chk(1,"MultiInherit: %d",0x47);
 test_cpp_diamond_inheritance();
 __printf_chk(1,"Diamond: %d",0x28a);
 __printf_chk(1,"Operator: %d",0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,"Template: %d",uVar1);
 __printf_chk(1,"Container: %d",0x10);
 __printf_chk(1,"Lambda: %d",0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,"Exception: %d",uVar1);
 test_cpp_smart_ptr();
 __printf_chk(1,"SmartPtr: %d",0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,"All tests passed!");
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x1018f0
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x101900
char * Base::getName(void)
{
 return &DAT_00102004;
}

// Function: Base::~Base @ 0x101910
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x101920
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 8) * param_1;
}

// Function: Derived::getName @ 0x101930
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x101940
unsigned long long MultiDerived_funcA_(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x101950
unsigned long long MultiDerived_funcB_(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101960
unsigned long long MultiDerived_funcB__(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101970
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101990
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x1019b0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x1019d0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x1019f0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101a10
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101a30
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101a50
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101a60
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101a70
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101a80
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101a90
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101aa0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101ab0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101ac0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101ad0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101ae0
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x101af0
void __thiscall Base::~Base(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::~Derived @ 0x101b00
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b10
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b20
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101b40
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101b50
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b60
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b70
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b90
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x101bb0
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x101bc0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101bd0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x101be0
void Container_int_Container_(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x101bf0
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x101c10
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x101c30
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x101c40
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101c50
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101c70
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101ca0
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x101ca8
void _fini(void)
{
 return;
}

