/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_gcc_Os_g
 * Processor: pc
 */

#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

/* __readgsdword declaration for stack canary */
static inline unsigned int __readgsdword(unsigned int offset) {
  unsigned int ret;
  __asm__ __volatile__("movl %%gs:%1,%0" : "=r"(ret) : "m"(*(unsigned int *)(offset)));
  return ret;
}

/* Helper macros for decompilation */
#define LODWORD(l) (*(unsigned int *)&(l))
#define HIDWORD(l) (*(((unsigned int *)&(l)) + 1))

/* Typeinfo placeholder declarations */
namespace std {
  class type_info {
  public:
    virtual ~type_info();
    const char* name() const;
  };
}
using std::type_info;

namespace {
  struct type_info_int : public std::type_info {
    type_info_int() : std::type_info() { /* minimal init */ }
  } typeinfo_for_int;
  
  struct type_info_RTTIBase : public std::type_info {
    type_info_RTTIBase() : std::type_info() { /* minimal init */ }
  } typeinfo_for_RTTIBase;
  
  struct type_info_RTTIDerivedA : public std::type_info {
    type_info_RTTIDerivedA() : std::type_info() { /* minimal init */ }
  } typeinfo_for_RTTIDerivedA;
  
  struct type_info_RTTIDerivedB : public std::type_info {
    type_info_RTTIDerivedB() : std::type_info() { /* minimal init */ }
  } typeinfo_for_RTTIDerivedB;
}

/* Vtable symbol declarations */
int (**off_5C58)(...);
int (**off_5C70)(...);
int (**off_5C94)(...);
int (**off_5CB0)(...);
int (**off_5CD0)(...);
int (**off_5CEC)(...);
int (**off_5D64)(...);
int (**off_5D6C)(...);
int (**off_5D88)(...);
int (**off_5DA0)(...);
int (**off_5DBC)(...);
int (**off_5DD0)(...);
int (**off_5DE4)(...);

/* String literal symbol declarations */
static const char asc_301A[] = "Testing C++ Object-Oriented Features";
static const char unk_303E[] = "test_cpp_member_func: %d\n";
static const char unk_305C[] = "test_cpp_constructor: %d\n";
static const char unk_3078[] = "test_cpp_virtual_func: %lld\n";
static const char unk_3094[] = "test_cpp_multiple_inheritance: %d\n";
static const char unk_30B0[] = "test_cpp_diamond_inheritance: %d\n";
static const char unk_30CD[] = "test_cpp_operator_overload: %d\n";
static const char unk_30E9[] = "test_cpp_template_func: %d\n";
static const char unk_3105[] = "test_cpp_template_class: %d\n";
static const char unk_3121[] = "test_cpp_lambda: %d\n";

/* External symbol declarations for std::ios_base and runtime symbols */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init();
      ~Init();
    };
  };
  ios_base::Init __ioinit;
  
  /* Define ios_base::Init constructor and destructor */
  ios_base::Init::Init() {
    /* Initialize I/O streams */
  }
  
  ios_base::Init::~Init() {
    /* Clean up I/O streams */
  }
}
extern void *_dso_handle;
void (*_gmon_start__)(void) = 0;

/* Definition of _dso_handle - provided by dynamic linker in normal builds */
void *_dso_handle = &_dso_handle;

/* Stub implementations for C++ runtime functions */

/* __cxa_atexit - registers exit handlers */
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle) {
  /* Stub - does nothing for standalone compilation */
  (void)func;
  (void)arg;
  (void)dso_handle;
}

/* __cxa_allocate_exception - allocates exception object */
void *__cxa_allocate_exception(unsigned int size) {
  return operator new(size);
}

/* __cxa_throw - throws an exception */
void __cxa_throw(void *exception, std::type_info *type, void (*dest)(void *)) {
  /* Stub - in a real implementation this would unwind the stack */
  (void)type;
  (void)dest;
  operator delete(exception);
}

/* Additional CRT function declarations */
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);
extern void *__cxa_allocate_exception(unsigned int size);
extern void __cxa_throw(void *exception, std::type_info *type, void (*dest)(void *));
extern void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);

