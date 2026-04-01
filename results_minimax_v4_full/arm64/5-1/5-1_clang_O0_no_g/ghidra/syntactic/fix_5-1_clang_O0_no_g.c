/* Auto-injected type definitions by preprocessor */
typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef unsigned int uint32_t;
typedef unsigned long long uint64_t;
typedef signed char int8_t;
typedef short int16_t;
typedef int int32_t;
typedef long long int64_t;
typedef unsigned long ulong;
typedef long ssize_t;
typedef unsigned long uintptr_t;
typedef long intptr_t;
typedef unsigned long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Ghidra types */
typedef unsigned long long undefined8;
typedef unsigned int undefined4;
typedef unsigned short undefined2;
typedef unsigned char undefined1;
typedef unsigned char byte;

/* Standard types */
typedef int bool;
#define true 1
#define false 0

/* Function pointer types */
typedef void (*code)();
typedef void *type;

/* CRITICAL: Forward declaration for lambda closure types - MUST come first */
struct __2;  /* test_cpp_smart_ptr()::__2 */
struct __0;  /* test_cpp_lambda()::$_0 */
struct __1;  /* test_cpp_lambda()::$_1 */

/* Forward declaration for all classes - needed early */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declaration for _Head_base - primary template first */
template<size_t I, typename T, bool IsBase> class _Head_base;

/* Forward declaration for default_delete - primary template */
template<typename T> class default_delete;

/* Forward declarations for tuple and unique_ptr */
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T> class unique_ptr;

/* Forward declaration for all classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declaration for _Head_base */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declaration for default_delete */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declarations for tuple and unique_ptr */
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T> class unique_ptr;

/* Forward declaration for default_delete */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declaration for _Head_base */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declarations for all classes - needed early */
struct MultiDerived;
struct Point;
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declaration for _Head_base - needed early for template classes */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declaration for default_delete */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declarations for tuple and unique_ptr */
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T> class unique_ptr;

/* Forward declaration for _Head_base - needed early for template classes */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declaration for default_delete */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declarations for all classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declarations for tuple and unique_ptr */
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T> class unique_ptr;

/* Forward declarations for all classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declaration for default_delete - primary template and specializations */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declaration for _Head_base - primary template and specializations */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declarations for tuple and related */
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;

/* Forward declarations for unique_ptr and related */
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T> class unique_ptr;

/* Template class definitions for _Head_base */
template<size_t I, typename T, bool IsBase>
class _Head_base;

template<size_t I, typename T>
class _Head_base<I, T, false> {
public:
    T _M_head_impl;
    T& _M_head() { return _M_head_impl; }
    _Head_base() : _M_head_impl() {}
    template<typename U> _Head_base(U&& u) : _M_head_impl(std::forward<U>(u)) {}
};

template<size_t I, typename T>
class _Head_base<I, T, true> {
public:
    T _M_head_impl;
    T& _M_head() { return _M_head_impl; }
    _Head_base() : _M_head_impl() {}
    template<typename U> _Head_base(U&& u) : _M_head_impl(std::forward<U>(u)) {}
};

/* default_delete template class definition */
template<typename T>
class default_delete {
public:
    void operator()(T* p) const {
        if (p) operator_delete(p);
    }
};

template<>
class default_delete<int> {
public:
    void operator()(int* p) const {
        if (p) operator_delete(p);
    }
};

template<>
class default_delete<int[]> {
public:
    void operator()(int* p) const {
        if (p) operator_delete__(p);
    }
};

template<>
class default_delete<double> {
public:
    void operator()(double* p) const {
        if (p) operator_delete(p);
    }
};

template<>
class default_delete<double[]> {
public:
    void operator()(double* p) const {
        if (p) operator_delete__(p);
    }
};

/* __uniq_ptr_impl template class definition */
template<typename T, typename D>
class __uniq_ptr_impl {
public:
    T* _M_ptr() {
        return get<0, T, D>(reinterpret_cast<tuple*>(&buffer));
    }
    D& _M_deleter() {
        return *get<1, T, D>(reinterpret_cast<tuple*>(&buffer));
    }
    char buffer[sizeof(tuple<T, D>)];
};

/* __uniq_ptr_data template class definition */
template<typename T, typename D, bool is_array, bool is_void>
class __uniq_ptr_data;

/* unique_ptr template class definition */
template<typename T, typename D = default_delete<T>>
class unique_ptr {
public:
    unique_ptr() = default;
    unique_ptr(T* p) : impl(p) {}
    T& operator*() { return *impl._M_ptr(); }
    ~unique_ptr() {
        if (impl._M_ptr()) {
            impl._M_deleter()(impl._M_ptr());
        }
    }
private:
    __uniq_ptr_impl<T, D> impl;
};

/* tuple and _Tuple_impl template class definitions */
template<typename... Types>
class tuple {};

template<size_t I, typename... Types>
class _Tuple_impl;

template<size_t I, typename T>
class _Tuple_impl<I, T> : public _Head_base<I, T, I == 0> {
public:
    _Tuple_impl() : _Head_base<I, T, I == 0>() {}
    template<typename U> _Tuple_impl(U&& u) : _Head_base<I, T, I == 0>(std::forward<U>(u)) {}
    static _Head_base<I, T, I == 0>& _M_head(_Tuple_impl& t) { return t; }
};

template<typename T, typename D>
class tuple<T, D> : public _Tuple_impl<0, T, D> {
public:
    tuple() : _Tuple_impl<0, T, D>() {}
};

template<size_t I, typename T, typename... Types>
class _Tuple_impl<I, T, Types...> : public _Tuple_impl<I, T>, public _Tuple_impl<I + 1, Types...> {
public:
    static typename _Tuple_impl<I, T>::_Head_base& _M_head(_Tuple_impl& t) {
        return _Tuple_impl<I, T>::_M_head(t);
    }
};

template<typename T>
_Tuple_impl<0, T>& __get_helper(tuple<T>& t) {
    return static_cast<_Tuple_impl<0, T>&>(t);
}

template<size_t I, typename... Types>
type* get(tuple<Types...>& t) {
    return reinterpret_cast<type*>(&_Tuple_impl<I, Types...>::_M_head(t));
}

/* Forward declarations for all classes - needed early */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declaration for default_delete - primary template */
template<typename T> class default_delete;

/* Forward declaration for _Head_base - primary template */
template<size_t I, typename T, bool IsBase> class _Head_base;

/* Forward declaration for template classes that use _Head_base */
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T> class unique_ptr;

/* Forward declaration for template classes that use _Head_base */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declaration for default_delete */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declarations for all classes */
struct MultiDerived;
struct Point;
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declarations for template classes */
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T> class unique_ptr;
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;

/* Forward declaration for default_delete - needed early */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declarations for classes - needed early */
struct MultiDerived;
struct Point;
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declaration for lambda closure types - MUST come first */
struct __2;  /* test_cpp_smart_ptr()::__2 */
struct __0;  /* test_cpp_lambda()::$_0 */
struct __1;  /* test_cpp_lambda()::$_1 */

/* Forward declaration for template classes that use _Head_base */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;

/* Forward declaration for default_delete */
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;

/* Forward declaration for all classes - needed early */
struct MultiDerived;
struct Point;
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declarations for template classes */
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T> class unique_ptr;
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;

/* Forward declaration for all classes - needed early */
struct MultiDerived;
struct Point;
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct DiamondDerived;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Forward declarations for template classes - MUST come first */
template<size_t I, typename T, bool IsBase> class _Head_base;
template<size_t I, typename T> class _Head_base<I, T, false>;
template<size_t I, typename T> class _Head_base<I, T, true>;
template<typename T> class default_delete;
template<> class default_delete<int>;
template<> class default_delete<int[]>;
template<typename T> class default_delete<T[]>;
template<> class default_delete<double>;
template<> class default_delete<double[]>;
template<typename T> class unique_ptr;
template<typename T, typename D> class __uniq_ptr_impl;
template<typename T, typename D, bool = true, bool = true> class __uniq_ptr_data;
template<typename... Types> class tuple;
template<size_t I, typename... Types> class _Tuple_impl;

/* Forward declarations for all classes */
struct Base;
struct Derived;
struct SimpleClass;
struct LifecycleClass;
struct MultiDerived;
struct DiamondDerived;
struct Point;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct MiddleA;
struct MiddleB;

/* Template class definitions for _Head_base */
template<size_t I, typename T, bool IsBase>
class _Head_base;

template<size_t I, typename T>
class _Head_base<I, T, false> {
public:
    T _M_head_impl;
    T& _M_head() { return _M_head_impl; }
    _Head_base() : _M_head_impl() {}
    template<typename U> _Head_base(U&& u) : _M_head_impl(std::forward<U>(u)) {}
};

template<size_t I, typename T>
class _Head_base<I, T, true> {
public:
    T _M_head_impl;
    T& _M_head() { return _M_head_impl; }
    _Head_base() : _M_head_impl() {}
    template<typename U> _Head_base(U&& u) : _M_head_impl(std::forward<U>(u)) {}
};

