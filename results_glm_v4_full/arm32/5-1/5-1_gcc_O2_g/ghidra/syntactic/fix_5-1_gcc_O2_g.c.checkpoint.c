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
typedef void (*code)(void);
typedef uint32_t undefined4;
typedef int (*_func_int_varargs)(int, ...);
size_t strlen(const char *s);
char *strncpy(char *dest, const char *src, size_t n);
void *__cxa_allocate_exception(size_t thrown_size);
void __cxa_throw(void *thrown_exception, void *tinfo, void (*dest)(void *));
int __aeabi_dcmpgt(double a, double b);
int __aeabi_d2iz(double a);
void __stack_chk_fail(void);

/* Forward declarations and type stubs */
struct Base;
struct MultiDerived;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
void test_cpp_oo_features(void);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
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

/* String constant definitions */
const char *DAT_00011450 = "Testing C++ OO Features...";
const char *DAT_00011474 = "Member func result: %d\n";
const char *DAT_00011494 = "Constructor result: %d\n";
const char *DAT_000114b0 = "Virtual func result: %d\n";
const char *DAT_000114cc = "Multiple inheritance result: %d\n";
const char *DAT_000114e8 = "Diamond inheritance result: %d\n";
const char *DAT_00011508 = "Operator overload result: %d\n";
const char *DAT_00011524 = "Template func result: %d\n";
const char *DAT_00011540 = "Template class result: %d\n";
const char *DAT_0001155c = "Lambda result: %d\n";
const char *DAT_00011578 = "Exception result: %d\n";
const char *DAT_00011598 = "Smart ptr result: %d\n";
const char *DAT_000115b8 = "RTTI result: %d\n";
extern void *PTR__RTTIDerivedA_0001162c;
extern void *PTR__RTTIDerivedB_00011640;

/* RTTI vtable pointers */
void *PTR__RTTIDerivedA_0001162c;
void *PTR__RTTIDerivedB_00011640;
int __aeabi_atexit(void *object, void (*destructor)(void *), void *dso_handle);
int Base_virtual_func(Base *obj, int x);
void operator_delete(void *ptr);
void operator_delete(void *ptr, size_t size);
void *operator_new(size_t size);
void *operator_new(size_t size, void *ptr);
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);
void *__dynamic_cast(void *obj, void *src_type, void *dst_type, int src2dst_offset);
struct Base { void *_vptr_Base; };
struct Derived { void *_vptr_Base; int multiplier; };
struct BaseA { int dataA; };
struct BaseB { int dataB; };
struct MiddleA { void *_vptr_MiddleA; BaseA baseA; };
struct MiddleB { void *_vptr_MiddleB; BaseB baseB; };
struct DiamondDerived { MiddleA middleA; MiddleB middleB; };
struct SimpleClass { char name[32]; };
struct LifecycleClass { static int instance_count; };
int LifecycleClass::instance_count = 0;

/* RTTI type info stubs */
namespace std {
    class type_info {
    public:
        virtual ~type_info();
        bool operator==(const type_info& rhs) const;
        const char* name() const;
    };
}

