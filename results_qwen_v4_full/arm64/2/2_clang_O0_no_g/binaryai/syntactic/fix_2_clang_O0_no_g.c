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
typedef unsigned char byte;
typedef unsigned short ushort;
#define true 1
#define false 0

// External declarations
unsigned long fpcr = 0;
unsigned long fpsr = 0;
char completed_0 = 0;
void *__dso_handle = 0;
char DAT_00103758 = 0;
char DAT_001038c4 = 0;
char DAT_001039dc = 0;
char DAT_001039e1 = 0;
char DAT_00103b7b = 0;
char DAT_00103704 = 0;
unsigned long stack0x00000008 = 0;
unsigned long in_register_00005008 = 0;
unsigned long in_register_00005028 = 0;

// Forward declarations
int _init(void *ctx);
void FUN_00100680(void);
int main(void);
int double_value(int param_1);
bool complex_callback(int *param_1,long *param_2);
unsigned int NEON_fmadd(unsigned int a, unsigned int b, unsigned int c);
void call_weak_fn(void);
void deregister_tm_clones(void);
void register_tm_clones(void);
void FUN_001007fc(void);
void __do_global_dtors_aux(void);
byte process_char(byte param_1);
int process_short(short param_1,short param_2);
int process_int(int param_1);
long process_long(long param_1);
long process_ll(long param_1);
unsigned int process_float(unsigned int param_1);
double process_double(double param_1);
void process_ld(unsigned long long param_1);
bool process_bool(int param_1);
int const_param(int *param_1);
int volatile_access(int *param_1);
int test_data_types_l1(void);
int array_1d_stack(long param_1,int param_2);
int array_string(long param_1);
int array_2d_stack(long param_1);
int array_3d(long param_1);
int array_vla(int param_1,long param_2);
int array_pointer(long param_1,int param_2);
int pointer_array(long param_1,int param_2);
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5);
int array_oob(long param_1,int param_2);
int test_array_types(void);
int ptr_single(int *param_1);
int ptr_double(unsigned int **param_1);
int ptr_triple(unsigned int ***param_1);
int ptr_increment(unsigned long long *param_1,int param_2);
unsigned int ptr_offset(unsigned long long *param_1,int param_2);
unsigned long ptr_diff(unsigned long long *param_1,unsigned long long *param_2);
uint ptr_void(uint *param_1,int param_2);
int ptr_const(int *param_1);
int ptr_const_ptr(int *param_1);
void ptr_func_simple(void *param_1,unsigned int param_2);
void ptr_func_complex(void *param_1,unsigned long long param_2);
unsigned int ptr_cast(unsigned int *param_1);
long opaque_handle_create(int param_1);
int opaque_handle_op(int param_1);
int test_pointer_types(void);
int struct_simple(int *param_1);
int struct_array(long param_1,int param_2);
int struct_nested(int *param_1);
int struct_deep(long param_1);
int struct_with_ptr(int *param_1);
short struct_bitfields(ushort *param_1);
float union_type(float *param_1,int param_2);
int union_array(long param_1,int param_2);
int enum_type(int param_1);
unsigned int enum_switch(unsigned int param_1);
void struct_func_ptr(unsigned int *param_1);
int linked_list(int *param_1);
int doubly_linked_list(int *param_1);
int binary_tree_sum(long long *param_1);
void binary_tree(long long *param_1);
int graph_traverse(long param_1);
int test_composite_types(void);
unsigned long __addtf3(unsigned long param_1, unsigned long param_2);
unsigned long __multf3(unsigned long param_1, unsigned long param_2);
void __sfp_handle_exceptions(unsigned long param_1);
void _start(unsigned long long param_1);
void _fini(void);


// Macro for carry detection in 64-bit addition
#define CARRY8(a,b) (((a)+(b))<(a))

// Decompiled by BinaryAI
// SHA256: 1c44cea08173101e284ad8a1b129288ad24926140563fc0cb84991940b7173e1



// Function: FUN_00100680 @ 0x100680
void FUN_00100680(void)
{
 ((void (*)(void))0)();
 return;
}

// External function: memcpy
extern void * memcpy(void *__dest,void *__src,size_t __n);

