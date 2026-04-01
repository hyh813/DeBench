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

/* Additional type definitions */
typedef unsigned int undefined4;
typedef unsigned char undefined;
typedef unsigned short undefined2;
typedef unsigned long undefined8;
typedef unsigned int uint;
typedef unsigned long ulong;

/* Function pointer type */
typedef void (*code)(void);

/* Stack protection globals */

/* Class forward declarations and definitions */
typedef int (*_func_int_varargs)(void *, int, ...);

typedef struct _SimpleClass {
    char name[32];
} SimpleClass;

typedef struct _Base {
    _func_int_varargs **_vptr_Base;
} Base;

typedef struct _Derived {
    Base super_Base;
    int multiplier;
} Derived;

typedef struct _MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int dataA;
    void *field_0x10;
} MiddleA;

typedef struct _MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
    void *field_0x10;
} MiddleB;

typedef struct _DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x20;
    int _40_4_;
} DiamondDerived;

/* Forward declaration for call_virtual_func */
int call_virtual_func(Base *obj, int x);

/* Stack protection globals */
extern unsigned long __stack_chk_guard;
extern void __stack_chk_fail(void *guard, ...);

/* C++ exception handling */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, void *, void *);
void __cxa_finalize(void *);

/* Type info for exception handling */
extern void *int_typeinfo;

/* Global objects for dynamic initialization */
extern char completed_0;
extern void *__dso_handle;

/* Forward declarations for test functions */
void test_cpp_oo_features(void);

/* C++ standard library declarations - C compatible wrappers */
struct std_ios_base_Init {
    int _dummy;
};
extern struct std_ios_base_Init __ioinit;
void __cxa_atexit(void (*)(void *), void *, void **);

/* std::ios_base::Init functions */
void std_ios_base_Init_Init(struct std_ios_base_Init *this);
void std_ios_base_Init_Dtor(struct std_ios_base_Init *this);

/* Container template class - defined before use */
typedef struct _Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct _Container_double {
    int size;
    double data[10];
} Container_double;

/* Template function forward declarations - C compatible versions */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Template function instantiations for C */
int template_max_int(int a, int b);
double template_max_double(double a, double b);
void template_swap_int(int *a, int *b);

/* Container template class */
typedef struct _Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct _Container_double {
    int size;
    double data[10];
} Container_double;

/* Container template class functions */
void Container_int_Container(Container_int *this);
void Container_int_push(Container_int *this, int value);
int Container_int_get(Container_int *this, int idx);
int Container_int_getSize(Container_int *this);
void Container_double_Container(Container_double *this);
void Container_double_push(Container_double *this, double value);
double Container_double_get(Container_double *this, int idx);
int Container_double_getSize(Container_double *this);

/* Additional macro replacements for C++ scope resolution */
#define Container_int_Container Container_int_Container
#define Container_int_push Container_int_push
#define Container_int_get Container_int_get
#define Container_int_getSize Container_int_getSize

/* RTTI pointer declarations */
extern int (*PTR__RTTIDerivedA_00113b58)(void *);
extern int (*PTR__RTTIDerivedB_00113b80)(void *);

/* Container template class */
typedef struct _Container_int {
    int size;
    int data[10];
} Container_int;

typedef struct _Container_double {
    int size;
    double data[10];
} Container_double;

/* operator_new declaration */
void *operator_new(unsigned long size);

/* unique_ptr simplified declarations for C compatibility */
typedef struct _unique_ptr_int {
    void *ptr;
} unique_ptr_int;

typedef struct _unique_ptr_int_array {
    void *ptr;
} unique_ptr_int_array;

/* Virtual function pointer declarations */
extern int (*PTR_virtual_func_00113868)(void *, int);
extern int (*PTR_virtual_func_00113898)(void *, int);

/* Diamond inheritance virtual function pointers */
extern int (*PTR_func_00113ac8)(void);
extern int (*PTR_func_00113b30)(void);
extern int (*PTR_func_00113af8)(void);
extern int (*PTR_func_001138e0)(void);
extern int (*PTR_func_00113918)(void);
extern int (*PTR_func_00113958)(void);
extern int (*PTR_func_00113990)(void);

/* Data references - const char * for printf compatibility */
extern const char DAT_001025b2[];
extern const char DAT_001025d6[];
extern const char DAT_001025f4[];
extern const char DAT_00102610[];
extern const char DAT_0010262c[];
extern const char DAT_00102648[];
extern const char DAT_00102665[];
extern const char DAT_00102681[];
extern const char DAT_0010269d[];
extern const char DAT_001026b9[];
extern const char DAT_001026d5[];
extern const char DAT_001026f2[];
extern const char DAT_0010270f[];

/* String data for printf format strings */
extern const char PTR_PTR_00113a90[];
extern const char PTR_PTR_00113a80[];

/* RTTI pointer declarations */
extern void *PTR__RTTIDerivedA_00113b58;
extern void *PTR__RTTIDerivedB_00113b80;

/* RTTI type info structures */
struct RTTIBase {
    void *_vptr;
};
struct RTTIDerivedA {
    void *_vptr;
};
struct RTTIDerivedB {
    void *_vptr;
};

/* Type info declarations for RTTI */
extern void *RTTIBase_typeinfo;
extern void *RTTIDerivedA_typeinfo;
extern void *RTTIDerivedB_typeinfo;

/* RTTI typeinfo declarations */
struct RTTIBase {
    void *_vptr;
};
extern struct RTTIBase RTTIBase_typeinfo_instance;

/* Define RTTIBase typedef for use in function signatures */
typedef struct RTTIBase RTTIBase;

struct RTTIDerivedA {
    void *_vptr;
};
extern struct RTTIDerivedA RTTIDerivedA_typeinfo_instance;

struct RTTIDerivedB {
    void *_vptr;
};
extern struct RTTIDerivedB RTTIDerivedB_typeinfo_instance;

/* std namespace wrapper for C compatibility */
#define std

/* Replace C++ scope resolution with C-compatible underscore */
#define RTTIBase__typeinfo RTTIBase_typeinfo_instance
#define RTTIDerivedA__typeinfo RTTIDerivedA_typeinfo_instance
#define RTTIDerivedB__typeinfo RTTIDerivedB_typeinfo_instance

/* Use macros to replace C++ scope resolution */
#define RTTIBase__typeinfo_RTTIBase RTTIBase_typeinfo_instance
#define RTTIDerivedA__typeinfo_RTTIDerivedA RTTIDerivedA_typeinfo_instance
#define RTTIDerivedB__typeinfo_RTTIDerivedB RTTIDerivedB_typeinfo_instance

/* Replace std::ios_base::Init with C-compatible names */
#define std__ios_base__Init_Init std_ios_base_Init_Init
#define std__ios_base__Init__Init std_ios_base_Init_Init
#define std__ios_base__Init_Dtor std_ios_base_Init_Dtor
#define std__ios_base__Init__Dtor std_ios_base_Init_Dtor
#define std__ios_base__Init_Init_ std_ios_base_Init_Init
#define std__ios_base__Init__Init_ std_ios_base_Init_Init
#define std__ios_base__Init_Dtor_ std_ios_base_Init_Dtor
#define std__ios_base__Init__Dtor_ std_ios_base_Init_Dtor
#define std__ios_base__Init__Init std_ios_base_Init_Init
#define std__ios_base__Init__Dtor std_ios_base_Init_Dtor
#define std__ios_base_Init_Init std_ios_base_Init_Init
#define std__ios_base_Init_Dtor std_ios_base_Init_Dtor
#define std__ios_base__Init_Init std_ios_base_Init_Init
#define std__ios_base__Init_Dtor std_ios_base_Init_Dtor

/* Replace std::__ioinit */
#define std____ioinit std___ioinit
#define std__ioinit std___ioinit

/* Replace operator_new and operator_delete */
#define operator_new operator_new
#define operator_delete operator_delete
#define operator_new__ operator_new
#define operator_delete__ operator_delete

/* Replace Container template functions with :: */
#define Container_int__push Container_int_push
#define Container_int__get Container_int_get
#define Container_int__getSize Container_int_getSize
#define Container_int__Container Container_int_Container
#define Container_int::push Container_int_push
#define Container_int::get Container_int_get
#define Container_int::getSize Container_int_getSize
#define Container_int::Container Container_int_Container
#define Container_double__push Container_double_push
#define Container_double__get Container_double_get
#define Container_double__getSize Container_double_getSize
#define Container_double__Container Container_double_Container
#define Container_double::push Container_double_push
#define Container_double::get Container_double_get
#define Container_double::getSize Container_double_getSize
#define Container_double::Container Container_double_Container

