#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Auto-injected type definitions by preprocessor */
/* Note: uint8_t, uint16_t, uint32_t, uint64_t, int8_t, int16_t, int32_t, int64_t are from stdint.h */
/* Note: size_t is from stddef.h */
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

// Decompiled by BinaryAI
// SHA256: 77e35323010a14117418c4aee6a0b640089759629ae1f42e6a51e6f3926abdb7

// Forward declarations
int call_weak_fn(void);
struct ios_base_Init;
extern struct ios_base_Init std___ioinit;
void *__dso_handle = (void *)0;

// Define std___ioinit to avoid linker errors
struct ios_base_Init std___ioinit = {0};

// C++ class and struct forward declarations
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct RTTIBase;
struct LifecycleClass;
struct Container_int_;
struct Container_double_;
struct ios_base_Init {
    int dummy;
};

// Define bool type
typedef unsigned char bool;
#define true 1
#define false 0

// Define uint type
typedef unsigned int uint;

// Define type_info structure with vtable pointer (for C++ RTTI)
struct type_info {
    void **vptr;  // Virtual table pointer
    const char *_name;  // Type name
};

// Define struct definitions needed for function signatures
struct Base { void **vptr; };
struct Derived { void **vptr; int value; };
struct MultiDerived { void **vptr; };
struct DiamondDerived { void **vptr; };
struct BaseA { void **vptr; };
struct BaseB { void **vptr; };
struct MiddleA { void **vptr; };
struct MiddleB { void **vptr; };
struct VirtualBase { void **vptr; };
struct RTTIDerivedA { void **vptr; };
struct RTTIDerivedB { void **vptr; };
struct RTTIBase { void **vptr; };
struct LifecycleClass { void **vptr; };
struct Container_int_ { 
    int data[10]; 
    unsigned int size;
    char _pad[64];  // Padding to match 0x28 offset used in functions
};
struct Container_double_ { 
    double data[10]; 
    unsigned int size;
    char _pad[64];  // Padding to match 0x50 offset used in functions
};

// Static and global variables
char completed_0 = 0;
int PTR_virtual_func_00022cf0 = 0;
int PTR_virtual_func_00022d10 = 0;
int DAT_00022d4c = 0;
int DAT_00022df0 = 0;
char DAT_00011c71[] = "%s\n";
char DAT_00011b0d[] = "%d\n";
char DAT_00011b2b[] = "%d\n";
char DAT_00011b47[] = "%d\n";
char DAT_00011b63[] = "%d\n";
char DAT_00011b7f[] = "%d\n";
char DAT_00011b9c[] = "%d\n";
char DAT_00011bb8[] = "%d\n";
char DAT_00011bd4[] = "%d\n";
char DAT_00011bf0[] = "%d\n";
char DAT_00011c0c[] = "%d\n";
char DAT_00011c29[] = "%d\n";
char DAT_00011c46[] = "%d\n";
char DAT_00011c64[] = "Base";
int PTR__RTTIBase_00022ed8 = 0;
int PTR__RTTIBase_00022eec = 0;
int PTR_funcA_00022d34 = 0;
int PTR_func_00022dbc = 0;
int PTR_func_00022dd4 = 0;

// Type info declarations
struct type_info int_typeinfoinfo = {0, "int"};
struct type_info RTTIBase_typeinfo = {0, "12RTTIBase"};
struct type_info RTTIDerivedA_typeinfo = {0, "12RTTIDerivedA"};
struct type_info RTTIDerivedB_typeinfo = {0, "12RTTIDerivedB"};

// Static members
int LifecycleClass_instance_count = 0;

// Helper functions
void __gmon_start__(void);
void std_ios_base_Init_Init_(void *);
void std_ios_base_Init__Init(void *);
unsigned long long CONCAT44(unsigned int, unsigned int);
int __aeabi_dcmpgt(double a, double b);
void *__dynamic_cast(void *, void *, void *, int);
void *__cxa_allocate_exception(unsigned int);
void __cxa_throw(void *, void *, void *);
void __cxa_atexit(void (*)(void *), void *, void *);

// CONCAT44 implementation - combines two 32-bit values into a 64-bit value
unsigned long long CONCAT44(unsigned int hi, unsigned int lo)
{
    return ((unsigned long long)hi << 32) | lo;
}

// Implement missing helper functions
void __gmon_start__(void)
{
    return;
}

void std_ios_base_Init_Init_(void *this_)
{
    return;
}

void std_ios_base_Init__Init(void *this_)
{
    return;
}

