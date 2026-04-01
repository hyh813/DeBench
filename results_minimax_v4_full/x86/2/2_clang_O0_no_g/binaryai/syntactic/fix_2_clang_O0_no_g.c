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
typedef unsigned char bool;
typedef unsigned char byte;
typedef unsigned long long unkbyte10;
typedef unsigned short undefined6;
typedef unsigned long unkuint10;
typedef unsigned int uint;
typedef unsigned short ushort;
typedef unsigned long ulonglong;
typedef unsigned short uint6;

// Type definitions
typedef long double longdouble;
typedef float float_t;
typedef double double_t;

// Boolean values
#define true 1
#define false 0

// Forward declarations for functions used before defined
int double_value(int param_1);
bool complex_callback(int *param_1, int *param_2);
int process_int(int param_1);
unsigned int binary_tree(unsigned int *param_1);
unsigned int binary_tree_sum(unsigned int *param_1);
void __do_global_ctors_aux(void);
void main(void);

// Function pointer types for callback functions
typedef int (*func_ptr_simple_t)(int);
typedef bool (*func_ptr_complex_t)(int *, int *);

// Type definitions for function pointers
typedef void (*func_ptr_t)(unsigned int);
typedef void (*func_ptr_with_args_t)(unsigned int, char **);

// Builtin macros
#define CONCAT44(a,b) (((a) << 32) | (b))
#define SUB84(a,b) ((a) - (b))
#define SUB104(a,b) (a)
#define ROUND(a) ((int)((a) + 0.5))

// External declarations
extern void __gmon_start__(void);
extern void frame_dummy(void);
extern char _GLOBAL_OFFSET_TABLE_[];

// Data symbols (placeholders)
extern char DAT_0001312c[];
extern char DAT_00013298[];
extern char DAT_00013050[];
extern char DAT_000133b0[];
extern char DAT_000133b5[];
extern char DAT_00013070[];
extern char DAT_00013084[];
extern char DAT_00013098[];
extern char DAT_000130b8[];
extern char DAT_000130d0[];
extern char DAT_000130e4[];
extern char DAT_0001354f[];

// Decompiled by BinaryAI
// SHA256: b7ed08eb0d23d6e4879a5dee6296438e64640aa2aef9ad0833f0726964e3e3b9



// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 // Null function pointer call - decompilation artifact
 return;
}

// Function: <EXTERNAL>::__libc_start_main @ 0x11040
extern int __libc_start_main(void (*main)(void), int argc, char **argv, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void *stack_end);

// Function: <EXTERNAL>::printf @ 0x11050
extern int printf(char *__format, ...);

// Function: <EXTERNAL>::memcpy @ 0x11060
extern void *memcpy(void *__dest, void *__src, size_t __n);

// Function: FUN_00011070 @ 0x11070
void FUN_00011070(void)
{
 int unaff_EBX;
 (*(void (*)(void))(*(void **)(unaff_EBX + -0x10)))();
 return;
}

// Function: _start @ 0x11080
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 __libc_start_main(main, param_2, auStack_4, 0, 0, param_1, &auStack_4);
 for (;;) { }
}