/* Forward declarations */
struct Base;
struct Derived;
struct VirtualBase;
struct MiddleA;
struct MiddleB;
struct DiamondDerived;
struct RTTIBase;
struct MultiDerived;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Container_int;
struct std_unique_ptr_int;
struct std_unique_ptr_int_array;

/* Forward function declarations */
void test_cpp_oo_features(void);
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this);
void DiamondDerived_destructor(DiamondDerived *_this, int __in_chrg, const void **__vtt_parm);

/* Forward template function declarations */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Forward container function declarations */
void Container_int_push(Container_int *_this, int value);

/* Forward smart pointer destructor declarations */
void std_unique_ptr_int_destructor(std_unique_ptr_int *_this);
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *_this);

/* C++ RTTI dynamic_cast declaration */
extern void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type,
                            const struct __class_type_info *dst_type, ptrdiff_t src2dst_offset);

/* Stub implementation for __dynamic_cast - performs RTTI-based dynamic cast */
void *__dynamic_cast(void *src_ptr, const struct __class_type_info *src_type,
                            const struct __class_type_info *dst_type, ptrdiff_t src2dst_offset) {
  /* Stub - in a real implementation this would traverse the inheritance hierarchy */
  /* For standalone compilation, return src_ptr to allow the code to proceed */
  (void)src_type;
  (void)dst_type;
  (void)src2dst_offset;
  return src_ptr;
}

/* Class type info structure for RTTI */
namespace std {
  struct __class_type_info;
}

/* Forward declare SimpleClass and LifecycleClass structures */
struct SimpleClass {
  char name[32];
};

struct LifecycleClass {
  static int instance_count;
};

/* Define static member for LifecycleClass */
int LifecycleClass::instance_count = 0;

/* Forward declare smart pointer structures */
struct std_unique_ptr_int {
  struct {
    struct {
      union {
        struct {
          char gap0[4];
        };
        void *_M_head_impl;
      };
    } _M_t;
  } _M_t;
};

struct std_unique_ptr_int_array {
  struct {
    struct {
      union {
        struct {
          char gap0[4];
        };
        void *_M_head_impl;
      };
    } _M_t;
  } _M_t;
};

/* Structure definitions needed for DiamondDerived */
struct VirtualBase {
  int (**_vptr_VirtualBase)(...);
};

struct MiddleA {
  int (**_vptr_MiddleA)(...);
  VirtualBase dataA;
};

struct MiddleB {
  int (**_vptr_MiddleB)(...);
  VirtualBase dataB;
};

struct DiamondDerived {
  MiddleA middleA;
  MiddleB middleB;
};

struct Base {
  int (**_vptr_Base)(...);
};

struct Derived {
  int (**_vptr_Base)(...);
  int multiplier;
};

struct RTTIBase {
  int (**_vptr_RTTIBase)(...);
};

struct MultiDerived {
  int (**_vptr_Base)(...);
  int (**_vptr_MultiDerived)(...);
};

struct RTTIDerivedA {
  int (**_vptr_RTTIBase)(...);
};

struct RTTIDerivedB {
  int (**_vptr_RTTIBase)(...);
};

/* Container_int structure */
struct Container_int {
  int data[10];
  int size;
};

/* Container_double structure */
struct Container_double {
  double data[10];
  int size;
};




/* Function: _Z18test_cpp_exceptionv @ 0x12D0 */
void test_cpp_exception()
{
 unsigned int *exception; // eax

 exception = (unsigned int *)__cxa_allocate_exception(4u);
 *exception = 42;
 __cxa_throw(exception, (type_info *)&typeinfo_for_int, 0);
}


/* Function: main @ 0x13C2 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 0x13D5 */
void GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 __cxa_atexit((void (*)(void *))std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}



/* CRT stub function _start removed by preprocessor */



