#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

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
#include <stdbool.h>

/* C++ type_info stub - C compatible */
struct type_info {
    void (*destructor)(struct type_info *this);
    const char *name;
};
typedef struct type_info type_info;

/* Standard library function declarations - already in headers */
void *operator_new(size_t size);
void operator_delete(void *ptr);
void *operator_new__(size_t size);
void operator_delete__(void *ptr);

// Forward declarations for compiler/runtime functions
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);
void _fini(void);
void __i686_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_bx(void);
void __x86_get_pc_thunk_dx(void);
void __x86_get_pc_thunk_di(void);
void __cxa_begin_catch(void *e);
void __cxa_rethrow(void *exception_obj);
void __cxa_throw(void *thrown_exception, const struct type_info *tinfo, void (*dest)(void*));

/* Forward declarations for C++ classes */
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct LifecycleClass;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* Type definitions for template classes */
struct Container_int_;
struct Container_double_;

/* C++ class definitions - minimal opaque structs */
struct Base {
    void *vtable;
    int data;
};

struct Derived {
    void *vtable;
    int value;
};

struct MultiDerived {
    void *vtable1;
    void *vtable2;
    char data[16];
};

struct DiamondDerived {
    void *vtable;
    void *vbptr;
    int data;
    char extra[16];
};

struct LifecycleClass {
    int values[5];
};

struct BaseA {
    void *vtable;
    char data[8];
};

struct BaseB {
    void *vtable;
    char data[8];
};

struct MiddleA {
    void *vtable1;
    void *vtable2;
    char data[16];
};

struct MiddleB {
    void *vtable1;
    void *vtable2;
    char data[16];
};

struct VirtualBase {
    void *vtable;
    void *vbptr;
    char data[8];
};

struct RTTIBase {
    void *vtable;
    struct type_info *type_info;
};

struct RTTIDerivedA {
    void *vtable;
    struct type_info *type_info;
    int value;
};

struct RTTIDerivedB {
    void *vtable;
    struct type_info *type_info;
    int value;
};

/* Template container definitions */
struct Container_int_ {
    int data[11];
};

struct Container_double_ {
    char data[128];
};

/* Forward declarations for C++ member functions */
int Base_virtual_func(Base *this,int param_1);
int Base__Base(Base *this);
void Base__Base_destructor(Base *this);
char * Base_getName(Base *this);
int Derived_virtual_func(Derived *this,int param_1);
char * Derived_getName(Derived *this);
int Derived__Derived(Derived *this);
void Derived__Derived_destructor(Derived *this);
unsigned int MultiDerived_funcA(MultiDerived *this);
unsigned int MultiDerived_funcB(MultiDerived *this);
unsigned int MultiDerived_funcB_this(MultiDerived *this);
int MultiDerived__MultiDerived(MultiDerived *this);
void MultiDerived__MultiDerived_destructor(MultiDerived *this);
int MultiDerived__MultiDerived_v2(MultiDerived *this);
int MultiDerived__MultiDerived_v3(MultiDerived *this);
int DiamondDerived_func(DiamondDerived *this);
int DiamondDerived__DiamondDerived(DiamondDerived *this);
void DiamondDerived__DiamondDerived_destructor(DiamondDerived *this);
int DiamondDerived_func_v2(DiamondDerived *this);
int DiamondDerived__DiamondDerived_v2(DiamondDerived *this);
int DiamondDerived__DiamondDerived_v3(DiamondDerived *this);
int DiamondDerived_func_v3(DiamondDerived *this);
int DiamondDerived__DiamondDerived_v4(DiamondDerived *this);
int DiamondDerived__DiamondDerived_v5(DiamondDerived *this);
unsigned int BaseA_funcA(BaseA *this);
int BaseA__BaseA(BaseA *this);
void BaseA__BaseA_destructor(BaseA *this);
unsigned int BaseB_funcB(BaseB *this);
int BaseB__BaseB(BaseB *this);
void BaseB__BaseB_destructor(BaseB *this);
int MiddleA_func(MiddleA *this);
int MiddleA__MiddleA(MiddleA *this);
void MiddleA__MiddleA_destructor(MiddleA *this);
int MiddleA_func_v2(MiddleA *this);
int MiddleA__MiddleA_v2(MiddleA *this);
int MiddleA__MiddleA_v3(MiddleA *this);
int MiddleB_func(MiddleB *this);
int MiddleB__MiddleB(MiddleB *this);
void MiddleB__MiddleB_destructor(MiddleB *this);
int MiddleB_func_v2(MiddleB *this);
int MiddleB__MiddleB_v2(MiddleB *this);
int MiddleB__MiddleB_v3(MiddleB *this);
unsigned int VirtualBase_func(VirtualBase *this);
int VirtualBase__VirtualBase(VirtualBase *this);
void VirtualBase__VirtualBase_destructor(VirtualBase *this);
int RTTIBase__RTTIBase(RTTIBase *this);
int RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this);
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this);
int RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this);
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this);