/* default_delete template class definition */
template<typename T>
class default_delete {
public:
    void operator()(T* p) const {
        if (p) operator_delete(p);
    }
};

template<>
class default_delete<int> {
public:
    void operator()(int* p) const {
        if (p) operator_delete(p);
    }
};

template<>
class default_delete<int[]> {
public:
    void operator()(int* p) const {
        if (p) operator_delete__(p);
    }
};

template<>
class default_delete<double> {
public:
    void operator()(double* p) const {
        if (p) operator_delete(p);
    }
};

template<>
class default_delete<double[]> {
public:
    void operator()(double* p) const {
        if (p) operator_delete__(p);
    }
};

/* __uniq_ptr_impl template class definition */
template<typename T, typename D>
class __uniq_ptr_impl {
public:
    T* _M_ptr() {
        return get<0, T, D>(reinterpret_cast<tuple*>(&buffer));
    }
    D& _M_deleter() {
        return *get<1, T, D>(reinterpret_cast<tuple*>(&buffer));
    }
    char buffer[sizeof(tuple<T, D>)];
};

/* __uniq_ptr_data template class definition */
template<typename T, typename D, bool is_array, bool is_void>
class __uniq_ptr_data;

/* unique_ptr template class definition */
template<typename T, typename D = default_delete<T>>
class unique_ptr {
public:
    unique_ptr() = default;
    unique_ptr(T* p) : impl(p) {}
    T& operator*() { return *impl._M_ptr(); }
    ~unique_ptr() {
        if (impl._M_ptr()) {
            impl._M_deleter()(impl._M_ptr());
        }
    }
private:
    __uniq_ptr_impl<T, D> impl;
};

/* tuple and _Tuple_impl template class definitions */
template<typename... Types>
class tuple {};

template<size_t I, typename... Types>
class _Tuple_impl;

template<size_t I, typename T>
class _Tuple_impl<I, T> : public _Head_base<I, T, I == 0> {
public:
    _Tuple_impl() : _Head_base<I, T, I == 0>() {}
    template<typename U> _Tuple_impl(U&& u) : _Head_base<I, T, I == 0>(std::forward<U>(u)) {}
    static _Head_base<I, T, I == 0>& _M_head(_Tuple_impl& t) { return t; }
};

template<typename T, typename D>
class tuple<T, D> : public _Tuple_impl<0, T, D> {
public:
    tuple() : _Tuple_impl<0, T, D>() {}
};

template<size_t I, typename T, typename... Types>
class _Tuple_impl<I, T, Types...> : public _Tuple_impl<I, T>, public _Tuple_impl<I + 1, Types...> {
public:
    static typename _Tuple_impl<I, T>::_Head_base& _M_head(_Tuple_impl& t) {
        return _Tuple_impl<I, T>::_M_head(t);
    }
};

template<typename T>
_Tuple_impl<0, T>& __get_helper(tuple<T>& t) {
    return static_cast<_Tuple_impl<0, T>&>(t);
}

template<size_t I, typename... Types>
type* get(tuple<Types...>& t) {
    return reinterpret_cast<type*>(&_Tuple_impl<I, Types...>::_M_head(t));
}

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_clang_O0_no_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_001019a0 @ 001019a0 */

void FUN_001019a0(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: __cxx_global_var_init @ 00101b40 */

void __cxx_global_var_init(void)

{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::~Init,&std::__ioinit,&__dso_handle);
 return;
}



/* Function: _GLOBAL__sub_I_5_1.cpp @ 00101b80 */

void _GLOBAL__sub_I_5_1_cpp(void)

