#include <stdio.h>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
#include <stddef.h>
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;

typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Type definitions for C++ RTTI and stdlib */
namespace std {
class type_info {
public:
    virtual ~type_info();
    int operator==(const type_info& rhs) const;
    const char* name() const;
};

class ios_base {
public:
    class Init {
    public:
        Init();
        ~Init();
    };
};
}

typedef std::ios_base::Init Init;
typedef std::type_info type_info;

/* Exception handling types */
namespace __cxxabiv1 {
  class __class_type_info;
}

/* Forward declarations for C++ classes */

/* Forward declarations for vtable pointers */
void *PTR__RTTIDerivedA_000116b4 = 0;
void *PTR__RTTIDerivedB_000116c8 = 0;

/* Forward declarations for C++ ABI functions */
extern "C" void *__cxa_allocate_exception(size_t size);
extern "C" void __cxa_throw(void *thrown_exception, type_info *tinfo, void *dest);

/* Forward declarations */
void call_weak_fn(void);

/* Implementation of call_weak_fn */
void call_weak_fn(void) {
    return;
}

/* Forward declarations for template functions */
int template_max_int_(int param_1, int param_2);
double template_max_double_(double param_1, double param_2);
void template_swap_int_(int *param_1, int *param_2);

/* Forward declarations for test functions */
void test_cpp_oo_features(void);

/* Helper macro for combining 32-bit values into 64-bit */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))


class Base {
public:
  virtual ~Base() {}
  virtual int virtual_func(int param_1);
  static unsigned char* getName();
};

class Derived : public Base {
public:
  virtual ~Derived() {}
  virtual int virtual_func(int param_1);
  static char* getName();
  int member;
};

class MiddleA {
public:
  virtual int func();
};

class MiddleB {
public:
  virtual int func();
};

class DiamondDerived : public MiddleA, public MiddleB {
public:
  virtual ~DiamondDerived() {}
  virtual int func();
};

class MultiDerived : public Derived {
public:
  virtual ~MultiDerived() {}
  static unsigned int funcA();
  static unsigned int funcB();
};

class RTTIBase {
public:
  virtual ~RTTIBase() {}
  static type_info typeinfo;
};

std::type_info RTTIBase::typeinfo;

class RTTIDerivedA : public RTTIBase {
public:
  virtual ~RTTIDerivedA() {}
  static unsigned int getType();
  static type_info typeinfo;
};

std::type_info RTTIDerivedA::typeinfo;

class RTTIDerivedB : public RTTIBase {
public:
  virtual ~RTTIDerivedB() {}
  static unsigned int getType();
  static type_info typeinfo;
};

std::type_info RTTIDerivedB::typeinfo;

class LifecycleClass {
public:
  static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Stub definitions */
struct Container_int_ {
  unsigned int _M_size;
};

struct Container_double_ {
  unsigned int _M_size;
};

namespace std {
  struct __ioinit {};
}

std::ios_base::Init __ioinit_obj;

extern "C" int __aeabi_atexit(void *obj, void (*dtor)(void *), void *dso_handle);
extern void *stack0x00000004;
extern char completed_0;
extern void *__dso_handle;

/* Data symbols */
/* Data symbol definitions */
const char DAT_000114c0[] = "";
const char DAT_000114d8[] = "";
const char DAT_000114fc[] = "";
const char DAT_0001151c[] = "";
const char DAT_00011538[] = "";
const char DAT_00011554[] = "";
const char DAT_00011570[] = "";
const char DAT_00011590[] = "";
const char DAT_000115ac[] = "";
const char DAT_000115c8[] = "";
const char DAT_000115e4[] = "";
const char DAT_00011600[] = "";
const char DAT_00011620[] = "";
const char DAT_00011640[] = "";
char completed_0 = 0;
char stack0xffffffcc[32];

// Decompiled by BinaryAI
// SHA256: a29c7b093f703bf8ac9e895ddf3d476d71c279c690821901c3573f900a7c056c

// Function: _init @ 0x10920
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 (*(void (*)())0x0)();
 return;
}

extern "C" void *__builtin_new(size_t size);
extern "C" void __builtin_delete(void *ptr);
extern "C" void *__cxa_begin_catch(void);
extern "C" void __cxa_end_catch(void);
extern "C" void __cxa_rethrow(void);
extern "C" void __cxa_end_cleanup(void);
extern "C" void __gxx_personality_v0(void);
extern "C" void __stack_chk_fail(void);
extern "C" void __aeabi_dcmpgt(void);
extern "C" int __printf_chk(int flag, const char *format, ...);
extern "C" void *__builtin_dynamic_cast(void *, void *, void *);

/* Placement new operator */
inline void* operator new(size_t, void* ptr) { return ptr; }
inline void operator delete(void*, void*) { }

