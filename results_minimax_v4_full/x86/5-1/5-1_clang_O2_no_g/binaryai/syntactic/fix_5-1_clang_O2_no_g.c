/* Auto-injected type definitions by preprocessor */
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <new>
#include <exception>

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

// Decompiled by BinaryAI
// SHA256: 2c5a5ccec37c6d92821e5c3a886f3e66e55b17ecf4204b3e01e434e39bb2684a

// Forward declarations for linker-provided symbols
void __gmon_start__(void);
void frame_dummy(void);
void __do_global_ctors_aux(void);

// Forward declarations for external C++ symbols
void *__dso_handle;

// Missing type definitions
struct Base { void (**__vftable)(); };
struct LifecycleClass { static int instance_count; };
struct RTTIBase { static void* typeinfo; };
struct RTTIDerivedA { static void* typeinfo; };
struct RTTIDerivedB { static void* typeinfo; };

// Define static members
int LifecycleClass::instance_count;
void* RTTIBase::typeinfo;
void* RTTIDerivedA::typeinfo;
void* RTTIDerivedB::typeinfo;

// Container template instantiations
struct Container_int_ { int field_0x28; };
struct Container_double_ { int field_0x50; };

// External data symbols
extern char DAT_000121d8[];
extern char DAT_00012081[];
extern char DAT_0001209f[];
extern char DAT_000120bb[];
extern char DAT_000120d7[];
extern char DAT_000120f3[];
extern char DAT_00012110[];
extern char DAT_0001212c[];
extern char DAT_00012148[];
extern char DAT_00012164[];
extern char DAT_00012180[];
extern char DAT_0001219d[];
extern char DAT_000121ba[];
extern void* PTR__RTTIBase_00013ecc;
extern void* PTR__RTTIBase_00013ee0;

// Typeinfo symbols
struct typeinfo_int_ {};
void* typeinfo_int_;

// RTTI typeinfo external declarations
extern void* PTR__RTTIBase_00013ecc;
extern void* PTR__RTTIBase_00013ee0;

namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    static std::ios_base::Init __ioinit;
}

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
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator new @ 0x11040
void* operator new(unsigned long param_1);

// Function: <EXTERNAL>::operator delete @ 0x110a0
void operator delete(void *param_1);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void *__cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(unsigned long size);

// Function: <EXTERNAL>::strlen @ 0x11070
size_t strlen(char *__s);

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
int __cxa_atexit(void *param_1, void *param_2, void *param_3);

// Function: <EXTERNAL>::std::ios_base::Init::~Init @ 0x11118
void std::ios_base::Init::~Init(void);

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
void *__dynamic_cast(void *ptr, void *from_type, void *to_type, ptrdiff_t is_virtual);

// Function: <EXTERNAL>::printf @ 0x110c0
int printf(char *__format, ...);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow(void);

// Function: <EXTERNAL>::puts @ 0x110e0
int puts(char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
void std::ios_base::Init::Init(void);

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw(void * thrown_exception, void * type_info, void * dest);

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume(void);

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 unsigned int extraout_var;
 uVar1 = 0x11148;
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit((void *)&std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11180
void _start(int argc, char **argv)
{
 __libc_start_main(main, argc, argv, (void *)0, (void *)0, (void *)0, (void *)0);
 while(1) {}
}

// Function: __i686.get_pc_thunk.bx @ 0x111ac
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x111b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x111c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11200
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11250
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x2e03) == '\0') {
 if (*(int *)(unaff_EDI + 0x2d8b) != 0) {
 FUN_00011130(*(unsigned int *)(unaff_EDI + 0x2def));
 }
 uVar1 = *(uint *)(unaff_EDI + 0x2e07);
 while (uVar1 < ((unaff_EDI + 0x2c2f) - (unaff_EDI + 0x2c2b) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x2e07) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x2c2b + (uVar1 + 1) * 4))();
 uVar1 = *(uint *)(unaff_EDI + 0x2e07);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x2e03) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x112e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x112ed
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: test_cpp_member_func @ 0x11300
size_t test_cpp_member_func(void)
{
 size_t sVar1;
 char local_28[4];
 local_28[0] = 'T';
 local_28[1] = 'e';
 local_28[2] = 's';
 local_28[3] = 't';
 sVar1 = strlen(local_28);
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x11380
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: FUN_00011385 @ 0x11385
int FUN_00011385(void)
{
 int unaff_retaddr;
 return *(int *)(unaff_retaddr + 0x2ce7) * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x113a0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x113d0
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x113e0
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x113f0
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x11400
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x11410
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x11420
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x11430
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x11440
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,typeinfo_int,0);
}

// Function: test_cpp_smart_ptr @ 0x11530
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11540
int test_cpp_rtti(void)
{
 unsigned int *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = &PTR__RTTIBase_00013ecc;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00013ee0;
 iVar3 = __dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 operator_delete(puVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 return iVar3 + 0xe;
}

// Function: test_cpp_oo_features @ 0x11600
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int *puVar3;
 int *piVar4;
 int iVar5;
 int iVar6;
 int iVar7;
 char local_30[4];
 unsigned int local_2c;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 puts(&DAT_000121d8);
 uStack_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0;
 local_2c = 0;
 local_30[0] = 'T';
 local_30[1] = 'e';
 local_30[2] = 's';
 local_30[3] = 't';
 uStack_14 = 0;
 sVar1 = strlen(local_30);
 printf(&DAT_00012081,sVar1 + 0x125c);
 printf(&DAT_0001209f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(&DAT_000120bb,0x2a);
 printf(&DAT_000120d7,0x47);
 printf(&DAT_000120f3,0x28a);
 printf(&DAT_00012110,0x16);
 printf(&DAT_0001212c,0x27);
 printf(&DAT_00012148,0x10);
 printf(&DAT_00012164,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_00012180,uVar2);
 printf(&DAT_0001219d,0x2bf);
 puVar3 = (unsigned int *)operator_new(4);
 *puVar3 = &PTR__RTTIBase_00013ecc;
 piVar4 = (int *)operator_new(4);
 *piVar4 = (int)&PTR__RTTIBase_00013ee0;
 iVar5 = __dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar7 + 200;
 if (iVar6 == 0) {
 iVar5 = iVar7;
 }
 operator_delete(puVar3);
 (**(void **)(*piVar4 + 4))(piVar4);
 printf(&DAT_000121ba,iVar5 + 0xe);
 return;
}

// Function: main @ 0x11810
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max_int_ @ 0x11830
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x11840
double template_max_double_(double param_1,double param_2)
{
 if (param_2 <= param_1 || param_1 != param_2) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_swap<int> @ 0x11860
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11880
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11890
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

// Function: Container<int>::get @ 0x118b0
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x118d0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x118e0
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x118f0
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

// Function: Container<double>::get @ 0x11910
long double __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = (long double)*(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11930
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11940
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11970
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11980
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11990
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x119c0
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: __do_global_ctors_aux @ 0x119d0
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x11a1c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

