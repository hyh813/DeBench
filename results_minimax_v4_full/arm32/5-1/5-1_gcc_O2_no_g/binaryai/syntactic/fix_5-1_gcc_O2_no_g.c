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

// Decompiled by BinaryAI
// SHA256: 2fe63e63c0b1898b82d05f8607ec83b83a6a5e3ac53489d6b02ada9a63ab6597

// Forward declarations for classes
struct Base { virtual ~Base(); virtual int virtual_func(int); virtual unsigned char* getName(); };
struct Derived : public Base { int multiplier; virtual int virtual_func(int); virtual ~Derived(); };
struct MultiDerived { virtual ~MultiDerived(); virtual unsigned int funcA(); virtual unsigned int funcB(); int field_4; void** vtable; };
struct MiddleA { virtual int func(); virtual ~MiddleA(); int field_4; void** vtable; };
struct MiddleB { virtual int func(); virtual ~MiddleB(); int field_4; void** vtable; };
struct DiamondDerived : public MiddleA, public MiddleB { virtual int func(); virtual ~DiamondDerived(); int field_4; void** vtable; };
struct RTTIDerivedA { virtual ~RTTIDerivedA(); virtual unsigned int getType(); int field_4; void** vtable; };
struct RTTIDerivedB { virtual ~RTTIDerivedB(); virtual unsigned int getType(); int field_4; void** vtable; };
struct RTTIBase {};
struct LifecycleClass { static int instance_count; };
struct Init {};
struct type_info { virtual ~type_info(); bool operator==(const type_info&) const; };

// Forward declarations for template classes
template<typename T> struct Container;
template<typename T> struct Container {
    unsigned int size;
    T data[10];
};
typedef Container<int> Container_int_;
typedef Container<double> Container_double_;

// Explicit template instantiations
template struct Container<int>;
template struct Container<double>;

// Global variables
extern unsigned char completed_0;
extern Init std::__ioinit;
extern void **__dso_handle;
extern int int::typeinfo;
extern const char DAT_00011438;
extern const char DAT_00011450;
extern const char DAT_00011474;
extern const char DAT_00011494;
extern const char DAT_000114b0;
extern const char DAT_000114cc;
extern const char DAT_000114e8;
extern const char DAT_00011508;
extern const char DAT_00011524;
extern const char DAT_00011540;
extern const char DAT_0001155c;
extern const char DAT_00011578;
extern const char DAT_00011598;
extern const char DAT_000115b8;
extern void* PTR__RTTIDerivedA_0001162c;
extern void* PTR__RTTIDerivedB_00011640;
extern type_info RTTIDerivedA::typeinfo;
extern type_info RTTIDerivedB::typeinfo;
extern type_info RTTIBase::typeinfo;