// External function: __libc_start_main
extern void __libc_start_main(void *main_func, unsigned long long argc, void *argv, void *init, void *fini, unsigned long long rtld_fini);

// External function: __cxa_finalize
extern void __cxa_finalize(void);

// External function: memset
extern void * memset(void *__s,int __c,size_t __n);

// External function: __gmon_start__
extern void __gmon_start__(void);

// External function: abort
extern void abort(void);

// External function: printf
extern int printf(const char *__format,...);





// Function: _start @ 0x100740
void _start(unsigned long long param_1)
{
 __libc_start_main(main,param_1,&stack0x00000008,0,0,param_1);
 abort();
}

// Function: call_weak_fn @ 0x100774
void call_weak_fn(void)
{
 __gmon_start__();
 return;
}

// Function: deregister_tm_clones @ 0x100790
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x1007c0
void register_tm_clones(void)
{
 return;
}

// Function: FUN_001007fc @ 0x1007fc
void FUN_001007fc(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: __do_global_dtors_aux @ 0x100800
void __do_global_dtors_aux(void)
{
 if (completed_0 == '\0') {
 __cxa_finalize();
 deregister_tm_clones();
 completed_0 = '\x01';
 }
 return;
}

// Function: process_char @ 0x100854
byte process_char(byte param_1)
{
 byte local_1;
 local_1 = param_1;
 if ((0x40 < param_1) && (param_1 < 0x5b)) {
 local_1 = param_1 + 0x20;
 }
 return local_1;
}

// Function: process_short @ 0x1008a4
int process_short(short param_1,short param_2)
{
 return (int)param_1 + (int)param_2;
}

// Function: process_int @ 0x1008c4
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x1008e0
long process_long(long param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x1008f8
long process_ll(long param_1)
{
 return param_1 * param_1;
}

// Function: NEON_fmadd @ 0x10090c
unsigned int NEON_fmadd(unsigned int a, unsigned int b, unsigned int c)
{
 return a;
}

// Function: process_float @ 0x100914
unsigned int process_float(unsigned int param_1)
{
 unsigned int uVar1;
 uVar1 = NEON_fmadd(param_1,0x3fc00000,0x3f000000);
 return uVar1;
}

// Function: process_double @ 0x100934
double process_double(double param_1)
{
 return param_1 / 2.0 + 0.1;
}

// Function: process_ld @ 0x10095c
void process_ld(unsigned long long param_1)
{
 unsigned long long uVar1;
 uVar1 = __multf3(param_1, 0);
 __addtf3(uVar1,0);
 return;
}

// Function: process_bool @ 0x10098c
bool process_bool(int param_1)
{
 bool bVar1;
 bVar1 = false;
 if (0 < param_1) {
 bVar1 = param_1 % 2 == 0;
 }
 return bVar1;
}

// Function: const_param @ 0x1009e0
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x1009fc
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x100a30
int test_data_types_l1(void)
{
 short sVar1;
 uint uVar2;
 int iVar3;
 unsigned long uVar4;
 unsigned long long uVar5;
 float fVar6;
 unsigned int local_18;
 unsigned int local_14;
 printf(&DAT_00103758);
 uVar2 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(unsigned long)(uVar2 & 0xff));
 uVar2 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(unsigned long)(uVar2 & 0xff));
 sVar1 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(unsigned long)(uint)(int)sVar1);
 uVar4 = process_int(10);
 printf("DT-L1-03 (process_int): %d\n",uVar4 & 0xffffffff);
 uVar5 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar5);
 uVar5 = process_ll(100);
 iVar3 = printf("DT-L1-05 (process_ll): %lld\n",uVar5);
 fVar6 = (float)process_float(0x40000000);
 iVar3 = printf("DT-L1-06 (process_float): %.2f\n",(double)fVar6);
 process_double(0x4010000000000000);
 iVar3 = printf("DT-L1-07 (process_double): %.2f\n");
 process_ld(0);
 printf("DT-L1-08 (process_ld): %.2Lf\n");
 uVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)(uVar2 & 1));
 uVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)(uVar2 & 1));
 uVar2 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",(unsigned long)(uVar2 & 1));
 local_14 = 5;
 uVar4 = const_param(&local_14);
 printf("DT-L1-10 (const_param): %d\n",uVar4 & 0xffffffff);
 local_18 = 10;
 uVar4 = volatile_access(&local_18);
 iVar3 = printf("DT-L1-11 (volatile_access): %d\n",uVar4 & 0xffffffff);
 return iVar3;
}

