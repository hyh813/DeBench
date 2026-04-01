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

/* Forward declarations for undeclared identifiers */
extern void *__dso_handle;
extern void *__gmon_start__;
int completed_0 = 0;

/* Forward declarations for classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int_;
struct Container_double_;

/* RTTI typeinfo declarations */
struct typeinfo {
    char *name;
};
struct RTTIBase {
    static struct typeinfo typeinfo;
};
struct RTTIDerivedA {
    static struct typeinfo typeinfo;
};
struct RTTIDerivedB {
    static struct typeinfo typeinfo;
};
struct int_ {
    static struct typeinfo typeinfo;
};
extern char PTR__RTTIBase_00022ed8[];
extern char PTR__RTTIBase_00022eec[];
extern char PTR__RTTIDerivedA_00022f00[];
extern char PTR__RTTIDerivedB_00022f14[];

struct typeinfo RTTIBase::typeinfo = { "12RTTIBase" };
struct typeinfo RTTIDerivedA::typeinfo = { "12RTTIDerivedA" };
struct typeinfo RTTIDerivedB::typeinfo = { "12RTTIDerivedB" };
struct typeinfo int_::typeinfo = { "3int" };

/* Weak function declaration */
void call_weak_fn(void);

/* Forward declaration for main */
int main(void);

/* Virtual function pointers */
extern void *PTR_virtual_func_00022cf0;
extern void *PTR_virtual_func_00022d10;
extern void *PTR_funcA_00022d34;
extern void *PTR_func_00022dbc;
extern void *PTR_func_00022dd4;
extern void *DAT_00022d4c;
extern void *DAT_00022df0;
extern char DAT_00011c71[];
extern char DAT_00011b0d[];
extern char DAT_00011b2b[];
extern char DAT_00011b47[];
extern char DAT_00011b63[];
extern char DAT_00011b7f[];
extern char DAT_00011b9c[];
extern char DAT_00011bb8[];
extern char DAT_00011bd4[];
extern char DAT_00011bf0[];
extern char DAT_00011c0c[];
extern char DAT_00011c29[];
extern char DAT_00011c46[];
extern char DAT_00011c64[];

/* std namespace declarations */
namespace std {
    struct ios_base {
        struct Init {
        };
    };
    ios_base::Init __ioinit;
}

/* Class declarations */
struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

// Decompiled by BinaryAI
// SHA256: 77e35323010a14117418c4aee6a0b640089759629ae1f42e6a51e6f3926abdb7

// Function: _init @ 0x10b84
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: <EXTERNAL>::operator new @ 0x10ba4
void *operator_new(size_t param_1);

// Function: <EXTERNAL>::operator new[] @ 0x10bec
void *operator_new_array(size_t param_1);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10bb0
void *__cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10bbc
void __cxa_allocate_exception(void);

// Function: <EXTERNAL>::printf @ 0x10bc8
int printf(char *__format, ...);

// Function: <EXTERNAL>::puts @ 0x10bd4
int puts(char *__s);

// Function: <EXTERNAL>::__libc_start_main @ 0x10be0
void __libc_start_main(void);

// Function: <EXTERNAL>::operator.new[] @ 0x10bec
void *operator_new__(unsigned int param_1);

// Function: <EXTERNAL>::abort @ 0x10bf8
void abort(void);

