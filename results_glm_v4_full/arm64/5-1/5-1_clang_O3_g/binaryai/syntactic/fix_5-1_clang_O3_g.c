/* Auto-injected type definitions by preprocessor */

/* Standard library headers for type definitions and function declarations */
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

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
typedef long ptrdiff_t;
typedef long long intmax_t;
typedef unsigned long long uintmax_t;

/* Additional type definitions */
typedef struct { unsigned char data[7]; } undefined7;

/* Proper type_info structure - simplified for decompiled code compatibility */
typedef struct __type_info_real {
    const void **vtable;   // vtable pointer (offset 0)
    const char *name;      // type name (offset 8 on 64-bit)
} __type_info_real;

#ifndef NULL
#define NULL ((void *)0)
#endif

/* Dummy vtable for typeinfo objects */
const void *dummy_vtable_for_typeinfo = NULL;

struct __type_info_real RTTIBase_typeinfo = { (void *)&dummy_vtable_for_typeinfo, "RTTIBase" };
struct __type_info_real RTTIDerivedA_typeinfo = { (void *)&dummy_vtable_for_typeinfo, "RTTIDerivedA" };
struct __type_info_real RTTIDerivedB_typeinfo = { (void *)&dummy_vtable_for_typeinfo, "RTTIDerivedB" };
struct __type_info_real int_typeinfo = { (void *)&dummy_vtable_for_typeinfo, "int" };



/* Vtable structures for RTTI classes */
typedef void (*destructor_func)(void *);
typedef unsigned long long (*type_func)(void);

typedef struct RTTIBase_vtable {
    const struct __type_info_real *typeinfo;
    destructor_func destructor;
} RTTIBase_vtable;

typedef struct RTTIDerivedA_vtable {
    const struct __type_info_real *typeinfo;
    destructor_func destructor;
    type_func getType;
} RTTIDerivedA_vtable;

typedef struct RTTIDerivedB_vtable {
    const struct __type_info_real *typeinfo;
    destructor_func destructor;
    type_func getType;
} RTTIDerivedB_vtable;

/* Forward declarations for vtable entries */
void RTTIBase__destructor_real(void *this);
void RTTIDerivedA__destructor_real(void *this);
void RTTIDerivedB__destructor_real(void *this);
unsigned long long RTTIDerivedA__getType_real(void);
unsigned long long RTTIDerivedB__getType_real(void);

/* Forward declarations for RTTI classes and their methods */
typedef struct RTTIBase RTTIBase;
typedef struct RTTIDerivedA RTTIDerivedA;
typedef struct RTTIDerivedB RTTIDerivedB;

void RTTIBase__destructor(RTTIBase *this);
void RTTIDerivedA__destructor(RTTIDerivedA *this);
void RTTIDerivedB__destructor(RTTIDerivedB *this);
unsigned long long RTTIDerivedA__getType(void);
unsigned long long RTTIDerivedB__getType(void);

/* Vtable definitions - memory layout: [typeinfo_ptr, destructor_ptr, optional_getType_ptr] */
void *vtable_RTITIDerivedA[3] = {
    (void *)&RTTIDerivedA_typeinfo,
    (void *)RTTIDerivedA__destructor_real,
    NULL
};

void *vtable_RTITIDerivedB[3] = {
    (void *)&RTTIDerivedB_typeinfo,
    (void *)RTTIDerivedB__destructor_real,
    NULL
};

void *vtable_RTITIDerivedA_full[3] = {
    (void *)&RTTIDerivedA_typeinfo,
    (void *)RTTIDerivedA__destructor_real,
    (void *)RTTIDerivedA__getType_real
};

void *vtable_RTITIDerivedB_full[3] = {
    (void *)&RTTIDerivedB_typeinfo,
    (void *)RTTIDerivedB__destructor_real,
    (void *)RTTIDerivedB__getType_real
};

/* Wrapper functions for vtable entries - implementations */
void RTTIBase__destructor_real(void *this)
{
    RTTIBase__destructor((RTTIBase *)this);
}

void RTTIDerivedA__destructor_real(void *this)
{
    RTTIDerivedA__destructor((RTTIDerivedA *)this);
}

