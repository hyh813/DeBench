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

// Forward declarations for structs
struct DiamondDerived;
struct MultiDerived;
struct Container;

// Forward declarations for classes
struct LifecycleClass { static int instance_count; };
struct Base { void** vtable; int virtual_func(int); char* getName(); ~Base(); };
struct Derived : Base { void** vtable; int multiplier; ~Derived(); };
struct MiddleA { void** vtable; int func(); };
struct MiddleB { void** vtable; int func(); };
struct RTTIBase { static int typeinfo; };
struct RTTIDerivedA : RTTIBase { unsigned long long getType(); static int typeinfo; void ~RTTIDerivedA(); };
struct RTTIDerivedB : RTTIBase { unsigned long long getType(); static int typeinfo; void ~RTTIDerivedB(); };

// Template container definitions
template<typename T> struct Container;
template<> struct Container<int> { int data[10]; unsigned int size; Container(); void push(int); unsigned int get(int); unsigned int getSize(); };
template<> struct Container<double> { double data[10]; unsigned int size; Container(); void push(double); unsigned long long get(int); unsigned int getSize(); };

// Full struct definitions
struct DiamondDerived { void** vtable; int func(); ~DiamondDerived(); };
struct MultiDerived { void** vtable; unsigned long long funcA(); unsigned long long funcB(); ~MultiDerived(); };

// Template function declarations
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int*, int*);

// Additional class definitions needed for member function definitions
struct RTTIBase { static int typeinfo; };
struct RTTIDerivedA : RTTIBase { unsigned long long getType(); static int typeinfo; void ~RTTIDerivedA(); };
struct RTTIDerivedB : RTTIBase { unsigned long long getType(); static int typeinfo; void ~RTTIDerivedB(); };

// Decompiled by BinaryAI
// SHA256: 5e623771f7b3498d7a9447a6ff55bb089726669b825fcd106ba45a415d8556b4

// Function: _init @ 0x102000
int _init(void *ctx)
{
 int iVar1;
 iVar1 = __gmon_start__();
 return iVar1;
}

// Function: FUN_00102020 @ 0x102020
void FUN_00102020(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x102150
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x102160
void __printf_chk(void)
{
 __printf_chk();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x102170
void * operator_new__(unsigned long param_1)
{
 return ::operator new[](param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x102180
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x102190
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x1021a0
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1021b0
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1021c0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1021d0
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1021e0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1021f0
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x102200
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x102210
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x102220
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x102230
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::puts @ 0x102240
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x102250
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x102260
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x102270
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: _start @ 0x102280
void processEntry _start(unsigned long long param_1,unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main,param_2,&stack0x00000008,0,0,param_1,auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x1022b0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1022e0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x102320
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

// Function: test_cpp_member_func @ 0x102369
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
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar1 = strlen((char *)&local_34);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return (int)sVar1 + 0x125c;
 }
 // Prevent tail call optimization to match decompiled stack frame
 // Note: original code had __stack_chk_fail here which is noreturn
 // Returning to satisfy compiler
 return 0;
}

// Function: test_cpp_constructor @ 0x1023de
int test_cpp_constructor(void)
{
 int iVar1;
 void *pvVar2;
 pvVar2 = operator_new__(0x14);
 *(unsigned int *)((long)pvVar2 + 4) = 10;
 *(unsigned int *)((long)pvVar2 + 8) = 0x14;
 *(unsigned int *)((long)pvVar2 + 0xc) = 0x1e;
 *(unsigned int *)((long)pvVar2 + 0x10) = 0x28;
 iVar1 = LifecycleClass::instance_count + 0x15;
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 operator_delete__(pvVar2);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar1;
}

// Function: call_virtual_func @ 0x10243c
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x10244e
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 char **local_30;
 char **local_28;
 unsigned int local_20;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 local_30 = &PTR_virtual_func_001059a0;
 local_28 = &PTR_virtual_func_001059d0;
 local_20 = 3;
 iVar1 = call_virtual_func((Base *)&local_30,5);
 iVar2 = call_virtual_func((Base *)&local_28,5);
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar1 + 0x15 + iVar2;
 }
 __stack_chk_fail();
}

// Function: test_cpp_multiple_inheritance @ 0x1024c6
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1024d0
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 long in_FS_OFFSET;
 unsigned long long local_38;
 unsigned int local_30;
 long local_20;
 local_20 = *(long *)(in_FS_OFFSET + 0x28);
 local_38 = 0x105b78;
 local_30 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_38);
 local_30 = 100;
 iVar2 = DiamondDerived::func((DiamondDerived *)&local_38);
 if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
 return iVar2 + iVar1;
 }
 __stack_chk_fail();
}

// Function: test_cpp_operator_overload @ 0x10254c
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x102556
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

// Function: test_cpp_template_class @ 0x1025e5
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1025ef
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1025f9
// NOTE: __cxa_throw is a noreturn function - code after it is unreachable
// The original code throws an exception with value 0x2a (42)
__attribute__((noreturn))
void __cxa_throw_thunk(void *p, void *t, void *f)
{
    __cxa_throw(p, t, f);
    __builtin_unreachable();
}

int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw_thunk(puVar1,(void*)&int::typeinfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x1026d1
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1026db
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
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00105ba0;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIDerivedB_00105bc8;
 lVar1 = *plVar3;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 uVar7 = 10;
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

// Function: test_cpp_oo_features @ 0x102801
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_00103018);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0010303c,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_0010305a,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00103076,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_00103092,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_001030ae,uVar1);
 __printf_chk(1,&DAT_001030cb,0x16);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_001030e7,uVar1);
 __printf_chk(1,&DAT_00103103,0x10);
 __printf_chk(1,&DAT_0010311f,0x55);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_0010313b,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00103158,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_00103175,uVar1);
 return;
}

// Function: main @ 0x102970
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x102987
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: Base::virtual_func @ 0x1029b4
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1029bc
char * Base::getName(void)
{
 return &DAT_00103004;
}

// Function: Base::~Base @ 0x1029c8
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x1029ce
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 8);
}

// Function: Derived::getName @ 0x1029da
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1029e6
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1029f0
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1029fa
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x102a04
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x102a36
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x102a4b
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x102a68
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102a7d
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x102a99
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x102ab0
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x102aba
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102ac4
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102aca
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ad0
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ad5
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102ada
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102ae0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102ae5
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x102aea
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x102af0
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this,8);
 return;
}

// Function: Derived::~Derived @ 0x102b08
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102b20
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102b37
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x102b52
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x102b6a
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102b82
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102b99
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102bb7
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x102bd2
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x102bde
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x102be7
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x102bf4
void __thiscall Container<int>::Container(Container<int> *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x102c00
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

// Function: Container<int>::get @ 0x102c18
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x102c34
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x102c3c
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102c48
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

// Function: Container<double>::get @ 0x102c62
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102c7e
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x102c88
void _fini(void)
{
 return;
}

