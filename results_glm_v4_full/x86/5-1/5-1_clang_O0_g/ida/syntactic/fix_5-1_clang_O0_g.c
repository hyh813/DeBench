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

/* ELF types for dynamic linking */
typedef struct {
    uint32_t d_tag;
    union {
        uint32_t d_val;
        uint32_t d_ptr;
    } d_un;
} Elf32_Dyn;

/* C++ Standard Library includes */
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <new>
#include <typeinfo>
#include <cxxabi.h>
#include <exception>
#include <utility>
#include <tuple>
#include <memory>

/* C++ RTTI types */
namespace __cxxabiv1 {
    struct __class_type_info {
        virtual ~__class_type_info() {}
        const char *__name;
    };
}

/* C runtime functions */
/* Unwind exception structure (minimal ABI definition) */
struct _Unwind_Exception {
    struct _Unwind_Exception_Class exception_class;
    void *exception_cleanup;
    unsigned long private_1;
    unsigned long private_2;
};

extern "C" {
    void *__cxa_allocate_exception(size_t thrown_size);
    void __cxa_throw(void *thrown_exception, std::type_info *tinfo, void (*dest)(void *));
    void __cxa_begin_catch(void *exception_obj);
    void __cxa_end_catch(void);
    void *__dynamic_cast(const void *src_ptr, const __cxxabiv1::__class_type_info *src_type, const __cxxabiv1::__class_type_info *dst_type, ptrdiff_t src2dst_offset);
    void __cxa_bad_typeid();
    void __cxa_rethrow();
    void *__cxa_get_exception_ptr(void *exception_object);
    int __cxa_atexit(void (*f)(void *), void *obj, void *dso);
    void *__cxa_allocate_dependent_exception();
    void __cxa_free_dependent_exception(void *dependent_exception);
    void _Unwind_Resume(struct _Unwind_Exception *exception_object);
}

/* External declarations */
extern "C" {
    void _gmon_start__(void);
    void frame_dummy(void);
    int _do_global_ctors_aux(void);
}

/* Missing type definitions - stubs for compilation */

/* SimpleClass */
struct SimpleClass {
    int value;
    char name[32];
    static int getClassID();
    SimpleClass(int v, const char *n);
    void setValue(int v);
    int getValue();
    int compute(int x);
};

/* LifecycleClass */
struct LifecycleClass {
    int *data;
    size_t size;
    static int instance_count;
    LifecycleClass(size_t s);
    int getData(size_t idx);
    static int getInstanceCount();
    ~LifecycleClass();
};

int LifecycleClass::instance_count = 0;

/* Base class for virtual functions */
struct Base {
    int (**_vptr$Base)(void);
    Base();
    const char *getName();
    int virtual_func(int x);
    ~Base();
};

/* Derived class */
struct Derived {
    int (**_vptr$Base)(void);
    int multiplier;
    Derived(int m);
    const char *getName();
    int virtual_func(int x);
    ~Derived();
};

/* BaseA for multiple inheritance */
struct BaseA {
    int (**_vptr$BaseA)(void);
    BaseA();
    int funcA();
    ~BaseA();
};

/* BaseB for multiple inheritance */
struct BaseB {
    int (**_vptr$BaseB)(void);
    BaseB();
    int funcB();
    ~BaseB();
};

/* MultiDerived - multiple inheritance */
struct MultiDerived {
    int (**_vptr$BaseA)(void);
    BaseB BaseB;
    int (**_vptr$BaseB)(void);
    int dataA;
    int dataB;
    MultiDerived();
    int funcA();
    int funcB();
    ~MultiDerived();
};

/* VirtualBase for diamond inheritance */
struct VirtualBase {
    int (**_vptr$VirtualBase)(void);
    VirtualBase();
    int func();
    ~VirtualBase();
};

/* MiddleA for diamond inheritance */
struct MiddleA {
    int (**_vptr$MiddleA)(void);
    int dataA;
    MiddleA(void **vtt);
    int func();
    ~MiddleA();
    ~MiddleA(void **vtt);
};

/* MiddleB for diamond inheritance */
struct MiddleB {
    int (**_vptr$MiddleB)(void);
    int dataB;
    MiddleB(void **vtt);
    int func();
    ~MiddleB();
    ~MiddleB(void **vtt);
};

/* DiamondDerived */
struct DiamondDerived {
    int (**_vptr$MiddleA)(void);
    int dataA;
    int dataB;
    int (**_vptr$MiddleB)(void);
    DiamondDerived();
    int func();
    ~DiamondDerived();
    ~DiamondDerived(void **vtt);
};

/* Point class */
struct Point {
    int x;
    int y;
    Point(int _x, int _y);
    Point *operator+(const Point *other, Point *__return_ptr);
    bool operator==(const Point *other);
    Point *operator++();
};

/* Container template */
template<typename T>
struct Container {
    T data[10];
    int size;
    Container();
    void push(T value);
    T get(int idx);
    int getSize();
};

/* Lambda stub types */
struct $44B1EA910F358000232221CCB0AF3F67 {
    int capture_by_value;
    int *capture_by_ref;
    int operator()(int x);
    void operator()(int *p);
};

struct $53A263AF813E6A51E9D2036C8CF165B2 {
    int capture_by_value;
    int *capture_by_ref;
    template<typename T, typename U>
    void operator()(T a, U b);
};

/* Type alias for the lambda used in test_cpp_smart_ptr */
namespace test_cpp_smart_ptr {
    struct __2 {
        void operator()(int *p);
    };
    
    struct $_2 {
        void operator()(int *p);
    };
    
    inline void __2::operator()(int *p) {
        *p = -1;
        if (p)
            operator delete(p);
    }
    
    inline void $_2::operator()(int *p) {
        *p = -1;
        if (p)
            operator delete(p);
    }
    
    /* Type alias to match the mangled naming in function signatures */
    typedef __2 $_2;
}

/* RTTI classes */
struct RTTIBase {
    int (**_vptr$RTTIBase)(void);
    RTTIBase();
    int getType();
    ~RTTIBase();
};

struct RTTIDerivedA {
    int (**_vptr$RTTIBase)(void);
    RTTIDerivedA();
    int getType();
    int derivedA_data();
    ~RTTIDerivedA();
};

struct RTTIDerivedB {
    int (**_vptr$RTTIBase)(void);
    RTTIDerivedB();
    int getType();
    int derivedB_data();
    ~RTTIDerivedB();
};

/* Standard library stubs */
namespace std {
    struct ios_base {
        struct Init {
            Init();
            ~Init();
        };
    };
    
    inline std::ios_base::Init::Init() {}
    inline std::ios_base::Init::~Init() {}
    struct type_info {
        virtual ~type_info();
        bool operator==(const type_info &__arg) const;
        const char *name() const;
    };
    
    /* unique_ptr internal types */
    template<typename _Tp, typename _Dp> struct __uniq_ptr_impl {
        std::tuple<_Tp*, _Dp> _M_t;
        typedef _Tp* pointer;
        typedef _Dp deleter_type;
        __uniq_ptr_impl();
        __uniq_ptr_impl(pointer __p);
        __uniq_ptr_impl(const __uniq_ptr_impl &__u);
        pointer _M_ptr();
        pointer _M_ptr() const;
        _Dp _M_deleter();
        _Dp _M_deleter() const;
    };
    
    template<typename _Tp, typename _Dp, bool _IsArray, bool _CanBeConst> struct __uniq_ptr_data {
        __uniq_ptr_impl<_Tp, _Dp> _M_t;
        __uniq_ptr_data();
        __uniq_ptr_data(const __uniq_ptr_data &__u);
        void CI2St15__uniq_ptr_implIiS0_EEPi(pointer __p);
        void CI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(pointer __p, const _Dp *__d);
    };
    
    template<typename _Tp, typename _Dp = std::default_delete<_Tp>> struct unique_ptr {
        typedef _Tp* pointer;
        typedef _Dp deleter_type;
        __uniq_ptr_data<_Tp, _Dp, false, true> _M_t;
        unique_ptr(pointer __p);
        unique_ptr();
        unique_ptr(unique_ptr &&__u);
        ~unique_ptr();
        pointer get() const;
        _Dp* get_deleter();
        typename std::remove_reference<_Tp>::type& operator*() const;
        pointer operator[](size_t __i) const;
    };
    
    template<typename _Tp> struct unique_ptr<_Tp[]> {
        typedef _Tp* pointer;
        typedef std::default_delete<_Tp[]> deleter_type;
        __uniq_ptr_data<_Tp, std::default_delete<_Tp[]>, true, true> _M_t;
        void unique_ptr(pointer __p);
        void ~unique_ptr();
        pointer get() const;
        typename std::remove_reference<_Tp>::type& operator[](size_t __i) const;
        deleter_type* get_deleter();
    };
    
    /* tuple internal types */
    template<size_t _Idx, typename _Head, bool _IsEmpty> struct _Head_base {
        _Head _M_head_impl;
        _Head_base();
        _Head_base(const _Head& __h);
        _Head* _M_head();
        const _Head* _M_head() const;
    };
    
    template<size_t _Idx, typename _Head> struct _Head_base<_Idx, _Head, true> : private _Head {
        _Head_base();
        _Head_base(const _Head& __h);
        _Head* _M_head();
        const _Head* _M_head() const;
    };
    
    template<size_t _Idx, typename... _Elements> struct _Tuple_impl;
    
    template<size_t _Idx> struct _Tuple_impl<_Idx> {
        _Tuple_impl();
    };
    
    template<size_t _Idx, typename _Head, typename... _Tail>
    struct _Tuple_impl<_Idx, _Head, _Tail...> : private _Tuple_impl<_Idx + 1, _Tail...>, private _Head_base<_Idx, _Head, false> {
        typedef _Head _Head_type;
        _Tuple_impl();
        _Tuple_impl(const _Tuple_impl &__t);
        _Tuple_impl(const _Head *__head, const _Tail *__tail);
        _Head* _M_head();
        const _Head* _M_head() const;
    };
    