void RTTIDerivedB__destructor_real(void *this)
{
    RTTIDerivedB__destructor((RTTIDerivedB *)this);
}

unsigned long long RTTIDerivedA__getType_real(void)
{
    return RTTIDerivedA__getType();
}

unsigned long long RTTIDerivedB__getType_real(void)
{
    return RTTIDerivedB__getType();
}

void *PTR__RTTIBase_00111d58 = (void *)vtable_RTITIDerivedA;
void *PTR__RTTIBase_00111d80 = (void *)vtable_RTITIDerivedB;

/* C++ class definitions */
typedef struct Base {
    void **vtable;
} Base;

typedef struct LifecycleClass {
    int dummy;
} LifecycleClass;

typedef struct RTTIBase {
    void **vtable;
} RTTIBase;

typedef struct RTTIDerivedA {
    void **vtable;
} RTTIDerivedA;

typedef struct RTTIDerivedB {
    void **vtable;
} RTTIDerivedB;

/* Forward declarations for Container types */
typedef struct Container_int_ Container_int_;
typedef struct Container_double_ Container_double_;

struct Container_int_ {
    int data[10];
    unsigned int size;
};

struct Container_double_ {
    double data[10];
    unsigned int size;
};

/* Static class member */
static int LifecycleClass_instance_count = 0;

/* std namespace declarations (converted to C-compatible syntax) */
struct std_ios_base_Init {
};
static struct std_ios_base_Init std___ioinit;
typedef struct std_ios_base_Init std_ios_base_Init;

/* Global variables */
void *__dso_handle = NULL;
const char *DAT_00101734 = "Testing C++ OO Features...";
const char *DAT_001015dd = "Member function result: %lu\n";
const char *DAT_001015fb = "Constructor test: %lu\n";
const char *DAT_00101617 = "Virtual function: %lu\n";
const char *DAT_00101633 = "Multiple inheritance: %lu\n";
const char *DAT_0010164f = "Diamond inheritance: %lu\n";
const char *DAT_0010166c = "Operator overload: %lu\n";
const char *DAT_00101688 = "Template function: %lu\n";
const char *DAT_001016a4 = "Template class: %lu\n";
const char *DAT_001016c0 = "Lambda: %lu\n";
const char *DAT_001016dc = "Exception: %lu\n";
const char *DAT_001016f9 = "Smart pointer: %lu\n";
const char *DAT_00101716 = "RTTI: %lu\n";
char completed_0 = 0;

// Decompiled by BinaryAI
// SHA256: f4944c588722aadfe50188896eb4628ac67467ab3c04fe1d512c182126808fd8

/* Forward declarations */
int main(int argc, char **argv, char **envp);
int call_weak_fn(int ctx);
void std_ios_base_Init_Init(struct std_ios_base_Init *this);
void std_ios_base_Init__Init(struct std_ios_base_Init *this);

/* External function declarations with proper signatures */

// Function: <EXTERNAL>::puts @ 0x100eb0
int puts(const char *s)
{
    if (!s) return -1;
    size_t len = strlen(s);
    write(1, s, len);
    write(1, "\n", 1);
    return len + 1;
}

// Function: _init @ 0x100d48
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00100d60 @ 0x100d60
void FUN_00100d60(void)
{
 typedef void (*func_ptr)(void);
 ((func_ptr)0)();
 return;
}