// Function: __i686.get_pc_thunk.bx @ 0x110ac
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x110b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x110c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11100
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11150
void __do_global_dtors_aux(void)
{
 uint uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4ec3) == '\0') {
 if (*(int *)(unaff_EDI + 0x4e93) != 0) {
 // Empty block
 }
 uVar1 = *(uint *)(unaff_EDI + 0x4ec7);
 while (uVar1 < ((unaff_EDI + 0x4dab) - (unaff_EDI + 0x4da7) >> 2) - 1U) {
 *(uint *)(unaff_EDI + 0x4ec7) = uVar1 + 1;
 uVar1 = *(uint *)(unaff_EDI + 0x4ec7);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4ec3) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x111e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x111ed
void __i686_get_pc_thunk_di(void)
{
 return;
}

// Function: process_char @ 0x11200
int process_char(char param_1)
{
 char local_5;
 if ((param_1 < 'A') || ('Z' < param_1)) {
 local_5 = param_1;
 }
 else {
 local_5 = param_1 + ' ';
 }
 return (int)local_5;
}

// Function: process_short @ 0x11240
int process_short(short param_1,short param_2)
{
 return (int)(short)(param_1 + param_2);
}

// Function: process_int @ 0x11260
int process_int(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: process_long @ 0x11280
int process_long(int param_1)
{
 return param_1 << 1;
}

// Function: process_ll @ 0x11290
uint64_t process_ll(uint param_1, int param_2)
{
 uint64_t square = (uint64_t)param_1 * (uint64_t)param_1;
 uint64_t result = (((uint64_t)param_1 * (uint64_t)param_1) >> 0x20) + ((uint64_t)param_1 * (uint64_t)(uint)param_2 * 2);
 return (result << 32) | (square & 0xFFFFFFFF);
}

// Function: process_float @ 0x112b0
longdouble process_float(float param_1)
{
 return (longdouble)0.5 + (longdouble)1.5 * (longdouble)param_1;
}

// Function: process_double @ 0x112e0
longdouble process_double(double param_1)
{
 return (longdouble)0.1 + (longdouble)param_1 / (longdouble)2.0;
}

// Function: process_ld @ 0x11310
longdouble process_ld(longdouble param_1)
{
 return (longdouble)1 + param_1 * param_1;
}

// Function: process_bool @ 0x11330
bool process_bool(int param_1)
{
 bool local_5;
 local_5 = false;
 if (0 < param_1) {
 local_5 = param_1 % 2 == 0;
 }
 return local_5;
}

// Function: const_param @ 0x11370
int const_param(int *param_1)
{
 return *param_1 + 10;
}

// Function: volatile_access @ 0x11380
int volatile_access(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: test_data_types_l1 @ 0x113b0
void test_data_types_l1(void)
{
 char cVar1;
 byte bVar2;
 short sVar3;
 unsigned int uVar4;
 longdouble lVar5;
 unkbyte10 Var6;
 undefined6 uVar7;
 unsigned int local_10;
 unsigned int local_c;
 printf(&DAT_0001312c);
 cVar1 = process_char(0x41);
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 cVar1 = process_char(0x62);
 printf("DT-L1-01 (process_char): %c\n",(int)cVar1);
 sVar3 = process_short(100,200);
 printf("DT-L1-02 (process_short): %d\n",(int)sVar3);
 uVar4 = process_int(5);
 printf("DT-L1-03 (process_int): %d\n",uVar4);
 uVar4 = process_long(100);
 printf("DT-L1-04 (process_long): %ld\n",uVar4);
 uVar7 = process_ll(100,0);
 printf("DT-L1-05 (process_ll): %lld\n",(int)uVar7,(short)((uint6)uVar7 >> 0x20));
 lVar5 = (longdouble)process_float(0x40000000);
 printf("DT-L1-06 (process_float): %.2f\n",SUB84((double)lVar5,0),
 (short)((ulonglong)(double)lVar5 >> 0x20));
 lVar5 = (longdouble)process_double(0x40100000);
 printf("DT-L1-07 (process_double): %.2f\n",SUB84((double)lVar5,0),
 (short)((ulonglong)(double)lVar5 >> 0x20));
 lVar5 = (longdouble)3.0;
 Var6 = process_ld(lVar5);
 printf("DT-L1-08 (process_ld): %.2Lf\n",(int)Var6,(short)((unkuint10)Var6 >> 0x20),
 (short)((unkuint10)Var6 >> 0x40));
 bVar2 = process_bool(4);
 printf("DT-L1-09 (process_bool): %d\n",(uint)(bVar2 & 1));
 bVar2 = process_bool(3);
 printf("DT-L1-09 (process_bool): %d\n",(uint)(bVar2 & 1));
 bVar2 = process_bool(0xfffffffe);
 printf("DT-L1-09 (process_bool): %d\n",(uint)(bVar2 & 1));
 local_c = 5;
 uVar4 = const_param(&local_c);
 printf("DT-L1-10 (const_param): %d\n",uVar4);
 local_10 = 10;
 uVar4 = volatile_access(&local_10);
 printf("DT-L1-11 (volatile_access): %d\n",uVar4);
 return;
}

// Function: array_1d_stack @ 0x11640
int array_1d_stack(int *param_1, int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = param_1[local_c] + local_8;
 }
 return local_8;
}

// Function: array_string @ 0x11690
int array_string(char *param_1)
{
 int local_8;
 for (local_8 = 0; param_1[local_8] != '\0'; local_8 = local_8 + 1) {
 }
 return local_8;
}

// Function: array_2d_stack @ 0x116d0
int array_2d_stack(int param_1)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < 10; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 0x2c) + local_8;
 }
 return local_8;
}

