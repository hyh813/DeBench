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

// Missing type declarations/definitions
struct Base { int *vtable; };
struct Derived { int *vtable; int data; };
struct MultiDerived { int *vtable; int *vtable2; };
struct DiamondDerived { int *vtable; int *vtable2; int data; };

// Forward declarations for C++ standard library types
struct Init { int dummy; };
typedef struct Init Init;
extern struct Init std___ioinit;
#define std__ios_base__Init std_ios_base_Init
#define std__ios_base std_ios_base
#define std__ios_base__Init__Init Init__Init
typedef struct Init Init_;
#define std_ios_base_Init Init_

// Forward declaration for std::ios_base
struct std_ios_base { void *vtable; int flags; long refcount; };
struct Init { int dummy; };
typedef struct Init Init;

// RTTI type info structures
struct RTTIBase_typeinfo { const char *name; void *vtable; };
struct RTTIDerivedA_typeinfo { const char *name; void *vtable; };
struct RTTIDerivedB_typeinfo { const char *name; void *vtable; };

// Forward declarations for derived classes (needed for member function declarations)
struct DiamondDerived;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Struct definitions
struct Base { int *vtable; };
struct Derived { int *vtable; int data; };
struct MultiDerived { int *vtable; int *vtable2; };
struct DiamondDerived { int *vtable; int *vtable2; int data; };
struct MiddleA { int *vtable; int data; };
struct MiddleB { int *vtable; int data; };
struct RTTIBase { int *vtable; };
struct RTTIDerivedA { int *vtable; };
struct RTTIDerivedB { int *vtable; };
struct Container_int_ { int data[10]; unsigned int size; };
struct Container_double_ { double data[10]; unsigned int size; };

// Destructor declarations for DiamondDerived and MultiDerived (must be AFTER struct definitions)
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this_);
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this_);

// Member function declarations for DiamondDerived
int __thiscall DiamondDerived::func(DiamondDerived *this_);
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this_);

// Calling convention for thiscall (non-standard in C, define as empty for compatibility)
// Note: 'this' cannot be used as a parameter name in C, so we use 'this_' instead
#define __thiscall

// Global typeinfo instances for RTTI
extern RTTIBase_typeinfo RTTIBase_typeinfo_instance;
extern RTTIDerivedA_typeinfo RTTIDerivedA_typeinfo_instance;
extern RTTIDerivedB_typeinfo RTTIDerivedB_typeinfo_instance;
#define RTTIBase ::RTTIBase_typeinfo_instance
#define RTTIDerivedA ::RTTIDerivedA_typeinfo_instance
#define RTTIDerivedB ::RTTIDerivedB_typeinfo_instance

// Lifecycle class
struct LifecycleClass { static int instance_count; };
int LifecycleClass_instance_count = 0;

// Type info structures for RTTI
struct RTTITypeInfo { void *vtable; const char *typeinfo; };
struct int_ { int value; };
struct typeinfo { const char *name; void *vtable; };
struct Init {};

// External declarations
extern void *__dso_handle;
extern void *__gmon_start__(void);
extern int __libc_start_main(void *, unsigned long long, void *, long, long, unsigned long long, ...);
extern void __cxa_finalize(void *);
extern int __printf_chk(int, const char *, ...);
extern void *__cxa_begin_catch(void *);
extern size_t strlen(const char *);
extern void *__cxa_allocate_exception(unsigned long);
extern void __cxa_throw(void *, void *, void *);
extern void *__cxa_atexit(void *, void *, void *);
extern void *operator_new(unsigned long);
extern void operator_delete(void *, unsigned long);
extern void __stack_chk_fail(void);
extern void *__dynamic_cast(const void *, const void *, const void *, unsigned long long);
extern int strcmp(const char *, const char *);
extern void __cxa_end_catch(void);
extern void _Unwind_Resume(void);

// Template function declarations
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(int *, int *);

// Template class declarations (need '<' and '>' which are problematic in C)
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

// Function pointers
typedef void (*func_ptr)(void);
extern func_ptr PTR__RTTIDerivedA_00103c70;
extern func_ptr PTR__RTTIDerivedB_00103c98;

