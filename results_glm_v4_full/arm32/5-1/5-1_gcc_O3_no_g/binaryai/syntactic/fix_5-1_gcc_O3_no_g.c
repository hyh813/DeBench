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

typedef long long intmax_t;
typedef unsigned long long uintmax_t;
typedef long int intptr_t;
typedef unsigned long uintptr_t;

// Decompiled by BinaryAI
// SHA256: 73da54d3d9affd9ed2b8da5f92d284321a7f5abf447111edfe026752bb113408

/* Forward declarations and type definitions */
typedef struct Init Init;
typedef struct type_info type_info;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct DiamondDerived DiamondDerived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct Container_int Container_int;
typedef struct Container_double Container_double;

/* Forward declaration for test_cpp_oo_features */
void test_cpp_oo_features(void);

/* Incomplete structure definitions for template containers */
struct Container_int {
  char data[44];  // Padding for vtable and members
};

struct Container_double {
  char data[84];  // Padding for vtable and members
};
typedef struct LifecycleClass LifecycleClass;

/* Structure definitions for incomplete types */
struct Base {
  void *vtable;
};

struct Derived {
  void *vtable;
  int member;
};

struct MiddleA {
  void *vtable;
  char padding[16];
};

struct MiddleB {
  void *vtable;
  char padding[16];
};

struct MultiDerived {
  void *vtable;
  char padding[16];
};

struct DiamondDerived {
  void *vtable;
  char padding[32];
};

/* External variables */
extern char completed_0;
extern void *std___ioinit;
extern void *__dso_handle;
extern void *stack__ioinit;
extern int LifecycleClass_instance_count;
extern void *PTR__RTTIDerivedA_000116b4;
extern void *PTR__RTTIDerivedB_000116c8;
extern type_info int_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info RTTIBase_typeinfo;
extern char DAT_000114c0[];
extern char DAT_000114d8[];
extern char DAT_000114fc[];
extern char DAT_0001151c[];
extern char DAT_00011538[];
extern char DAT_00011554[];
extern char DAT_00011570[];
extern char DAT_00011590[];
extern char DAT_000115ac[];
extern char DAT_000115c8[];
extern char DAT_000115e4[];
extern char DAT_00011600[];
extern char DAT_00011620[];
extern char DAT_00011640[];

/* External function declarations */
extern void call_weak_fn(void);
extern void __gmon_start__(void);
extern void *__cxa_allocate_exception(size_t);
extern void __cxa_throw(void *, type_info *, void *);
extern void __aeabi_atexit(void *, void (*)(void *), void *);
extern int __aeabi_d2iz(double);
extern int __aeabi_dcmpgt(double, double);
extern int __printf_chk(int, const char *, ...);
extern void *__dynamic_cast(void *, type_info *, type_info *, int);
extern int std_type_info_operator_eq(type_info *, type_info *);
extern void *operator_new(unsigned int);
extern void operator_delete(void *, size_t);
extern void __stack_chk_fail(void);
extern int template_max_int_(int, int);
extern double template_max_double_(double, double);
extern void template_swap_int_(int *, int *);

/* Macro for CONCAT44 */
#define CONCAT44(hi, lo) (((uint64_t)(hi) << 32) | (uint32_t)(lo))

typedef unsigned long long ulonglong;

// Function: _init @ 0x10920
int _init(void *ctx)
{
 call_weak_fn();
 return 0;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 void (**fn_ptr)(void) = (void (**)(void))NULL;
 (*fn_ptr)();
}