// Function: array_1d_stack @ 0x100bc4
int array_1d_stack(long param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
 }
 return local_10;
}

// Function: array_string @ 0x100c28
int array_string(long param_1)
{
 int local_c;
 for (local_c = 0; *(char *)(param_1 + local_c) != '\0'; local_c = local_c + 1) {
 }
 return local_c;
}

// Function: array_2d_stack @ 0x100c68
int array_2d_stack(long param_1)
{
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < 10; local_10 = local_10 + 1) {
 local_c = local_c + *(int *)(param_1 + (long)local_10 * 0x28 + (long)local_10 * 4);
 }
 return local_c;
}

// Function: array_3d @ 0x100cd4
int array_3d(long param_1)
{
 int local_18;
 int local_14;
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 for (local_18 = 0; local_18 < 5; local_18 = local_18 + 1) {
 local_c = local_c + *(int *)(param_1 + (long)local_10 * 100 + (long)local_14 * 0x14 +
 (long)local_18 * 4);
 }
 }
 }
 return local_c;
}

// Function: array_vla @ 0x100da8
int array_vla(int param_1,long param_2)
{
 int local_18;
 int local_14;
 local_14 = 0;
 for (local_18 = 0; local_18 < param_1; local_18 = local_18 + 1) {
 local_14 = local_14 + *(int *)(param_2 + (long)local_18 * 4);
 }
 return local_14;
}

// Function: array_pointer @ 0x100e0c
int array_pointer(long param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 0x28);
 }
 return local_10;
}

// Function: pointer_array @ 0x100e78
int pointer_array(long param_1,int param_2)
{
 int local_1c;
 int local_18;
 int local_10;
 local_10 = 0;
 local_1c = param_2;
 if (9 < param_2) {
 local_1c = 10;
 }
 for (local_18 = 0; local_18 < local_1c; local_18 = local_18 + 1) {
 if (*(long *)(param_1 + (long)local_18 * 8) != 0) {
 local_10 = local_10 + **(int **)(param_1 + (long)local_18 * 8);
 }
 }
 return local_10;
}

// Function: array_complex_index @ 0x100f28
unsigned int array_complex_index(long param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int local_4;
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 local_4 = 0xffffffff;
 }
 else {
 local_4 = *(unsigned int *)(param_1 + (long)(param_5 * param_2 + param_4) * 4);
 }
 return local_4;
}

// Function: array_oob @ 0x100fbc
int array_oob(long param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 <= param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
 }
 return local_10;
}

