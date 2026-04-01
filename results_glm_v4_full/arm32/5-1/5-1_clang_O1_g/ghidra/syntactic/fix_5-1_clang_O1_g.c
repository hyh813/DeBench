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
typedef unsigned char _Bool;
typedef unsigned int uint;

/* Standard library declarations */
extern size_t strlen(const char *s);
extern int puts(const char *s);
extern int printf(const char *format, ...);
extern int strcmp(const char *s1, const char *s2);
extern void *__cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
extern void *__cxa_allocate_exception(size_t thrown_size);
extern void __cxa_throw(void *thrown_exception, void *tinfo, void *dest);

/* Operator declarations */
extern void *operator_new(size_t size);
extern void operator_delete(void *ptr);
extern void *operator_new__(size_t size);
extern void operator_delete__(void *ptr);

/* ARM EABI floating-point comparison */
extern int __aeabi_dcmpgt(double a, double b);

/* RTTI and dynamic cast */
extern const void *__dynamic_cast(const void *sub, const void *src, const void *dst, int offset);

/* Ghidra decompiler type definitions */
typedef uint32_t undefined4;
typedef uint16_t undefined2;
typedef uint8_t undefined1;
typedef void undefined;
typedef int (*_func_int)();
typedef int (*_func_int_int)(void *, int);
typedef void (*code)();
typedef void (*_vfunc_ptr)();

/* Vtable pointer declarations */
extern _vfunc_ptr *PTR_virtual_func_00022cf0;
extern _vfunc_ptr *PTR_virtual_func_00022d10;
extern _vfunc_ptr *PTR_funcA_00022d34;
extern _vfunc_ptr *PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
extern _vfunc_ptr *PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4;
extern _vfunc_ptr *PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
extern _vfunc_ptr *PTR_func_00022dbc;
extern _vfunc_ptr *PTR__RTTIBase_00022ed8;
extern _vfunc_ptr *PTR__RTTIBase_00022eec;

/* Forward declarations for functions used before definition */
int _ZTv0_n12_N14DiamondDerived4funcEv(void *_this);
int _ZTv0_n12_N7MiddleA4funcEv(void *_this);
int _ZTv0_n12_N7MiddleB4funcEv(void *_this);
int _ZThn8_N12MultiDerived5funcBEv(void *param_1, int unused);

/* Forward declarations for C++ types */
namespace std {
    class type_info;
    class ios_base {
    public:
        class Init {
        public:
            Init();
            ~Init();
        };
    };
    extern ios_base::Init __ioinit;
}

extern void *__dso_handle;

/* Data string constants */
extern const char *DAT_00011c71;
extern const char *DAT_00011b0d;
extern const char *DAT_00011b2b;
extern const char *DAT_00011b47;
extern const char *DAT_00011b63;
extern const char *DAT_00011b7f;
extern const char *DAT_00011b9c;
extern const char *DAT_00011bb8;
extern const char *DAT_00011bd4;
extern const char *DAT_00011bf0;
extern const char *DAT_00011c0c;
extern const char *DAT_00011c29;
extern const char *DAT_00011c46;

/* C++ class definitions */
struct Base {
    _vfunc_ptr *_vptr_Base;
};

struct Derived {
    _vfunc_ptr *_vptr_Base;
    int multiplier;
};

struct BaseA {
    _vfunc_ptr *_vptr_BaseA;
    int dataA;
    int funcA();
};

struct BaseB {
    _vfunc_ptr *_vptr_BaseB;
    int dataB;
    int funcB();
};

struct MultiDerived {
    BaseA super_BaseA;
    BaseB super_BaseB;
};

struct MiddleA {
    _vfunc_ptr *_vptr_MiddleA;
    int dataA;
    int func();
};

struct MiddleB {
    _vfunc_ptr *_vptr_MiddleB;
    int dataB;
    int func();
};

struct DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
};

struct VirtualBase {
    _vfunc_ptr *_vptr;
};

