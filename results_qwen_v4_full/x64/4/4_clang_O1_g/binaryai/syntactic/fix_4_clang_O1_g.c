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

// Global variables
int completed_0 = 0;
extern void *__dso_handle;
unsigned long long ret_opaque_handle_handle1 = 0x1234;
unsigned long long ret_opaque_handle_handle2 = 0x5678;
unsigned long stack0x00000008 = 0;

// Data strings
char DAT_0010234e[] = "=== Calling Conventions Test ===";
char DAT_001020a4[] = "CALL-L2-01: %d\n";
char DAT_001020cc[] = "CALL-L2-02: %d\n";
char DAT_001020ee[] = "CALL-L2-03: %d\n";
char DAT_00102115[] = "CALL-L2-04: %d\n";
char DAT_0010213d[] = "CALL-L2-05: %d\n";
char DAT_00102169[] = "CALL-L2-06: %d\n";
char DAT_0010236f[] = "=== Parameter Passing Test ===";
char DAT_00102390[] = "=== Return Values Test ===";
char DAT_00102251[] = "RET-L1-01: %d\n";
char DAT_0010226d[] = "RET-L1-02: %d\n";
char DAT_00102289[] = "RET-L1-03: %d\n";
char DAT_001022a4[] = "RET-L2-01: %d\n";
char DAT_001022c1[] = "RET-L2-02: %d\n";
char DAT_001022dd[] = "RET-L2-03: %d\n";
char DAT_001022fa[] = "RET-L2-04: %d\n";
char DAT_00102316[] = "RET-L2-05: %d\n";
char DAT_00102332[] = "RET-L2-06: %d\n";

// External function declarations
extern int __gmon_start__(void);
extern void __libc_start_main(void *main, unsigned long long argc, void *udata, void *init, void *fini, unsigned long long rtld_fini, void *stack_end);
extern int puts(const char *__s);
extern size_t strlen(const char *__s);
extern int printf(const char *__format, ...);
extern void __cxa_finalize(void *d);

// Forward declarations
int main(void);
static void FUN_00101020(void);
static void _start_wrapper(unsigned long long param_1, unsigned long long param_2);
static void deregister_tm_clones_local(void);
static void register_tm_clones_local(void);
static void __do_global_dtors_aux_local(void);
static int cdecl_func(int param_1,int param_2);
static unsigned long long call_cdecl(void);
static int stdcall_func(int param_1,int param_2);
static unsigned long long call_stdcall(void);
static int fastcall_func(int param_1,int param_2,int param_3);
static unsigned long long call_fastcall(void);
static unsigned long long call_thiscall(void);
static int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5);
static unsigned long long call_arm_aapcs(void);
static int mips_func(int param_1,int param_2,int param_3,int param_4);
static unsigned long long call_mips(void);
static int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6);
static unsigned long long call_amd64_sysv(void);
static int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5);
static unsigned long long call_ms_x64(void);
static int vectorcall_func(int param_1,int param_2,int param_3,int param_4);
static unsigned long long call_vectorcall(void);
static unsigned long long mixed_conventions_test(void);
static int varargs_func(int param_1, ...);
static unsigned long long func_no_args(void);
static int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,int param_8);
static int func_mixed_args(double param_1,int param_2,char *param_3,long param_4);
static long func_struct_byval(void);
static int func_struct_byptr(int *param_1);
static void test_calling_conventions(void);
static int param_by_value_int(int param_1);
static unsigned long long call_by_value_int(void);
static unsigned long long param_by_value_ptr(int *param_1);
static unsigned long long call_by_value_ptr(void);
static unsigned long long param_array_decay(void);
static unsigned long long call_array_decay(void);
static int param_string(char *param_1);
static unsigned long long call_string_param(void);
static int param_ptr_array(long param_1,uint param_2);
static unsigned long long call_ptr_array(void);
static int param_varargs(int param_1, ...);
static void call_varargs_param(void);
static int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2);
static unsigned long long call_func_ptr_param(void);
static unsigned long long param_double_ptr(long *param_1,unsigned int param_2);
static unsigned long long call_double_ptr(void);
static int param_complex_cast(int *param_1,int param_2);
static unsigned long long call_complex_cast(void);
static int param_struct_byval_2(void);
static int call_struct_byval(void);
static int param_order_dep(int param_1,int param_2);
static unsigned long long call_order_dep(void);
static void test_parameter_passing(void);
static int ret_basic_type(int param_1);
static unsigned long long call_ret_basic(void);
static long ret_pointer(long param_1);
static unsigned long long call_ret_pointer(void);
static unsigned long ret_small_struct(uint param_1,long param_2);
static unsigned long long call_ret_small_struct(void);
static void ret_large_struct(long param_1,int param_2);
static int call_ret_large_struct(void);
static int func_a(int param_1);
static int func_b(int param_1);
static void * ret_func_ptr(int param_1);
static unsigned long long call_ret_func_ptr(void);
static unsigned long long * ret_opaque_handle(int param_1);
static unsigned int call_ret_opaque(void);
static int ret_complex_expr(int param_1,int param_2,int param_3);
static unsigned long long call_ret_complex_expr(void);
static int ret_multi_branch(uint param_1);
static unsigned long long call_ret_multi_branch(void);
static void ret_void(int param_1,int *param_2);
static unsigned long long call_ret_void(void);
static void test_return_values(void);
static int local_init(void *ctx);
static void local_fini(void);

