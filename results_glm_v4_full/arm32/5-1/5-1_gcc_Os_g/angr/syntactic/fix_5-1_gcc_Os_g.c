// Angr Decompilation of 5-1_gcc_Os_g
// Platform: ARMEL

#include <cstddef>
#include <stdint.h>
#include <cstring>
#include <cstdint>
#include <new>

/* Function declarations for missing functions */
void __stack_chk_fail(void);
void abort(void);
char armg_calculate_condition(int, unsigned int, int, int);
void* __cxa_begin_catch(void);
void __cxa_end_catch(void);
void __cxa_end_cleanup(void);
void __cxa_rethrow(void*);
int __aeabi_atexit(void* object, void* destructor, void* dso_handle);
size_t strlen(const char *s);
void* operator new(size_t size);
void* operator new[](size_t size);
void operator delete(void* ptr);
void operator delete[](void* ptr);
void* __cxa_allocate_exception(size_t size);
void __cxa_throw(void* exception, void* type_info, void (*dest)(void*));
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int __aeabi_dcmpgt(void);

/* Dummy destructor function for __cxa_throw */
static void dummy_destructor(void* ptr) { (void)ptr; }

/* Forward declarations */
class DiamondDerived {
public:
 static void func();
 static void destructor();
 static void base_destructor();
};

/* Forward declarations for template functions */
int template_max_int(int arg_0, int arg_1);
double template_max_double(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3);
void template_swap_int(int *ptr, int *p);
int __aeabi_d2iz(unsigned int a0, unsigned int a1);

/* Forward declarations for Container template class */
void Container_int_Constructor(void);
void Container_int_push(void *ptr, int arg_0);

/* Forward declaration for Base class */
struct Base {
 void* vtable; /* virtual function table pointer */
 Base& operator=(unsigned int val) { vtable = (void*)(uintptr_t)val; return *this; }
};

void test_cpp_oo_features();

/* Forward declarations for C++ std library compatibility */
namespace std {
  class ios_base {
  public:
    class Init {
    public:
      Init(void*);
      ~Init();
    };
  };
}

/* CRT stub function _init removed by preprocessor */



// Function: sub_109bc at 0x109bc
extern unsigned int g_22008;

int sub_109bc()
{
 unsigned int v1; // lr
 unsigned int v0; // [bp-0x4]

 v0 = v1;
 return 0;
}


// Function: _Z18test_cpp_exceptionv at 0x10b08
extern unsigned int _ZTIi;
extern unsigned int _ZTIZ18test_cpp_exceptionvE16DerivedException;

void test_cpp_exception()
{
 int *ptr; // r0
 unsigned int flag1; // r1
 unsigned int v6; // r2
 unsigned int v7; // r3
 unsigned int result; // r4
 void *v10; // r0
 char v0; // [bp-0x10]
 char v1; // [bp-0xc]
 char v2; // [bp-0x8]
 char v3; // [bp-0x4]

 ptr = (int*)__cxa_allocate_exception(4);
 *(ptr) = 42;
 __cxa_throw(ptr, (void*)(uintptr_t)0x21e70, dummy_destructor);
 if (flag1 != 1)
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 goto LABEL_10b38;
 }
 else
 {
 if (!((char)armg_calculate_condition(18, flag1, 1, 0)))
 {
LABEL_10b38:
 result = flag1;
 __cxa_rethrow(__cxa_begin_catch());
 __cxa_end_catch();
 return;
 }
 }
 if (result == 1)
 goto LABEL_10b60;
 while (true)
 {
 __cxa_end_cleanup();
 return;
LABEL_10b60:
 v10 = __cxa_begin_catch();
 __cxa_end_catch();
 __cxa_throw((void*)__cxa_allocate_exception((size_t)result), (void*)(uintptr_t)0x11c88, dummy_destructor);
 if (flag1 == 2)
 {
 __cxa_begin_catch();
 __cxa_end_catch();
 return;
 }
 else if (flag1 == 3)
 {
 __cxa_begin_catch();
 __cxa_end_catch();
 return;
 }
 }
}


