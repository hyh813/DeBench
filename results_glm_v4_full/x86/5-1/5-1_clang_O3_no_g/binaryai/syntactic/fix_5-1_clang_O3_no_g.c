/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;





#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <new>
#include <typeinfo>

/* Forward declarations */
void __gmon_start__(void);
void frame_dummy(void);
int __do_global_ctors_aux(void);

/* Virtual table type definitions */
typedef void (*vtable_ptr)();

struct RTTIBase_vtable {
  vtable_ptr destructor;
  vtable_ptr getType;
};

struct RTTIDerivedA_vtable {
  vtable_ptr destructor;
  vtable_ptr getType;
};

struct RTTIDerivedB_vtable {
  vtable_ptr destructor;
  vtable_ptr getType;
};

/* Standard library declarations */
void *__cxa_allocate_exception(size_t size);
void __cxa_throw(void *thrown_exception, const void *tinfo, void (*dest)(void*));
void *__cxa_begin_catch(void);
void __cxa_end_catch(void);
void __cxa_rethrow(void);
void _Unwind_Resume(void) __attribute__((noreturn));
void *__dynamic_cast(const void *obj, const void *src_type, const void *dst_type, int offset);
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle);
void __x86_get_pc_thunk_di(void);
void *malloc(size_t size);
void free(void *ptr);
int vprintf(const char *format, va_list arg);
int fputs(const char *s, FILE *stream);
int putchar(int c);
extern FILE *stdout;

/* Class definitions */
class Base {
public:
  virtual void virtualFunc(int param) = 0;
};

class LifecycleClass {
public:
  static int instance_count;
};

class RTTIBase {
public:
  static const void *typeinfo;
  RTTIBase() {}
  virtual ~RTTIBase() {}
  virtual unsigned int getType() = 0;
};

class RTTIDerivedA : public RTTIBase {
public:
  static const void *typeinfo;
  RTTIDerivedA();
  virtual ~RTTIDerivedA();
  virtual unsigned int getType();
};

class RTTIDerivedB : public RTTIBase {
public:
  static const void *typeinfo;
  RTTIDerivedB();
  virtual ~RTTIDerivedB();
  virtual unsigned int getType();
};



template<typename T>
class Container {
public:
  Container();
  void push(T val);
  T get(int index);
  unsigned int getSize();
private:
  T data[10];
  unsigned int size;
};

typedef Container<int> Container_int_;
typedef Container<double> Container_double_;

/* Static member definitions */
int LifecycleClass::instance_count = 0;
const void *RTTIBase::typeinfo = NULL;
const void *RTTIDerivedA::typeinfo = NULL;
const void *RTTIDerivedB::typeinfo = NULL;

/* Global data */
const char DAT_000121d8[] = "Testing C++ Member Functions";
const char DAT_00012081[] = "test_cpp_member_func: %d\n";
const char DAT_0001209f[] = "test_cpp_constructor: %d\n";
const char DAT_000120bb[] = "test_cpp_virtual_func: %d\n";
const char DAT_000120d7[] = "test_cpp_multiple_inheritance: %d\n";
const char DAT_000120f3[] = "test_cpp_diamond_inheritance: %d\n";
const char DAT_00012110[] = "test_cpp_operator_overload: %d\n";
const char DAT_0001212c[] = "test_cpp_template_func: %d\n";
const char DAT_00012148[] = "test_cpp_template_class: %d\n";
const char DAT_00012164[] = "test_cpp_lambda: %d\n";
const char DAT_00012180[] = "test_cpp_exception: %u\n";
const char DAT_0001219d[] = "test_cpp_smart_ptr: %d\n";
const char DAT_000121ba[] = "test_cpp_rtti: %d\n";
const void *PTR__RTTIBase_00013ecc = NULL;
const void *PTR__RTTIBase_00013ee0 = NULL;

namespace std {
  namespace ios_base {
    class Init {
    public:
      Init();
      static void _Init(void *arg);
    };
  }
}
std::ios_base::Init __ioinit;

/* Global variables */
void *__dso_handle;

// Decompiled by BinaryAI
// SHA256: 74fcf3c10d0d8ccaeb251bfa2496bd078960723151387acf82c9e88874a5fffb

// Function: _init @ 0x11000
int _init(void *ctx)
{
 __gmon_start__();
 frame_dummy();
 return __do_global_ctors_aux();
}

// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 (*(void (**)(void))0)();
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x11040
void* operator new(size_t size)
{
 void* pvVar1;
 pvVar1 = malloc(size);
 return pvVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x11050
void *__cxa_begin_catch(void)
{
 return NULL;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x11060
void *__cxa_allocate_exception(size_t size)
{
 return malloc(size);
}

// Function: <EXTERNAL>::strlen @ 0x11070
size_t strlen(const char *__s)
{
 size_t sVar1;
 const char *s;
 for (s = __s; *s; s++);
 sVar1 = s - __s;
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x11080
void __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11090
void __libc_start_main(void)
{
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x110a0
void operator delete(void* ptr)
{
 free(ptr);
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x110b0
void *__dynamic_cast(const void *obj, const void *src_type, const void *dst_type, int offset)
{
 return (void*)obj;
}

// Function: <EXTERNAL>::printf @ 0x110c0
int printf(const char *__format,...)
{
 int iVar1;
 va_list args;
 va_start(args, __format);
 iVar1 = vprintf(__format, args);
 va_end(args);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x110d0
void __cxa_rethrow(void)
{
 return;
}

// Function: <EXTERNAL>::puts @ 0x110e0
int puts(const char *__s)
{
 int iVar1;
 fputs(__s, stdout);
 putchar('\n');
 iVar1 = 1;
 return iVar1;
}

// Function: <EXTERNAL>::std::ios_base::Init::_Init @ 0x110f0
void std::ios_base::Init::_Init(void *arg)
{
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x11100
void __cxa_end_catch(void)
{
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x11110
void __cxa_throw(void *thrown_exception, const void *tinfo, void (*dest)(void*))
{
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x11120
void _Unwind_Resume(void)
{
}

// Function: FUN_00011130 @ 0x11130
void FUN_00011130(void)
{
 int unaff_EBX;
 (*(void (**)(void))(unaff_EBX + -0x18))();
 return;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x11140
void _GLOBAL__sub_I_5_1_cpp(void)
{
 unsigned int uVar1;
 uVar1 = 0x11148;
 std::ios_base::Init::_Init(&__ioinit);
 __cxa_atexit((void (*)(void *))std::ios_base::Init::_Init,&__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x11180
void _start(unsigned int param_1,unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main();
 do {
 } while( true );
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
 (***(void ***)param_1)(param_1,param_2);
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
unsigned int test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,NULL,NULL);
 return 0x2a;
}

// Function: test_cpp_smart_ptr @ 0x11530
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x11540
int test_cpp_rtti(void)
{
 RTTIDerivedA *puVar1;
 RTTIDerivedB *piVar2;
 RTTIBase *pVar3;
 RTTIBase *pVar4;
 int iVar5;
 puVar1 = new RTTIDerivedA();
 piVar2 = new RTTIDerivedB();
 pVar3 = (RTTIBase*)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar5 = 0x82;
 if (pVar3 == NULL) {
 iVar5 = 0x1e;
 }
 pVar4 = (RTTIBase*)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar5 = iVar5 + 200;
 if (pVar4 == NULL) {
 iVar5 = iVar5 - 200;
 }
 delete puVar1;
 delete piVar2;
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x11600
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 void *puVar3;
 void *piVar4;
 void *pVar3;
 void *pVar4;
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
 puVar3 = new RTTIDerivedA();
 piVar4 = new RTTIDerivedB();
 pVar3 = (void*)__dynamic_cast(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar7 = 0x82;
 if (pVar3 == NULL) {
 iVar7 = 0x1e;
 }
 pVar4 = (void*)__dynamic_cast(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 iVar7 = iVar7 + 200;
 if (pVar4 == NULL) {
 iVar7 = iVar7 - 200;
 }
 delete (RTTIDerivedA*)puVar3;
 delete (RTTIDerivedB*)piVar4;
 printf(&DAT_000121ba,iVar7 + 0xe);
 return;
}

// Function: main @ 0x11810
int main(void)
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
Container<int>::Container()
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x11890
void Container<int>::push(int param_1)
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
int Container<int>::get(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 iVar1 = this->data[param_1];
 }
 return iVar1;
}

// Function: Container<int>::getSize @ 0x118d0
unsigned int Container<int>::getSize()
{
 return this->size;
}

// Function: Container<double>::Container @ 0x118e0
Container<double>::Container()
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x118f0
void Container<double>::push(double param_1)
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
double Container<double>::get(int param_1)
{
 double dVar1;
 dVar1 = 0.0;
 if ((-1 < param_1) && (this->size != param_1 && param_1 <= this->size)) {
 dVar1 = this->data[param_1];
 }
 return dVar1;
}

// Function: Container<double>::getSize @ 0x11930
unsigned int Container<double>::getSize()
{
 return this->size;
}

// Function: RTTIDerivedA::RTTIDerivedA @ 0x11940
RTTIDerivedA::RTTIDerivedA()
{
 static RTTIDerivedA_vtable vtable = {
    (vtable_ptr)&RTTIDerivedA::~RTTIDerivedA,
    (vtable_ptr)&RTTIDerivedA::getType
  };
 *(RTTIDerivedA_vtable**)this = &vtable;
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x11940
RTTIDerivedA::~RTTIDerivedA()
{
  return;
}

// Function: RTTIDerivedA::getType @ 0x11970
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}





// Function: RTTIDerivedB::RTTIDerivedB @ 0x11990
RTTIDerivedB::RTTIDerivedB()
{
  static RTTIDerivedB_vtable vtable = {
    (vtable_ptr)&RTTIDerivedB::~RTTIDerivedB,
    (vtable_ptr)&RTTIDerivedB::getType
  };
  *(RTTIDerivedB_vtable**)this = &vtable;
  return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x11990
RTTIDerivedB::~RTTIDerivedB()
{
  return;
}

// Function: RTTIDerivedB::getType @ 0x119c0
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: RTTIBase::RTTIBase @ 0x119d0
RTTIBase::RTTIBase()
{
  return;
}

// Function: RTTIBase::~RTTIBase @ 0x119f0
RTTIBase::~RTTIBase()
{
  return;
}

// Function: __do_global_ctors_aux @ 0x11a30
int __do_global_ctors_aux(void)
{
 return 0;
}

// Function: _fini @ 0x11a1c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

