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
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef void * code;
typedef int undefined4;

/* Forward declarations and runtime function prototypes */
struct type_info;

// Exception handling
void *operator_new(size_t size);
void operator_delete(void *ptr, size_t size);
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *obj, struct type_info *info, void (*destructor)(void *));
int __cxa_atexit(void (*destructor)(void *), void *arg, void *dso_handle);

// String functions
char *strncpy(char *dest, const char *src, size_t n);
size_t strlen(const char *s);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);

// Stack protection
void __stack_chk_fail(void);

// ARM EABI functions
int __aeabi_atexit(void *arg, void (*func)(void *), void *dso_handle);
void __aeabi_atexit_init(void);
int __aeabi_d2iz(double val);
int __aeabi_dcmpgt(double a, double b);
void *memcpy(void *dest, const void *src, size_t n);

// Standard library classes
namespace std {
    class ios_base {
    public:
        class Init {
        public:
            ~Init();
            Init();
        };
    };
    extern ios_base::Init __ioinit;
}

// Runtime type information
extern type_info int::typeinfo;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct type_info {
    const char *name;
    virtual ~type_info();
    bool operator==(const type_info &rhs) const;
};

namespace std {
    bool type_info::operator==(const type_info &rhs) const {
        return this == &rhs;
    }
}

// Class declarations
struct Base {
    int value;
    virtual int virtual_func(int x);
    virtual ~Base();
    const char *getName() const;
};

struct Derived : public Base {
    int multiplier;
    int virtual_func(int x);
    ~Derived();
};

struct MiddleA {
    virtual int func();
};

struct MiddleB {
    virtual int func();
};

struct MultiDerived : public MiddleA, public MiddleB {
    int virtual_func(int x);
    int funcA();
    int funcB();
    ~MultiDerived();
};

struct DiamondDerived : public MiddleA, public MiddleB {
    virtual int func();
    ~DiamondDerived();
};

struct LifecycleClass {
    static int instance_count;
};

struct RTTIBase {
    virtual ~RTTIBase();
    virtual int getType() const;
};

struct RTTIDerivedA : public RTTIBase {
    ~RTTIDerivedA();
    int getType() const;
};

struct RTTIDerivedB : public RTTIBase {
    ~RTTIDerivedB();
    int getType() const;
};

// Template functions
template<typename T>
T template_max(T a, T b) {
    return (a < b) ? b : a;
}

template<typename T>
void template_swap(T *a, T *b) {
    T temp = *a;
    *a = *b;
    *b = temp;
}

// Template class declarations
template<typename T>
struct Container {
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int index) const;
    int getSize() const;
};

// Function declarations
void test_cpp_oo_features(void);
int test_cpp_member_func(void);
int test_cpp_constructor(void);
void call_virtual_func(Base *obj, int val);
undefined4 test_cpp_virtual_func(void);
undefined4 test_cpp_multiple_inheritance(void);
undefined4 test_cpp_diamond_inheritance(void);
undefined4 test_cpp_operator_overload(void);
void test_cpp_template_func(void);
undefined4 test_cpp_template_class(void);
undefined4 test_cpp_lambda(void);
undefined4 test_cpp_smart_ptr(void);
int test_cpp_rtti(void);

// Global data declarations
extern const char *DAT_00011438;
extern const char *DAT_00011450;
extern const char *DAT_00011474;
extern const char *DAT_00011494;
extern const char *DAT_000114b0;
extern const char *DAT_000114cc;
extern const char *DAT_000114e8;
extern const char *DAT_00011508;
extern const char *DAT_00011524;
extern const char *DAT_00011540;
extern const char *DAT_0001155c;
extern const char *DAT_00011578;
extern const char *DAT_00011598;
extern const char *DAT_000115b8;
extern void *PTR__RTTIDerivedA_0001162c;
extern void *PTR__RTTIDerivedB_00011640;
extern type_info RTTIDerivedA::typeinfo;
extern type_info RTTIDerivedB::typeinfo;
extern type_info RTTIBase::typeinfo;

// __dynamic_cast implementation
void *__dynamic_cast(const void *obj, const type_info *src_type, 
                      const type_info *dst_type, int direction);

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O2_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: main @ 00010b18 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I_test_cpp_member_func @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