{
 __cxx_global_var_init();
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_00101c7c @ 00101c7c */

void FUN_00101c7c(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101cd4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_member_func() */

int test_cpp_member_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 SimpleClass aSStack_34 [36];
 
 SimpleClass::SimpleClass(aSStack_34,5,"Test");
 SimpleClass::setValue(aSStack_34,10);
 iVar1 = SimpleClass::getValue(aSStack_34);
 iVar2 = SimpleClass::compute(aSStack_34,3);
 iVar3 = SimpleClass::getClassID();
 return iVar1 + iVar2 + iVar3;
}



/* Function: test_cpp_constructor @ 00101d4c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_constructor() */

int test_cpp_constructor(void)

{
 int iVar1;
 LifecycleClass aLStack_28 [20];
 int local_14;
 
 local_14 = 0;
 LifecycleClass::LifecycleClass(aLStack_28,5);
 /* try { // try from 00101d70 to 00101d97 has its CatchHandler @ 00101ddc */
 iVar1 = LifecycleClass::getData(aLStack_28,2);
 local_14 = local_14 + iVar1;
 iVar1 = LifecycleClass::getInstanceCount();
 local_14 = local_14 + iVar1;
 LifecycleClass::~LifecycleClass(aLStack_28);
 iVar1 = LifecycleClass::getInstanceCount();
 return local_14 + iVar1 * 1000;
}



/* Function: call_virtual_func @ 00101dfc */

/* call_virtual_func(Base*, int) */

void call_virtual_func(Base *param_1,int param_2)

{
 (*(code *)**(undefined8 **)param_1)(param_1,param_2);
 return;
}



/* Function: test_cpp_virtual_func @ 00101e30 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_virtual_func() */

int test_cpp_virtual_func(void)

{
 int iVar1;
 int iVar2;
 int iVar3;
 int iVar4;
 Derived aDStack_28 [16];
 Base aBStack_18 [8];
 
 Base::Base(aBStack_18);
 /* try { // try from 00101e44 to 00101e4f has its CatchHandler @ 00101f14 */
 Derived::Derived(aDStack_28,3);
 /* try { // try from 00101e54 to 00101ec7 has its CatchHandler @ 00101f24 */
 iVar1 = Base::virtual_func(aBStack_18,5);
 iVar2 = Derived::virtual_func(aDStack_28,5);
 iVar3 = call_virtual_func(aBStack_18,5);
 iVar4 = call_virtual_func((Base *)aDStack_28,5);
 Derived::~Derived(aDStack_28);
 Base::~Base(aBStack_18);
 return iVar1 + iVar2 + iVar3 + iVar4;
}



/* Function: test_cpp_multiple_inheritance @ 00101f50 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_multiple_inheritance() */

int test_cpp_multiple_inheritance(void)

{
 int iVar1;
 int iVar2;
 MultiDerived *local_68;
 undefined8 *local_30;
 undefined4 local_28;
 MultiDerived local_20 [8];
 undefined4 local_18;
 
 MultiDerived::MultiDerived((MultiDerived *)&local_30);
 local_28 = 100;
 local_18 = 200;
 local_68 = (MultiDerived *)0x0;
 if ((MultiDerived *)&local_30 != (MultiDerived *)0x0) {
 local_68 = local_20;
 }
 /* try { // try from 00101fb8 to 00101fdf has its CatchHandler @ 00102030 */
 iVar1 = (*(code *)*local_30)();
 iVar2 = (*(code *)**(undefined8 **)local_68)();
 MultiDerived::~MultiDerived((MultiDerived *)&local_30);
 return iVar1 + iVar2 + (uint)((MultiDerived *)&local_30 != local_68);
}



/* Function: test_cpp_diamond_inheritance @ 00102050 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_diamond_inheritance() */

int test_cpp_diamond_inheritance(void)

{
 int iVar1;
 int iVar2;
 undefined8 *local_68;
 long local_40;
 undefined4 auStack_38 [10];
 
 DiamondDerived::DiamondDerived((DiamondDerived *)&local_40);
 *(undefined4 *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 0x32;
 local_68 = (undefined8 *)0x0;
 if ((DiamondDerived *)&local_40 != (DiamondDerived *)0x0) {
 local_68 = (undefined8 *)((long)auStack_38 + *(long *)(local_40 + -0x18) + -8);
 }
 /* try { // try from 001020c0 to 001020ff has its CatchHandler @ 00102134 */
 iVar1 = (**(code **)*local_68)();
 *(undefined4 *)((long)auStack_38 + *(long *)(local_40 + -0x18)) = 100;
 iVar2 = (**(code **)*local_68)();
 DiamondDerived::~DiamondDerived((DiamondDerived *)&local_40);
 return iVar1 + iVar2;
}



/* Function: test_cpp_operator_overload @ 00102154 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_operator_overload() */

int test_cpp_operator_overload(void)

{
 byte bVar1;
 int iVar2;
 undefined8 local_28;
 Point aPStack_20 [8];
 Point aPStack_18 [8];
 
 Point::Point(aPStack_18,1,2);
 Point::Point(aPStack_20,3,4);
 local_28 = Point::operator+(aPStack_18,aPStack_20);
 bVar1 = Point::operator==(aPStack_18,aPStack_20);
 Point::operator++((Point *)&local_28);
 iVar2 = 0;
 if ((bVar1 & 1) == 0) {
 iVar2 = 10;
 }
 return (int)local_28 + local_28._4_4_ + iVar2;
}



/* Function: test_cpp_template_func @ 001021fc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_func() */

int test_cpp_template_func(void)

{
 int local_28;
 int local_24;
 double local_20;
 int local_14;
 
 local_14 = template_max<int>(3,7);
 local_20 = template_max<double>(2.5,1.5);
 local_24 = 10;
 local_28 = 0x14;
 template_swap<int>(&local_24,&local_28);
 return local_14 + (int)local_20 + local_24 + local_28;
}



/* Function: test_cpp_template_class @ 00102270 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_template_class() */

int test_cpp_template_class(void)

{
 double dVar1;
 Container<double> aCStack_a0 [92];
 int local_44;
 int local_40;
 Container<int> aCStack_3c [44];
 
 Container<int>::Container(aCStack_3c);
 Container<int>::push(aCStack_3c,10);
 Container<int>::push(aCStack_3c,0x14);
 Container<int>::push(aCStack_3c,0x1e);
 local_40 = Container<int>::get(aCStack_3c,0);
 local_44 = Container<int>::getSize(aCStack_3c);
 Container<double>::Container(aCStack_a0);
 Container<double>::push(aCStack_a0,3.14);
 dVar1 = (double)Container<double>::get(aCStack_a0,0);
 return local_40 + local_44 + (int)dVar1;
}



/* Function: test_cpp_lambda @ 00102330 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_lambda() */

int test_cpp_lambda(void)

{
 int iVar1;
 int iVar2;
 __0 _Stack_29;
 undefined4 local_28 [2];
 undefined4 *local_20;
 undefined4 local_18;
 undefined4 local_14;
 
 local_14 = 10;
 local_20 = &local_18;
 local_18 = 0x14;
 local_28[0] = 10;
 iVar1 = test_cpp_lambda()::$_1::operator()((__1 *)local_28,3);
 iVar2 = test_cpp_lambda()::$_0::operator()(&_Stack_29,10,0x14);
 return iVar1 + iVar2;
}



/* Function: operator() @ 001023a0 */

/* test_cpp_lambda()::$_1::TEMPNAMEPLACEHOLDERVALUE(int) const */

int __thiscall test_cpp_lambda()::$_1::operator()(__1 *this,int param_1)

{
 **(int **)(this + 8) = **(int **)(this + 8) + 5;
 return param_1 * *(int *)this + **(int **)(this + 8);
}



/* Function: operator() @ 001023e0 */

/* auto test_cpp_lambda()::$_0::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

int __thiscall test_cpp_lambda()::$_0::operator()(__0 *this,int param_1,int param_2)

{
 return param_1 + param_2;
}



/* Function: test_cpp_exception @ 00102404 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_exception() */

void test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* try { // try from 00102424 to 00102433 has its CatchHandler @ 00102438 */
 /* WARNING: Subroutine does not return */
 __cxa_throw(puVar1,&int::typeinfo,0);
}



/* Function: test_cpp_smart_ptr @ 00102574 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr() */

int test_cpp_smart_ptr(void)

{
 int iVar1;
 int iVar2;
 int *piVar3;
 undefined4 *puVar4;
 type *ptVar5;
 unique_ptr<int,test_cpp_smart_ptr()::__2> auStack_50 [11];
 __2 _Stack_45;
 int local_44;
 unique_ptr<int[],std::default_delete<int[]>> auStack_40 [12];
 int local_34;
 unique_ptr<int,std::default_delete<int>> auStack_30 [24];
 unique_ptr<int,std::default_delete<int>> auStack_18 [8];
 
 piVar3 = operator_new(4);
 *piVar3 = 100;
 std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
 (auStack_18,piVar3);
 /* try { // try from 001025a4 to 001025ab has its CatchHandler @ 001026e8 */
 puVar4 = (undefined4 *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_18);
 *puVar4 = 200;
 ptVar5 = std::move<std::unique_ptr<int,std::default_delete<int>>&>((unique_ptr *)auStack_18);
 std::unique_ptr<int,std::default_delete<int>>::unique_ptr(auStack_30,(unique_ptr *)ptVar5);
 /* try { // try from 001025d8 to 001025fb has its CatchHandler @ 001026f8 */
 piVar3 = (int *)std::unique_ptr<int,std::default_delete<int>>::operator*(auStack_30);
 local_34 = *piVar3;
 piVar3 = operator_new__(0x14);
 *piVar3 = 1;
 piVar3[1] = 2;
 piVar3[2] = 3;
 piVar3[3] = 4;
 piVar3[4] = 5;
 std::unique_ptr<int[],std::default_delete<int[]>>::
 unique_ptr<int*,std::default_delete<int[]>,void,bool>(auStack_40,piVar3);
 /* try { // try from 0010263c to 00102663 has its CatchHandler @ 00102708 */
 piVar3 = (int *)std::unique_ptr<int[],std::default_delete<int[]>>::operator[](auStack_40,2);
 local_44 = *piVar3;
 piVar3 = operator_new(4);
 *piVar3 = 500;
 std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::__2,void>
 (auStack_50,piVar3,&_Stack_45);
 /* try { // try from 00102688 to 0010268f has its CatchHandler @ 00102718 */
 piVar3 = (int *)std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator*(auStack_50);
 iVar2 = *piVar3;
 iVar1 = local_34 + local_44;
 std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr(auStack_50);
 std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr(auStack_40);
 std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_30);
 std::unique_ptr<int,std::default_delete<int>>::~unique_ptr(auStack_18);
 return iVar1 + iVar2;
}



/* Function: unique_ptr<test_cpp_smart_ptr()::$_2,void> @ 0010275c */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::$_2,
 void>(int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::unique_ptr<test_cpp_smart_ptr()::__2,void>
 (unique_ptr<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
 /* try { // try from 00102780 to 00102783 has its CatchHandler @ 00102794 */
 __uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
 __uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 ((__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *)this,param_1,param_2);
 return;
}



/* Function: operator* @ 00102798 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::operator*
 (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
 get(this);
 return;
}



/* Function: ~unique_ptr @ 001027cc */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::~unique_ptr() */

void __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::~unique_ptr
 (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
 int **ppiVar1;
 __2 *this_00;
 type *ptVar2;
 
 /* try { // try from 001027e4 to 0010282b has its CatchHandler @ 00102848 */
 ppiVar1 = (int **)__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (__2 *)get_deleter(this);
 ptVar2 = move<int*&>(ppiVar1);
 test_cpp_smart_ptr()::$_2::operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: test_cpp_rtti @ 0010284c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_rtti() */

int test_cpp_rtti(void)

{
 int iVar1;
 RTTIDerivedA *this;
 RTTIDerivedB *this_00;
 ulong uVar2;
 char *__s;
 size_t sVar3;
 long local_80;
 long local_70;
 int local_24;
 
 this = operator_new(8);
 *(undefined8 *)this = 0;
 RTTIDerivedA::RTTIDerivedA(this);
 this_00 = operator_new(8);
 *(undefined8 *)this_00 = 0;
 RTTIDerivedB::RTTIDerivedB(this_00);
 local_24 = 0;
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std::type_info::operator==
 (*(type_info **)(*(long *)this + -8),(type_info *)&RTTIDerivedA::typeinfo);
 if ((uVar2 & 1) != 0) {
 local_24 = 10;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 __cxa_bad_typeid();
 }
 uVar2 = std::type_info::operator==
 (*(type_info **)(*(long *)this_00 + -8),(type_info *)&RTTIDerivedB::typeinfo);
 if ((uVar2 & 1) != 0) {
 local_24 = local_24 + 0x14;
 }
 if (this == (RTTIDerivedA *)0x0) {
 local_70 = 0;
 }
 else {
 local_70 = __dynamic_cast(this,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 }
 if (local_70 != 0) {
 iVar1 = RTTIDerivedA::derivedA_data();
 local_24 = local_24 + iVar1;
 }
 if (this_00 == (RTTIDerivedB *)0x0) {
 local_80 = 0;
 }
 else {
 local_80 = __dynamic_cast(this_00,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 }
 if (local_80 != 0) {
 iVar1 = RTTIDerivedB::derivedB_data();
 local_24 = local_24 + iVar1;
 }
 if (this == (RTTIDerivedA *)0x0) {
 __cxa_bad_typeid();
 }
 __s = (char *)std::type_info::name(*(type_info **)(*(long *)this + -8));
 sVar3 = strlen(__s);
 if (this != (RTTIDerivedA *)0x0) {
 (**(code **)(*(long *)this + 8))();
 }
 if (this_00 != (RTTIDerivedB *)0x0) {
 (**(code **)(*(long *)this_00 + 8))();
 }
 return local_24 + (int)sVar3;
}



/* Function: test_cpp_oo_features @ 00102a84 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_oo_features() */

int test_cpp_oo_features(void)

{
 int iVar1;
 ulong uVar2;
 
 printf(&DAT_00104bd5);
 uVar2 = test_cpp_member_func();
 printf(&DAT_00104bfa,uVar2 & 0xffffffff);
 uVar2 = test_cpp_constructor();
 printf(&DAT_00104c18,uVar2 & 0xffffffff);
 uVar2 = test_cpp_virtual_func();
 printf(&DAT_00104c34,uVar2 & 0xffffffff);
 uVar2 = test_cpp_multiple_inheritance();
 printf(&DAT_00104c50,uVar2 & 0xffffffff);
 uVar2 = test_cpp_diamond_inheritance();
 printf(&DAT_00104c6c,uVar2 & 0xffffffff);
 uVar2 = test_cpp_operator_overload();
 printf(&DAT_00104c89,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_func();
 printf(&DAT_00104ca5,uVar2 & 0xffffffff);
 uVar2 = test_cpp_template_class();
 printf(&DAT_00104cc1,uVar2 & 0xffffffff);
 uVar2 = test_cpp_lambda();
 printf(&DAT_00104cdd,uVar2 & 0xffffffff);
 uVar2 = test_cpp_exception();
 printf(&DAT_00104cf9,uVar2 & 0xffffffff);
 uVar2 = test_cpp_smart_ptr();
 printf(&DAT_00104d16,uVar2 & 0xffffffff);
 uVar2 = test_cpp_rtti();
 iVar1 = printf(&DAT_00104d33,uVar2 & 0xffffffff);
 return iVar1;
}



/* Function: main @ 00102b90 */

undefined4 main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 00102bbc */

/* std::__uniq_ptr_data<int, test_cpp_smart_ptr()::$_2, true,
 false>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2 const&>(int*, test_cpp_smart_ptr()::$_2 const&)
 */

void __thiscall
std::__uniq_ptr_data<int,test_cpp_smart_ptr()::$_2,true,false>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 (__uniq_ptr_data<int,test_cpp_smart_ptr()::__2,true,false> *this,int *param_1,__2 *param_2
 )

{
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this,param_1,param_2);
 return;
}



/* Function: __uniq_ptr_impl<test_cpp_smart_ptr()::$_2_const&> @ 00102bf0 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::__uniq_ptr_impl<test_cpp_smart_ptr()::$_2
 const&>(int*, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::
__uniq_ptr_impl<test_cpp_smart_ptr()::__2_const&>
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this,int *param_1,__2 *param_2)

{
 __2 *p_Var1;
 int *local_20;
 __uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *local_18;
 
 local_20 = param_1;
 local_18 = this;
 p_Var1 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
 ((tuple<int*,test_cpp_smart_ptr()::__2> *)this,&local_20,p_Var1);
 return;
}



/* Function: forward<test_cpp_smart_ptr()::$_2_const&> @ 00102c3c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2 const& std::forward<test_cpp_smart_ptr()::$_2
 const&>(std::remove_reference<test_cpp_smart_ptr()::$_2 const&>::type&) */

__2 * std::forward<test_cpp_smart_ptr()::__2_const&>(type *param_1)

{
 return (__2 *)param_1;
}



/* Function: tuple<int*&,test_cpp_smart_ptr()::$_2_const&,true> @ 00102c50 */

/* std::tuple<int*, test_cpp_smart_ptr()::$_2>::tuple<int*&, test_cpp_smart_ptr()::$_2 const&,
 true>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::tuple<int*,test_cpp_smart_ptr()::$_2>::tuple<int*&,test_cpp_smart_ptr()::__2_const&,true>
 (tuple<int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 __2 *p_Var2;
 
 ppiVar1 = forward<int*&>((type *)param_1);
 p_Var2 = forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 /* try { // try from 00102c90 to 00102c93 has its CatchHandler @ 00102ca4 */
 _Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
 _Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
 ((_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::__2> *)this,ppiVar1,p_Var2);
 return;
}



/* Function: _Tuple_impl<int*&,test_cpp_smart_ptr()::$_2_const&,void> @ 00102ca8 */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_Tuple_impl<int*&,
 test_cpp_smart_ptr()::$_2 const&, void>(int*&, test_cpp_smart_ptr()::$_2 const&) */

void __thiscall
std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::
_Tuple_impl<int*&,test_cpp_smart_ptr()::__2_const&,void>
 (_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::__2> *this,int **param_1,__2 *param_2)

{
 int **ppiVar1;
 
 forward<test_cpp_smart_ptr()::__2_const&>((type *)param_2);
 _Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl((__2 *)this);
 ppiVar1 = forward<int*&>((type *)param_1);
 _Head_base<0ul,int*,false>::_Head_base<int*&>((_Head_base<0ul,int*,false> *)this,ppiVar1);
 return;
}



/* Function: _Tuple_impl @ 00102cfc */

/* std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_Tuple_impl(test_cpp_smart_ptr()::$_2 const&)
 */

void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_Tuple_impl(__2 *param_1)

{
 _Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base(param_1);
 return;
}



/* Function: _Head_base @ 00102d28 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_Head_base(test_cpp_smart_ptr()::$_2
 const&) */

void std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_Head_base(__2 *param_1)

{
 return;
}



/* Function: _M_ptr @ 00102d3c */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
 get<0ul,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
 return;
}



/* Function: get_deleter @ 00102d60 */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get_deleter() */

undefined8 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get_deleter
 (unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00102d74 to 00102d7b has its CatchHandler @ 00102d90 */
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 return uVar1;
}



/* Function: operator() @ 00102d94 */

/* test_cpp_smart_ptr()::$_2::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall test_cpp_smart_ptr()::$_2::operator()(__2 *this,int *param_1)

{
 *param_1 = -1;
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 00102ddc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<0ul, int*,
 test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std::get<0ul,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 00102e00 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2>&) */

int ** std::__get_helper<0ul,int*,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00102e24 */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2>&) */

void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_deleter @ 00102e48 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_deleter
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
 get<1ul,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,test_cpp_smart_ptr()::$_2> @ 00102e6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type& std::get<1ul, int*,
 test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2>&) */

type * std::get<1ul,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = __get_helper<1ul,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
 return (type *)p_Var1;
}