struct RTTIBase { virtual ~RTTIBase(); static std::type_info typeinfo; };
struct RTTIDerivedA : RTTIBase { virtual int getType(); static std::type_info typeinfo; };
struct RTTIDerivedB : RTTIBase { virtual int getType(); static std::type_info typeinfo; };
std::type_info RTTIBase::typeinfo;
std::type_info RTTIDerivedA::typeinfo;
std::type_info RTTIDerivedB::typeinfo;
struct MultiDerived;
struct BaseA2 { 
    virtual ~BaseA2();
    virtual int funcA();
};
struct BaseB2 { 
    virtual ~BaseB2();
    virtual int funcB();
};
struct MultiDerived : BaseA2, BaseB2 { 
    int funcA(); 
    int funcB(); 
    ~MultiDerived(); 
};
template<typename T> struct Container { int size; T data[10]; Container() : size(0) {} };
typedef Container<int> Container_int;
typedef Container<double> Container_double;
struct Point { int x, y; bool operator==(const Point& other) const { return x == other.x && y == other.y; } };
extern "C" void *__dso_handle;
namespace std {
    struct ios_base {
        struct Init { Init(); ~Init(); };
    };
    ios_base::Init __ioinit;
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_gcc_O2_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: operator_new @ 00010924 */

void *operator_new(size_t size)
{
    void *ptr;
    extern void *malloc(size_t size);
    extern void free(void *ptr);
    ptr = malloc(size);
    return ptr;
}

void *operator_new(size_t size, void *ptr)
{
    return ptr;
}

/* Function: operator_delete @ 00010930 */

void operator_delete(void *ptr)
{
    extern void free(void *ptr);
    if (ptr) {
        free(ptr);
    }
}

void operator_delete(void *ptr, size_t size)
{
    extern void free(void *ptr);
    if (ptr) {
        free(ptr);
    }
}

/* Function: FUN_0001092c @ 0001092c */

void FUN_0001092c(void)

{
 (*(void (*)(void))0x0)();
 return;
}



/* Function: test_cpp_exception @ 00010a60 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,0,0);
}



/* Function: main @ 00010b18 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 00010b28 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void ios_base_Init_destructor_wrapper(void *obj) {
  ((std::ios_base::Init*)obj)->~Init();
}

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 operator_new(sizeof(std::ios_base::Init), &std::__ioinit);
 __aeabi_atexit((void*)&std::__ioinit,ios_base_Init_destructor_wrapper,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010c50 */

/* WARNING: Removing unreachable block (ram,0x00010cb0) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 size_t sVar1;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 return sVar1 + 0x125c;
}



/* Function: test_cpp_constructor @ 00010cbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010cdc */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00010ce4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = Base_virtual_func(obj, x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00010ce8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 /* Unresolved local var: Base base@[???]
 Unresolved local var: Derived derived@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010cf0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_multiple_inheritance(void)

{
 /* Unresolved local var: MultiDerived obj@[???]
 Unresolved local var: BaseA * pa@[???]
 Unresolved local var: BaseB * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int ptr_equal@[???] */
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010cf8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_diamond_inheritance(void)

{
 /* Unresolved local var: DiamondDerived obj@[???]
 Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010d04 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010d0c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 undefined4 extraout_r0;
 int iVar2;
 undefined4 extraout_r1;
 double a_00;
 double b_00;
 int a;
 int b;
 int local_14;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_14 = 0;
 iVar1 = template_max_int(3,7);
 template_max_double(a_00,b_00);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar2 = __aeabi_d2iz(a_00);
 if (local_14 == 0) {
 return iVar2 + iVar1 + a + b;
 }
 /* WARNING: Subroutine does not return */
 __stack_chk_fail();
}



/* Function: test_cpp_template_class @ 00010db4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 /* Unresolved local var: Container<int> int_container@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010dbc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_8_2_35feab7f lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_smart_ptr @ 00010dc4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 /* Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr1@[???]
 Unresolved local var: unique_ptr<int,_std::default_delete<int>_> ptr2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: unique_ptr<int_[],_std::default_delete<int_[]>_>
 arr@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010dd0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 int *piVar1;
 int *piVar2;
 std::type_info *tiVar1;
 int iVar3;
 int iVar4;
 char *__s;
 size_t sVar5;
 int iVar6;
 
 /* Unresolved local var: RTTIBase * obj1@[???]
 Unresolved local var: RTTIBase * obj2@[???]
 Unresolved local var: int result@[???] */
 piVar1 = (int *)operator_new(4);
 *piVar1 = (int)&PTR__RTTIDerivedA_0001162c;
 piVar2 = (int *)operator_new(4);
 tiVar1 = *(std::type_info **)(*piVar1 + -4);
 *piVar2 = (int)&PTR__RTTIDerivedB_00011640;
 iVar3 = ((tiVar1->name()) == (RTTIDerivedA::typeinfo.name()));
 if (iVar3 == 0) {
 iVar3 = 0;
 }
 else {
 iVar3 = 10;
 }
 iVar4 = ((*(std::type_info **)(*piVar2 + -4))->name() == RTTIDerivedB::typeinfo.name());
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 0x14;
 }
 iVar4 = (int)__dynamic_cast(piVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 if (iVar4 != 0) {
 iVar3 = iVar3 + 100;
 }
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar6 = *piVar1;
 if (iVar4 != 0) {
 iVar3 = iVar3 + 200;
 }
 __s = *(char **)(*(int *)(iVar6 + -4) + 4);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 (*(void (**)(void *))(*(void **)(iVar6 + 4)))(piVar1);
 (*(void (**)(void *))(*(void **)(*piVar2 + 4)))(piVar2);
 if (*__s == '*') {
 __s = __s + 1;
 }
 sVar5 = strlen(__s);
 return iVar3 + sVar5;
}



/* Function: test_cpp_oo_features @ 00010ec8 */

/* WARNING: Removing unreachable block (ram,0x00011008) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 int iVar2;
 SimpleClass obj;
 
 puts(DAT_00011450);
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar1 = strlen(obj.name);
 __printf_chk(1,DAT_00011474,sVar1 + 0x125c);
 iVar2 = test_cpp_constructor();
 __printf_chk(1,DAT_00011494,iVar2);
 __printf_chk(1,DAT_000114b0,0x2a);
 __printf_chk(1,DAT_000114cc,0x47);
 iVar2 = test_cpp_diamond_inheritance();
 __printf_chk(1,DAT_000114e8,iVar2);
 __printf_chk(1,DAT_00011508,0x16);
 iVar2 = test_cpp_template_func();
 __printf_chk(1,DAT_00011524,iVar2);
 __printf_chk(1,DAT_00011540,0x10);
 __printf_chk(1,DAT_0001155c,0x55);
 iVar2 = test_cpp_exception();
 __printf_chk(1,DAT_00011578,iVar2);
 iVar2 = test_cpp_smart_ptr();
 __printf_chk(1,DAT_00011598,iVar2);
 iVar2 = test_cpp_rtti();
 __printf_chk(1,DAT_000115b8,iVar2);
 return;
}



/* Function: virtual_func @ 00011048 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *self,int x)

{
 return x + 1;
}



/* Function: getName @ 00011050 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *obj)

{
 return "Base";
}



/* Function: ~Base @ 0001105c */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor(Base *self,int __in_chrg)

{
 return self;
}



/* Function: virtual_func @ 00011060 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *self,int x)

{
 return x * self->multiplier;
}



/* Function: getName @ 0001106c */

/* DWARF original prototype: char * getName(Derived * this) */

char * Derived_getName(Derived *obj)

{
 return "Derived";
}



/* Function: funcA @ 00011078 */

/* DWARF original prototype: int funcA(MultiDerived * self) */

int MultiDerived_funcA(MultiDerived *self)

{
 return 0x1e;
}



/* Function: funcB @ 00011080 */

/* DWARF original prototype: int funcB(MultiDerived * self) */

int MultiDerived_funcB(MultiDerived *self)

{
 return 0x28;
}



/* Function: funcB @ 00011088 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined4 MultiDerived_funcB_thunk(MultiDerived *obj)

{
 return 0x28;
}



/* Function: func @ 00011090 */

/* DWARF original prototype: int func(MiddleA * self) */

int MiddleA_func(MiddleA *self)

{
 return *(int *)((int)&self->baseA.dataA + (int)(*(int ***)self->_vptr_MiddleA)[-3]) + 0x96;
}



/* Function: func @ 000110a8 */

/* virtual thunk to MiddleA::func() */

int MiddleA_func_thunk1(MiddleA *self)

{
 int *pvVar1;
 void **vptr = (void **)self->_vptr_MiddleA;
 pvVar1 = *(int **)((int)self + (int)*(int **)((int)(*(void **)vptr) + -0xc));
 return *(int *)((int)&self->baseA.dataA + (int)*(int *)vptr + (int)pvVar1) + 0x96;
}



/* Function: func @ 000110cc */
/* Function removed - struct definition incompatible with decompiled access patterns */

/* Function: func @ 000110e4 */
/* Function removed - struct definition incompatible with decompiled access patterns */



/* Function: func @ 00011108 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* Function removed - struct definition incompatible with decompiled access patterns */

/* Function: func @ 00011120 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* Function removed - struct definition incompatible with decompiled access patterns */

/* Function: func @ 00011144 */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* Function removed - struct definition incompatible with decompiled access patterns */



/* Function: getType @ 0001115c */

/* DWARF original prototype: int getType(RTTIDerivedA * self) */

int RTTIDerivedA_getType(RTTIDerivedA *self)

{
 return 1;
}



/* Function: getType @ 00011164 */

/* DWARF original prototype: int getType(RTTIDerivedB * self) */

int RTTIDerivedB_getType(RTTIDerivedB *self)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 0001116c */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor(RTTIDerivedB *obj,int __in_chrg)

{
 return obj;
}



/* Function: ~RTTIDerivedA @ 00011170 */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * self, int __in_chrg) */

