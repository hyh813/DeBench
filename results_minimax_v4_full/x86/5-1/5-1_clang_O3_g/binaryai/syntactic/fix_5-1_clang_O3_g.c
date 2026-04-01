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

// C++ type info structures
struct type_info {
    const char *typename;
};

// Data constants (string literals referenced in code)
char DAT_00012081[] = "strlen result: %u\n";
char DAT_0001209f[] = "LifecycleClass::instance_count * 1000 + 21 = %d\n";
char DAT_000120bb[] = "test_cpp_virtual_func returned: %u\n";
char DAT_000120d7[] = "test_cpp_multiple_inheritance returned: %u\n";
char DAT_000120f3[] = "test_cpp_diamond_inheritance returned: %u\n";
char DAT_00012110[] = "test_cpp_operator_overload returned: %u\n";
char DAT_0001212c[] = "test_cpp_template_func returned: %u\n";
char DAT_00012148[] = "test_cpp_template_class returned: %u\n";
char DAT_00012164[] = "test_cpp_lambda returned: %u\n";
char DAT_00012180[] = "test_cpp_exception returned: %u\n";
char DAT_0001219d[] = "test_cpp_smart_ptr returned: %u\n";
char DAT_000121ba[] = "test_cpp_rtti returned: %d\n";
char DAT_000121d8[] = "Testing C++ OOP Features:\n";

// RTTI pointers (pointing to RTTI typeinfo)
type_info *PTR__RTTIBase_00013ecc = &RTTIDerivedA_typeinfo;
type_info *PTR__RTTIBase_00013ee0 = &RTTIDerivedB_typeinfo;

// Forward declarations for classes
class Base {
public:
    virtual void virtual_func(int) {}
};
class LifecycleClass {
public:
    static int instance_count;
};

// Define the static member
int LifecycleClass::instance_count = 0;

// RTTI classes with vtable pointers for dynamic_cast
class RTTIBase {
public:
    virtual ~RTTIBase() {}
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA() {}
    virtual unsigned int getType() { return 1; }
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB() {}
    virtual unsigned int getType() { return 2; }
};

// Container template class definitions
class Container_int_ {
public:
    virtual ~Container_int_() {}
    unsigned int size;
    int data[10];
};

class Container_double_ {
public:
    virtual ~Container_double_() {}
    unsigned int size;
    double data[10];
};

// Type info structures - forward declarations
extern type_info RTTIBase_typeinfo;
extern type_info RTTIDerivedA_typeinfo;
extern type_info RTTIDerivedB_typeinfo;
extern type_info int_typeinfo;

// RTTI typeinfo definitions
type_info RTTIBase_typeinfo = {.typename="RTTIBase"};
type_info RTTIDerivedA_typeinfo = {.typename="RTTIDerivedA"};
type_info RTTIDerivedB_typeinfo = {.typename="RTTIDerivedB"};
type_info int_typeinfo = {.typename="int"};

// Stack variable for __libc_start_main
unsigned int stack0x00000004 = 0;

// Decompiled by BinaryAI
// SHA256: 4fa90e217568c14d3445ee8828d57438d32bf6069cfe552e3f2c8d7ec3de581f

// Function: _init @ 0x11000
// External runtime functions
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern int __do_global_ctors_aux(void);

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

// Function: <EXTERNAL>::operator new @ 0x11040
extern void *operator_new(unsigned int size);

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
extern void __cxa_begin_catch(void);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
extern void *__cxa_allocate_exception(unsigned int);

// Function: <EXTERNAL>::strlen @ 0x11070
extern size_t strlen(char *__s);

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
// This is a placeholder - the real __cxa_atexit is declared below
void __cxa_atexit_placeholder(void)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
extern int __libc_start_main(int (*main)(void), void *arg, void *init, void *fini, void *rtld_fini, void *stack_end);

// Function: <EXTERNAL>::operator.delete @ 0x110a0
extern void operator_delete(void *param_1);

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
// Fixed: return type should be intptr_t for pointer arithmetic
extern intptr_t __dynamic_cast(const void *, const void *, const void *, int);

// Function: <EXTERNAL>::printf @ 0x110c0
extern int printf(char *__format,...);

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
extern void __cxa_rethrow(void);