// Function: <EXTERNAL>::__cxa_begin_catch @ 0x100da0
void __cxa_begin_catch(void *exception_object)
{
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x100db0
void *__cxa_allocate_exception(size_t size)
{
    static unsigned char exception_buffer[64];
    return exception_buffer;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x100dc0
void __cxa_finalize(void *dso_handle)
{
}

// Function: <EXTERNAL>::__libc_start_main @ 0x100dd0
void __libc_start_main(int (*main)(int, char **, char **), int argc, char **argv, 
                       void (*init)(void), void (*fini)(void), void *rtld_fini)
{
    main(argc, argv, NULL);
}

// Function: <EXTERNAL>::operator.delete @ 0x100de0
void operator_delete(void *ptr)
{
}

// Function: <EXTERNAL>::operator.new @ 0x100df0
void *operator_new(size_t size)
{
 return NULL;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x100e00
void *__dynamic_cast(void *obj, const struct __type_info_real *src, const struct __type_info_real *dst, ptrdiff_t offset)
{
    /* Simple implementation - check if src equals dst */
    return (src == dst) ? obj : NULL;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x100e10
int __cxa_atexit(void (*func)(void *), void *arg, void *dso_handle)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x100e20
void __cxa_rethrow(void)
{
}

// Function: std::ios_base::Init::Init @ 0x100e30
void std_ios_base_Init_Init(struct std_ios_base_Init *this)
{
 return;
}

// Function: std::ios_base::Init::~Init @ 0x100e32
void std_ios_base_Init__Init(struct std_ios_base_Init *this)
{
 return;
}

// Function: <EXTERNAL>::abort @ 0x100e40
void abort(void)
{
    for (;;) {}
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x100e50
void __cxa_end_catch(void)
{
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x100e60
int __gxx_personality_v0(void)
{
 return 0;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x100e70
void __cxa_throw(void *thrown_exception, struct __type_info_real *tinfo, void (*dest)(void *))
{
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x100e80
void _Unwind_Resume(void *exception_object)
{
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x100e90
void __gmon_start__(void)
{
}

// Function: <EXTERNAL>::printf @ 0x100ea0
int printf(const char *__format, ...)
{
    va_list args;
    va_start(args, __format);
    
    const char *p = __format;
    int count = 0;
    static char numbuf[32];
    
    while (*p) {
        if (*p == '%' && *(p + 1)) {
            p++;
            switch (*p) {
                case 's': {
                    const char *s = va_arg(args, const char *);
                    if (s) {
                        const char *sp = s;
                        while (*sp) {
                            write(1, sp, 1);
                            count++;
                            sp++;
                        }
                    }
                    break;
                }
                case 'd': {
                    int i = va_arg(args, int);
                    char *np = numbuf + sizeof(numbuf) - 1;
                    *np = '\0';
                    if (i == 0) {
                        *(--np) = '0';
                    } else {
                        int sign = 0;
                        if (i < 0) {
                            sign = 1;
                            i = -i;
                        }
                        while (i > 0) {
                            *(--np) = '0' + (i % 10);
                            i /= 10;
                        }
                        if (sign) {
                            *(--np) = '-';
                        }
                    }
                    write(1, np, numbuf + sizeof(numbuf) - 1 - np);
                    count += numbuf + sizeof(numbuf) - 1 - np;
                    break;
                }
                case 'u': {
                    unsigned int u = va_arg(args, unsigned int);
                    char *np = numbuf + sizeof(numbuf) - 1;
                    *np = '\0';
                    if (u == 0) {
                        *(--np) = '0';
                    } else {
                        while (u > 0) {
                            *(--np) = '0' + (u % 10);
                            u /= 10;
                        }
                    }
                    write(1, np, numbuf + sizeof(numbuf) - 1 - np);
                    count += numbuf + sizeof(numbuf) - 1 - np;
                    break;
                }
                case 'l': {
                    if (*(p + 1) == 'u') {
                        unsigned long u = va_arg(args, unsigned long);
                        p++;
                        char *np = numbuf + sizeof(numbuf) - 1;
                        *np = '\0';
                        if (u == 0) {
                            *(--np) = '0';
                        } else {
                            while (u > 0) {
                                *(--np) = '0' + (u % 10);
                                u /= 10;
                            }
                        }
                        write(1, np, numbuf + sizeof(numbuf) - 1 - np);
                        count += numbuf + sizeof(numbuf) - 1 - np;
                    } else {
                        long l = va_arg(args, long);
                        char *np = numbuf + sizeof(numbuf) - 1;
                        *np = '\0';
                        if (l == 0) {
                            *(--np) = '0';
                        } else {
                            int sign = 0;
                            if (l < 0) {
                                sign = 1;
                                l = -l;
                            }
                            while (l > 0) {
                                *(--np) = '0' + (l % 10);
                                l /= 10;
                            }
                            if (sign) {
                                *(--np) = '-';
                            }
                        }
                        write(1, np, numbuf + sizeof(numbuf) - 1 - np);
                        count += numbuf + sizeof(numbuf) - 1 - np;
                    }
                    break;
                }
                case 'c': {
                    int c = va_arg(args, int);
                    write(1, &c, 1);
                    count++;
                    break;
                }
                default:
                    write(1, p, 1);
                    count++;
            }
            p++;
        } else {
            write(1, p, 1);
            count++;
            p++;
        }
    }
    
    va_end(args);
    return count;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x100ec0
__attribute__((constructor))
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std_ios_base_Init_Init(&std___ioinit);
 __cxa_atexit((void (*)(void *))std_ios_base_Init__Init,&std___ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x100f00
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 void *stack0x00000008;
 __libc_start_main((int (*)(int, char **, char **))main,0,(char **)&stack0x00000008,(void (*)(void))_GLOBAL__sub_I_5_1_cpp,0,(void *)param_1);
 abort();
}

// Function: call_weak_fn @ 0x100f34
int call_weak_fn(int ctx)
{
 __gmon_start__();
 return ctx;
}

// Function: deregister_tm_clones @ 0x100f50
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x100f80
void register_tm_clones(void)
{
 return;
}

// Function: FUN_00100fbc @ 0x100fbc
void FUN_00100fbc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100fc0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: test_cpp_member_func @ 0x101014
int test_cpp_member_func(void)
{
 size_t sVar1;
 unsigned int local_38;
 unsigned long long local_34;
 undefined7 uStack_2c;
 char uStack_25;
 undefined7 uStack_24;
 unsigned long long uStack_1d;
 char local_15;
 local_15 = 0;
 local_38 = 10;
 uStack_2c.data[0] = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24.data[0] = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Function: test_cpp_constructor @ 0x101064
int test_cpp_constructor(void)
{
 return LifecycleClass_instance_count * 0x3e9 + 0x15;
}

// Function: call_virtual_func @ 0x10107c
void call_virtual_func(Base *param_1,int param_2)
{
 typedef void (*vfunc_ptr)(Base *, int);
 ((vfunc_ptr)(**(void ***)param_1))(param_1, param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x101088
unsigned long long test_cpp_virtual_func(void)
{
 return 0x2a;
}

// Function: test_cpp_multiple_inheritance @ 0x101090
unsigned long long test_cpp_multiple_inheritance(void)
{
 return 0x47;
}

// Function: test_cpp_diamond_inheritance @ 0x101098
unsigned long long test_cpp_diamond_inheritance(void)
{
 return 0x28a;
}

// Function: test_cpp_operator_overload @ 0x1010a0
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x1010a8
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x1010b0
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x1010b8
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x1010c0
unsigned long test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,(void *)&int_typeinfo,0);
 return 0;
}

// Function: test_cpp_smart_ptr @ 0x1011bc
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x1011c4
int test_cpp_rtti(void)
{
 unsigned long long *puVar1;
 long *plVar2;
 long lVar3;
 int iVar4;
 puVar1 = (unsigned long long *)operator_new(8);
 *puVar1 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar2 = (long *)operator_new(8);
 *plVar2 = (long)&PTR__RTTIBase_00111d80;
 lVar3 = (long)__dynamic_cast(puVar1,(const struct __type_info_real *)&RTTIBase_typeinfo,(const struct __type_info_real *)&RTTIDerivedA_typeinfo,0);
 iVar4 = 0x1e;
 if (lVar3 != 0) {
 iVar4 = 0x82;
 }
 lVar3 = (long)__dynamic_cast(plVar2,(const struct __type_info_real *)&RTTIBase_typeinfo,(const struct __type_info_real *)&RTTIDerivedB_typeinfo,0);
 if (lVar3 != 0) {
 iVar4 = iVar4 + 200;
 }
 operator_delete(puVar1);
 {
 typedef void (*vfunc_ptr)(void *);
 void **vtable_ptr = (void **)(long)*plVar2;
 vfunc_ptr destructor = (vfunc_ptr)vtable_ptr[1];
 if (destructor != NULL) {
 destructor(plVar2);
 }
 }
 return iVar4 + 0xe;
}

// Function: test_cpp_oo_features @ 0x101284
int test_cpp_oo_features(void)
{
 int iVar1;
 size_t sVar2;
 unsigned long uVar3;
 unsigned long long *puVar4;
 long *plVar5;
 long lVar6;
 unsigned int local_58;
 unsigned long long local_54;
 undefined7 uStack_4c;
 char uStack_45;
 undefined7 uStack_44;
 unsigned long long uStack_3d;
 char local_35;
 puts(DAT_00101734);
 local_35 = 0;
 local_58 = 10;
 uStack_4c.data[0] = 0;
 local_54 = 0x74736554;
 uStack_3d = 0;
 uStack_45 = 0;
 uStack_44.data[0] = 0;
 sVar2 = strlen((char *)((unsigned long)&local_58 | 4));
 printf(DAT_001015dd,(unsigned long)((int)sVar2 + 0x125c));
 printf(DAT_001015fb,(unsigned long)(LifecycleClass_instance_count * 0x3e9 + 0x15));
 printf(DAT_00101617,0x2a);
 printf(DAT_00101633,0x47);
 printf(DAT_0010164f,0x28a);
 printf(DAT_0010166c,0x16);
 printf(DAT_00101688,0x27);
 printf(DAT_001016a4,0x10);
 printf(DAT_001016c0,0x55);
 uVar3 = test_cpp_exception();
 printf(DAT_001016dc,(unsigned long)uVar3);
 printf(DAT_001016f9,0x2bf);
 puVar4 = (unsigned long long *)operator_new(8);
 *puVar4 = (unsigned long long)&PTR__RTTIBase_00111d58;
 plVar5 = (long *)operator_new(8);
 *plVar5 = (long)&PTR__RTTIBase_00111d80;
 lVar6 = (long)__dynamic_cast(puVar4,(const struct __type_info_real *)&RTTIBase_typeinfo,(const struct __type_info_real *)&RTTIDerivedA_typeinfo,0);
 iVar1 = 0x1e;
 if (lVar6 != 0) {
 iVar1 = 0x82;
 }
 lVar6 = (long)__dynamic_cast(plVar5,(const struct __type_info_real *)&RTTIBase_typeinfo,(const struct __type_info_real *)&RTTIDerivedB_typeinfo,0);
 if (lVar6 != 0) {
 iVar1 = iVar1 + 200;
 }
 operator_delete(puVar4);
 {
 typedef void (*vfunc_ptr)(void *);
 void **vtable_ptr = (void **)(long)*plVar5;
 vfunc_ptr destructor = (vfunc_ptr)vtable_ptr[1];
 if (destructor != NULL) {
 destructor(plVar5);
 }
 }
 iVar1 = printf(DAT_00101716,(unsigned long)(iVar1 + 0xe));
 return iVar1;
}

// Function: main @ 0x101458
int main(int argc, char **argv, char **envp)
{
 test_cpp_oo_features();
 return 0;
}

// Function: template_max<int> @ 0x101470
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x10147c
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x101488
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x10149c
void Container_int__Container(Container_int_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<int>::push @ 0x1014a4
void Container_int__push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->size = iVar1 + 1;
 this->data[iVar1] = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1014c0
unsigned int Container_int__get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < (int)this->size)) {
 uVar1 = (unsigned int)this->data[param_1];
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1014e0
unsigned int Container_int__getSize(Container_int_ *this)
{
 return this->size;
}

// Function: Container<double>::Container @ 0x1014e8
void Container_double__Container(Container_double_ *this)
{
 this->size = 0;
 return;
}

// Function: Container<double>::push @ 0x1014f0
void Container_double__push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = this->size;
 if (iVar1 < 10) {
 this->data[iVar1] = param_1;
 this->size = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x10150c
unsigned long long Container_double__get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < (int)this->size)) {
 uVar1 = *(unsigned long long *)&this->data[param_1];
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x101528
unsigned int Container_double__getSize(Container_double_ *this)
{
 return this->size;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x101530
void RTTIDerivedA__destructor(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x101534
unsigned long long RTTIDerivedA__getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x10153c
void RTTIBase__destructor(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x101540
void RTTIDerivedB__destructor(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x101544
unsigned long long RTTIDerivedB__getType(void)
{
 return 2;
}

// Function: _fini @ 0x10154c
void _fini(void)
{
 return;
}