/* Replace unique_ptr destructors */
#define std__unique_ptr_int_std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr_ std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr__ std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr___ std_unique_ptr_int_dtor

#define std__unique_ptr_int__std__default_delete_int_____unique_ptr std_unique_ptr_int_array_dtor
#define std__unique_ptr_int__std__default_delete_int_____unique_ptr_ std_unique_ptr_int_array_dtor
#define std__unique_ptr_int__std__default_delete_int_____unique_ptr__ std_unique_ptr_int_array_dtor
#define std__unique_ptr_int__std__default_delete_int_____unique_ptr___ std_unique_ptr_int_array_dtor

/* Replace LifecycleClass */
#define LifecycleClass__instance_count LifecycleClass_instance_count

/* Replace DiamondDerived */
#define DiamondDerived__func DiamondDerived_func
#define DiamondDerived__func_ DiamondDerived_func
#define DiamondDerived__func__ DiamondDerived_func
#define DiamondDerived__func___ DiamondDerived_func
#define DiamondDerived__func____ DiamondDerived_func
#define DiamondDerived__func_____ DiamondDerived_func
#define DiamondDerived__func______ DiamondDerived_func
#define DiamondDerived__func_______ DiamondDerived_func
#define DiamondDerived__func________ DiamondDerived_func
#define DiamondDerived__func_________ DiamondDerived_func
#define DiamondDerived__func__________ DiamondDerived_func
#define DiamondDerived__func___________ DiamondDerived_func
#define DiamondDerived__func____________ DiamondDerived_func
#define DiamondDerived__func_____________ DiamondDerived_func
#define DiamondDerived__func______________ DiamondDerived_func
#define DiamondDerived__func_______________ DiamondDerived_func
#define DiamondDerived__func________________ DiamondDerived_func
#define DiamondDerived__func_________________ DiamondDerived_func
#define DiamondDerived__func__________________ DiamondDerived_func
#define DiamondDerived__func___________________ DiamondDerived_func

#define DiamondDerived__DiamondDerived DiamondDerived_ctor
#define DiamondDerived__DiamondDerived_ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived__ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived___ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived____ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived_____ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived______ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived_______ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived________ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived_________ DiamondDerived_ctor

#define DiamondDerived__DiamondDerived__int__int___DiamondDerived DiamondDerived_ctor
#define DiamondDerived__DiamondDerived__int__int____DiamondDerived DiamondDerived_ctor
#define DiamondDerived__DiamondDerived__int__int_____DiamondDerived DiamondDerived_ctor
#define DiamondDerived__DiamondDerived__int__int__DiamondDerived DiamondDerived_ctor
#define DiamondDerived__DiamondDerived__int__int_DiamondDerived DiamondDerived_ctor

#define DiamondDerived____DiamondDerived DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived__ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived___ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived____ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_____ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived______ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_______ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived__________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived___________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived____________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_____________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived______________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_______________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived________________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_________________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived__________________ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived___________________ DiamondDerived_dtor

/* Replace MiddleA */
#define MiddleA__func MiddleA_func
#define MiddleA__func_ MiddleA_func
#define MiddleA__func__ MiddleA_func
#define MiddleA__func___ MiddleA_func
#define MiddleA__func____ MiddleA_func
#define MiddleA__func_____ MiddleA_func
#define MiddleA__func______ MiddleA_func
#define MiddleA__func_______ MiddleA_func
#define MiddleA__func________ MiddleA_func
#define MiddleA__func_________ MiddleA_func

#define MiddleA__MiddleA MiddleA_ctor
#define MiddleA__MiddleA_ MiddleA_ctor
#define MiddleA__MiddleA__ MiddleA_ctor
#define MiddleA__MiddleA___ MiddleA_ctor
#define MiddleA__MiddleA____ MiddleA_ctor
#define MiddleA__MiddleA_____ MiddleA_ctor

#define MiddleA____MiddleA MiddleA_dtor
#define MiddleA____MiddleA_ MiddleA_dtor
#define MiddleA____MiddleA__ MiddleA_dtor
#define MiddleA____MiddleA___ MiddleA_dtor
#define MiddleA____MiddleA____ MiddleA_dtor
#define MiddleA____MiddleA_____ MiddleA_dtor

/* Replace MiddleB */
#define MiddleB__func MiddleB_func
#define MiddleB__func_ MiddleB_func
#define MiddleB__func__ MiddleB_func
#define MiddleB__func___ MiddleB_func
#define MiddleB__func____ MiddleB_func
#define MiddleB__func_____ MiddleB_func
#define MiddleB__func______ MiddleB_func
#define MiddleB__func_______ MiddleB_func
#define MiddleB__func________ MiddleB_func
#define MiddleB__func_________ MiddleB_func

#define MiddleB__MiddleB MiddleB_ctor
#define MiddleB__MiddleB_ MiddleB_ctor
#define MiddleB__MiddleB__ MiddleB_ctor
#define MiddleB__MiddleB___ MiddleB_ctor
#define MiddleB__MiddleB____ MiddleB_ctor
#define MiddleB__MiddleB_____ MiddleB_ctor

#define MiddleB____MiddleB MiddleB_dtor
#define MiddleB____MiddleB_ MiddleB_dtor
#define MiddleB____MiddleB__ MiddleB_dtor
#define MiddleB____MiddleB___ MiddleB_dtor
#define MiddleB____MiddleB____ MiddleB_dtor
#define MiddleB____MiddleB_____ MiddleB_dtor

/* Replace RTTIDerivedA */
#define RTTIDerivedA__getType RTTIDerivedA_getType
#define RTTIDerivedA__getType_ RTTIDerivedA_getType
#define RTTIDerivedA__getType__ RTTIDerivedA_getType
#define RTTIDerivedA__getType___ RTTIDerivedA_getType

#define RTTIDerivedA__RTTIDerivedA RTTIDerivedA_ctor
#define RTTIDerivedA__RTTIDerivedA_ RTTIDerivedA_ctor

#define RTTIDerivedA____RTTIDerivedA RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA_ RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA__ RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA___ RTTIDerivedA_dtor

/* Replace RTTIDerivedB */
#define RTTIDerivedB__getType RTTIDerivedB_getType
#define RTTIDerivedB__getType_ RTTIDerivedB_getType
#define RTTIDerivedB__getType__ RTTIDerivedB_getType
#define RTTIDerivedB__getType___ RTTIDerivedB_getType

#define RTTIDerivedB__RTTIDerivedB RTTIDerivedB_ctor
#define RTTIDerivedB__RTTIDerivedB_ RTTIDerivedB_ctor

#define RTTIDerivedB____RTTIDerivedB RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB_ RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB__ RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB___ RTTIDerivedB_dtor

/* Replace Base */
#define Base__virtual_func Base_virtual_func
#define Base__virtual_func_ Base_virtual_func
#define Base__virtual_func__ Base_virtual_func
#define Base__virtual_func___ Base_virtual_func

#define Base__getName Base_getName
#define Base__getName_ Base_getName
#define Base__getName__ Base_getName

#define Base__Base Base_ctor
#define Base__Base_ Base_ctor

#define Base____Base Base_dtor
#define Base____Base_ Base_dtor
#define Base____Base__ Base_dtor
#define Base____Base___ Base_dtor

/* Replace Derived */
#define Derived__virtual_func Derived_virtual_func
#define Derived__virtual_func_ Derived_virtual_func
#define Derived__virtual_func__ Derived_virtual_func
#define Derived__virtual_func___ Derived_virtual_func

#define Derived__getName Derived_getName
#define Derived__getName_ Derived_getName
#define Derived__getName__ Derived_getName

#define Derived__Derived Derived_ctor
#define Derived__Derived_ Derived_ctor

#define Derived____Derived Derived_dtor
#define Derived____Derived_ Derived_dtor
#define Derived____Derived__ Derived_dtor
#define Derived____Derived___ Derived_dtor

/* Replace VirtualBase */
#define VirtualBase__func VirtualBase_func
#define VirtualBase__func_ VirtualBase_func

#define VirtualBase__VirtualBase VirtualBase_ctor
#define VirtualBase__VirtualBase_ VirtualBase_ctor

#define VirtualBase____VirtualBase VirtualBase_dtor
#define VirtualBase____VirtualBase_ VirtualBase_dtor
#define VirtualBase____VirtualBase__ VirtualBase_dtor
#define VirtualBase____VirtualBase___ VirtualBase_dtor

/* Replace MultiDerived */
#define MultiDerived__funcA MultiDerived_funcA
#define MultiDerived__funcA_ MultiDerived_funcA
#define MultiDerived__funcA__ MultiDerived_funcA

