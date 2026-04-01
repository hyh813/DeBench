#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>

/* Standard types are provided by <stdint.h> and <stddef.h> */

/* External symbol declarations */
extern void _gmon_start__(void);
extern void frame_dummy(void);
extern int _do_global_ctors_aux(void);
extern void _do_global_dtors_aux(void);

/* Forward declarations */
#ifdef __cplusplus
struct type_info {
    virtual ~type_info();
    const char *name;
};
#else
/* C-compatible opaque type_info for extern declarations */
struct type_info;
#endif

struct __class_type_info;

/* C++ Runtime function declarations (needed outside __cplusplus block) */
void *__cxa_allocate_exception(size_t);
void __cxa_throw(void *, struct type_info *, void (*)(void *));
int __cxa_atexit(void (*)(void *), void *, void *);
void *__dynamic_cast(void *, const struct __class_type_info *, const struct __class_type_info *, ptrdiff_t);
void __gxx_personality_v0(void);
void _Unwind_Resume(void *);

/* C memory allocation function declarations */
void *malloc(size_t);
void *calloc(size_t, size_t);
void *realloc(void *, size_t);
void free(void *);

#ifdef __cplusplus

/* C++ operator new/delete declarations */
void *operator new(size_t);
void *operator new[](size_t);
void operator delete(void *);
void operator delete[](void *);

/* C++ Class Declarations */
struct Base {
    void **_vptr$Base;
};

struct LifecycleClass {
    static int instance_count;
};

/* Forward declarations for RTTI classes */
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

/* RTTI vtable structures */
struct RTTIBase_VTable {
    void (*destructor)(struct RTTIBase *);
    int (*getType)(const struct RTTIBase *);
};

struct RTTIBase {
    struct RTTIBase_VTable *vptr;
};

struct RTTIDerivedA_VTable {
    void (*destructor)(struct RTTIDerivedA *);
    int (*getType)(const struct RTTIDerivedA *);
};

struct RTTIDerivedA {
    struct RTTIDerivedA_VTable *vptr;
};

struct RTTIDerivedB_VTable {
    void (*destructor)(struct RTTIDerivedB *);
    int (*getType)(const struct RTTIDerivedB *);
};

struct RTTIDerivedB {
    struct RTTIDerivedB_VTable *vptr;
};

struct Container_int {
    int size;
    int data[10];
};

struct Container_double {
    int size;
    double data[10];
};

struct ios_base_Init;

/* std::ios_base::Init forward declaration */
struct ios_base_Init {
    char dummy;
};

/* Forward declarations for Container functions */
void Container_int_Constructor(struct Container_int *_this);
void Container_int_push(struct Container_int *_this, int value);
void Container_double_Constructor(struct Container_double *_this);
void Container_double_push(struct Container_double *_this, double value);

#endif /* __cplusplus */

/* Global variable declarations */
extern const void *off_3ECC;
extern const void *off_3EE0;
extern const char *asc_21D8;
extern const char *aCppL301D;
extern const char *aCppL302D;
extern const char *aCppL303D;
extern const char *aCppL304D;
extern const char *aCppL305D;
extern const char *aCppL306D;
extern const char *aCppL307D;
extern const char *aCppL308D;
extern const char *aCppL309D;














/* CRT stub function _start removed by preprocessor */










/* CRT stub function deregister_tm_clones removed by preprocessor */




/* CRT stub function register_tm_clones removed by preprocessor */




/* CRT stub function __do_global_dtors_aux removed by preprocessor */




/* CRT stub function frame_dummy removed by preprocessor */












/* Function: test_cpp_oo_features @ 0x1720 */
void test_cpp_oo_features()
{
 /* Stub implementation for C++ OO features test */
#ifdef __cplusplus
 Container_int c_int;
 Container_double c_double;
 
 Container_int_Constructor(&c_int);
 Container_double_Constructor(&c_double);
 
 Container_int_push(&c_int, 42);
 Container_double_push(&c_double, 3.14);
#endif
}

/* Function: main @ 0x1722 */
int main(int argc, const char **argv, const char **envp)
{
 test_cpp_oo_features();
 return 0;
}


/* Function: _Z12template_maxIiET_S0_S0_ @ 0x173E */
int template_max_int(int a, int b)
{
 int result; // eax

 result = b;
 if ( a > b )
 return a;
 return result;
}


/* Function: _Z12template_maxIdET_S0_S0_ @ 0x174C */
double template_max_double(double a, double b)
{
 if ( a > b )
 return a;
 return b;
}