struct LifecycleClass {
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

struct RTTIBase {
    _vfunc_ptr *_vptr;
    static const std::type_info typeinfo;
    virtual ~RTTIBase();
};

struct RTTIDerivedA : RTTIBase {
    virtual int getType();
};

struct RTTIDerivedB : RTTIBase {
    virtual int getType();
};

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O1_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010cb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

/* Static wrapper for destructor */
static void ios_init_destructor_wrapper(void *arg) {
 ((std::ios_base::Init*)arg)->~Init();
}

void _GLOBAL__sub_I_5_1_cpp(void)

{
 std::ios_base::Init local_init;
 __cxa_atexit(ios_init_destructor_wrapper,&local_init,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010e60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 undefined4 local_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined4 local_1c;
 undefined4 uStack_18;
 undefined4 uStack_14;
 undefined4 uStack_10;
 undefined2 local_c;
 undefined1 local_a;
 undefined1 local_9;
 
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
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



/* Function: test_cpp_constructor @ 00010ed0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 void *pvVar1;
 int iVar2;
 int iVar3;
 
 /* Unresolved local var: int result@[???] */
 /* Unresolved local var: LifecycleClass obj@[???] */
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 iVar3 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
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



/* Function: call_virtual_func @ 00010f48 */

int call_virtual_func(Base *obj,int x)

{
 
 return 0;
}



/* Function: test_cpp_virtual_func @ 00010f64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 _vfunc_ptr **local_14;
 undefined4 local_10;
 Base local_c;
 
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_c._vptr_Base = (_vfunc_ptr *)(void *)&PTR_virtual_func_00022cf0;
 local_10 = 3;
 local_14 = (_vfunc_ptr **)(void *)&PTR_virtual_func_00022d10;
 iVar1 = (*(int (*)(void *, int))(local_c._vptr_Base))(&local_c,5);
 iVar2 = (*(int (*)(void *, int))(*local_14))(&local_c,5);
 return iVar1 + iVar2 + 0x15;
}



/* Function: test_cpp_multiple_inheritance @ 00010fdc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived local_20;
 
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: BaseB * pb@[???] */
 local_20.super_BaseB.dataB = 200;
 local_20.super_BaseA.dataA = 100;
 local_20.super_BaseA._vptr_BaseA = (_vfunc_ptr *)(void *)&PTR_funcA_00022d34;
 local_20.super_BaseB._vptr_BaseB = (_vfunc_ptr *)(void *)&PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
 iVar1 = (int)((BaseA *)&local_20.super_BaseA)->funcA();
 iVar2 = (int)((BaseB *)&local_20.super_BaseB)->funcB();
 return iVar1 + iVar2 + 1;
}



/* Function: test_cpp_diamond_inheritance @ 0001104c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 int extraout_r0;
 int iVar1;
 _vfunc_ptr **local_18;
 undefined4 local_14;
 
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: VirtualBase * pb@[???] */
 local_14 = 0x32;
 local_18 = (_vfunc_ptr **)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
 local_14 = 100;
 iVar1 = (*(int (*)(void *, int))*local_18)(&local_14, 0);
 return iVar1;
}



/* Function: test_cpp_operator_overload @ 000110d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 000110d8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???]
 Unresolved local var: int a@[???]
 Unresolved local var: int b@[???] */
 return 0x27;
}



/* Function: test_cpp_template_class @ 000110e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: double r3@[???]
 Unresolved local var: Container<double> double_container@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 000110e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_class_8_2_336b0e7f lambda1@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_class_1_0_00000001 lambda2@[???] */
 return 0x55;
}