/* Function: __get_helper<1ul,test_cpp_smart_ptr()::$_2> @ 00102e90 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* test_cpp_smart_ptr()::$_2& std::__get_helper<1ul,
 test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>&) */

__2 * std::__get_helper<1ul,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
 __2 *p_Var1;
 
 p_Var1 = (__2 *)_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
 return p_Var1;
}



/* Function: _M_head @ 00102eb4 */

/* std::_Tuple_impl<1ul, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<1ul,
 test_cpp_smart_ptr()::$_2>&) */

void std::_Tuple_impl<1ul,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00102ed8 */

/* std::_Head_base<1ul, test_cpp_smart_ptr()::$_2, true>::_M_head(std::_Head_base<1ul,
 test_cpp_smart_ptr()::$_2, true>&) */

_Head_base * std::_Head_base<1ul,test_cpp_smart_ptr()::$_2,true>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00102eec */

/* std::unique_ptr<int, test_cpp_smart_ptr()::$_2>::get() const */

undefined8 __thiscall
std::unique_ptr<int,test_cpp_smart_ptr()::$_2>::get(unique_ptr<int,test_cpp_smart_ptr()::__2> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00102f00 to 00102f07 has its CatchHandler @ 00102f1c */
 uVar1 = __uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 ((__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00102f20 */

/* std::__uniq_ptr_impl<int, test_cpp_smart_ptr()::$_2>::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,test_cpp_smart_ptr()::$_2>::_M_ptr
 (__uniq_ptr_impl<int,test_cpp_smart_ptr()::__2> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,test_cpp_smart_ptr()::__2>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,test_cpp_smart_ptr()::$_2> @ 00102f48 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, test_cpp_smart_ptr()::$_2> >::type const& std::get<0ul,
 int*, test_cpp_smart_ptr()::$_2>(std::tuple<int*, test_cpp_smart_ptr()::$_2> const&) */

type * std::get<0ul,int*,test_cpp_smart_ptr()::__2>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,test_cpp_smart_ptr()::__2>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,test_cpp_smart_ptr()::$_2> @ 00102f6c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, test_cpp_smart_ptr()::$_2>(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2> const&) */

int ** std::__get_helper<0ul,int*,test_cpp_smart_ptr()::__2>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00102f90 */

/* std::_Tuple_impl<0ul, int*, test_cpp_smart_ptr()::$_2>::_M_head(std::_Tuple_impl<0ul, int*,
 test_cpp_smart_ptr()::$_2> const&) */

void std::_Tuple_impl<0ul,int*,test_cpp_smart_ptr()::$_2>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: SimpleClass @ 00102fb4 */

/* SimpleClass::SimpleClass(int, char const*) */

void __thiscall SimpleClass::SimpleClass(SimpleClass *this,int param_1,char *param_2)

{
 *(int *)this = param_1;
 strncpy((char *)(this + 4),param_2,0x1f);
 this[0x23] = (SimpleClass)0x0;
 return;
}



/* Function: setValue @ 00103000 */

/* SimpleClass::setValue(int) */

void __thiscall SimpleClass::setValue(SimpleClass *this,int param_1)

{
 *(int *)this = param_1;
 return;
}



/* Function: getValue @ 00103020 */

/* SimpleClass::getValue() const */

undefined4 __thiscall SimpleClass::getValue(SimpleClass *this)

{
 return *(undefined4 *)this;
}



/* Function: compute @ 00103038 */

/* SimpleClass::compute(int) const */

ulong __thiscall SimpleClass::compute(SimpleClass *this,int param_1)

{
 int iVar1;
 size_t sVar2;
 
 iVar1 = *(int *)this;
 sVar2 = strlen((char *)(this + 4));
 return sVar2 + (long)(iVar1 * param_1) & 0xffffffff;
}



/* Function: getClassID @ 00103080 */

/* SimpleClass::getClassID() */

undefined8 SimpleClass::getClassID(void)

{
 return 0x1234;
}



/* Function: LifecycleClass @ 00103088 */

/* LifecycleClass::LifecycleClass(unsigned long) */

void __thiscall LifecycleClass::LifecycleClass(LifecycleClass *this,ulong param_1)

{
 undefined1 auVar1 [16];
 void *pvVar2;
 ulong uVar3;
 ulong local_28;
 
 *(ulong *)(this + 8) = param_1;
 auVar1._8_8_ = 0;
 auVar1._0_8_ = param_1;
 uVar3 = param_1 * 4;
 if (SUB168(auVar1 * ZEXT816(4),8) != 0) {
 uVar3 = 0xffffffffffffffff;
 }
 pvVar2 = operator_new__(uVar3);
 *(void **)this = pvVar2;
 for (local_28 = 0; local_28 < param_1; local_28 = local_28 + 1) {
 *(int *)(*(long *)this + local_28 * 4) = (int)local_28 * 10;
 }
 instance_count = instance_count + 1;
 return;
}



/* Function: getData @ 00103138 */

/* LifecycleClass::getData(unsigned long) const */

undefined4 __thiscall LifecycleClass::getData(LifecycleClass *this,ulong param_1)

{
 undefined4 local_1c;
 
 if (param_1 < *(ulong *)(this + 8)) {
 local_1c = *(undefined4 *)(*(long *)this + param_1 * 4);
 }
 else {
 local_1c = 0xffffffff;
 }
 return local_1c;
}



/* Function: getInstanceCount @ 00103190 */

/* LifecycleClass::getInstanceCount() */

undefined4 LifecycleClass::getInstanceCount(void)

{
 return instance_count;
}



/* Function: ~LifecycleClass @ 0010319c */

/* LifecycleClass::~LifecycleClass() */

void __thiscall LifecycleClass::~LifecycleClass(LifecycleClass *this)

{
 if (*(void **)this != (void *)0x0) {
 operator_delete__(*(void **)this);
 }
 instance_count = instance_count + -1;
 return;
}



/* Function: Base @ 001031e8 */

/* Base::Base() */

void __thiscall Base::Base(Base *this)

{
 *(undefined ***)this = &PTR_virtual_func_00117858;
 return;
}



/* Function: Derived @ 0010320c */

/* Derived::Derived(int) */

void __thiscall Derived::Derived(Derived *this,int param_1)

{
 Base::Base((Base *)this);
 *(undefined ***)this = &PTR_virtual_func_00117898;
 *(int *)(this + 8) = param_1;
 return;
}



/* Function: virtual_func @ 0010325c */

/* Base::virtual_func(int) */

int __thiscall Base::virtual_func(Base *this,int param_1)

{
 return param_1 + 1;
}



/* Function: virtual_func @ 00103278 */

/* Derived::virtual_func(int) */

int __thiscall Derived::virtual_func(Derived *this,int param_1)

{
 return param_1 * *(int *)(this + 8);
}



/* Function: ~Derived @ 0010329c */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 Base::~Base((Base *)this);
 return;
}



/* Function: ~Base @ 001032c0 */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 return;
}



/* Function: MultiDerived @ 001032d0 */

/* MultiDerived::MultiDerived() */

void __thiscall MultiDerived::MultiDerived(MultiDerived *this)

{
 BaseA::BaseA((BaseA *)this);
 BaseB::BaseB((BaseB *)(this + 0x10));
 *(undefined ***)this = &PTR_funcA_001178e0;
 *(undefined ***)(this + 0x10) = &PTR_funcB_00117910;
 return;
}



/* Function: ~MultiDerived @ 00103330 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 BaseB::~BaseB((BaseB *)(this + 0x10));
 BaseA::~BaseA((BaseA *)this);
 return;
}



/* Function: DiamondDerived @ 00103364 */

/* DiamondDerived::DiamondDerived() */

void __thiscall DiamondDerived::DiamondDerived(DiamondDerived *this)

{
 VirtualBase::VirtualBase((VirtualBase *)(this + 0x20));
 MiddleA::MiddleA((MiddleA *)this);
 MiddleB::MiddleB((MiddleB *)(this + 0x10));
 *(undefined ***)this = &PTR_func_001179e8;
 *(undefined ***)(this + 0x20) = &PTR_func_00117a50;
 *(undefined ***)(this + 0x10) = &PTR_func_00117a18;
 return;
}



/* Function: ~DiamondDerived @ 00103400 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 VirtualBase::~VirtualBase((VirtualBase *)(this + 0x20));
 return;
}



/* Function: Point @ 0010343c */

/* Point::Point(int, int) */

void __thiscall Point::Point(Point *this,int param_1,int param_2)

{
 *(int *)this = param_1;
 *(int *)(this + 4) = param_2;
 return;
}



/* Function: operator+ @ 00103468 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

undefined8 __thiscall Point::operator+(Point *this,Point *param_1)

{
 undefined8 local_18;
 
 Point((Point *)&local_18,*(int *)this + *(int *)param_1,*(int *)(this + 4) + *(int *)(param_1 + 4)
 );
 return local_18;
}



/* Function: operator== @ 001034b8 */

/* Point::TEMPNAMEPLACEHOLDERVALUE(Point const&) const */

bool __thiscall Point::operator==(Point *this,Point *param_1)

{
 bool bVar1;
 
 bVar1 = false;
 if (*(int *)this == *(int *)param_1) {
 bVar1 = *(int *)(this + 4) == *(int *)(param_1 + 4);
 }
 return bVar1;
}



/* Function: operator++ @ 0010351c */

/* Point::TEMPNAMEPLACEHOLDERVALUE() */

void __thiscall Point::operator++(Point *this)

{
 *(int *)this = *(int *)this + 1;
 *(int *)(this + 4) = *(int *)(this + 4) + 1;
 return;
}



/* Function: template_max<int> @ 00103548 */

/* int template_max<int>(int, int) */

int template_max<int>(int param_1,int param_2)

{
 int local_c;
 
 local_c = param_2;
 if (param_2 < param_1) {
 local_c = param_1;
 }
 return local_c;
}



/* Function: template_max<double> @ 0010358c */

/* double template_max<double>(double, double) */

double template_max<double>(double param_1,double param_2)

{
 double local_18;
 
 local_18 = param_2;
 if (param_2 < param_1) {
 local_18 = param_1;
 }
 return local_18;
}



/* Function: template_swap<int> @ 001035d4 */

/* void template_swap<int>(int&, int&) */

void template_swap<int>(int *param_1,int *param_2)

{
 int iVar1;
 
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}



/* Function: Container @ 00103610 */

/* Container<int>::Container() */

void __thiscall Container<int>::Container(Container<int> *this)

{
 *(undefined4 *)(this + 0x28) = 0;
 return;
}



/* Function: push @ 00103628 */

/* Container<int>::push(int) */

void __thiscall Container<int>::push(Container<int> *this,int param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x28) < 10) {
 iVar1 = *(int *)(this + 0x28);
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}