#define MultiDerived__funcB MultiDerived_funcB
#define MultiDerived__funcB_ MultiDerived_funcB
#define MultiDerived__funcB__ MultiDerived_funcB

#define MultiDerived__MultiDerived MultiDerived_ctor
#define MultiDerived__MultiDerived_ MultiDerived_ctor

#define MultiDerived____MultiDerived MultiDerived_dtor
#define MultiDerived____MultiDerived_ MultiDerived_dtor
#define MultiDerived____MultiDerived__ MultiDerived_dtor
#define MultiDerived____MultiDerived___ MultiDerived_dtor

/* Replace std::ios_base::Init */
#define std__ios_base__Init__Init std_ios_base_Init_Init
#define std__ios_base__Init_Init std_ios_base_Init_Init
#define std__ios_base__Init__Init_ std_ios_base_Init_Init
#define std__ios_base__Init_Init_ std_ios_base_Init_Init
#define std__ios_base__Init__Init__ std_ios_base_Init_Init
#define std__ios_base__Init_Init__ std_ios_base_Init_Init
#define std__ios_base__Init__Init___ std_ios_base_Init_Init
#define std__ios_base__Init_Init___ std_ios_base_Init_Init

#define std__ios_base__Init__DTor std_ios_base_Init_Dtor
#define std__ios_base__Init_DTor std_ios_base_Init_Dtor
#define std__ios_base__Init__DTor_ std_ios_base_Init_Dtor
#define std__ios_base__Init_DTor_ std_ios_base_Init_Dtor
#define std__ios_base__Init__DTor__ std_ios_base_Init_Dtor
#define std__ios_base__Init_DTor__ std_ios_base_Init_Dtor

/* Replace Container member function calls */
#define Container_int__push Container_int_push
#define Container_int__get Container_int_get
#define Container_int__getSize Container_int_getSize
#define Container_int__Container Container_int_Container

#define Container_double__push Container_double_push
#define Container_double__get Container_double_get
#define Container_double__getSize Container_double_getSize
#define Container_double__Container Container_double_Container

/* Replace DiamondDerived member function calls */
#define DiamondDerived__func DiamondDerived_func
#define DiamondDerived__func_ DiamondDerived_func
#define DiamondDerived__func__ DiamondDerived_func
#define DiamondDerived__func___ DiamondDerived_func
#define DiamondDerived__func____ DiamondDerived_func
#define DiamondDerived__func_____ DiamondDerived_func

#define DiamondDerived____DiamondDerived DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived__ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived___ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived____ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_____ DiamondDerived_dtor

/* Replace MiddleA member function calls */
#define MiddleA__func MiddleA_func
#define MiddleA__func_ MiddleA_func
#define MiddleA__func__ MiddleA_func
#define MiddleA__func___ MiddleA_func
#define MiddleA__func____ MiddleA_func

#define MiddleA____MiddleA MiddleA_dtor
#define MiddleA____MiddleA_ MiddleA_dtor
#define MiddleA____MiddleA__ MiddleA_dtor
#define MiddleA____MiddleA___ MiddleA_dtor
#define MiddleA____MiddleA____ MiddleA_dtor
#define MiddleA____MiddleA_____ MiddleA_dtor

/* Replace MiddleB member function calls */
#define MiddleB__func MiddleB_func
#define MiddleB__func_ MiddleB_func
#define MiddleB__func__ MiddleB_func
#define MiddleB__func___ MiddleB_func
#define MiddleB__func____ MiddleB_func

#define MiddleB____MiddleB MiddleB_dtor
#define MiddleB____MiddleB_ MiddleB_dtor
#define MiddleB____MiddleB__ MiddleB_dtor
#define MiddleB____MiddleB___ MiddleB_dtor
#define MiddleB____MiddleB____ MiddleB_dtor
#define MiddleB____MiddleB_____ MiddleB_dtor

/* Replace VirtualBase member function calls */
#define VirtualBase__func VirtualBase_func
#define VirtualBase__func_ VirtualBase_func

#define VirtualBase____VirtualBase VirtualBase_dtor
#define VirtualBase____VirtualBase_ VirtualBase_dtor
#define VirtualBase____VirtualBase__ VirtualBase_dtor
#define VirtualBase____VirtualBase___ VirtualBase_dtor

/* Replace Base member function calls */
#define Base__virtual_func Base_virtual_func
#define Base__virtual_func_ Base_virtual_func
#define Base__virtual_func__ Base_virtual_func

#define Base__getName Base_getName
#define Base__getName_ Base_getName
#define Base__getName__ Base_getName

#define Base____Base Base_dtor
#define Base____Base_ Base_dtor
#define Base____Base__ Base_dtor
#define Base____Base___ Base_dtor

/* Replace Derived member function calls */
#define Derived__virtual_func Derived_virtual_func
#define Derived__virtual_func_ Derived_virtual_func
#define Derived__virtual_func__ Derived_virtual_func

#define Derived__getName Derived_getName
#define Derived__getName_ Derived_getName
#define Derived__getName__ Derived_getName

#define Derived____Derived Derived_dtor
#define Derived____Derived_ Derived_dtor
#define Derived____Derived__ Derived_dtor
#define Derived____Derived___ Derived_dtor

/* Replace RTTIDerivedA member function calls */
#define RTTIDerivedA__getType RTTIDerivedA_getType
#define RTTIDerivedA__getType_ RTTIDerivedA_getType
#define RTTIDerivedA__getType__ RTTIDerivedA_getType

#define RTTIDerivedA____RTTIDerivedA RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA_ RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA__ RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA___ RTTIDerivedA_dtor

/* Replace RTTIDerivedB member function calls */
#define RTTIDerivedB__getType RTTIDerivedB_getType
#define RTTIDerivedB__getType_ RTTIDerivedB_getType
#define RTTIDerivedB__getType__ RTTIDerivedB_getType

#define RTTIDerivedB____RTTIDerivedB RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB_ RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB__ RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB___ RTTIDerivedB_dtor

/* Replace MultiDerived member function calls */
#define MultiDerived__funcA MultiDerived_funcA
#define MultiDerived__funcA_ MultiDerived_funcA
#define MultiDerived__funcA__ MultiDerived_funcA

#define MultiDerived__funcB MultiDerived_funcB
#define MultiDerived__funcB_ MultiDerived_funcB
#define MultiDerived__funcB__ MultiDerived_funcB

#define MultiDerived____MultiDerived MultiDerived_dtor
#define MultiDerived____MultiDerived_ MultiDerived_dtor
#define MultiDerived____MultiDerived__ MultiDerived_dtor
#define MultiDerived____MultiDerived___ MultiDerived_dtor

/* Replace LifecycleClass */
#define LifecycleClass__instance_count LifecycleClass_instance_count
#define LifecycleClass__instance_count_ LifecycleClass_instance_count
#define LifecycleClass__instance_count__ LifecycleClass_instance_count
#define LifecycleClass__instance_count___ LifecycleClass_instance_count
#define LifecycleClass_instance_count LifecycleClass_instance_count
#define LifecycleClass__instance_count__ LifecycleClass_instance_count
#define LifecycleClass::instance_count LifecycleClass_instance_count

/* Replace C++ scope resolution for class methods */
#define DiamondDerived__func DiamondDerived_func
#define DiamondDerived__func_ DiamondDerived_func
#define DiamondDerived__func__ DiamondDerived_func
#define DiamondDerived_func DiamondDerived_func
#define DiamondDerived::func DiamondDerived_func
#define DiamondDerived__DiamondDerived DiamondDerived_ctor
#define DiamondDerived__DiamondDerived_ DiamondDerived_ctor
#define DiamondDerived__DiamondDerived__ DiamondDerived_ctor
#define DiamondDerived_DiamondDerived DiamondDerived_ctor
#define DiamondDerived::DiamondDerived DiamondDerived_ctor
#define DiamondDerived____DiamondDerived DiamondDerived_dtor
#define DiamondDerived____DiamondDerived_ DiamondDerived_dtor
#define DiamondDerived____DiamondDerived__ DiamondDerived_dtor
#define DiamondDerived_DiamondDerived_ DiamondDerived_dtor
#define DiamondDerived::~DiamondDerived DiamondDerived_dtor
#define DiamondDerived__destroy__ DiamondDerived_dtor