// Function: test_array_types @ 0x101020
int test_array_types(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long long *local_588;
 int local_57c;
 int local_56c;
 int aiStack_568 [20];
 unsigned int *local_518;
 unsigned int *local_510;
 unsigned int *local_508;
 unsigned long long local_500;
 unsigned long long local_4f8 [6];
 unsigned long long local_4c8;
 unsigned int local_4c0;
 int local_4bc;
 int aiStack_4b8 [50];
 unsigned long long local_3f0;
 unsigned int local_3e8;
 int local_3e0;
 int local_3dc;
 int local_3d8;
 unsigned int auStack_3d4 [125];
 int local_1e0;
 int local_1dc;
 int aiStack_1d8 [100];
 unsigned int local_48;
 unsigned short local_44;
 unsigned long long local_40;
 unsigned long long uStack_38;
 unsigned int local_30;
 printf(&DAT_001038c4);
 uStack_38 = 0x400000003;
 local_40 = 0x200000001;
 local_30 = 5;
 uVar2 = array_1d_stack((long)&local_40,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar2 & 0xffffffff);
 local_48 = 0x6c6c6568;
 local_44 = 0x006f;
 uVar2 = array_string((long)&local_48);
 printf("ARR-L1-02 (array_string): %d\n",uVar2 & 0xffffffff);
 for (local_1dc = 0; local_1dc < 10; local_1dc = local_1dc + 1) {
 for (local_1e0 = 0; local_1e0 < 10; local_1e0 = local_1e0 + 1) {
 if (local_1dc == local_1e0) {
 local_57c = local_1dc;
 }
 else {
 local_57c = 0;
 }
 aiStack_1d8[(long)local_1dc * 10 + (long)local_1e0] = local_57c;
 }
 }
 uVar2 = array_2d_stack((long)aiStack_1d8);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar2 & 0xffffffff);
 for (local_3d8 = 0; local_3d8 < 5; local_3d8 = local_3d8 + 1) {
 for (local_3dc = 0; local_3dc < 5; local_3dc = local_3dc + 1) {
 for (local_3e0 = 0; local_3e0 < 5; local_3e0 = local_3e0 + 1) {
 auStack_3d4[(long)local_3d8 * 0x19 + (long)local_3dc * 5 + (long)local_3e0] = 1;
 }
 }
 }
 uVar2 = array_3d((long)auStack_3d4);
 printf("ARR-L1-04 (array_3d): %d\n",uVar2 & 0xffffffff);
 local_3f0 = 0x140000000a;
 local_3e8 = 0x1e;
 uVar2 = array_vla(3,(long)&local_3f0);
 printf("ARR-L2-01 (array_vla): %d\n",uVar2 & 0xffffffff);
 for (local_4bc = 0; local_4bc < 5; local_4bc = local_4bc + 1) {
 aiStack_4b8[(long)local_4bc * 10] = local_4bc * 10;
 }
 uVar2 = array_pointer((long)aiStack_4b8,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar2 & 0xffffffff);
 local_518 = &local_4c0;
 local_4c0 = 10;
 local_510 = (unsigned int *)((long)&local_4c8 + 4);
 local_4c8 = ((unsigned long long)0x14 << 32) | (local_4c8 & 0xFFFFFFFF);
 local_508 = (unsigned int *)&local_4c8;
 local_4c8 = (local_4c8 & 0xFFFFFFFF00000000) | 0x1e;
 local_500 = 0;
 local_588 = local_4f8;
 do {
 *local_588 = 0;
 local_588 = local_588 + 1;
 } while (local_588 != &local_4c8);
 uVar2 = pointer_array((long)&local_518,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar2 & 0xffffffff);
 for (local_56c = 0; local_56c < 0x14; local_56c = local_56c + 1) {
 aiStack_568[local_56c] = local_56c;
 }
 uVar2 = array_complex_index((long)aiStack_568,5,4,2,3);
 iVar1 = printf("ARR-L2-04 (array_complex_index): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: ptr_single @ 0x1013d0
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x1013ec
int ptr_double(unsigned int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x10140c
int ptr_triple(unsigned int ***param_1)
{
 return **(int **)*param_1 + 1;
}

// Function: ptr_increment @ 0x101430
int ptr_increment(unsigned long long *param_1,int param_2)
{
 int local_14;
 int local_10;
 unsigned long long *local_8;
 local_10 = 0;
 local_8 = param_1;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
  local_10 = local_10 + (int)*local_8;
  local_8 = local_8 + 1;
 }
 return local_10;
}

// Function: ptr_offset @ 0x10149c
unsigned int ptr_offset(unsigned long long *param_1,int param_2)
{
 return *(unsigned int *)(param_1 + (long)param_2 * 4);
}

// Function: ptr_diff @ 0x1014bc
unsigned long ptr_diff(unsigned long long *param_1,unsigned long long *param_2)
{
 return (param_1 - param_2) / 4 & 0xffffffff;
}

// Function: ptr_void @ 0x1014e8
uint ptr_void(uint *param_1,int param_2)
{
 uint local_4;
 if (param_2 == 0) {
 local_4 = *param_1;
 }
 else if (param_2 == 1) {
 local_4 = (uint)*(byte *)param_1;
 }
 else {
 local_4 = 0xffffffff;
 }
 return local_4;
}

// Function: ptr_const @ 0x10154c
int ptr_const(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: ptr_const_ptr @ 0x101570
int ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return *param_1;
}

// Function: ptr_func_simple @ 0x10159c
void ptr_func_simple(void *param_1,unsigned int param_2)
{
 ((void (*)(unsigned int))param_1)(param_2);
 return;
}

// Function: ptr_func_complex @ 0x1015c8
void ptr_func_complex(void *param_1,unsigned long long param_2)
{
 char *local_30;
 unsigned long long uStack_28;
 unsigned long long local_20;
 void *local_18;
 uStack_28 = 0;
 local_30 = &DAT_001039dc;
 local_20 = param_2;
 local_18 = param_1;
 ((void (*)(unsigned long long, char **))param_1)(param_2,&local_30);
 return;
}

// Function: ptr_cast @ 0x101608
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x101638
long opaque_handle_create(int param_1)
{
 return (long)param_1;
}

// Function: opaque_handle_op @ 0x10164c
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x101664
int test_pointer_types(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long long uVar3;
 unsigned int local_b8;
 unsigned int local_b4;
 unsigned int local_b0;
 unsigned int local_ac;
 char local_a5;
 unsigned int local_a4;
 unsigned long long local_a0;
 unsigned long long uStack_98;
 unsigned int local_90 [4];
 unsigned long long local_80;
 unsigned long long uStack_78;
 unsigned int local_70;
 unsigned long long local_60;
 unsigned long long uStack_58;
 unsigned int local_50;
 unsigned int ***local_48;
 unsigned int **local_40;
 unsigned int *local_38;
 unsigned int local_2c;
 unsigned int **local_28;
 unsigned int *local_20;
 unsigned int local_18;
 unsigned int local_14;
 printf(&DAT_001039e1);
 local_14 = 5;
 uVar2 = ptr_single(&local_14);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar2 & 0xffffffff);
 local_20 = &local_18;
 local_18 = 10;
 local_28 = &local_20;
 uVar2 = ptr_double(local_28);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar2 & 0xffffffff);
 local_38 = &local_2c;
 local_2c = 5;
 local_40 = &local_38;
 local_48 = &local_40;
 uVar2 = ptr_triple(local_48);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar2 & 0xffffffff);
 uStack_58 = 0x400000003;
 local_60 = 0x200000001;
 local_50 = 5;
 uVar2 = ptr_increment(&local_60,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar2 & 0xffffffff);
 uStack_78 = 0x280000001e;
 local_80 = 0x140000000a;
 local_70 = 0x32;
 uVar2 = ptr_offset(&local_80,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar2 & 0xffffffff);