// Function: array_3d @ 0x11720
int array_3d(int param_1)
{
 int local_14;
 int local_10;
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < 5; local_c = local_c + 1) {
 for (local_10 = 0; local_10 < 5; local_10 = local_10 + 1) {
 for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
 local_8 = *(int *)(param_1 + local_c * 100 + local_10 * 0x14 + local_14 * 4) + local_8;
 }
 }
 }
 return local_8;
}

// Function: array_vla @ 0x117c0
int array_vla(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_1; local_c = local_c + 1) {
 local_8 = *(int *)(param_2 + local_c * 4) + local_8;
 }
 return local_8;
}

// Function: array_pointer @ 0x11810
int array_pointer(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 0x28) + local_8;
 }
 return local_8;
}

// Function: pointer_array @ 0x11860
int pointer_array(int param_1,int param_2)
{
 int local_14;
 int local_10;
 int local_8;
 local_8 = 0;
 if (param_2 < 10) {
 local_14 = param_2;
 }
 else {
 local_14 = 10;
 }
 for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
 if (*(int *)(param_1 + local_10 * 4) != 0) {
 local_8 = **(int **)(param_1 + local_10 * 4) + local_8;
 }
 }
 return local_8;
}

// Function: array_complex_index @ 0x118f0
unsigned int array_complex_index(int param_1,int param_2,int param_3,int param_4,int param_5)
{
 unsigned int local_8;
 if ((((param_4 < 0) || (param_2 <= param_4)) || (param_5 < 0)) || (param_3 <= param_5)) {
 local_8 = 0xffffffff;
 }
 else {
 local_8 = *(unsigned int *)(param_1 + (param_5 * param_2 + param_4) * 4);
 }
 return local_8;
}

// Function: array_oob @ 0x11960
int array_oob(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c <= param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}

// Function: test_array_types @ 0x119b0
void test_array_types(void)
{
 unsigned int uVar1;
 unsigned int *local_528;
 int local_524;
 int local_51c;
 int local_518 [20];
 unsigned int *local_4c8;
 unsigned int *local_4c4;
 unsigned int *local_4c0;
 unsigned int local_4bc;
 unsigned int local_4b8 [6];
 unsigned int local_4a0;
 unsigned int local_49c;
 unsigned int local_498;
 int local_494;
 int local_490 [50];
 unsigned int local_3c8;
 unsigned int local_3c4;
 unsigned int local_3c0;
 int local_3bc;
 int local_3b8;
 int local_3b4;
 unsigned int local_3b0 [125];
 int local_1bc;
 int local_1b8;
 int local_1b4 [100];
 char local_22 [5];
 char local_1e [3];
 char local_1c [20];
 printf(&DAT_00013298);
 memcpy(local_1c,&DAT_00013050,0x14);
 uVar1 = array_1d_stack(local_1c,5);
 printf("ARR-L1-01 (array_1d_stack): %d\n",uVar1);
 local_22[0] = 'h';
 local_22[1] = 'e';
 local_22[2] = 'l';
 local_22[3] = 'l';
 local_22[4] = '\0';
 local_1e[0] = 'o';
 local_1e[1] = '\0';
 uVar1 = array_string(local_22);
 printf("ARR-L1-02 (array_string): %d\n",uVar1);
 for (local_1b8 = 0; local_1b8 < 10; local_1b8 = local_1b8 + 1) {
 for (local_1bc = 0; local_1bc < 10; local_1bc = local_1bc + 1) {
 if (local_1b8 == local_1bc) {
 local_524 = local_1b8;
 }
 else {
 local_524 = 0;
 }
 local_1b4[local_1b8 * 10 + local_1bc] = local_524;
 }
 }
 uVar1 = array_2d_stack(local_1b4);
 printf("ARR-L1-03 (array_2d_stack): %d\n",uVar1);
 for (local_3b4 = 0; local_3b4 < 5; local_3b4 = local_3b4 + 1) {
 for (local_3b8 = 0; local_3b8 < 5; local_3b8 = local_3b8 + 1) {
 for (local_3bc = 0; local_3bc < 5; local_3bc = local_3bc + 1) {
 local_3b0[local_3b4 * 0x19 + local_3b8 * 5 + local_3bc] = 1;
 }
 }
 }
 uVar1 = array_3d(local_3b0);
 printf("ARR-L1-04 (array_3d): %d\n",uVar1);
 local_3c8 = 10;
 local_3c4 = 0x14;
 local_3c0 = 0x1e;
 uVar1 = array_vla(3,&local_3c8);
 printf("ARR-L2-01 (array_vla): %d\n",uVar1);
 for (local_494 = 0; local_494 < 5; local_494 = local_494 + 1) {
 local_490[local_494 * 10] = local_494 * 10;
 }
 uVar1 = array_pointer(local_490,5);
 printf("ARR-L2-02 (array_pointer): %d\n",uVar1);
 local_498 = 10;
 local_49c = 0x14;
 local_4a0 = 0x1e;
 local_4c8 = &local_498;
 local_4c4 = &local_49c;
 local_4c0 = &local_4a0;
 local_4bc = 0;
 local_528 = local_4b8;
 do {
 *local_528 = 0;
 local_528 = local_528 + 1;
 } while (local_528 != &local_4a0);
 uVar1 = pointer_array(&local_4c8,3);
 printf("ARR-L2-03 (pointer_array): %d\n",uVar1);
 for (local_51c = 0; local_51c < 0x14; local_51c = local_51c + 1) {
 local_518[local_51c] = local_51c;
 }
 uVar1 = array_complex_index(local_518,5,4,2,3);
 printf("ARR-L2-04 (array_complex_index): %d\n",uVar1);
 return;
}