// Function: <EXTERNAL>::operator.new @ 0x10940
void * operator_new(size_t param_1)
{
 return __builtin_new(param_1);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void __cxa_begin_catch_external(void)
{
 (void)__cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void *__cxa_allocate_exception_external(void)
{
 return __cxa_allocate_exception(4);
}

// Function: <EXTERNAL>::puts @ 0x10970
int _puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::operator.delete @ 0x1097c
void operator_delete(void *param_1)
{
 __builtin_delete(param_1);
 return;
}

/* Implementation of builtin memory allocation functions */
extern "C" void *__builtin_new(size_t size)
{
  return malloc(size);
}

extern "C" void __builtin_delete(void *ptr)
{
  free(ptr);
}

extern "C" void *__builtin_dynamic_cast(void *obj, void *src, void *dst)
{
  return NULL;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
void __libc_start_main(int (*main)(void), unsigned int argc, void *argv, void (*init)(void), void (*fini)(void), unsigned int stack_end)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x10994
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
int type_info_operator_eq(type_info *self,type_info *param_1)
{
 return self->operator==(*param_1);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void)
{
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void)
{
 __cxa_end_cleanup();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void *__dynamic_cast(void *param_1,void *param_2,void *param_3)
{
 return __builtin_dynamic_cast(param_1,param_2,param_3);
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
void ios_base_Init_Init(Init *self)
{
 new ((void*)self) std::ios_base::Init();
}

static inline void ios_base_Init_destructor_wrapper(Init *self) {
  self->~Init();
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
int __aeabi_d2iz(double param_1)
{
 return (int)param_1;
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
void __cxa_throw(void *thrown_exception,type_info *tinfo,void *dest)
{
 __cxa_throw(thrown_exception,tinfo,dest);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
int __aeabi_dcmpgt(double param_1, double param_2)
{
 return param_1 > param_2;
}

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int flag, const char *format, ...)
{
 return 0;
}

// Function: test_cpp_exception @ 0x10a60
/* Global type_info for int type */
static std::type_info int_typeinfo_obj;

unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 type_info *int_typeinfo;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 int_typeinfo = &int_typeinfo_obj;
 __cxa_throw(puVar1,int_typeinfo,0);
 return 0;
}

// Function: main @ 0x10b18
int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
  ios_base_Init_Init(&__ioinit_obj);
  __aeabi_atexit(&__ioinit_obj,(void (*)(void *))(&ios_base_Init_destructor_wrapper),&__dso_handle);
  return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
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
 (*(void (**)(Base *, int))param_1)(param_1,param_2);
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
 template_swap_int_(&iVar5,&iVar6);
 uVar4 = __aeabi_d2iz(uVar2);
 if (iVar3 == 0) {
 return;
 }
 __stack_chk_fail();
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
 type_info *ti;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)operator_new(4);
 ti = *(type_info **)((char *)*piVar1 - 4);
 *piVar2 = (int)&PTR__RTTIDerivedB_000116c8;
 iVar3 = (ti == (type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = (*(type_info **)((char *)*piVar2 - 4) == *(type_info **)&RTTIDerivedB::typeinfo);
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
  iVar3 = (int)__dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo);
  if (iVar3 != 0) {
    iVar6 = iVar6 + 100;
  }
  iVar3 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)(*(int *)(iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
  sVar5 = strlen(__s);
  ((void (*)(void *))(*(void **)(iVar4 + 4)))(piVar1);
  ((void (*)(void *))(*(void **)(*piVar2 + 4)))(piVar2);
 return iVar6 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ed4
void test_cpp_oo_features(void)
{
 size_t sVar1;
 int iVar2;
 unsigned int uVar3;
 int iVar4;
 unsigned int extraout_r1;
 int in_stack_ffffffc0;
 int iVar5;
 int in_stack_ffffffc4;
 int iVar6;
 double in_stack_ffffffc8;
 _puts((char *)&DAT_000114d8);
 strncpy((char *)&stack0xffffffcc,"Test",0x1f);
 sVar1 = strlen((char *)&stack0xffffffcc);
 __printf_chk(1,(const char *)&DAT_000114fc,sVar1 + 0x125c);
 __printf_chk(1,(const char *)&DAT_0001151c,LifecycleClass::instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(const char *)&DAT_00011538,0x2a);
 __printf_chk(1,(const char *)&DAT_00011554,0x47);
 __printf_chk(1,(const char *)&DAT_00011570,0x28a);
 __printf_chk(1,(const char *)&DAT_00011590,0x16);
 iVar2 = template_max_int_(3,7);
 uVar3 = 0;
 template_max_double_((double)CONCAT44(in_stack_ffffffc4,in_stack_ffffffc0),in_stack_ffffffc8);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&iVar5,&iVar6);
 iVar4 = __aeabi_d2iz(uVar3);
 __printf_chk(1,DAT_000115ac,iVar4 + iVar2 + iVar5 + iVar6);
 __printf_chk(1,DAT_000115c8,0x10);
 __printf_chk(1,DAT_000115e4,0x55);
 uVar3 = test_cpp_exception();
 __printf_chk(1,DAT_00011600,uVar3);
 __printf_chk(1,DAT_00011620,0x2bf);
 uVar3 = test_cpp_rtti();
 __printf_chk(1,DAT_00011640,uVar3);
 return;
}

// Function: Base::virtual_func @ 0x110d0
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x110d8
unsigned char * Base_getName(void)
{
 return (unsigned char *)&DAT_000114c0;
}

// Function: Base::~Base @ 0x110e4
void Base__Base(Base *self)
{
 return;
}

// Function: Derived::virtual_func @ 0x110e8
int Derived_virtual_func(Derived *self,int param_1)
{
 return param_1 * *(int *)(self + 4);
}

// Function: Derived::getName @ 0x110f4
char * Derived_getName(void)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11100
unsigned int MultiDerived_funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11108
unsigned int MultiDerived_funcB(void)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11118
int MiddleA_func(MiddleA *self)
{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11130
int MiddleA_func2(MiddleA *self)
{
  return *(int *)(self + *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11154
int MiddleB_func(MiddleB *self)
{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x1116c
int MiddleB_func2(MiddleB *self)
{
  return *(int *)(self + *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11190
int DiamondDerived_func(DiamondDerived *self)
{
  return *(int *)(self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111a8
int DiamondDerived_func2(DiamondDerived *self)
{
  return *(int *)(self + *(int *)(*(int *)(self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111cc
int DiamondDerived_func3(DiamondDerived *self)
{
  return *(int *)(self + *(int *)(*(int *)(self + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x111e4
unsigned int RTTIDerivedA_getType(void)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x111ec
unsigned int RTTIDerivedB_getType(void)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x111f4
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x111f8
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x111fc
void DiamondDerived__DiamondDerived(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11200
DiamondDerived * DiamondDerived__DiamondDerived_ret(DiamondDerived *self)
{
  return self + *(int *)(*(int *)self + -0x10);
}

// Function: MultiDerived::~MultiDerived @ 0x11218
void MultiDerived__MultiDerived(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1121c
MultiDerived * MultiDerived__MultiDerived_ret(MultiDerived *self)
{
 return self - 8;
}

// Function: Derived::~Derived @ 0x11224
void Derived__Derived(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x11228
Base * Base__Base_ret(Base *self)
{
  operator_delete(self);
  return self;
}

// Function: Derived::~Derived @ 0x11240
Derived * Derived__Derived_ret(Derived *self)
{
  operator_delete(self);
  return self;
}

// Function: MultiDerived::~MultiDerived @ 0x11258
MultiDerived * MultiDerived__MultiDerived_ret2(MultiDerived *self)
{
  operator_delete(self);
  return self;
}

// Function: MultiDerived::~MultiDerived @ 0x11270
MultiDerived * MultiDerived__MultiDerived_ret3(MultiDerived *self)
{
  operator_delete(self - 8);
  return self - 8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1128c
RTTIDerivedB * RTTIDerivedB__RTTIDerivedB_ret(RTTIDerivedB *self)
{
  operator_delete(self);
  return self;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x112a4
RTTIDerivedA * RTTIDerivedA__RTTIDerivedA_ret(RTTIDerivedA *self)
{
  operator_delete(self);
  return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112bc
DiamondDerived * DiamondDerived__DiamondDerived_ret3(DiamondDerived *self)
{
  operator_delete(self);
  return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112d4
DiamondDerived * DiamondDerived__DiamondDerived_ret4(DiamondDerived *self)
{
  int iVar1;
  iVar1 = *(int *)(*(int *)self + -0x10);
  operator_delete(self + iVar1);
  return self + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112f8
DiamondDerived * DiamondDerived__DiamondDerived_ret5(DiamondDerived *self)
{
  operator_delete(self - 8);
  return self - 8;
}

// Function: template_max<int> @ 0x11314
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11320
double template_max_double_(double param_1,double param_2)
{
 if (__aeabi_dcmpgt(param_2, param_1)) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x11350
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x11364
void Container_int_Container(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11370
void Container_int_push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)((char *)self + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)self + 0x28) = iVar1 + 1;
 *(int *)((char *)self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11388
unsigned int Container_int_get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x28))) {
 return *(unsigned int *)((char *)self + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x113ac
unsigned int Container_int_getSize(Container_int_ *self)
{
 return *(unsigned int *)((char *)self + 0x28);
}

// Function: Container<double>::Container @ 0x113b4
void Container_double_Container(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x113c0
void Container_double_push(Container_double_ *self,double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 iVar1 = *(int *)((char *)self + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)((char *)self + iVar1 * 8 + 4);
 *(int *)((char *)self + 0x50) = iVar1 + 1;
 *(double *)((char *)self + iVar1 * 8) = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x113f0
unsigned long long Container_double_get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)((char *)self + 0x50))) {
 return *(unsigned long long *)((char *)self + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x1141c
unsigned int Container_double_getSize(Container_double_ *self)
{
 return *(unsigned int *)((char *)self + 0x50);
}

// Function: _fini @ 0x11424
void _fini(void)
{
 return;
}