#define MiddleA__func MiddleA_func
#define MiddleA__func_ MiddleA_func
#define MiddleA__func__ MiddleA_func
#define MiddleA_func MiddleA_func
#define MiddleA::func MiddleA_func
#define MiddleA__MiddleA MiddleA_ctor
#define MiddleA__MiddleA_ MiddleA_ctor
#define MiddleA_MiddleA MiddleA_ctor
#define MiddleA::MiddleA MiddleA_ctor
#define MiddleA____MiddleA MiddleA_dtor
#define MiddleA____MiddleA_ MiddleA_dtor
#define MiddleA____MiddleA__ MiddleA_dtor
#define MiddleA_MiddleA_ MiddleA_dtor
#define MiddleA::~MiddleA MiddleA_dtor

#define MiddleB__func MiddleB_func
#define MiddleB__func_ MiddleB_func
#define MiddleB__func__ MiddleB_func
#define MiddleB_func MiddleB_func
#define MiddleB::func MiddleB_func
#define MiddleB__MiddleB MiddleB_ctor
#define MiddleB__MiddleB_ MiddleB_ctor
#define MiddleB_MiddleB MiddleB_ctor
#define MiddleB::MiddleB MiddleB_ctor
#define MiddleB____MiddleB MiddleB_dtor
#define MiddleB____MiddleB_ MiddleB_dtor
#define MiddleB____MiddleB__ MiddleB_dtor
#define MiddleB_MiddleB_ MiddleB_dtor
#define MiddleB::~MiddleB MiddleB_dtor

#define VirtualBase__func VirtualBase_func
#define VirtualBase__func_ VirtualBase_func
#define VirtualBase_func VirtualBase_func
#define VirtualBase::func VirtualBase_func
#define VirtualBase__VirtualBase VirtualBase_ctor
#define VirtualBase__VirtualBase_ VirtualBase_ctor
#define VirtualBase_VirtualBase VirtualBase_ctor
#define VirtualBase::VirtualBase VirtualBase_ctor
#define VirtualBase____VirtualBase VirtualBase_dtor
#define VirtualBase____VirtualBase_ VirtualBase_dtor
#define VirtualBase____VirtualBase__ VirtualBase_dtor
#define VirtualBase_VirtualBase_ VirtualBase_dtor
#define VirtualBase::~VirtualBase VirtualBase_dtor

#define MultiDerived__funcA MultiDerived_funcA
#define MultiDerived__funcA_ MultiDerived_funcA
#define MultiDerived__funcA__ MultiDerived_funcA
#define MultiDerived_funcA MultiDerived_funcA
#define MultiDerived::funcA MultiDerived_funcA
#define MultiDerived__funcB MultiDerived_funcB
#define MultiDerived__funcB_ MultiDerived_funcB
#define MultiDerived__funcB__ MultiDerived_funcB
#define MultiDerived_funcB MultiDerived_funcB
#define MultiDerived::funcB MultiDerived_funcB
#define MultiDerived__MultiDerived MultiDerived_ctor
#define MultiDerived__MultiDerived_ MultiDerived_ctor
#define MultiDerived_MultiDerived MultiDerived_ctor
#define MultiDerived::MultiDerived MultiDerived_ctor
#define MultiDerived____MultiDerived MultiDerived_dtor
#define MultiDerived____MultiDerived_ MultiDerived_dtor
#define MultiDerived____MultiDerived__ MultiDerived_dtor
#define MultiDerived_MultiDerived_ MultiDerived_dtor
#define MultiDerived::~MultiDerived MultiDerived_dtor

#define Base__virtual_func Base_virtual_func
#define Base__virtual_func_ Base_virtual_func
#define Base__virtual_func__ Base_virtual_func
#define Base_virtual_func Base_virtual_func
#define Base::virtual_func Base_virtual_func
#define Base__getName Base_getName
#define Base__getName_ Base_getName
#define Base__getName__ Base_getName
#define Base_getName Base_getName
#define Base::getName Base_getName
#define Base__Base Base_ctor
#define Base__Base_ Base_ctor
#define Base_Base Base_ctor
#define Base::Base Base_ctor
#define Base____Base Base_dtor
#define Base____Base_ Base_dtor
#define Base____Base__ Base_dtor
#define Base_Base_ Base_dtor
#define Base::~Base Base_dtor

#define Derived__virtual_func Derived_virtual_func
#define Derived__virtual_func_ Derived_virtual_func
#define Derived__virtual_func__ Derived_virtual_func
#define Derived_virtual_func Derived_virtual_func
#define Derived::virtual_func Derived_virtual_func
#define Derived__getName Derived_getName
#define Derived__getName_ Derived_getName
#define Derived__getName__ Derived_getName
#define Derived_getName Derived_getName
#define Derived::getName Derived_getName
#define Derived__Derived Derived_ctor
#define Derived__Derived_ Derived_ctor
#define Derived_Derived Derived_ctor
#define Derived::Derived Derived_ctor
#define Derived____Derived Derived_dtor
#define Derived____Derived_ Derived_dtor
#define Derived____Derived__ Derived_dtor
#define Derived_Derived_ Derived_dtor
#define Derived::~Derived Derived_dtor

#define RTTIDerivedA__getType RTTIDerivedA_getType
#define RTTIDerivedA__getType_ RTTIDerivedA_getType
#define RTTIDerivedA__getType__ RTTIDerivedA_getType
#define RTTIDerivedA_getType RTTIDerivedA_getType
#define RTTIDerivedA::getType RTTIDerivedA_getType
#define RTTIDerivedA__RTTIDerivedA RTTIDerivedA_ctor
#define RTTIDerivedA__RTTIDerivedA_ RTTIDerivedA_ctor
#define RTTIDerivedA_RTTIDerivedA RTTIDerivedA_ctor
#define RTTIDerivedA::RTTIDerivedA RTTIDerivedA_ctor
#define RTTIDerivedA____RTTIDerivedA RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA_ RTTIDerivedA_dtor
#define RTTIDerivedA____RTTIDerivedA__ RTTIDerivedA_dtor
#define RTTIDerivedA_RTTIDerivedA_ RTTIDerivedA_dtor
#define RTTIDerivedA::~RTTIDerivedA RTTIDerivedA_dtor

#define RTTIDerivedB__getType RTTIDerivedB_getType
#define RTTIDerivedB__getType_ RTTIDerivedB_getType
#define RTTIDerivedB__getType__ RTTIDerivedB_getType
#define RTTIDerivedB_getType RTTIDerivedB_getType
#define RTTIDerivedB::getType RTTIDerivedB_getType
#define RTTIDerivedB__RTTIDerivedB RTTIDerivedB_ctor
#define RTTIDerivedB__RTTIDerivedB_ RTTIDerivedB_ctor
#define RTTIDerivedB_RTTIDerivedB RTTIDerivedB_ctor
#define RTTIDerivedB::RTTIDerivedB RTTIDerivedB_ctor
#define RTTIDerivedB____RTTIDerivedB RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB_ RTTIDerivedB_dtor
#define RTTIDerivedB____RTTIDerivedB__ RTTIDerivedB_dtor
#define RTTIDerivedB_RTTIDerivedB_ RTTIDerivedB_dtor
#define RTTIDerivedB::~RTTIDerivedB RTTIDerivedB_dtor

/* Replace std::unique_ptr destructors */
#define std__unique_ptr_int_std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr_ std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr__ std_unique_ptr_int_dtor
#define std__unique_ptr_int__std__default_delete_int____unique_ptr___ std_unique_ptr_int_dtor
#define std__unique_ptr_int_std__default_delete_int_____unique_ptr std_unique_ptr_int_array_dtor
#define std__unique_ptr_int__std__default_delete_int_____unique_ptr_ std_unique_ptr_int_array_dtor
#define std__unique_ptr_int__std__default_delete_int_____unique_ptr__ std_unique_ptr_int_array_dtor
#define std__unique_ptr_int__std__default_delete_int_____unique_ptr___ std_unique_ptr_int_array_dtor
#define std__unique_ptr_int_std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std__unique_ptr_int_std__default_delete_int_____unique_ptr std_unique_ptr_int_array_dtor
#define std::unique_ptr_int_std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std::unique_ptr_int_std__default_delete_int_____unique_ptr std_unique_ptr_int_array_dtor
#define std__unique_ptr_int_std__default_delete_int____unique_ptr std_unique_ptr_int_dtor
#define std__unique_ptr_int_std__default_delete_int_____unique_ptr std_unique_ptr_int_array_dtor