/* Function: get @ 00103674 */

/* Container<int>::get(int) const */

undefined4 __thiscall Container<int>::get(Container<int> *this,int param_1)

{
 undefined4 local_4;
 
 if ((param_1 < 0) || (*(int *)(this + 0x28) <= param_1)) {
 local_4 = 0;
 }
 else {
 local_4 = *(undefined4 *)(this + (long)param_1 * 4);
 }
 return local_4;
}



/* Function: getSize @ 001036d4 */

/* Container<int>::getSize() const */

undefined4 __thiscall Container<int>::getSize(Container<int> *this)

{
 return *(undefined4 *)(this + 0x28);
}



/* Function: Container @ 001036ec */

/* Container<double>::Container() */

void __thiscall Container<double>::Container(Container<double> *this)

{
 *(undefined4 *)(this + 0x50) = 0;
 return;
}



/* Function: push @ 00103704 */

/* Container<double>::push(double) */

void __thiscall Container<double>::push(Container<double> *this,double param_1)

{
 int iVar1;
 
 if (*(int *)(this + 0x50) < 10) {
 iVar1 = *(int *)(this + 0x50);
 *(int *)(this + 0x50) = iVar1 + 1;
 *(double *)(this + (long)iVar1 * 8) = param_1;
 }
 return;
}



/* Function: get @ 00103750 */

/* Container<double>::get(int) const */

undefined1 [16] __thiscall Container<double>::get(Container<double> *this,int param_1)

{
 undefined1 auVar1 [16];
 ulong local_8;
 
 if ((param_1 < 0) || (*(int *)(this + 0x50) <= param_1)) {
 local_8 = 0;
 }
 else {
 local_8 = *(ulong *)(this + (long)param_1 * 8);
 }
 auVar1._8_8_ = 0;
 auVar1._0_8_ = local_8;
 return auVar1;
}