    template<typename... _Elements> struct tuple {
        tuple();
        tuple(const tuple &__t);
    };
    
    /* Type traits */
    template<typename T> struct remove_reference { typedef T type; };
    template<typename T> struct remove_reference<T&> { typedef T type; };
    template<typename T> struct remove_reference<T&&> { typedef T type; };
    template<typename T> struct remove_reference<const T&> { typedef T type; };
    template<typename T> struct remove_reference<const T&&> { typedef T type; };
    
    template<typename T> struct __add_rvalue_reference_helper { typedef T&& type; };
    template<> struct __add_rvalue_reference_helper<void> { typedef void type; };
    
    template<typename T> struct add_rvalue_reference { typedef typename __add_rvalue_reference_helper<T>::type type; };
    
    template<typename T> struct remove_cv { typedef T type; };
    template<typename T> struct remove_cv<const T> { typedef T type; };
    template<typename T> struct remove_cv<volatile T> { typedef T type; };
    template<typename T> struct remove_cv<const volatile T> { typedef T type; };
    
    template<bool B, typename T = void> struct enable_if {};
    template<typename T> struct enable_if<true, T> { typedef T type; };
    
    template<typename T, typename U> struct is_convertible { static const bool value = true; };
    
template<typename T> struct __add_lvalue_reference_helper { typedef T& type; };
template<> struct __add_lvalue_reference_helper<void> { typedef void type; };
template<typename T, bool = true> struct __add_lvalue_reference_helper_bool { typedef T& type; };
template<> struct __add_lvalue_reference_helper_bool<void, true> { typedef void type; };
    
    template<typename T> struct remove_extent { typedef T type; };
    template<typename T> struct remove_extent<T[]> { typedef T type; };
    template<typename T, size_t N> struct remove_extent<T[N]> { typedef T type; };
    
    template<typename T> struct remove_all_extents { typedef T type; };
    template<typename T> struct remove_all_extents<T[]> { typedef typename remove_all_extents<T>::type type; };
    template<typename T, size_t N> struct remove_all_extents<T[N]> { typedef typename remove_all_extents<T>::type type; };
    
/* tuple element type helper */
template<size_t I, typename... Types> struct __tuple_element_impl;
template<size_t I, typename Head, typename... Tail>
struct __tuple_element_impl<I, Head, Tail...> {
    typedef typename __tuple_element_impl<I-1, Tail...>::type type;
};
template<typename Head, typename... Tail>
struct __tuple_element_impl<0, Head, Tail...> {
    typedef Head type;
};

template<size_t I, typename... Types>
struct tuple_element {
    typedef typename __tuple_element_impl<I, Types...>::type type;
};

/* Type alias for tuple_element::type */
template<size_t I, typename Tuple>
using __tuple_element_t = typename tuple_element<I, Tuple>::type;
    
/* Primary template for tuple_element with explicit Tuple parameter */
template<size_t I, typename Tuple>
struct tuple_element;

/* Specialization for tuple types */
template<size_t I, typename... Types>
struct tuple_element<I, std::tuple<Types...>> {
    typedef typename __tuple_element_impl<I, Types...>::type type;
};
    
    /* unique_ptr helpers */
    template<typename T> struct default_delete {
        void operator()(T *ptr) const;
    };
    template<typename T> struct default_delete<T[]> {
        template<typename U> void operator()(U *ptr) const;
    };
    
    /* terminate */
    void terminate();
}

inline void std::terminate() {
    __builtin_unreachable();
}

/* Unique pointer type aliases (using std:: definition) */

/* Additional type traits */
namespace std {
    template<typename T> struct is_reference { static const bool value = false; };
    template<typename T> struct is_reference<T&> { static const bool value = true; };
    template<typename T> struct is_reference<T&&> { static const bool value = true; };
    
    template<typename T> struct add_lvalue_reference { typedef typename __add_lvalue_reference_helper<T>::type type; };
}



/* Template forward declaration */
namespace std {
    template<typename T> typename std::remove_reference<T>::type&& move(T&& t);
    
    template<typename T> T&& forward(typename std::remove_reference<T>::type& t);
    template<typename T> T&& forward(typename std::remove_reference<T>::type&& t);
    
    /* std::get and helper templates */
    template<size_t __i, typename... _Elements> 
    typename tuple_element<__i, tuple<_Elements...>>::type&
    get(tuple<_Elements...>& __t);
    
    template<size_t __i, typename... _Elements> 
    typename tuple_element<__i, tuple<_Elements...>>::type const&
    get(tuple<_Elements...> const& __t);
    
    template<size_t __i, typename _Head, typename... _Tail>
    _Head& __get_helper(_Tuple_impl<__i, _Head, _Tail...>& __t);
    
    template<size_t __i, typename _Head, typename... _Tail>
    _Head const& __get_helper(_Tuple_impl<__i, _Head, _Tail...> const& __t);
}

/* Template function definitions */
template<typename T>
typename std::remove_reference<T>::type&& std::move(T&& t) {
    return static_cast<typename std::remove_reference<T>::type&&>(t);
}

template<typename T>
T&& std::forward(typename std::remove_reference<T>::type& t) {
    return static_cast<T&&>(t);
}

template<typename T>
T&& std::forward(typename std::remove_reference<T>::type&& t) {
    return static_cast<T&&>(t);
}

/* Global variables */
extern std::ios_base::Init std::__ioinit;
extern void *_dso_handle;
extern void *GLOBAL_OFFSET_TABLE_;

/* Offset variables */
extern void *off_8C3C;
extern void *off_8CDC;
extern void *off_8CF0;
extern void *off_8D4C;
extern void *off_8D54;
extern void *off_8E2C;
extern void *off_8ECC;

/* VTT for DiamondDerived */
extern void *VTT_for_DiamondDerived;
extern void *VTT_for_MiddleA;
extern void *VTT_for_MiddleB;

/* Type info for types */
extern std::type_info typeinfo_for_int;
extern std::type_info typeinfo_for_RTTIDerivedA;
extern std::type_info typeinfo_for_RTTIDerivedB;
extern std::type_info typeinfo_for_RTTIBase;

/* Missing functions */
extern size_t saturated_mul(size_t a, size_t b);
extern "C" void *operator new(size_t size);
extern "C" void *operator new[](size_t size);
extern "C" void operator delete(void *ptr);
extern "C" void operator delete[](void *ptr);
extern void _do_global_dtors_aux(void);

/* String literal references */
extern const char *asc_500D;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;

/* Template function declarations */
template<typename T> T template_max(T a, T b);
template<typename T> void template_swap(T *a, T *b);

/*
 * Decompiled by IDA Pro 9.1 with Hex-Rays
 * Binary: build/x86/5-1/5-1_clang_O0_g
 * Processor: pc
 */

/* Function: .init_proc @ 0x1000 */
int init_proc()
{
 if ( &_gmon_start__ )
 ((void (*)(void))_gmon_start__)();
 frame_dummy();
 return _do_global_ctors_aux();
}


/* Function: sub_1030 @ 0x1030 */
void sub_1030()
{
 __asm__ volatile ("jmp *8(%%ebx)" :::);
}


/* Function: sub_1190 @ 0x1190 */
int sub_1190(int a1)
{
 return (*(int (**)(void))(a1 - 24))();
}


