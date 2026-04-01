/* Auto-injected type definitions by preprocessor */

typedef unsigned long size_t;

/* External function declarations */
extern "C" {
    size_t strlen(const char* s);
    int printf(const char* format, ...);
    int puts(const char* s);
}

/* C++ printf overload for compatibility */
int printf_cpp(const char* format, ...);

/* C++ puts overload for compatibility */
int puts_cpp(const char* s);

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef unsigned long long ulonglong;
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

/* Ghidra decompiler types */
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned long long undefined8;

/* Ghidra decompiler types */
typedef void (*code)();

/* Ghidra macros for 64-bit operations */
#define SUB84(val, offset) ((int)((unsigned int)(val)))
#define CONCAT44(hi, lo) (((unsigned long long)(hi) << 32) | (unsigned int)(lo))

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm32/5-1/5-1_clang_Os_no_g
 * Processor: ARM
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* C++ namespace stubs */
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

extern "C" int __cxa_atexit(void (*func)(void), void *arg, void *dso_handle);
extern void *__dso_handle;

/* Function: _GLOBAL__sub_I_5_1.cpp @ 00010958 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 /* C++ static initialization stub - simplified for C compatibility */
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



/* Container class structures for int and double */
struct Container_int {
    int data[10];
    int size;
};

struct Container_double {
    double data[10];
    int size;
};

/* LifecycleClass stub definition */
class LifecycleClass {
public:
    static int instance_count;
};

int LifecycleClass::instance_count = 0;

/* Function: test_cpp_constructor @ 00010b64 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}



/* Base class definition */
class Base {
public:
    virtual ~Base() {}
    virtual void func() {}
};

/* Function: call_virtual_func @ 00010b80 */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 /* WARNING: Could not recover jumptable at 0x00010b88. Too many branches */
 /* WARNING: Treating indirect jump as call */
 (*(code *)**(undefined4 **)param_1)();
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



/* C++ exception handling declarations */
extern "C" void* __cxa_allocate_exception(size_t size);
extern "C" void __cxa_throw(void* exc, void* typeinfo, void* dest);

/* Function: test_cpp_exception @ 00010bc8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

undefined4 test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,0,0);
 return 0;
}



/* Function: test_cpp_smart_ptr @ 00010c98 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

undefined4 test_cpp_smart_ptr(void)

{
 return 0x2bf;
}



/* C++ operator declarations */
void* operator_new(size_t size);
void operator_delete(void* ptr);

/* C++ operator definitions */
void* operator_new(size_t size) {
    return (void*)0;
}

void operator_delete(void* ptr) {
    (void)ptr;
}

/* C++ exception handling declarations */
extern "C" void* __cxa_allocate_exception(size_t size);
extern "C" void __cxa_throw(void* exc, void* typeinfo, void* dest);

/* RTTI external declarations */
void* PTR__RTTIBase_00021ed8 = 0;
void* PTR__RTTIBase_00021eec = 0;
void* RTTIBase_typeinfo = 0;
void* RTTIDerivedA_typeinfo = 0;
void* RTTIDerivedB_typeinfo = 0;
extern "C" void* __dynamic_cast(void* src, void* src_type, void* dst_type, int flags);

/* RTTI class definitions */
class RTTIBase {
public:
    virtual ~RTTIBase();
    virtual int getType() const;
};

class RTTIDerivedA : public RTTIBase {
public:
    virtual ~RTTIDerivedA();
    virtual int getType() const;
};

class RTTIDerivedB : public RTTIBase {
public:
    virtual ~RTTIDerivedB();
    virtual int getType() const;
};

/* Function: test_cpp_rtti @ 00010ca4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 undefined4 *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 
 puVar1 = (undefined4*)operator_new(4);
 *puVar1 = (undefined4)PTR__RTTIBase_00021ed8;
 piVar2 = (int*)operator_new(4);
 *piVar2 = (int)PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,RTTIBase_typeinfo,RTTIDerivedA_typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,RTTIBase_typeinfo,RTTIDerivedB_typeinfo,0);
 operator_delete(puVar1);
 (*(void (**)(void))(*piVar2 + 4))();
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}



/* External data declarations */
char DAT_00011294[] = "Testing C++ OO features";
char DAT_0001113d[] = "strlen result: %d\n";
char DAT_0001115b[] = "constructor result: %d\n";
char DAT_00011177[] = "virtual func result: %d\n";
char DAT_00011193[] = "multiple inheritance result: %d\n";
char DAT_000111af[] = "diamond inheritance result: %d\n";
char DAT_000111cc[] = "operator overload result: %d\n";
char DAT_000111e8[] = "template func result: %d\n";
char DAT_00011204[] = "template class result: %d\n";
char DAT_00011220[] = "lambda result: %d\n";
char DAT_0001123c[] = "exception result: %d\n";
char DAT_00011259[] = "smart ptr result: %d\n";
char DAT_00011276[] = "rtti result: %d\n";

