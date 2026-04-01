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

// Decompiled by BinaryAI
// SHA256: 2fe63e63c0b1898b82d05f8607ec83b83a6a5e3ac53489d6b02ada9a63ab6597

/* Forward declarations */
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;
typedef struct DiamondDerived DiamondDerived;
typedef struct Init Init;
typedef struct type_info type_info;
typedef struct Base Base;
typedef struct Derived Derived;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;
typedef struct MultiDerived MultiDerived;
typedef struct MiddleA MiddleA;
typedef struct MiddleB MiddleB;
typedef struct LifecycleClass LifecycleClass;
typedef struct r_int r_int;

void call_weak_fn(void);
void test_cpp_oo_features(void);
int template_max_int_(int, int);
double template_max_double_(double, double);
void template_swap_int_(unsigned int *, unsigned int *);

/* Type definitions */
struct type_info {
    void **vptr;
    const char *name;
};

struct Container_int_ {
    int data[10];
    unsigned int size;
    unsigned int _padding[3];
};

struct Container_double_ {
    double data[10];
    unsigned int size;
    unsigned int _padding[7];
};

struct DiamondDerived {
    void **vptr;
    int data[5];
};

struct MiddleA {
    void **vptr;
};

struct MiddleB {
    void **vptr;
};

struct Base {
    void **vptr;
};

struct Derived {
    void **vptr;
};

struct MultiDerived {
    void **vptr;
};

struct RTTIDerivedA {
    void **vptr;
};

struct RTTIDerivedB {
    void **vptr;
};

struct Init {
    int _dummy;
};

struct LifecycleClass {
    int _dummy;
};

struct r_int {
    int value;
};

/* Global variables */
extern char std___ioinit;
extern char completed_0;
extern void *__dso_handle;
extern unsigned int stack0x00000004;
extern int LifecycleClass_instance_count;
extern unsigned int stack0xffffffe4;
extern unsigned int stack0xffffffe8;

/* Data references */
extern char DAT_00011438[];
extern char DAT_00011450[];
extern char DAT_00011474[];
extern char DAT_00011494[];
extern char DAT_000114b0[];
extern char DAT_000114cc[];
extern char DAT_000114e8[];
extern char DAT_00011508[];
extern char DAT_00011524[];
extern char DAT_00011540[];
extern char DAT_0001155c[];
extern char DAT_00011578[];
extern char DAT_00011598[];
extern char DAT_000115b8[];
extern void *PTR__RTTIDerivedA_0001162c;
extern void *PTR__RTTIDerivedB_00011640;
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;

/* External functions */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, type_info *, void (*)(void *));
int __aeabi_dcmpgt(double, double);
int __aeabi_atexit(void *, void (*)(void *), void *);
void __gmon_start__(void);
int __aeabi_d2iz_int(double);
#define __aeabi_d2iz(x) __aeabi_d2iz_int(x)
int __printf_chk(int, const char *, ...);
int puts(const char *);
char *strncpy(char *, const char *, size_t);
size_t strlen(const char *);

int __aeabi_d2iz_d(double);

int __dynamic_cast(void *, void *, void *, int);

int __aeabi_atexit(void *, void (*)(void *), void *);

/* Helper macros */
#define CONCAT44(high, low) (((uint64_t)(high) << 32) | (uint32_t)(low))

// Function: _init @ 0x10920
int _init(void *ctx)
{
 int iVar1;
 call_weak_fn();
 iVar1 = 0;
 return iVar1;
}

