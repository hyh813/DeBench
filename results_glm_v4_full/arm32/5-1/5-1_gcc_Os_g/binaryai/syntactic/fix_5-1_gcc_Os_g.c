#include <stdarg.h>
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
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Type definitions for template classes */
typedef struct {
    int data[10];
    unsigned int count;
} Container_int_;

typedef struct {
    unsigned long long data[10];
    unsigned int count;
} Container_double_;

typedef struct {
    void **vtable;
    char data[16];
} DiamondDerived;

/* Forward declarations for RTTI types */
typedef struct type_info type_info;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

struct RTTIDerivedA {
    void **vtable;
};

/* Define calling convention */
#define __thiscall

/* Vtable pointer declarations */
extern void *PTR_func_00011af0;
extern void *PTR_func_00011b08;
extern void *PTR_func_00011b2c;
extern void *PTR_func_00011b48;
extern void *PTR_func_00011b68;
extern void *PTR_func_00011b84;
extern void *PTR_func_00011c20;
extern void *PTR_func_00011c38;
extern void *PTR_func_00011c54;
extern void *PTR__RTTIDerivedA_00011c68;
extern void *PTR__RTTIDerivedB_00011c7c;

/* Forward declarations for std types */
typedef struct Init Init;

/* Define unique_ptr structures */
typedef struct unique_ptr_int_std__default_delete_int__ {
    void *ptr;
} unique_ptr_int_std__default_delete_int__;

typedef struct unique_ptr_int___std__default_delete_int____ {
    void *ptr;
} unique_ptr_int___std__default_delete_int____;

/* Global variable declarations */
extern Init std___ioinit;
extern void *__dso_handle;
extern int LifecycleClass_instance_count;
extern int completed_0;
extern char DAT_00011854;
extern char DAT_00011866;
extern char DAT_0001188a;
extern char DAT_000118a8;
extern char DAT_000118c4;
extern char DAT_000118e0;
extern char DAT_000118fc;
extern char DAT_00011919;
extern char DAT_00011935;
extern char DAT_00011951;
extern char DAT_0001196d;
extern char DAT_00011989;
extern char DAT_000119a6;
extern char DAT_000119c3;

/* Forward declarations for classes */
typedef struct Base Base;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct VirtualBase VirtualBase;

typedef struct LifecycleClass LifecycleClass;

struct LifecycleClass {
    static int instance_count;
};

/* Define class structures */
struct Base {
    void **vtable;
    int data;
};

struct MiddleA {
    void **vtable;
    int data;
};

struct MiddleB {
    void **vtable;
    int data;
};

struct Derived {
    void **vtable;
    int data;
};

struct MultiDerived {
    void **vtable;
    int data;
};

struct VirtualBase {
    void **vtable;
    int data;
};

/* RTTI type info structures */
struct type_info {
    const char *name;
};

/* RTTI typeinfo definitions */
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info int_typeinfo;



// Decompiled by BinaryAI
// SHA256: d65490c74640e79d8582be148a4edf699e4568d599b00068e580cec657afee0d

/* Forward declarations */
void call_weak_fn(void);
int main(void);
void test_cpp_oo_features(void);
int template_max_int_(int p1, int p2);
double template_max_double_(double p1, double p2);
void template_swap_int_(int *param_1, int *param_2);
extern int __aeabi_atexit(void *, void (*)(void *), void *);
void __thiscall Container_int__push(Container_int_ *self,int param_1);
void __thiscall std_unique_ptr_int___std__default_delete_int____unique_ptr(unique_ptr_int___std__default_delete_int____ *this_param);
void __thiscall std_unique_ptr_int_std__default_delete_int___unique_ptr(unique_ptr_int_std__default_delete_int__ *this_param);
int __thiscall DiamondDerived_func(DiamondDerived *self);
void __thiscall DiamondDerived__dtor_0(DiamondDerived *self);