uStack_98 = 0x1e00000014;
local_a0 = 0xa00000000;
local_90[0] = 0x28;
uVar2 = ptr_diff((unsigned long long *)&local_90[0], (unsigned long long *)&local_90[1]);
printf("PTR-L2-06 (ptr_diff): %d\n", uVar2 & 0xffffffff);
 local_a4 = 0x2a;
 local_a5 = 0x41;
 uVar2 = ptr_void(&local_a4,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar2 & 0xffffffff);
 uVar2 = ptr_void((unsigned int *)&local_a5,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar2 & 0xffffffff);
 local_ac = 10;
 uVar2 = ptr_const(&local_ac);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar2 & 0xffffffff);
 local_b0 = 10;
 uVar2 = ptr_const_ptr(&local_b0);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar2 & 0xffffffff);
 ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",5);
 local_b4 = 5;
 ptr_func_complex(complex_callback,local_b4);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",5);
 local_b8 = 0x12345678;
 uVar2 = ptr_cast(&local_b8);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar2 & 0xffffffff);
 uVar3 = opaque_handle_create(10);
 uVar2 = opaque_handle_op(uVar3);
 iVar1 = printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar2 & 0xffffffff);
 return iVar1;
}

// Function: double_value @ 0x1018d4
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: complex_callback @ 0x1018ec
bool complex_callback(int *param_1,long *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: struct_simple @ 0x101928
int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x101958
int struct_array(long param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 +
 *(int *)(param_1 + (long)local_14 * 0xc) +
 *(int *)(param_1 + (long)local_14 * 0xc + 4) +
 *(int *)(param_1 + (long)local_14 * 0xc + 8);
 }
 return local_10;
}