// Function: ptr_single @ 0x11e50
int ptr_single(int *param_1)
{
 return *param_1 + 10;
}

// Function: ptr_double @ 0x11e60
int ptr_double(int **param_1)
{
 return **param_1 + 5;
}

// Function: ptr_triple @ 0x11e80
int ptr_triple(unsigned int ***param_1)
{
 return **param_1 + 1;
}

// Function: ptr_increment @ 0x11ea0
int ptr_increment(int *param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *param_1 + local_8;
 param_1 = param_1 + 1;
 }
 return local_8;
}

// Function: ptr_offset @ 0x11ef0
unsigned int ptr_offset(int param_1,int param_2)
{
 return *(unsigned int *)(param_1 + param_2 * 4);
}

// Function: ptr_diff @ 0x11f10
int ptr_diff(int param_1,int param_2)
{
 return (param_1 - param_2) >> 2;
}

// Function: ptr_void @ 0x11f30
int ptr_void(int *param_1,int param_2)
{
 int local_8;
 if (param_2 == 0) {
 local_8 = *param_1;
 }
 else if (param_2 == 1) {
 local_8 = (int)*(char *)param_1;
 }
 else {
 local_8 = -1;
 }
 return local_8;
}

// Function: ptr_const @ 0x11f80
int ptr_const(int *param_1)
{
 return *param_1 + *param_1;
}

// Function: ptr_const_ptr @ 0x11fa0
int ptr_const_ptr(int *param_1)
{
 *param_1 = *param_1 + 5;
 return *param_1;
}

// Function: ptr_func_simple @ 0x11fc0
int ptr_func_simple(void *param_1,unsigned int param_2)
{
 return ((func_ptr_simple_t)param_1)(param_2);
}

// Function: ptr_func_complex @ 0x11ff0
int ptr_func_complex(void *param_1,unsigned int param_2)
{
 char *local_10;
 unsigned int local_c;
 int ret;
 local_10 = &DAT_000133b0;
 local_c = 0;
 ret = ((func_ptr_complex_t)param_1)(&local_10,&local_10);
 return ret;
}

// Function: ptr_cast @ 0x12040
unsigned int ptr_cast(unsigned int *param_1)
{
 return *param_1;
}

// Function: opaque_handle_create @ 0x12070
unsigned int opaque_handle_create(unsigned int param_1)
{
 return param_1;
}

// Function: opaque_handle_op @ 0x12080
int opaque_handle_op(int param_1)
{
 return param_1 << 1;
}