/* Note: C++ scope resolution operator (::) macros removed - handled by other macros */
#define Container<double>::Container Container_double_Container
#define Container<double>::push Container_double_push
#define Container<double>::get Container_double_get
#define Container<double>::getSize Container_double_getSize
#define std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr std_unique_ptr_int_dtor
#define std::unique_ptr<int_,_std::default_delete<int_[]>_>::~unique_ptr std_unique_ptr_int_array_dtor
#define LifecycleClass__instance_count LifecycleClass_instance_count
#define Container_int_Container Container_int_Container
#define Container_int_push Container_int_push
#define Container_int_get Container_int_get
#define Container_int_getSize Container_int_getSize
#define Container_double_Container Container_double_Container
#define Container_double_push Container_double_push
#define Container_double_get Container_double_get
#define Container_double_getSize Container_double_getSize
#define DiamondDerived_func DiamondDerived_func
#define DiamondDerived__func DiamondDerived_func
#define DiamondDerived_DiamondDerived DiamondDerived_DiamondDerived
#define DiamondDerived__DiamondDerived DiamondDerived_DiamondDerived
#define DiamondDerived__destroy__ DiamondDerived__destroy__
#define MiddleA_func MiddleA_func
#define MiddleA__func MiddleA_func
#define MiddleA_MiddleA MiddleA_MiddleA
#define MiddleA__MiddleA MiddleA__MiddleA
#define MiddleA___MiddleA MiddleA___MiddleA
#define MiddleA_destroy MiddleA_destroy
#define MiddleB_func MiddleB_func
#define MiddleB__func MiddleB__func
#define MiddleB_MiddleB MiddleB_MiddleB
#define MiddleB__MiddleB MiddleB__MiddleB
#define MiddleB___MiddleB MiddleB___MiddleB
#define MiddleB_destroy MiddleB_destroy
#define VirtualBase_func VirtualBase_func
#define VirtualBase__func VirtualBase_func
#define VirtualBase_VirtualBase VirtualBase_VirtualBase
#define VirtualBase__VirtualBase VirtualBase__VirtualBase
#define VirtualBase_destroy VirtualBase_destroy
#define MultiDerived_funcA MultiDerived_funcA
#define MultiDerived__funcA MultiDerived_funcA
#define MultiDerived_funcB MultiDerived_funcB
#define MultiDerived__funcB MultiDerived_funcB
#define MultiDerived_MultiDerived MultiDerived_MultiDerived
#define MultiDerived__MultiDerived MultiDerived__MultiDerived
#define MultiDerived_destroy MultiDerived_destroy
#define Base_virtual_func Base_virtual_func
#define Base__virtual_func Base_virtual_func
#define Base_getName Base_getName
#define Base__getName Base_getName
#define Base_Base Base_Base
#define Base__Base Base__Base
#define Base_destroy Base_destroy
#define Derived_virtual_func Derived_virtual_func
#define Derived__virtual_func Derived_virtual_func
#define Derived_getName Derived_getName
#define Derived__getName Derived_getName
#define Derived_Derived Derived_Derived
#define Derived__Derived Derived__Derived
#define Derived_destroy Derived_destroy
#define RTTIDerivedA_getType RTTIDerivedA_getType
#define RTTIDerivedA__getType RTTIDerivedA_getType
#define RTTIDerivedA_RTTIDerivedA RTTIDerivedA_RTTIDerivedA
#define RTTIDerivedA__RTTIDerivedA RTTIDerivedA__RTTIDerivedA
#define RTTIDerivedA_destroy RTTIDerivedA_destroy
#define RTTIDerivedB_getType RTTIDerivedB_getType
#define RTTIDerivedB__getType RTTIDerivedB_getType
#define RTTIDerivedB_RTTIDerivedB RTTIDerivedB_RTTIDerivedB
#define RTTIDerivedB__RTTIDerivedB RTTIDerivedB__RTTIDerivedB
#define RTTIDerivedB_destroy RTTIDerivedB_destroy
#define std__ios_base_Init_Init std__ios_base_Init_Init
#define std__ios_base_Init__destroy std__ios_base_Init__destroy
#define std_unique_ptr_int___destroy std_unique_ptr_int___destroy
#define std_unique_ptr_int_array___destroy std_unique_ptr_int_array___destroy
#define template_max template_max
#define template_swap template_swap

/* Additional type definitions for compatibility */
typedef unsigned long ulong;
typedef unsigned int uint;

/* NULL pointer constant */
#ifndef NULL
#define NULL ((void *)0)
#endif

/* Standard library function declarations */
int puts(const char *s);
int printf(const char *format, ...);
int sprintf(char *str, const char *format, ...);
int strcmp(const char *, const char *);
int strncpy(char *, const char *, size_t);
int __dynamic_cast(void *, void *, void *, void *, unsigned long);
size_t strlen(const char *);
int puts(const char *s);
int __printf_chk(int flag, const char *format, ...);
int snprintf(char *str, size_t size, const char *format, ...);
int printf(const char *format, ...);

/* RTTI support functions */
void *__dynamic_cast(const void *, const void *, const void *, long);

/* CRT cleanup function */
void deregister_tm_clones(void);

/* Missing class declarations */
typedef struct _LifecycleClass {
    int instance_count;
} LifecycleClass;

/* LifecycleClass instance counter - needs to be accessible as LifecycleClass::instance_count */
extern int LifecycleClass_instance_count;

/* Forward declaration for call_virtual_func */
int call_virtual_func(Base *obj, int x);

/* Class forward declarations and definitions */
typedef int (*_func_int_varargs)(void *, int, ...);

typedef struct _SimpleClass {
    char name[32];
} SimpleClass;

typedef struct _Base {
    _func_int_varargs **_vptr_Base;
} Base;

typedef struct _Derived {
    Base super_Base;
    int multiplier;
} Derived;

typedef struct _MiddleA {
    _func_int_varargs **_vptr_MiddleA;
    int dataA;
    void *field_0x10;
} MiddleA;

typedef struct _MiddleB {
    _func_int_varargs **_vptr_MiddleB;
    int dataB;
    void *field_0x10;
} MiddleB;

typedef struct _DiamondDerived {
    MiddleA super_MiddleA;
    MiddleB super_MiddleB;
    int field_0x20;
    int _40_4_;
} DiamondDerived;

/*
 * Decompiled by Ghidra 12.0
 * Binary: build/arm64/5-1/5-1_gcc_Os_g
 * Processor: AARCH64
 * Compiler Spec: default
 */


/* CRT stub function _init removed by preprocessor */




/* Function: FUN_00101650 @ 00101650 */

void FUN_00101650(void)

{
 (*(code *)(undefined *)0x0)();
 return;
}



/* Function: test_cpp_exception @ 00101800 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_exception(void)

{
 undefined4 *puVar1;
 
 /* Unresolved local var: int result@[???] */
 puVar1 = (undefined4 *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 /* WARNING: Subroutine does not return */
 /* try { // try from 0010182c to 0010182f has its CatchHandler @ 00101830 */
 __cxa_throw(puVar1,&RTTIBase_typeinfo_instance,0);
}



/* Function: main @ 001018d0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int main(void)

{
 test_cpp_oo_features();
 return 0;
}



/* Function: _GLOBAL__sub_I__Z20test_cpp_member_funcv @ 001018e8 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _GLOBAL__sub_I__Z20test_cpp_member_funcv(void)

{
 std_ios_base_Init_Init(&__ioinit);
 __cxa_atexit(std_ios_base_Init_Dtor,&__ioinit,&__dso_handle);
 return;
}




/* CRT stub function _start removed by preprocessor */





/* CRT stub function call_weak_fn removed by preprocessor */





/* CRT stub function deregister_tm_clones removed by preprocessor */





/* CRT stub function register_tm_clones removed by preprocessor */




/* Function: FUN_001019fc @ 001019fc */

void FUN_001019fc(void)

{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* Function: test_cpp_member_func @ 00101a54 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_member_func(void)

{
 long lVar1;
 char *__s;
 size_t sVar2;
 SimpleClass obj;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = __stack_chk_guard;
 __s = strncpy(obj.name,"Test",0x1f);
 obj.name[0x1f] = '\0';
 sVar2 = strlen(__s);
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(sVar2,&__stack_chk_guard,0,lVar1 - __stack_chk_guard);
 }
 return (int)sVar2 + 0x125c;
}



/* Function: test_cpp_constructor @ 00101ac0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_constructor(void)

{
 /* Unresolved local var: int result@[???]
 Unresolved local var: LifecycleClass obj@[???] */
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}



/* Function: call_virtual_func @ 00101ad8 */

int call_virtual_func(Base *obj,int x)

{
 int iVar1;
 
 /* WARNING: Could not recover jumptable at 0x00101ae4. Too many branches */
 /* WARNING: Treating indirect jump as call */
 iVar1 = (**obj->_vptr_Base)(obj,(ulong)(uint)x);
 return iVar1;
}