/* Function: test_cpp_oo_features @ 00010d70 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

void test_cpp_oo_features(void)

{
 size_t sVar1;
 undefined4 uVar2;
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
 
 puts((const char*)&DAT_00011294);
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
 printf((const char*)&DAT_0001113d,sVar1 + 0x125c);
 printf((const char*)&DAT_0001115b,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf((const char*)&DAT_00011177,0x2a);
 printf((const char*)&DAT_00011193,0x47);
 printf((const char*)&DAT_000111af,0x28a);
 printf((const char*)&DAT_000111cc,0x16);
 printf((const char*)&DAT_000111e8,0x27);
 printf((const char*)&DAT_00011204,0x10);
 printf((const char*)&DAT_00011220,0x55);
 uVar2 = test_cpp_exception();
 printf((const char*)&DAT_0001123c,uVar2);
 printf((const char*)&DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf((const char*)&DAT_00011276,uVar2);
 return;
}



/* Function: main @ 00010ef4 */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: template_max_int @ 00010f08 */

/* int template_max_int(int, int) */

int template_max_int(int param_1,int param_2)

{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}



/* External ARM ABI function declaration */
extern "C" int __aeabi_dcmpgt(int, int, int, int);

/* Function: template_max_double @ 00010f14 */

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00010f28 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* double template_max_double(double, double) */

double template_max_double(double param_1,double param_2)

{
 int cmp_result = __aeabi_dcmpgt(SUB84(param_1,0),(int)((ulonglong)param_1 >> 0x20),SUB84(param_2,0),(int)((ulonglong)param_2 >> 0x20));
 if (cmp_result > 0) {
  return param_1;
 }
 return param_2;
}



/* Function: template_swap_int @ 00010f48 */

/* void template_swap_int(int&, int&) */

void template_swap_int(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container_int @ 00010f5c */

/* Container_int::Container_int() */

void Container_int_Constructor(struct Container_int *this_ptr)

{
 *(undefined4 *)((char *)this_ptr + 0x28) = 0;
 return;
}



/* Function: push_int @ 00010f68 */

/* Container_int::push(int) */

void Container_int_push(struct Container_int *this_ptr, int param_1)

{
 int iVar1;
 
 iVar1 = *(int *)((char *)this_ptr + 0x28);
 if (iVar1 < 10) {
 *(int *)((char *)this_ptr + 0x28) = iVar1 + 1;
 *(int *)((char *)this_ptr + iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get_int @ 00010f80 */

/* Container_int::get(int) const */

undefined4 Container_int_get(struct Container_int *this_ptr,int param_1)

{
 undefined4 uVar1;
 
 uVar1 = 0;
 if (param_1 < 0) {
 return 0;
 }
 if (param_1 < *(int *)((char *)this_ptr + 0x28)) {
 uVar1 = *(undefined4 *)((char *)this_ptr + param_1 * 4);
 }
 return uVar1;
}



/* Function: getSize_int @ 00010fa0 */

/* Container_int::getSize() const */

undefined4 Container_int_getSize(struct Container_int *this_ptr)

{
 return *(undefined4 *)((char *)this_ptr + 0x28);
}



/* Function: Container_double @ 00010fa8 */

/* Container_double::Container_double() */

void Container_double_Constructor(struct Container_double *this_ptr)

{
 *(undefined4 *)((char *)this_ptr + 0x50) = 0;
 return;
}



/* Function: push_double @ 00010fb4 */

/* Container_double::push(double) */

undefined4 Container_double_push(struct Container_double *this_ptr, double param_1)

{
 undefined4 *puVar1;
 int iVar2;
 
 iVar2 = *(int *)((char *)this_ptr + 0x50);
 if (9 < iVar2) {
 return SUB84(param_1,0);
 }
 puVar1 = (undefined4 *)((char *)this_ptr + iVar2 * 8);
 *puVar1 = SUB84(param_1,0);
 puVar1[1] = (undefined4)((ulonglong)param_1 >> 0x20);
 *(int *)((char *)this_ptr + 0x50) = iVar2 + 1;
 return SUB84(param_1,0);
}



/* Function: get_double @ 00010fd8 */

/* Container_double::get(int) const */

undefined8 Container_double_get(struct Container_double *this_ptr, int param_1)

{
 undefined4 uVar1;
 undefined4 uVar2;
 
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)((char *)this_ptr + 0x50)) {
 uVar1 = *(undefined4 *)((char *)this_ptr + param_1 * 8);
 uVar2 = *(undefined4 *)((char *)this_ptr + param_1 * 8 + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}



/* Function: getSize_double @ 00011004 */

/* Container_double::getSize() const */

undefined4 Container_double_getSize(struct Container_double *this_ptr)

{
 return *(undefined4 *)((char *)this_ptr + 0x50);
}



/* Function: RTTIDerivedA_destructor @ 0001100c */

/* RTTIDerivedA::~RTTIDerivedA() */

void RTTIDerivedA_destructor(RTTIDerivedA *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedA_getType @ 00011010 */

/* RTTIDerivedA::getType() const */

undefined4 RTTIDerivedA_getType_func(void)

{
 return 1;
}



/* Function: RTTIBase_destructor @ 00011018 */

/* RTTIBase::~RTTIBase() */

RTTIBase * RTTIBase_destructor(RTTIBase *this_ptr)

{
 return this_ptr;
}



/* Function: RTTIDerivedB_destructor @ 0001101c */

/* RTTIDerivedB::~RTTIDerivedB() */

void RTTIDerivedB_destructor(RTTIDerivedB *this_ptr)

{
 operator_delete(this_ptr);
 return;
}



/* Function: RTTIDerivedB_getType @ 00011020 */

/* RTTIDerivedB::getType() const */

undefined4 RTTIDerivedB_getType_func(void)

{
 return 2;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 39 */
