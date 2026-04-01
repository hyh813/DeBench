// Decompiled by BinaryAI
// SHA256: d9e7362b0248b250abdba69a9c576cf04e927c19a7172ae75f5a280e4eb7e8d7

// Type definitions
typedef unsigned char undefined3;
typedef char undefined4;

// Container template specializations
struct Container_int_ {
    int data[10];
    int size;
};

struct Container_double_ {
    double data[10];
    int size;
};

// Forward declarations
class Base;
class Init;
struct RTTIBase_typeinfo;
struct RTTIDerivedA_typeinfo;
struct RTTIDerivedB_typeinfo;
namespace RTTIBase { extern RTTIBase_typeinfo typeinfo; }
namespace RTTIDerivedA { extern RTTIDerivedA_typeinfo typeinfo; }
namespace RTTIDerivedB { extern RTTIDerivedB_typeinfo typeinfo; }

// External declarations
extern void *__dso_handle;
char completed_0 = 0;

// External declarations
extern int __gmon_start__(void);

// Class definitions
class LifecycleClass {
public:
    static int instance_count;
};

// RTTI typeinfo pointers (forward declarations)
extern char PTR__RTTIBase_00103d78;
extern char PTR__RTTIBase_00103da0;

// String constants
extern char DAT_001021d4;
extern char DAT_0010207d;
extern char DAT_0010209b;
extern char DAT_001020b7;
extern char DAT_001020d3;
extern char DAT_001020ef;
extern char DAT_0010210c;
extern char DAT_00102128;
extern char DAT_00102144;
extern char DAT_00102160;
extern char DAT_0010217c;
extern char DAT_00102199;
extern char DAT_001021b6;

// RTTI typeinfo structures
struct RTTIBase_typeinfo {
    const char *type_name;
    void *base_class;
};

struct RTTIDerivedA_typeinfo {
    const char *type_name;
    void *base_class;
};

struct RTTIDerivedB_typeinfo {
    const char *type_name;
    void *base_class;
};

// Standard library includes
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <ios>

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
 return;
}

