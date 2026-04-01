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

// Boolean type and values
typedef int bool;
#define true 1
#define false 0

// External function declarations
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);
extern char __dso_handle;

// External libc functions
extern int __libc_start_main(int (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);
extern size_t strlen(const char *s);
extern int strcmp(const char *s1, const char *s2);
extern int printf(const char *format, ...);
extern int puts(const char *s);

// External C++ runtime functions
extern void *operator_new(unsigned int size);
extern void *operator_new__(unsigned int size);
extern void operator_delete(void *ptr);
extern void operator_delete__(void *ptr);
extern void *__cxa_begin_catch(void *exc);
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exc, const void *typeinfo, void (*dest)(void *));
extern void __cxa_end_catch(void);
extern void __cxa_rethrow(void);
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso);
extern void *_Unwind_Resume(void *exc);
extern void *__dynamic_cast(const void *ptr, const void *src_type, const void *dst_type, ptrdiff_t src2dst);

// std namespace declarations
namespace std {
    struct ios_base {
        struct Init {
            void Init();
        };
    };
    extern ios_base::Init __ioinit;
}

// Forward declarations for classes
struct Base {
    virtual ~Base();
    virtual int virtual_func(int param_1);
    static char *getName();
};

struct Derived : public Base {
    int field;
    virtual ~Derived();
    virtual int virtual_func(int param_1);
    virtual char *getName();
};

struct LifecycleClass {
    static int instance_count;
};

// Definition for static member
int LifecycleClass::instance_count = 0;

struct MultiDerived {
    virtual ~MultiDerived();
    static unsigned int funcA();
    unsigned int funcB();
};

struct DiamondDerived {
    virtual ~DiamondDerived();
    int func(int param_1);
};

struct BaseA {
    virtual ~BaseA();
    static unsigned int funcA();
};

struct BaseB {
    virtual ~BaseB();
    static unsigned int funcB();
};

struct MiddleA : public BaseA {
    virtual ~MiddleA();
    int func(int param_1);
};

struct MiddleB : public BaseB {
    virtual ~MiddleB();
    int func(int param_1);
};

struct VirtualBase {
    virtual ~VirtualBase();
    static unsigned int func();
};

struct RTTIBase {
    virtual ~RTTIBase();
    static void *typeinfo;
};

struct RTTIDerivedA : public RTTIBase {
    virtual ~RTTIDerivedA();
    static unsigned int getType();
    static void *typeinfo;
};

struct RTTIDerivedB : public RTTIBase {
    virtual ~RTTIDerivedB();
    static unsigned int getType();
    static void *typeinfo;
};

struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

// Forward declarations for data pointers
// Data references from the binary's data section
char *PTR_virtual_func_00015ce4 = (char *)"Base::virtual_func";
void *PTR_virtual_func_00015d04 = (void *)0x11ad0;
void *PTR_funcA_00015d28 = (void *)0x11cd0;
void *PTR_funcB_00015d40 = (void *)0x11d10;
void *PTR_func_00015db0 = (void *)0x11f90;
void *PTR_func_00015dc8 = (void *)0x11e10;
void *PTR_func_00015de4 = (void *)0x11ed0;
char *PTR__RTTIBase_00015ecc = (char *)"RTTIBase";
char *PTR__RTTIDerivedA_00015ee0 = (char *)"RTTIDerivedA";
void *int_typeinfo = 0;
void *RTTIBase_typeinfo = 0;
void *RTTIDerivedA_typeinfo = 0;
void *RTTIDerivedB_typeinfo = 0;

