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
typedef unsigned int uint;
typedef char undefined7;

// CRITICAL: Forward declarations for C++ classes - MUST be at the very beginning
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Type info structure
struct type_info {
    char *name;
};

// Type info structure
struct type_info {
    char *name;
};

// Type info structure
struct type_info {
    char *name;
};

// Type info structure
struct type_info {
    char *name;
};

// Class with static member - must be defined before use
struct LifecycleClass {
    int dummy;
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class with virtual function table
struct Base {
    void **vtable;
    int virtual_func(int param_1);
    ~Base();
    char *getName(void);
};

// Derived class
struct Derived {
    void **vtable;
    int value;
    int virtual_func(int param_1);
    ~Derived();
    char *getName(void);
};

// MultiDerived class for multiple inheritance
struct MultiDerived {
    void **vtable;
    int baseA_value;
    int baseB_value;
    ~MultiDerived();
    unsigned long long funcA(void);
    unsigned long long funcB(void);
};

// DiamondDerived class for diamond inheritance
struct DiamondDerived {
    void **vtable;
    int middleA_value;
    int middleB_value;
    ~DiamondDerived();
    int func(void);
};

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Type info structures
struct type_info {
    char *name;
};

// Class with static member - must be defined before use
struct LifecycleClass {
    int dummy;
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class with virtual function table
struct Base {
    void **vtable;
    int virtual_func(int param_1);
    ~Base();
    char *getName(void);
};

// Derived class
struct Derived {
    void **vtable;
    int value;
    int virtual_func(int param_1);
    ~Derived();
    char *getName(void);
};

// MultiDerived class for multiple inheritance
struct MultiDerived {
    void **vtable;
    int baseA_value;
    int baseB_value;
    ~MultiDerived();
    unsigned long long funcA(void);
    unsigned long long funcB(void);
};

// DiamondDerived class for diamond inheritance
struct DiamondDerived {
    void **vtable;
    int middleA_value;
    int middleB_value;
    ~DiamondDerived();
    int func(void);
};

// Additional forward class declarations
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;
extern char DAT_001025f9;
extern char DAT_00102495;
extern char DAT_001024b3;
extern char DAT_001024cf;
extern char DAT_001024eb;
extern char DAT_00102507;
extern char DAT_00102524;
extern char DAT_00102540;
extern char DAT_0010255c;
extern char DAT_00102578;
extern char DAT_00102594;
extern char DAT_001025b1;
extern char DAT_001025ce;
extern char DAT_001025ec;

// Extern declarations for type_info
extern struct type_info int_typeinfo;
extern struct type_info RTTIBase_typeinfo;
extern struct type_info RTTIDerivedA_typeinfo;
extern struct type_info RTTIDerivedB_typeinfo;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;
extern char DAT_001025f9;
extern char DAT_00102495;
extern char DAT_001024b3;
extern char DAT_001024cf;
extern char DAT_001024eb;
extern char DAT_00102507;
extern char DAT_00102524;
extern char DAT_00102540;
extern char DAT_0010255c;
extern char DAT_00102578;
extern char DAT_00102594;
extern char DAT_001025b1;
extern char DAT_001025ce;
extern char DAT_001025ec;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for C++ classes - must be before any usage
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Class with static member - must be defined before use
struct LifecycleClass {
    int dummy;
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class with virtual function table
struct Base {
    void **vtable;
    int virtual_func(int param_1);
    ~Base();
    char *getName(void);
};

// Derived class
struct Derived {
    void **vtable;
    int value;
    int virtual_func(int param_1);
    ~Derived();
    char *getName(void);
};

// MultiDerived class for multiple inheritance
struct MultiDerived {
    void **vtable;
    int baseA_value;
    int baseB_value;
    ~MultiDerived();
    unsigned long long funcA(void);
    unsigned long long funcB(void);
};

// DiamondDerived class for diamond inheritance
struct DiamondDerived {
    void **vtable;
    int middleA_value;
    int middleB_value;
    ~DiamondDerived();
    int func(void);
};

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Class with static member - must be defined before use
struct LifecycleClass {
    int dummy;
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class with virtual function table
struct Base {
    void **vtable;
    int virtual_func(int param_1);
    ~Base();
    char *getName(void);
};

// Derived class
struct Derived {
    void **vtable;
    int value;
    int virtual_func(int param_1);
    ~Derived();
    char *getName(void);
};

// MultiDerived class for multiple inheritance
struct MultiDerived {
    void **vtable;
    int baseA_value;
    int baseB_value;
    ~MultiDerived();
    unsigned long long funcA(void);
    unsigned long long funcB(void);
};

// DiamondDerived class for diamond inheritance
struct DiamondDerived {
    void **vtable;
    int middleA_value;
    int middleB_value;
    ~DiamondDerived();
    int func(void);
};

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;
extern char DAT_001025f9;
extern char DAT_00102495;
extern char DAT_001024b3;
extern char DAT_001024cf;
extern char DAT_001024eb;
extern char DAT_00102507;
extern char DAT_00102524;
extern char DAT_00102540;
extern char DAT_0010255c;
extern char DAT_00102578;
extern char DAT_00102594;
extern char DAT_001025b1;
extern char DAT_001025ce;
extern char DAT_001025ec;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;
extern char DAT_001025f9;
extern char DAT_00102495;
extern char DAT_001024b3;
extern char DAT_001024cf;
extern char DAT_001024eb;
extern char DAT_00102507;
extern char DAT_00102524;
extern char DAT_00102540;
extern char DAT_0010255c;
extern char DAT_00102578;
extern char DAT_00102594;
extern char DAT_001025b1;
extern char DAT_001025ce;
extern char DAT_001025ec;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct BaseA;
struct BaseB;
struct MiddleA;
struct MiddleB;
struct VirtualBase;

// Additional forward declarations for classes used in functions
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;
extern char DAT_001025f9;
extern char DAT_00102495;
extern char DAT_001024b3;
extern char DAT_001024cf;
extern char DAT_001024eb;
extern char DAT_00102507;
extern char DAT_00102524;
extern char DAT_00102540;
extern char DAT_0010255c;
extern char DAT_00102578;
extern char DAT_00102594;
extern char DAT_001025b1;
extern char DAT_001025ce;
extern char DAT_001025ec;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Forward declarations for C++ classes - must be before any usage
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;

// Class with static member - must be defined before use
struct LifecycleClass {
    int dummy;
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class with virtual function table
struct Base {
    void **vtable;
    int virtual_func(int param_1);
    ~Base();
    char *getName(void);
};

// Derived class
struct Derived {
    void **vtable;
    int value;
    int virtual_func(int param_1);
    ~Derived();
    char *getName(void);
};

// MultiDerived class for multiple inheritance
struct MultiDerived {
    void **vtable;
    int baseA_value;
    int baseB_value;
    ~MultiDerived();
    unsigned long long funcA(void);
    unsigned long long funcB(void);
};

// DiamondDerived class for diamond inheritance
struct DiamondDerived {
    void **vtable;
    int middleA_value;
    int middleB_value;
    ~DiamondDerived();
    int func(void);
};

// Forward declarations for additional classes
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Type info structures
struct type_info {
    char *name;
};

extern struct type_info int::typeinfo;
extern struct type_info RTTIBase::typeinfo;
extern struct type_info RTTIDerivedA::typeinfo;
extern struct type_info RTTIDerivedB::typeinfo;

// Global variables
extern char completed_0;
extern void *__dso_handle;
extern char *PTR_virtual_func_001139a8;
extern char *PTR_virtual_func_001139e8;
extern char *PTR_funcB_00113a60;
extern char *PTR_func_00113ba0;
extern char *PTR__RTTIBase_00113d58;
extern char *PTR__RTTIBase_00113d80;

// Namespace std - using C-compatible workaround
struct std___ioinit_struct {
    char dummy;
};
struct std__ios_base {
    struct Init {
        void Init();
    };
};
typedef struct std___ioinit_struct std___ioinit_struct;
typedef struct std__ios_base std__ios_base;
extern std___ioinit_struct std___ioinit;

// Forward declarations for C++ classes - MUST be at the very beginning
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Class with static member - must be defined before use
struct LifecycleClass {
    int dummy;
    static int instance_count;
};
int LifecycleClass::instance_count = 0;

// Base class with virtual function table
struct Base {
    void **vtable;
    int virtual_func(int param_1);
    ~Base();
    char *getName(void);
};

// Derived class
struct Derived {
    void **vtable;
    int value;
    int virtual_func(int param_1);
    ~Derived();
    char *getName(void);
};

// MultiDerived class for multiple inheritance
struct MultiDerived {
    void **vtable;
    int baseA_value;
    int baseB_value;
    ~MultiDerived();
    unsigned long long funcA(void);
    unsigned long long funcB(void);
};

// DiamondDerived class for diamond inheritance
struct DiamondDerived {
    void **vtable;
    int middleA_value;
    int middleB_value;
    ~DiamondDerived();
    int func(void);
};

// Decompiled by BinaryAI
// SHA256: f3d450b5aedd92fe5f48cf1ec75c783ad3ee6bba737509a90c001843531f4b41

// Function: _init @ 0x101618
int _init(void *ctx)
{
 int iVar1;
 iVar1 = call_weak_fn((int)ctx);
 return iVar1;
}

// Function: FUN_00101630 @ 0x101630
void FUN_00101630(void)
{
 (*(void *)(char *)0x0)();
 return;
}

// Function: <EXTERNAL>::operator.new[] @ 0x101650
void * operator_new__(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new__(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::puts @ 0x101660
int puts(char *__s)
{
 int iVar1;
 iVar1 = puts(__s);
 return iVar1;
}

// Function: <EXTERNAL>::strlen @ 0x101670
size_t strlen(char *__s)
{
 size_t sVar1;
 sVar1 = strlen(__s);
 return sVar1;
}

// Function: <EXTERNAL>::__cxa_begin_catch @ 0x101680
void __cxa_begin_catch(void)
{
 __cxa_begin_catch();
 return;
}

// Function: <EXTERNAL>::__cxa_allocate_exception @ 0x101690
void __cxa_allocate_exception(void)
{
 __cxa_allocate_exception();
 return;
}

// Function: <EXTERNAL>::__cxa_finalize @ 0x1016a0
void __cxa_finalize(void)
{
 __cxa_finalize();
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x1016b0
void __libc_start_main(void)
{
 __libc_start_main();
 return;
}

// Function: <EXTERNAL>::operator.delete @ 0x1016c0
void operator_delete(void *param_1)
{
 operator_delete(param_1);
 return;
}

// Function: <EXTERNAL>::operator.new @ 0x1016d0
void * operator_new(unsigned long param_1)
{
 void *pvVar1;
 pvVar1 = operator_new(param_1);
 return pvVar1;
}

// Function: <EXTERNAL>::__dynamic_cast @ 0x1016e0
void __dynamic_cast(void)
{
 __dynamic_cast();
 return;
}

// Function: <EXTERNAL>::__cxa_atexit @ 0x1016f0
void __cxa_atexit(void)
{
 __cxa_atexit();
 return;
}

// Function: <EXTERNAL>::operator.delete[] @ 0x101700
void operator_delete__(void *param_1)
{
 operator_delete__(param_1);
 return;
}

// Function: <EXTERNAL>::strcmp @ 0x101710
int strcmp(char *__s1,char *__s2)
{
 int iVar1;
 iVar1 = strcmp(__s1,__s2);
 return iVar1;
}

// Function: <EXTERNAL>::__cxa_rethrow @ 0x101720
void __cxa_rethrow(void)
{
 __cxa_rethrow();
 return;
}

// Function: <EXTERNAL>::std::ios_base::Init::Init @ 0x101730
void __thiscall std::ios_base::Init::Init(Init *this)
{
 Init(this);
 return;
}

// Function: <EXTERNAL>::abort @ 0x101740
void abort(void)
{
 abort();
}

// Function: <EXTERNAL>::__cxa_end_catch @ 0x101750
void __cxa_end_catch(void)
{
 __cxa_end_catch();
 return;
}

// Function: <EXTERNAL>::__gxx_personality_v0 @ 0x101760
void __gxx_personality_v0(void)
{
 __gxx_personality_v0();
 return;
}

// Function: <EXTERNAL>::__cxa_throw @ 0x101770
void __cxa_throw(void)
{
 __cxa_throw();
}

// Function: <EXTERNAL>::_Unwind_Resume @ 0x101780
void _Unwind_Resume(void)
{
 _Unwind_Resume();
}

// Function: <EXTERNAL>::__gmon_start__ @ 0x101790
void __gmon_start__(void)
{
 __gmon_start__();
 return;
}

// Function: <EXTERNAL>::printf @ 0x1017a0
int printf(char *__format,...)
{
 int iVar1;
 iVar1 = printf(__format);
 return iVar1;
}

// Function: _GLOBAL__sub_I_5_1.cpp @ 0x1017c0
void _GLOBAL__sub_I_5_1_cpp(void)
{
 std::ios_base::Init::Init((Init *)&std::__ioinit);
 __cxa_atexit(std::ios_base::Init::_Init,&std::__ioinit,&__dso_handle);
 return;
}

// Function: _start @ 0x101800
void _start(unsigned long long param_1)
{
 unsigned long long param_9;
 __libc_start_main(main,param_9,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x101834
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x101850
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x101880
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001018bc @ 0x1018bc
void FUN_001018bc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x1018c0
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize(__dso_handle);
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Forward declarations for C++ classes - MUST be at the very beginning
struct LifecycleClass;
struct Base;
struct Derived;
struct MultiDerived;
struct DiamondDerived;
struct MiddleA;
struct MiddleB;
struct BaseA;
struct BaseB;
struct VirtualBase;
struct RTTIBase;
struct RTTIDerivedA;
struct RTTIDerivedB;
struct Init;
struct Container_int_;
struct Container_double_;
struct int_;

// Function: test_cpp_member_func @ 0x101914
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
 uStack_2c = 0;
 local_34 = 0x74736554;
 uStack_1d = 0;
 uStack_25 = 0;
 uStack_24 = 0;
 sVar1 = strlen((char *)((unsigned long)&local_38 | 4));
 return (int)sVar1 + 0x125c;
}

// Forward declarations needed for functions
struct LifecycleClass;

// Function: test_cpp_constructor @ 0x101964
int test_cpp_constructor(void)
{
 void *pvVar1;
 int iVar2;
 long lVar3;
 pvVar1 = operator_new__(0x14);
 iVar2 = 0;
 lVar3 = 0;
 do {
 *(int *)((long)pvVar1 + lVar3) = iVar2;
 lVar3 = lVar3 + 4;
 iVar2 = iVar2 + 10;
 } while (lVar3 != 0x14);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar2 = *(int *)((long)pvVar1 + 8) + LifecycleClass::instance_count;
 operator_delete__(pvVar1);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 return iVar2 + LifecycleClass::instance_count * 1000;
}

// Function: call_virtual_func @ 0x1019d0
void call_virtual_func(Base *param_1,int param_2)
{
 (***(void ***)param_1)(param_1,param_2);
 return;
}

// Function: test_cpp_virtual_func @ 0x1019ec
int test_cpp_virtual_func(void)
{
 int iVar1;
 int iVar2;
 void **local_30;
 unsigned int local_28;
 char **local_8;
 local_8 = &PTR_virtual_func_001139a8;
 local_30 = (void **)&PTR_virtual_func_001139e8;
 local_28 = 3;
 iVar1 = Base::virtual_func((Base *)&local_8,5);
 iVar2 = (**local_30)(&local_30,5);
 return iVar1 + iVar2 + 0x15;
}

// Function: test_cpp_multiple_inheritance @ 0x101a5c
int test_cpp_multiple_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_30;
 unsigned int local_28;
 local_30 = (void **)&PTR_funcB_00113a60;
 local_28 = 200;
 iVar1 = MultiDerived::funcA();
 iVar2 = (**local_30)(&local_30);
 return iVar1 + iVar2 + 1;
}

// Function: test_cpp_diamond_inheritance @ 0x101acc
int test_cpp_diamond_inheritance(void)
{
 int iVar1;
 int iVar2;
 void **local_40;
 unsigned int local_38;
 local_40 = (void **)&PTR_func_00113ba0;
 local_38 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_40);
 local_38 = 100;
 iVar2 = (**local_40)(&local_40);
 return iVar2 + iVar1;
}

// Function: test_cpp_operator_overload @ 0x101b54
unsigned long long test_cpp_operator_overload(void)
{
 return 0x16;
}

// Function: test_cpp_template_func @ 0x101b5c
unsigned long long test_cpp_template_func(void)
{
 return 0x27;
}

// Function: test_cpp_template_class @ 0x101b64
unsigned long long test_cpp_template_class(void)
{
 return 0x10;
}

// Function: test_cpp_lambda @ 0x101b6c
unsigned long long test_cpp_lambda(void)
{
 return 0x55;
}

// Function: test_cpp_exception @ 0x101b74
void test_cpp_exception(void)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)__cxa_allocate_exception(4);
 *puVar1 = 0x2a;
 __cxa_throw(puVar1,&int::typeinfo,0);
}

// Function: test_cpp_smart_ptr @ 0x101c64
unsigned long long test_cpp_smart_ptr(void)
{
 return 0x2bf;
}

// Function: test_cpp_rtti @ 0x101c6c
int test_cpp_rtti(void)
{
 uint uVar1;
 bool bVar2;
 int iVar3;
 long *plVar4;
 long *plVar5;
 char *__s1;
 size_t sVar6;
 uint uVar7;
 long lVar8;
 char *__s1_00;
 plVar4 = (long *)operator_new(8);
 *plVar4 = (long)&PTR__RTTIBase_00113d58;
 plVar5 = (long *)operator_new(8);
 lVar8 = *plVar4;
 *plVar5 = 0;
 *plVar5 = (long)&PTR__RTTIBase_00113d80;
 __s1_00 = *(char **)(*(long *)(lVar8 + -8) + 8);
 if (__s1_00 == "12RTTIDerivedA") {
 uVar7 = 10;
 }
 else if (*__s1_00 == '*') {
 uVar7 = 0;
 }
 else {
 iVar3 = strcmp(__s1_00,"12RTTIDerivedA");
 uVar7 = 10;
 if (iVar3 != 0) {
 uVar7 = 0;
 }
 }
 __s1 = *(char **)(*(long *)(*plVar5 + -8) + 8);
 if (__s1 == "12RTTIDerivedB") {
 bVar2 = true;
 }
 else if (*__s1 == '*') {
 bVar2 = false;
 }
 else {
 iVar3 = strcmp(__s1,"12RTTIDerivedB");
 bVar2 = iVar3 == 0;
 }
 uVar1 = uVar7 | 0x14;
 if (!bVar2) {
 uVar1 = uVar7;
 }
 lVar8 = __dynamic_cast(plVar4,&RTTIBase::typeinfo,&RTTIDerivedA::typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 100;
 }
 lVar8 = __dynamic_cast(plVar5,&RTTIBase::typeinfo,&RTTIDerivedB::typeinfo,0);
 if (lVar8 != 0) {
 uVar1 = uVar1 + 200;
 }
 if (*__s1_00 == '*') {
 __s1_00 = __s1_00 + 1;
 }
 sVar6 = strlen(__s1_00);
 (**(void **)(*plVar4 + 8))(plVar4);
 (**(void **)(*plVar5 + 8))(plVar5);
 return uVar1 + (int)sVar6;
}

// Function: test_cpp_oo_features @ 0x101e04
int test_cpp_oo_features(void)
{
 int iVar1;
 int iVar2;
 size_t sVar3;
 void *pvVar4;
 unsigned long uVar5;
 long lVar6;
 char **local_68;
 unsigned int local_60;
 unsigned int uStack_5c;
 unsigned int auStack_58 [4];
 unsigned int local_48;
 unsigned int uStack_44;
 unsigned int local_40;
 unsigned int uStack_3c;
 unsigned int local_38;
 puts(&DAT_001025f9);
 local_60 = 10;
 auStack_58[1] = 0;
 uStack_5c = 0x74736554;
 auStack_58[0] = 0;
 uStack_44 = 0;
 local_40 = 0;
 auStack_58[2] = 0;
 auStack_58[3] = 0;
 local_48 = 0;
 sVar3 = strlen((char *)((unsigned long)&local_60 | 4));
 printf(&DAT_00102495,(unsigned long)((int)sVar3 + 0x125c));
 pvVar4 = operator_new__(0x14);
 iVar1 = 0;
 lVar6 = 0;
 do {
 *(int *)((long)pvVar4 + lVar6) = iVar1;
 lVar6 = lVar6 + 4;
 iVar1 = iVar1 + 10;
 } while (lVar6 != 0x14);
 LifecycleClass::instance_count = LifecycleClass::instance_count + 1;
 iVar1 = *(int *)((long)pvVar4 + 8) + LifecycleClass::instance_count;
 operator_delete__(pvVar4);
 LifecycleClass::instance_count = LifecycleClass::instance_count + -1;
 printf(&DAT_001024b3,(unsigned long)(uint)(iVar1 + LifecycleClass::instance_count * 1000));
 auStack_58[0] = 3;
 local_68 = &PTR_virtual_func_001139a8;
 local_60 = 0x1139e8;
 uStack_5c = 0;
 iVar1 = Base::virtual_func((Base *)&local_68,5);
 iVar2 = (**(void **)CONCAT44(uStack_5c,local_60))(&local_60,5);
 printf(&DAT_001024cf,(unsigned long)(iVar1 + iVar2 + 0x15));
 local_60 = 0x113a30;
 uStack_5c = 0;
 auStack_58[2] = 0x113a60;
 auStack_58[3] = 0;
 auStack_58[0] = 100;
 local_48 = 200;
 iVar1 = MultiDerived::funcB((MultiDerived *)(auStack_58 + 2));
 printf(&DAT_001024eb,(unsigned long)(iVar1 + 0x1f));
 local_60 = 0x113b38;
 uStack_5c = 0;
 local_40 = 0x113ba0;
 uStack_3c = 0;
 auStack_58[2] = 0x113b68;
 auStack_58[3] = 0;
 local_38 = 0x32;
 iVar1 = DiamondDerived::func((DiamondDerived *)&local_40);
 *(unsigned int *)((long)auStack_58 + *(long *)(CONCAT44(uStack_5c,local_60) + -0x18)) = 100;
 iVar2 = (**(void **)CONCAT44(uStack_3c,local_40))(&local_40);
 printf(&DAT_00102507,(unsigned long)(uint)(iVar2 + iVar1));
 printf(&DAT_00102524,0x16);
 printf(&DAT_00102540,0x27);
 printf(&DAT_0010255c,0x10);
 printf(&DAT_00102578,0x55);
 uVar5 = test_cpp_exception();
 printf(&DAT_00102594,uVar5 & 0xffffffff);
 printf(&DAT_001025b1,0x2bf);
 uVar5 = test_cpp_rtti();
 iVar1 = printf(&DAT_001025ce,uVar5 & 0xffffffff);
 return iVar1;
}

// Function: main @ 0x102050
unsigned long long main(void)
{
 test_cpp_oo_features();
 return 0;
}

// Function: Base::virtual_func @ 0x102068
int __thiscall Base::virtual_func(Base *this,int param_1)
{
 return param_1 + 1;
}

// Function: Derived::virtual_func @ 0x102070
int __thiscall Derived::virtual_func(Derived *this,int param_1)
{
 return *(int *)(this + 8) * param_1;
}

// Function: Base::~Base @ 0x10207c
void __thiscall Base::_Base(Base *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x102080
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102084
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: template_max<int> @ 0x102088
int template_max_int_(int param_1,int param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_max<double> @ 0x102094
double template_max_double_(double param_1,double param_2)
{
 if (param_1 <= param_2) {
 param_1 = param_2;
 }
 return param_1;
}

// Function: template_swap<int> @ 0x1020a0
void template_swap_int_(int *param_1,int *param_2)
{
 int iVar1;
 iVar1 = *param_1;
 *param_1 = *param_2;
 *param_2 = iVar1;
 return;
}

// Function: Container<int>::Container @ 0x1020b4
void __thiscall Container<int>::Container(Container_int_ *this)
{
 *(unsigned int *)(this + 0x28) = 0;
 return;
}

// Function: Container<int>::push @ 0x1020bc
void __thiscall Container<int>::push(Container_int_ *this,int param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x28);
 if (iVar1 < 10) {
 *(int *)(this + 0x28) = iVar1 + 1;
 *(int *)(this + (long)iVar1 * 4) = param_1;
 }
 return;
}

// Function: Container<int>::get @ 0x1020d8
unsigned int __thiscall Container<int>::get(Container_int_ *this,int param_1)
{
 unsigned int uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x28))) {
 uVar1 = *(unsigned int *)(this + (long)param_1 * 4);
 }
 return uVar1;
}

// Function: Container<int>::getSize @ 0x1020f8
unsigned int __thiscall Container<int>::getSize(Container_int_ *this)
{
 return *(unsigned int *)(this + 0x28);
}

// Function: Container<double>::Container @ 0x102100
void __thiscall Container<double>::Container(Container_double_ *this)
{
 *(unsigned int *)(this + 0x50) = 0;
 return;
}

// Function: Container<double>::push @ 0x102108
void __thiscall Container<double>::push(Container_double_ *this,double param_1)
{
 int iVar1;
 iVar1 = *(int *)(this + 0x50);
 if (iVar1 < 10) {
 *(double *)(this + (long)iVar1 * 8) = param_1;
 *(int *)(this + 0x50) = iVar1 + 1;
 }
 return;
}

// Function: Container<double>::get @ 0x102124
unsigned long long __thiscall Container<double>::get(Container_double_ *this,int param_1)
{
 unsigned long long uVar1;
 uVar1 = 0;
 if ((-1 < param_1) && (param_1 < *(int *)(this + 0x50))) {
 uVar1 = *(unsigned long long *)(this + (long)param_1 * 8);
 }
 return uVar1;
}

// Function: Container<double>::getSize @ 0x102140
unsigned int __thiscall Container<double>::getSize(Container_double_ *this)
{
 return *(unsigned int *)(this + 0x50);
}

// Function: Base::getName @ 0x102148
char * Base::getName(void)
{
 return &DAT_001025ec;
}

// Function: Base::~Base @ 0x102154
void __thiscall Base::_Base(Base *this)
{
 operator_delete(this);
 return;
}

// Function: Derived::getName @ 0x102168
char * Derived::getName(void)
{
 return "Derived";
}

// Function: Derived::~Derived @ 0x102174
void __thiscall Derived::_Derived(Derived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcA @ 0x102188
unsigned long long MultiDerived::funcA(void)
{
 return 0x1e;
}

// Function: MultiDerived::~MultiDerived @ 0x102190
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this);
 return;
}

// Function: MultiDerived::funcB @ 0x1021a4
unsigned long long MultiDerived::funcB(void)
{
 return 0x28;
}

// Function: MultiDerived::funcB @ 0x1021ac
unsigned long long __thiscall MultiDerived::funcB(MultiDerived *this)
{
 return 0x28;
}

// Function: MultiDerived::~MultiDerived @ 0x1021b4
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 return;
}

// Function: MultiDerived::~MultiDerived @ 0x1021b8
void __thiscall MultiDerived::_MultiDerived(MultiDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Function: BaseA::funcA @ 0x1021d0
unsigned long long BaseA::funcA(void)
{
 return 10;
}

// Function: BaseA::~BaseA @ 0x1021d8
void __thiscall BaseA::_BaseA(BaseA *this)
{
 return;
}

// Function: BaseA::~BaseA @ 0x1021dc
void __thiscall BaseA::_BaseA(BaseA *this)
{
 operator_delete(this);
 return;
}

// Function: BaseB::funcB @ 0x1021f0
unsigned long long BaseB::funcB(void)
{
 return 0x14;
}

// Function: BaseB::~BaseB @ 0x1021f8
void __thiscall BaseB::_BaseB(BaseB *this)
{
 return;
}

// Function: BaseB::~BaseB @ 0x1021fc
void __thiscall BaseB::_BaseB(BaseB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x102210
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102228
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x10222c
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleA::func @ 0x102240
int __thiscall MiddleA::func(MiddleA *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0x96;
}

// Function: MiddleA::~MiddleA @ 0x102264
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 return;
}

// Function: MiddleA::~MiddleA @ 0x102268
void __thiscall MiddleA::_MiddleA(MiddleA *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: MiddleB::func @ 0x102288
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1022a0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022a4
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator_delete(this);
 return;
}

// Function: MiddleB::func @ 0x1022b8
int __thiscall MiddleB::func(MiddleB *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 200;
}

// Function: MiddleB::~MiddleB @ 0x1022dc
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 return;
}

// Function: MiddleB::~MiddleB @ 0x1022e0
void __thiscall MiddleB::_MiddleB(MiddleB *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: DiamondDerived::func @ 0x102300
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)(this + *(long *)(*(long *)this + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102318
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this);
 return;
}

// Function: DiamondDerived::func @ 0x10232c
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((long)(this + -0x10) + *(long *)(*(long *)(this + -0x10) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102344
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102348
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + -0x10);
 return;
}

// Function: DiamondDerived::func @ 0x102360
int __thiscall DiamondDerived::func(DiamondDerived *this)
{
 return *(int *)((long)(this + *(long *)(*(long *)this + -0x18)) +
 *(long *)(*(long *)(this + *(long *)(*(long *)this + -0x18)) + -0x18) + 8) + 0xfa;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102384
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 return;
}

// Function: DiamondDerived::~DiamondDerived @ 0x102388
void __thiscall DiamondDerived::_DiamondDerived(DiamondDerived *this)
{
 operator_delete(this + *(long *)(*(long *)this + -0x20));
 return;
}

// Function: VirtualBase::func @ 0x1023a8
unsigned long long VirtualBase::func(void)
{
 return 100;
}

// Function: VirtualBase::~VirtualBase @ 0x1023b0
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 return;
}

// Function: VirtualBase::~VirtualBase @ 0x1023b4
void __thiscall VirtualBase::_VirtualBase(VirtualBase *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::~RTTIDerivedA @ 0x1023c8
void __thiscall RTTIDerivedA::_RTTIDerivedA(RTTIDerivedA *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedA::getType @ 0x1023dc
unsigned long long RTTIDerivedA::getType(void)
{
 return 1;
}

// Function: RTTIBase::~RTTIBase @ 0x1023e4
void __thiscall RTTIBase::_RTTIBase(RTTIBase *this)
{
 return;
}

// Function: RTTIDerivedB::~RTTIDerivedB @ 0x1023e8
void __thiscall RTTIDerivedB::_RTTIDerivedB(RTTIDerivedB *this)
{
 operator_delete(this);
 return;
}

// Function: RTTIDerivedB::getType @ 0x1023fc
unsigned long long RTTIDerivedB::getType(void)
{
 return 2;
}

// Function: _fini @ 0x102404
void _fini(void)
{
 return;
}