// Function: FUN_0001092c @ 0x1092c
void FUN_0001092c(void)
{
 ((void (*)(void))0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x10940
void * operator_new(unsigned int param_1)
{
 void *pvVar1;
 extern void *malloc(size_t);
 pvVar1 = malloc(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10958
void *__cxa_begin_catch_internal(void *exception_obj)
{
 return exception_obj;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10964
void *__cxa_allocate_exception_internal(void)
{
 return __cxa_allocate_exception(4);
}



// Function: <EXTERNAL>::operator.delete @ 0x1097c
void operator_delete(void *param_1,unsigned int param_2)
{
 extern void free(void *);
 free(param_1);
}

// Function: <EXTERNAL>::__libc_start_main @ 0x10988
void __libc_start_main(int (*main_func)(int, char **), int argc, char **argv, int (*init)(void), void (*fini)(void), void (*rtld_fini)(void))
{
  main_func(argc, argv);
  return;
}

// Function: <EXTERNAL>::abort @ 0x10994
void abort_internal(void)
{
  while(1);
}

// Function: <EXTERNAL>::std::type_info::operator== @ 0x109a0
int std_type_info_operator__(type_info *self,type_info *param_1)
{
 return self == param_1;
}

// Function: <EXTERNAL>::__stack_chk_fail @ 0x109ac
void __stack_chk_fail(void)
{
  /* Terminate instead of infinite recursion */
  while(1);
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x109b8
void __cxa_end_cleanup(void)
{
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x109c4
void *__dynamic_cast_internal(void *obj, void *src, void *dst, int flags)
{
 (void)src;
 (void)dst;
 (void)flags;
 return obj;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x109d0
void __cxa_rethrow(void)
{
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
void std_ios_base_Init_Init(Init *self)
{
 return;
}

// Function: <EXTERNAL>::__aeabi_d2iz @ 0x109f4
int __aeabi_d2iz_int(double x)
{
 return (int)x;
}

int __aeabi_d2iz_d(double x)
{
 return (int)x;
}



// Function: <EXTERNAL>::__cxa_end_catch @ 0x10a00
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x10a0c
void __gxx_personality_v0(void)
{
 return;
}



// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10a24
int __aeabi_dcmpgt_internal(double a, double b)
{
 return a > b;
}

// Forward declaration
int __aeabi_dcmpgt_internal(double, double);

// Function: <EXTERNAL>::strncpy @ 0x10a30
char * strncpy(char *__dest,char *__src,size_t __n)
{
 char *pcVar1;
 pcVar1 = strncpy(__dest,__src,__n);
 return pcVar1;
}

// Function: <EXTERNAL>::__printf_chk @ 0x10a48
int __printf_chk(int flag, const char *fmt, ...)
{
 return 0;
}

// Function: test_cpp_exception @ 0x10a60
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&RTTIBase_typeinfo,0);
}

// Function: main @ 0x10b18
int main(int argc, char **argv)
{
 (void)argc;
 (void)argv;
 test_cpp_oo_features();
 return 0;
}

// Function: _GLOBAL__sub_I_test_cpp_member_func @ 0x10b28
void _GLOBAL__sub_I_test_cpp_member_func(void)
{
  std_ios_base_Init_Init((Init *)&std___ioinit);
  (void)__aeabi_atexit(&std___ioinit,(void (*)(void *))std_ios_base_Init_Init,&__dso_handle);
  return;
}

// Function: _start @ 0x10b58
void _start(unsigned int param_1,unsigned int param_2)
{
 __libc_start_main(main,param_2,(char **)&stack0x00000004,0,(void (*)())0,(void (*)())param_1);
 abort_internal();
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
void call_virtual_func(Base *obj,int param_2)
{
 (void)obj;
 (void)param_2;
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
 int iVar3;
 unsigned long long uVar4;
 int iVar5;
 int iVar6;
 iVar3 = 0;
 iVar1 = template_max_int_(3,7);
 uVar2 = 0;
 uVar4 = template_max_double_(3.0, 7.0);
 iVar5 = 10;
 iVar6 = 0x14;
 template_swap_int_(&stack0xffffffe4,&stack0xffffffe8);
 uVar4 = (unsigned long long)uVar2;
 (void)uVar4;
 (void)iVar5;
 (void)iVar6;
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
 r_int *piVar1;
 r_int *piVar2;
 type_info *ti;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 piVar1 = (r_int *)operator_new(4);
 piVar1->value = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (r_int *)operator_new(4);
 ti = *(type_info **)((int)(void*)piVar1 + -4);
 piVar2->value = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = std_type_info_operator__(ti,(type_info *)&RTTIDerivedA_typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std_type_info_operator__((*(type_info **)((int)(void*)piVar2 + -4)),(type_info *)&RTTIDerivedB_typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = __dynamic_cast(piVar1,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
 iVar6 = piVar1->value;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)((intptr_t)iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 ((void (*)(void *))(*(void **)((intptr_t)iVar6 + 4)))(piVar1);
 ((void (*)(void *))(*(void **)((intptr_t)(void*)piVar2 + 4)))(piVar2);
 return iVar3 + sVar5;
}

// Function: test_cpp_oo_features @ 0x10ec8
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 char acStack_2c [31];
 char local_d;
 int local_c;
 local_c = 0;
 puts((const char *)&DAT_00011450);
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 __printf_chk(1,DAT_00011474,sVar1 + 0x125c);
 uVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00011494,uVar2);
 __printf_chk(1,DAT_000114b0,0x2a);
 __printf_chk(1,DAT_000114cc,0x47);
 uVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000114e8,uVar2);
 __printf_chk(1,DAT_00011508,0x16);
 uVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_00011524,uVar2);
 __printf_chk(1,DAT_00011540,0x10);
 __printf_chk(1,DAT_0001155c,0x55);
 test_cpp_exception();
 __printf_chk(1,DAT_00011578,0);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598,uVar2);
 test_cpp_template_func();
 test_cpp_rtti();
 uVar2 = 0;
 if (local_c == 0) {
 __printf_chk(1,DAT_000115b8,uVar2);
 return;
 }
 __stack_chk_fail();
}

// Function: Base::virtual_func @ 0x11048
int Base_virtual_func(Base *self,int param_1)
{
 return param_1 + 1;
}

// Function: Base::getName @ 0x11050
unsigned char * Base_getName(Base *self)
{
  return (unsigned char *)&DAT_00011438;
}

// Function: Base::~Base @ 0x1105c
void Base_destructor_0(Base *self)
{
  return;
}

// Function: Derived::virtual_func @ 0x11060
int Derived_virtual_func(Derived *self,int param_1)
{
  return param_1 * *(int *)(self + 4);
}

// Function: Derived::getName @ 0x1106c
char * Derived_getName(Derived *self)
{
 return "Derived";
}

// Function: MultiDerived::funcA @ 0x11078
unsigned int MultiDerived_funcA(MultiDerived *self)
{
 return 0x1e;
}

// Function: MultiDerived::funcB @ 0x11080
unsigned int MultiDerived_funcB_0(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x11088
unsigned int MultiDerived_funcB(MultiDerived *self)
{
  return 0x28;
}

// Function: MiddleA::func @ 0x11090
int MiddleA_func(MiddleA *self)
{
  return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleA::func @ 0x110a8
int MiddleA_func_2(MiddleA *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0x96;
}

// Function: MiddleB::func @ 0x110cc
int MiddleB_func(MiddleB *self)
{
  return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: MiddleB::func @ 0x110e4
int MiddleB_func_2(MiddleB *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 200;
}

// Function: DiamondDerived::func @ 0x11108
int DiamondDerived_func(DiamondDerived *self)
{
  return *(int *)((char *)self + *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11120
int DiamondDerived_func_2(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + *(int *)(*(int *)self + -0xc)) + -0xc) +
 *(int *)(*(int *)self + -0xc) + 4) + 0xfa;
}

// Function: DiamondDerived::func @ 0x11144
int DiamondDerived_func_3(DiamondDerived *self)
{
 return *(int *)((char *)self + *(int *)(*(int *)((char *)self + -8) + -0xc) + -4) + 0xfa;
}

// Function: RTTIDerivedA::getType @ 0x1115c
unsigned int RTTIDerivedA_getType(RTTIDerivedA *self)
{
 return 1;
}

// Function: RTTIDerivedB::getType @ 0x11164
unsigned int RTTIDerivedB_getType(RTTIDerivedB *self)
{
 return 2;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1116c
void RTTIDerivedB__RTTIDerivedB(RTTIDerivedB *self)
{
  return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11170
void RTTIDerivedA__RTTIDerivedA(RTTIDerivedA *self)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11174
void DiamondDerived_destructor_1(DiamondDerived *self)
{
  return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11178
DiamondDerived * DiamondDerived_destructor_2(DiamondDerived *self)
{
 return self + *(int *)(*(int *)self + -0x10);
}

// Function: DiamondDerived::~DiamondDerived @ 0x11188
DiamondDerived * DiamondDerived_destructor_3(DiamondDerived *self)
{
 return self + -8;
}

// Function: MultiDerived::~MultiDerived @ 0x11190
void MultiDerived_destructor_1(MultiDerived *self)
{
  return;
}

// Function: MultiDerived::~MultiDerived @ 0x11194
MultiDerived * MultiDerived_destructor_2(MultiDerived *self)
{
 return self + -8;
}

// Function: Derived::~Derived @ 0x1119c
void Derived_destructor_1(Derived *self)
{
  return;
}

// Function: Base::~Base @ 0x111a0
Base * Base_destructor_2(Base *self)
{
  operator_delete((void *)self,(size_t)4);
  return self;
}

// Function: Derived::~Derived @ 0x111b8
Derived * Derived_destructor_2(Derived *self)
{
  operator_delete((void *)self,(size_t)8);
  return self;
}

// Function: MultiDerived::~MultiDerived @ 0x111d0
MultiDerived * MultiDerived_destructor_3(MultiDerived *self)
{
  MultiDerived *ret = self;
  operator_delete((void *)self,(size_t)0x10);
  return ret;
}

// Function: MultiDerived::~MultiDerived @ 0x111e8
MultiDerived * MultiDerived_destructor_4(MultiDerived *self)
{
  operator_delete(self + -8,(size_t)0x10);
  return self + -8;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11204
RTTIDerivedB * RTTIDerivedB_destructor_2(RTTIDerivedB *self)
{
  operator_delete(self,4);
  return self;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1121c
RTTIDerivedA * RTTIDerivedA_destructor_2(RTTIDerivedA *self)
{
  operator_delete(self,4);
  return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11234
DiamondDerived * DiamondDerived_destructor_4(DiamondDerived *self)
{
  operator_delete(self,(size_t)0x18);
  return self;
}

// Function: DiamondDerived::~DiamondDerived @ 0x1124c
DiamondDerived * DiamondDerived_destructor_5(DiamondDerived *self)
{
 int iVar1;
 iVar1 = *(int *)(*(int *)self + -0x10);
 operator_delete((char *)self + iVar1, 0x18);
 return self + iVar1;
}

// Function: DiamondDerived::~DiamondDerived @ 0x11270
DiamondDerived * DiamondDerived_destructor_6(DiamondDerived *self)
{
  operator_delete(self + -8,0x18);
  return self + -8;
}

// Function: template_max<int> @ 0x1128c
int template_max_int_(int param_1,int param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x11298
double template_max_double_(double param_1,double param_2)
{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x112c8
void template_swap_int_(unsigned int *param_1,unsigned int *param_2)
{
 unsigned int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x112dc
void Container_int__Constructor(Container_int_ *self)
{
 *(unsigned int *)(self + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x112e8
void Container_int__push(Container_int_ *self,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(self + 0x28);
 if (iVar1 < 10) {
 *(int *)(self + 0x28) = iVar1 + 1;
 *(int *)(self + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x11300
unsigned int Container_int__get(Container_int_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x28))) {
 return *(unsigned int *)(self + param_1 * 4);
 }
 return 0;
}

// Function: Container<int>::getSize @ 0x11324
unsigned int Container_int__getSize(Container_int_ *self)
{
 return *(unsigned int *)(self + 0x28);
}

// Function: Container<double>::Container @ 0x1132c
void Container_double__Constructor(Container_double_ *self)
{
 *(unsigned int *)(self + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x11338
void Container_double__push(Container_double_ *self, double param_1)
{
 int iVar1;
 unsigned int *puVar2;
 union {
   double d;
   unsigned int u[2];
 } u;
 iVar1 = *(int *)(self + 0x50);
 if (iVar1 < 10) {
 puVar2 = (unsigned int *)(self + iVar1 * 8);
 *(int *)(self + 0x50) = iVar1 + 1;
 u.d = param_1;
 *puVar2 = u.u[0];
 puVar2[1] = u.u[1];
 }
}

// Function: Container<double>::get @ 0x11368
unsigned long long Container_double__get(Container_double_ *self,int param_1)
{
 if ((-1 < param_1) && (param_1 < *(int *)(self + 0x50))) {
 return *(unsigned long long *)(self + param_1 * 8);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11394
unsigned int Container_double__getSize(Container_double_ *self)
{
 return *(unsigned int *)(self + 0x50);
}

// Function: _fini @ 0x1139c
void _fini(void)
{
 return;
}