// C++ member function declarations
int Base_virtual_func(struct Base *this, int param_1);
int Derived_virtual_func(struct Derived *this, int param_1);
int DiamondDerived_func(struct DiamondDerived *this);
int DiamondDerived_func1(struct DiamondDerived *this);
int DiamondDerived_func2(struct DiamondDerived *this);
unsigned int MultiDerived_funcA(void);
unsigned int MultiDerived_funcB(struct MultiDerived *this);
typedef int (*virtual_func_ptr_t)(void *, int);
virtual_func_ptr_t PTR_virtual_func_00022d10 = (virtual_func_ptr_t)0;
char * Base_getName(void);
char * Derived_getName(void);
unsigned int RTTIDerivedA_getType(void);
unsigned int RTTIDerivedB_getType(void);
unsigned int VirtualBase_func(void);
void Container_int__push(struct Container_int_ *this, int param_1);
unsigned int Container_int__get(struct Container_int_ *this, int param_1);
unsigned int Container_int__getSize(struct Container_int_ *this);
void Container_double__push(struct Container_double_ *this, double param_1);
unsigned int Container_double__getSize(struct Container_double_ *this);

// Function: _init @ 0x10b84
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn();
 return iVar1;
}

// Function: <EXTERNAL>::operator.new @ 0x10ba4
void * operator_new(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10bb0
extern void *__cxa_begin_catch(void *);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10bbc
void *__cxa_allocate_exception(unsigned int size)
{
 return 0;
}

// Function: <EXTERNAL>::printf @ 0x10bc8
extern int printf(char *__format,...);

// Function: <EXTERNAL>::puts @ 0x10bd4
extern int puts(char *__s);

// Function: <EXTERNAL>::__libc_start_main @ 0x10be0
extern void __libc_start_main(void *, int, void *, void *, void *, unsigned int);

// Function: <EXTERNAL>::operator.new[] @ 0x10bec
void * operator_new__(unsigned int param_1)
{
 return malloc(param_1);
}

// Function: <EXTERNAL>::abort @ 0x10bf8
extern void abort(void);

// Function: <EXTERNAL>::operator.delete @ 0x10c04
void operator_delete(void *param_1)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10c10
extern void __cxa_end_cleanup(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x10c1c
void *__dynamic_cast(void *src, void *src_type, void *dst_type, int src2dst)
{
 return src;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x10c28
void __cxa_atexit(void (*func)(void *), void *obj, void *dso)
{
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10c34
void operator_delete__(void *param_1)
{
 if (param_1 != NULL) {
   free(param_1);
 }
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10c40
extern void __cxa_rethrow(void);

// Function: <EXTERNAL>::strlen @ 0x10c4c
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10c58
extern void std_ios_base_Init_Init(void *this_);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10c64
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10c70
extern void __gxx_personality_v0(void);

// Function: <EXTERNAL>::strcmp @ 0x10c7c
extern int strcmp(char *__s1,char *__s2);

// Function: <EXTERNAL>::__cxa_throw @ 0x10c88
void __cxa_throw(void *obj, void *tinfo, void *dest)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10c94
int __aeabi_dcmpgt(double a, double b)
{
 return a > b ? 1 : 0;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x10cac
extern void __cxa_finalize(void *);

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10cb8
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init_(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x10cf8
void _start(unsigned int param_1,unsigned int param_2)
{
 extern unsigned int main(void);
 extern void abort(void);
 __libc_start_main((void *)main,param_2,0,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10d3c
int call_weak_fn(void)
{
 __gmon_start__();
 return 0;
}

// Function: deregister_tm_clones @ 0x10d60
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10da4
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10df4
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10e60
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 local_28 = 0x74736554;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 uStack_18 = 0;
 uStack_14 = 0;
 uStack_10 = 0;
 local_c = 0;
 local_a = 0;
 local_9 = 0;
 sVar1 = strlen((char *)&local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10ed0
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 int iVar3;
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 *(int *)((int)pvVar1 + iVar3 * -4) = iVar2;
 iVar2 = iVar2 + 10;
 iVar3 = iVar3 + -1;
 } while (iVar3 != -5);
 iVar2 = LifecycleClass_instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass_instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 return LifecycleClass_instance_count * 1000 + iVar3 + iVar2;
}

// Function: call_virtual_func @ 0x10f48
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x10f64
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_14;
 unsigned int local_10;
 char **local_c;
 local_c = &PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (void **)&PTR_virtual_func_00022d10;
 iVar1 = Base_virtual_func((Base *)&local_c,5);
 iVar2 = (**local_14)(&local_14,5);
 return iVar1 + iVar2 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x10fdc
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_14;
 local_14 = 200;
 local_18 = (void **)&DAT_00022d4c;
 iVar1 = MultiDerived_funcA();
 iVar2 = (**local_18)(&local_18);
 return iVar1 + iVar2 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x1104c
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_18;
 unsigned int local_14;
 local_14 = 0x32;
 local_18 = (void **)&DAT_00022df0;
 iVar1 = DiamondDerived_func((DiamondDerived *)&local_18);
 local_14 = 100;
 iVar2 = (**local_18)(&local_18);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x110d0
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x110d8
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x110e0
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x110e8
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x110f0
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x111c0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x111cc
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint uVar7;
 bool bVar8;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(4);
 uVar7 = 0;
 *piVar2 = 0;
 *piVar2 = (int)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)(*piVar1 + -4) + 4);
 if (__s1 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1 != '*') {
 iVar3 = strcmp(__s1,"12RTTIDerivedA");
 uVar7 = 0;
 if (iVar3 == 0) {
 uVar7 = 10;
 }
 }
 pcVar4 = *(char **)(*(int *)(*piVar2 + -4) + 4);
 if (pcVar4 == "12RTTIDerivedB") {
 bVar8 = true;
 }
 else {
 bVar8 = false;
 if (*pcVar4 != '*') {
 iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
 bVar8 = iVar3 == 0;
 }
 }
 iVar3 = __dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar5 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 (**(void **)(*piVar1 + 4))(piVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 if (bVar8) {
 uVar7 = uVar7 | 0x14;
 }
 if (iVar3 != 0) {
 uVar7 = uVar7 + 100;
 }
 if (iVar5 != 0) {
 uVar7 = uVar7 + 200;
 }
 return uVar7 + sVar6;
}

// Function: test_cpp_oo_features @ 0x1136c
void test_cpp_oo_features(void)
{
 void **ppcVar1;
 size_t sVar2;
 void *pvVar3;
 unsigned int uVar4;
 int iVar5;
 int iVar6;
 void **local_40;
 void **local_3c [4];
 unsigned int local_2c;
 unsigned int uStack_28;
 unsigned int uStack_24;
 unsigned short local_20;
 char local_1e;
 char local_1d;
 char **local_1c;
 puts(&DAT_00011c71);
 local_3c[0] = (void **)0x74736554;
 local_3c[1] = (void **)0x0;
 local_3c[2] = (void **)0x0;
 local_3c[3] = (void **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar6 = 0;
 local_1d = 0;
 local_40 = (void **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf(&DAT_00011b0d,sVar2 + 0x125c);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
 iVar5 = LifecycleClass_instance_count + 1;
 iVar6 = *(int *)((int)pvVar3 + 8);
 LifecycleClass_instance_count = iVar5;
 operator_delete__(pvVar3);
 LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
 printf(&DAT_00011b2b,LifecycleClass_instance_count * 1000 + iVar6 + iVar5);
 local_1c = &PTR_virtual_func_00022cf0;
 local_3c[0] = (void **)0x3;
 local_40 = (void **)&PTR_virtual_func_00022d10;
 iVar5 = Base_virtual_func((Base *)&local_1c,5);
 iVar6 = (**local_40)(&local_40,5);
 printf(&DAT_00011b47,iVar5 + iVar6 + 0x15);
 local_3c[1] = (void **)&DAT_00022d4c;
 local_3c[2] = (void **)0xc8;
 local_3c[0] = (void **)0x64;
 local_40 = (void **)&PTR_funcA_00022d34;
 iVar5 = MultiDerived_funcB((MultiDerived *)(local_3c + 1));
 printf(&DAT_00011b63,iVar5 + 0x1f);
 local_3c[3] = (void **)&DAT_00022df0;
 local_2c = 0x32;
 local_40 = (void **)&PTR_func_00022dbc;
 local_3c[1] = (void **)&PTR_func_00022dd4;
 iVar5 = DiamondDerived_func((DiamondDerived *)(local_3c + 3));
 ppcVar1 = local_3c[3];
 *(unsigned int *)((int)local_3c + (int)local_40[-3]) = 100;
 iVar6 = (**ppcVar1)(local_3c + 3);
 printf(&DAT_00011b7f,iVar6 + iVar5);
 printf(&DAT_00011b9c,0x16);
 printf(&DAT_00011bb8,0x27);
 printf(&DAT_00011bd4,0x10);
 printf(&DAT_00011bf0,0x55);
 test_cpp_exception();
 printf(&DAT_00011c0c,0x2a);
 printf(&DAT_00011c29,0x2bf);
 uVar4 = test_cpp_rtti();
 printf(&DAT_00011c46,uVar4);
 return;
}

// Function: main @ 0x11648
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x1165c
int Base_virtual_func(struct Base *this, int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11664
int Derived_virtual_func(struct Derived *this, int param_1)
{
 return this->value * param_1;
}







// Function: template_max<int> @ 0x1167c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11688
double template_max_double_(double param_1,double param_2)
{
 if (__aeabi_dcmpgt(param_1, param_2)) {
 return param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x116bc
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x116d0
void Container_int__Container(struct Container_int_ *this)
{
 *(unsigned int *)((char *)this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x116dc
void Container_int__push(Container_int_ *this, int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)this + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this + 0x28) = iVar1 + 1;
 *(int *)((char *)this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x116f4
unsigned int Container_int__get(struct Container_int_ *this, int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)((char *)this + 0x28)) {
 uVar1 = *(unsigned int *)((char *)this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11714
unsigned int Container_int__getSize(struct Container_int_ *this)
{
 return *(unsigned int *)((char *)this + 0x28);
}

// Function: Container<double>::Constructor @ 0x1171c
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)((char *)this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11728
void Container_double__push(Container_double_ *this, double param_1)
{
 int iVar2;
 iVar2 = *(int *)((char *)this + 0x50);
 if (9 < iVar2) {
 return;
 }
 *(double *)((char *)this + iVar2 * 8) = param_1;
 *(int *)((char *)this + 0x50) = iVar2 + 1;
 return;
}



// Function: Container<double>::getSize @ 0x11778
unsigned int Container_double__getSize(Container_double_ *this)
{
 return *(unsigned int *)((char *)this + 0x50);
}

// Function: Base::getName @ 0x11780
char * Base_getName(void)
{
 return &DAT_00011c64;
}

// Function: Base::~Base @ 0x11790
void Base__Base(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::getName @ 0x117a0
char * Derived_getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x117b0
void Derived__Derived(Derived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcA @ 0x117c0
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x117c8
void MultiDerived__MultiDerived(struct MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcB @ 0x117d8
unsigned int MultiDerived_funcB(struct MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x117e0
unsigned int MultiDerived_funcB_instance(struct MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x117e8
void MultiDerived__MultiDerived2(struct MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x117ec
void MultiDerived__MultiDerived3(struct MultiDerived *this)
{
 operator_delete((char *)this + -8);
 return;
}

// Function: BaseA::funcA @ 0x11800
unsigned int BaseA_funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x1180c
void BaseA__BaseA(struct BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x1181c
unsigned int BaseB_funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11828
void BaseB__BaseB(struct BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x11838
int MiddleA_func(struct MiddleA *this)
{
 return *(int *)((char *)this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11854
void MiddleA__MiddleA(struct MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x11864
int MiddleA_func1(struct MiddleA *this)
{
 return *(int *)((char *)((char *)this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)((char *)this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11884
void MiddleA__MiddleA2(struct MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11888
void MiddleA__MiddleA3(struct MiddleA *this)
{
 operator_delete((char *)this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB::func @ 0x118a4
int MiddleB_func(struct MiddleB *this)
{
 return *(int *)((char *)this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x118c0
void MiddleB__MiddleB(struct MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB::func @ 0x118d0
int MiddleB_func1(struct MiddleB *this)
{
 return *(int *)((char *)((char *)this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)((char *)this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x118f0
void MiddleB__MiddleB2(struct MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x118f4
void MiddleB__MiddleB3(struct MiddleB *this)
{
 operator_delete((char *)this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::func @ 0x11910
int DiamondDerived_func(struct DiamondDerived *this)
{
 return *(int *)((char *)this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11928
void DiamondDerived__DiamondDerived(struct DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x11938
int DiamondDerived_func1(struct DiamondDerived *this)
{
 return *(int *)((char *)((char *)this + -8) + *(int *)(*(int *)((char *)this + -8) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11954
void DiamondDerived__DiamondDerived2(struct DiamondDerived *this)
{
 operator_delete((char *)this + -8);
 return;
}

// Function: DiamondDerived::func @ 0x11968
int DiamondDerived_func2(struct DiamondDerived *this)
{
 return *(int *)((char *)((char *)this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)((char *)this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1198c
void DiamondDerived__DiamondDerived3(struct DiamondDerived *this)
{
 operator_delete((char *)this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase::func @ 0x119a8
unsigned int VirtualBase_func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x119b4
void VirtualBase__VirtualBase(struct VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x119c4
void RTTIDerivedA__RTTIDerivedA(struct RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x119d4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x119e0
void RTTIDerivedB__RTTIDerivedB(struct RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119f0
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: _fini @ 0x119f8
void _fini(void)
{
 return;
}