/* Template class functions */
void Container_int__Container(Container_int_ *this);
void Container_int_push(Container_int_ *this,int param_1);
unsigned int Container_int_get(Container_int_ *this,int param_1);
int Container_int_getSize(Container_int_ *this);
void Container_double__Container(Container_double_ *this);
void Container_double_push(Container_double_ *this,double param_1);
long double Container_double_get(Container_double_ *this,int param_1);
int Container_double_getSize(Container_double_ *this);

/* Template functions */
int template_max_int_(int param_1,int param_2);
double template_max_double_(double param_1,double param_2);
void template_swap_int_(int *param_1,int *param_2);

/* Forward declarations for test functions */
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *param_1,int param_2);
int test_cpp_virtual_func(void);
int test_cpp_multiple_inheritance(void);
int test_cpp_diamond_inheritance(void);
unsigned int test_cpp_operator_overload(void);
unsigned int test_cpp_template_func(void);
unsigned int test_cpp_template_class(void);
unsigned int test_cpp_lambda(void);
unsigned int test_cpp_exception(void);
unsigned int test_cpp_smart_ptr(void);
int test_cpp_rtti(void);
void test_cpp_oo_features(void);



/* Global variable declarations */
extern int LifecycleClass_instance_count;
extern const struct type_info int_typeinfo;
extern const struct type_info Base_typeinfo;
extern const struct type_info RTTIBase_typeinfo;
extern const struct type_info RTTIDerivedA_typeinfo;
extern const struct type_info RTTIDerivedB_typeinfo;

// Forward declarations for std::ios_base::Init - C compatible
struct std_ios_base_Init {
    int data;
};
void std_ios_base_Init__Init(struct std_ios_base_Init *this);
extern struct std_ios_base_Init *std___ioinit;
extern void *__dso_handle;