/* Function: test_cpp_virtual_func @ 00101ae8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_virtual_func(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 struct _Base base_obj;
 struct _Derived derived_obj;
 
 base_obj._vptr_Base = NULL;
 derived_obj.super_Base._vptr_Base = NULL;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Base * pb@[???]
 Unresolved local var: Base * pd@[???]
 Unresolved local var: int r3@[???]
 Unresolved local var: int r4@[???] */
 lVar1 = __stack_chk_guard;
 base_obj._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113868;
 derived_obj.super_Base._vptr_Base = (_func_int_varargs **)&PTR_virtual_func_00113898;
 derived_obj.multiplier = 3;
 iVar2 = call_virtual_func(&base_obj,5);
 iVar3 = call_virtual_func(&derived_obj.super_Base,5);
 iVar3 = iVar2 + 0x15 + iVar3;
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar3,&__stack_chk_guard,0,lVar1 - __stack_chk_guard);
 }
 return iVar3;
}



/* Function: test_cpp_multiple_inheritance @ 00101b78 */

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



/* Function: test_cpp_operator_overload @ 00101b80 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_operator_overload(void)

{
 /* Unresolved local var: Point p1@[???]
 Unresolved local var: Point p2@[???]
 Unresolved local var: Point p3@[???]
 Unresolved local var: bool eq@[???] */
 return 0x16;
}



/* Function: test_cpp_template_func @ 00101b88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_func(void)

{
 int iVar1;
 double dVar2;
 int a;
 int b;
 long local_8;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: double r2@[???] */
 local_8 = __stack_chk_guard;
 iVar1 = template_max_int(3,7);
 dVar2 = template_max_double(2.5,1.5);
 a = 10;
 b = 0x14;
 template_swap_int(&a,&b);
 iVar1 = (int)dVar2 + iVar1 + a + b;
 if (local_8 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(iVar1,&__stack_chk_guard,0,local_8 - __stack_chk_guard);
 }
 return iVar1;
}



/* Function: test_cpp_template_class @ 00101c30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_template_class(void)

{
 int iVar1;
 long lVar2;
 struct _Container_int int_container;
 struct _Container_double double_container;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: Container<double> double_container@[???]
 Unresolved local var: double r3@[???] */
 lVar2 = __stack_chk_guard;
 Container_int_Container(&int_container);
 Container_int_push(&int_container,0x14);
 Container_int_push(&int_container,0x1e);
 iVar1 = Container_int_get(&int_container,0);
 if (Container_int_getSize(&int_container) < 1) {
 iVar1 = 0;
 }
 if (lVar2 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(Container_int_getSize(&int_container) + iVar1,&__stack_chk_guard,0,lVar2 - __stack_chk_guard);
 }
 return Container_int_getSize(&int_container) + iVar1 + 3;
}



/* Function: test_cpp_lambda @ 00101cc0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_lambda(void)

{
 /* Unresolved local var: int capture_by_value@[???]
 Unresolved local var: int capture_by_ref@[???]
 Unresolved local var: anon_struct_16_2_484633fb lambda1@[???]
 Unresolved local var: anon_struct_1_0_00000001 lambda2@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 return 0x55;
}



/* Function: test_cpp_rtti @ 00101cc8 */

/* WARNING: Removing unreachable block (ram,0x00101d68) */
/* WARNING: Removing unreachable block (ram,0x00101d74) */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_rtti(void)

{
 char cVar1;
 int iVar2;
 long *plVar3;
 long *plVar4;
 long lVar5;
 size_t sVar6;
 int iVar7;
 char *__s1;
 long lVar8;
 
 /* RTTIBase pointers */
 RTTIBase *obj1;
 RTTIBase *obj2;
 int result;
 plVar3 = operator_new(8);
 *plVar3 = (long)&PTR__RTTIDerivedA_00113b58;
 plVar4 = operator_new(8);
 lVar8 = *plVar3;
 *plVar4 = (long)&PTR__RTTIDerivedB_00113b80;
 __s1 = *(char **)(*(long *)(lVar8 + -8) + 8);
 cVar1 = *__s1;
 if (__s1 == "12RTTIDerivedA") {
 iVar7 = 10;
 }
 else if (cVar1 == '*') {
 iVar7 = 0;
 }
 else {
 iVar2 = strcmp(__s1,"12RTTIDerivedA");
 iVar7 = 0;
 if (iVar2 == 0) {
 iVar7 = 10;
 }
 }
 iVar2 = iVar7 + 0x14;
 /* Unresolved local var: RTTIDerivedA * derivedA@[???] */
 lVar5 = __dynamic_cast(plVar3,&RTTIBase_typeinfo_instance,&RTTIDerivedA_typeinfo_instance,0);
 if (lVar5 != 0) {
 iVar2 = iVar7 + 0x78;
 }
 /* Unresolved local var: RTTIDerivedB * derivedB@[???] */
 lVar5 = __dynamic_cast(plVar4,&RTTIBase_typeinfo_instance,&RTTIDerivedB_typeinfo_instance,0);
 if (lVar5 != 0) {
 iVar2 = iVar2 + 200;
 }
 if (cVar1 == '*') {
 __s1 = __s1 + 1;
 }
 sVar6 = strlen(__s1);
 (**(code **)(lVar8 + 8))(plVar3);
 (**(code **)(*plVar4 + 8))(plVar4);
 return iVar2 + (int)sVar6;
}



/* Function: test_cpp_smart_ptr @ 00101e24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int test_cpp_smart_ptr(void)

{
 long lVar1;
 int __in_chrg;
 int __in_chrg_00;
 unique_ptr_int ptr1;
 unique_ptr_int ptr2;
 unique_ptr_int_array arr;
 
 /* Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???]
 Unresolved local var: anon_struct_1_0_00000001_for__M_head_impl deleter@[???]
 Unresolved local var: unique_ptr<int,_test_cpp_smart_ptr()::<lambda(int*)>_>
 ptr3@[???]
 Unresolved local var: int r3@[???] */
 lVar1 = __stack_chk_guard;
 ptr2._M_t.super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int>_> =
 (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>)operator_new(4);
 ptr1._M_t.super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int>_> =
 (__uniq_ptr_data<int,_std::default_delete<int>,_true,_true>)
 (__uniq_ptr_impl<int,_std::default_delete<int>_>)0x0;
 *(undefined4 *)
 ptr2._M_t.super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int>_> = 200;
 /* try { // try from 00101e68 to 00101e6b has its CatchHandler @ 00101ec8 */
 arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> =
 (__uniq_ptr_data<int,_std::default_delete<int_[]>,_true,_true>)operator_new__(0x14);
 *(undefined8 *)
 arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> = 0x200000001;
 *(undefined8 *)
 ((long)arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> + 8) = 0x400000003;
 *(undefined4 *)
 ((long)arr._M_t.super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_> + 0x10) = 5;
 std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr(&arr,5);
 std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr2,__in_chrg);
 std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr(&ptr1,__in_chrg_00);
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - __stack_chk_guard);
 }
 return 0x2bf;
}



/* Function: test_cpp_diamond_inheritance @ 00101ef8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

int test_cpp_diamond_inheritance(void)

{
 long lVar1;
 int iVar2;
 int iVar3;
 DiamondDerived obj;
 void *pb;
 
 /* Unresolved local var: VirtualBase * pb@[???]
 Unresolved local var: int r1@[???]
 Unresolved local var: int r2@[???] */
 lVar1 = __stack_chk_guard;
 obj.super_MiddleA._vptr_MiddleA = (_func_int_varargs **)&PTR_func_00113ac8;
 obj._32_8_ = &PTR_func_00113b30;
 obj.super_MiddleA._16_8_ = &PTR_func_00113af8;
 obj._40_4_ = 0x32;
 pb = &obj.field_0x20;
 iVar2 = DiamondDerived_func((DiamondDerived *)pb);
 obj._40_4_ = 100;
 iVar3 = DiamondDerived_func((DiamondDerived *)pb);
 DiamondDerived_dtor(&obj);
 if (lVar1 - __stack_chk_guard != 0) {
 /* WARNING: Subroutine does not return */
 __stack_chk_fail(&__stack_chk_guard,0,lVar1 - __stack_chk_guard);
 }
 return iVar2 + iVar3;
}



/* Function: test_cpp_oo_features @ 00101fa0 */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */

void test_cpp_oo_features(void)