// Function: main at 0x10bbc
int main()
{
 test_cpp_oo_features();
 return 0;
}


// Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv at 0x10bcc
extern std::ios_base::Init _ZStL8__ioinit;
extern unsigned int __dso_handle;

int _GLOBAL__sub_I__Z20test_cpp_member_funcv()
{
 unsigned int v0; // r0

 new (&_ZStL8__ioinit) std::ios_base::Init((void*)0);
 v0 = (unsigned int)(uintptr_t)__aeabi_atexit((void*)0x22098, (void*)std::ios_base::Init::~Init, (void*)0x2208c);
 return (int)__aeabi_atexit((void*)0x22098, (void*)std::ios_base::Init::~Init, (void*)0x2208c);
}



/* CRT stub function _start removed by preprocessor */



// Function: sub_10c34 at 0x10c34
void sub_10c34()
{
 abort(); /* do not return */
}



/* CRT stub function call_weak_fn removed by preprocessor */




/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



// Function: _Z20test_cpp_member_funcv at 0x10cf4
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_member_func()
{
 unsigned int v4; // lr
 char v0[31]; // [bp-0x2c]
 char result; // [bp-0xd]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 strncpy((char*)&v0, "Test", 31);
 result = 0;
 strlen((const char*)&v0);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_constructorv at 0x10d60
void test_cpp_constructor()
{
 return;
}


// Function: _Z17call_virtual_funcP4Basei at 0x10d7c
void call_virtual_func(class Base *arg_0, int arg_1)
{
 goto *((void **)*((void **)arg_0));
}


// Function: _Z21test_cpp_virtual_funcv at 0x10d88

extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11af0;
extern Base g_11b08;

void test_cpp_virtual_func()
{
 unsigned int v5; // r3
 unsigned int v6; // r2
 unsigned int v7; // r1
 Base v8; // r0
 unsigned int v1; // [bp-0x18]
 Base v2; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = v5;
 v3 = v6;
 v2 = v7;
 *(unsigned int*)&v1 = *(unsigned int*)&v8;
 v4 = __glibc___stack_chk_guard;
 v1 = 72432;
 *((unsigned int *)&v2) = 72456;
 v3 = 3;
 call_virtual_func((Base*)&v1, 5);
 call_virtual_func((Base*)&v2, 5);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z29test_cpp_multiple_inheritancev at 0x10e08
void test_cpp_multiple_inheritance()
{
 return;
}


// Function: _Z26test_cpp_operator_overloadv at 0x10e10
void test_cpp_operator_overload()
{
 return;
}


// Function: _Z22test_cpp_template_funcv at 0x10e18
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_func()
{
 unsigned int v6; // r3
 unsigned int v7; // r2
 unsigned int v8; // r1
 unsigned int v9; // r0
 unsigned int v10; // r0
 unsigned int v0; // [bp-0x20]
 unsigned int v2; // [bp-0x1c]
 unsigned int v4; // [bp-0x18]
 unsigned int v5; // [bp-0x14]

 v5 = v6;
 v4 = v7;
 v2 = v8;
 v0 = v9;
 v5 = __glibc___stack_chk_guard;
 template_max_int(3, 7);
 v10 = template_max_double(0, 0x40040000, 0, 0x3ff80000);
 v2 = 10;
 v4 = 20;
 template_swap_int(&v2, &v4);
 __aeabi_d2iz(v10, v8);
 if (!(v5 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z23test_cpp_template_classv at 0x10ec0
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_template_class()
{
 unsigned int v4; // lr
 unsigned int v0; // [bp-0x38]
 unsigned int result; // [bp-0x10]
 unsigned int v2; // [bp-0xc]
 unsigned int v3; // [bp-0x4]

 v3 = v4;
 v2 = __glibc___stack_chk_guard;
 result = 1;
 v0 = 10;
 Container_int_push(&v0, 20);
 Container_int_push(&v0, 30);
 if (!(v2 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z15test_cpp_lambdav at 0x10f40
void test_cpp_lambda()
{
 return;
}


// Function: _Z13test_cpp_rttiv at 0x10f48
extern char _ZTI12RTTIDerivedA;
extern char g_11c68;
extern char g_11c7c;

void test_cpp_rtti()
{
 unsigned int *p; // r6
 unsigned int *ptr; // r5
 unsigned int result; // r0
 char *cur; // r0

 p = (unsigned int*)operator new(4);
 *((int*)p) = (int)(uintptr_t)72808;
 ptr = (unsigned int*)operator new(4);
 *((int*)ptr) = (int)(uintptr_t)72828;
 {
 uintptr_t p_val = (uintptr_t)*(p);
 std::type_info* ti1 = (std::type_info*)*((void**)((void*)p_val + 4));
 std::type_info* ti2 = (std::type_info*)(uintptr_t)0x11ac0;
 result = (unsigned int)(ti1 == ti2);
 }
 if (result)
 {
 if (!armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f9a;
LABEL_10f99:
 ;
 }
 else
 {
 if (armg_calculate_condition(2, result, 0, 0))
 goto LABEL_10f99;
LABEL_10f9a:
 ;
 }
 {
 uintptr_t p_val = (uintptr_t)*(p);
 uintptr_t vtbl_val = ((uintptr_t*)p_val)[4];
 cur = (char *)*((void**)((char*)vtbl_val + 4));
 }
 if (*(cur) == 42)
 cur += 1;
 strlen((char*)cur);
 {
 uintptr_t p_val = (uintptr_t)*(p);
 ((void (*)(void**))((uint32_t*)p_val)[4])((void**)p);
 }
 {
 uintptr_t ptr_val = (uintptr_t)*(ptr);
 ((void (*)(void**))((uint32_t*)ptr_val)[4])((void**)ptr);
 }
 return;
}


// Function: _Z18test_cpp_smart_ptrv at 0x11038
extern unsigned int __glibc___stack_chk_guard;

void test_cpp_smart_ptr()
{
 unsigned int v6; // lr
 unsigned int v7; // r4
 unsigned int v8; // r3
 unsigned int v9; // r2
 unsigned int v10; // r1
 unsigned int v11; // r0
 unsigned int *addr; // r0
 unsigned int *ptr; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int *v1; // [bp-0x14], Other Possible Types: unsigned int
 unsigned int *p; // [bp-0x10], Other Possible Types: unsigned int
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 *p = (unsigned int)(uintptr_t)(void*)v9;
 v1 = (unsigned int*)(uintptr_t)(void*)v10;
 v0 = (unsigned int)(uintptr_t)(void*)v11;
 v3 = __glibc___stack_chk_guard;
 addr = (unsigned int*)operator new(4);
 *addr = 200;
 v1 = addr;
 v0 = 0;
 ptr = (unsigned int*)operator new[](20);
 ptr[0] = 1;
 ptr[1] = 2;
 ptr[2] = 3;
 ptr[3] = 4;
 ptr[4] = 5;
 if (!(v3 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: sub_110c4 at 0x110c4
int sub_110c4(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5, unsigned int a6, unsigned int a7, unsigned int a8, unsigned int a9)
{
 unsigned int v0; // r0

 __cxa_end_cleanup();
 return 0;
}


// Function: _Z28test_cpp_diamond_inheritancev at 0x110ec
extern unsigned int __glibc___stack_chk_guard;
extern unsigned int g_11c20;
extern unsigned int g_11c38;
extern unsigned int g_11c54;

void test_cpp_diamond_inheritance()
{
 unsigned int v0; // [bp-0x24]
 unsigned int v1; // [bp-0x1c]
 unsigned int v2; // [bp-0x14]
 unsigned int v3; // [bp-0x10]
 unsigned int v4; // [bp-0xc]

 v4 = __glibc___stack_chk_guard;
 v0 = 72736;
 v1 = 72760;
 v2 = 72788;
 v3 = 50;
 ((void (*)(unsigned int*))(uintptr_t)72788)(&v2);
 v3 = 100;
 ((void (*)(unsigned int*))(uintptr_t)72788)(&v2);
 if (!(v4 ^ __glibc___stack_chk_guard))
 return;
 __stack_chk_fail(); /* do not return */
}


// Function: _Z20test_cpp_oo_featuresv at 0x1117c
extern char g_11866;
extern char g_1188a;
extern char g_118a8;
extern char g_118c4;
extern char g_118e0;
extern char g_118fc;
extern char g_11919;
extern char g_11935;
extern char g_11951;
extern char g_1196d;
extern char g_11989;
extern char g_119a6;
extern char g_119c3;

void test_cpp_oo_features()
{
 puts((const char*)(uintptr_t)0x11866);
 test_cpp_member_func();
 __printf_chk(1, (const char*)(uintptr_t)0x1188a);
 test_cpp_constructor();
 __printf_chk(1, (const char*)(uintptr_t)0x118a8);
 test_cpp_virtual_func();
 __printf_chk(1, (const char*)(uintptr_t)0x118c4);
 test_cpp_multiple_inheritance();
 __printf_chk(1, (const char*)(uintptr_t)0x118e0);
 test_cpp_diamond_inheritance();
 __printf_chk(1, (const char*)(uintptr_t)0x118fc);
 test_cpp_operator_overload();
 __printf_chk(1, (const char*)(uintptr_t)0x11919);
 test_cpp_template_func();
 __printf_chk(1, (const char*)(uintptr_t)0x11935);
 test_cpp_template_class();
 __printf_chk(1, (const char*)(uintptr_t)0x11951);
 test_cpp_lambda();
 __printf_chk(1, (const char*)(uintptr_t)0x1196d);
 test_cpp_exception();
 __printf_chk(1, (const char*)(uintptr_t)0x11989);
 test_cpp_smart_ptr();
 __printf_chk(1, (const char*)(uintptr_t)0x119a6);
 test_cpp_rtti();
 __printf_chk(1, (const char*)(uintptr_t)0x119c3);
 return;
}


// Function: _ZN4Base12virtual_funcEi at 0x112b0
void Base_virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK4Base7getNameEv at 0x112b8
void Base_getName()
{
 return;
}


// Function: _ZN4BaseD1Ev at 0x112c4
void Base_destructor()
{
 return;
}


// Function: _ZN7Derived12virtual_funcEi at 0x112c8
void Derived_virtual_func(int arg_0)
{
 return;
}


// Function: _ZNK7Derived7getNameEv at 0x112d4
void Derived_getName()
{
 return;
}


// Function: _ZN12MultiDerived5funcAEv at 0x112e0
void MultiDerived_funcA()
{
 return;
}


// Function: _ZN12MultiDerived5funcBEv at 0x112e8
void MultiDerived_funcB()
{
 return;
}


// Function: _ZThn8_N12MultiDerived5funcBEv at 0x112f0
void* non-virtual thunk to MultiDerived::funcB()()
{
 return (void*)(uintptr_t)40;
}


// Function: _ZN11VirtualBase4funcEv at 0x112f8
void VirtualBase_func()
{
 return;
}


// Function: _ZN11VirtualBaseD2Ev at 0x11300
void VirtualBase_destructor()
{
 return;
}


// Function: _ZN7MiddleA4funcEv at 0x11304
int MiddleA_func(void* arg_0)
{
 (void)arg_0;
 return 0;
}


// Function: _ZTv0_n12_N7MiddleA4funcEv at 0x1131c
int _ZTv0_n12_N7MiddleA4funcEv(void* *a0)
{
 void* vtbl = (void*)(uintptr_t)*(a0);
 unsigned int offset = ((unsigned int *)((unsigned char *)vtbl))[12];
 MiddleA_func((void*)((char *)a0 + offset));
 return 0;
}


// Function: _ZN7MiddleB4funcEv at 0x11330
int MiddleB_func(void* arg_0)
{
 (void)arg_0;
 return 0;
}


// Function: _ZTv0_n12_N7MiddleB4funcEv at 0x11348
int _ZTv0_n12_N7MiddleB4funcEv(void* *a0)
{
 MiddleB_func((void*)((char *)a0 + ((unsigned int *)((unsigned char *)((void*)(uintptr_t)*(a0))))[12]));
 return 0;
}


// Function: _ZN14DiamondDerived4funcEv at 0x1135c
int DiamondDerived_func(void* arg_0)
{
 (void)arg_0;
 return 0;
}


// Function: _ZTv0_n12_N14DiamondDerived4funcEv at 0x11374
int _ZTv0_n12_N14DiamondDerived4funcEv(void* *a0)
{
 void* vtbl = (void*)(uintptr_t)*(a0);
 unsigned int offset = ((unsigned int *)((unsigned char *)vtbl))[12];
 DiamondDerived_func((char *)a0 + offset);
 return 0;
}


// Function: _ZThn8_N14DiamondDerived4funcEv at 0x11388
int _ZThn8_N14DiamondDerived4funcEv(void* a0)
{
 DiamondDerived_func(a0 - 8);
 return 0;
}


// Function: _ZN7MiddleAD1Ev at 0x11390
extern char g_11b2c;
extern char g_11b48;

void MiddleA_destructor()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleAD1Ev at 0x113a8
extern char g_11b2c;
extern char g_11b48;

void* _ZTv0_n16_N7MiddleAD1Ev(void* *a0)
{
 void* vtbl = (void*)(uintptr_t)*(a0);
 unsigned int offset = ((unsigned int *)((unsigned char *)vtbl))[16];
 void* v0 = (void*)((char*)a0 + offset);
 *((unsigned int *)((uintptr_t)((char *)a0 + offset))) = 72492;
 *((unsigned int *)(8 + (char *)a0 + offset)) = 72520;
 return v0;
}


// Function: _ZN7MiddleBD1Ev at 0x113d0
extern char g_11b68;
extern char g_11b84;

void MiddleB_destructor()
{
 return;
}


// Function: _ZTv0_n16_N7MiddleBD1Ev at 0x113e8
extern char g_11b68;
extern char g_11b84;

void* _ZTv0_n16_N7MiddleBD1Ev(void* a0)
{
 void* vtbl = *(void**)a0;
 unsigned int offset = ((unsigned int *)((unsigned char *)vtbl))[16];
 void* v0 = (void*)((char*)a0 + offset);
 *((unsigned int *)((char *)a0 + offset)) = 72552;
 *((unsigned int *)(8 + (char *)a0 + offset)) = 72580;
 return v0;
}


// Function: _ZNK12RTTIDerivedA7getTypeEv at 0x11410
void RTTIDerivedA_getType()
{
 return;
}


// Function: _ZNK12RTTIDerivedB7getTypeEv at 0x11418
void RTTIDerivedB_getType()
{
 return;
}


// Function: _ZN12RTTIDerivedBD1Ev at 0x11420
void RTTIDerivedB_destructor()
{
 return;
}


// Function: _ZN12RTTIDerivedAD1Ev at 0x11424
void RTTIDerivedA_destructor()
{
 return;
}


// Function: _ZN12MultiDerivedD1Ev at 0x11428
void MultiDerived_destructor()
{
 return;
}


// Function: _ZThn8_N12MultiDerivedD1Ev at 0x1142c
void* _ZThn8_N12MultiDerivedD1Ev(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZN7DerivedD2Ev at 0x11434
void Derived_destructor()
{
 return;
}


// Function: _ZN4BaseD0Ev at 0x11438
void Base_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZN7DerivedD0Ev at 0x11450
void Derived_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZN12MultiDerivedD0Ev at 0x11468
void MultiDerived_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZThn8_N12MultiDerivedD0Ev at 0x11480
void* _ZThn8_N12MultiDerivedD0Ev(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZN11VirtualBaseD0Ev at 0x11488
void VirtualBase_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZN12RTTIDerivedBD0Ev at 0x114a0
void RTTIDerivedB_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZN12RTTIDerivedAD0Ev at 0x114b8
void RTTIDerivedA_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZN7MiddleAD0Ev at 0x114d0
extern char g_11b2c;
extern char g_11b48;

void MiddleA_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZTv0_n16_N7MiddleAD0Ev at 0x114fc
void* _ZTv0_n16_N7MiddleAD0Ev(void* a0)
{
 return a0;
}


// Function: _ZN7MiddleBD0Ev at 0x11510
extern char g_11b68;
extern char g_11b84;

void MiddleB_deleting_destructor(void *ptr)
{
 operator delete(ptr);
 return;
}


// Function: _ZTv0_n16_N7MiddleBD0Ev at 0x1153c
void* _ZTv0_n16_N7MiddleBD0Ev(void* a0)
{
 return a0;
}


// Function: _ZN7MiddleAD2Ev at 0x11550
typedef struct MiddleAD2_struct {
 void* field_0;
 unsigned int field_4;
} MiddleAD2_struct;

int MiddleA_D2(void* p)
{
 void* vtbl = *((void* *)p);
 unsigned int offset = ((unsigned int *)((unsigned char *)vtbl))[12];
 *((unsigned int *)((char *)p + offset)) = 0;
 return 0;
}


// Function: _ZN7MiddleBD2Ev at 0x11568
typedef struct MiddleBD2_struct {
 void* field_0;
 unsigned int field_4;
} MiddleBD2_struct;

int MiddleB_D2(void* p)
{
 void* vtbl = *((void* *)p);
 unsigned int offset = ((unsigned int *)((unsigned char *)vtbl))[12];
 *((unsigned int *)((char *)p + offset)) = 0;
 return 0;
}


// Function: _Z12template_maxIiET_S0_S0_ at 0x11580
int template_max_int(int arg_0, int arg_1)
{
 if (arg_0 >= arg_1)
 return arg_0;
 return arg_1;
}


// Function: _Z12template_maxIdET_S0_S0_ at 0x1158c
double template_max_double(unsigned int a0, unsigned int a1, unsigned int a2, unsigned int a3)
{
 unsigned int v6; // lr
 unsigned int v7; // r8
 unsigned int v8; // r7
 unsigned int v9; // r6
 unsigned int v10; // r5
 unsigned int v11; // r4
 unsigned int result; // r0
 unsigned int v0; // [bp-0x18]
 unsigned int v1; // [bp-0x14]
 unsigned int v2; // [bp-0x10]
 unsigned int v3; // [bp-0xc]
 unsigned int v4; // [bp-0x8]
 unsigned int v5; // [bp-0x4]

 v5 = v6;
 v4 = v7;
 v3 = v8;
 v2 = v9;
 v1 = v10;
 v0 = v11;
 result = __aeabi_dcmpgt();
 if (!result)
 {
 return 0.0;
 }
 return 0.0;
}


// Function: _Z13template_swapIiEvRT_S1_ at 0x115bc
void template_swap_int(int *ptr, int *p)
{
 int v0; // r3

 v0 = *(ptr);
 *(ptr) = *(p);
 *(p) = v0;
}


// Function: _ZN9ContainerIiEC2Ev at 0x115d0
void Container_int_Constructor(void)
{
 return;
}


// Function: _ZN9ContainerIiE4pushEi at 0x115dc
void Container_int_push(void *ptr, int arg_0)
{
 return;
}


// Function: _ZNK9ContainerIiE3getEi at 0x115f4
void Container_int_get(void *ptr, int arg_0)
{
 if (arg_0 < 0)
 return;
 return;
}


// Function: _ZNK9ContainerIiE7getSizeEv at 0x11618
void Container_int_getSize(void)
{
 return;
}


// Function: _ZN9ContainerIdEC1Ev at 0x11620
void Container_double_Constructor(void)
{
 return;
}


// Function: _ZN9ContainerIdE4pushEd at 0x1162c
void Container_double_push(void *ptr, double arg_0)
{
 return;
}


// Function: _ZNK9ContainerIdE3getEi at 0x1164c
double Container_double_get(void *ptr, int arg_0)
{
 if (arg_0 < 0)
 return 0.0;
 return 0.0;
}


// Function: _ZNK9ContainerIdE7getSizeEv at 0x11678
void Container_double_getSize(void)
{
 return;
}


// Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED1Ev at 0x11680
void std_unique_ptr_int_destructor(void *this_ptr)
{
 if (*((int *)this_ptr))
 operator delete(*((int *)this_ptr));
 return;
}


// Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev at 0x116a4
void std_unique_ptr_array_int_destructor(void *this_ptr)
{
 if (*((int *)this_ptr))
 operator delete[](*((int *)this_ptr));
 return;
}


// Function: _ZN14DiamondDerivedD4Ev at 0x116c4

int DiamondDerived_D4(void* ptr)
{
 void* v0; // r3
 unsigned int result; // r1

 v0 = (void*)(uintptr_t)72736;
 *((unsigned int *)ptr) = (unsigned int)(uintptr_t)v0;
 if (result)
 v0 = (void*)(uintptr_t)(uintptr_t)0x10;
 *((unsigned int *)((char *)ptr + ((unsigned int *)v0)[12])) = 72788;
 *((unsigned int *)((char *)ptr + 8)) = 72760;
 if (result)
 return 0;
 return 0;
}


// Function: _ZN14DiamondDerivedD1Ev at 0x11748
int DiamondDerived_destructor()
{
 return 0;
}


// Function: _ZThn8_N14DiamondDerivedD1Ev at 0x11754
void* _ZThn8_N14DiamondDerivedD1Ev(void* a0)
{
 return (void*)((uintptr_t)((char*)a0 - 8));
}


// Function: _ZTv0_n16_N14DiamondDerivedD1Ev at 0x1175c
void* _ZTv0_n16_N14DiamondDerivedD1Ev(void* a0)
{
 void* vtbl = *(void**)a0;
 int v0 = ((int *)((unsigned char *)vtbl))[16];
 return (void*)((char *)a0 + (intptr_t)(uintptr_t)v0);
}


// Function: _ZN14DiamondDerivedD0Ev at 0x11770
void DiamondDerived_deleting_destructor(void *ptr)
{
 operator delete(ptr);
}


// Function: _ZThn8_N14DiamondDerivedD0Ev at 0x11790
void* _ZThn8_N14DiamondDerivedD0Ev(void* a0)
{
 return (void*)((char*)a0 - 8);
}


// Function: _ZTv0_n16_N14DiamondDerivedD0Ev at 0x11798
void* _ZTv0_n16_N14DiamondDerivedD0Ev(void* a0)
{
 void* vtbl = *(void**)a0;
 int v0 = ((int *)((unsigned char *)vtbl))[16];
 return (void*)((char *)a0 + (intptr_t)(uintptr_t)v0);
}


// Function: _ZN14DiamondDerivedD2Ev at 0x117ac
int DiamondDerived_base_destructor(void* p)
{
 (void)p;
 return 0;
}



/* CRT stub function _fini removed by preprocessor */