// Decompiled by BinaryAI
// SHA256: 8cf6f7bb10e67d73228cfbaefb9a875d0455777036382285cd858d3bbc547146

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
 // Attempting to call NULL function pointer - stub function
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101130
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__printf_chk @ 0x101140
void __printf_chk(void)
{
 __printf_chk();
 return;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101150
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x101160
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101170
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101180
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101190
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1011a0
void operator_delete(void *param_1,unsigned long param_2)
{
 operator_delete(param_1,param_2);
 return;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x1011b0
void __stack_chk_fail(void)
{
 __stack_chk_fail();
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
void __thiscall std_ios_base_Init_Init(Init *this_)
{
 Init(this_);
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
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101230
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: test_cpp_exception @ 0x101240
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,int::typeinfo,0);
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
 plVar3 = (long *)operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00103c70;
 plVar4 = (long *)operator_new(8);
 lVar1 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00103c98;
 __s1 = *(char **)(*(long *)(lVar1 + -8) + 8);
 if (__s1 == "12RTTIDerivedA") {
 iVar2 = 0x1e;
 }
 else if (*__s1 == '*') {
 iVar2 = 0x14;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar2 = (-(uint)(iVar2 == 0) & 10) + 0x14;
 }
 lVar5 = __dynamic_cast(plVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 100;
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

// Function: test_cpp_oo_features @ 0x101780
void test_cpp_oo_features(void)
{
 int iVar1;
 unsigned int uVar2;
 size_t sVar3;
 long in_FS_OFFSET;
 double dVar4;
 int local_40;
 int local_3c [2];
 unsigned long long local_34;
 unsigned long long local_2c;
 unsigned long long local_24;
 unsigned int local_1c;
 unsigned short local_18;
 char local_16;
 char local_15;
 long local_10;
 local_10 = *(long *)(in_FS_OFFSET + 0x28);
 puts(&DAT_00102018);
 local_34 = 0x74736554;
 local_2c = 0;
 local_24 = 0;
 local_1c = 0;
 local_18 = 0;
 local_16 = 0;
 local_15 = 0;
 sVar3 = strlen((char *)&local_34);
 __printf_chk(1,&DAT_0010203c,(int)sVar3 + 0x125c);
 __printf_chk(1,&DAT_0010205a,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,&DAT_00102076,0x2a);
 __printf_chk(1,&DAT_00102092,0x47);
 __printf_chk(1,&DAT_001020ae,0x28a);
 __printf_chk(1,&DAT_001020cb,0x16);
 iVar1 = template_max_int_(3,7);
 dVar4 = template_max_double_(2.5,1.5);
 local_40 = 10;
 local_3c[0] = 0x14;
 template_swap_int_(&local_40,local_3c);
 __printf_chk(1,&DAT_001020e7,(int)dVar4 + iVar1 + local_40 + local_3c[0]);
 __printf_chk(1,&DAT_00102103,0x10);
 __printf_chk(1,&DAT_0010211f,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_0010213b,uVar2);
 __printf_chk(1,&DAT_00102158,0x2bf);
 test_cpp_rtti();
 if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
 __printf_chk(1,&DAT_00102175);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x101990
int __thiscall Base::virtual_func(struct Base *this_,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x1019a0
char * Base::getName(void)
{
 return &DAT_00102004;
}

// Function: Base::~Base @ 0x1019b0
void __thiscall Base::_Base(Base *this_)
{
 return;
}

// Function: Derived::virtual_func @ 0x1019c0
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 8) * param_1;
}

// Function: Derived::getName @ 0x1019d0
char * Derived::getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x1019e0
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x1019f0
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x101a00
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *this_)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x101a10
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::func @ 0x101a30
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleB::func @ 0x101a50
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::func @ 0x101a70
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}

// Function: DiamondDerived::func @ 0x101a90
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ab0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::func @ 0x101ad0
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)(this + -0x10) + -0x18) + -8) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x101af0
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x101b00
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101b10
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101b20
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b30
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b40
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101b50
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b60
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101b70
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: Derived::~Derived @ 0x101b80
void __thiscall Derived::_Derived(Derived *this)
{
 return;
}

// Function: Base::~Base @ 0x101b90
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this,8);
 return;
}

// Function: Derived::~Derived @ 0x101ba0
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101bb0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this,0x20);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x101bc0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -0x10,0x20);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101be0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this,8);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101bf0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this,8);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c00
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this,0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c10
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20),0x30);
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x101c30
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -0x10,0x30);
 return;
}

// Function: template_max<int> @ 0x101c50
int template_max_int_(int param_1,int param_2)
{
 if (param_2 <= param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x101c60
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101c70
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container_int_::Container @ 0x101c80
void __thiscall Container_int_::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container_int_::push @ 0x101c90
void __thiscall Container_int_::push(Container_int_ *this_,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container_int_::get @ 0x101cb0
unsigned int __thiscall Container_int_::get(Container_int_ *this_,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 return *(unsigned int *)(this + (long)param_1 * 4);
 }
 return 0;
}

// Function: Container_int_::getSize @ 0x101cd0
unsigned int __thiscall Container_int_::getSize(Container_int_ *this_)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container_double_::Container @ 0x101ce0
void __thiscall Container_double_::Container(Container_double_ *this_)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container_double_::push @ 0x101cf0
void __thiscall Container_double_::push(Container_double_ *this_,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container_double_::get @ 0x101d10
unsigned long long __thiscall Container_double_::get(Container_double_ *this_,int param_1)
{
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 return *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x101d40
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: _fini @ 0x101d48
void _fini(void)
{
 return;
}