// Function: struct_nested @ 0x1019f4
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x101a18
int struct_deep(long param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x101a3c
int struct_with_ptr(int *param_1)
{
 int local_10;
 if (*(long *)(param_1 + 2) == 0) {
 local_10 = 0;
 }
 else {
 local_10 = **(int **)(param_1 + 2);
 }
 return *param_1 + local_10;
}

// Function: struct_bitfields @ 0x101a94
short struct_bitfields(ushort *param_1)
{
 return (*param_1 >> 1 & 3) + (*param_1 & 1) + (*param_1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x101aec
float union_type(float *param_1,int param_2)
{
 float local_4;
 if (param_2 == 0) {
 local_4 = *param_1;
 }
 else if (param_2 == 1) {
 local_4 = (float)(int)*param_1;
 }
 else {
 local_4 = (float)(uint)*(byte *)param_1;
 }
 return local_4;
}

// Function: union_array @ 0x101b54
int union_array(long param_1,int param_2)
{
 int local_14;
 int local_10;
 local_10 = 0;
 for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
 local_10 = local_10 + *(int *)(param_1 + (long)local_14 * 4);
 }
 return local_10;
}

// Function: enum_type @ 0x101bb8
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x101bd4
unsigned int enum_switch(unsigned int param_1)
{
 unsigned int local_4;
 switch(param_1) {
 case 0:
 local_4 = 0;
 break;
 case 1:
 local_4 = 100;
 break;
 case 2:
 local_4 = 0x32;
 break;
 case 3:
 local_4 = 0xffffffff;
 break;
 default:
 local_4 = 0xffffff9d;
 }
 return local_4;
}

// Function: struct_func_ptr @ 0x101c50
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))**(void ***)(param_1 + 2))(*param_1);
 return;
}

// Function: linked_list @ 0x101c80
int linked_list(int *param_1)
{
 int *local_18;
 int local_c;
 local_c = 0;
 for (local_18 = param_1; local_18 != (int *)0x0; local_18 = *(int **)(local_18 + 2)) {
 local_c = local_c + *local_18;
 }
 return local_c;
}

// Function: doubly_linked_list @ 0x101cd4
int doubly_linked_list(int *param_1)
{
 int *local_18;
 int local_c;
 local_c = 0;
 for (local_18 = param_1; local_18 != (int *)0x0; local_18 = *(int **)(local_18 + 2)) {
 local_c = local_c + *local_18;
 }
 return local_c;
}

// Function: binary_tree_sum @ 0x101d28
int binary_tree_sum(long long *param_1)
{
 int iVar1;
 int iVar2;
 int local_14;
 if (param_1 == (long long *)0x0) {
 local_14 = 0;
 }
 else {
 iVar1 = (int)*param_1;
 iVar2 = binary_tree_sum(param_1 + 2);
 local_14 = binary_tree_sum(param_1 + 4);
 local_14 = iVar1 + iVar2 + local_14;
 }
 return local_14;
}

// Function: binary_tree @ 0x101d9c
void binary_tree(long long *param_1)
{
 binary_tree_sum(param_1);
 return;
}

// Function: graph_traverse @ 0x101dc0
int graph_traverse(long param_1)
{
 int *local_18;
 int local_10;
 int local_c;
 local_c = 0;
 for (local_10 = 0; local_10 < *(int *)(param_1 + 0x50); local_10 = local_10 + 1) {
 for (local_18 = *(int **)(param_1 + (long)local_10 * 8); local_18 != (int *)0x0;
 local_18 = *(int **)(local_18 + 2)) {
 local_c = local_c + *local_18;
 }
 }
 return local_c;
}