// Decompiled by BinaryAI
// SHA256: ed1f85034dfdcf78e87681935df2abbaf51ad826da18e86fc9ebd6eb24c04e27

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void * operator_new(size_t size)
{
 void *pvVar1;
 pvVar1 = malloc(size);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void __cxa_begin_catch(void *e)
{
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
void __cxa_atexit(void (*func)(void), void *arg, void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x110a0
int __libc_start_main(int (*main)(void), int argc, char **argv, 
                      int (*init)(void), void (*fini)(void), void *stack_end)
{
 return 0;
}

// Function: <EXTERNAL>::operator.new[] @ 0x110b0
void * operator_new__(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::operator.delete @ 0x110c0
void operator_delete(void *ptr)
{
 free(ptr);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110d0
void *__dynamic_cast(void *obj, const struct type_info *src_type, const struct type_info *dst_type, int ptr_offset)
{
 return (void *)0;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x110e0
void operator_delete__(void *ptr)
{
 operator_delete(ptr);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x11100
void __cxa_rethrow(void *exception_obj)
{
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x11120
void std_ios_base_Init__Init(struct std_ios_base_Init *this)
{
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11130
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11140
void __cxa_throw(void *thrown_exception, const struct type_info *tinfo, void (*dest)(void*))
{
 return;
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11150
void _Unwind_Resume(void)
{
 return;
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
 /* std::ios_base::Init initialization */
 return;
}

// Function: _start @ 0x111b0
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main((int (*)(void))main,param_2,(char **)&auStack_4,(int (*)(void))_init,(void (*)(void))_fini,(void *)param_1);
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
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int local_10;
 unsigned int uStack_c;
 local_28 = 0x74736554;
 local_24 = 0;
 local_20 = 0;
 local_1c = 0;
 local_18 = 0;
 local_14 = 0;
 local_10 = 0;
 uStack_c = 0;
 sVar1 = strlen((char *)&local_28);
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
LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
  iVar3 = LifecycleClass_instance_count + piVar1[2];
  operator_delete__(piVar1);
  LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
  return LifecycleClass_instance_count * 1000 + iVar3;
}

// Function: call_virtual_func @ 0x11420
void call_virtual_func(Base *param_1,int param_2)
{
 ((int (*)(Base *, int))**(void **)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x11450
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 Base *local_c;
 Derived *local_14;
 unsigned int local_10;
 local_c = (Base *)&PTR_virtual_func_00015ce4;
 local_14 = (Derived *)&PTR_virtual_func_00015d04;
 local_10 = 3;
 iVar1 = Base_virtual_func(local_c,5);
 iVar2 = ((int (*)(Derived *, int))(**(void **)local_14))(local_14,5);
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
 iVar1 = MultiDerived_funcA((MultiDerived *)0);
 iVar2 = (**local_14)(&local_14);
 return iVar2 + iVar1 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x11510
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 DiamondDerived *local_14;
 unsigned int local_10;
 local_14 = (DiamondDerived *)&PTR_func_00015de4;
 local_10 = 0x32;
 iVar1 = DiamondDerived_func(local_14);
 local_10 = 100;
 iVar2 = ((int (*)(DiamondDerived *))(**(void **)local_14))(local_14);
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
unsigned int test_cpp_exception(void)
{
	unsigned int *puVar1;
	puVar1 = (unsigned int *)__cxa_allocate_exception(4);
	*puVar1 = 0x2a;
	__cxa_throw(puVar1,(const struct type_info *)&int_typeinfo,0);
	return 0x2a;
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
	struct RTTIDerivedA *piVar1;
	struct RTTIDerivedB *piVar2;
	int iVar3;
	size_t sVar4;
	uint uVar5;
	uint uVar6;
	bool bVar7;
	piVar1 = (struct RTTIDerivedA *)operator_new(sizeof(struct RTTIDerivedA));
	piVar1->vtable = &PTR__RTTIBase_00015ecc;
	piVar1->type_info = (struct type_info *)&RTTIDerivedA_typeinfo;
	piVar2 = (struct RTTIDerivedB *)operator_new(sizeof(struct RTTIDerivedB));
	piVar2->vtable = &PTR__RTTIBase_00015ee0;
	piVar2->type_info = (struct type_info *)&RTTIDerivedB_typeinfo;
	__s1 = piVar1->type_info->name;
 if (__s1 == "12RTTIDerivedA") {
		uVar6 = 10;
	}
	else {
		uVar6 = 0;
		if (*__s1 != '*') {
			iVar3 = strcmp(__s1,"12RTTIDerivedA");
			uVar6 = 10;
			if (iVar3 != 0) {
				uVar6 = 0;
			}
		}
	}
	__s1_00 = piVar2->type_info->name;
	if (__s1_00 == "12RTTIDerivedB") {
		bVar7 = true;
	}
	else if (*__s1_00 == '*') {
		bVar7 = false;
	}
	else {
		iVar3 = strcmp(__s1_00,"12RTTIDerivedB");
		bVar7 = iVar3 == 0;
	}
	uVar5 = uVar6 | 0x14;
	if (!bVar7) {
		uVar5 = uVar6;
	}
	iVar3 = __dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0) != (void *)0;
	uVar6 = uVar5 + 100;
	if (!iVar3) {
		uVar6 = uVar5;
	}
	iVar3 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0) != (void *)0;
	uVar5 = uVar6 + 200;
	if (!iVar3) {
		uVar5 = uVar6;
	}
	sVar4 = strlen(__s1 + (*__s1 == '*'));
	RTTIDerivedA__RTTIDerivedA(piVar1);
	RTTIDerivedB__RTTIDerivedB(piVar2);
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
LifecycleClass_instance_count = LifecycleClass_instance_count + 1;
  iVar6 = LifecycleClass_instance_count + piVar2[2];
  operator_delete__(piVar2);
  LifecycleClass_instance_count = LifecycleClass_instance_count + -1;
  printf(&DAT_0001309f,LifecycleClass_instance_count * 1000 + iVar6);
 local_14[0] = &PTR_virtual_func_00015ce4;
 local_3c = (void **)&PTR_virtual_func_00015d04;
 local_38[0] = (void **)0x3;
 iVar6 = Base_virtual_func((Base *)local_14,5);
 iVar3 = ((int (*)(void **, int))(**local_3c))(&local_3c,5);
 printf(&DAT_000130bb,iVar3 + iVar6 + 0x15);
 local_3c = (void **)&PTR_funcA_00015d28;
 local_38[1] = (void **)&PTR_funcB_00015d40;
 local_38[0] = (void **)0x64;
 local_38[2] = (void **)0xc8;
 iVar6 = MultiDerived_funcB_this((MultiDerived *)(local_38 + 1));
 printf(&DAT_000130d7,iVar6 + 0x1f);
 local_3c = (void **)&PTR_func_00015db0;
 local_38[3] = (void **)&PTR_func_00015de4;
 local_38[1] = (void **)&PTR_func_00015dc8;
 local_28 = 0x32;
 iVar6 = DiamondDerived_func((DiamondDerived *)(local_38 + 3));
 *(unsigned int *)((int)local_38 + (int)local_3c[-3]) = 100;
 iVar3 = ((int (*)(void **))(**local_38[3]))(local_38 + 3);
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
int main(int argc, char **argv)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x11ad0
int Base_virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x11ae0
int Derived_virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 4) * param_1;
}

// Function: Base::~Base @ 0x11af0
int Base__Base(Base *this)
{
 return 0;
}

// Function: MultiDerived::~MultiDerived @ 0x11b00
int MultiDerived__MultiDerived(MultiDerived *this)
{
 return 0;
}

// Function: DiamondDerived::DiamondDerived @ 0x11b15
int DiamondDerived__DiamondDerived(DiamondDerived *this)
{
 return 0;
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
void Container_int__Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11b80
void Container_int_push(Container_int_ *this,int param_1)
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
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (*(int *)(this + 0x28) != param_1 && param_1 <= *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x11bc0
int Container_int_getSize(Container_int_ *this)
{
 return *(int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x11bd0
void Container_double__Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11be0
void Container_double_push(Container_double_ *this,double param_1)
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
long double Container_double_get(Container_double_ *this,int param_1)
{
 long double lVar1;
 lVar1 = (long double)0;
 if ((-1 < param_1) && (*(int *)(this + 0x50) != param_1 && param_1 <= *(int *)(this + 0x50))) {
 lVar1 = *(double *)(this + param_1 * 8);
 }
 return lVar1;
}

// Function: Container<double>::getSize @ 0x11c20
int Container_double_getSize(Container_double_ *this)
{
 return *(int *)(this + 0x50);
}

// Function: Base::getName @ 0x11c30
char * Base_getName(Base *this)
{
 (void)this;
 return &UNK_000131d8;
}

// Function: FUN_00011c35 @ 0x11c35
int FUN_00011c35(void)
{
 int unaff_retaddr;
 return unaff_retaddr + 0x15a3;
}

// Function: Base::~Base @ 0x11c50
int Base__Base_destructor(Base *this)
{
 operator_delete(this);
 return 0;
}

// Function: Derived::Derived @ 0x11c70
int Derived__Derived(Derived *this)
{
 return 0;
}

// Function: Derived::getName @ 0x11c80
char * Derived_getName(Derived *this)
{
 (void)this;
 return "Derived";
}

// Function: FUN_00011c85 @ 0x11c85
int FUN_00011c85(void)
{
 int unaff_retaddr;
 return unaff_retaddr + 0x1558;
}

// Function: Derived::~Derived @ 0x11ca0
int Derived__Derived_destructor(Derived *this)
{
 operator_delete(this);
 return 0;
}

// Function: MultiDerived::MultiDerived @ 0x11cb0
int MultiDerived__MultiDerived(MultiDerived *this)
{
 return 0;
}

// Function: MultiDerived::funcA @ 0x11cd0
unsigned int MultiDerived_funcA(MultiDerived *this)
{
 (void)this;
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x11ce0
int MultiDerived__MultiDerived_destructor(MultiDerived *this)
{
 operator_delete(this);
 return 0;
}

// Function: MultiDerived::funcB @ 0x11d10
unsigned int MultiDerived_funcB(MultiDerived *this)
{
 (void)this;
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11d20
unsigned int MultiDerived_funcB_this(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x11d30
int MultiDerived__MultiDerived_v2(MultiDerived *this)
{
 return 0;
}

// Function: MultiDerived::~MultiDerived @ 0x11d40
int MultiDerived__MultiDerived_v3(MultiDerived *this)
{
 operator_delete(this + -8);
 return 0;
}

// Function: BaseA::funcA @ 0x11d70
unsigned int BaseA_funcA(BaseA *this)
{
 (void)this;
 return 10;
}

// Function: BaseA::~BaseA @ 0x11d80
int BaseA__BaseA(BaseA *this)
{
 return 0;
}

// Function: BaseA::~BaseA @ 0x11d90
int BaseA__BaseA_destructor(BaseA *this)
{
 operator_delete(this);
 return 0;
}

// Function: BaseB::funcB @ 0x11dc0
unsigned int BaseB_funcB(BaseB *this)
{
 (void)this;
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x11dd0
int BaseB__BaseB(BaseB *this)
{
 return 0;
}

// Function: BaseB::~BaseB @ 0x11de0
int BaseB__BaseB_destructor(BaseB *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleA::func @ 0x11e10
int MiddleA_func(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e30
int MiddleA__MiddleA(MiddleA *this)
{
 return 0;
}

// Function: MiddleA::~MiddleA @ 0x11e40
int MiddleA__MiddleA_destructor(MiddleA *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleA::func @ 0x11e70
int MiddleA_func_v2(MiddleA *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x11e90
int MiddleA__MiddleA_v2(MiddleA *this)
{
 return 0;
}

// Function: MiddleA::~MiddleA @ 0x11ea0
int MiddleA__MiddleA_v3(MiddleA *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return 0;
}

// Function: MiddleB::func @ 0x11ed0
int MiddleB_func(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}

// Function: MiddleB::~MiddleB @ 0x11ef0
int MiddleB__MiddleB(MiddleB *this)
{
 return 0;
}

// Function: MiddleB::~MiddleB @ 0x11f00
int MiddleB__MiddleB_destructor(MiddleB *this)
{
 operator_delete(this);
 return 0;
}

// Function: MiddleB::func @ 0x11f30
int MiddleB_func_v2(MiddleB *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 200;
}

// Function: MiddleB::~MiddleB @ 0x11f50
int MiddleB__MiddleB_v2(MiddleB *this)
{
 return 0;
}

// Function: MiddleB::~MiddleB @ 0x11f60
int MiddleB__MiddleB_v3(MiddleB *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return 0;
}

// Function: DiamondDerived::func @ 0x11f90
int DiamondDerived_func(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11fb0
int DiamondDerived__DiamondDerived_destructor(DiamondDerived *this)
{
 operator_delete(this);
 return 0;
}

// Function: DiamondDerived::func @ 0x11fe0
int DiamondDerived_func_v2(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12000
int DiamondDerived__DiamondDerived_v2(DiamondDerived *this)
{
 return 0;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12010
int DiamondDerived__DiamondDerived_v3(DiamondDerived *this)
{
 operator_delete(this + -8);
 return 0;
}

// Function: DiamondDerived::func @ 0x12040
int DiamondDerived_func_v3(DiamondDerived *this)
{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) + 4 +
 *(int *)(*(int *)this + -0xc)) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12060
int DiamondDerived__DiamondDerived_v4(DiamondDerived *this)
{
 return 0;
}

// Function: DiamondDerived::~DiamondDerived @ 0x12070
int DiamondDerived__DiamondDerived_v5(DiamondDerived *this)
{
 operator_delete(this + *(int *)(*(int *)this + -0x10));
 return 0;
}

// Function: VirtualBase::func @ 0x120a0
unsigned int VirtualBase_func(VirtualBase *this)
{
 (void)this;
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x120b0
int VirtualBase__VirtualBase(VirtualBase *this)
{
 return 0;
}

// Function: VirtualBase::~VirtualBase @ 0x120c0
int VirtualBase__VirtualBase_destructor(VirtualBase *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x120f0
int RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedA::getType @ 0x12120
unsigned int RTTIDerivedA_getType(RTTIDerivedA *this)
{
 (void)this;
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x12130
int RTTIBase__RTTIBase(RTTIBase *this)
{
 return 0;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x12140
int RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return 0;
}

// Function: RTTIDerivedB::getType @ 0x12170
unsigned int RTTIDerivedB_getType(RTTIDerivedB *this)
{
 (void)this;
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

/* Definitions for global variables */

/* LifecycleClass instance counter */
int LifecycleClass_instance_count = 0;

/* Global data pointers - placeholder addresses */
void *PTR_virtual_func_00015ce4 = (void *)0;
void *PTR_virtual_func_00015d04 = (void *)0;
void *PTR_funcA_00015d28 = (void *)0;
void *PTR_funcB_00015d40 = (void *)0;
void *PTR_func_00015db0 = (void *)0;
void *PTR_func_00015dc8 = (void *)0;
void *PTR_func_00015de4 = (void *)0;
void *PTR__RTTIBase_00015ecc = (void *)0;
void *PTR__RTTIBase_00015ee0 = (void *)0;

/* Global data arrays - placeholder strings for printf/puts */
char DAT_000131e5[] = "Testing C++ Object-Oriented Features\n";
char DAT_00013081[] = "Member func test: %d\n";
char DAT_0001309f[] = "Constructor test: %d\n";
char DAT_000130bb[] = "Virtual func test: %d\n";
char DAT_000130d7[] = "Multiple inheritance test: %d\n";
char DAT_000130f3[] = "Diamond inheritance test: %d\n";
char DAT_00013110[] = "Operator overload test: %d\n";
char DAT_0001312c[] = "Template function test: %d\n";
char DAT_00013148[] = "Template class test: %d\n";
char DAT_00013164[] = "Lambda test: %d\n";
char DAT_00013180[] = "Exception test: %d\n";
char DAT_0001319d[] = "Smart ptr test: %d\n";
char DAT_000131ba[] = "RTTI test: %d\n";
char UNK_000131d8[] = "Base";

/* type_info objects - minimal stub definitions */
const struct type_info int_typeinfo = { NULL, "int" };
const struct type_info Base_typeinfo = { NULL, "4Base" };
const struct type_info RTTIBase_typeinfo = { NULL, "7RTTIBase" };
const struct type_info RTTIDerivedA_typeinfo = { NULL, "12RTTIDerivedA" };
const struct type_info RTTIDerivedB_typeinfo = { NULL, "12RTTIDerivedB" };

/* std::ios_base::Init global instance */
struct std_ios_base_Init *std___ioinit = NULL;

/* DSO handle for __cxa_atexit */
void *__dso_handle = NULL;

