#include <stdio.h>
#include <string.h>
#include <new>
#include <stdlib.h>

/* Auto-injected type definitions by preprocessor */
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

/* Function pointer type for code addresses */
typedef void (*code)(void);

/* Ghidra undefined type definitions */
typedef unsigned char undefined1;
typedef unsigned short undefined2;
typedef unsigned int undefined4;
typedef unsigned long undefined8;

/* C++ Standard Library Stubs */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init() {}
      ~Init() {}
    };
  };
  extern ios_base::Init __ioinit;
}

/* C++ Type Information Stubs */
namespace __cxxabiv1 {
  class __class_type_info {
  public:
    virtual ~__class_type_info() {}
  };
}

typedef __cxxabiv1::__class_type_info type_info;

/* Typeinfo for primitive types */
namespace std {
  class type_info_for_int {
  public:
    static type_info typeinfo;
  };
}

typedef int int_type_alias;
type_info int_typeinfo;

/* Forward declarations for C++ classes */
class Base {
public:
  virtual ~Base() {}
  virtual void dummy() {}
};

class LifecycleClass {
public:
  static int instance_count;
};

int LifecycleClass::instance_count = 0;

class RTTIBase {
public:
  virtual ~RTTIBase() {}
  virtual int getType() const = 0;
  static type_info typeinfo;
};

type_info RTTIBase::typeinfo;

class RTTIDerivedA : public RTTIBase {
public:
  virtual ~RTTIDerivedA();
  virtual int getType() const;
  static type_info typeinfo;
};

type_info RTTIDerivedA::typeinfo;

class RTTIDerivedB : public RTTIBase {
public:
  virtual ~RTTIDerivedB();
  virtual int getType() const;
  static type_info typeinfo;
};

type_info RTTIDerivedB::typeinfo;

/* Template class forward declarations */
template<typename T> class Container {
public:
  Container();
  void push(T);
  T get(int) const;
  int getSize() const;
  int _size;
  T _data[1];
};

/* External symbols */
extern void *__dso_handle;
void *PTR__RTTIBase_00021ed8 = 0;
undefined4 PTR__RTTIBase_00021eec = 0;
extern const char *DAT_00011358;
extern const char *DAT_00011201;
extern const char *DAT_0001121f;
extern const char *DAT_0001123b;
extern const char *DAT_00011257;
extern const char *DAT_00011273;
extern const char *DAT_00011290;
extern const char *DAT_000112ac;
extern const char *DAT_000112c8;
extern const char *DAT_000112e4;
extern const char *DAT_00011300;
extern const char *DAT_0001131d;
extern const char *DAT_0001133a;

/* C++ operator new/delete stubs */
void *sbrk(intptr_t increment) {
  /* Simple stub implementation - always fail */
  (void)increment;
  return (void *)-1;
}

int __aeabi_dcmpgt(double a, double b) {
  /* ARM EABI double comparison: returns 1 if a > b, 0 otherwise */
  return a > b ? 1 : 0;
}

void *dynamic_cast_impl(void *obj, type_info *src, type_info *dst, int hint) {
  /* Stub implementation - returns NULL indicating cast fails */
  return NULL;
}

extern "C" {
  void *operator_new_stub(size_t);
  void operator_delete_stub(void *);
  int __cxa_atexit(void (*)(void *), void *, void *);
  void *__cxa_allocate_exception(size_t);
  void __cxa_throw(void *, type_info *, void (*)(void *));
  
  /* Standard library functions */
  void *malloc(size_t size);
  void free(void *ptr);
}

void *operator_new_stub(size_t size) {
  return malloc(size);
}

void operator_delete_stub(void *ptr) {
  free(ptr);
}

/* Simple malloc/free stub implementations */
void *malloc(size_t size) {
  /* Simple heap allocation stub */
  extern void *sbrk(intptr_t increment);
  void *ptr = sbrk(0);
  if (sbrk((intptr_t)size) == (void *)-1) {
    return NULL;
  }
  return ptr;
}

void free(void *ptr) throw() {
  /* Stub - no actual deallocation for simple implementation */
  (void)ptr;
  return;
}

void *operator new(size_t size) {
  return operator_new_stub(size);
}