// Function: test_pointer_types @ 0x12090
void test_pointer_types(void)
{
 unsigned int uVar1;
 unsigned int local_7c;
 unsigned int local_78;
 unsigned int local_74;
 unsigned int local_70;
 char local_69;
 unsigned int local_68;
 char local_64 [16];
 char auStack_54 [4];
 char local_50 [20];
 char local_3c [20];
 unsigned int ***local_28;
 unsigned int **local_24;
 unsigned int *local_20;
 unsigned int local_1c;
 unsigned int **local_18;
 unsigned int *local_14;
 unsigned int local_10;
 unsigned int local_c;
 printf(&DAT_000133b5);
 local_c = 5;
 uVar1 = ptr_single(&local_c);
 printf("PTR-L2-01 (ptr_single): %d\n",uVar1);
 local_10 = 10;
 local_14 = &local_10;
 local_18 = &local_14;
 uVar1 = ptr_double(local_18);
 printf("PTR-L2-02 (ptr_double): %d\n",uVar1);
 local_1c = 5;
 local_20 = &local_1c;
 local_24 = &local_20;
 local_28 = &local_24;
 uVar1 = ptr_triple(local_28);
 printf("PTR-L2-03 (ptr_triple): %d\n",uVar1);
 memcpy(local_3c,&DAT_00013070,0x14);
 uVar1 = ptr_increment(local_3c,5);
 printf("PTR-L2-04 (ptr_increment): %d\n",uVar1);
 memcpy(local_50,&DAT_00013084,0x14);
 uVar1 = ptr_offset(local_50,2);
 printf("PTR-L2-05 (ptr_offset): %d\n",uVar1);
 memcpy(local_64,&DAT_00013098,0x14);
 uVar1 = ptr_diff(auStack_54,local_64);
 printf("PTR-L2-06 (ptr_diff): %d\n",uVar1);
 local_68 = 0x2a;
 local_69 = 0x41;
 uVar1 = ptr_void(&local_68,0);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 uVar1 = ptr_void(&local_69,1);
 printf("PTR-L2-07 (ptr_void): %d\n",uVar1);
 local_70 = 10;
 uVar1 = ptr_const(&local_70);
 printf("PTR-L2-08 (ptr_const): %d\n",uVar1);
 local_74 = 10;
 uVar1 = ptr_const_ptr(&local_74);
 printf("PTR-L2-09 (ptr_const_ptr): %d\n",uVar1);
 uVar1 = ptr_func_simple(double_value,5);
 printf("PTR-L2-10 (ptr_func_simple): %d\n",uVar1);
 local_78 = 5;
 uVar1 = (unsigned int)ptr_func_complex(complex_callback,&local_78);
 printf("PTR-L2-11 (ptr_func_complex): %d\n",uVar1);
 local_7c = 0x12345678;
 uVar1 = ptr_cast(&local_7c);
 printf("PTR-L2-12 (ptr_cast): 0x%x\n",uVar1);
 uVar1 = opaque_handle_create(10);
 uVar1 = opaque_handle_op(uVar1);
 printf("PTR-L2-13 (opaque_handle_op): %d\n",uVar1);
 return;
}

// Function: double_value @ 0x123c0
int double_value(int param_1)
{
 return param_1 << 1;
}

// Function: complex_callback @ 0x123d0
bool complex_callback(int *param_1,int *param_2)
{
 *param_1 = *param_1 + 10;
 return *param_2 != 0;
}

// Function: struct_simple @ 0x12400
int struct_simple(int *param_1)
{
 return *param_1 + param_1[1] + param_1[2];
}

// Function: struct_array @ 0x12420
int struct_array(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 0xc) + *(int *)(param_1 + local_c * 0xc + 4) +
 *(int *)(param_1 + local_c * 0xc + 8) + local_8;
 }
 return local_8;
}

// Function: struct_nested @ 0x12490
int struct_nested(int *param_1)
{
 return *param_1 + param_1[3];
}

// Function: struct_deep @ 0x124b0
int struct_deep(int param_1)
{
 return *(int *)(param_1 + 8) + *(int *)(param_1 + 0x14);
}

// Function: struct_with_ptr @ 0x124d0
int struct_with_ptr(int *param_1)
{
 int local_c;
 if (param_1[1] == 0) {
 local_c = 0;
 }
 else {
 local_c = *(int *)param_1[1];
 }
 return *param_1 + local_c;
}

