/* Auto-injected type definitions by preprocessor */
#include <stdarg.h>

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

// Forward declarations
int main(void);

// Global variables
char completed_0;
char DAT_00011294[] = "Testing C++ OO Features:\n";
char DAT_0001113d[] = "test_cpp_member_func: %d\n";
char DAT_0001115b[] = "test_cpp_constructor: %d\n";
char DAT_00011177[] = "test_cpp_virtual_func: %d\n";
char DAT_00011193[] = "test_cpp_multiple_inheritance: %d\n";
char DAT_000111af[] = "test_cpp_diamond_inheritance: %d\n";
char DAT_000111cc[] = "test_cpp_operator_overload: %d\n";
char DAT_000111e8[] = "test_cpp_template_func: %d\n";
char DAT_00011204[] = "test_cpp_template_class: %d\n";
char DAT_00011220[] = "test_cpp_lambda: %d\n";
char DAT_0001123c[] = "test_cpp_exception: %d\n";
char DAT_00011259[] = "test_cpp_smart_ptr: %d\n";
char DAT_00011276[] = "test_cpp_rtti: %d\n";

// Class declarations
class Base {};

// RTTI typeinfo declarations
namespace {
    extern void* PTR__RTTIBase_00021ed8;
    extern void* PTR__RTTIBase_00021eec;
    char RTTIBase_typeinfo[8];
    char RTTIDerivedA_typeinfo[8];
    char RTTIDerivedB_typeinfo[8];
}
namespace RTTIBase { extern char typeinfo[8]; }
namespace RTTIDerivedA { extern char typeinfo[8]; }
namespace RTTIDerivedB { extern char typeinfo[8]; }