/* Function: _Z13template_swapIiEvRT_S1_ @ 0x175D */
void template_swap_int(int *a, int *b)
{
 int v2; // edx

 v2 = *a;
 *a = *b;
 *b = v2;
}

#ifdef __cplusplus

/* Function: _ZN9ContainerIiEC2Ev @ 0x1770 */
void Container_int_Constructor(Container_int *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIiE4pushEi @ 0x177C */
void Container_int_push(Container_int *_this, int value)
{
 int size; // ecx

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIiE3getEi @ 0x1798 */
int Container_int_get(const Container_int *_this, int idx)
{
 int result; // eax

 result = 0;
 if ( idx >= 0 && _this->size > idx )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIiE7getSizeEv @ 0x17B0 */
int Container_int_getSize(const Container_int *_this)
{
 return _this->size;
}


/* Function: _ZN9ContainerIdEC2Ev @ 0x17B8 */
void Container_double_Constructor(Container_double *_this)
{
 _this->size = 0;
}


/* Function: _ZN9ContainerIdE4pushEd @ 0x17C4 */
void Container_double_push(Container_double *_this, double value)
{
 int size; // ecx

 size = _this->size;
 if ( size <= 9 )
 {
 _this->size = size + 1;
 _this->data[size] = value;
 }
}


/* Function: _ZNK9ContainerIdE3getEi @ 0x17E2 */
double Container_double_get(const Container_double *_this, int idx)
{
 long double result; // fst7

 result = 0.0;
 if ( idx >= 0 && _this->size > idx )
 return _this->data[idx];
 return result;
}


/* Function: _ZNK9ContainerIdE7getSizeEv @ 0x17FC */
int Container_double_getSize(const Container_double *_this)
{
 return _this->size;
}


/* Function: _ZN12RTTIDerivedAD0Ev @ 0x1804 */
void RTTIDerivedA_D0(RTTIDerivedA *_this)
{
 operator delete(_this);
}


/* Function: _ZNK12RTTIDerivedA7getTypeEv @ 0x1826 */
int RTTIDerivedA_getType(const RTTIDerivedA *_this)
{
 return 1;
}


/* Function: _ZN8RTTIBaseD2Ev @ 0x182A */
void RTTIBase_D2(RTTIBase *_this)
{
 ;
}


/* Function: _ZN12RTTIDerivedBD0Ev @ 0x182C */
void RTTIDerivedB_D0(RTTIDerivedB *_this)
{
 operator delete(_this);
}


/* Function: _ZNK12RTTIDerivedB7getTypeEv @ 0x184E */
int RTTIDerivedB_getType(const RTTIDerivedB *_this)
{
 return 2;
}

#endif /* __cplusplus */



/* CRT stub function __do_global_ctors_aux removed by preprocessor */






/* FAILED to decompile: _Znwj @ 0x4084 */

/* FAILED to decompile: __cxa_finalize @ 0x4088 */

/* FAILED to decompile: __cxa_begin_catch @ 0x408C */

/* FAILED to decompile: __cxa_allocate_exception @ 0x4090 */

/* FAILED to decompile: memcpy @ 0x4094 */

/* FAILED to decompile: strlen @ 0x4098 */

/* FAILED to decompile: __cxa_atexit @ 0x409C */

/* FAILED to decompile: __libc_start_main @ 0x40A4 */

/* FAILED to decompile: _Znaj @ 0x40A8 */

/* FAILED to decompile: _ZdlPv @ 0x40AC */

/* FAILED to decompile: __dynamic_cast @ 0x40B0 */

/* FAILED to decompile: _ZdaPv @ 0x40B4 */

/* FAILED to decompile: printf @ 0x40BC */

/* FAILED to decompile: __cxa_rethrow @ 0x40C0 */

/* FAILED to decompile: puts @ 0x40C4 */

/* FAILED to decompile: _ZNSt8ios_base4InitC1Ev @ 0x40C8 */

/* FAILED to decompile: __cxa_end_catch @ 0x40CC */

/* FAILED to decompile: __gxx_personality_v0 @ 0x40D0 */

/* FAILED to decompile: __cxa_throw @ 0x40D4 */

/* FAILED to decompile: _Unwind_Resume @ 0x40D8 */

/* FAILED to decompile: _ZNSt8ios_base4InitD1Ev @ 0x40DC */

/* Total functions decompiled: 46, failed: 21 */