/* Function: __cxx_global_var_init @ 0x11A0 */
void _cxx_global_var_init()
{
 std::ios_base::Init::Init((std::ios_base::Init *)&std::__ioinit);
 __cxa_atexit((void (*)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
}


/* Function: _GLOBAL__sub_I_5_1.cpp @ 0x11F0 */
void GLOBAL__sub_I_5_1_cpp()
{
 _cxx_global_var_init();
}



/* CRT stub function _start removed by preprocessor */



/* Function: sub_123C @ 0x123C */
void sub_123C()
{
 ;
}


/* Function: __x86.get_pc_thunk.bx @ 0x1240 */
void _x86_get_pc_thunk_bx()
{
 ;
}



/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */



/* Function: __x86.get_pc_thunk.dx @ 0x1379 */
void _x86_get_pc_thunk_dx()
{
 ;
}


/* Function: __x86.get_pc_thunk.di @ 0x137D */
void _x86_get_pc_thunk_di()
{
 ;
}


/* Function: _Z20test_cpp_member_funcv @ 0x1390 */
int test_cpp_member_func()
{
 int r2; // [esp+18h] [ebp-30h]
 int r1; // [esp+1Ch] [ebp-2Ch]
 SimpleClass obj; // [esp+20h] [ebp-28h] BYREF

 SimpleClass::SimpleClass(&obj, 5, "Test");
 SimpleClass::setValue(&obj, 10);
 r1 = SimpleClass::getValue(&obj);
 r2 = SimpleClass::compute(&obj, 3);
 return SimpleClass::getClassID() + r2 + r1;
}


/* Function: _Z20test_cpp_constructorv @ 0x1420 */
int test_cpp_constructor()
{
 int Data; // [esp+1Ch] [ebp-1Ch]
 LifecycleClass obj; // [esp+28h] [ebp-10h] BYREF
 int result; // [esp+30h] [ebp-8h]

 result = 0;
 LifecycleClass::LifecycleClass(&obj, 5u);
 Data = LifecycleClass::getData(&obj, 2u);
 result += Data;
 result += LifecycleClass::getInstanceCount();
 LifecycleClass::~LifecycleClass(&obj);
 return result + 1000 * LifecycleClass::getInstanceCount();
}


/* Function: _Z17call_virtual_funcP4Basei @ 0x14F0 */
int call_virtual_func(Base *obj, int x)
{
 return ((int ( *)(Base *, int))*obj->_vptr$Base)(obj, x);
}


/* Function: _Z21test_cpp_virtual_funcv @ 0x1520 */
int test_cpp_virtual_func()
{
 int v1; // [esp+10h] [ebp-48h]
 int r3; // [esp+2Ch] [ebp-2Ch]
 int r2; // [esp+38h] [ebp-20h]
 int r1; // [esp+3Ch] [ebp-1Ch]
 Derived derived; // [esp+48h] [ebp-10h] BYREF
 Base base; // [esp+50h] [ebp-8h] BYREF

 Base::Base(&base);
 Derived::Derived(&derived, 3);
 r1 = Base::virtual_func(&base, 5);
 r2 = Derived::virtual_func(&derived, 5);
 r3 = call_virtual_func(&base, 5);
 v1 = call_virtual_func(&derived, 5) + r3 + r2 + r1;
 Derived::~Derived(&derived);
 Base::~Base(&base);
 return v1;
}


/* Function: _Z29test_cpp_multiple_inheritancev @ 0x1670 */
int test_cpp_multiple_inheritance()
{
 MultiDerived *v1; // [esp+20h] [ebp-38h]
 int r2; // [esp+28h] [ebp-30h]
 int r1; // [esp+34h] [ebp-24h]
 MultiDerived obj; // [esp+40h] [ebp-18h] BYREF

 MultiDerived::MultiDerived(&obj);
 obj.dataA = 100;
 obj.dataB = 200;
 v1 = 0;
 if ( &obj )
 v1 = (MultiDerived *)&obj.BaseB;
 r1 = ((int ( *)(MultiDerived *))*obj._vptr$BaseA)(&obj);
 r2 = (*(int ( **)(MultiDerived *))v1->_vptr$BaseA)(v1);
 MultiDerived::~MultiDerived(&obj);
 return (&obj != v1) + r2 + r1;
}


/* Function: _Z28test_cpp_diamond_inheritancev @ 0x1760 */
int test_cpp_diamond_inheritance()
{
 int v1; // [esp+10h] [ebp-48h]
 int ( ***v2)(unsigned int); // [esp+20h] [ebp-38h]
 int r1; // [esp+30h] [ebp-28h]
 DiamondDerived obj; // [esp+38h] [ebp-20h] BYREF

 DiamondDerived::DiamondDerived(&obj);
 *(int *)((char *)&obj.dataA + *((unsigned int *)obj._vptr$MiddleA - 3)) = 50;
 v2 = 0;
 if ( &obj )
 v2 = (int ( ***)(unsigned int))((char *)&obj + *((unsigned int *)obj._vptr$MiddleA - 3));
 r1 = (**v2)(v2);
 *(int *)((char *)&obj.dataA + *((unsigned int *)obj._vptr$MiddleA - 3)) = 100;
 v1 = (**v2)(v2) + r1;
 DiamondDerived::~DiamondDerived(&obj);
 return v1;
}


/* Function: _Z26test_cpp_operator_overloadv @ 0x1840 */
int test_cpp_operator_overload()
{
 int v0; // ecx
 bool eq; // [esp+17h] [ebp-21h]
 Point p3; // [esp+18h] [ebp-20h] BYREF
 Point p2; // [esp+20h] [ebp-18h] BYREF
 Point p1; // [esp+28h] [ebp-10h] BYREF

 Point::Point(&p1, 1, 2);
 Point::Point(&p2, 3, 4);
 Point::operator+(&p3, &p1, &p2);
 eq = Point::operator==(&p1, &p2);
 Point::operator++(&p3);
 v0 = 10;
 if ( eq )
 v0 = 0;
 return v0 + p3.y + p3.x;
}


/* Function: _Z22test_cpp_template_funcv @ 0x1900 */
int test_cpp_template_func()
{
 int b; // [esp+20h] [ebp-18h] BYREF
 int a; // [esp+24h] [ebp-14h] BYREF
 double r2; // [esp+28h] [ebp-10h]
 int r1; // [esp+30h] [ebp-8h]

 r1 = template_max<int>(3, 7);
 r2 = template_max<double>(2.5, 1.5);
 a = 10;
 b = 20;
 template_swap<int>(&a, &b);
 return b + a + (int)r2 + r1;
}


/* Function: _Z23test_cpp_template_classv @ 0x19B0 */
int test_cpp_template_class()
{
 double r3; // [esp+20h] [ebp-98h]
 Container<double> double_container; // [esp+28h] [ebp-90h] BYREF
 int r2; // [esp+80h] [ebp-38h]
 int r1; // [esp+84h] [ebp-34h]
 Container<int> int_container; // [esp+88h] [ebp-30h] BYREF

 Container<int>::Container(&int_container);
 Container<int>::push(&int_container, 10);
 Container<int>::push(&int_container, 20);
 Container<int>::push(&int_container, 30);
 r1 = Container<int>::get(&int_container, 0);
 r2 = Container<int>::getSize(&int_container);
 Container<double>::Container(&double_container);
 Container<double>::push(&double_container, 3.14);
 r3 = Container<double>::get(&double_container, 0);
 return (int)r3 + r2 + r1;
}


/* Function: _Z15test_cpp_lambdav @ 0x1B20 */
int test_cpp_lambda()
{
 int v0; // eax
 int r1; // [esp+14h] [ebp-24h]
 $44B1EA910F358000232221CCB0AF3F67 lambda2; // [esp+18h] [ebp-20h] BYREF
 $53A263AF813E6A51E9D2036C8CF165B2 lambda1; // [esp+20h] [ebp-18h] BYREF
 int capture_by_ref; // [esp+2Ch] [ebp-Ch] BYREF
 int capture_by_value; // [esp+30h] [ebp-8h]

 capture_by_value = 10;
 capture_by_ref = 20;
 lambda1.capture_by_value = 10;
 lambda1.capture_by_ref = &capture_by_ref;
 r1 = $44B1EA910F358000232221CCB0AF3F67::operator()(&lambda1, 3);
 $53A263AF813E6A51E9D2036C8CF165B2::operator()<int,int>(&lambda2, 10, 20);
 return v0 + r1;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_1clEi @ 0x1BA0 */
int $44B1EA910F358000232221CCB0AF3F67::operator()(
 $44B1EA910F358000232221CCB0AF3F67 *this,
 int x)
{
 *this->capture_by_ref += 5;
 return *this->capture_by_ref + this->capture_by_value * x;
}


/* Function: _ZZ15test_cpp_lambdavENK3$_0clIiiEEDaT_T0_ @ 0x1BD0 */
void $53A263AF813E6A51E9D2036C8CF165B2::operator()<int,int>($53A263AF813E6A51E9D2036C8CF165B2 *this, int a, int b)
{
 ;
}


/* Function: _Z18test_cpp_exceptionv @ 0x1BF0 */
void test_cpp_exception()
{
 unsigned int *exception; // ecx

exception = __cxa_allocate_exception(4u);
    *exception = 42;
    __cxa_throw(exception, &typeinfo_for_int, 0);
}


/* Function: _Z18test_cpp_smart_ptrv @ 0x1D90 */
char *test_cpp_smart_ptr()
{
 int *v0; // eax
 std::unique_ptr<int> *v1; // eax
 char *v3; // [esp+14h] [ebp-64h]
 std::__add_lvalue_reference_helper<int,true>::type v4; // [esp+1Ch] [ebp-5Ch]
 int *v5; // [esp+20h] [ebp-58h]
 int *v6; // [esp+2Ch] [ebp-4Ch]
 std::unique_ptr<int,test_cpp_smart_ptr::__2> ptr3; // [esp+48h] [ebp-30h] BYREF
 test_cpp_smart_ptr::$_2 deleter; // [esp+50h] [ebp-28h] BYREF
 int r2; // [esp+54h] [ebp-24h]
 std::unique_ptr<int[]> v10; // [esp+58h] [ebp-20h] BYREF
 std::unique_ptr<int> ptr2; // [esp+60h] [ebp-18h] BYREF
 std::unique_ptr<int> ptr1; // [esp+70h] [ebp-8h] BYREF

 v0 = (int *)operator new(4u);
 *v0 = 100;
 std::unique_ptr<int>::unique_ptr<std::default_delete<int>,void>(&ptr1, v0);
 *std::unique_ptr<int>::operator*(&ptr1) = 200;
 v1 = std::move<std::unique_ptr<int> &>(&ptr1);
 std::unique_ptr<int>::unique_ptr(&ptr2, v1);
 v10._M_t._M_t._M_head_impl = (int *)*std::unique_ptr<int>::operator*(&ptr2);
 v6 = (int *)operator new[](0x14u);
 *v6 = 1;
 v6[1] = 2;
 v6[2] = 3;
 v6[3] = 4;
 v6[4] = 5;
 std::unique_ptr<int []>::unique_ptr<int *,std::default_delete<int []>,void,bool>(&v10, v6);
 r2 = *std::unique_ptr<int []>::operator[](&v10, 2u);
 v5 = (int *)operator new(4u);
 *v5 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::unique_ptr<test_cpp_smart_ptr(void)::$_2,void>(
 &ptr3,
 v5,
 (const std::unique_ptr<int,(lambda at src_5-1_cpp:445:20)>::deleter_type *)&deleter);
 v4 = std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::operator*(&ptr3);
 v3 = (char *)v10._M_t._M_t._M_head_impl + r2 + *v4;
 std::unique_ptr<int,test_cpp_smart_ptr(void)::$_2>::~unique_ptr(&ptr3);
 std::unique_ptr<int []>::~unique_ptr(&v10);
 std::unique_ptr<int>::~unique_ptr(&ptr2);
 std::unique_ptr<int>::~unique_ptr(&ptr1);
 return v3;
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EC2IS0_vEEPiRKS0_ @ 0x1FD0 */
void std::unique_ptr<int,test_cpp_smart_ptr::__2>::unique_ptr(
 std::unique_ptr<int,test_cpp_smart_ptr::__2> *this,
 std::unique_ptr<int,test_cpp_smart_ptr::__2>::pointer __p,
 const std::unique_ptr<int,test_cpp_smart_ptr::__2>::deleter_type *__d)
{
 ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 &this->_M_t,
 __p,
 __d);
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2EdeEv @ 0x2020 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int,test_cpp_smart_ptr::__2>::operator*(
 const std::unique_ptr<int,test_cpp_smart_ptr::__2> *this)
{
 return std::unique_ptr<int,test_cpp_smart_ptr::$_2>::get(this);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2ED2Ev @ 0x2060 */
void std::unique_ptr<int,test_cpp_smart_ptr::__2>::~unique_ptr(
 std::unique_ptr<int,test_cpp_smart_ptr::__2> *this)
{
 int **v1; // eax
 std::unique_ptr<int,test_cpp_smart_ptr::$_2>::deleter_type *deleter; // [esp+10h] [ebp-18h]
 int **__ptr; // [esp+20h] [ebp-8h]

 __ptr = std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int,test_cpp_smart_ptr::$_2>::get_deleter(this);
 v1 = std::move<int *&>(__ptr);
 test_cpp_smart_ptr::$_2::operator()(deleter, *v1);
 }
 *__ptr = 0;
}


/* Function: _Z13test_cpp_rttiv @ 0x2100 */
int test_cpp_rtti()
{
 const char *v0; // eax
 const RTTIDerivedB *v2; // [esp+28h] [ebp-40h]
 const RTTIDerivedA *v3; // [esp+30h] [ebp-38h]
 RTTIDerivedA *v4; // [esp+3Ch] [ebp-2Ch]
 RTTIDerivedB *v5; // [esp+44h] [ebp-24h]
 int result; // [esp+54h] [ebp-14h]
 int resulta; // [esp+54h] [ebp-14h]

 v4 = (RTTIDerivedA *)operator new(4u);
 if (v4) memset(v4, 0, sizeof(RTTIDerivedA));
 RTTIDerivedA::RTTIDerivedA(v4);
 v5 = (RTTIDerivedB *)operator new(4u);
 if (v5) memset(v5, 0, sizeof(RTTIDerivedB));
 RTTIDerivedB::RTTIDerivedB(v5);
 result = 0;
 if ( !v4 )
 __cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info **)v4->_vptr$RTTIBase - 1),
 &typeinfo_for_RTTIDerivedA) )
 {
 result = 10;
 }
 if ( !v5 )
 __cxa_bad_typeid();
 if ( std::type_info::operator==(
 *((const std::type_info **)v5->_vptr$RTTIBase - 1),
 &typeinfo_for_RTTIDerivedB) )
 {
 result += 20;
 }
 v3 = (const RTTIDerivedA *)__dynamic_cast(
 v4,
 &typeinfo_for_RTTIBase,
 &typeinfo_for_RTTIDerivedA,
 0);
 if ( v3 )
 result += RTTIDerivedA::derivedA_data(v3);
 v2 = (const RTTIDerivedB *)__dynamic_cast(
 v5,
 &typeinfo_for_RTTIBase,
 &typeinfo_for_RTTIDerivedB,
 0);
 if ( v2 )
 result += RTTIDerivedB::derivedB_data(v2);
 v0 = std::type_info::name(*((const std::type_info **)v4->_vptr$RTTIBase - 1));
 resulta = result + strlen(v0);
 (*((void ( **)(RTTIDerivedA *))v4->_vptr$RTTIBase + 1))(v4);
 (*((void ( **)(RTTIDerivedB *))v5->_vptr$RTTIBase + 1))(v5);
 return resulta;
}