// Function: <EXTERNAL>::operator.new @ 0x10940
void *operator_new(unsigned int param_1)
{
 extern void *__builtin_new(unsigned long);
 void *pvVar1;
 pvVar1 = __builtin_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
/* void *__cxa_begin_catch(void *exception_obj); */

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
/* void *__cxa_allocate_exception(size_t size); */

// Function: <EXTERNAL>::puts @ 0x10970
extern int puts(char *__s);

// Function: <EXTERNAL>::operator.delete @ 0x1097c
void operator_delete_impl(void *param_1, size_t param_2)
{
 extern void __builtin_delete(size_t, void *);
 __builtin_delete(param_2, param_1);
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
extern void __libc_start_main(int (*)(void), int, char **, int (*)(void), void (*)(void), void *);

// Function: <EXTERNAL>::abort @ 0x10994
extern void abort(void);

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
int std_type_info_operator_eq_(type_info *obj,type_info *param_1)
{
 return std_type_info_operator_eq(obj,param_1);
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail_impl(void)
{
 extern void __stack_chk_fail(void);
 __stack_chk_fail();
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup_impl(void)
{
 /* __cxa_end_cleanup implementation - external */
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void *__dynamic_cast_impl(void *obj, type_info *src, type_info *dst, int offset)
{
 return __dynamic_cast(obj, src, dst, offset);
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow_impl(void)
{
 /* __cxa_rethrow implementation - external */
 return;
}

// Function: <EXTERNAL>::strlen @ 0x109dc
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x109e8
void Init_Constructor(Init *self)
{
 extern void std_ios_base_Init_Init(void *);
 std_ios_base_Init_Init(self);
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
int __aeabi_d2iz(double x)
{
 return (int)x;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch_impl(void)
{
 /* __cxa_end_catch implementation - external */
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void)
{
 /* Stub for C++ exception personality function */
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10a18
void __cxa_throw(void *obj, type_info *tinfo, void *dest)
{
 __cxa_throw(obj, tinfo, dest);
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
extern int __aeabi_dcmpgt(double a, double b);

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk_impl(int flag, const char *fmt, ...)
{
 extern int __printf_chk(int, const char *, ...);
 return __printf_chk(flag, fmt);
}

// Function: test_cpp_exception @ 0x10a60
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int_typeinfo,0);
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
 Init_Constructor((Init *)&std___ioinit);
 (void)__aeabi_atexit((void *)&std___ioinit,(void (*)(void *))Init_Constructor,&__dso_handle);
 return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 extern char stack0x00000004;
 char **argv = (char **)&stack0x00000004;
 __libc_start_main(main,param_2,argv,0,0,param_1);
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
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10cdc
void call_virtual_func(Base *param_1,int param_2)
{
 void ***vpp = (void ***)param_1;
 void **vp = *vpp;
 void *func = *vp;
 ((void (*)(Base *, int))func)(param_1, param_2);
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
 double dVar2;
 int iVar3;
 unsigned long long uVar4;
 unsigned int in_stack_ffffffe0;
 int in_stack_ffffffe4;
 int iVar5;
 int in_stack_ffffffe8;
 int iVar6;
 int stack0xffffffe4;
 int stack0xffffffe8;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 dVar2 = 0.0;
 template_max_double_
 ((double)CONCAT44(in_stack_ffffffe4,in_stack_ffffffe0),
 (double)CONCAT44(iVar3,in_stack_ffffffe8));
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffe4,(int *)&stack0xffffffe8);
  uVar4 = (unsigned long long)__aeabi_d2iz(dVar2);
 if (iVar3 == 0) {
 return;
 }
 __stack_chk_fail_impl();
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
 type_info *tinfo;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)(intptr_t)&PTR__RTTIDerivedA_000116b4;
 piVar2 = (int *)operator_new(4);
 tinfo = *(type_info **)((char *)piVar1 + -4);
 *piVar2 = (int)(intptr_t)&PTR__RTTIDerivedB_000116c8;
 iVar3 = std_type_info_operator_eq_(tinfo,(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0x14;
 iVar6 = 0;
 }
 else {
 iVar6 = 10;
 iVar3 = 0x1e;
 }
 iVar4 = std_type_info_operator_eq_
 ((type_info *)(*(int *)*piVar2 + -4),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar6 = iVar3;
 }
 iVar3 = (int)__dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar3 != 0) {
 iVar6 = iVar6 + 100;
 }
 iVar3 = (int)__dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar4 = *piVar1;
 if (iVar3 != 0) {
 iVar6 = iVar6 + 200;
 }
 __s = *(char **)(*(int *)((void *)iVar4 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))*(void **)(iVar4 + 4))(piVar1);
 ((void (*)(void *))*(void **)(*piVar2 + 4))(piVar2);
 return iVar6 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ed4
void test_cpp_oo_features(void)
{
 char stack0xffffffcc[31];
 char stack0xffffffc0[32];
 int stack0xffffffc4;
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
 puts((char *)&DAT_000114d8);
 strncpy((char *)&stack0xffffffcc,"Test",0x1f);
 sVar1 = strlen((char *)&stack0xffffffcc);
 __printf_chk(1,(const char *)&DAT_000114fc,sVar1 + 0x125c);
 __printf_chk(1,(const char *)&DAT_0001151c,LifecycleClass_instance_count * 0x3e9 + 0x15);
 __printf_chk(1,(const char *)&DAT_00011538,0x2a);
 __printf_chk(1,(const char *)&DAT_00011554,0x47);
 __printf_chk(1,(const char *)&DAT_00011570,0x28a);
 __printf_chk(1,(const char *)&DAT_00011590,0x16);
 iVar2 = template_max_int_(3,7);
 uVar3 = 0;
 template_max_double_((double)CONCAT44(in_stack_ffffffc4, in_stack_ffffffc0), (double)in_stack_ffffffc8);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_((int *)&stack0xffffffc0,(int *)&stack0xffffffc4);
  iVar4 = (int)__aeabi_d2iz(uVar3);
  __printf_chk(1,(const char *)&DAT_000115ac,iVar4 + iVar2 + iVar5 + iVar6);
 __printf_chk(1,(const char *)&DAT_000115c8,0x10);
 __printf_chk(1,(const char *)&DAT_000115e4,0x55);
  test_cpp_exception();
  uVar3 = 0;
  __printf_chk(1,(const char *)&DAT_00011600,uVar3);
  __printf_chk(1,(const char *)&DAT_00011620,0x2bf);
  uVar3 = test_cpp_rtti();
  __printf_chk(1,(const char *)&DAT_00011640,uVar3);
 return;
}



// Function: Base::virtual_func @ 0x110d-d0
int Base_virtual_func(Base *obj,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x110d8
char * Base_getName(Base *obj)
{
 return (char *)&DAT_000114c0;
}

// Function: Base::~Base @ 0x110e4
void Base_destructor(Base *obj)
{
 return;
}

// Function: Derived::virtual_func @ 0x110e8
int Derived_virtual_func(Derived *obj,int param_1)
{
 return param_1 * *(int *)(obj + 4);
}

// Function: Derived::getName @ 0x110f4
char * Derived_getName(Derived *obj)
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

// Function: MultiDerived::funcB @ 0x11110
unsigned int MultiDerived_funcB_this(MultiDerived *obj)
{
 return 0x28;
}

// Function: MiddleA::func @ 0x11118
int MiddleA_func(MiddleA *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x11130
int MiddleA_func2(MiddleA *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + *(int *)(*(int *)obj + -0xc)) + -0xc) +
 *(int *)(*(int *)obj + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x11154
int MiddleB_func(MiddleB *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x1116c
int MiddleB_func2(MiddleB *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + *(int *)(*(int *)obj + -0xc)) + -0xc) +
 *(int *)(*(int *)obj + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11190
int DiamondDerived_func(DiamondDerived *obj)
{
 return *(int *)(obj + *(int *)(*(int *)obj + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x111a8
int DiamondDerived_func2(DiamondDerived *obj)
{
 return *(int *)(obj + *(int *)(*(int *)(obj + *(int *)(*(int *)obj + -0xc)) + -0xc) +
 *(int *)(*(int *)obj + -0xc) + 4) + 0xfa;
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
void RTTIDerivedB_destructor(RTTIDerivedB *self)
{
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x111f8
void RTTIDerivedA_destructor(RTTIDerivedA *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x111fc
void DiamondDerived_destructor(DiamondDerived *self)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11200
DiamondDerived * DiamondDerived_delete(DiamondDerived *self)
{
 return self + (intptr_t)*(int *)(*(int *)self + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11210
DiamondDerived * DiamondDerived_deleting2(DiamondDerived *self)
{
 return self + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11218
void MultiDerived_destructor(MultiDerived *self)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1121c
MultiDerived * MultiDerived_delete(MultiDerived *self)
{
 return self + -8;
}

// Function: Derived::~Derived @ 0x11224
void Derived_destructor(Derived *self)
{
 return;
}

// Function: Base::~Base @ 0x11228
Base * Base___delete(Base *self)
{
 operator_delete(self,4);
 return self;
}

// Function: Derived::~Derived @ 0x11240
Derived * Derived___delete(Derived *self)
{
 operator_delete(self,8);
 return self;
}

// Function: MultiDerived::~MultiDerived @ 0x11258
MultiDerived * MultiDerived_delete1(MultiDerived *self)
{
 operator_delete(self,0x10);
 return self;
}

// Function: MultiDerived::~MultiDerived @ 0x11270
MultiDerived * MultiDerived_delete2(MultiDerived *self)
{
 operator_delete(self + -8,0x10);
 return self + -8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1128c
RTTIDerivedB * RTTIDerivedB___delete(RTTIDerivedB *self)
{
 operator_delete(self,4);
 return self;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x112a4
RTTIDerivedA * RTTIDerivedA___delete(RTTIDerivedA *self)
{
 operator_delete(self,4);
 return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112bc
DiamondDerived * DiamondDerived_delete1(DiamondDerived *self)
{
 operator_delete(self,0x18);
 return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112d4
DiamondDerived * DiamondDerived_delete2(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 operator_delete((void *)(self + iVar1),0x18);
 return self + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x112f8
DiamondDerived * DiamondDerived_delete3(DiamondDerived *self)
{
 operator_delete(self + -8,0x18);
 return self + -8;
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
 if (__aeabi_dcmpgt(param_1, param_2)) {
 return param_1;
 }
 return param_2;
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
void Container_int_Constructor(Container_int *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x11370
void Container_int_push(Container_int *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11388
unsigned int Container_int_get(Container_int *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 return *(unsigned int *)(self + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x113ac
unsigned int Container_int_getSize(Container_int *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x113b4
void Container_double_Constructor(Container_double *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x113c0
void Container_double_push(Container_double *self,double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 union {
   double d;
   unsigned int u[2];
 } val;
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
   puVar2 = (unsigned int *)(self + iVar1 * 8 + 4);
   *(int *)(self + 0x50) = iVar1 + 1;
   val.d = param_1;
   *puVar2 = val.u[0];
   puVar2[1] = val.u[1];
 }
 return;
}

// Function: Container<double>::get @ 0x113f0
unsigned long long Container_double_get(Container_double *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return *(unsigned long long *)(self + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x1141c
unsigned int Container_double_getSize(Container_double *self)
{
 return *(unsigned int *)(self + 0x50);
}

// Forward declaration for test_cpp_oo_features
void test_cpp_oo_features(void);

// Function: _fini @ 0x11424
void _fini(void)
{
 return;
}