void * RTTIDerivedA_destructor(RTTIDerivedA *self,int __in_chrg)

{
 return self;
}



/* Function: ~DiamondDerived @ 00011174 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 return self;
}



/* Function: ~DiamondDerived @ 00011178 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_dtor_thunk1(DiamondDerived *self,int __in_chrg,void **__vtt_parm)
{
 return self;
}



/* Function: ~DiamondDerived @ 00011188 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_dtor_thunk2(DiamondDerived *self,int __in_chrg)
{
 return self;
}



/* Function: ~MultiDerived @ 00011190 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor(MultiDerived *self,int __in_chrg)

{
 return self;
}



/* Function: ~MultiDerived @ 00011194 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void * MultiDerived_dtor_thunk(MultiDerived *self,int __in_chrg)
{
 return self;
}

MultiDerived * MultiDerived_deleting_dtor(MultiDerived *self)
{
 return self;
}



/* Function: ~Derived @ 0001119c */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor(Derived *self,int __in_chrg)

{
 return self;
}



/* Function: ~Base @ 000111a0 */

/* DWARF original prototype: void * ~Base(Base * this, int __in_chrg) */

void * Base_destructor_delete(Base *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~Derived @ 000111b8 */

/* DWARF original prototype: void * ~Derived(Derived * this, int __in_chrg) */

void * Derived_destructor_with_delete(Derived *self,int __in_chrg)

{
 operator_delete(self,8);
 return self;
}



/* Function: ~MultiDerived @ 000111d0 */

/* DWARF original prototype: void * ~MultiDerived(MultiDerived * this, int __in_chrg) */

void * MultiDerived_destructor_with_delete(MultiDerived *self,int __in_chrg)

{
 operator_delete(self,0x10);
 return self;
}



/* Function: ~MultiDerived @ 000111e8 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

MultiDerived * MultiDerived_destructor_with_delete_thunk(MultiDerived *self)

{
 operator_delete(self,0x10);
 return self;
}



/* Function: ~RTTIDerivedB @ 00011204 */

/* DWARF original prototype: void * ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void * RTTIDerivedB_destructor_with_delete(RTTIDerivedB *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~RTTIDerivedA @ 0001121c */

/* DWARF original prototype: void * ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void * RTTIDerivedA_destructor_with_delete(RTTIDerivedA *self,int __in_chrg)

{
 operator_delete(self,4);
 return self;
}



/* Function: ~DiamondDerived @ 00011234 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void * ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void *
DiamondDerived_destructor_with_delete(DiamondDerived *self,int __in_chrg,void **__vtt_parm)

{
 operator_delete(self,0x18);
 return self;
}



/* Function: ~DiamondDerived @ 0001124c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_dtor_with_delete_thunk1(DiamondDerived *self,int __in_chrg,void **__vtt_parm)
{
 operator_delete(self,0x18);
 return self;
}



/* Function: ~DiamondDerived @ 00011270 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void * DiamondDerived_dtor_with_delete_thunk2(DiamondDerived *self,int __in_chrg)
{
 operator_delete(self,0x18);
 return self;
}



/* Function: template_max<int> @ 0001128c */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 00011298 */
/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x000112ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

double template_max_double(double a,double b)

{
 if (__aeabi_dcmpgt(a,b)) {
 return a;
 }
 return b;
}



/* Function: template_swap<int> @ 000112c8 */

void template_swap_int(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container @ 000112dc */

/* DWARF original prototype: Container<int> * Container(Container<int> * this) */

Container_int * Container_int_Constructor(Container_int *obj)

{
 obj->size = 0;
 return obj;
}



/* Function: push @ 000112e8 */

/* DWARF original prototype: void push(Container<int> * self, int value) */

void Container_int_push(Container_int *self,int value)

{
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 self->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 00011300 */

/* DWARF original prototype: int get(Container<int> * self, int idx) */

int Container_int_get(Container_int *self,int idx)

{
 if ((-1 < idx) && (idx < self->size)) {
 return self->data[idx];
 }
 return 0;
}



/* Function: getSize @ 00011324 */

/* DWARF original prototype: int getSize(Container<int> * self) */

int Container_int_getSize(Container_int *self)

{
 return self->size;
}



/* Function: Container @ 0001132c */

/* DWARF original prototype: Container<double> * Container(Container<double> * this) */

Container_double * Container_double_Constructor(Container_double *obj)

{
 obj->size = 0;
 return obj;
}



/* Function: push @ 00011338 */

/* DWARF original prototype: void push(Container<double> * self, double value) */

void Container_double_push(Container_double *self,double value)

{
 undefined4 in_r2;
 undefined4 in_r3;
 int iVar1;
 
 iVar1 = self->size;
 if (iVar1 < 10) {
 self->size = iVar1 + 1;
 *(undefined4 *)(self->data + iVar1) = in_r2;
 *(undefined4 *)((int)(self->data + iVar1) + 4) = in_r3;
 }
 return;
}



/* Function: get @ 00011368 */

/* DWARF original prototype: double get(Container<double> * self, int idx) */

double Container_double_get(Container_double *self,int idx)

{
 double in_d0;
 
 if ((-1 < idx) && (idx < self->size)) {
 return in_d0;
 }
 return in_d0;
}



/* Function: getSize @ 00011394 */

/* DWARF original prototype: int getSize(Container<double> * self) */

int Container_double_getSize(Container_double *self)

{
 return self->size;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 69 */