{
 int iVar1;
 
 puts(&DAT_001025b2);
 iVar1 = test_cpp_member_func();
 __printf_chk(1,&DAT_001025d6,iVar1);
 iVar1 = test_cpp_constructor();
 __printf_chk(1,&DAT_001025f4,iVar1);
 iVar1 = test_cpp_virtual_func();
 __printf_chk(1,&DAT_00102610,iVar1);
 iVar1 = test_cpp_multiple_inheritance();
 __printf_chk(1,&DAT_0010262c,iVar1);
 iVar1 = test_cpp_diamond_inheritance();
 __printf_chk(1,&DAT_00102648,iVar1);
 iVar1 = test_cpp_operator_overload();
 __printf_chk(1,&DAT_00102665,iVar1);
 iVar1 = test_cpp_template_func();
 __printf_chk(1,&DAT_00102681,iVar1);
 iVar1 = test_cpp_template_class();
 __printf_chk(1,&DAT_0010269d,iVar1);
 iVar1 = test_cpp_lambda();
 __printf_chk(1,&DAT_001026b9,iVar1);
 iVar1 = test_cpp_exception();
 __printf_chk(1,&DAT_001026d5,iVar1);
 iVar1 = test_cpp_smart_ptr();
 __printf_chk(1,&DAT_001026f2,iVar1);
 iVar1 = test_cpp_rtti();
 __printf_chk(1,&DAT_0010270f,iVar1);
 return;
}



/* Function: Base_virtual_func @ 001020d8 */

/* DWARF original prototype: int virtual_func(Base * this, int x) */

int Base_virtual_func(Base *this,int x)

{
 return x + 1;
}



/* Function: getName @ 001020e0 */

/* DWARF original prototype: char * getName(Base * this) */

char * Base_getName(Base *this)

{
 return "Base";
}



/* Function: ~Base @ 001020ec */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 return;
}



/* Function: virtual_func @ 001020f0 */

/* DWARF original prototype: int virtual_func(Derived * this, int x) */

int Derived_virtual_func(Derived *this,int x)

{
 return x * this->multiplier;
}



/* Function: getName @ 001020fc */

/* DWARF original prototype: char * getName(Derived * this) */

char * __thiscall Derived::getName(Derived *this)

{
 return "Derived";
}



/* Function: funcA @ 00102108 */

/* DWARF original prototype: int funcA(MultiDerived * this) */

int __thiscall MultiDerived::funcA(MultiDerived *this)

{
 return 0x1e;
}



/* Function: funcB @ 00102110 */

/* DWARF original prototype: int funcB(MultiDerived * this) */

int __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: funcB @ 00102118 */

/* non-virtual thunk to MultiDerived::funcB() */

undefined8 __thiscall MultiDerived::funcB(MultiDerived *this)

{
 return 0x28;
}



/* Function: func @ 00102120 */

/* DWARF original prototype: int func(VirtualBase * this) */

int __thiscall VirtualBase::func(VirtualBase *this)

{
 return 100;
}



/* Function: ~VirtualBase @ 00102128 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 return;
}



/* Function: func @ 0010212c */

/* DWARF original prototype: int func(MiddleA * this) */

int __thiscall MiddleA::func(MiddleA *this)

{
 return *(int *)((long)&this->dataA + (long)this->_vptr_MiddleA[-3]) + 0x96;
}



/* Function: func @ 00102144 */

/* virtual thunk to MiddleA::func() */

int __thiscall MiddleA::func(MiddleA *this)

{
 int iVar1;
 
 iVar1 = func((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 00102154 */

/* DWARF original prototype: int func(MiddleB * this) */

int __thiscall MiddleB::func(MiddleB *this)

{
 return *(int *)((long)&this->dataB + (long)this->_vptr_MiddleB[-3]) + 200;
}



/* Function: func @ 0010216c */

/* virtual thunk to MiddleB::func() */

int __thiscall MiddleB::func(MiddleB *this)

{
 int iVar1;
 
 iVar1 = func((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-3]));
 return iVar1;
}



/* Function: func @ 0010217c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: int func(DiamondDerived * this) */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 return *(int *)((long)&(this->super_MiddleA).dataA + (long)(this->super_MiddleA)._vptr_MiddleA[-3]
 ) + 0xfa;
}



/* Function: func @ 00102194 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = func((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-3]));
 return iVar1;
}



/* Function: func @ 001021a4 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::func() */

int __thiscall DiamondDerived::func(DiamondDerived *this)

{
 int iVar1;
 
 iVar1 = func((DiamondDerived *)&this[-1].field_0x20);
 return iVar1;
}



/* Function: ~MiddleA @ 001021ac */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_001138e0;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleA @ 001021c8 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this->_vptr_MiddleA[-4];
 *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var1) = &PTR_func_001138e0;
 *(undefined ***)(&this->field_0x10 + (long)p_Var1) = &PTR_func_00113918;
 return;
}



/* Function: ~MiddleB @ 001021f0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00113958;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113990;
 return;
}



/* Function: ~MiddleB @ 0010220c */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 _func_int_varargs *p_Var1;
 
 p_Var1 = this->_vptr_MiddleB[-4];
 *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var1) = &PTR_func_00113958;
 *(undefined ***)(&this->field_0x10 + (long)p_Var1) = &PTR_func_00113990;
 return;
}



/* Function: getType @ 00102234 */

/* DWARF original prototype: int getType(RTTIDerivedA * this) */

int __thiscall RTTIDerivedA::getType(RTTIDerivedA *this)

{
 return 1;
}



/* Function: getType @ 0010223c */

/* DWARF original prototype: int getType(RTTIDerivedB * this) */

int __thiscall RTTIDerivedB::getType(RTTIDerivedB *this)

{
 return 2;
}



/* Function: ~RTTIDerivedB @ 00102244 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 return;
}



/* Function: ~RTTIDerivedA @ 00102248 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 0010224c */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 return;
}



/* Function: ~MultiDerived @ 00102250 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 return;
}



/* Function: ~Derived @ 00102254 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 return;
}



/* Function: ~Base @ 00102258 */

/* DWARF original prototype: void ~Base(Base * this, int __in_chrg) */

void __thiscall Base::~Base(Base *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~Derived @ 00102260 */

/* DWARF original prototype: void ~Derived(Derived * this, int __in_chrg) */

void __thiscall Derived::~Derived(Derived *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~MultiDerived @ 00102268 */

/* DWARF original prototype: void ~MultiDerived(MultiDerived * this, int __in_chrg) */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this,int __in_chrg)

{
 operator_delete(this,0x20);
 return;
}



/* Function: ~MultiDerived @ 00102270 */

/* non-virtual thunk to MultiDerived::~MultiDerived() */

void __thiscall MultiDerived::~MultiDerived(MultiDerived *this)

{
 int in_w1;
 
 ~MultiDerived((MultiDerived *)&this[-1].super_BaseB,in_w1);
 return;
}



/* Function: ~VirtualBase @ 00102278 */

/* DWARF original prototype: void ~VirtualBase(VirtualBase * this, int __in_chrg) */

void __thiscall VirtualBase::~VirtualBase(VirtualBase *this,int __in_chrg)

{
 operator_delete(this,0x10);
 return;
}



/* Function: ~RTTIDerivedB @ 00102280 */

/* DWARF original prototype: void ~RTTIDerivedB(RTTIDerivedB * this, int __in_chrg) */

void __thiscall RTTIDerivedB::~RTTIDerivedB(RTTIDerivedB *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~RTTIDerivedA @ 00102288 */

/* DWARF original prototype: void ~RTTIDerivedA(RTTIDerivedA * this, int __in_chrg) */

void __thiscall RTTIDerivedA::~RTTIDerivedA(RTTIDerivedA *this,int __in_chrg)

{
 operator_delete(this,8);
 return;
}



/* Function: ~MiddleA @ 00102290 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this) */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 this->_vptr_MiddleA = (_func_int_varargs **)&PTR_func_001138e0;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113918;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleA @ 001022b0 */

/* virtual thunk to MiddleA::~MiddleA() */

void __thiscall MiddleA::~MiddleA(MiddleA *this)

{
 ~MiddleA((MiddleA *)((long)&this->_vptr_MiddleA + (long)this->_vptr_MiddleA[-4]));
 return;
}



/* Function: ~MiddleB @ 001022c0 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this) */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 this->_vptr_MiddleB = (_func_int_varargs **)&PTR_func_00113958;
 *(undefined ***)&this->field_0x10 = &PTR_func_00113990;
 operator_delete(this,0x20);
 return;
}



/* Function: ~MiddleB @ 001022e0 */

/* virtual thunk to MiddleB::~MiddleB() */

void __thiscall MiddleB::~MiddleB(MiddleB *this)

{
 ~MiddleB((MiddleB *)((long)&this->_vptr_MiddleB + (long)this->_vptr_MiddleB[-4]));
 return;
}



/* Function: ~MiddleA @ 001022f0 */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 if (__in_chrg == 0) {
 ppuVar3 = *__vtt_parm;
 }
 else {
 ppuVar3 = &PTR_func_001138e0;
 }
 this->_vptr_MiddleA = (_func_int_varargs **)ppuVar3;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar3)[-3];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x10;
 ppuVar1 = &PTR_func_00113918;
 }
 *(undefined ***)((long)&this->_vptr_MiddleA + (long)p_Var2) = ppuVar1;
 return;
}