// Data section strings
char DAT_000131e5[] = "Testing C++ OOP Features:\n";
char DAT_00013081[] = "test_cpp_member_func: %d\n";
char DAT_0001309f[] = "test_cpp_constructor: %d\n";
char DAT_000130bb[] = "test_cpp_virtual_func: %d\n";
char DAT_000130d7[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_000130f3[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_00013110[] = "test_cpp_operator_overload: %u\n";
char DAT_0001312c[] = "test_cpp_template_func: %u\n";
char DAT_00013148[] = "test_cpp_template_class: %u\n";
char DAT_00013164[] = "test_cpp_lambda: %u\n";
char DAT_00013180[] = "test_cpp_exception: %u\n";
char DAT_0001319d[] = "test_cpp_smart_ptr: %u\n";
char DAT_000131ba[] = "test_cpp_rtti: %u\n";
char UNK_000131d8[] = "Base";

// Decompiled by BinaryAI
// SHA256: ed1f85034dfdcf78e87681935df2abbaf51ad826da18e86fc9ebd6eb24c04e27

// Function: _init @ 0x11000
void _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 __do_global_ctors_aux();
 return;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 // Empty function - the original code was calling a NULL pointer which is invalid
 return;
}

// External function definitions - these call the actual library functions
// Function: <EXTERNAL>::operator.new @ 0x11040
void * _ZN9operator_newEj(unsigned int param_1)
{
 return _Znwm(param_1);  // Call the actual C++ operator new
}

// Wrapper for C++ new operator (actual implementation)
void * _Znwm(unsigned int size)
{
    extern void *cpp_operator_new(unsigned int);
    return cpp_operator_new(size);
}

// Wrapper for C++ operator delete (actual implementation)
void operator_delete(void *ptr)
{
    extern void cpp_operator_delete(void *);
    cpp_operator_delete(ptr);
}

// Wrapper for C++ operator delete (alternate name with underscores)
void operator_delete__(void *ptr)
{
    extern void cpp_operator_delete(void *);
    cpp_operator_delete(ptr);
}

// Wrapper for C++ array delete operator
void operator_delete_array(void *ptr)
{
    extern void cpp_operator_delete(void *);
    cpp_operator_delete(ptr);
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11170
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))std::ios_base::Init::Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,auStack_4,0,0,param_1);
 do {
 } while( true );
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
 char local_28 [8];
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
 local_28[5] = '\0';
 local_28[6] = '\0';
 local_28[7] = '\0';
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 uStack_c = 0;
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x113b0
int test_cpp_constructor(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 iVar3 = 0;
 piVar1 = (int *)operator_new__(0x14);
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 10;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar3 = LifecycleClass::instance_count + piVar1[2];
 operator_delete__(piVar1);
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
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00015ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00015ee0;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 // Check if string starts with '*' and compare with rest
 if (*__s1 == '*') {
 uVar6 = (strcmp(__s1 + 1, "12RTTIDerivedA") == 0) ? 10 : 0;
 } else {
 uVar6 = (strcmp(__s1, "12RTTIDerivedA") == 0) ? 10 : 0;
 }
 __s1_00 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (*__s1_00 == '*') {
 bVar7 = (strcmp(__s1_00 + 1, "12RTTIDerivedB") == 0);
 } else {
 bVar7 = (strcmp(__s1_00, "12RTTIDerivedB") == 0);
 }
 uVar5 = uVar6 | 0x14;
 if (!bVar7) {
 uVar5 = uVar6;
 }
 iVar3 = __dynamic_cast(piVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 uVar6 = uVar5 + 100;
 if (iVar3 == 0) {
 uVar6 = uVar5;
 }
 iVar3 = __dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 uVar5 = uVar6 + 200;
 if (iVar3 == 0) {
 uVar5 = uVar6;
 }
 sVar4 = strlen(__s1 + 1);
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
 piVar2 = (int *)operator_new__(0x14);
 piVar5 = piVar2;
 do {
 *piVar5 = iVar6;
 iVar6 = iVar6 + 10;
 piVar5 = piVar5 + 1;
 } while (iVar6 != 0x32);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar6 = LifecycleClass::instance_count + piVar2[2];
 operator_delete__(piVar2);
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
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x11ad0
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11ae0
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}

// Function: Base::~Base @ 0x11af0 (empty destructor)
void __thiscall Base::~Base(Base *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11b00 (empty destructor)
void __thiscall MultiDerived::_MultiDerived_0(MultiDerived *this)
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
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11b80
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

// Function: Container<int>::get @ 0x11ba0
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11bc0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11bd0
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11be0
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

// Function: Container<double>::get @ 0x11c00
long double __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = (long double)*(double *)(this + param_1 * 8);
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
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this);
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
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcA @ 0x11cd0
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x11ce0
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcB @ 0x11d10
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11d20
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x11d30 (empty destructor)
void __thiscall MultiDerived::_MultiDerived_1(MultiDerived *this)
{
 (void)this;
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11d40 (with cleanup)
void __thiscall MultiDerived::_MultiDerived_2(MultiDerived *this)
{
 operator_delete((char*)this + -8);
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
 operator_delete(this);
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
 operator_delete(this);
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
 operator_delete(this);
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
 operator_delete(this + *(int *)(*(int *)this + -0x10));
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
 operator_delete(this);
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
 operator_delete(this + *(int *)(*(int *)this + -0x10));
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
 operator_delete(this);
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
 operator_delete(this + -8);
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
 operator_delete(this + *(int *)(*(int *)this + -0x10));
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
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x120f0
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
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
 operator_delete(this);
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