void operator delete(void *ptr) noexcept {
  operator_delete_stub(ptr);
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_O3_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Helper function to construct ios_base::Init */
static void construct_ios_init(std::ios_base::Init *obj) {
  new (obj) std::ios_base::Init;
}

/* Helper function to destruct ios_base::Init for __cxa_atexit */
static void destruct_ios_init(void *obj) {
  ((std::ios_base::Init *)obj)->~Init();
}

/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 construct_ios_init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit(destruct_ios_init,&std::__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */





/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00010afc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

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
 
 local_28 = 0x74736554;
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



/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(void (**)(void))(*(void **)param_1))();
 return;
}



/* Function: test_cpp_virtual_func @ 00010b8c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

undefined4 test_cpp_virtual_func(void)

{
 return 0x2a;
}



/* Function: test_cpp_multiple_inheritance @ 00010b94 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

undefined4 test_cpp_multiple_inheritance(void)

{
 return 0x47;
}



/* Function: test_cpp_diamond_inheritance @ 00010b9c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

undefined4 test_cpp_diamond_inheritance(void)

{
 return 0x28a;
}



/* Function: test_cpp_operator_overload @ 00010ba8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

undefined4 test_cpp_operator_overload(void)

{
 return 0x16;
}



/* Function: test_cpp_template_func @ 00010bb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

undefined4 test_cpp_template_func(void)

{
 return 0x27;
}



/* Function: test_cpp_template_class @ 00010bb8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

undefined4 test_cpp_template_class(void)

{
 return 0x10;
}



/* Function: test_cpp_lambda @ 00010bc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

undefined4 test_cpp_lambda(void)

{
 return 0x55;
}



/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int_typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* Function: test_cpp_rtti @ 00010cb0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 void *iVar3;
 void *iVar4;
 int iVar5;
 
 puVar1 = (undefined4 *)operator_new_stub(4);
 *(void **)puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new_stub(4);
 *(void **)piVar2 = &PTR__RTTIBase_00021eec;
 iVar3 = dynamic_cast_impl(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = dynamic_cast_impl(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator_delete_stub(puVar1);
  (void)((*(void (**)(void*))((char *)piVar2 + 4))(piVar2));
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* Function: test_cpp_oo_features @ 00010d7c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
 undefined4 *puVar3;
 int *piVar4;
 void *iVar5;
 void *iVar6;
 int iVar7;
 undefined4 local_38;
 undefined4 uStack_34;
 undefined4 uStack_30;
 undefined4 local_2c;
 undefined4 uStack_28;
 undefined4 uStack_24;
 undefined4 uStack_20;
 undefined2 local_1c;
 undefined1 local_1a;
 undefined1 local_19;
 
 puts(DAT_00011358);
 local_38 = 0x74736554;
 uStack_34 = 0;
 uStack_30 = 0;
 local_2c = 0;
 uStack_28 = 0;
 uStack_24 = 0;
 uStack_20 = 0;
 local_1c = 0;
 local_1a = 0;
 local_19 = 0;
 sVar1 = strlen((char *)&local_38);
 printf((const char *)&DAT_00011201,sVar1 + 0x125c);
 printf((const char *)&DAT_0001121f,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf((const char *)&DAT_0001123b,0x2a);
 printf((const char *)&DAT_00011257,0x47);
 printf((const char *)&DAT_00011273,0x28a);
 printf((const char *)&DAT_00011290,0x16);
 printf((const char *)&DAT_000112ac,0x27);
 printf((const char *)&DAT_000112c8,0x10);
 printf((const char *)&DAT_000112e4,0x55);
 test_cpp_exception();
 printf((const char *)&DAT_00011300,0x2a);
 printf((const char *)&DAT_0001131d,0x2bf);
 puVar3 = (undefined4 *)operator_new_stub(4);
 *(void **)puVar3 = &PTR__RTTIBase_00021ed8;
 piVar4 = (int *)operator_new_stub(4);
 *(void **)piVar4 = &PTR__RTTIBase_00021eec;
 iVar5 = dynamic_cast_impl(puVar3,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar6 = dynamic_cast_impl(piVar4,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator_delete_stub(puVar3);
  (void)((*(void (**)(void*))((char *)piVar4 + 4))(piVar4));
 iVar7 = 0x82;
 if (iVar5 == 0) {
 iVar7 = 0x1e;
 }
 if (iVar6 != 0) {
 iVar7 = iVar7 + 200;
 }
 printf(DAT_0001133a,iVar7 + 0xe);
 return;
}



/* Function: main @ 00010fb8 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max<int> @ 00010fcc */