// Function: _init @ 0x109b0
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_000109bc @ 0x109bc
void FUN_000109bc(void)
{
 ((void (*)(void))0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x109d0
void * _Znwj(unsigned int);

void * operator_new(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = _Znwj(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x109e8
void __cxa_begin_catch_impl(void)
{
 extern void __cxa_begin_catch(void);
 __cxa_begin_catch();
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x109f4
void __cxa_allocate_exception_impl(void)
{
 extern void *__cxa_allocate_exception(size_t);
 __cxa_allocate_exception(0);
 return;
}

// Function: <EXTERNAL>::puts @ 0x10a00
int puts(char *__s)
{
 extern int _puts(char *__s);
 return _puts(__s);
}

// Function: <EXTERNAL>::operator.delete @ 0x10a0c
void operator_delete(void *param_1,unsigned int param_2)
{
 (void)param_1;
 (void)param_2;
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10a18
void __libc_start_main_impl(int (*main_func)(void), int argc, char **argv, 
                           void (*init)(void), void (*fini)(void), void *rtld_fini)
{
 extern void __libc_start_main(int (*)(void), int, char **, void (*)(void), void (*)(void), void *);
 __libc_start_main(main_func, argc, argv, init, fini, rtld_fini);
}

// Function: <EXTERNAL>::operator.new[] @ 0x10a24
void * _Znaj(unsigned int);

void * operator_new__(unsigned int param_1)
{
 void *pvVar1;
 pvVar1 = _Znaj(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::abort @ 0x10a30
void abort_impl(void)
{
 extern void abort(void);
 abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x10a3c
bool __thiscall std_type_info_operator_eq(type_info *self,type_info *param_1)
{
 return self == param_1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x10a48
void __stack_chk_fail(void)
{
 extern void _stack_chk_fail(void);
 _stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x10a54
void __cxa_end_cleanup(void)
{
 extern void _cxa_end_cleanup(void);
 _cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x10a60
void *__dynamic_cast(const void *src_ptr,const type_info *src_type,const type_info *dst_type,int src2dst_offset)
{
 extern void *__dynamic_cast_impl(const void *,const type_info *,const type_info *,int);
 void *result = __dynamic_cast_impl(src_ptr,src_type,dst_type,src2dst_offset);
 (void)result;
 return result;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x10a6c
void operator_delete__(void *param_1)
{
 operator_delete(param_1, 0);
 return;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x10a78
void __cxa_rethrow(void)
{
 extern void _cxa_rethrow(void);
 _cxa_rethrow();
}

// Function: <EXTERNAL>::strlen @ 0x10a84
size_t strlen(char *__s)
{
 extern size_t _strlen(char *__s);
 return _strlen(__s);
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10a90
void __thiscall std_ios_base_Init__Init(Init *self)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x10a9c
int __aeabi_d2iz(double param_1)
{
 return (int)param_1;
}
int __aeabi_d2iz_(void)
{
 __aeabi_d2iz(0.0);
 return 0;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10aa8
void __cxa_end_catch(void)
{
 extern void __cxa_end_catch(void);
 (void)__cxa_end_catch();
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10ab4
void __gxx_personality_v0(void)
{
 extern void _gxx_personality_v0(void);
 _gxx_personality_v0();
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10ac0
void __cxa_throw(void)
{
 extern void __cxa_throw(void *, void *, void *);
 __cxa_throw(0, 0, 0);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10acc
int __aeabi_dcmpgt(void)
{
 extern int __aeabi_dcmpgt(double, double);
 return __aeabi_dcmpgt(0.0, 0.0);
}

// Function: <EXTERNAL>::strncpy @ 0x10ad8
char * strncpy(char *__dest,char *__src,size_t __n)
{
 extern char *_strncpy(char *__dest,char *__src,size_t __n);
 return _strncpy(__dest,__src,__n);
}

// Function: <printf_chk>
int __printf_chk(int flag, const char *format, ...)
{
 extern int vprintf(const char *, va_list);
 va_list args;
 va_start(args, format);
 int result = vprintf(format, args);
 va_end(args);
 return result;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10af0
int __printf_chk_impl(int flag, const char *format, ...)
{
 extern int vprintf(const char *, va_list);
 va_list args;
 va_start(args, format);
 int result = vprintf(format, args);
 va_end(args);
 return result;
}

// Function: test_cpp_exception @ 0x10b08
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 extern void *__cxa_allocate_exception(size_t);
 extern void __cxa_throw(void *, void *, void *);
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: main @ 0x10bbc
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10bcc
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
 std_ios_base_Init__Init(&std___ioinit);
 __aeabi_atexit(&std___ioinit,NULL,&__dso_handle);
 return;
}

// Function: _start @ 0x10bfc
void _start(unsigned int param_1,unsigned int param_2)
{
 extern char stack0x00000004[];
 extern void __libc_start_main(int (*)(void), int, char **, void (*)(void), void (*)(void), void *);
 extern void abort(void);
 __libc_start_main(main,param_2,(char **)stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x10c40
void call_weak_fn(void)
{
 extern void __gmon_start__(void);
 __gmon_start__();
}

// Function: deregister_tm_clones @ 0x10c64
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10c90
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10cc8
void __do_global_dtors_aux(void)
{
 if (completed_0 != '\0') {
 return;
 }
 deregister_tm_clones();
 completed_0 = 1;
 return;
}

// Function: test_cpp_member_func @ 0x10cf4
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
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x10d60
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10d7c
int call_virtual_func(Base *param_1,int param_2)
{
 return (**(int (**)(Base *,int))param_1)(param_1,param_2);
}

// Function: test_cpp_virtual_func @ 0x10d88
unsigned int test_cpp_virtual_func(void)
{
 int iVar1;
 unsigned long long uVar2;
 void **local_18;
 void **local_14;
 unsigned int local_10;
 int local_c;
 local_c = 0;
 local_18 = &PTR_func_00011af0;
 local_14 = &PTR_func_00011b08;
 local_10 = 3;
  iVar1 = call_virtual_func((Base *)local_18,5);
  uVar2 = (unsigned long long)call_virtual_func((Base *)local_14,5);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: test_cpp_multiple_inheritance @ 0x10e08
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_operator_overload @ 0x10e10
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10e18
unsigned int test_cpp_template_func(void)
{
 int iVar1;
 unsigned int uVar2;
 unsigned int extraout_r1;
 double extraout_d0;
 int iVar3;
 unsigned long long uVar4;
 int iVar5;
 int iVar6;
 int stack0xffffffe4;
 int stack0xffffffe8;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 extraout_d0 = template_max_double_(0.0,0.0);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe8);
 uVar4 = (unsigned long long)__aeabi_d2iz(uVar2);
 if (iVar3 != 0) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: test_cpp_template_class @ 0x10ec0
unsigned int test_cpp_template_class(void)
{
 unsigned int extraout_r1;
 int iVar1;
 int local_38 [10];
 int local_10;
 int local_c;
 local_c = 0;
 local_10 = 1;
 local_38[0] = 10;
 Container_int__push((Container_int_ *)local_38,0x14);
 Container_int__push((Container_int_ *)local_38,0x1e);
 iVar1 = local_38[0];
 if (local_10 < 1) {
 iVar1 = 0;
 }
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return 0;
}

// Function: test_cpp_lambda @ 0x10f40
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_rtti @ 0x10f48
int test_cpp_rtti(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)(uintptr_t)(void *)&PTR__RTTIDerivedA_00011c68;
 piVar2 = (int *)operator_new(4);
 *(piVar2 + 1) = (int)(uintptr_t)(void *)&PTR__RTTIDerivedB_00011c7c;
 iVar3 = std_type_info_operator_eq
 (*(type_info **)((char *)piVar1 - 4),&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator_eq
 (*(type_info **)((char *)piVar2 - 4),&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 (void)__dynamic_cast((const void*)piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
  __dynamic_cast((const void*)piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
  iVar4 = 0;
 iVar6 = (int)piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
  __s = *(char **)(*(int **)((char *)iVar6 - 4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 {
   void (*dtor)(void *) = (void (*)(void *))(*(void **)(iVar6 + 4));
   dtor(piVar1);
 }
 {
   void (*dtor)(void *) = (void (*)(void *))(*(void **)(*piVar2 + 4));
   dtor(piVar2);
 }
 return iVar3 + sVar5;
}

// Function: test_cpp_smart_ptr @ 0x11038
unsigned int test_cpp_smart_ptr(void)
{
 unique_ptr_int_std__default_delete_int__ local_18;
 unsigned int *local_14;
 unsigned int *local_10;
 unique_ptr_int___std__default_delete_int____ local_array_ptr;
 int local_c;
 local_c = 0;
 local_14 = (unsigned int *)operator_new(4);
 *local_14 = 200;
 local_18.ptr = NULL;
 local_10 = (unsigned int *)operator_new__(0x14);
 if (local_10 != (void *)0) {
   *local_10 = 1;
   local_10[1] = 2;
   local_10[2] = 3;
   local_10[3] = 4;
   local_10[4] = 5;
   local_array_ptr.ptr = local_10;
 }
 std_unique_ptr_int___std__default_delete_int____unique_ptr
 (&local_array_ptr);
 std_unique_ptr_int_std__default_delete_int___unique_ptr
 ((unique_ptr_int_std__default_delete_int__ *)&local_14);
 local_18.ptr = (void *)(uintptr_t)local_14;
 std_unique_ptr_int_std__default_delete_int___unique_ptr
 (&local_18);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return 0x2bf;
}

// Function: test_cpp_diamond_inheritance @ 0x110ec
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_24 [2];
 void **local_1c;
 void **local_14;
 void *local_10;
 int local_c;
 local_c = 0;
 local_14 = (void **)&PTR_func_00011c54;
 local_24[0] = (void **)&PTR_func_00011c20;
 local_1c = (void **)&PTR_func_00011c38;
 local_10 = (void *)(uintptr_t)0x32;
 iVar1 = DiamondDerived_func((DiamondDerived *)local_14);
 local_10 = (void *)(uintptr_t)100;
 iVar2 = DiamondDerived_func((DiamondDerived *)local_14);
 DiamondDerived__dtor_0((DiamondDerived *)local_24[0]);
 if (local_c != 0) {
 __stack_chk_fail();
 }
 return iVar1 + iVar2;
}

// Function: test_cpp_oo_features @ 0x1117c
void test_cpp_oo_features(void)
{
 unsigned int uVar1;
 puts(&DAT_00011866);
 uVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_0001188a,uVar1);
 uVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_000118a8,uVar1);
 uVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_000118c4,uVar1);
 uVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_000118e0,uVar1);
 uVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_000118fc,uVar1);
 uVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00011919,uVar1);
 uVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00011935,uVar1);
 uVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_00011951,uVar1);
 uVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_0001196d,uVar1);
 uVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_00011989,uVar1);
 uVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_000119a6,uVar1);
 uVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_000119c3,uVar1);
 return;
}

// Function: Base::virtual_func @ 0x112b0
int __thiscall Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x112b8
unsigned char * Base_getName(Base *self)
{
 return (unsigned char *)&DAT_00011854;
}

// Function: Base::~Base @ 0x112c4
void __thiscall Base__Base(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x112c8
int __thiscall Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)((char *)self + 4);
}

// Function: Derived::getName @ 0x112d4
char * Derived_getName(Derived *self)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x112e0
unsigned int MultiDerived_funcA(MultiDerived *self)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x112e8
unsigned int MultiDerived_funcB_1(MultiDerived *self)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x112f0
unsigned int __thiscall MultiDerived_funcB_2(MultiDerived *self)
{
 return 0x28;
}

// Function: VirtualBase::func @ 0x112f8
unsigned int VirtualBase_func(VirtualBase *self)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x11300
void __thiscall VirtualBase__VirtualBase(VirtualBase *self)
{
 return;
}

// Function: MiddleA::func @ 0x11304
int __thiscall MiddleA_func_int(MiddleA *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x1131c
void __thiscall MiddleA_func_void2(MiddleA *self)
{
 MiddleA_func_int((MiddleA *)((char *)self + *(int *)(*(int *)self + -0xc)));
 return;
}

// Function: MiddleB::func @ 0x11330
int __thiscall MiddleB_func_int(MiddleB *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x11348
void __thiscall MiddleB_func_void2(MiddleB *self)
{
 MiddleB_func_int((MiddleB *)((char *)self + *(int *)(*(int *)self + -0xc)));
 return;
}

// Function: DiamondDerived::func @ 0x1135c
int __thiscall DiamondDerived_func(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11374
void __thiscall DiamondDerived_func_void2(DiamondDerived *self)
{
 DiamondDerived_func((DiamondDerived *)((char *)self + *(int *)(*(int *)self + -0xc)));
 return;
}

// Function: DiamondDerived::func @ 0x11388
void __thiscall DiamondDerived_func_void3(DiamondDerived *self)
{
 DiamondDerived_func((DiamondDerived *)((char *)self - 8));
 return;
}

// Function: MiddleA::~MiddleA @ 0x11390
void __thiscall MiddleA__MiddleA_1(MiddleA *self)
{
 self->vtable = (void **)(uintptr_t)&PTR_func_00011b2c;
 *(void ***)((char *)self + 8) = (void **)(uintptr_t)&PTR_func_00011b48;
 return;
}

// Function: MiddleA::~MiddleA @ 0x113a8
void __thiscall MiddleA__MiddleA_2(MiddleA *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 *(void ***)((char *)self + iVar1) = (void **)&PTR_func_00011b2c;
 *(void ***)((char *)self + iVar1 + 8) = (void **)&PTR_func_00011b48;
 return;
}

// Function: MiddleB::~MiddleB @ 0x113d0
void __thiscall MiddleB__MiddleB_1(MiddleB *self)
{
 self->vtable = (void **)&PTR_func_00011b68;
 *(void ***)((char *)self + 8) = (void **)&PTR_func_00011b84;
 return;
}

// Function: MiddleB::~MiddleB @ 0x113e8
void __thiscall MiddleB__MiddleB_2(MiddleB *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 *(void ***)((char *)self + iVar1) = (void **)&PTR_func_00011b68;
 *(void ***)((char *)self + iVar1 + 8) = (void **)&PTR_func_00011b84;
 return;
}

// Function: RTTIDerivedA::getType @ 0x11410
unsigned int RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11418
unsigned int RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11420
void __thiscall RTTIDerivedB__RTTIDerivedB_1(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11424
void __thiscall RTTIDerivedA__RTTIDerivedA_1(RTTIDerivedA *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11428
void __thiscall MultiDerived__dtor_0(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1142c
void __thiscall MultiDerived__dtor_1(MultiDerived *self)
{
 return;
}

// Function: Derived::~Derived @ 0x11434
void __thiscall Derived__Derived_1(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x11438
void __thiscall Base__Base_2(Base *self)
{
 operator_delete(self,4);
 return;
}

// Function: Derived::~Derived @ 0x11450
void __thiscall Derived__Derived_2(Derived *self)
{
 operator_delete(self,8);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11468
void __thiscall MultiDerived__dtor_2(MultiDerived *self)
{
 operator_delete(self,0x10);
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x11480
void __thiscall MultiDerived__dtor_3(MultiDerived *self)
{
 MultiDerived__dtor_2((MultiDerived *)((char *)self - 8));
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x11488
void __thiscall VirtualBase__VirtualBase_2(VirtualBase *self)
{
 operator_delete(self,8);
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x114a0
void __thiscall RTTIDerivedB__RTTIDerivedB_2(RTTIDerivedB *self)
{
 operator_delete(self,4);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x114b8
void __thiscall RTTIDerivedA__RTTIDerivedA_2(RTTIDerivedA *self)
{
 operator_delete(self,4);
 return;
}

// Function: MiddleA::~MiddleA @ 0x114d0
void __thiscall MiddleA__MiddleA_3(MiddleA *self)
{
 self->vtable = (void **)&PTR_func_00011b2c;
 *(void ***)((char *)self + 8) = (void **)&PTR_func_00011b48;
 operator_delete(self,0x10);
 return;
}

// Function: MiddleA::~MiddleA @ 0x114fc
void __thiscall MiddleA__MiddleA_4(MiddleA *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 MiddleA__MiddleA_3((MiddleA *)((char *)self + (intptr_t)iVar1));
}

// Function: MiddleB::~MiddleB @ 0x11510
void __thiscall MiddleB__MiddleB_3(MiddleB *self)
{
 self->vtable = (void **)&PTR_func_00011b68;
 *(void ***)((char *)self + 8) = (void **)&PTR_func_00011b84;
 operator_delete(self,0x10);
 return;
}

// Function: MiddleB::~MiddleB @ 0x1153c
void __thiscall MiddleB__MiddleB_4(MiddleB *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 MiddleB__MiddleB_3((MiddleB *)((char *)self + (intptr_t)iVar1));
}

// Function: MiddleA::~MiddleA @ 0x11550
void __thiscall MiddleA__MiddleA_5(MiddleA *self, int *in_r1)
{
 int iVar1;
 iVar1 = in_r1 != NULL ? *in_r1 : 0;
 *(int *)self = iVar1;
 *(int *)((char *)self + *(int *)((char *)(intptr_t)iVar1 + -0xc)) = in_r1 != NULL ? in_r1[1] : 0;
 return;
}

// Function: MiddleB::~MiddleB @ 0x11568
void __thiscall MiddleB__MiddleB_5(MiddleB *self, int *in_r1)
{
 int iVar1;
 iVar1 = *in_r1;
 *(int *)self = iVar1;
 *(int *)((char *)self + *(int *)(iVar1 + -0xc)) = in_r1[1];
}

// Function: template_max<int> @ 0x11580
int template_max_int_(int p1,int p2)
{
 if (p1 < p2) {
 p1 = p2;
 }
 return p1;
}

// Function: template_max<double> @ 0x1158c
double template_max_double_(double p1,double p2)
{
 return p1 < p2 ? p2 : p1;
}

// Function: template_swap<int> @ 0x115bc
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x115d0
void __thiscall Container_int__Container(Container_int_ *self)
{
 *(unsigned int *)((char *)self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x115dc
void __thiscall Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x115f4
unsigned int __thiscall Container_int__get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x28))) {
 return *(unsigned int *)((char *)self + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11618
unsigned int __thiscall Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container<double>::Container @ 0x11620
void __thiscall Container_double__Container(Container_double_ *self)
{
 *(unsigned int *)((char *)self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x1162c
void Container_double__push(Container_double_ *self, double p1)
{
 int iVar2;
 unsigned int *puVar1;
 unsigned int *puVar2;
 iVar2 = *(int *)((int)self + 0x50);
 if (9 < iVar2) {
 return;
 }
 *(int *)((int)self + 0x50) = iVar2 + 1;
 puVar1 = (unsigned int *)((int)self + iVar2 * 8);
 puVar2 = (unsigned int *)&p1;
 *puVar1 = puVar2[0];
 puVar1[1] = puVar2[1];
 return;
}

// Function: Container<double>::get @ 0x1164c
unsigned long long __thiscall Container_double__get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x50))) {
 return *(unsigned long long *)(self->data + param_1 * 8);
 }
 return 0ULL;
}

// Function: Container<double>::getSize @ 0x11678
unsigned int __thiscall Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}

// Function: std::unique_ptr<int,std::default_delete<int>>::~unique_ptr @ 0x11680
void __thiscall
std_unique_ptr_int_std__default_delete_int___unique_ptr
(unique_ptr_int_std__default_delete_int__ *this_param)
{
 void *ptr;
 ptr = *(void **)this_param;
 if (ptr != (void *)0x0) {
 operator_delete(ptr,4);
 }
 return;
}

// Function: std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr @ 0x116a4
void __thiscall
std_unique_ptr_int___std__default_delete_int____unique_ptr
(unique_ptr_int___std__default_delete_int____ *this_param)
{
 if (this_param->ptr != (void *)0x0) {
 operator_delete__(this_param->ptr);
 }
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x116c4
void __thiscall DiamondDerived__dtor_0(DiamondDerived *self)
{
 self->vtable = (void **)&PTR_func_00011c20;
 *(void ***)((char *)self + 0x10) = (void **)&PTR_func_00011c54;
 *(void ***)((char *)self + 8) = (void **)&PTR_func_00011c38;
 MiddleB__MiddleB_1((MiddleB *)((char *)self + 8));
 MiddleA__MiddleA_1((MiddleA *)self);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11748
void __thiscall DiamondDerived__dtor_1(DiamondDerived *self)
{
 DiamondDerived__dtor_0(self);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11754
void __thiscall DiamondDerived__dtor_2(DiamondDerived *self)
{
 DiamondDerived__dtor_0((DiamondDerived *)((char *)self - 8));
}

// Function: DiamondDerived::~DiamondDerived @ 0x1175c
void __thiscall DiamondDerived__dtor_3(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 DiamondDerived__dtor_0((DiamondDerived *)((char *)self + iVar1));
}

// Function: DiamondDerived::~DiamondDerived @ 0x11770
void __thiscall DiamondDerived__dtor_4(DiamondDerived *self)
{
 DiamondDerived__dtor_0(self);
 operator_delete(self,0x18);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11790
void __thiscall DiamondDerived__dtor_5(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 DiamondDerived__dtor_0((DiamondDerived *)((char *)self + iVar1));
}

// Function: DiamondDerived::~DiamondDerived @ 0x11798
void __thiscall DiamondDerived__dtor_6(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 DiamondDerived__dtor_0((DiamondDerived *)((char *)self + iVar1));
}

// Function: DiamondDerived::~DiamondDerived @ 0x117ac
void __thiscall DiamondDerived__dtor_7(DiamondDerived *self)
{
 DiamondDerived__dtor_0(self);
}

// Function: _fini @ 0x117b8
void _fini(void)
{
 return;
}