// Function: <EXTERNAL>::puts @ 0x110e0
extern int puts(char *__s);

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x110f0
extern void std__ios_base__Init__Init(void);

// Function: <EXTERNAL>::std::__ioinit @ 0x110f8
extern int std__ioinit;

// Function: <EXTERNAL>::__cxa_atexit @ 0x11140
extern int __cxa_atexit(void *, void *, void *);

// Function: <EXTERNAL>::__dso_handle @ 0x11148
extern void *__dso_handle;

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
extern void __cxa_end_catch(void);

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
extern void __cxa_throw(void *exception, void *typeinfo, void *dest);

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
extern void _Unwind_Resume(void);

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
 // std::ios_base::Init::Init((Init *)&std::__ioinit);
 // __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle,uVar1,extraout_var);
 return;
}

// Function: _start @ 0x11180
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1,auStack_4);
 // Never returns
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
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int local_24;
 unsigned int local_20;
 unsigned int local_1c;
 unsigned int local_18;
 unsigned int local_14;
 unsigned int uStack_10;
 unsigned int uStack_c;
 uStack_10 = 0;
 local_14 = 0;
 local_18 = 0;
 local_1c = 0;
 local_20 = 0;
 local_24 = 0;
 local_28 = 0x74736554;
 uStack_c = 0;
 sVar1 = strlen((char *)&local_28);
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
 // Call virtual function through vtable
 typedef void (*VirtualFn)(Base*, int);
 VirtualFn fn = *(VirtualFn*)*(void**)param_1;
 fn(param_1, param_2);
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
 __cxa_throw(puVar1,&int_typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x11530
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11540
int test_cpp_rtti(void)
{
 RTTIBase *pA;
 RTTIBase *pB;
 intptr_t iVar3;
 intptr_t iVar4;
 int iVar5;
 pA = (RTTIBase *)operator_new(sizeof(RTTIDerivedA));
 new (pA) RTTIDerivedA();
 pB = (RTTIBase *)operator_new(sizeof(RTTIDerivedB));
 new (pB) RTTIDerivedB();
 iVar3 = __dynamic_cast(pA,(const type_info*)&RTTIBase_typeinfo,(const type_info*)&RTTIDerivedA_typeinfo,-1);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 iVar4 = __dynamic_cast(pB,(const type_info*)&RTTIBase_typeinfo,(const type_info*)&RTTIDerivedB_typeinfo,-1);
 iVar3 = iVar5 + 200;
 if (iVar4 == 0) {
 iVar3 = iVar5;
 }
 pA->~RTTIBase();
 operator_delete(pA);
 pB->~RTTIBase();
 operator_delete(pB);
 return (int)iVar3 + 0xe;
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
 unsigned int local_30;
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
 local_30 = 0x74736554;
 uStack_14 = 0;
 sVar1 = strlen((char *)&local_30);
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
 iVar5 = __dynamic_cast(puVar3,&RTTIBase_typeinfo,&RTTIDerivedA_typeinfo,0);
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 iVar6 = __dynamic_cast(piVar4,&RTTIBase_typeinfo,&RTTIDerivedB_typeinfo,0);
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

// Function: template_max<int> @ 0x11830
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
Container_int_::Container_int_(Container_int_ *this)
{
 this->size = 0;
}

// Function: Container<int>::push @ 0x11890
void Container_int_push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x118b0
unsigned int Container_int_get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 uVar1 = (unsigned int)this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x118d0
unsigned int Container_int_getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Container @ 0x118e0
Container_double_::Container_double_(Container_double_ *this)
{
 this->size = 0;
}

// Function: Container<double>::push @ 0x118f0
void Container_double_push(Container_double_ *this, double param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<double>::get @ 0x11910
double Container_double_get(Container_double_ *this, int param_1)
{
 double dVar1;
 dVar1 = 0.0;
 if ((-1 < param_1) && (this->size != (unsigned int)param_1 && param_1 <= this->size)) {
 dVar1 = this->data[param_1];
 }
 return dVar1;
}

// Function: Container<double>::getSize @ 0x11930
unsigned int Container_double_getSize(Container_double_ *this)
{
 return this->size;
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