/* Function: test_cpp_exception @ 000110f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???]
 Unresolved local var: int e@[???]
 Unresolved local var: BaseException * e@[???]
 Unresolved local var: DerivedException * e@[???] */
 /* Unresolved local var: int e@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 000111c0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int[],_std::default_delete<int[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: unique_ptr<int,_(lambda_at_src/5-1.cpp:445:20)>
 ptr3@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: deleter_type deleter@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 000111cc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

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
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)operator_new(8);
 *(int *)piVar1 = (int)(uintptr_t)&PTR__RTTIBase_00022ed8;
 piVar2 = (int *)operator_new(8);
 *(int *)piVar2 = (int)(uintptr_t)&PTR__RTTIBase_00022eec;
 __s1 = *(char **)((*(int *)(*piVar1 - 4)) + 4);
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
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 iVar3 = (int)__dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 iVar5 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 pcVar4 = __s1 + 1;
 if (*__s1 != '*') {
 pcVar4 = __s1;
 }
 sVar6 = strlen(pcVar4);
 (*(void (**)(void *))(*piVar1 + 4))(piVar1);
 (*(void (**)(void *))(*piVar2 + 4))(piVar2);
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



/* Function: test_cpp_oo_features @ 0001136c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 undefined **ppuVar1;
 size_t sVar2;
 void *pvVar3;
 int extraout_r0;
 int extraout_r0_00;
 int iVar4;
 int iVar5;
 _vfunc_ptr **local_40;
 _vfunc_ptr **local_3c [4];
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined2 local_20;
 undefined1 local_1e;
 undefined1 local_1d;
 Base local_1c;
 
 puts(DAT_00011c71);
 /* Unresolved local var: SimpleClass obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r2@[???] */
 local_3c[1] = (_vfunc_ptr **)0x0;
 local_3c[2] = (_vfunc_ptr **)0x0;
 local_3c[3] = (_vfunc_ptr **)0x0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 local_20 = 0;
 local_1e = 0;
 iVar5 = 0;
 local_1d = 0;
 local_40 = (_vfunc_ptr **)0xa;
 sVar2 = strlen((char *)local_3c);
 printf(DAT_00011b0d,sVar2 + 0x125c);
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 pvVar3 = operator_new__(0x14);
 iVar4 = 0;
 do {
 /* Unresolved local var: size_t i@[???] */
 *(int *)((int)pvVar3 + iVar4 * -4) = iVar5;
 iVar5 = iVar5 + 10;
 iVar4 = iVar4 + -1;
 } while (iVar4 != -5);
 iVar4 = LifecycleClass::instance_count + 1;
 iVar5 = *(int *)((int)pvVar3 + 8);
 LifecycleClass::instance_count = iVar4;
 operator_delete__(pvVar3);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(DAT_00011b2b,LifecycleClass::instance_count * 1000 + iVar5 + iVar4);
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 local_1c._vptr_Base = (_vfunc_ptr **)&PTR_virtual_func_00022cf0;
 local_3c[0] = (_vfunc_ptr **)0x3;
 local_40 = (_vfunc_ptr **)(void *)&PTR_virtual_func_00022d10;
 iVar4 = (*(int (*)(void *, int))local_1c._vptr_Base)(&local_1c,5);
 iVar5 = (*(int (*)(void *, int))*local_40)(&local_1c,5);
 printf("%d", iVar4 + iVar5 + 0x15);
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: int ptr_equal@[???]
 Unresolved local var: int r2@[???] */
 local_3c[1] = (_vfunc_ptr **)(void *)&PTR__ZThn8_N12MultiDerived5funcBEv_00022d4c;
 local_3c[2] = (_vfunc_ptr **)0xc8;
 local_3c[0] = (_vfunc_ptr **)0x64;
 local_40 = (_vfunc_ptr **)(void *)&PTR_funcA_00022d34;
 printf("%d", 0x1f);
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 local_3c[3] = (_vfunc_ptr **)(void *)&PTR__ZTv0_n12_N14DiamondDerived4funcEv_00022df0;
 local_2c = 0x32;
 local_40 = (_vfunc_ptr **)PTR_func_00022dbc;
 local_3c[1] = (_vfunc_ptr **)(void *)&PTR__ZThn8_N14DiamondDerived4funcEv_00022dd4;
 ppuVar1 = local_3c[3];
 *(undefined4 *)((int)local_3c + (int)local_40[-3]) = 100;
 iVar4 = (*(int (*)(void *, int))*ppuVar1)(local_3c, 0);
 printf(DAT_00011b7f,iVar4);
 printf("%d", 0x16);
 printf("%d", 0x27);
 printf("%d", 0x10);
 printf("%d", 0x55);
 iVar4 = 0;
 printf(DAT_00011c0c,iVar4);
 printf("%d", 0x2bf);
 iVar4 = test_cpp_rtti();
 printf("%d", iVar4);
 return;
}