/* Function: getSize @ 001037b4 */

/* Container<double>::getSize() const */

undefined4 __thiscall Container<double>::getSize(Container<double> *this)

{
 return *(undefined4 *)(this + 0x50);
}



/* Function: unique_ptr<std::default_delete<int>,void> @ 001037cc */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr<std::default_delete<int>, void>(int*)
 */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr<std::default_delete<int>,void>
 (unique_ptr<int,std::default_delete<int>> *this,int *param_1)

{
 /* try { // try from 001037e8 to 001037eb has its CatchHandler @ 001037fc */
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,param_1);
 return;
}



/* Function: operator* @ 00103800 */

/* std::unique_ptr<int, std::default_delete<int> >::TEMPNAMEPLACEHOLDERVALUE() const */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::operator*
 (unique_ptr<int,std::default_delete<int>> *this)

{
 get(this);
 return;
}



/* Function: move<std::unique_ptr<int,std::default_delete<int>>&> @ 00103834 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::unique_ptr<int, std::default_delete<int> >&>::type&&
 std::move<std::unique_ptr<int, std::default_delete<int> >&>(std::unique_ptr<int,
 std::default_delete<int> >&) */

type * std::move<std::unique_ptr<int,std::default_delete<int>>&>(unique_ptr *param_1)

{
 return (type *)param_1;
}



/* Function: unique_ptr @ 00103848 */

/* std::unique_ptr<int, std::default_delete<int> >::unique_ptr(std::unique_ptr<int,
 std::default_delete<int> >&&) */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::unique_ptr
 (unique_ptr<int,std::default_delete<int>> *this,unique_ptr *param_1)

{
 __uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 ((__uniq_ptr_data<int,std::default_delete<int>,true,true> *)this,
 (__uniq_ptr_data *)param_1);
 return;
}



/* Function: unique_ptr<int*,std::default_delete<int[]>,void,bool> @ 00103874 */

/* std::unique_ptr<int [], std::default_delete<int []> >::unique_ptr<int*, std::default_delete<int
 []>, void, bool>(int*) */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::
unique_ptr<int*,std::default_delete<int[]>,void,bool>
 (unique_ptr<int[],std::default_delete<int[]>> *this,int *param_1)

{
 /* try { // try from 00103890 to 00103893 has its CatchHandler @ 001038a4 */
 __uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 ((__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *)this,param_1);
 return;
}



/* Function: operator[] @ 001038a8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::operator[](unsigned long) const */

long __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::operator[]
 (unique_ptr<int[],std::default_delete<int[]>> *this,ulong param_1)

{
 long lVar1;
 
 lVar1 = get(this);
 return lVar1 + param_1 * 4;
}



/* Function: ~unique_ptr @ 001038e8 */

/* std::unique_ptr<int [], std::default_delete<int []> >::~unique_ptr() */

void __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::~unique_ptr
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 long *plVar1;
 default_delete<int[]> *this_00;
 
 plVar1 = (long *)__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 if (*plVar1 != 0) {
 this_00 = (default_delete<int[]> *)get_deleter(this);
 /* try { // try from 00103928 to 0010392b has its CatchHandler @ 00103948 */
 default_delete<int[]>::operator()(this_00,(int *)*plVar1);
 }
 *plVar1 = 0;
 return;
}



/* Function: ~unique_ptr @ 0010394c */

/* std::unique_ptr<int, std::default_delete<int> >::~unique_ptr() */

void __thiscall
std::unique_ptr<int,std::default_delete<int>>::~unique_ptr
 (unique_ptr<int,std::default_delete<int>> *this)

{
 int **ppiVar1;
 default_delete<int> *this_00;
 type *ptVar2;
 
 ppiVar1 = (int **)__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 if (*ppiVar1 != (int *)0x0) {
 this_00 = (default_delete<int> *)get_deleter(this);
 ptVar2 = move<int*&>(ppiVar1);
 /* try { // try from 0010399c to 0010399f has its CatchHandler @ 001039bc */
 default_delete<int>::operator()(this_00,*(int **)ptVar2);
 }
 *ppiVar1 = (int *)0x0;
 return;
}



/* Function: RTTIDerivedA @ 001039c0 */

/* RTTIDerivedA::RTTIDerivedA() */

void __thiscall RTTIDerivedA::RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedA_00117d30;
 return;
}



/* Function: RTTIDerivedB @ 00103a04 */

/* RTTIDerivedB::RTTIDerivedB() */

void __thiscall RTTIDerivedB::RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::RTTIBase((RTTIBase *)this);
 *(undefined ***)this = &PTR__RTTIDerivedB_00117d80;
 return;
}



/* Function: operator== @ 00103a48 */

/* std::type_info::TEMPNAMEPLACEHOLDERVALUE(std::type_info const&) const */

bool __thiscall std::type_info::operator==(type_info *this,type_info *param_1)

{
 bool bVar1;
 int iVar2;
 
 bVar1 = true;
 if ((*(long *)(this + 8) != *(long *)(param_1 + 8)) &&
 (bVar1 = false, **(char **)(this + 8) != '*')) {
 iVar2 = strcmp(*(char **)(this + 8),*(char **)(param_1 + 8));
 bVar1 = iVar2 == 0;
 }
 return bVar1;
}



/* Function: derivedA_data @ 00103ae8 */

/* RTTIDerivedA::derivedA_data() const */

undefined8 RTTIDerivedA::derivedA_data(void)

{
 return 100;
}



/* Function: derivedB_data @ 00103afc */

/* RTTIDerivedB::derivedB_data() const */

undefined8 RTTIDerivedB::derivedB_data(void)

{
 return 200;
}



/* Function: name @ 00103b10 */

/* std::type_info::name() const */

long __thiscall std::type_info::name(type_info *this)

{
 long local_18;
 
 if (**(char **)(this + 8) == '*') {
 local_18 = *(long *)(this + 8) + 1;
 }
 else {
 local_18 = *(long *)(this + 8);
 }
 return local_18;
}



/* Function: getName @ 00103b64 */

/* Base::getName() const */

undefined * Base::getName(void)

{
 return &DAT_00104d51;
}



/* Function: ~Base @ 00103b7c */

/* Base::~Base() */

void __thiscall Base::~Base(Base *this)

{
 ~Base(this);
 operator_delete(this);
 return;
}



/* Function: getName @ 00103bac */

/* Derived::getName() const */

char * Derived::getName(void)

{
 return "Derived";
}



/* Function: ~Derived @ 00103bc4 */

/* Derived::~Derived() */

void __thiscall Derived::~Derived(Derived *this)

{
 ~Derived(this);
 operator_delete(this);
 return;
}



/* Function: BaseA @ 00103bf4 */

/* BaseA::BaseA() */

void __thiscall BaseA::BaseA(BaseA *this)

{
 *(undefined ***)this = &PTR_funcA_00117990;
 return;
}



/* Function: BaseB @ 00103c18 */

/* BaseB::BaseB() */

void __thiscall BaseB::BaseB(BaseB *this)

{
 *(undefined ***)this = &PTR_funcB_001179b8;
 return;
}



/* Function: funcA @ 00103c3c */

/* MultiDerived::funcA() */

undefined8 MultiDerived::funcA(void)

{
 return 0x1e;
}



/* Function: ~MultiDerived @ 00103c50 */

/* MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00103c80 */

/* MultiDerived::funcB() */

undefined8 MultiDerived::funcB(void)

{
 return 0x28;
}



/* Function: funcB @ 00103c94 */

/* non-virtual thunk to MultiDerived::funcB() */

void __thiscall MultiDerived::funcB(MultiDerived *this)

{
 funcB();
 return;
}



/* Function: ~MultiDerived @ 00103cac */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: ~MultiDerived @ 00103cc4 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 ~MultiDerived(this + -0x10);
 return;
}



/* Function: funcA @ 00103cdc */

/* BaseA::funcA() */

undefined8 BaseA::funcA(void)

{
 return 10;
}



/* Function: ~BaseA @ 00103cf0 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 return;
}



/* Function: ~BaseA @ 00103d00 */

/* BaseA::~BaseA() */

void __thiscall BaseA::~BaseA(BaseA *this)

{
 ~BaseA(this);
 operator_delete(this);
 return;
}



/* Function: funcB @ 00103d30 */

/* BaseB::funcB() */

undefined8 BaseB::funcB(void)

{
 return 0x14;
}



/* Function: ~BaseB @ 00103d44 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 return;
}



/* Function: ~BaseB @ 00103d54 */

/* BaseB::~BaseB() */

void __thiscall BaseB::~BaseB(BaseB *this)

{
 ~BaseB(this);
 operator_delete(this);
 return;
}



/* Function: VirtualBase @ 00103d84 */

/* VirtualBase::VirtualBase() */

void __thiscall VirtualBase::VirtualBase(VirtualBase *this)

{
 *(undefined ***)this = &PTR_func_00117c18;
 return;
}



/* Function: MiddleA @ 00103da8 */

/* MiddleA::MiddleA() */