/* int template_max<int>(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* Function: template_max<double> @ 00010fd8 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010fec */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max<double>(double, double) */

double template_max_double(double param_1,double param_2)

{
 if (__aeabi_dcmpgt(param_1, param_2)) {
   param_1 = param_2;
 }
 return param_1;
}



/* Function: template_swap<int> @ 0001100c */

/* void template_swap<int>(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00011020 */

/* Container<int>::Container() */

template<>
Container<int>::Container()

{
 this->_size = 0;
 return;
}



/* Function: push @ 0001102c */

/* Container<int>::push(int) */

template<>
void Container<int>::push(int param_1)

{
  int iVar1;
  
  iVar1 = this->_size;
  if (iVar1 < 10) {
    this->_size = iVar1 + 1;
    this->_data[iVar1] = param_1;
  }
  return;
}



/* Function: get @ 00011044 */

/* Container<int>::get(int) const */

template<>
int Container<int>::get(int param_1) const

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 < 0) {
    return 0;
  }
  if (param_1 < this->_size) {
    iVar1 = this->_data[param_1];
  }
  return iVar1;
}



/* Function: getSize @ 00011064 */

/* Container<int>::getSize() */

template<>
int Container<int>::getSize() const

{
  return this->_size;
}



/* Function: Container @ 0001106c */

/* Container<double>::Container() */

template<>
Container<double>::Container()

{
 this->_size = 0;
 return;
}



/* Function: push @ 00011078 */

/* Container<double>::push(double) */

template<>
void Container<double>::push(double param_1)

{
  int iVar2;
  
  iVar2 = this->_size;
  if (9 < iVar2) {
    return;
  }
  memcpy(&this->_data[iVar2], &param_1, sizeof(double));
  this->_size = iVar2 + 1;
  return;
}



/* Function: get @ 0001109c */

/* Container<double>::get(int) const */

template<>
double Container<double>::get(int param_1) const

{
  double iVar1;
  
  iVar1 = 0.0;
  if (param_1 < 0) {
    return 0.0;
  }
  if (param_1 < this->_size) {
    iVar1 = this->_data[param_1];
  }
  return iVar1;
}



/* Function: getSize @ 000110c8 */

/* Container<double>::getSize() */

template<>
int Container<double>::getSize() const

{
  return this->_size;
}



/* Function: ~RTTIDerivedA @ 000110d0 */

/* RTTIDerivedA::~RTTIDerivedA() */

RTTIDerivedA::~RTTIDerivedA()

{
  return;
}



/* Function: getType @ 000110d4 */

/* RTTIDerivedA::getType() const */

int RTTIDerivedA::getType() const

{
 return 1;
}







/* Function: ~RTTIDerivedB @ 000110e0 */

/* RTTIDerivedB::~RTTIDerivedB() */

RTTIDerivedB::~RTTIDerivedB()

{
  return;
}



/* Function: getType @ 000110e4 */

/* RTTIDerivedB::getType() const */

int RTTIDerivedB::getType() const

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */

/* String constants for printf statements */
const char *DAT_00011201 = "%d\n";
const char *DAT_0001121f = "%d\n";
const char *DAT_0001123b = "%d\n";
const char *DAT_00011257 = "%d\n";
const char *DAT_00011273 = "%d\n";
const char *DAT_00011290 = "%d\n";
const char *DAT_000112ac = "%d\n";
const char *DAT_000112c8 = "%d\n";
const char *DAT_000112e4 = "%d\n";
const char *DAT_00011300 = "%d\n";
const char *DAT_0001131d = "%d\n";
const char *DAT_0001133a = "%d\n";
const char *DAT_00011358 = "Testing C++ OO Features\n";