/* Function: __x86.get_pc_thunk.bx @ 0x1450 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1589 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x158D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1591 */
long long test_cpp_member_func()
{
 long long result; // rax
 SimpleClass obj; // [esp+0h] [ebp-30h] BYREF
 unsigned int v2; // [esp+24h] [ebp-Ch]

 v2 = __readgsdword(0x14u);
 strncpy(obj.name, "Test", 0x1Fu);
 obj.name[31] = 0;
 LODWORD(result) = strlen(obj.name) + 4700;
 HIDWORD(result) = v2 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_constructorv @ 0x15F1 */
int test_cpp_constructor()
{
 return 1001 * LifecycleClass::instance_count + 21;
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x160D */
int call_virtual_func(Base *obj, int x)
{
 return (*obj->_vptr_Base)();
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1621 */
long long test_cpp_virtual_func(int a1)
{
 int v1; // ebx
 long long result; // rax
 Base base; // [esp+0h] [ebp-1Ch] BYREF
 Derived derived; // [esp+4h] [ebp-18h] BYREF
 unsigned int v5; // [esp+Ch] [ebp-10h]
 int v6; // [esp+18h] [ebp-4h]

 v6 = a1;
v5 = __readgsdword(0x14u);
  derived._vptr_Base = (int (**)(...))&off_5C70;
  base._vptr_Base = (int (**)(...))&off_5C58;
  derived.multiplier = 3;
  v1 = call_virtual_func(&base, 5);
  LODWORD(result) = v1 + call_virtual_func((Base *)&derived, 5) + 21;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x168F */
int test_cpp_multiple_inheritance()
{
 return 71;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1699 */
int test_cpp_operator_overload()
{
 return 22;
}


/* Function: _Z22test_cpp_template_funcv @ 0x16A3 */
long long test_cpp_template_func()
{
 int v0; // ebx
 long long result; // rax
 double r2; // [esp+8h] [ebp-28h]
 int a; // [esp+1Ch] [ebp-14h] BYREF
 int b; // [esp+20h] [ebp-10h] BYREF
 unsigned int v5; // [esp+24h] [ebp-Ch]

 v5 = __readgsdword(0x14u);
 v0 = template_max_int(3, 7);
 r2 = template_max_double(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap_int(&a, &b);
 LODWORD(result) = b + a + v0 + (int)r2;
 HIDWORD(result) = v5 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z23test_cpp_template_classv @ 0x1735 */
long long test_cpp_template_class()
{
 int v0; // eax
 long long result; // rax
 int r2[10]; // [esp+8h] [ebp-38h] BYREF
 int v3; // [esp+30h] [ebp-10h]
 unsigned int v4; // [esp+34h] [ebp-Ch]

 v4 = __readgsdword(0x14u);
 v3 = 1;
 r2[0] = 10;
 Container_int_push((Container_int *const)r2, 20);
 Container_int_push((Container_int *const)r2, 30);
 v0 = 0;
 if ( v3 > 0 )
 v0 = r2[0];
 LODWORD(result) = v3 + v0 + 3;
 HIDWORD(result) = v4 - __readgsdword(0x14u);
 return result;
}


/* Function: _Z15test_cpp_lambdav @ 0x1797 */
int test_cpp_lambda()
{
 return 85;
}


/* Function: _Z13test_cpp_rttiv @ 0x17A1 */
RTTIBase *test_cpp_rtti()
{
 const char *v0; // edi
 int v2; // [esp-Ch] [ebp-34h]
 int v3; // [esp-8h] [ebp-30h]
 int v4; // [esp-4h] [ebp-2Ch]
 int (**vptr_RTTIBase)(...); // [esp+4h] [ebp-24h]
 RTTIBase *obj2; // [esp+8h] [ebp-20h]
 RTTIBase *obj1; // [esp+Ch] [ebp-1Ch]

 obj1 = (RTTIBase *)operator new(4u);
 obj1->_vptr_RTTIBase = (int (**)(...))off_5DD0;
 obj2 = (RTTIBase *)operator new(4u);
 obj2->_vptr_RTTIBase = (int (**)(...))off_5DE4;
 vptr_RTTIBase = obj1->_vptr_RTTIBase;
 v0 = *(const char **)(*((unsigned int *)obj1->_vptr_RTTIBase - 1) + 4);
 if ( v0 != "12RTTIDerivedA" && *v0 != 42 )
 strcmp(v0, "12RTTIDerivedA");
 __dynamic_cast(
 obj1,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedA,
 0);
 __dynamic_cast(
 obj2,
 (const struct __class_type_info *)&typeinfo_for_RTTIBase,
 (const struct __class_type_info *)&typeinfo_for_RTTIDerivedB,
 0);
 if ( *v0 == 42 )
 ++v0;
 strlen(v0);
 ((void (*)(void *, int, int, int))vptr_RTTIBase[1])(obj1, v2, v3, v4);
 ((void (*)(void))obj2->_vptr_RTTIBase[1])();
 return obj2;
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x18C9 */
int test_cpp_smart_ptr()
{
 int *v0; // eax
 unsigned int *v1; // eax
 std_unique_ptr_int ptr2; // [esp+30h] [ebp-2Ch] BYREF
 std_unique_ptr_int_array arr; // [esp+38h] [ebp-24h] BYREF
 unsigned int stack_canary; // [esp+3Ch] [ebp-20h]

 stack_canary = __readgsdword(0x14u);
 arr._M_t._M_t._M_head_impl = (int *)stack_canary;
 v0 = (int *)operator new(4u);
 memset(&ptr2._M_t._M_t, 0, 4);
 *v0 = 200;
 ptr2._M_t._M_t._M_head_impl = v0;
 v1 = (unsigned int *)operator new[](0x14u);
 *v1 = 1;
 v1[1] = 2;
 v1[2] = 3;
 v1[3] = 4;
 v1[4] = 5;
 arr._M_t._M_t._M_head_impl = v1;
 std_unique_ptr_int_array_destructor(&arr);
 std_unique_ptr_int_destructor(&ptr2);
 std_unique_ptr_int_destructor(&ptr2);
 return 703;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x199D */
long long test_cpp_diamond_inheritance()
{
 int v0; // ebx
 long long result; // rax
 int v2; // [esp+1Ch] [ebp-40h]
 DiamondDerived obj; // [esp+24h] [ebp-38h] BYREF
 unsigned int stack_canary; // [esp+4Ch] [ebp-10h]

 stack_canary = __readgsdword(0x14u);
 *(int *)((char *)&obj.middleB.dataB + sizeof(VirtualBase)) = stack_canary;
 obj.middleA._vptr_MiddleA = (int (**)(...))&off_5D88;
 obj.middleB._vptr_MiddleB = (int (**)(...))&off_5DBC;
 *(int *)((char *)&obj.middleA.dataA + sizeof(VirtualBase)) = (int)&off_5DA0;
 *(int *)((char *)&obj.middleB.dataB) = 50;
 v0 = virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB);
 *(int **)&obj.middleB.dataB._vptr_VirtualBase = (int *)(intptr_t)100;
 v2 = v0 + virtual_thunk_to_DiamondDerived_func((DiamondDerived *)&obj.middleB);
 DiamondDerived_destructor(&obj, 1, (const void **)0);
 LODWORD(result) = v2;
 HIDWORD(result) = *(int *)((char *)&obj.middleB.dataB + sizeof(VirtualBase)) - __readgsdword(0x14u);
 return result;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x1A22 */
// bad sp value at call has been detected, the output may be wrong!
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 long long v2; // rax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // ecx
 int v8; // eax
 int v9; // eax
 int savedregs; // [esp+4h] [ebp+0h] BYREF

 puts(asc_301A);
 v0 = test_cpp_member_func();
 __printf_chk(1, unk_303E, v0);
 v1 = test_cpp_constructor();
 __printf_chk(1, unk_305C, v1);
 v2 = test_cpp_virtual_func((int)&savedregs);
 savedregs = HIDWORD(v2);
 __printf_chk(1, unk_3078, v2);
 v3 = test_cpp_multiple_inheritance();
 __printf_chk(1, unk_3094, v3);
 v4 = test_cpp_diamond_inheritance();
 __printf_chk(1, unk_30B0, v4);
 v5 = test_cpp_operator_overload();
 __printf_chk(1, unk_30CD, v5);
 v6 = test_cpp_template_func();
 savedregs = v7;
 __printf_chk(1, unk_30E9, v6);
 v8 = test_cpp_template_class();
 __printf_chk(1, unk_3105, v8);
 v9 = test_cpp_lambda();
 __printf_chk(1, unk_3121, v9);
 test_cpp_exception();
}


/* Function: _ZN4Base12virtual_funcEi @ 0x1B66 */
int Base__virtual_func(Base *_this, int x)
{
 return x + 1;
}


/* Function: _ZNK4Base7getNameEv @ 0x1B74 */
const char * Base__getName(const Base *_this)
{
 return "Base";
}


/* Function: _ZN4BaseD2Ev @ 0x1B8A */
void Base__destructor(Base *_this)
{
 ;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x1B90 */
int Derived__virtual_func(Derived *_this, int x)
{
 return _this->multiplier * x;
}


/* Function: _ZNK7Derived7getNameEv @ 0x1BA4 */
const char * Derived__getName(const Derived *_this)
{
 return "Derived";
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x1BBA */
int MultiDerived__funcA(MultiDerived *_this)
{
 return 30;
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x1BC4 */
int MultiDerived__funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x1BCE */
int non_virtual_thunk_to_MultiDerived_funcB(MultiDerived *_this)
{
 return 40;
}


/* Function: _ZN11VirtualBase4funcEv @ 0x1BD8 */
int VirtualBase__func(VirtualBase *_this)
{
 return *(int *)_this;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x1BE2 */
void VirtualBase__destructor(VirtualBase *_this)
{
 ;
}


/* Function: _ZN7MiddleA4funcEv @ 0x1BE8 */
int MiddleA__func(MiddleA *_this)
{
 return *(int *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 3)) + 150;
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x1C02 */
int virtual_thunk_to_MiddleA_func(MiddleA *_this)
{
 return MiddleA__func((MiddleA *)((char *)_this - *((unsigned int *)_this->_vptr_MiddleA - 3)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x1C16 */
int MiddleB__func(MiddleB *_this)
{
 return *(int *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleB - 3)) + 200;
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x1C30 */
int virtual_thunk_to_MiddleB_func(MiddleB *_this)
{
 return MiddleB__func((MiddleB *)((char *)_this - *((unsigned int *)_this->_vptr_MiddleB - 3)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x1C44 */
int DiamondDerived__func(DiamondDerived *_this)
{
 DiamondDerived *d = _this;
 return *(int *)((char *)&d->middleA.dataA + *((unsigned int *)d->middleA._vptr_MiddleA - 3)) + 250;
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x1C5E */
int virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return DiamondDerived__func((DiamondDerived *)((char *)_this + *((unsigned int *)_this->middleA._vptr_MiddleA - 3)));
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x1C71 */
int non_virtual_thunk_to_DiamondDerived_func(DiamondDerived *_this)
{
 return DiamondDerived__func((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZN7MiddleAD1Ev @ 0x1C7C */
void MiddleA_destructor1(MiddleA *_this)
{
 _this->_vptr_MiddleA = (int (**)(...))&off_5C94;
 _this->dataA._vptr_VirtualBase = (int (**)(...))&off_5CB0;
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x1CA1 */
void virtual_thunk_to_MiddleA_destructor(MiddleA *_this)
{
 int (**v1)(...); // eax
 int (**v2)(...); // eax

 v1 = (int (**)(...))((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 4));
 v1[0] = (int (*)(...))off_5C94;
 v2 = (int (**)(...))((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 4) + 8);
 v2[0] = (int (*)(...))off_5CB0;
}


/* Function: _ZN7MiddleBD1Ev @ 0x1CCC */
void MiddleB_destructor1(MiddleB *_this)
{
 _this->_vptr_MiddleB = (int (**)(...))&off_5CD0;
 _this->dataB._vptr_VirtualBase = (int (**)(...))&off_5CEC;
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x1CF1 */
void virtual_thunk_to_MiddleB_destructor(MiddleB *_this)
{
 int (**v1)(...); // eax
 int (**v2)(...); // eax

 v1 = (int (**)(...))((char *)_this + *((unsigned int *)_this->_vptr_MiddleB - 4));
 v1[0] = (int (*)(...))off_5CD0;
 v2 = (int (**)(...))((char *)_this + *((unsigned int *)_this->_vptr_MiddleB - 4) + 8);
 v2[0] = (int (*)(...))off_5CEC;
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1D1C */
int RTTIDerivedA__getType(const RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x1D26 */
int RTTIDerivedB__getType(const RTTIDerivedB *_this)
{
 return 2;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x1D30 */
void RTTIDerivedB__destructor(RTTIDerivedB *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x1D36 */
void RTTIDerivedA__destructor(RTTIDerivedA *_this)
{
 ;
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x1D3C */
void MultiDerived__destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x1D41 */
void non_virtual_thunk_to_MultiDerived_destructor(MultiDerived *_this)
{
 ;
}


/* Function: _ZN7DerivedD2Ev @ 0x1D46 */
void Derived__destructor(Derived *_this)
{
 ;
}


/* Function: _ZN4BaseD0Ev @ 0x1D4C */
void Base__deleting_destructor(Base *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN7DerivedD0Ev @ 0x1D74 */
void Derived__deleting_destructor(Derived *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x1D9C */
void MultiDerived__deleting_destructor(MultiDerived *_this)
{
 operator delete(_this, 0x10u);
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x1DC4 */
void non_virtual_thunk_to_MultiDerived_deleting_destructor(MultiDerived *_this)
{
 MultiDerived__deleting_destructor((MultiDerived *)((char *)_this - 8));
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x1DD0 */
void VirtualBase__deleting_destructor(VirtualBase *_this)
{
 operator delete(_this, 8u);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x1DF8 */
void RTTIDerivedB_deleting_destructor(RTTIDerivedB *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1E20 */
void RTTIDerivedA_deleting_destructor(RTTIDerivedA *_this)
{
 operator delete(_this, 4u);
}


/* Function: _ZN7MiddleAD0Ev @ 0x1E48 */
void MiddleA_deleting_destructor(MiddleA *_this)
{
 _this->_vptr_MiddleA = (int (**)(...))&off_5C94;
 _this->dataA._vptr_VirtualBase = (int (**)(...))&off_5CB0;
 operator delete(_this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x1E7F */
void virtual_thunk_to_MiddleA_deleting_destructor(MiddleA *_this)
{
 MiddleA_deleting_destructor((MiddleA *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleA - 4)));
}


/* Function: _ZN7MiddleBD0Ev @ 0x1E92 */
void MiddleB_deleting_destructor(MiddleB *_this)
{
 _this->_vptr_MiddleB = (int (**)(...))&off_5CD0;
 _this->dataB._vptr_VirtualBase = (int (**)(...))&off_5CEC;
 operator delete(_this, 0x10u);
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x1EC9 */
void virtual_thunk_to_MiddleB_deleting_destructor(MiddleB *_this)
{
 MiddleB_deleting_destructor((MiddleB *)((char *)_this + *((unsigned int *)_this->_vptr_MiddleB - 4)));
}


/* Function: _ZN7MiddleAD4Ev @ 0x1EDC */
void MiddleA_destructor4(MiddleA *_this, int __in_chrg, const void **__vtt_parm)
{
 int (**v3)(...); // eax
 int (**v4)(...); // ecx

 v3 = (int (**)(...))&off_5C94;
 if ( !__in_chrg )
 v3 = (int (**)(...))*__vtt_parm;
 _this->_vptr_MiddleA = v3;
 if ( __in_chrg )
 {
 _this->dataA._vptr_VirtualBase = (int (**)(...))&off_5CB0;
 }
 else
 {
 _this->dataA._vptr_VirtualBase = (int (**)(...))__vtt_parm[1];
 }
}


/* Function: _ZN7MiddleAD2Ev @ 0x1F26 */
void MiddleA_base_destructor(MiddleA *_this, const void **__vtt_parm)
{
 MiddleA_destructor4(_this, 0, __vtt_parm);
}


/* Function: _ZN7MiddleBD4Ev @ 0x1F42 */
void MiddleB_destructor4(MiddleB *_this, int __in_chrg, const void **__vtt_parm)
{
 int (**v3)(...); // eax
 int (**v4)(...); // ecx

 v3 = (int (**)(...))&off_5CD0;
 if ( !__in_chrg )
 v3 = (int (**)(...))*__vtt_parm;
 _this->_vptr_MiddleB = v3;
 if ( __in_chrg )
 {
 _this->dataB._vptr_VirtualBase = (int (**)(...))&off_5CEC;
 }
 else
 {
 _this->dataB._vptr_VirtualBase = (int (**)(...))__vtt_parm[1];
 }
}


/* Function: _ZN7MiddleBD2Ev @ 0x1F8C */
void MiddleB_base_destructor(MiddleB *_this, const void **__vtt_parm)
{
 MiddleB_destructor4(_this, 0, __vtt_parm);
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x1FA8 */
int template_max_int(int a, int b)
{
 int result; // eax

 result = a;
 if ( a < b )
 return b;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x1FBC */
double template_max_double(double a, double b)
{
 long double result; // fst7

 result = b;
 if ( a > (long double)b )
 return a;
 return result;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x1FD5 */
void template_swap_int(int *a, int *b)
{
 int v2; // ecx

 v2 = *a;
 *a = *b;
 *b = v2;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x1FEE */
void Container_int_Constructor(Container_int *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x2002 */
void Container_int_push(Container_int *_this, int value)
{
 int size; // edx

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x2022 */
int Container_int_get(const struct Container_int *_this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && _this->size > idx )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x2040 */
int Container_int_getSize(const struct Container_int *_this)
{
 return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x2050 */
void Container_double_Constructor(struct Container_double *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x2064 */
void Container_double_push(struct Container_double *_this, double value)
{
 int size; // edx

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x2088 */
double Container_double_get(const struct Container_double *_this, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && idx < _this->size )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x20A8 */
int Container_double_getSize(const struct Container_double *_this)
{
 return _this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x20B8 */
void std_unique_ptr_int_destructor(std_unique_ptr_int *_this)
{
 unsigned int gap_value = *(unsigned int *)&_this->_M_t._M_t._M_head_impl;
 if ( gap_value != 0 && gap_value != 0xFFFFFFFF )
 operator delete(_this->_M_t._M_t._M_head_impl, 4u);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x20E8 */
void std_unique_ptr_int_array_destructor(std_unique_ptr_int_array *_this)
{
 unsigned int gap_value = *(unsigned int *)&_this->_M_t._M_t._M_head_impl;
 if ( gap_value != 0 && gap_value != 0xFFFFFFFF )
 operator delete[](_this->_M_t._M_t._M_head_impl);
}


/* Function: _ZN14DiamondDerivedD4Ev @ 0x2116 */
void DiamondDerived_destructor(
 DiamondDerived *_this,
 int __in_chrg,
 const void **__vtt_parm)
{
 DiamondDerived *d = _this;
 int (**v3)(...); // edx
 int (**v4)(...); // ecx
 int v5; // edx
 unsigned int ( **v6)(DiamondDerived *__hidden); // edx
 const void **v7; // edx
 const void **v8; // eax

 v3 = (int (**)(...))&off_5D88;
 if ( !__in_chrg )
 v3 = (int (**)(...))*__vtt_parm;
 d->middleA._vptr_MiddleA = v3;
 if ( __in_chrg )
 {
 v4 = (int (**)(...))&off_5DBC;
 v5 = 16;
 }
 else
 {
 v4 = (int (**)(...))__vtt_parm[5];
 v5 = (int)*(v3 - 3);
 }
 d->middleB._vptr_MiddleB = v4;
 v6 = (unsigned int (**)(DiamondDerived *__hidden))&off_5DA0;
 if ( !__in_chrg )
 v6 = (unsigned int (**)(DiamondDerived *__hidden))__vtt_parm[6];
 d->middleA.dataA._vptr_VirtualBase = (int (**)(...))v6;
 v7 = (const void **)off_5D6C;
 if ( !__in_chrg )
 v7 = __vtt_parm + 3;
 MiddleB_base_destructor((MiddleB *const)(&d->middleA.dataA + 1), v7);
 v8 = (const void **)off_5D64;
 if ( !__in_chrg )
 v8 = __vtt_parm + 1;
 MiddleA_base_destructor(&d->middleA, v8);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x21B0 */
void DiamondDerived_destructor1(DiamondDerived *_this)
{
 DiamondDerived_destructor(_this, 1, (const void **)0);
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x21CB */
void non_virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)_this - 8), 1, 0);
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x21D6 */
void virtual_thunk_to_DiamondDerived_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)_this + *((unsigned int *)_this->middleA._vptr_MiddleA - 4)), 1, 0);
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x21EA */
void DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor(_this, 1, 0);
 operator delete(_this, 0x30u);
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x221E */
void non_virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 DiamondDerived_deleting_destructor((DiamondDerived *)((char *)_this - 8));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x2229 */
void virtual_thunk_to_DiamondDerived_deleting_destructor(DiamondDerived *_this)
{
 DiamondDerived_destructor((DiamondDerived *)((char *)_this + *((unsigned int *)_this->middleA._vptr_MiddleA - 4)), 1, 0);
 operator delete(_this, 0x30u);
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x223C */
void DiamondDerived_base_destructor(DiamondDerived *_this, const void **__vtt_parm)
{
 DiamondDerived_destructor(_this, 0, __vtt_parm);
}






/* Function: __x86.get_pc_thunk.ax @ 0x2258 */
void *_x86_get_pc_thunk_ax()
{
 void *retaddr; // [esp+0h] [ebp+0h]

 return retaddr;
}


/* Function: __x86.get_pc_thunk.cx @ 0x225C */
void _x86_get_pc_thunk_cx()
{
 ;
}


/* Function: __x86.get_pc_thunk.si @ 0x2260 */
void _x86_get_pc_thunk_si()
{
 ;
}


/* Function: __stack_chk_fail_local @ 0x2270 */
void _stack_chk_fail_local()
{
 __asm__ volatile("add $_GLOBAL_OFFSET_TABLE_ - (.-8), %%ebx" :::);
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x22DC */
void term_proc()
{
 ;
}


/* FAILED to decompile: __printf_chk @ 0x602C */

/* FAILED to decompile: _Znwj @ 0x6034 */

/* FAILED to decompile: __cxa_finalize @ 0x6038 */

/* FAILED to decompile: __cxa_begin_catch @ 0x603C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x6040 */

/* FAILED to decompile: strlen @ 0x6044 */

/* FAILED to decompile: __cxa_atexit @ 0x6048 */

/* FAILED to decompile: _ZdlPvj @ 0x604C */

/* FAILED to decompile: strcmp @ 0x6054 */

/* FAILED to decompile: __libc_start_main @ 0x6058 */

/* FAILED to decompile: _Znaj @ 0x605C */

/* FAILED to decompile: strncpy @ 0x6060 */

/* FAILED to decompile: __stack_chk_fail @ 0x6064 */

/* FAILED to decompile: __dynamic_cast @ 0x6068 */

/* FAILED to decompile: _ZdaPv @ 0x606C */

/* FAILED to decompile: __cxa_rethrow @ 0x6074 */

/* FAILED to decompile: puts @ 0x6078 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x607C */

/* FAILED to decompile: __cxa_end_catch @ 0x6080 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x6084 */

/* FAILED to decompile: __cxa_throw @ 0x6088 */

/* FAILED to decompile: _Unwind_Resume @ 0x6090 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x6094 */

/* Total functions decompiled: 118, failed: 23 */