// Function: _init @ 0x10920
int _init(void *ctx)
{
 return call_weak_fn();
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator new @ 0x10940
void *operator_new(uint param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void * __cxa_begin_catch(void)
{
 return (void*)0x0; // Stub - actual implementation in C runtime
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void * __cxa_allocate_exception(size_t param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::puts @ 0x10970
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator delete @ 0x1097c
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::abort @ 0x10994
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
void __thiscall std::type_info::operator__(type_info *this,type_info *param_1)
{
 operator__(this,param_1);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void)
{
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x109dc
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
void __aeabi_d2iz(void)
{
 __aeabi_d2iz();
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int __flag, const char *__format, ...)
{
 return __printf_chk(__flag, __format);
}

// Function: test_cpp_exception @ 0x10a60
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: main @ 0x10b18
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::_Init,&__dso_handle);
 return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10b9c
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x10bc0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10bec
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10c24
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10c50
int test_cpp_member_func(void)
{
 size_t sVar1;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 __stack_chk_fail();
}

// Function: test_cpp_constructor @ 0x10cbc
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *param_1,int param_2)
{
 (**(void ***)(*(void **)param_1))();
 return;
}

// Function: test_cpp_virtual_func @ 0x10ce8
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10cf0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10cf8
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10d04
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10d0c
void test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int extraout_r1;
 int iVar3;
 unsigned long long uVar4;
 unsigned int in_stack_ffffffe0;
 int in_stack_ffffffe4;
 int iVar5;
 int in_stack_ffffffe8;
 int iVar6;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe8);
 uVar4 = __aeabi_d2iz(uVar2,extraout_r1);
 if (iVar3 == 0) {
 return;
 }
 __stack_chk_fail((int)uVar4 + iVar1 + iVar5 + iVar6,(int)((ulonglong)uVar4 >> 0x20),iVar3,0);
}

// Function: test_cpp_template_class @ 0x10db4
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10dbc
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_smart_ptr @ 0x10dc4
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10dd0
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 type_info *this;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)operator_new(4);
 this = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = std::type_info::operator__(this,(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std::type_info::operator__
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(void **)(iVar6 + 4))(piVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ec8
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 puts(&DAT_00011450);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 __printf_chk(1,&DAT_00011474,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,&DAT_00011494,uVar2);
 __printf_chk(1,&DAT_000114b0,0x2a);
 __printf_chk(1,&DAT_000114cc,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000114e8,uVar2);
 __printf_chk(1,&DAT_00011508,0x16);
 uVar2 = test_cpp_template_func();
 __printf_chk(1,&DAT_00011524,uVar2);
 __printf_chk(1,&DAT_00011540,0x10);
 __printf_chk(1,&DAT_0001155c,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_00011578,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00011598,uVar2);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,&DAT_000115b8,uVar2);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x11048
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11050
unsigned char * Base::getName(void)
{
 return &DAT_00011438;
}

// Function: Base::~Base @ 0x1105c
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: Derived::virtual_func @ 0x11060
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return param_1 * *(int *)(this + 4);
}

// Function: Derived::getName @ 0x1106c
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11078
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11080
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11090
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func2 @ 0x110a8
int __thiscall MiddleA::func2(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x110cc
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11108
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1115c
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11164
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1116c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11170
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11174
void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 return;
}

// Destructor - non-virtual, returning void
// (comment above is part of the decompilation)

// Function: DiamondDerived::~DiamondDerived @ 0x11178
void * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return this + *(int *)(*(int *)this + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11188
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return this + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11190
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11194
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return this + -8;
}

// Function: Derived::~Derived @ 0x1119c
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x111a0
Base * __thiscall Base::_Base(Base *this)
{
 operator_delete(this);
 return this;
}

// Function: Derived::~Derived @ 0x111b8
Derived * __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,8);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x111d0
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x10);
 return this;
}

// Function: MultiDerived::~MultiDerived @ 0x111e8
MultiDerived * __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -8,0x10);
 return this + -8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11204
RTTIDerivedB * __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return this;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1121c
RTTIDerivedA * __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11234
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x18);
 return this;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1124c
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)this + -0x10);
 operator_delete(this + iVar1,0x18);
 return this + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11270
DiamondDerived * __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -8,0x18);
 return this + -8;
}

// Template function declarations
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

// Function: template_max<int> @ 0x1128c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11298
double template_max_double_(double param_1,double param_2)
{
 if (param_1 < param_2) {
 return param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x112c8
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x112dc
void __thiscall Container_int_::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x112e8
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

// Function: Container<int>::get @ 0x11300
unsigned int __thiscall Container_int_::get(Container_int_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11324
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1132c
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11338
void __thiscall Container<double>::push(Container_double_ *this, double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)(this + iVar1 * 8);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(unsigned int *)puVar2 = (unsigned int)param_1;
 puVar2[1] = (unsigned int)((unsigned long long)((double)param_1) >> 32);
 }
 return;
}

// Function: Container<double>::get @ 0x11368
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11394
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x1139c
void _fini(void)
{
 return;
}