/* Function: main @ 00011648 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: virtual_func @ 0001165c */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int __thiscall Base::virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: virtual_func @ 00011664 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int __thiscall Derived::virtual_func(Derived *this,int x)

{
 return this->multiplier * x;
}



/* Function: ~Base @ 00011670 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: ~MultiDerived @ 00011674 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00011678 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 return;
}



/* Function: template_max<int> @ 0001167c */

template<typename T>
int template_max(int a,int b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011688 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x0001169c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max(double a,double b)

{
 if (__aeabi_dcmpgt(a,b) <= 0) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 000116bc */

template<typename T>
void template_swap(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 000116d0 */

/* DWARF original prototype: void Container(Container<int> * this) */

void __thiscall Container<int>::Container()

{
 this->size = 0;
 return;
}



/* Function: push @ 000116dc */

/* DWARF original prototype: void push(Container<int> * this, int value) */

void __thiscall Container<int>::push(Container<int> *this,int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 000116f4 */

/* DWARF original prototype: int get(Container<int> * this, int idx) */

int __thiscall Container<int>::get(Container<int> *this,int idx)

{
 int iVar1;
 
 iVar1 = 0;
 if (idx < 0) {
 return 0;
 }
 if (idx < this->size) {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: getSize @ 00011714 */

/* DWARF original prototype: int getSize(Container<int> * this) */

int __thiscall Container<int>::getSize(Container<int> *this)

{
 return this->size;
}



/* Function: Container @ 0001171c */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container()

{
 this->size = 0;
 return;
}



/* Function: push @ 00011728 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = this->size;
 if (9 < iVar1) {
 return;
 }
 *(undefined4 *)(this->data + iVar1) = in_r2;
 *(undefined4 *)((int)(this->data + iVar1) + 4) = in_r3;
 this->size = iVar1 + 1;
 return;
}



/* Function: get @ 0001174c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double in_d0;
 
 if (-1 < idx) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011778 */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: getName @ 00011780 */

/* DWARF original prototype: char * getName(Base * this) */

char * __thiscall Base::getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 00011790 */

/* DWARF original prototype: void ~Base(Base * this) */

void __thiscall Base::~Base(Base *this)

{
 operator_delete(this);
 return;
}



/* Function: getName @ 000117a0 */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: ~Derived @ 000117b0 */

/* DWARF original prototype: void ~Derived(Derived * this) */

void __thiscall Derived::~Derived(Derived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcA @ 000117c0 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 000117c8 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 000117d8 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: _ZThn8_N12MultiDerived5funcBEv @ 000117e0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZThn8_N12MultiDerived5funcBEv(void *param_1, int unused)

{
  (void)unused;
  return BaseB::funcB((BaseB *)((int)param_1 + -8));
}



/* Function: _ZThn8_N12MultiDerivedD1Ev @ 000117e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N12MultiDerivedD0Ev @ 000117ec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N12MultiDerivedD0Ev(void)

{
 int in_r0;
 
 operator_delete((void *)(in_r0 + -8));
 return;
}



/* Function: funcA @ 00011800 */

/* DWARF original prototype: int funcA(BaseA * this) */

int __thiscall BaseA::funcA(BaseA *this)

{
 return 10;
}



/* Function: ~BaseA @ 00011808 */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA()

{
 return;
}



/* Function: ~BaseA @ 0001180c */

/* DWARF original prototype: void ~BaseA(BaseA * this) */

void __thiscall BaseA::~BaseA()

{
 operator_delete(this);
 return;
}



/* Function: funcB @ 0001181c */

/* DWARF original prototype: int funcB(BaseB * this) */

int __thiscall BaseB::funcB(BaseB *this)

{
 return 0x14;
}



/* Function: ~BaseB @ 00011824 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB()

{
 return;
}



/* Function: ~BaseB @ 00011828 */

/* DWARF original prototype: void ~BaseB(BaseB * this) */

void __thiscall BaseB::~BaseB()

{
 operator_delete(this);
 return;
}



/* Function: func @ 00011838 */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((int)&this->dataA + (int)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: ~MiddleA @ 00011850 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return;
}



/* Function: ~MiddleA @ 00011854 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA()

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 00011864 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n12_N7MiddleA4funcEv(void *_this)
{
    return MiddleA::func((MiddleA *)_this);
}



/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 00011884 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD1Ev(void *_this)

{
 MiddleA::~MiddleA((MiddleA *)_this);
}



/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 00011888 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleAD0Ev(void *_this)

{
 int *in_r0;
 
 in_r0 = (int *)_this;
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 000118a4 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((int)&this->dataB + (int)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: ~MiddleB @ 000118bc */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return;
}



/* Function: ~MiddleB @ 000118c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB()

{
 operator_delete(this);
 return;
}



/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 000118d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n12_N7MiddleB4funcEv(void *_this)
{
    return MiddleB::func((MiddleB *)_this);
}



/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 000118f0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD1Ev(void *_this)

{
 MiddleB::~MiddleB((MiddleB *)_this);
}



/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 000118f4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N7MiddleBD0Ev(void *_this)

{
 int *in_r0;
 
 in_r0 = (int *)_this;
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 00011910 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this, int x) */

int __thiscall DiamondDerived::func(DiamondDerived *this, int x)

{
 return *(int *)((int)&(this->super_MiddleA).dataA + (int)(this->super_MiddleA)._vptr_MiddleA[-3])
 + 0xfa;
}



/* Function: ~DiamondDerived @ 00011928 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 operator_delete(this);
 return;
}



/* Function: _ZThn8_N14DiamondDerived4funcEv @ 00011938 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerived4funcEv(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 00011950 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD1Ev(void)

{
 return;
}



/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 00011954 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZThn8_N14DiamondDerivedD0Ev(void)

{
 int in_r0;
 
 operator_delete((void *)(in_r0 + -8));
 return;
}



/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 00011968 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _ZTv0_n12_N14DiamondDerived4funcEv(void *_this, int x)

{
 return DiamondDerived::func((DiamondDerived *)_this, x);
}



/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 00011988 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD1Ev(void *_this)

{
 DiamondDerived::~DiamondDerived((DiamondDerived *)_this);
}



/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0001198c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _ZTv0_n16_N14DiamondDerivedD0Ev(void *_this)

{
 int *in_r0;
 
 operator_delete((void *)((int)in_r0 + *(int *)(*in_r0 + -0x10)));
 return;
}



/* Function: func @ 000119a8 */

/* DWARF original prototype: int func(VirtualBase * this) */

int VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 000119b0 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 000119b4 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 operator_delete(this);
 return;
}



/* Function: ~RTTIDerivedA @ 000119c4 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 operator_delete(this);
}



/* Function: getType @ 000119d4 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: ~RTTIBase @ 000119dc */

/* DWARF original prototype: void ~RTTIBase(RTTIBase * this) */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
}



/* Function: ~RTTIDerivedB @ 000119e0 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 operator_delete(this);
}



/* Function: getType @ 000119f0 */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 83 */