class LifecycleClass {
public:
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// External declarations
extern void *__dso_handle;
extern void call_weak_fn(void);
extern int __cxa_atexit(void (*func)(void *), void *arg, void *dso);

// std::ios_base::Init declaration
namespace std {
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

// printf declaration
extern "C" int printf(const char *format, ...);

// Definition of __ioinit
std::ios_base::Init __ioinit;

// Function: _init @ 0x10848
void _init(void *ctx)
{
 call_weak_fn();
 return;
}

// Function: <EXTERNAL>::malloc @ 0x10868
extern "C" void *malloc(unsigned int size);

// Function: <EXTERNAL>::operator.new @ 0x10868
void *operator_new(unsigned int size)
{
 return malloc(size);
}

// External linkage for standard library functions
extern "C" {
int printf(const char *format, ...);
void *malloc(unsigned int size);
void free(void *ptr);
int puts(const char *__s);
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x10874
void * __cxa_begin_catch_external(void);

void * __cxa_begin_catch(void)
{
 return (void *)__cxa_begin_catch_external();
}

// Function: <EXTERNAL>::malloc @ 0x10868
extern "C" void *malloc(unsigned int size);

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x10880
void * __cxa_allocate_exception(unsigned int size)
{
 void *ptr = malloc(size);
 return ptr;
}

// Function: <EXTERNAL>::printf @ 0x1088c
// Stub implementation - basic printf handling
extern "C" int printf(const char *format, ...)
{
    // Very minimal stub - in real code would parse format string
    va_list args;
    va_start(args, format);
    
    // Simple implementation for string literals with %d and %s
    const char *p = format;
    int result = 0;
    
    while (*p) {
        if (*p == '%' && *(p+1) == 's') {
            const char *s = va_arg(args, const char *);
            while (*s) { putchar(*s); s++; result++; }
            p += 2;
        } else if (*p == '%' && *(p+1) == 'd') {
            int d = va_arg(args, int);
            char buf[32];
            int i = 0;
            if (d < 0) { putchar('-'); result++; d = -d; }
            if (d == 0) { putchar('0'); result++; }
            else {
                while (d > 0) {
                    buf[i++] = '0' + (d % 10);
                    d /= 10;
                }
                while (i > 0) { putchar(buf[--i]); result++; }
            }
            p += 2;
        } else {
            putchar(*p);
            p++;
            result++;
        }
    }
    
    va_end(args);
    return result;
}

// Stub putchar
extern "C" int putchar(int c) {
    // Minimal stub - would need platform-specific implementation
    return c;
}

// Function: <EXTERNAL>::puts @ 0x10898
// Uses extern "C" puts (need to declare)
extern "C" int puts(const char *__s);

// Function: <EXTERNAL>::__libc_start_main @ 0x108a4
extern void __libc_start_main_external(void (*main_func)(void), unsigned int param_2, void *stack, int zero1, int zero2, unsigned int param_1);

void __libc_start_main(void (*main_func)(void), unsigned int param_2, void *stack, int zero1, int zero2, unsigned int param_1)
{
 __libc_start_main_external(main_func, param_2, stack, zero1, zero2, param_1);
 return;
}

// Function: <EXTERNAL>::abort @ 0x108b0
void abort(void)
{
 while(1) {} // Stub - in real code would terminate program
}

// Function: <EXTERNAL>::operator.delete @ 0x108bc
void operator_delete(void *param_1)
{
 free(param_1);
 return;
}

// Function: <EXTERNAL>::__cxa_end_cleanup @ 0x108c8
void __cxa_end_cleanup(void)
{
 extern void __cxa_end_cleanup_external(void);
 __cxa_end_cleanup_external();
 return;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x108d4
void * __dynamic_cast(const void *ptr, const void *src_type, const void *dst_type, long adjust)
{
 // Stub implementation - actual RTTI cast would go here
 return (void *)0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x108ec
void __cxa_rethrow(void)
{
 extern void __cxa_rethrow_external(void);
 __cxa_rethrow_external();
 return;
}

// Function: <EXTERNAL>::strlen @ 0x108f8
size_t strlen(char *__s)
{
 // Stub implementation - compute length manually to avoid recursion
 size_t count = 0;
 char *p = __s;
 if (p) {
  while (*p) { count++; p++; }
 }
 return count;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x10904
std::ios_base::Init::Init()
{
 return;
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x10910
void __cxa_end_catch(void)
{
 extern void __cxa_end_catch_external(void);
 __cxa_end_catch_external();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x1091c
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x10928
void __cxa_throw(void)
{
 extern void __cxa_throw_external(void);
 __cxa_throw_external();
}

// Function: <EXTERNAL>::__aeabi_dcmpgt @ 0x10934
void __aeabi_dcmpgt(void)
{
 __aeabi_dcmpgt();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1094c
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}



// Function: _GLOBAL__sub_I_5_1.cpp @ 0x10958
void _GLOBAL__sub_I_5_1_cpp(void)
{
 // __ioinit is already defined globally, just register destructor
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x10994
void _start(unsigned int param_1,unsigned int param_2)
{
 void *stack0x00000004 = 0;
 __libc_start_main(main,param_2,&stack0x00000004,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x109d8
void call_weak_fn(void)
{
 extern void __gmon_start__(void);
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x109fc
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x10a40
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x10a90
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = 1;
 return;
 }
 return;
}

// Function: test_cpp_member_func @ 0x10afc
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
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

// Function: test_cpp_constructor @ 0x10b64
int test_cpp_constructor(void)
{
 return LifecycleClass::instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10b80
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)();
 return;
}

// Function: test_cpp_virtual_func @ 0x10b8c
unsigned int test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x10b94
unsigned int test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x10b9c
unsigned int test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x10ba8
unsigned int test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x10bb0
unsigned int test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x10bb8
unsigned int test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x10bc0
unsigned int test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x10bc8
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x10c98
unsigned int test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x10ca4
int test_cpp_rtti(void)
{
 unsigned int *puVar1;
 int *piVar2;
 int iVar3;
 int iVar4;
 int iVar5;
 puVar1 = (unsigned int *)operator_new(4);
 *puVar1 = &PTR__RTTIBase_00021ed8;
 piVar2 = (int *)operator_new(4);
 *piVar2 = (int)&PTR__RTTIBase_00021eec;
 iVar3 = (int)__dynamic_cast(puVar1,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 iVar4 = (int)__dynamic_cast(piVar2,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 operator_delete(puVar1);
 (**(void **)(*piVar2 + 4))(piVar2);
 iVar5 = 0x82;
 if (iVar3 == 0) {
 iVar5 = 0x1e;
 }
 if (iVar4 != 0) {
 iVar5 = iVar5 + 200;
 }
 return iVar5 + 0xe;
}

// Function: test_cpp_oo_features @ 0x10d70
void test_cpp_oo_features(void)
{
 size_t sVar1;
 unsigned int uVar2;
 unsigned int local_28;
 unsigned int uStack_24;
 unsigned int uStack_20;
 unsigned int local_1c;
 unsigned int uStack_18;
 unsigned int uStack_14;
 unsigned int uStack_10;
 unsigned short local_c;
 char local_a;
 char local_9;
 puts(&DAT_00011294);
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
 printf(&DAT_0001113d,sVar1 + 0x125c);
 printf(&DAT_0001115b,LifecycleClass::instance_count * 0x3e9 + 0x15);
 printf(&DAT_00011177,0x2a);
 printf(&DAT_00011193,0x47);
 printf(&DAT_000111af,0x28a);
 printf(&DAT_000111cc,0x16);
 printf(&DAT_000111e8,0x27);
 printf(&DAT_00011204,0x10);
 printf(&DAT_00011220,0x55);
 uVar2 = test_cpp_exception();
 printf(&DAT_0001123c,uVar2);
 printf(&DAT_00011259,0x2bf);
 uVar2 = test_cpp_rtti();
 printf(&DAT_00011276,uVar2);
 return;
}

// Function: main @ 0x10ef4
unsigned int main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x10f08
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10f14
double template_max_double_(double param_1,double param_2)
{
 double extraout_d0;
 __aeabi_dcmpgt();
 return extraout_d0;
}

// Function: template_swap<int> @ 0x10f48
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x10f5c
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x10f68
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x10f80
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if (param_1 < 0) {
 return uVar1;
 }
 if (param_1 < *(int *)(this + 0x28)) {
 uVar1 = *(unsigned int *)(this + param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x10fa0
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x10fa8
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x10fb4
void Container<double>::push(double param_1)
{
 int in_r0;
 unsigned int *puVar1;
 unsigned int in_r2;
 unsigned int in_r3;
 int iVar2;
 iVar2 = *(int *)(in_r0 + 0x50);
 if (9 < iVar2) {
 return;
 }
 puVar1 = (unsigned int *)(in_r0 + iVar2 * 8);
 *puVar1 = in_r2;
 puVar1[1] = in_r3;
 *(int *)(in_r0 + 0x50) = iVar2 + 1;
 return;
}

// Function: Container<double>::get @ 0x10fd8
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned int uVar1;
 unsigned int uVar2;
 uVar2 = 0;
 uVar1 = 0;
 if (-1 < param_1) {
 if (param_1 < *(int *)(this + 0x50)) {
 uVar1 = *(unsigned int *)(this + param_1 * 8);
 uVar2 = *(unsigned int *)((int)(this + param_1 * 8) + 4);
 }
 return CONCAT44(uVar2,uVar1);
 }
 return 0;
}

// Function: Container<double>::getSize @ 0x11004
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1100c
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x11010
unsigned int RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x11018
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1101c
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x11020
unsigned int RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x11028
void _fini(void)
{
 return;
}