/* Function: _Z20test_cpp_oo_featuresv @ 0x23A0 */
void test_cpp_oo_features()
{
 int v0; // eax
 int v1; // eax
 int v2; // eax
 int v3; // eax
 int v4; // eax
 int v5; // eax
 int v6; // eax
 int v7; // eax
 int v8; // eax

 printf(asc_500D);
 v0 = test_cpp_member_func();
 printf(aCppL301D, v0);
 v1 = test_cpp_constructor();
 printf(aCppL302D, v1);
 v2 = test_cpp_virtual_func();
 printf(aCppL303D, v2);
 v3 = test_cpp_multiple_inheritance();
 printf(aCppL304D, v3);
 v4 = test_cpp_diamond_inheritance();
 printf(aCppL305D, v4);
 v5 = test_cpp_operator_overload();
 printf(aCppL306D, v5);
 v6 = test_cpp_template_func();
 printf(aCppL307D, v6);
 v7 = test_cpp_template_class();
 printf(aCppL308D, v7);
 v8 = test_cpp_lambda();
 printf(aCppL309D, v8);
 test_cpp_exception();
}


/* Function: main @ 0x2530 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
}


/* Function: _ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3$_2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_ @ 0x2560 */
void ZNSt15__uniq_ptr_dataIiZ18test_cpp_smart_ptrvE3__2Lb1ELb0EECI2St15__uniq_ptr_implIiS0_EIRKS0_EEPiOT_(
 std::__uniq_ptr_data<int,test_cpp_smart_ptr::$_2,true,false> *this,
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2>::pointer __p,
 const test_cpp_smart_ptr::$_2 *a3)
{
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2>::__uniq_ptr_impl<const test_cpp_smart_ptr::$_2&>(
 this,
 __p,
 a3);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2EC2IRKS0_EEPiOT_ @ 0x25A0 */
void std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2>::__uniq_ptr_impl<const test_cpp_smart_ptr::$_2&>(
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2> *this,
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2>::pointer __p,
 const test_cpp_smart_ptr::$_2 *__d)
{
 const test_cpp_smart_ptr::$_2 *v3; // eax

 v3 = std::forward<const test_cpp_smart_ptr::$_2&>((std::remove_reference<const test_cpp_smart_ptr::$_2&>::type *)__d);
 std::tuple<int *,test_cpp_smart_ptr::$_2>::tuple<int *&,const test_cpp_smart_ptr::$_2&,true>(
 &this->_M_t,
 &__p,
 v3);
}


/* Function: _ZSt7forwardIRKZ18test_cpp_smart_ptrvE3$_2EOT_RNSt16remove_referenceIS3_E4typeE @ 0x25F0 */
const test_cpp_smart_ptr::$_2 * std::forward<const test_cpp_smart_ptr::$_2&>(
 std::remove_reference<const test_cpp_smart_ptr::$_2 &>::type *__t)
{
 return (const test_cpp_smart_ptr::$_2 *)__t;
}


/* Function: _ZNSt5tupleIJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_RKS1_Lb1EEEOT_OT0_ @ 0x2600 */
void std::tuple<int *,test_cpp_smart_ptr::$_2>::tuple<int *&,const test_cpp_smart_ptr::$_2&,true>(
 std::tuple<int *,test_cpp_smart_ptr::$_2> *this,
 int **__a1,
 const test_cpp_smart_ptr::$_2 *__a2)
{
 const test_cpp_smart_ptr::$_2 *v3; // esi
 int **v4; // [esp+18h] [ebp-10h]

 v4 = std::forward<int *&>(__a1);
 v3 = std::forward<const test_cpp_smart_ptr::$_2&>((std::remove_reference<const test_cpp_smart_ptr::$_2&>::type *)__a2);
 std::_Tuple_impl<0u,int *,test_cpp_smart_ptr::$_2>::_Tuple_impl<int *&,const test_cpp_smart_ptr::$_2&,void>(
 this,
 v4,
 v3);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EEC2IRS0_JRKS1_EvEEOT_DpOT0_ @ 0x2680 */
void std::_Tuple_impl<0u,int *,test_cpp_smart_ptr::$_2>::_Tuple_impl<int *&,const test_cpp_smart_ptr::$_2&,void>(
 std::_Tuple_impl<0U,int *,test_cpp_smart_ptr::$_2> *this,
 int **__head,
 const test_cpp_smart_ptr::$_2 *__tail)
{
 const test_cpp_smart_ptr::$_2 *v3; // eax
 int **v4; // eax

 v3 = std::forward<const test_cpp_smart_ptr::$_2&>((std::remove_reference<const test_cpp_smart_ptr::$_2&>::type *)__tail);
 std::_Tuple_impl<1u,test_cpp_smart_ptr::$_2>::_Tuple_impl(this, v3);
 v4 = std::forward<int *&>(__head);
 std::_Head_base<0u,int *,false>::_Head_base<int *&>((std::_Head_base<0U,int *,false> *)this, v4);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EEC2ERKS0_ @ 0x2700 */
void std::_Tuple_impl<1u,test_cpp_smart_ptr::$_2>::_Tuple_impl(
 std::_Tuple_impl<1U,test_cpp_smart_ptr::$_2> *this,
 const test_cpp_smart_ptr::$_2 *__head)
{
 std::_Head_base<1u,test_cpp_smart_ptr::$_2,true>::_Head_base(this, __head);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EEC2ERKS0_ @ 0x2740 */
void std::_Head_base<1u,test_cpp_smart_ptr::$_2,true>::_Head_base(
 std::_Head_base<1U,test_cpp_smart_ptr::$_2,true> *this,
 const test_cpp_smart_ptr::$_2 *__h)
{
 ;
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x2750 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2>::pointer * std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2>::_M_ptr(
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr::$_2> *this)
{
 return std::get<0u,int *,test_cpp_smart_ptr(void)::$_2>(&this->_M_t);
}


/* Function: _ZNSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E11get_deleterEv @ 0x2780 */
std::unique_ptr<int,test_cpp_smart_ptr::__2>::deleter_type * std::unique_ptr<int,test_cpp_smart_ptr::__2>::get_deleter(
 std::unique_ptr<int,test_cpp_smart_ptr::__2> *this)
{
 return (std::unique_ptr<int,test_cpp_smart_ptr::__2>::deleter_type *)std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2>::_M_deleter(&this->_M_t);
}


/* Function: _ZZ18test_cpp_smart_ptrvENK3$_2clEPi @ 0x27D0 */
void test_cpp_smart_ptr::$_2::operator()(test_cpp_smart_ptr::$_2 *this, int *p)
{
 *p = -1;
 if ( p )
 operator delete(p);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x2820 */
std::__tuple_element_t<0U,std::tuple<int *,test_cpp_smart_ptr::__2> > * std::get<0u,int *,test_cpp_smart_ptr::__2>(
 std::tuple<int *,test_cpp_smart_ptr::__2> *__t)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr::__2>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2850 */
int ** std::__get_helper<0u,int *,test_cpp_smart_ptr::__2>(
 std::_Tuple_impl<0U,int *,test_cpp_smart_ptr::__2> *__t)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr::__2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS2_ @ 0x2880 */
int ** std::_Tuple_impl<0u,int *,test_cpp_smart_ptr::__2>::_M_head(
 std::_Tuple_impl<0U,int *,test_cpp_smart_ptr::__2> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E10_M_deleterEv @ 0x28B0 */
struct {unsigned char gap0;} * std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2>::_M_deleter(
 std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2> *this)
{
 return (struct {unsigned char gap0;} *)std::get<1u,int *,test_cpp_smart_ptr::__2>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiZ18test_cpp_smart_ptrvE3$_2EERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS6_ @ 0x28E0 */
std::__tuple_element_t<1U,std::tuple<int *,test_cpp_smart_ptr::__2> > * std::get<1u,int *,test_cpp_smart_ptr::__2>(
 std::tuple<int *,test_cpp_smart_ptr::__2> *__t)
{
 return (std::__tuple_element_t<1U,std::tuple<int *,test_cpp_smart_ptr::__2> > *)std::__get_helper<1u,test_cpp_smart_ptr::__2>(__t);
}


/* Function: _ZSt12__get_helperILj1EZ18test_cpp_smart_ptrvE3$_2JEERT0_RSt11_Tuple_implIXT_EJS1_DpT1_EE @ 0x2910 */
struct {unsigned char gap0;} * std::__get_helper<1u,test_cpp_smart_ptr::__2>(
 std::_Tuple_impl<1U,test_cpp_smart_ptr::__2> *__t)
{
 return std::_Tuple_impl<1u,test_cpp_smart_ptr::__2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJZ18test_cpp_smart_ptrvE3$_2EE7_M_headERS1_ @ 0x2940 */
struct {unsigned char gap0;} * std::_Tuple_impl<1u,test_cpp_smart_ptr::__2>::_M_head(
 std::_Tuple_impl<1U,test_cpp_smart_ptr::__2> *__t)
{
 return std::_Head_base<1u,test_cpp_smart_ptr::__2,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1EZ18test_cpp_smart_ptrvE3$_2Lb1EE7_M_headERS1_ @ 0x2970 */
struct {unsigned char gap0;} * std::_Head_base<1u,test_cpp_smart_ptr::__2,true>::_M_head(
 std::_Head_base<1U,test_cpp_smart_ptr::__2,true> *__b)
{
 return (struct {unsigned char gap0;} *)__b;
}


/* Function: _ZNKSt10unique_ptrIiZ18test_cpp_smart_ptrvE3$_2E3getEv @ 0x2980 */
std::unique_ptr<int,test_cpp_smart_ptr::__2>::pointer std::unique_ptr<int,test_cpp_smart_ptr::__2>::get(
 const std::unique_ptr<int,test_cpp_smart_ptr::__2> *this)
{
 return std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiZ18test_cpp_smart_ptrvE3$_2E6_M_ptrEv @ 0x29D0 */
std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2>::pointer std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2>::_M_ptr(
 const std::__uniq_ptr_impl<int,test_cpp_smart_ptr::__2> *this)
{
 return *std::get<0u,int *,test_cpp_smart_ptr::__2>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiZ18test_cpp_smart_ptrvE3$_2EERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS6_ @ 0x2A00 */
const std::__tuple_element_t<0U,std::tuple<int *,test_cpp_smart_ptr::__2> > * std::get<0u,int *,test_cpp_smart_ptr::__2>(
 const std::tuple<int *,test_cpp_smart_ptr::__2> *__t)
{
 return std::__get_helper<0u,int *,test_cpp_smart_ptr::__2>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJZ18test_cpp_smart_ptrvE3$_2EERKT0_RKSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x2A30 */
int *const * std::__get_helper<0u,int *,test_cpp_smart_ptr::__2>(
 const std::_Tuple_impl<0U,int *,test_cpp_smart_ptr::__2> *__t)
{
 return std::_Tuple_impl<0u,int *,test_cpp_smart_ptr::__2>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiZ18test_cpp_smart_ptrvE3$_2EE7_M_headERKS2_ @ 0x2A60 */
int *const * std::_Tuple_impl<0u,int *,test_cpp_smart_ptr::__2>::_M_head(
 const std::_Tuple_impl<0U,int *,test_cpp_smart_ptr::__2> *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZN11SimpleClassC2EiPKc @ 0x2A90 */
void SimpleClass::SimpleClass(SimpleClass *this, int v, const char *n)
{
 this->value = v;
 strncpy(this->name, n, 0x1Fu);
 this->name[31] = 0;
}


/* Function: _ZN11SimpleClass8setValueEi @ 0x2AE0 */
void SimpleClass::setValue(SimpleClass *this, int v)
{
 this->value = v;
}


/* Function: _ZNK11SimpleClass8getValueEv @ 0x2B00 */
int SimpleClass::getValue(const SimpleClass *this)
{
 return this->value;
}


/* Function: _ZNK11SimpleClass7computeEi @ 0x2B10 */
int SimpleClass::compute(const SimpleClass *this, int x)
{
 int v3; // [esp+10h] [ebp-8h]

 v3 = x * this->value;
 return strlen(this->name) + v3;
}


/* Function: _ZN11SimpleClass10getClassIDEv @ 0x2B50 */
int SimpleClass::getClassID()
{
 return 4660;
}


/* Function: _ZN14LifecycleClassC2Ej @ 0x2B60 */
void LifecycleClass::LifecycleClass(LifecycleClass *this, size_t s)
{
 size_t i; // [esp+10h] [ebp-8h]

 this->size = s;
 this->data = (int *)operator new[](saturated_mul(4u, s));
 for ( i = 0; i < s; ++i )
 this->data[i] = 10 * i;
 *(&GLOBAL_OFFSET_TABLE_ + 33) = (Elf32_Dyn *)((char *)*(&GLOBAL_OFFSET_TABLE_ + 33) + 1);
}


/* Function: _ZNK14LifecycleClass7getDataEj @ 0x2C00 */
int LifecycleClass::getData(const LifecycleClass *this, size_t idx)
{
 if ( idx >= this->size )
 return -1;
 else
 return this->data[idx];
}


/* Function: _ZN14LifecycleClass16getInstanceCountEv @ 0x2C50 */
int LifecycleClass::getInstanceCount()
{
 return LifecycleClass::instance_count;
}


/* Function: _ZN14LifecycleClassD2Ev @ 0x2C70 */
void LifecycleClass::~LifecycleClass(LifecycleClass *this)
{
 if ( this->data )
 operator delete[](this->data);
 --LifecycleClass::instance_count;
}


/* Function: _ZN4BaseC2Ev @ 0x2CC0 */
void Base::Base(Base *this)
{
 this->_vptr$Base = (int (**)(void))&off_8C3C;
}


/* Function: _ZN7DerivedC2Ei @ 0x2CF0 */
void Derived::Derived(Derived *this, int m)
{
 Base::Base(this);
 this->_vptr$Base = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 233);
 this->multiplier = m;
}


/* Function: _ZN4Base12virtual_funcEi @ 0x2D40 */
int Base::virtual_func(Base *this, int x)
{
 return x + 1;
}


/* Function: _ZN7Derived12virtual_funcEi @ 0x2D60 */
int Derived::virtual_func(Derived *this, int x)
{
 return this->multiplier * x;
}


/* Function: _ZN7DerivedD2Ev @ 0x2D80 */
void Derived::~Derived(Derived *this)
{
 Base::~Base(this);
}


/* Function: _ZN4BaseD2Ev @ 0x2DB0 */
void Base::~Base(Base *this)
{
 ;
}


/* Function: _ZN12MultiDerivedC2Ev @ 0x2DC0 */
void MultiDerived::MultiDerived(MultiDerived *this)
{
 BaseA::BaseA(this);
 BaseB::BaseB(&this->BaseB);
 this->_vptr$BaseA = (int (**)(void))&(&GLOBAL_OFFSET_TABLE_)[-28];
 this->_vptr$BaseB = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 218);
}


/* Function: _ZN12MultiDerivedD2Ev @ 0x2E20 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 BaseB::~BaseB(&this->BaseB);
 BaseA::~BaseA(this);
}


/* Function: _ZN14DiamondDerivedC1Ev @ 0x2E60 */
void DiamondDerived::DiamondDerived(DiamondDerived *this)
{
 VirtualBase::VirtualBase((VirtualBase *)&this->MiddleB);
 MiddleA::MiddleA(this, (void **)off_8D4C);
 MiddleB::MiddleB((MiddleB *)(&this->dataA + 1), (void **)off_8D54);
 this->_vptr$MiddleA = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 190);
 this->_vptr$MiddleB = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 177);
 *(&this->dataA + 1) = (int)(&GLOBAL_OFFSET_TABLE_ - 184);
}


/* Function: _ZN14DiamondDerivedD1Ev @ 0x2F00 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this, (void **)&VTT_for_DiamondDerived);
 VirtualBase::~VirtualBase((VirtualBase *)&this->MiddleB);
}


/* Function: _ZN5PointC2Eii @ 0x2F50 */
void Point::Point(Point *this, int _x, int _y)
{
 this->x = _x;
 this->y = _y;
}


/* Function: _ZNK5PointplERKS_ @ 0x2F70 */
Point * Point::operator+(Point *__return_ptr retstr, const Point *this, const Point *other)
{
 Point::Point(retstr, other->x + this->x, other->y + this->y);
 return retstr;
}


/* Function: _ZNK5PointeqERKS_ @ 0x2FD0 */
bool Point::operator==(const Point *this, const Point *other)
{
 bool v3; // [esp+7h] [ebp-1h]

 v3 = 0;
 if ( this->x == other->x )
 return this->y == other->y;
 return v3;
}


/* Function: _ZN5PointppEv @ 0x3020 */
Point * Point::operator++(Point *this)
{
 Point *result; // eax

 result = this;
 ++this->x;
 ++this->y;
 return result;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x3040 */
int template_max<int>(int a, int b)
{
 if ( a <= b )
 return b;
 else
 return a;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x3070 */
double template_max<double>(double a, double b)
{
 if ( a <= (long double)b )
 return b;
 else
 return a;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x30B0 */
void template_swap<int>(int *a, int *b)
{
 int temp; // [esp+0h] [ebp-4h]

 temp = *a;
 *a = *b;
 *b = temp;
}


/* Function: _ZN9ContainerIiEC2Ev @ 0x30E0 */
void Container<int>::Container(Container<int> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x3100 */
void Container<int>::push(Container<int> *this, int value)
{
 int size; // ecx

 if ( this->size < 10 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x3140 */
int Container<int>::get(const Container<int> *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x3190 */
int Container<int>::getSize(const Container<int> *this)
{
 return this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x31A0 */
void Container<double>::Container(Container<double> *this)
{
 this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x31C0 */
void Container<double>::push(Container<double> *this, double value)
{
 int size; // ecx

 if ( this->size < 10 )
 {
 size = this->size;
 this->size = size + 1;
 this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x3200 */
double Container<double>::get(const Container<double> *this, int idx)
{
 if ( idx < 0 || idx >= this->size )
 return 0.0;
 else
 return this->data[idx];
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x3260 */
int Container<double>::getSize(const Container<double> *this)
{
 return this->size;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2IS1_vEEPi @ 0x3270 */
void std::unique_ptr<int>::unique_ptr(
 std::unique_ptr<int> *this,
 std::unique_ptr<int>::pointer __p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEEdeEv @ 0x32C0 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int>::operator*(
 const std::unique_ptr<int> *this)
{
 return std::unique_ptr<int>::get(this);
}


/* Function: _ZSt4moveIRSt10unique_ptrIiSt14default_deleteIiEEEONSt16remove_referenceIT_E4typeEOS6_ @ 0x3300 */
std::remove_reference<std::unique_ptr<int> &>::type * std::move<std::unique_ptr<int> &>(
 std::unique_ptr<int> *__t)
{
 return __t;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEEC2EOS2_ @ 0x3310 */
void std::unique_ptr<int>::unique_ptr(std::unique_ptr<int> *this, const std::unique_ptr<int> *a2)
{
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(&this->_M_t, &a2->_M_t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EEC2IPiS2_vbEET_ @ 0x3350 */
void std::unique_ptr<int []>::unique_ptr(
 std::unique_ptr<int[]> *this,
 int *__p)
{
 ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(&this->_M_t, __p);
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EEixEj @ 0x33A0 */
std::__add_lvalue_reference_helper<int,true>::type std::unique_ptr<int []>::operator[](
 const std::unique_ptr<int[]> *this,
 std::size_t __i)
{
 return &std::unique_ptr<int []>::get(this)[__i];
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EED2Ev @ 0x33F0 */
void std::unique_ptr<int []>::~unique_ptr(std::unique_ptr<int[]> *this)
{
 std::unique_ptr<int[]>::deleter_type *deleter; // ecx
 int **__ptr; // [esp+10h] [ebp-8h]

 __ptr = std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int []>::get_deleter(this);
 std::default_delete<int []>::operator()<int>(deleter, *__ptr);
 }
 *__ptr = 0;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEED2Ev @ 0x3470 */
void std::unique_ptr<int>::~unique_ptr(std::unique_ptr<int> *this)
{
 int *v1; // edx
 std::unique_ptr<int>::deleter_type *deleter; // [esp+14h] [ebp-14h]
 int **__ptr; // [esp+20h] [ebp-8h]

 __ptr = std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
 if ( *__ptr )
 {
 deleter = std::unique_ptr<int>::get_deleter(this);
 v1 = *std::move<int *&>(__ptr);
 std::default_delete<int>::operator()(deleter, v1);
 }
 *__ptr = 0;
}


/* Function: _ZN12RTTIDerivedAC2Ev @ 0x3500 */
void RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))(&GLOBAL_OFFSET_TABLE_ - 82);
}


/* Function: _ZN12RTTIDerivedBC2Ev @ 0x3540 */
void RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::RTTIBase(this);
 this->_vptr$RTTIBase = (int (**)(void))&(&GLOBAL_OFFSET_TABLE_)[-9];
}


/* Function: _ZNKSt9type_infoeqERKS_ @ 0x3580 */
bool std::type_info::operator==(const std::type_info *this, const std::type_info *__arg)
{
 bool v3; // [esp+17h] [ebp-11h]
 char v4; // [esp+23h] [ebp-5h]

 v4 = 1;
 if ( *((unsigned int *)this + 1) != *((unsigned int *)__arg + 1) )
 {
 v3 = 0;
 if ( **((unsigned char **)this + 1) != 42 )
 v3 = strcmp(*((const char **)this + 1), *((const char **)__arg + 1)) == 0;
 v4 = v3;
 }
 return v4 & 1;
}


/* Function: _ZNK12RTTIDerivedA13derivedA_dataEv @ 0x3610 */
int RTTIDerivedA::derivedA_data(const RTTIDerivedA *this)
{
 return 100;
}


/* Function: _ZNK12RTTIDerivedB13derivedB_dataEv @ 0x3620 */
int RTTIDerivedB::derivedB_data(const RTTIDerivedB *this)
{
 return 200;
}


/* Function: _ZNKSt9type_info4nameEv @ 0x3630 */
const char * std::type_info::name(const std::type_info *this)
{
 if ( **((unsigned char **)this + 1) == 42 )
 return (const char *)(*((unsigned int *)this + 1) + 1);
 else
 return (const char *)*((unsigned int *)this + 1);
}


/* Function: _ZNK4Base7getNameEv @ 0x3670 */
const char * Base::getName(const Base *this)
{
 return "Base";
}


/* Function: _ZN4BaseD0Ev @ 0x3690 */
void Base::~Base(Base *this)
{
 Base::~Base(this);
 operator delete(this);
}


/* Function: _ZNK7Derived7getNameEv @ 0x36D0 */
const char * Derived::getName(const Derived *this)
{
 return "Derived";
}


/* Function: _ZN7DerivedD0Ev @ 0x36F0 */
void Derived::~Derived(Derived *this)
{
 Derived::~Derived(this);
 operator delete(this);
}


/* Function: _ZN5BaseAC2Ev @ 0x3730 */
void BaseA::BaseA(BaseA *this)
{
 this->_vptr$BaseA = (int (**)(void))&off_8CDC;
}


/* Function: _ZN5BaseBC2Ev @ 0x3760 */
void BaseB::BaseB(BaseB *this)
{
 this->_vptr$BaseB = (int (**)(void))&off_8CF0;
}


/* Function: _ZN12MultiDerived5funcAEv @ 0x3790 */
int MultiDerived::funcA(MultiDerived *this)
{
 return 30;
}


/* Function: _ZN12MultiDerivedD0Ev @ 0x37A0 */
void MultiDerived::~MultiDerived(MultiDerived *this)
{
 MultiDerived::~MultiDerived(this);
 operator delete(this);
}


/* Function: _ZN12MultiDerived5funcBEv @ 0x37E0 */
int MultiDerived::funcB(MultiDerived *this)
{
 return 40;
}


/* Function: _ZThn8_N12MultiDerived5funcBEv @ 0x37F0 */
void ZThn8_N12MultiDerived5funcBEv(int a1)
{
 MultiDerived::funcB((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD1Ev @ 0x3820 */
void ZThn8_N12MultiDerivedD1Ev(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZThn8_N12MultiDerivedD0Ev @ 0x3850 */
void ZThn8_N12MultiDerivedD0Ev(int a1)
{
 MultiDerived::~MultiDerived((MultiDerived *)(a1 - 8));
}


/* Function: _ZN5BaseA5funcAEv @ 0x3880 */
int BaseA::funcA(BaseA *this)
{
 return 10;
}


/* Function: _ZN5BaseAD2Ev @ 0x3890 */
void BaseA::~BaseA(BaseA *this)
{
 ;
}


/* Function: _ZN5BaseAD0Ev @ 0x38A0 */
void BaseA::~BaseA(BaseA *this)
{
 BaseA::~BaseA(this);
 operator delete(this);
}


/* Function: _ZN5BaseB5funcBEv @ 0x38E0 */
int BaseB::funcB(BaseB *this)
{
 return 20;
}


/* Function: _ZN5BaseBD2Ev @ 0x38F0 */
void BaseB::~BaseB(BaseB *this)
{
 ;
}


/* Function: _ZN5BaseBD0Ev @ 0x3900 */
void BaseB::~BaseB(BaseB *this)
{
 BaseB::~BaseB(this);
 operator delete(this);
}


/* Function: _ZN11VirtualBaseC2Ev @ 0x3940 */
void VirtualBase::VirtualBase(VirtualBase *this)
{
 this->_vptr$VirtualBase = (int (**)(void))&off_8E2C;
}


/* Function: _ZN7MiddleAC2Ev @ 0x3970 */
void MiddleA::MiddleA(MiddleA *this, void **vtt)
{
 this->_vptr$MiddleA = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleA + *((unsigned int *)this->_vptr$MiddleA - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleBC2Ev @ 0x3990 */
void MiddleB::MiddleB(MiddleB *this, void **vtt)
{
 this->_vptr$MiddleB = (int (**)(void))*vtt;
 *(int (***)(void))((char *)&this->_vptr$MiddleB + *((unsigned int *)this->_vptr$MiddleB - 3)) = (int (**)(void))vtt[1];
}


/* Function: _ZN7MiddleA4funcEv @ 0x39B0 */
int MiddleA::func(MiddleA *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 150;
}


/* Function: _ZN7MiddleAD1Ev @ 0x39D0 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this, (void **)VTT_for_MiddleA);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataA + 1));
}


/* Function: _ZN7MiddleAD0Ev @ 0x3A20 */
void MiddleA::~MiddleA(MiddleA *this)
{
 MiddleA::~MiddleA(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleA4funcEv @ 0x3A60 */
void thunk_virtual_MiddleA_func(unsigned int *a1)
{
 MiddleA::func((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleAD1Ev @ 0x3A90 */
void thunk_virtual_MiddleA_d1(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleAD0Ev @ 0x3AC0 */
void thunk_virtual_MiddleA_d0(unsigned int *a1)
{
 MiddleA::~MiddleA((MiddleA *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN7MiddleB4funcEv @ 0x3AF0 */
int MiddleB::func(MiddleB *this)
{
 return *(int *)((char *)&this->dataB + *((unsigned int *)this->_vptr$MiddleB - 3)) + 200;
}


/* Function: _ZN7MiddleBD1Ev @ 0x3B10 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this, (void **)VTT_for_MiddleB);
 VirtualBase::~VirtualBase((VirtualBase *)(&this->dataB + 1));
}


/* Function: _ZN7MiddleBD0Ev @ 0x3B60 */
void MiddleB::~MiddleB(MiddleB *this)
{
 MiddleB::~MiddleB(this);
 operator delete(this);
}


/* Function: _ZTv0_n12_N7MiddleB4funcEv @ 0x3BA0 */
void thunk_virtual_MiddleB_func(unsigned int *a1)
{
 MiddleB::func((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N7MiddleBD1Ev @ 0x3BD0 */
void thunk_virtual_MiddleB_d1(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N7MiddleBD0Ev @ 0x3C00 */
void thunk_virtual_MiddleB_d0(unsigned int *a1)
{
 MiddleB::~MiddleB((MiddleB *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN14DiamondDerived4funcEv @ 0x3C30 */
int DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((char *)&this->dataA + *((unsigned int *)this->_vptr$MiddleA - 3)) + 250;
}


/* Function: _ZN14DiamondDerivedD0Ev @ 0x3C50 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this)
{
 DiamondDerived::~DiamondDerived(this);
 operator delete(this);
}


/* Function: _ZThn8_N14DiamondDerived4funcEv @ 0x3C90 */
void ZThn8_N14DiamondDerived4funcEv(int a1)
{
 DiamondDerived::func((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD1Ev @ 0x3CC0 */
void ZThn8_N14DiamondDerivedD1Ev(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZThn8_N14DiamondDerivedD0Ev @ 0x3CF0 */
void ZThn8_N14DiamondDerivedD0Ev(int a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)(a1 - 8));
}


/* Function: _ZTv0_n12_N14DiamondDerived4funcEv @ 0x3D20 */
void thunk_virtual_DiamondDerived_func(unsigned int *a1)
{
 DiamondDerived::func((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 12)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD1Ev @ 0x3D50 */
void thunk_virtual_DiamondDerived_d1(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZTv0_n16_N14DiamondDerivedD0Ev @ 0x3D80 */
void thunk_virtual_DiamondDerived_d0(unsigned int *a1)
{
 DiamondDerived::~DiamondDerived((DiamondDerived *)((char *)a1 + *(unsigned int *)(*a1 - 16)));
}


/* Function: _ZN11VirtualBase4funcEv @ 0x3DB0 */
int VirtualBase::func(VirtualBase *this)
{
 return 100;
}


/* Function: _ZN11VirtualBaseD2Ev @ 0x3DC0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 ;
}


/* Function: _ZN11VirtualBaseD0Ev @ 0x3DD0 */
void VirtualBase::~VirtualBase(VirtualBase *this)
{
 VirtualBase::~VirtualBase(this);
 operator delete(this);
}


/* Function: _ZN7MiddleAD2Ev @ 0x3E10 */
void MiddleA::~MiddleA(MiddleA *this, void **vtt)
{
 ;
}


/* Function: _ZN7MiddleBD2Ev @ 0x3E20 */
void MiddleB::~MiddleB(MiddleB *this, void **vtt)
{
 ;
}


/* Function: _ZN14DiamondDerivedD2Ev @ 0x3E30 */
void DiamondDerived::~DiamondDerived(DiamondDerived *this, void **vtt)
{
 MiddleB::~MiddleB((MiddleB *)(&this->dataA + 1), vtt + 3);
 MiddleA::~MiddleA(this, vtt + 1);
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EEC2EOS2_ @ 0x3E90 */
void std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *a2)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EOS2_ @ 0x3ED0 */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> > *__u)
{
 std::tuple<int *,std::default_delete<int> > *v2; // eax

 v2 = std::move<std::tuple<int *,std::default_delete<int>> &>(&__u->_M_t);
 std::tuple<int *,std::default_delete<int>>::tuple(&this->_M_t, v2);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(__u) = 0;
}


/* Function: _ZSt4moveIRSt5tupleIJPiSt14default_deleteIiEEEEONSt16remove_referenceIT_E4typeEOS7_ @ 0x3F50 */
std::remove_reference<std::tuple<int *,std::default_delete<int> > &>::type * std::move<std::tuple<int *,std::default_delete<int>> &>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return __t;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2EOS3_ @ 0x3F60 */
void std::tuple<int *,std::default_delete<int>>::tuple(
 std::tuple<int *,std::default_delete<int> > *this,
 std::tuple<int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this, a2);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x3FA0 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return *std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: __clang_call_terminate @ 0x3FD0 */
void _clang_call_terminate(void *a1)
{
 __cxa_begin_catch(a1);
 std::terminate();
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2EOS3_ @ 0x4000 */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this,
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *a2)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this, a2);
 *(unsigned int *)&this->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0 = *(unsigned int *)&a2->std::_Tuple_impl<1U,std::default_delete<int> >::std::_Head_base<1U,std::default_delete<int>,true>::_M_head_impl.gap0;
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2EOS2_ @ 0x4040 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this,
 std::_Tuple_impl<1U,std::default_delete<int> > *__in)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x4050 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4080 */
int ** std::__get_helper<0u,int *,std::default_delete<int>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERS3_ @ 0x40B0 */
int ** std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERS1_ @ 0x40E0 */
int ** std::_Head_base<0u,int *,false>::_M_head(std::_Head_base<0U,int *,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZN8RTTIBaseC2Ev @ 0x40F0 */
void RTTIBase::RTTIBase(RTTIBase *this)
{
 this->_vptr$RTTIBase = (int (**)(void))off_8ECC;
}


/* Function: _ZN12RTTIDerivedAD2Ev @ 0x4120 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x4150 */
void RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)
{
 RTTIDerivedA::~RTTIDerivedA(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x4190 */
int RTTIDerivedA::getType(const RTTIDerivedA *this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x41A0 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 ;
}


/* Function: _ZN8RTTIBaseD0Ev @ 0x41B0 */
void RTTIBase::~RTTIBase(RTTIBase *this)
{
 RTTIBase::~RTTIBase(this);
 operator delete(this);
}


/* Function: _ZNK8RTTIBase7getTypeEv @ 0x41F0 */
int RTTIBase::getType(const RTTIBase *this)
{
 return 0;
}


/* Function: _ZN12RTTIDerivedBD2Ev @ 0x4200 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIBase::~RTTIBase(this);
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x4230 */
void RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)
{
 RTTIDerivedB::~RTTIDerivedB(this);
 operator delete(this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x4270 */
int RTTIDerivedB::getType(const RTTIDerivedB *this)
{
 return 2;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi @ 0x4280 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIiELb1ELb1EECI2St15__uniq_ptr_implIiS1_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(this, __p);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEEC2EPi @ 0x42C0 */
void std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIiEEEC2ILb1ELb1EEEv @ 0x4310 */
void std::tuple<int *,std::default_delete<int>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(this);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEEC2Ev @ 0x4350 */
void std::_Tuple_impl<0u,int *,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEEC2Ev @ 0x4390 */
void std::_Tuple_impl<1u,std::default_delete<int>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int> > *this)
{
 std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2Ev @ 0x43C0 */
void std::_Head_base<0u,int *,false>::_Head_base(std::_Head_base<0U,int *,false> *this)
{
 this->_M_head_impl = 0;
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EEC2Ev @ 0x43E0 */
void std::_Head_base<1u,std::default_delete<int>,true>::_Head_base(
 std::_Head_base<1U,std::default_delete<int>,true> *this)
{
 ;
}


/* Function: _ZNSt10unique_ptrIiSt14default_deleteIiEE11get_deleterEv @ 0x43F0 */
std::unique_ptr<int>::deleter_type * std::unique_ptr<int>::get_deleter(std::unique_ptr<int> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIiEclEPi @ 0x4440 */
void std::default_delete<int>::operator()(const std::default_delete<int> *this, int *__ptr)
{
 if ( __ptr )
 operator delete(__ptr);
}


/* Function: _ZSt4moveIRPiEONSt16remove_referenceIT_E4typeEOS3_ @ 0x4480 */
std::remove_reference<int *&>::type * std::move<int *&>(int **__t)
{
 return __t;
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIiEE10_M_deleterEv @ 0x4490 */
std::default_delete<int> * std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return std::get<1u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIiEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS7_ @ 0x44C0 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int> > > * std::get<1u,int *,std::default_delete<int>>(
 std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIiEJEERT0_RSt11_Tuple_implIXT_EJS2_DpT1_EE @ 0x44F0 */
std::default_delete<int> * std::__get_helper<1u,std::default_delete<int>>(
 std::_Tuple_impl<1U,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIiEEE7_M_headERS2_ @ 0x4520 */
std::default_delete<int> * std::_Tuple_impl<1u,std::default_delete<int>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIiELb1EE7_M_headERS2_ @ 0x4550 */
std::default_delete<int> * std::_Head_base<1u,std::default_delete<int>,true>::_M_head(
 std::_Head_base<1U,std::default_delete<int>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIiSt14default_deleteIiEE3getEv @ 0x4560 */
std::unique_ptr<int>::pointer std::unique_ptr<int>::get(const std::unique_ptr<int> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIiEE6_M_ptrEv @ 0x45B0 */
std::__uniq_ptr_impl<int,std::default_delete<int> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int> > *this)
{
 return *std::get<0u,int *,std::default_delete<int>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIiEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS7_ @ 0x45E0 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int> > > * std::get<0u,int *,std::default_delete<int>>(
 const std::tuple<int *,std::default_delete<int> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIiEEERKT0_RKSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4610 */
int *const * std::__get_helper<0u,int *,std::default_delete<int>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIiEEE7_M_headERKS3_ @ 0x4640 */
int *const * std::_Tuple_impl<0u,int *,std::default_delete<int>>::_M_head(
 const std::_Tuple_impl<0U,int *,std::default_delete<int> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EE7_M_headERKS1_ @ 0x4670 */
int *const * std::_Head_base<0u,int *,false>::_M_head(const std::_Head_base<0U,int *,false> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi @ 0x4680 */
void ZNSt15__uniq_ptr_dataIiSt14default_deleteIA_iELb1ELb1EECI2St15__uniq_ptr_implIiS2_EEPi(
 std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(this, __p);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEEC2EPi @ 0x46C0 */
void std::__uniq_ptr_impl<int,std::default_delete<int []>>::__uniq_ptr_impl(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this,
 std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer __p)
{
 std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(&this->_M_t);
 *std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(this) = __p;
}


/* Function: _ZNSt5tupleIJPiSt14default_deleteIA_iEEEC2ILb1ELb1EEEv @ 0x4710 */
void std::tuple<int *,std::default_delete<int []>>::tuple<true,true>(
 std::tuple<int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(this);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4750 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEEC2Ev @ 0x4780 */
void std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *this)
{
 std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(this);
 std::_Head_base<0u,int *,false>::_Head_base((std::_Head_base<0U,int *,false> *)this);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEEC2Ev @ 0x47C0 */
void std::_Tuple_impl<1u,std::default_delete<int []>>::_Tuple_impl(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *this)
{
 std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(this);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EEC2Ev @ 0x47F0 */
void std::_Head_base<1u,std::default_delete<int []>,true>::_Head_base(
 std::_Head_base<1U,std::default_delete<int[]>,true> *this)
{
 ;
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4800 */
std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERT0_RSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4830 */
int ** std::__get_helper<0u,int *,std::default_delete<int []>>(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERS4_ @ 0x4860 */
int ** std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZNSt10unique_ptrIA_iSt14default_deleteIS0_EE11get_deleterEv @ 0x4890 */
std::unique_ptr<int[]>::deleter_type * std::unique_ptr<int []>::get_deleter(std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(&this->_M_t);
}


/* Function: _ZNKSt14default_deleteIA_iEclIiEENSt9enable_ifIXsr14is_convertibleIPA_T_PS0_EE5valueEvE4typeEPS4_ @ 0x48E0 */
std::enable_if<true,void>::type std::default_delete<int []>::operator()<int>(
 const std::default_delete<int[]> *this,
 int *__ptr)
{
 if ( __ptr )
 operator delete[](__ptr);
}


/* Function: _ZNSt15__uniq_ptr_implIiSt14default_deleteIA_iEE10_M_deleterEv @ 0x4920 */
std::default_delete<int[]> * std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_deleter(
 std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return std::get<1u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj1EJPiSt14default_deleteIA_iEEERNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERS8_ @ 0x4950 */
std::__tuple_element_t<1U,std::tuple<int *,std::default_delete<int[]> > > * std::get<1u,int *,std::default_delete<int []>>(
 std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<1u,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj1ESt14default_deleteIA_iEJEERT0_RSt11_Tuple_implIXT_EJS3_DpT1_EE @ 0x4980 */
std::default_delete<int[]> * std::__get_helper<1u,std::default_delete<int []>>(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj1EJSt14default_deleteIA_iEEE7_M_headERS3_ @ 0x49B0 */
std::default_delete<int[]> * std::_Tuple_impl<1u,std::default_delete<int []>>::_M_head(
 std::_Tuple_impl<1U,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(__t);
}


/* Function: _ZNSt10_Head_baseILj1ESt14default_deleteIA_iELb1EE7_M_headERS3_ @ 0x49E0 */
std::default_delete<int[]> * std::_Head_base<1u,std::default_delete<int []>,true>::_M_head(
 std::_Head_base<1U,std::default_delete<int[]>,true> *__b)
{
 return &__b->_M_head_impl;
}


/* Function: _ZNKSt10unique_ptrIA_iSt14default_deleteIS0_EE3getEv @ 0x49F0 */
std::unique_ptr<int[]>::pointer std::unique_ptr<int []>::get(const std::unique_ptr<int[]> *this)
{
 return std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(&this->_M_t);
}


/* Function: _ZNKSt15__uniq_ptr_implIiSt14default_deleteIA_iEE6_M_ptrEv @ 0x4A40 */
std::__uniq_ptr_impl<int,std::default_delete<int[]> >::pointer std::__uniq_ptr_impl<int,std::default_delete<int []>>::_M_ptr(
 const std::__uniq_ptr_impl<int,std::default_delete<int[]> > *this)
{
 return *std::get<0u,int *,std::default_delete<int []>>(&this->_M_t);
}


/* Function: _ZSt3getILj0EJPiSt14default_deleteIA_iEEERKNSt13tuple_elementIXT_ESt5tupleIJDpT0_EEE4typeERKS8_ @ 0x4A70 */
const std::__tuple_element_t<0U,std::tuple<int *,std::default_delete<int[]> > > * std::get<0u,int *,std::default_delete<int []>>(
 const std::tuple<int *,std::default_delete<int[]> > *__t)
{
 return std::__get_helper<0u,int *,std::default_delete<int []>>(__t);
}


/* Function: _ZSt12__get_helperILj0EPiJSt14default_deleteIA_iEEERKT0_RKSt11_Tuple_implIXT_EJS4_DpT1_EE @ 0x4AA0 */
int *const * std::__get_helper<0u,int *,std::default_delete<int []>>(
 const std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(__t);
}


/* Function: _ZNSt11_Tuple_implILj0EJPiSt14default_deleteIA_iEEE7_M_headERKS4_ @ 0x4AD0 */
int *const * std::_Tuple_impl<0u,int *,std::default_delete<int []>>::_M_head(
 const std::_Tuple_impl<0U,int *,std::default_delete<int[]> > *__t)
{
 return std::_Head_base<0u,int *,false>::_M_head((const std::_Head_base<0U,int *,false> *)__t);
}


/* Function: _ZSt7forwardIRPiEOT_RNSt16remove_referenceIS2_E4typeE @ 0x4B00 */
int ** std::forward<int *&>(std::remove_reference<int *&>::type *__t)
{
 return __t;
}


/* Function: _ZNSt10_Head_baseILj0EPiLb0EEC2IRS0_EEOT_ @ 0x4B10 */
void std::_Head_base<0u,int *,false>::_Head_base<int *&>(std::_Head_base<0U,int *,false> *this, int **__h)
{
 this->_M_head_impl = *std::forward<int *&>(__h);
}



/* CRT stub function __do_global_ctors_aux removed by preprocessor */



/* Function: .term_proc @ 0x4B9C */
void term_proc()
{
 _do_global_dtors_aux();
}


/* FAILED to decompile: _Znwj @ 0x9090 */

/* FAILED to decompile: __cxa_finalize @ 0x9094 */

/* FAILED to decompile: _ZSt9terminatev @ 0x9098 */

/* FAILED to decompile: __cxa_begin_catch @ 0x909C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x90A0 */

/* FAILED to decompile: strlen @ 0x90A4 */

/* FAILED to decompile: __cxa_atexit @ 0x90A8 */

/* FAILED to decompile: strcmp @ 0x90B0 */

/* FAILED to decompile: __libc_start_main @ 0x90B4 */

/* FAILED to decompile: _Znaj @ 0x90B8 */

/* FAILED to decompile: strncpy @ 0x90BC */

/* FAILED to decompile: _ZdlPv @ 0x90C0 */

/* FAILED to decompile: __cxa_bad_typeid @ 0x90C4 */

/* FAILED to decompile: __dynamic_cast @ 0x90C8 */

/* FAILED to decompile: _ZdaPv @ 0x90CC */

/* FAILED to decompile: printf @ 0x90D4 */

/* FAILED to decompile: __cxa_rethrow @ 0x90D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x90DC */

/* FAILED to decompile: __cxa_end_catch @ 0x90E0 */

/* FAILED to decompile: memset @ 0x90E4 */

/* FAILED to decompile: __gxx_personality_v0 @ 0x90E8 */

/* FAILED to decompile: __cxa_throw @ 0x90EC */

/* FAILED to decompile: _Unwind_Resume @ 0x90F4 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x90F8 */

/* Total functions decompiled: 221, failed: 24 */