// Function: <EXTERNAL>::printf @ 0x101030
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101040
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x101050
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101060
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x101070
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x101080
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x101090
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1010a0
void* __dynamic_cast(const void* __src, const void* __dst_typeinfo, const void* __src_typeinfo, long __unk)
{
 void* pvVar1;
 pvVar1 = __dynamic_cast(__src, __dst_typeinfo, __src_typeinfo, __unk);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x1010b0
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101060
void* __cxa_allocate_exception(size_t size)
{
 void* pvVar1;
 pvVar1 = __cxa_allocate_exception(size);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x1010d0
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x1010e0
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x1010f0
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101100
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x101110
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x101120
void __cxa_finalize(void *ptr)
{
 __cxa_finalize(ptr);
 return;
}

// Function: main @ 0x101680
int main(void);

// External declaration for libc
extern void __libc_start_main(void *main, void *argc, void *argv, void (*dtor)(void), void *rtld_info, void *stack_end, ...);

// Function: _start @ 0x101150
void _start(unsigned long long param_1, unsigned long long param_2)
{
 char auStack_8 [8];
 __libc_start_main(main, param_2, &auStack_8, 0, 0, param_1, auStack_8);
 do {
 } while( true );
}

// Function: deregister_tm_clones @ 0x101180
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1011b0
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x1011f0
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

// Function: test_cpp_member_func @ 0x101240
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_24;
 unsigned int uStack_20;
 unsigned int uStack_1c;
 unsigned int uStack_18;
 undefined3 uStack_14;
 unsigned int uStack_11;
 unsigned int uStack_d;
 unsigned int uStack_9;
 char local_5;
 uStack_14 = 0;
 uStack_11 = 0;
 uStack_d = 0;
 uStack_9 = 0;
 local_24 = 0x74736554;
 uStack_20 = 0;
 uStack_1c = 0;
 uStack_18 = 0;
 local_5 = 0;
 sVar1 = strlen((char *)&local_24);
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101280
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x1012a0
void call_virtual_func(Base *param_1, int param_2)
{
 (void)param_2;
 (**(void (**)(Base *))(*(void ***)param_1)[0])(param_1);
 return;
}

// Function: test_cpp_virtual_func @ 0x1012b0
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x1012c0
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x1012d0
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1012e0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1012f0
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x101300
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101310
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101320
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x1013e0
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1013f0
int test_cpp_rtti(void)
{
 int iVar1;
 void **puVar2;
 void **plVar3;
 void *lVar4;
 int iVar5;
 puVar2 = (void **)operator_new(8);
 *puVar2 = (void *)&PTR__RTTIBase_00103d78;
 plVar3 = (void **)operator_new(8);
 *plVar3 = (void *)&PTR__RTTIBase_00103da0;
 lVar4 = __dynamic_cast(*puVar2,(void*)&RTTIBase::typeinfo,(void*)&RTTIDerivedA::typeinfo,0);
 iVar1 = 0x82;
 if (lVar4 == NULL) {
 iVar1 = 0x1e;
 }
 lVar4 = __dynamic_cast(*plVar3,(void*)&RTTIBase::typeinfo,(void*)&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar1 + 200;
 if (lVar4 == NULL) {
 iVar5 = iVar1;
 }
 operator_delete(puVar2);
 (*(void (**)(void **))(*(void **)*plVar3 + 8))(plVar3);
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x1014a0
void test_cpp_oo_features(void)
{
 uint uVar1;
 int iVar2;
 size_t sVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 int iVar7;
 unsigned int local_4c;
 unsigned int uStack_48;
 unsigned int uStack_44;
 unsigned int uStack_40;
 undefined3 uStack_3c;
 unsigned int uStack_39;
 unsigned int uStack_35;
 unsigned int uStack_31;
 char local_2d;
 puts(&DAT_001021d4);
 uStack_3c = 0;
 uStack_39 = 0;
 uStack_35 = 0;
 uStack_31 = 0;
 local_4c = 0x74736554;
 uStack_48 = 0;
 uStack_44 = 0;
 uStack_40 = 0;
 local_2d = 0;
 sVar3 = strlen((char *)&local_4c);
 printf(&DAT_0010207d,(unsigned long)((int)sVar3 + 0x125c));
 printf(&DAT_0010209b,(unsigned long)(LifecycleClass::instance_count * 0x3e9 + 0x15));
 printf(&DAT_001020b7,0x2a);
 printf(&DAT_001020d3,0x47);
 printf(&DAT_001020ef,0x28a);
 printf(&DAT_0010210c,0x16);
 printf(&DAT_00102128,0x27);
 printf(&DAT_00102144,0x10);
 printf(&DAT_00102160,0x55);
 uVar1 = test_cpp_exception();
 printf(&DAT_0010217c,(unsigned long)uVar1);
 printf(&DAT_00102199,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = &PTR__RTTIBase_00103d78;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00103da0;
 lVar6 = __dynamic_cast(puVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar2 = 0x82;
 if (lVar6 == 0) {
 iVar2 = 0x1e;
 }
 lVar6 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar7 = iVar2 + 200;
 if (lVar6 == 0) {
 iVar7 = iVar2;
 }
 operator_delete(puVar4);
 (**(void **)(*plVar5 + 8))(plVar5);
 printf(&DAT_001021b6,(unsigned long)(iVar7 + 0xe));
 return;
}

// Function: main @ 0x101680
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101690
int template_max_int_(int param_1,int param_2)
{
 if (param_2 < param_1) {
 param_2 = param_1;
 }
 return param_2;
}

// Function: template_max<double> @ 0x1016a0
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1016b0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Container template declaration
template<typename T>
struct Container {
    T data[10];
    int size;
};

// Function: Container<int>::Container @ 0x1016c0
template<>
Container<int>::Container(Container<int>* this_ptr)
{
    this_ptr->size = 0;
}
{
 (void)this_ptr;
}

// Function: Container<int>::push @ 0x1016d0
template<>
void Container<int>::push(Container<int> *this_ptr, int param_1)
{
 int iVar1;
 iVar1 = this_ptr->size;
 if ((long)iVar1 < 10) {
 this_ptr->size = iVar1 + 1;
 this_ptr->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1016f0
unsigned int Container<int>::get(Container<int> *this_ptr, int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (this_ptr->size != param_1 && param_1 <= this_ptr->size)) {
 uVar1 = this_ptr->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x101710
unsigned int Container<int>::getSize(Container<int> *this_ptr)
{
 return this_ptr->size;
}

// Function: Container<double>::Container @ 0x101720
void Container<double>::Container(Container_double_ *this_ptr)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x101730
void __thiscall Container<double>::push(Container_double_ *this_ptr, double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if ((long)iVar1 < 10) {
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x101750
unsigned long long __thiscall Container<double>::get(Container_double_ *this_ptr, int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (unsigned long)(uint)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101770
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101780
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101790
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1017a0
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1017b0
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1017c0
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x1017c8
void _fini(void)
{
 return;
}