void _GLOBAL__sub_I_test_cpp_member_func(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __aeabi_atexit(&std::__ioinit,std::ios_base::Init::~Init,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 size_t sVar1;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 strncpy(acStack_2c,"Test",0x1f);
 local_d = 0;
 sVar1 = strlen(acStack_2c);
 if (local_c == 0) {
 return sVar1 + 0x125c;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
 return;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

void test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 undefined4 extraout_r1;
 double extraout_d0;
 double extraout_d1;
 undefined8 uVar2;
 int iStack_1c;
 int iStack_18;
 int local_14;
 
 local_14 = 0;
 iVar1 = template_max<int>(3,7);
 template_max<double>(extraout_d0,extraout_d1);
 iStack_1c = 10;
 iStack_18 = 0x14;
 template_swap<int>(&iStack_1c,&iStack_18);
 uVar2 = __aeabi_d2iz(extraout_r0,extraout_r1);
 if (local_14 == 0) {
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail((int)uVar2 + iVar1 + iStack_1c + iStack_18,(int)((ulonglong)uVar2 >> 0x20),
 local_14,0);
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 type_info *this;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 piVar1 = operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = operator_new(4);
 this = *(type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = std::type_info::operator==(this,(type_info *)&RTTIDerivedA::typeinfo);
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = std::type_info::operator==
 (*(type_info **)(*piVar2 + -4),(type_info *)&RTTIDerivedB::typeinfo);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = __dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = __dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (**(code **)(iVar6 + 4))(piVar1);
 (**(code **)(*piVar2 + 4))(piVar2);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ec8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 char acStack_2c [31];
 undefined1 local_d;
 int local_c;
 
 local_c = 0;
 puts(&DAT_00011450);
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
 __printf_chk(1,&DAT_00011540,0x10);
 __printf_chk(1,&DAT_0001155c,0x55);
 uVar2 = test_cpp_exception();
 __printf_chk(1,&DAT_00011578,uVar2);
 uVar2 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_00011598,uVar2);
 uVar2 = test_cpp_rtti();
 if (local_c == 0) {
 __printf_chk(1,&DAT_000115b8,uVar2);
 return;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: virtual_func @ 00011048 */

/* Base::virtual_func(int) */

int Base::virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: getName @ 00011050 */

/* Base::getName() const */

undefined1 * Base::getName(void)

{
 return &DAT_00011438;
}



/* Function: ~Base @ 0001105c */

/* Base::~Base() */

Base::~Base(Base *this)

{
 return this;
}



/* Function: virtual_func @ 00011060 */

/* Derived::virtual_func(int) */

int Derived::virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 4);
}



/* Function: getName @ 0001106c */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: funcA @ 00011078 */

/* MultiDerived::funcA() */

undefined4 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: funcB @ 00011080 */

/* MultiDerived::funcB() */

undefined4 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00011088 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00011090 */

/* MiddleA::func() */

int MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 000110a8 */

/* virtual thunk to MiddleA::func() */

int MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0x96;
}



/* Function: func @ 000110cc */

/* MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 000110e4 */

/* virtual thunk to MiddleB::func() */

int MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 200;
}



/* Function: func @ 00011108 */

/* DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011120 */

/* virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + *(int *)(*(int *)this + -0xc)) + -0xc) +
 *(int *)(*(int *)this + -0xc) + 4) + 0xfa;
}



/* Function: func @ 00011144 */

/* non-virtual thunk to DiamondDerived::func() */

int DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(int *)(*(int *)(this + -8) + -0xc) + -4) + 0xfa;
}



/* Function: getType @ 0001115c */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: getType @ 00011164 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 0001116c */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB *RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 return this;
}



/* Function: ~RTTIDerivedA @ 00011170 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA *RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 00011174 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return this;
}



/* Function: ~DiamondDerived @ 00011178 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return this + *(int *)(*(int *)this + -0x10);
}



/* Function: ~DiamondDerived @ 00011188 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return this + -8;
}



/* Function: ~MultiDerived @ 00011190 */

/* MultiDerived::~MultiDerived() */

MultiDerived *MultiDerived::~MultiDerived(MultiDerived *this)

{
 return this;
}



/* Function: ~MultiDerived @ 00011194 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived *MultiDerived::~MultiDerived(MultiDerived *this)

{
 return this + -8;
}



/* Function: ~Derived @ 0001119c */

/* Derived::~Derived() */

Derived::~Derived(Derived *this)

{
 return this;
}



/* Function: ~Base @ 000111a0 */

/* Base::~Base() */

Base * Base::~Base(Base *this)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~Derived @ 000111b8 */

/* Derived::~Derived() */

Derived::~Derived(Derived *this)

{
 operator_delete(this,8);
 return this;
}



/* Function: ~MultiDerived @ 000111d0 */

/* MultiDerived::~MultiDerived() */

MultiDerived *MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this,0x10);
 return this;
}



/* Function: ~MultiDerived @ 000111e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived *MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this + -8,0x10);
 return this + -8;
}



/* Function: ~RTTIDerivedB @ 00011204 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB *RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~RTTIDerivedA @ 0001121c */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA *RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this,4);
 return this;
}



/* Function: ~DiamondDerived @ 00011234 */

/* DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this,0x18);
 return this;
}



/* Function: ~DiamondDerived @ 0001124c */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = *(int *)(*(int *)this + -0x10);
 operator_delete(this + iVar1,0x18);
 return this + iVar1;
}



/* Function: ~DiamondDerived @ 00011270 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

DiamondDerived *DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this + -8,0x18);
 return this + -8;
}



/* Function: template_max<int> @ 0001128c */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 if (param_1 < param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00011298 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000112ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0));
 return param_1;
}



/* Function: template_swap<int> @ 000112c8 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 000112dc */

/* Container<int>::Container() */

void Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 000112e8 */

/* Container<int>::push(int) */

void Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00011300 */

/* Container<int>::get(int) const */

int Container<int>::get(Container<int> *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 return *(int *)(this + param_1 * 4);
 }
 return 0;
}



/* Function: getSize @ 00011324 */

/* Container<int>::getSize() const */

undefined4 Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 0001132c */

/* Container<double>::Container() */

void Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00011338 */

/* Container<double>::push(double) */

undefined4 Container<double>::push(double param_1)

{
 int in_r0;
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 undefined4 *puVar2;
 
 iVar1 = *(int *)(in_r0 + 0x50);
 if (iVar1 < 10) {
 puVar2 = (undefined4 *)(in_r0 + iVar1 * 8);
 *(int *)(in_r0 + 0x50) = iVar1 + 1;
 *puVar2 = in_r2;
 puVar2[1] = in_r3;
 }
 return SUB84(param_1,0);
}



/* Function: get @ 00011368 */

/* Container<double>::get(int) const */

undefined8 Container<double>::get(Container<double> *this,int param_1)

{
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 return *(undefined8 *)(this + param_1 * 8);
 }
 return 0;
}



/* Function: getSize @ 00011394 */

/* Container<double>::getSize() const */

undefined4 Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