// Function: struct_bitfields @ 0x12520
short struct_bitfields(ushort *param_1)
{
 return (*param_1 & 1) + (*param_1 >> 1 & 3) + (*param_1 >> 3 & 7) + (*param_1 >> 6);
}

// Function: union_type @ 0x12570
float union_type(float *param_1,int param_2)
{
 float local_8;
 if (param_2 == 0) {
 local_8 = *param_1;
 }
 else if (param_2 == 1) {
 local_8 = (float)(int)ROUND(*param_1);
 }
 else {
 local_8 = (float)(int)*(char *)param_1;
 }
 return local_8;
}

// Function: union_array @ 0x125e0
int union_array(int param_1,int param_2)
{
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < param_2; local_c = local_c + 1) {
 local_8 = *(int *)(param_1 + local_c * 4) + local_8;
 }
 return local_8;
}

// Function: enum_type @ 0x12630
int enum_type(int param_1)
{
 return param_1 * 10;
}

// Function: enum_switch @ 0x12640
unsigned int enum_switch(unsigned int param_1)
{
 unsigned int local_8;
 switch(param_1) {
 case 0:
 local_8 = 0;
 break;
 case 1:
 local_8 = 100;
 break;
 case 2:
 local_8 = 0x32;
 break;
 case 3:
 local_8 = 0xffffffff;
 break;
 default:
 local_8 = 0xffffff9d;
 }
 return local_8;
}

// Function: struct_func_ptr @ 0x126c0
void struct_func_ptr(unsigned int *param_1)
{
 ((void (*)(unsigned int))param_1[1])(*param_1);
 return;
}

// Function: linked_list @ 0x126f0
int linked_list(int *param_1)
{
 int *local_c;
 int local_8;
 local_8 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_8 = *local_c + local_8;
 }
 return local_8;
}

// Function: doubly_linked_list @ 0x12740
int doubly_linked_list(int *param_1)
{
 int *local_c;
 int local_8;
 local_8 = 0;
 for (local_c = param_1; local_c != (int *)0x0; local_c = (int *)local_c[1]) {
 local_8 = *local_c + local_8;
 }
 return local_8;
}

// Function: binary_tree_sum @ 0x12790
unsigned int binary_tree_sum(unsigned int *param_1)
{
 unsigned int iVar2;
 unsigned int local_c;
 if (param_1 == (unsigned int *)0x0) {
 local_c = 0;
 }
 else {
 iVar2 = *param_1;
 local_c = binary_tree_sum((unsigned int *)param_1[1]);
 local_c = iVar2 + local_c;
 iVar2 = binary_tree_sum((unsigned int *)param_1[2]);
 local_c = local_c + iVar2;
 }
 return local_c;
}

// Function: binary_tree @ 0x12810
unsigned int binary_tree(unsigned int *param_1)
{
 return binary_tree_sum(param_1);
}

// Function: graph_traverse @ 0x12840
int graph_traverse(int param_1)
{
 int *local_10;
 int local_c;
 int local_8;
 local_8 = 0;
 for (local_c = 0; local_c < *(int *)(param_1 + 0x28); local_c = local_c + 1) {
 for (local_10 = *(int **)(param_1 + local_c * 4); local_10 != (int *)0x0;
 local_10 = (int *)local_10[1]) {
 local_8 = *local_10 + local_8;
 }
 }
 return local_8;
}