void __thiscall MiddleA::MiddleA(MiddleA *this)

{
 undefined8 *in_x1;
 
 *(undefined8 *)this = *in_x1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
 return;
}



/* Function: MiddleB @ 00103ddc */

/* MiddleB::MiddleB() */

void __thiscall MiddleB::MiddleB(MiddleB *this)

{
 undefined8 *in_x1;
 
 *(undefined8 *)this = *in_x1;
 *(undefined8 *)(this + *(long *)(*(long *)this + -0x18)) = in_x1[1];
 return;
}



/* Function: func @ 00103e10 */

/* MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}



/* Function: ~MiddleA @ 00103e38 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this);
 VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
 return;
}



/* Function: ~MiddleA @ 00103e74 */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00103ea4 */

/* virtual thunk to MiddleA::func() */

void __thiscall MiddleA::func(MiddleA *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~MiddleA @ 00103ec4 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleA @ 00103ee4 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00103f04 */

/* MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}



/* Function: ~MiddleB @ 00103f2c */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this);
 VirtualBase::~VirtualBase((VirtualBase *)(this + 0x10));
 return;
}



/* Function: ~MiddleB @ 00103f68 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00103f98 */

/* virtual thunk to MiddleB::func() */

void __thiscall MiddleB::func(MiddleB *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~MiddleB @ 00103fb8 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~MiddleB @ 00103fd8 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 00103ff8 */

/* DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}



/* Function: ~DiamondDerived @ 00104020 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this);
 return;
}



/* Function: func @ 00104050 */

/* non-virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104068 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: ~DiamondDerived @ 00104080 */

/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + -0x10);
 return;
}



/* Function: func @ 00104098 */

/* virtual thunk to DiamondDerived::func() */

void __thiscall DiamondDerived::func(DiamondDerived *this)

{
 func(this + *(long *)(*(long *)this + -0x18));
 return;
}



/* Function: ~DiamondDerived @ 001040b8 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: ~DiamondDerived @ 001040d8 */

/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this + *(long *)(*(long *)this + -0x20));
 return;
}



/* Function: func @ 001040f8 */

/* VirtualBase::func() */

undefined8 VirtualBase::func(void)

{
 return 100;
}



/* Function: ~VirtualBase @ 0010410c */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 return;
}



/* Function: ~VirtualBase @ 0010411c */

/* VirtualBase::~VirtualBase() */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this)

{
 ~VirtualBase(this);
 operator_delete(this);
 return;
}



/* Function: ~MiddleA @ 0010414c */

/* MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 return;
}



/* Function: ~MiddleB @ 00104160 */

/* MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 return;
}



/* Function: ~DiamondDerived @ 00104174 */

/* DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 MiddleB::~MiddleB((MiddleB *)(this + 0x10));
 MiddleA::~MiddleA((MiddleA *)this);
 return;
}



/* Function: __uniq_ptr_data @ 001041c0 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true,
 true>::__uniq_ptr_data(std::__uniq_ptr_data<int, std::default_delete<int>, true, true>&&) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_data
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,__uniq_ptr_data *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,(__uniq_ptr_impl *)param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 001041ec */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(std::__uniq_ptr_impl<int,
 std::default_delete<int> >&&) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,__uniq_ptr_impl *param_1)

{
 type *ptVar1;
 undefined8 *puVar2;
 
 ptVar1 = move<std::tuple<int*,std::default_delete<int>>&>((tuple *)param_1);
 tuple<int*,std::default_delete<int>>::tuple
 ((tuple<int*,std::default_delete<int>> *)this,(tuple *)ptVar1);
 /* try { // try from 00104220 to 00104227 has its CatchHandler @ 00104240 */
 puVar2 = (undefined8 *)_M_ptr((__uniq_ptr_impl<int,std::default_delete<int>> *)param_1);
 *puVar2 = 0;
 return;
}



/* Function: move<std::tuple<int*,std::default_delete<int>>&> @ 00104244 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<std::tuple<int*, std::default_delete<int> >&>::type&&
 std::move<std::tuple<int*, std::default_delete<int> >&>(std::tuple<int*, std::default_delete<int>
 >&) */

type * std::move<std::tuple<int*,std::default_delete<int>>&>(tuple *param_1)

{
 return (type *)param_1;
}



/* Function: tuple @ 00104258 */

/* std::tuple<int*, std::default_delete<int> >::tuple(std::tuple<int*, std::default_delete<int> >&&)
 */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple
 (tuple<int*,std::default_delete<int>> *this,tuple *param_1)

{
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this,(_Tuple_impl *)param_1);
 return;
}



/* Function: _M_ptr @ 00104284 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 get<0ul,int*,std::default_delete<int>>((tuple *)this);
 return;
}



/* Function: __clang_call_terminate @ 001042a8 */

void __clang_call_terminate(void)

{
 __cxa_begin_catch();
 /* WARNING: Subroutine does not return */
 std::terminate();
}



/* Function: _Tuple_impl @ 001042b4 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&&) */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this,_Tuple_impl *param_1)

{
 _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl((_Tuple_impl *)this);
 *(undefined8 *)this = *(undefined8 *)param_1;
 return;
}



/* Function: _Tuple_impl @ 001042f4 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl(std::_Tuple_impl<1ul,
 std::default_delete<int> >&&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(_Tuple_impl *param_1)

{
 return;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 00104308 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<0ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 0010432c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104350 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104374 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false>&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: RTTIBase @ 00104388 */

/* RTTIBase::RTTIBase() */

void __thiscall RTTIBase::RTTIBase(RTTIBase *this)

{
 *(undefined ***)this = &PTR__RTTIBase_00117d58;
 return;
}



/* Function: ~RTTIDerivedA @ 001043ac */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 RTTIBase::~RTTIBase((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedA @ 001043d0 */

/* RTTIDerivedA::~RTTIDerivedA() */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this)

{
 ~RTTIDerivedA(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104400 */

/* RTTIDerivedA::getType() const */

undefined8 RTTIDerivedA::getType(void)

{
 return 1;
}



/* Function: ~RTTIBase @ 00104414 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 return;
}



/* Function: ~RTTIBase @ 00104424 */

/* RTTIBase::~RTTIBase() */

void __thiscall RTTIBase::~RTTIBase(RTTIBase *this)

{
 ~RTTIBase(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 00104454 */

/* RTTIBase::getType() const */

undefined8 RTTIBase::getType(void)

{
 return 0;
}



/* Function: ~RTTIDerivedB @ 00104468 */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 RTTIBase::~RTTIBase((RTTIBase *)this);
 return;
}



/* Function: ~RTTIDerivedB @ 0010448c */

/* RTTIDerivedB::~RTTIDerivedB() */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this)

{
 ~RTTIDerivedB(this);
 operator_delete(this);
 return;
}



/* Function: getType @ 001044bc */

/* RTTIDerivedB::getType() const */

undefined8 RTTIDerivedB::getType(void)

{
 return 2;
}



/* Function: __uniq_ptr_impl @ 001044d0 */

/* std::__uniq_ptr_data<int, std::default_delete<int>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 001044fc */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,std::default_delete<int>>::tuple<true,true>
 ((tuple<int*,std::default_delete<int>> *)this);
 puVar1 = (undefined8 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 00104540 */

/* std::tuple<int*, std::default_delete<int> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int>>::tuple<true,true>
 (tuple<int*,std::default_delete<int>> *this)

{
 /* try { // try from 00104554 to 00104557 has its CatchHandler @ 00104568 */
 _Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int>> *)this);
 return;
}



/* Function: _Tuple_impl @ 0010456c */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int>> *this)

{
 _Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl();
 _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
 return;
}



/* Function: _Tuple_impl @ 0010459c */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_Tuple_impl(void)

{
 _Head_base<1ul,std::default_delete<int>,true>::_Head_base();
 return;
}



/* Function: _Head_base @ 001045c0 */

/* std::_Head_base<0ul, int*, false>::_Head_base() */

void __thiscall std::_Head_base<0ul,int*,false>::_Head_base(_Head_base<0ul,int*,false> *this)

{
 *(undefined8 *)this = 0;
 return;
}



/* Function: _Head_base @ 001045d8 */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int>,true>::_Head_base(void)

{
 return;
}



/* Function: get_deleter @ 001045e8 */

/* std::unique_ptr<int, std::default_delete<int> >::get_deleter() */

undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get_deleter
 (unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 001045fc to 00104603 has its CatchHandler @ 00104618 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 return uVar1;
}



/* Function: operator() @ 0010461c */

/* std::default_delete<int>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int>::operator()(default_delete<int> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete(param_1);
 }
 return;
}



/* Function: move<int*&> @ 00104658 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::remove_reference<int*&>::type&& std::move<int*&>(int*&) */

type * std::move<int*&>(int **param_1)

{
 return (type *)param_1;
}



/* Function: _M_deleter @ 0010466c */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 get<1ul,int*,std::default_delete<int>>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int>> @ 00104690 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int> > >::type& std::get<1ul, int*,
 std::default_delete<int> >(std::tuple<int*, std::default_delete<int> >&) */