/* Function: ~MiddleA @ 0010232c */

/* DWARF original prototype: void ~MiddleA(MiddleA * this, void * * __vtt_parm) */

void __thiscall MiddleA::~MiddleA(MiddleA *this,void **__vtt_parm)

{
 ~MiddleA(this,0,__vtt_parm);
 return;
}



/* Function: ~MiddleB @ 00102338 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, int __in_chrg, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined **ppuVar3;
 
 if (__in_chrg == 0) {
 ppuVar3 = *__vtt_parm;
 }
 else {
 ppuVar3 = &PTR_func_00113958;
 }
 this->_vptr_MiddleB = (_func_int_varargs **)ppuVar3;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[1];
 p_Var2 = ((_func_int_varargs **)ppuVar3)[-3];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x10;
 ppuVar1 = &PTR_func_00113990;
 }
 *(undefined ***)((long)&this->_vptr_MiddleB + (long)p_Var2) = ppuVar1;
 return;
}



/* Function: ~MiddleB @ 00102374 */

/* DWARF original prototype: void ~MiddleB(MiddleB * this, void * * __vtt_parm) */

void __thiscall MiddleB::~MiddleB(MiddleB *this,void **__vtt_parm)

{
 ~MiddleB(this,0,__vtt_parm);
 return;
}



/* Function: template_max_int @ 00102380 */

int template_max_int(int a,int b)

{
 if (a < b) {
 a = b;
 }
 return a;
}



/* Function: template_max<double> @ 0010238c */

double template_max<double>(double a,double b)

{
 if (a <= b) {
 a = b;
 }
 return a;
}



/* Function: template_swap<int> @ 00102398 */

void template_swap<int>(int *a,int *b)

{
 int iVar1;
 
 /* Unresolved local var: int temp@[???] */
 iVar1 = *a;
 *a = *b;
 *b = iVar1;
 return;
}



/* Function: Container_int_Container */
void Container_int_Container(Container_int *this)

{
 this->size = 0;
 return;
}



/* Function: Container_int_push */
void Container_int_push(Container_int *this, int value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: Container_int_get */
int Container_int_get(Container_int *this, int idx)

{
 int iVar1;
 
 if ((idx < 0) || (this->size <= idx)) {
 iVar1 = 0;
 }
 else {
 iVar1 = this->data[idx];
 }
 return iVar1;
}



/* Function: Container_int_getSize */
int Container_int_getSize(Container_int *this)

{
 return this->size;
}



/* Function: Container @ 001023f8 */

/* DWARF original prototype: void Container(Container<double> * this) */

void __thiscall Container<double>::Container(Container<double> *this)

{
 this->size = 0;
 return;
}



/* Function: push @ 00102400 */

/* DWARF original prototype: void push(Container<double> * this, double value) */

void __thiscall Container<double>::push(Container<double> *this,double value)

{
 int iVar1;
 
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = value;
 }
 return;
}



/* Function: get @ 0010241c */

/* DWARF original prototype: double get(Container<double> * this, int idx) */

double __thiscall Container<double>::get(Container<double> *this,int idx)

{
 double dVar1;
 
 if ((idx < 0) || (this->size <= idx)) {
 dVar1 = 0.0;
 }
 else {
 dVar1 = this->data[idx];
 }
 return dVar1;
}



/* Function: getSize @ 0010243c */

/* DWARF original prototype: int getSize(Container<double> * this) */

int __thiscall Container<double>::getSize(Container<double> *this)

{
 return this->size;
}



/* Function: ~unique_ptr @ 00102444 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int,_std::default_delete<int>_> * this, int
 __in_chrg) */

void __thiscall
std::unique_ptr<int,_std::default_delete<int>_>::~unique_ptr
 (unique_ptr<int,_std::default_delete<int>_> *this,int __in_chrg)

{
 _Tuple_impl<0,_int*,_std::default_delete<int>_> _Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
 _Var1 = (this->_M_t).super___uniq_ptr_impl<int,_std::default_delete<int>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int>_>;
 if (_Var1 != (_Tuple_impl<0,_int*,_std::default_delete<int>_>)0x0) {
 operator_delete((void *)_Var1,4);
 return;
 }
 return;
}



/* Function: ~unique_ptr @ 00102458 */

/* DWARF original prototype: void ~unique_ptr(unique_ptr<int_[],_std::default_delete<int_[]>_> *
 this, int __in_chrg) */

void __thiscall
std::unique_ptr<int_[],_std::default_delete<int_[]>_>::~unique_ptr
 (unique_ptr<int_[],_std::default_delete<int_[]>_> *this,int __in_chrg)

{
 _Tuple_impl<0,_int*,_std::default_delete<int_[]>_> _Var1;
 
 /* Unresolved local var: int * * __ptr@[DW_OP_reg0(x0)] */
 _Var1 = (this->_M_t).super___uniq_ptr_impl<int,_std::default_delete<int_[]>_>._M_t.
 super__Tuple_impl<0,_int*,_std::default_delete<int_[]>_>;
 if (_Var1 != (_Tuple_impl<0,_int*,_std::default_delete<int_[]>_>)0x0) {
 operator_delete__((void *)_Var1);
 return;
 }
 return;
}



/* Function: ~DiamondDerived @ 00102468 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, int __in_chrg, void * *
 __vtt_parm) */

void __thiscall
DiamondDerived::~DiamondDerived(DiamondDerived *this,int __in_chrg,void **__vtt_parm)

{
 undefined **ppuVar1;
 _func_int_varargs *p_Var2;
 undefined1 *this_00;
 
 if (__in_chrg == 0) {
 ppuVar1 = *__vtt_parm;
 }
 else {
 ppuVar1 = &PTR_func_00113ac8;
 }
 (this->super_MiddleA)._vptr_MiddleA = (_func_int_varargs **)ppuVar1;
 if (__in_chrg == 0) {
 p_Var2 = ((_func_int_varargs **)ppuVar1)[-3];
 ppuVar1 = __vtt_parm[5];
 }
 else {
 p_Var2 = (_func_int_varargs *)0x20;
 ppuVar1 = &PTR_func_00113b30;
 }
 *(undefined ***)(p_Var2 + (long)&(this->super_MiddleA)._vptr_MiddleA) = ppuVar1;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm[6];
 }
 else {
 ppuVar1 = &PTR_func_00113af8;
 }
 this_00 = &(this->super_MiddleA).field_0x10;
 *(undefined ***)this_00 = ppuVar1;
 ppuVar1 = &PTR_PTR_00113a90;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 3;
 }
 MiddleB::~MiddleB((MiddleB *)this_00,ppuVar1);
 ppuVar1 = &PTR_PTR_00113a80;
 if (__in_chrg == 0) {
 ppuVar1 = __vtt_parm + 1;
 }
 MiddleA::~MiddleA(&this->super_MiddleA,ppuVar1);
 return;
}



/* Function: ~DiamondDerived @ 00102518 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this,2,(void **)0x0);
 return;
}



/* Function: ~DiamondDerived @ 00102524 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 0010252c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0010253c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived(this);
 operator_delete(this,0x30);
 return;
}



/* Function: ~DiamondDerived @ 00102564 */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* non-virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)&this[-1].field_0x20);
 return;
}



/* Function: ~DiamondDerived @ 0010256c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* virtual thunk to DiamondDerived::~DiamondDerived() */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this)

{
 ~DiamondDerived((DiamondDerived *)
 ((long)&(this->super_MiddleA)._vptr_MiddleA +
 (long)(this->super_MiddleA)._vptr_MiddleA[-4]));
 return;
}



/* Function: ~DiamondDerived @ 0010257c */

/* WARNING: Struct "DiamondDerived": ignoring overlapping field "super_MiddleB" */
/* DWARF original prototype: void ~DiamondDerived(DiamondDerived * this, void * * __vtt_parm) */

void __thiscall DiamondDerived::~DiamondDerived(DiamondDerived *this,void **__vtt_parm)

{
 ~DiamondDerived(this,0,__vtt_parm);
 return;
}




/* CRT stub function _fini removed by preprocessor */




/* Total functions decompiled: 89 */