// Function: <EXTERNAL>::operator.delete @ 0x10c04
void operator_delete(void *param_1);

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10c10
void __cxa_end_cleanup(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x10c1c
void *__dynamic_cast(const void *param_1, const void *param_2, const void *param_3, int param_4);

// Function: <EXTERNAL>::__cxa_atexit @ 0x10c28
int __cxa_atexit(void (*param_1)(void *), void *param_2, void *param_3);

// Function: <EXTERNAL>::operator.delete[] @ 0x10c34
void operator_delete__(void *param_1);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10c40
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::strlen @ 0x10c4c
size_t __strlen(char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10c58
void __thiscall std_ios_base_Init_Init(std::ios_base::Init *this)
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10c64
void __cxa_end_catch(void);

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10c70
void __gxx_personality_v0(void)
{
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x10c7c
int strcmp(char *__s1,char *__s2)
{
 char *s1 = __s1;
 char *s2 = __s2;
 while (*s1 && *s2 && *s1 == *s2) {
  s1++;
  s2++;
 }
 return (int)(unsigned char)*s1 - (int)(unsigned char)*s2;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10c88
void __cxa_throw(void *param_1, void *param_2, void *param_3)
{
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10c94
int __aeabi_dcmpgt(double param_1, double param_2)
{
 return param_1 > param_2;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x10cac
void __cxa_finalize(void *param_1)
{
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10cb8
void _GLOBAL__sub_I_5_1_cpp(void)
{
 new (&std::__ioinit) std::ios_base::Init();
 __cxa_atexit((void (*)(void *))(void (*)(std::ios_base::Init*))&std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x10cf8
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,0,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10d3c
void *__gmon_start__;
void call_weak_fn(void)
{
 if (__gmon_start__ != 0) {
 ((void(*)())__gmon_start__)();
 }
 return;
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
 sVar1 = __strlen((char *)&local_28);
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
 iVar2 = LifecycleClass::instance_count + 1;
 iVar3 = *(int *)((int)pvVar1 + 8);
 LifecycleClass::instance_count = iVar2;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return LifecycleClass::instance_count * 1000 + iVar3 + iVar2;
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
 iVar1 = Base::virtual_func((Base *)&local_c,5);
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
 iVar1 = MultiDerived::funcA();
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
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_18);
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
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x111c0
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x111cc
int test_cpp_rtti(void)
{
 void *pvVar1;
 void *pvVar2;
 int iVar3;
 char *pcVar4;
 int iVar5;
 size_t sVar6;
 char *__s1;
 uint uVar7;
 bool bVar8;
 pvVar1 = operator_new(4);
 *(void **)pvVar1 = (void *)&PTR__RTTIBase_00022ed8;
 pvVar2 = operator_new(4);
 uVar7 = 0;
 *(void **)pvVar2 = (void *)0;
 *(void **)pvVar2 = (void *)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)(*(int *)((int)pvVar1 + -4) + 4);
 if (*__s1 != '*') {
  iVar3 = strcmp(__s1,"12RTTIDerivedA");
  uVar7 = 0;
  if (iVar3 == 0) {
   uVar7 = 10;
  }
 }
 pcVar4 = *(char **)(*(int *)((int)pvVar2 + -4) + 4);
 bVar8 = false;
 if (*pcVar4 != '*') {
  iVar3 = strcmp(pcVar4,"12RTTIDerivedB");
  bVar8 = iVar3 == 0;
 }
 iVar3 = __dynamic_cast(pvVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = __dynamic_cast(pvVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
  pcVar4 = __s1;
 }
 sVar6 = __strlen(pcVar4);
 (*(void (*)(void *))(*(int *)((int)pvVar1 + 4)))(pvVar1);
 (*(void (*)(void *))(*(int *)((int)pvVar2 + 4)))(pvVar2);
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
 sVar2 = __strlen((char *)local_3c);
 printf(&DAT_00011b0d,sVar2 + 0x125c);
 pvVar3 = operator_new__(0x14);
 iVar5 = 0;
 do {
 *(int *)((int)pvVar3 + iVar5 * -4) = iVar6;
 iVar6 = iVar6 + 10;
 iVar5 = iVar5 + -1;
 } while (iVar5 != -5);
 iVar5 = LifecycleClass::instance_count + 1;
 iVar6 = *(int *)((int)pvVar3 + 8);
 LifecycleClass::instance_count = iVar5;
 operator_delete__(pvVar3);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_00011b2b,LifecycleClass::instance_count * 1000 + iVar6 + iVar5);
 local_1c = &PTR_virtual_func_00022cf0;
 local_3c[0] = (void **)0x3;
 local_40 = (void **)&PTR_virtual_func_00022d10;
 iVar5 = Base::virtual_func((Base *)&local_1c,5);
 iVar6 = (**local_40)(&local_40,5);
 printf(&DAT_00011b47,iVar5 + iVar6 + 0x15);
 local_3c[1] = (void **)&DAT_00022d4c;
 local_3c[2] = (void **)0xc8;
 local_3c[0] = (void **)0x64;
 local_40 = (void **)&PTR_funcA_00022d34;
 iVar5 = MultiDerived::funcB((MultiDerived *)(local_3c + 1));
 printf(&DAT_00011b63,iVar5 + 0x1f);
 local_3c[3] = (void **)&DAT_00022df0;
 local_2c = 0x32;
 local_40 = (void **)&PTR_func_00022dbc;
 local_3c[1] = (void **)&PTR_func_00022dd4;
 iVar5 = DiamondDerived::func((DiamondDerived *)(local_3c + 3));
 ppcVar1 = local_3c[3];
 *(unsigned int *)((int)local_3c + (int)local_40[-3]) = 100;
 iVar6 = (**ppcVar1)(local_3c + 3);
 printf(&DAT_00011b7f,iVar6 + iVar5);
 printf(&DAT_00011b9c,0x16);
 printf(&DAT_00011bb8,0x27);
 printf(&DAT_00011bd4,0x10);
 printf(&DAT_00011bf0,0x55);
 uVar4 = test_cpp_exception();
 printf(&DAT_00011c0c,uVar4);
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
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11664
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}

// Function: Base::~Base @ 0x11670
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11674
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11678
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
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
 int result;
 result = __aeabi_dcmpgt(param_1, param_2);
 return result ? param_1 : param_2;
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
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x116dc
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

// Function: Container<int>::get @ 0x116f4
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)(this + 0x28)) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11714
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x1171c
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11728
void Container<double>::push(Container_double_ *this, double param_1)
{
 unsigned int *puVar1;
 int iVar2;
 iVar2 = *(int *)(this + 0x50);
 if (9 < iVar2) {
 return;
 }
 puVar1 = (unsigned int *)(this + iVar2 * 8);
 *(double *)puVar1 = param_1;
 *(int *)(this + 0x50) = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x1174c
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this + 0x50)) {
 uVar1 = *(unsigned int *)(this + param_1 * 8);
 uVar2 = *(unsigned int *)((int)(this + param_1 * 8) + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11778
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x11780
char * Base::getName(void)
{
 return &DAT_00011c64;
}

// Function: Base::~Base @ 0x11790
void __thiscall Base::_Base(Base *this)
{
 operator_delete((void *)this);
 return;
}

// Function: Derived::getName @ 0x117a0
char * Derived::getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x117b0
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete((void *)this);
 return;
}

// Function: MultiDerived::funcA @ 0x117c0
unsigned int MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x117c8
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete((void *)this);
 return;
}

// Function: MultiDerived::funcB @ 0x117d8
unsigned int MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x117e0
unsigned int __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x117e8
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x117ec
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete((void *)(this + -8));
 return;
}

// Function: BaseA::funcA @ 0x11800
unsigned int BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x11808
void __thiscall BaseA::_BaseA(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x1180c
void __thiscall BaseA::_BaseA(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x1181c
unsigned int BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11824
void __thiscall BaseB::_BaseB(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x11828
void __thiscall BaseB::_BaseB(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x11838
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11850
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11854
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x11864
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11884
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x11888
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: MiddleB::func @ 0x118a4
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x118bc
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x118c0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB::func @ 0x118d0
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x118f0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x118f4
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: DiamondDerived::func @ 0x11910
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11928
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x11938
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((int)(this + -8) + *(int *)(*(int *)(this + -8) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11950
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11954
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -8);
 return;
}

// Function: DiamondDerived::func @ 0x11968
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((int)(this + *(int *)(*(int *)this + -0xc)) +
 *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11988
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1198c
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return;
}

// Function: VirtualBase::func @ 0x119a8
unsigned int VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x119b0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x119b4
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x119c4
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x119d4
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x119dc
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x119e0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119f0
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x119f8
void _fini(void)
{
 return;
}