// Decompiled by BinaryAI
// SHA256: cef2b9001e0cc512d18649be3c1bd5d664de6e8792d5031d04d6585edb451385

// Function: _init @ 0x101000
static int local_init(void *ctx)
{
 (void)ctx;
 return 0;
}

// Function: FUN_00101020 @ 0x101020
static void FUN_00101020(void)
{
 return;
}



// Function: _start @ 0x101070
static void _start_wrapper(unsigned long long param_1, unsigned long long param_2)
{
 (void)param_1;
 (void)param_2;
 main();
}

// Function: deregister_tm_clones @ 0x1010a0
static void deregister_tm_clones_local(void)
{
 return;
}

// Function: register_tm_clones @ 0x1010d0
static void register_tm_clones_local(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x101110
static void __do_global_dtors_aux_local(void)
{
 if (completed_0 != 0) {
 return;
 }
 __cxa_finalize(__dso_handle);
 deregister_tm_clones_local();
 completed_0 = 1;
 return;
}

// Function: cdecl_func @ 0x101160
static int cdecl_func(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_cdecl @ 0x101170
static unsigned long long call_cdecl(void)
{
 return 0xf;
}

// Function: stdcall_func @ 0x101180
static int stdcall_func(int param_1,int param_2)
{
 return param_1 * param_2;
}

// Function: call_stdcall @ 0x101190
static unsigned long long call_stdcall(void)
{
 return 0x32;
}

// Function: fastcall_func @ 0x1011a0
static int fastcall_func(int param_1,int param_2,int param_3)
{
 return param_1 + param_2 + param_3;
}

// Function: call_fastcall @ 0x1011b0
static unsigned long long call_fastcall(void)
{
 return 6;
}

// Function: call_thiscall @ 0x1011c0
static unsigned long long call_thiscall(void)
{
 return 0xf;
}

// Function: arm_aapcs_func @ 0x1011d0
static int arm_aapcs_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_arm_aapcs @ 0x1011e0
static unsigned long long call_arm_aapcs(void)
{
 return 0xf;
}

// Function: mips_func @ 0x1011f0
static int mips_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_mips @ 0x101200
static unsigned long long call_mips(void)
{
 return 100;
}

// Function: amd64_sysv_func @ 0x101210
static int amd64_sysv_func(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6;
}

// Function: call_amd64_sysv @ 0x101220
static unsigned long long call_amd64_sysv(void)
{
 return 0x15;
}

// Function: ms_x64_func @ 0x101230
static int ms_x64_func(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 return param_1 + param_2 + param_3 + param_4 + param_5;
}

// Function: call_ms_x64 @ 0x101240
static unsigned long long call_ms_x64(void)
{
 return 0xf;
}

// Function: vectorcall_func @ 0x101250
static int vectorcall_func(int param_1,int param_2,int param_3,int param_4)
{
 return param_1 + param_2 + param_3 + param_4;
}

// Function: call_vectorcall @ 0x101260
static unsigned long long call_vectorcall(void)
{
 return 10;
}

// Function: mixed_conventions_test @ 0x101270
static unsigned long long mixed_conventions_test(void)
{
 return 0x21;
}

// Function: varargs_func @ 0x101280
static int varargs_func(int param_1, ...)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 unsigned long uVar4;
 int *local_d0;
 int local_b8 [46];
 local_d0 = (int *)&stack0x00000008;
 iVar3 = 8;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 uVar4 = (unsigned long)iVar3;
 if (uVar4 < 0x29) {
 iVar3 = iVar3 + 8;
 piVar2 = (int *)((long)local_b8 + uVar4);
 }
 else {
 piVar2 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar2;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: func_no_args @ 0x101340
static unsigned long long func_no_args(void)
{
 return 0x2a;
}

// Function: func_many_args @ 0x101350
static int func_many_args(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
 int param_7,int param_8)
{
 return param_1 + param_2 + param_3 + param_4 + param_5 + param_6 + param_7 + param_8;
}

// Function: func_mixed_args @ 0x101370
static int func_mixed_args(double param_1,int param_2,char *param_3,long param_4)
{
 int iVar1;
 size_t sVar2;
 if (param_3 == (char *)0x0) {
 iVar1 = 0;
 }
 else {
 sVar2 = strlen(param_3);
 iVar1 = (int)sVar2;
 }
 return (int)((double)param_4 + (double)(iVar1 + param_2) + param_1);
}

// Function: func_struct_byval @ 0x1013c0
static long func_struct_byval(void)
{
 long lVar1;
 long lVar2;
 lVar2 = 0;
 lVar1 = 0;
 do {
 lVar1 = lVar1 + *(long *)(&stack0x00000008 + lVar2 * 8);
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 return lVar1;
}

// Function: func_struct_byptr @ 0x1013e0
static int func_struct_byptr(int *param_1)
{
 if (param_1 != (int *)0x0) {
 return param_1[1] * *param_1;
 }
 return -1;
}

// Function: test_calling_conventions @ 0x101400
static void test_calling_conventions(void)
{
 uint uVar1;
 long lVar2;
 long lVar3;
 long alStack_88 [17];
 puts(&DAT_0010234e);
 printf("CALL-L1-01: %d\n",0xf);
 printf("CALL-L1-02: %d\n",0x32);
 printf("CALL-L1-03: %d\n",6);
 printf("CALL-L1-04: %d\n",0xf);
 printf("CALL-L1-05: %d\n",0xf);
 printf("CALL-L1-06: %d\n",100);
 printf("CALL-L1-07: %d\n",0x15);
 printf("CALL-L1-08: %d\n",0xf);
 printf("CALL-L1-09: %d\n",10);
 printf("CALL-L1-10: %d\n",0x21);
 uVar1 = varargs_func(5,1,2,3,4,5);
 printf(&DAT_001020a4,(unsigned long)uVar1);
 printf(&DAT_001020cc,0x2a);
 printf(&DAT_001020ee,0x24);
 printf(&DAT_00102115,0x75);
 lVar2 = 1;
 do {
 alStack_88[lVar2] = lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x11);
 lVar2 = 0;
 lVar3 = 0;
 do {
 lVar3 = lVar3 + alStack_88[lVar2 + 1];
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf(&DAT_0010213d,lVar3);
 printf(&DAT_00102169,0x32);
 return;
}

// Function: param_by_value_int @ 0x1015b0
static int param_by_value_int(int param_1)
{
 return param_1 * 2;
}

// Function: call_by_value_int @ 0x1015c0
static unsigned long long call_by_value_int(void)
{
 return 0xf;
}

// Function: param_by_value_ptr @ 0x1015d0
static unsigned long long param_by_value_ptr(int *param_1)
{
 *param_1 = *param_1 << 1;
 return 1;
}

// Function: call_by_value_ptr @ 0x1015e0
static unsigned long long call_by_value_ptr(void)
{
 return 0xb;
}

// Function: param_array_decay @ 0x1015f0
static unsigned long long param_array_decay(void)
{
 return 8;
}

// Function: call_array_decay @ 0x101600
static unsigned long long call_array_decay(void)
{
 return 8;
}

// Function: param_string @ 0x101610
static int param_string(char *param_1)
{
 return (int)param_1[1] + (int)*param_1;
}

// Function: call_string_param @ 0x101620
static unsigned long long call_string_param(void)
{
 return 0xad;
}

// Function: param_ptr_array @ 0x101630
static int param_ptr_array(long param_1,uint param_2)
{
 int iVar1;
 unsigned long uVar2;
 if (0 < (int)param_2) {
 uVar2 = 0;
 iVar1 = 0;
 do {
 iVar1 = iVar1 + **(char **)(param_1 + uVar2 * 8);
 uVar2 = uVar2 + 1;
 } while (param_2 != uVar2);
 return iVar1;
 }
 return 0;
}

// Function: call_ptr_array @ 0x101660
static unsigned long long call_ptr_array(void)
{
 return 300;
}

// Function: param_varargs @ 0x101670
static int param_varargs(int param_1, ...)
{
 int iVar1;
 int *piVar2;
 int iVar3;
 unsigned long uVar4;
 int *local_d0;
 int local_b8 [46];
 local_d0 = (int *)&stack0x00000008;
 iVar3 = 8;
 iVar1 = 0;
 if (0 < param_1) {
 do {
 uVar4 = (unsigned long)iVar3;
 if (uVar4 < 0x29) {
 iVar3 = iVar3 + 8;
 piVar2 = (int *)((long)local_b8 + uVar4);
 }
 else {
 piVar2 = local_d0;
 local_d0 = local_d0 + 2;
 }
 iVar1 = iVar1 + *piVar2;
 param_1 = param_1 + -1;
 } while (param_1 != 0);
 }
 return iVar1;
}

// Function: call_varargs_param @ 0x101730
static void call_varargs_param(void)
{
 param_varargs(4,10,0x14,0x1e,0x28);
 return;
}

// Function: param_func_ptr @ 0x101760
static int param_func_ptr(int (*param_1)(unsigned int),unsigned int param_2)
{
 int iVar1;
 iVar1 = param_1(param_2);
 return iVar1 + 10;
}

// Function: call_func_ptr_param @ 0x101770
static unsigned long long call_func_ptr_param(void)
{
 return 0x14;
}

// Function: param_double_ptr @ 0x101780
static unsigned long long param_double_ptr(long *param_1,unsigned int param_2)
{
 unsigned long long uVar1;
 uVar1 = 0xffffffff;
 if ((param_1 != (long *)0x0) && ((unsigned int *)*param_1 != (unsigned int *)0x0)) {
 *(unsigned int *)*param_1 = param_2;
 *param_1 = 0;
 uVar1 = 1;
 }
 return uVar1;
}

// Function: call_double_ptr @ 0x1017b0
static unsigned long long call_double_ptr(void)
{
 return 0x15;
}

// Function: param_complex_cast @ 0x1017c0
static int param_complex_cast(int *param_1,int param_2)
{
 int iVar1;
 if (param_2 == 1) {
 iVar1 = param_1[1] + *param_1;
 }
 else {
 iVar1 = -1;
 if (param_2 == 0) {
 return *param_1;
 }
 }
 return iVar1;
}

// Function: call_complex_cast @ 0x1017e0
static unsigned long long call_complex_cast(void)
{
 return 0x12345678;
}

// Function: param_struct_byval_2 @ 0x1017f0
static int param_struct_byval_2(void)
{
 return 0;
}

// Function: call_struct_byval @ 0x101800
static int call_struct_byval(void)
{
 long lVar1;
 int local_40 [16];
 lVar1 = 0;
 do {
 local_40[lVar1] = (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[15] + local_40[0];
}

// Function: param_order_dep @ 0x101830
static int param_order_dep(int param_1,int param_2)
{
 return param_1 + param_2;
}

// Function: call_order_dep @ 0x101840
static unsigned long long call_order_dep(void)
{
 return 3;
}

// Function: test_parameter_passing @ 0x101850
static void test_parameter_passing(void)
{
 uint uVar1;
 long lVar2;
 int local_48 [16];
 puts(&DAT_0010236f);
 lVar2 = 0;
 printf("PARAM-L1-01: %d\n",0xf);
 printf("PARAM-L1-02: %d\n",0xb);
 printf("PARAM-L2-01: %d\n",8);
 printf("PARAM-L2-02: %d\n",0xad);
 printf("PARAM-L2-03: %d\n",300);
 uVar1 = param_varargs(4,10,0x14,0x1e,0x28);
 printf("PARAM-L2-04: %d\n",(unsigned long)uVar1);
 printf("PARAM-L3-01: %d\n",0x14);
 printf("PARAM-L3-02: %d\n",0x15);
 printf("PARAM-L3-03: %d\n",0x12345678);
 do {
 local_48[lVar2] = (int)lVar2;
 lVar2 = lVar2 + 1;
 } while (lVar2 != 0x10);
 printf("PARAM-L3-04: %d\n",(unsigned long)(uint)(local_48[15] + local_48[0]));
 printf("PARAM-L3-05: %d\n",3);
 return;
}

// Function: ret_basic_type @ 0x101970
static int ret_basic_type(int param_1)
{
 return param_1 * 2;
}

// Function: call_ret_basic @ 0x101980
static unsigned long long call_ret_basic(void)
{
 return 0x2a;
}

// Function: ret_pointer @ 0x101990
static long ret_pointer(long param_1)
{
 return param_1 + 4;
}

// Function: call_ret_pointer @ 0x1019a0
static unsigned long long call_ret_pointer(void)
{
 return 0x14;
}

// Function: ret_small_struct @ 0x1019b0
static unsigned long ret_small_struct(uint param_1,long param_2)
{
 return (unsigned long)param_1 | param_2 << 0x20;
}

// Function: call_ret_small_struct @ 0x1019c0
static unsigned long long call_ret_small_struct(void)
{
 return 7;
}

// Function: ret_large_struct @ 0x1019d0
static void ret_large_struct(long param_1,int param_2)
{
 long lVar1;
 lVar1 = 0;
 do {
 *(int *)(param_1 + lVar1 * 4) = param_2 + (int)lVar1;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return;
}

// Function: call_ret_large_struct @ 0x101a00
static int call_ret_large_struct(void)
{
 long lVar1;
 int local_40 [16];
 lVar1 = 0;
 do {
 local_40[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 return local_40[15] + local_40[0];
}

// Function: func_a @ 0x101a30
static int func_a(int param_1)
{
 return param_1 + 10;
}

// Function: func_b @ 0x101a40
static int func_b(int param_1)
{
 return param_1 * 2;
}

// Function: ret_func_ptr @ 0x101a50
static void * ret_func_ptr(int param_1)
{
 void *pcVar1;
 pcVar1 = func_b;
 if (param_1 == 0) {
 pcVar1 = func_a;
 }
 return pcVar1;
}

// Function: call_ret_func_ptr @ 0x101a70
static unsigned long long call_ret_func_ptr(void)
{
 return 10;
}

// Function: ret_opaque_handle @ 0x101a80
static unsigned long long * ret_opaque_handle(int param_1)
{
 unsigned long long *puVar1;
 puVar1 = &ret_opaque_handle_handle2;
 if (param_1 == 0) {
 puVar1 = (unsigned long long *)&ret_opaque_handle_handle1;
 }
 return puVar1;
}

// Function: call_ret_opaque @ 0x101aa0
static unsigned int call_ret_opaque(void)
{
 return ret_opaque_handle_handle1;
}

// Function: ret_complex_expr @ 0x101ab0
static int ret_complex_expr(int param_1,int param_2,int param_3)
{
 int iVar1;
 iVar1 = param_3 + 10;
 if (param_2 < param_1) {
 iVar1 = param_3 * 2;
 }
 return iVar1;
}

// Function: call_ret_complex_expr @ 0x101ac0
static unsigned long long call_ret_complex_expr(void)
{
 return 0x28;
}

// Function: ret_multi_branch @ 0x101ad0
static int ret_multi_branch(uint param_1)
{
 int iVar1;
 iVar1 = -1;
 if (param_1 < 3) {
 iVar1 = param_1 * 10 + 10;
 }
 return iVar1;
}

// Function: call_ret_multi_branch @ 0x101af0
static unsigned long long call_ret_multi_branch(void)
{
 return 0x3c;
}

// Function: ret_void @ 0x101b00
static void ret_void(int param_1,int *param_2)
{
 *param_2 = param_1 * 3;
 return;
}

// Function: call_ret_void @ 0x101b10
static unsigned long long call_ret_void(void)
{
 return 0x15;
}

// Function: test_return_values @ 0x101b20
static void test_return_values(void)
{
 long lVar1;
 int local_48 [16];
 puts(&DAT_00102390);
 lVar1 = 0;
 printf(&DAT_00102251,0x2a);
 printf(&DAT_0010226d,0x14);
 printf(&DAT_00102289,7);
 do {
 local_48[lVar1] = (int)lVar1 + 100;
 lVar1 = lVar1 + 1;
 } while (lVar1 != 0x10);
 printf(&DAT_001022a4,(unsigned long)(uint)(local_48[15] + local_48[0]));
 printf(&DAT_001022c1,10);
 printf(&DAT_001022dd,(unsigned long)ret_opaque_handle_handle1);
 printf(&DAT_001022fa,0x28);
 printf(&DAT_00102316,0x3c);
 printf(&DAT_00102332,0x15);
 return;
}

// Function: main @ 0x101c00
int main(void)
{
 test_calling_conventions();
 test_parameter_passing();
 test_return_values();
 return 0;
}

// Function: _fini @ 0x101c14
static void local_fini(void)
{
 return;
}