// Function: test_composite_types @ 0x101e50
int test_composite_types(void)
{
 int iVar1;
 unsigned long uVar2;
 unsigned long long *local_1d8 [10];
 unsigned int local_188;
 unsigned long long local_180;
 unsigned long long uStack_178;
 unsigned long long local_170;
 unsigned long long uStack_168;
 unsigned long long local_160;
 unsigned int local_150 [2];
 unsigned int *local_148;
 unsigned long long local_140;
 unsigned int local_138 [2];
 unsigned long long local_130;
 unsigned int *local_128;
 unsigned int local_120;
 unsigned int *local_118;
 unsigned int local_110 [2];
 unsigned int *local_108;
 unsigned int local_100 [2];
 unsigned long long local_f8;
 unsigned long long local_f0;
 void *pcStack_e8;
 unsigned long long local_d8;
 unsigned int local_d0;
 unsigned int local_cc;
 unsigned long long local_c8;
 unsigned int local_c0 [2];
 unsigned long long *local_b8;
 unsigned long long local_b0;
 unsigned long long uStack_a8;
 char auStack_a0 [48];
 unsigned long long local_70;
 unsigned long long uStack_68;
 unsigned int local_60;
 unsigned long long local_50;
 unsigned long long uStack_48;
 unsigned long long local_40;
 unsigned long long local_30;
 unsigned int local_28;
 printf(&DAT_00103b7b);
 local_30 = 0x200000001;
 local_28 = 3;
 uVar2 = struct_simple((int *)&local_30);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar2 & 0xffffffff);
 uStack_48 = 0x200000001;
 local_50 = 0x100000001;
 local_40 = 0x200000002;
 uVar2 = struct_array((long)&local_50,3);
 printf("CMP-L2-02 (struct_array): %d\n",uVar2 & 0xffffffff);
 uStack_68 = 0x6400000000;
 local_70 = 0xa00000005;
 local_60 = 200;
 uVar2 = struct_nested((int *)&local_70);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar2 & 0xffffffff);
 memcpy(auStack_a0,&DAT_00103704,0x30);
 uVar2 = struct_deep((long)auStack_a0);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar2 & 0xffffffff);
 local_b8 = &local_b0;
 uStack_a8 = 0;
 local_b0 = 0x14;
 local_c0[0] = 10;
 uVar2 = struct_with_ptr(local_c0);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar2 & 0xffffffff);
 local_c8 = 0x191d;
 uVar2 = struct_bitfields((ushort *)&local_c8);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar2 & 0xffffffff);
 local_cc = 0x12345678;
 uVar2 = union_type((float *)&local_cc,0);
 printf("CMP-L2-07 (union_type): %d\n",uVar2 & 0xffffffff);
 local_d8 = 0x140000000a;
 local_d0 = 0x1e;
 uVar2 = union_array((long)&local_d8,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar2 & 0xffffffff);
 uVar2 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar2 & 0xffffffff);
 uVar2 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar2 & 0xffffffff);
 local_f0 = 10;
 struct_func_ptr((unsigned int *)&local_f0);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",10);
 local_120 = 10;
 local_118 = local_110;
 local_110[0] = 0x14;
 local_108 = local_100;
 local_100[0] = 0x1e;
 local_f8 = 0;
 linked_list((int *)0);
 printf("CMP-L2-12 (linked_list): %d\n",0);
 local_128 = local_150;
 local_150[0] = 10;
 local_140 = 0;
 local_138[0] = 0x14;
 local_130 = 0;
 local_148 = local_138;
 doubly_linked_list((int *)0);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",0);
uStack_168 = 0;
local_170 = 100;
local_160 = 0;
binary_tree(&local_170);
printf("CMP-L2-14 (binary_tree): %d\n", 0);
 local_1d8[0] = &local_180;
 uStack_178 = 0;
 local_180 = 1;
 memset(local_1d8,0,0x58);
 local_188 = 2;
 graph_traverse((long)local_1d8);
 iVar1 = printf("CMP-L2-15 (graph_traverse): %d\n",0);
 return iVar1;
}

// Function: main @ 0x102194
int main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return 0;
}

// Function: __addtf3 @ 0x1021d0 (stub)
__attribute__((weak)) unsigned long __addtf3(unsigned long param_1,unsigned long param_2)
{
 return param_1 + param_2;
}

// Function: __multf3 @ 0x102d70 (stub)
__attribute__((weak)) unsigned long __multf3(unsigned long param_1,unsigned long param_2)
{
 return param_1 * param_2;
}

// Function: __sfp_handle_exceptions @ 0x103570
void __sfp_handle_exceptions(unsigned long param_1)
{
 uint uVar1;
 uVar1 = (uint)param_1;
 if ((param_1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar1 >> 1 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar1 >> 2 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar1 >> 3 & 1) != 0) {
 uVar1 = fpsr;
 }
 if ((uVar1 >> 4 & 1) != 0) {
 uVar1 = fpsr;
 }
 return;
}