// Function: test_composite_types @ 0x128b0
void test_composite_types(void)
{
 unsigned int uVar1;
 unsigned int *local_124;
 unsigned int local_120;
 unsigned int local_11c;
 unsigned int local_118;
 unsigned int local_114;
 unsigned int local_110;
 unsigned int local_10c;
 unsigned int local_108;
 unsigned int local_104;
 unsigned int local_100;
 unsigned int local_fc;
 unsigned int local_f4;
 unsigned int local_f0;
 unsigned int local_ec;
 unsigned int local_e8;
 unsigned int local_e4;
 unsigned int local_dc;
 unsigned int *local_d8;
 unsigned int local_d4;
 unsigned int local_d0;
 unsigned int local_cc;
 unsigned int *local_c8;
 unsigned int local_c4;
 unsigned int *local_c0;
 unsigned int local_bc;
 unsigned int *local_b8;
 unsigned int local_b4;
 unsigned int local_b0;
 unsigned int local_ac;
 void *local_a8;
 unsigned int local_a4;
 unsigned int local_a0;
 unsigned int local_9c;
 unsigned int local_94 [2];
 unsigned int local_8c;
 unsigned int local_88;
 unsigned int local_84;
 unsigned int *local_80;
 unsigned int local_7c;
 unsigned int local_78;
 char local_74 [48];
 char local_44 [24];
 char local_2c [24];
 unsigned int local_14;
 unsigned int local_10;
 unsigned int local_c;
 printf(&DAT_0001354f);
 local_14 = 1;
 local_10 = 2;
 local_c = 3;
 uVar1 = struct_simple(&local_14);
 printf("CMP-L2-01 (struct_simple): %d\n",uVar1);
 memcpy(local_2c,&DAT_000130b8,0x18);
 uVar1 = struct_array(local_2c,2);
 printf("CMP-L2-02 (struct_array): %d\n",uVar1);
 memcpy(local_44,&DAT_000130d0,0x14);
 uVar1 = struct_nested(local_44);
 printf("CMP-L2-03 (struct_nested): %d\n",uVar1);
 memcpy(local_74,&DAT_000130e4,0x30);
 uVar1 = struct_deep(local_74);
 printf("CMP-L2-04 (struct_deep): %d\n",uVar1);
 local_7c = 0x14;
 local_78 = 0;
 local_84 = 10;
 local_80 = &local_7c;
 uVar1 = struct_with_ptr(&local_84);
 printf("CMP-L2-05 (struct_with_ptr): %d\n",uVar1);
 local_8c = 0x191d;
 local_88 = 0;
 uVar1 = struct_bitfields(&local_8c);
 printf("CMP-L2-06 (struct_bitfields): %d\n",uVar1);
 local_94[0] = 0x12345678;
 uVar1 = union_type(local_94,0);
 printf("CMP-L2-07 (union_type): %d\n",uVar1);
 local_a4 = 10;
 local_a0 = 0x14;
 local_9c = 0x1e;
 uVar1 = union_array(&local_a4,3);
 printf("CMP-L2-08 (union_array): %d\n",uVar1);
 uVar1 = enum_type(1);
 printf("CMP-L2-09 (enum_type): %d\n",uVar1);
 uVar1 = enum_switch(2);
 printf("CMP-L2-10 (enum_switch): %d\n",uVar1);
 local_ac = 10;
 local_a8 = process_int;
 struct_func_ptr(&local_ac);
 printf("CMP-L2-11 (struct_func_ptr): %d\n",(int)local_ac);
 local_c4 = 10;
 local_c0 = &local_bc;
 local_bc = 0x14;
 local_b8 = &local_b4;
 local_b4 = 0x1e;
 local_b0 = 0;
 uVar1 = linked_list(&local_c4);
 printf("CMP-L2-12 (linked_list): %d\n",uVar1);
 local_dc = 10;
 local_d4 = 0;
 local_d0 = 0x14;
 local_cc = 0;
 local_c8 = &local_dc;
 local_d8 = &local_d0;
 uVar1 = doubly_linked_list(&local_dc);
 printf("CMP-L2-13 (doubly_linked_list): %d\n",uVar1);
 local_ec = 100;
 local_e8 = 0;
 local_e4 = 0;
 uVar1 = binary_tree(&local_ec);
 printf("CMP-L2-14 (binary_tree): %d\n",uVar1);
 local_f4 = 1;
 local_f0 = 0;
 local_100 = 0;
 local_104 = 0;
 local_108 = 0;
 local_10c = 0;
 local_110 = 0;
 local_114 = 0;
 local_118 = 0;
 local_11c = 0;
 local_120 = 0;
 local_fc = 2;
 local_124 = &local_f4;
 uVar1 = graph_traverse(&local_124);
 printf("CMP-L2-15 (graph_traverse): %d\n",uVar1);
 return;
}

// Function: main @ 0x12dd0
void main(void)
{
 test_data_types_l1();
 test_array_types();
 test_pointer_types();
 test_composite_types();
 return;
}

// Function: __do_global_ctors_aux @ 0x12e20
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x12e6c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