type * std::get<1ul,int*,std::default_delete<int>>(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper<1ul,std::default_delete<int>>((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int>> @ 001046b4 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int>& std::__get_helper<1ul, std::default_delete<int>>(std::_Tuple_impl<1ul,
 std::default_delete<int>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int>>(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int>>::_M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 001046d8 */

/* std::_Tuple_impl<1ul, std::default_delete<int> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<1ul,std::default_delete<int>,true>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 001046fc */

/* std::_Head_base<1ul, std::default_delete<int>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int>,true>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00104710 */

/* std::unique_ptr<int, std::default_delete<int> >::get() const */

undefined8 __thiscall
std::unique_ptr<int,std::default_delete<int>>::get(unique_ptr<int,std::default_delete<int>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104724 to 0010472b has its CatchHandler @ 00104740 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104744 */

/* std::__uniq_ptr_impl<int, std::default_delete<int> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,std::default_delete<int>>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int>> @ 0010476c */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int> > >::type const& std::get<0ul,
 int*, std::default_delete<int> >(std::tuple<int*, std::default_delete<int> > const&) */

type * std::get<0ul,int*,std::default_delete<int>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int>> @ 00104790 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 001047b4 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 001047d8 */

/* std::_Head_base<0ul, int*, false>::_M_head(std::_Head_base<0ul, int*, false> const&) */

_Head_base * std::_Head_base<0ul,int*,false>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: __uniq_ptr_impl @ 001047ec */

/* std::__uniq_ptr_data<int, std::default_delete<int []>, true, true>::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_data<int,std::default_delete<int[]>,true,true>::__uniq_ptr_impl
 (__uniq_ptr_data<int,std::default_delete<int[]>,true,true> *this,int *param_1)

{
 __uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this,param_1);
 return;
}



/* Function: __uniq_ptr_impl @ 00104818 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::__uniq_ptr_impl(int*) */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::__uniq_ptr_impl
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this,int *param_1)

{
 undefined8 *puVar1;
 
 tuple<int*,std::default_delete<int[]>>::tuple<true,true>
 ((tuple<int*,std::default_delete<int[]>> *)this);
 puVar1 = (undefined8 *)_M_ptr(this);
 *puVar1 = param_1;
 return;
}



/* Function: tuple<true,true> @ 0010485c */

/* std::tuple<int*, std::default_delete<int []> >::tuple<true, true>() */

void __thiscall
std::tuple<int*,std::default_delete<int[]>>::tuple<true,true>
 (tuple<int*,std::default_delete<int[]>> *this)

{
 /* try { // try from 00104870 to 00104873 has its CatchHandler @ 00104884 */
 _Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
 ((_Tuple_impl<0ul,int*,std::default_delete<int[]>> *)this);
 return;
}



/* Function: _M_ptr @ 00104888 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
 return;
}



/* Function: _Tuple_impl @ 001048ac */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_Tuple_impl() */

void __thiscall
std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_Tuple_impl
 (_Tuple_impl<0ul,int*,std::default_delete<int[]>> *this)

{
 _Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl();
 _Head_base<0ul,int*,false>::_Head_base((_Head_base<0ul,int*,false> *)this);
 return;
}



/* Function: _Tuple_impl @ 001048dc */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_Tuple_impl() */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_Tuple_impl(void)

{
 _Head_base<1ul,std::default_delete<int[]>,true>::_Head_base();
 return;
}



/* Function: _Head_base @ 00104900 */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_Head_base() */

void std::_Head_base<1ul,std::default_delete<int[]>,true>::_Head_base(void)

{
 return;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104910 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<0ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104934 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104958 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> >&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: get_deleter @ 0010497c */

/* std::unique_ptr<int [], std::default_delete<int []> >::get_deleter() */

undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get_deleter
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104990 to 00104997 has its CatchHandler @ 001049ac */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: operator() @ 001049b0 */

/* std::enable_if<is_convertible<int (*) [], int (*) []>::value, void>::type std::default_delete<int
 []>::TEMPNAMEPLACEHOLDERVALUE(int*) const */

void __thiscall std::default_delete<int[]>::operator()(default_delete<int[]> *this,int *param_1)

{
 if (param_1 != (int *)0x0) {
 operator_delete__(param_1);
 }
 return;
}



/* Function: _M_deleter @ 001049ec */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_deleter() */

void __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_deleter
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 get<1ul,int*,std::default_delete<int[]>>((tuple *)this);
 return;
}



/* Function: get<1ul,int*,std::default_delete<int[]>> @ 00104a10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<1ul, std::tuple<int*, std::default_delete<int []> > >::type& std::get<1ul,
 int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >&) */

type * std::get<1ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = __get_helper<1ul,std::default_delete<int[]>>((_Tuple_impl *)param_1);
 return (type *)pdVar1;
}



/* Function: __get_helper<1ul,std::default_delete<int[]>> @ 00104a34 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::default_delete<int []>& std::__get_helper<1ul, std::default_delete<int
 []>>(std::_Tuple_impl<1ul, std::default_delete<int []>>&) */

default_delete * std::__get_helper<1ul,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
 default_delete *pdVar1;
 
 pdVar1 = (default_delete *)_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(param_1);
 return pdVar1;
}



/* Function: _M_head @ 00104a58 */

/* std::_Tuple_impl<1ul, std::default_delete<int []> >::_M_head(std::_Tuple_impl<1ul,
 std::default_delete<int []> >&) */

void std::_Tuple_impl<1ul,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<1ul,std::default_delete<int[]>,true>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: _M_head @ 00104a7c */

/* std::_Head_base<1ul, std::default_delete<int []>, true>::_M_head(std::_Head_base<1ul,
 std::default_delete<int []>, true>&) */

_Head_base * std::_Head_base<1ul,std::default_delete<int[]>,true>::_M_head(_Head_base *param_1)

{
 return param_1;
}



/* Function: get @ 00104a90 */

/* std::unique_ptr<int [], std::default_delete<int []> >::get() const */

undefined8 __thiscall
std::unique_ptr<int[],std::default_delete<int[]>>::get
 (unique_ptr<int[],std::default_delete<int[]>> *this)

{
 undefined8 uVar1;
 
 /* try { // try from 00104aa4 to 00104aab has its CatchHandler @ 00104ac0 */
 uVar1 = __uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 ((__uniq_ptr_impl<int,std::default_delete<int[]>> *)this);
 return uVar1;
}



/* Function: _M_ptr @ 00104ac4 */

/* std::__uniq_ptr_impl<int, std::default_delete<int []> >::_M_ptr() const */

undefined8 __thiscall
std::__uniq_ptr_impl<int,std::default_delete<int[]>>::_M_ptr
 (__uniq_ptr_impl<int,std::default_delete<int[]>> *this)

{
 type *ptVar1;
 
 ptVar1 = get<0ul,int*,std::default_delete<int[]>>((tuple *)this);
 return *(undefined8 *)ptVar1;
}



/* Function: get<0ul,int*,std::default_delete<int[]>> @ 00104aec */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::tuple_element<0ul, std::tuple<int*, std::default_delete<int []> > >::type const&
 std::get<0ul, int*, std::default_delete<int []> >(std::tuple<int*, std::default_delete<int []> >
 const&) */

type * std::get<0ul,int*,std::default_delete<int[]>>(tuple *param_1)

{
 type *ptVar1;
 
 ptVar1 = (type *)__get_helper<0ul,int*,std::default_delete<int[]>>((_Tuple_impl *)param_1);
 return ptVar1;
}



/* Function: __get_helper<0ul,int*,std::default_delete<int[]>> @ 00104b10 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int* const& std::__get_helper<0ul, int*, std::default_delete<int []> >(std::_Tuple_impl<0ul,
 int*, std::default_delete<int []> > const&) */

int ** std::__get_helper<0ul,int*,std::default_delete<int[]>>(_Tuple_impl *param_1)

{
 int **ppiVar1;
 
 ppiVar1 = (int **)_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(param_1);
 return ppiVar1;
}



/* Function: _M_head @ 00104b34 */

/* std::_Tuple_impl<0ul, int*, std::default_delete<int []> >::_M_head(std::_Tuple_impl<0ul, int*,
 std::default_delete<int []> > const&) */

void std::_Tuple_impl<0ul,int*,std::default_delete<int[]>>::_M_head(_Tuple_impl *param_1)

{
 _Head_base<0ul,int*,false>::_M_head((_Head_base *)param_1);
 return;
}



/* Function: forward<int*&> @ 00104b58 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* int*& std::forward<int*&>(std::remove_reference<int*&>::type&) */

int ** std::forward<int*&>(type *param_1)

{
 return (int **)param_1;
}



/* Function: _Head_base<int*&> @ 00104b6c */

/* std::_Head_base<0ul, int*, false>::_Head_base<int*&>(int*&) */

void __thiscall
std::_Head_base<0ul,int*,false>::_Head_base<int*&>(_Head_base<0ul,int*,false> *this,int **param_1)

{
 int **ppiVar1;
 
 ppiVar1 = forward<int*&>((type *)param_1);
 *(int **)this = *ppiVar1;
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 216 */
