// Decompiled by BinaryAI
// SHA256: 724d39b9c4ed8e54d6d63c1e2cbba9715d99216763238c73848b037883c6a286

// Global variable declarations
unsigned int global_counter = 0;
int counter_1 = 0;
int extern_global_var = 0;
char const_string[] = "HelloWorld";
unsigned int file_scope_static = 0;
unsigned int global_array[10] = {0};
unsigned int (*global_func_ptr)(int) = (unsigned int (*)(int))0;
extern int extern_function(int param_1);

// Standard library function declarations
// These are the real functions - the PLT stubs will call through these
void* malloc(unsigned int size);
void free(void* ptr);
int fprintf(int fd, const char* fmt, ...);
void* calloc(unsigned int nmemb, unsigned int size);
void* realloc(void* ptr, unsigned int new_size);
void* memmove(void* dest, void* src, unsigned int n);
int memcmp(const void* s1, const void* s2, unsigned int n);
void* memset(void* s, int c, unsigned int n);
void __stack_chk_fail_local(void);
void exit(int status);
void abort(void);
void __x86_get_pc_thunk_di(void);
void _exit(int status);

// PLT function pointer types - these are function pointers resolved at runtime
#ifndef NULL
#define NULL ((void*)0)
#endif

typedef void* (*plt_malloc_t)(unsigned int);
typedef void (*plt_free_t)(void*);
typedef int (*plt_fprintf_t)(int, const char*, ...);
typedef void* (*plt_calloc_t)(unsigned int, unsigned int);
typedef void* (*plt_realloc_t)(void*, unsigned int);
typedef void* (*plt_memmove_t)(void*, void*, unsigned int);
typedef int (*plt_memcmp_t)(const void*, const void*, unsigned int);
typedef void* (*plt_memset_t)(void*, int, unsigned int);
typedef void (*plt_exit_t)(int);
typedef void (*plt_abort_t)(void);
typedef unsigned int (*plt_double_value_t)(int);
typedef unsigned int (*func_ptr_t)(int);

// PLT function declarations - these are resolved at runtime via GOT
extern void* FUN_000111e0(unsigned int);
extern void FUN_00011170(void*);
extern int FUN_00011220(int fd, const char* fmt, ...);
extern void* FUN_000111d0(void* ptr, unsigned int new_size);
extern void* FUN_00011160(void* dest, void* src, unsigned int n);
extern int FUN_00011190(const void* s1, const void* s2, unsigned int n);
extern void FUN_000111a0(void);
extern unsigned int FUN_000111b0(int x);
extern unsigned int FUN_000111c0(int x);
extern void FUN_00011140(int status);
extern unsigned int FUN_00011150(void);
extern unsigned int FUN_00011200(void);
extern unsigned int FUN_00011230(int x);
extern void FUN_000111f0(void* s, int c, unsigned int n);
extern void FUN_00011210(void* s, int c, unsigned int n);
extern void FUN_00011170(void* ptr);

// Note: FUN_000111f0, FUN_00011240, FUN_00011210 are declared as extern functions above
// They are PLT stubs that will be resolved at link time

// Data section labels
const char UNK_000115b3[] = "";
const char UNK_0001165b[] = "";
const char DAT_00013008[] = "";
const char DAT_000130ea[] = "";
const char DAT_0001319c[] = "";
const char DAT_000131ac[] = "";
const char DAT_000133bc[] = "";
const char DAT_000133e4[] = "";
const char DAT_00013428[] = "";
const char DAT_00013650[] = "";

// Function: _init @ 0x11000
int _init(void *ctx)
{
 int iVar1;
 __gmon_start__();
 frame_dummy();
 iVar1 = __do_global_ctors_aux();
 return iVar1;
}

// Function: FUN_00011030 @ 0x11030
// This is likely a NULL function pointer call - placeholder
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011140 @ 0x11140
// PLT stub for exit
void FUN_00011140(void* status)
{
 exit((int)status);
}

// Function: FUN_00011150 @ 0x11150  
// PLT stub - calls function pointer at GOT+0xc
void FUN_00011150(void)
{
 return;
}

// Note: FUN_00011160 and FUN_00011170 are declared as function pointers in the GOT/PLT section
// They are called through those pointers, not defined here

// Function: FUN_00011180 @ 0x11180
// PLT stub for memcpy
void* FUN_00011180(void* dest, void* src, unsigned int n)
{
 void* result;
 __asm__ ("mov %%ebx, %0" : "=r" (result));
 result = (void*)((unsigned int)result + 0x18);
 return (*(void* (*)(void*, void*, unsigned int))result)(dest, src, n);
}

// Function: FUN_00011190 @ 0x11190
// PLT stub for memcmp
int FUN_00011190(const void* s1, const void* s2, unsigned int n)
{
 return memcmp(s1, s2, n);
}

// Function: FUN_000111a0 @ 0x111a0
// PLT stub for abort
void FUN_000111a0(void)
{
 abort();
}

// Function: FUN_000111b0 @ 0x111b0
// PLT stub for double_value
unsigned int FUN_000111b0(int x)
{
 return (unsigned int)double_value((int)x);
}

// Function: FUN_000111c0 @ 0x111c0
// PLT stub for double_value (alternate)
unsigned int FUN_000111c0(int x)
{
 return (unsigned int)double_value((int)x);
}

// Function: FUN_000111d0 @ 0x111d0
// PLT stub for realloc
void* FUN_000111d0(void* ptr, unsigned int new_size)
{
 return FUN_000111d0_ptr(ptr, new_size);
}
static void* (*FUN_000111d0_ptr)(void*, unsigned int) = NULL;

// Function: FUN_000111e0 @ 0x111e0
// PLT stub for malloc - takes size_t, returns void*
void* FUN_000111e0(unsigned int size)
{
 void* result;
 __asm__ ("mov %%ebx, %0" : "=r" (result));
 result = (void*)((unsigned int)result + 0x30);
 return *(void**)(result)();
}

// Note: FUN_000111f0 is a PLT function pointer for memset, defined below

// Function: FUN_00011200 @ 0x11200
void FUN_00011200(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x38))();
 return;
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x3c))();
 return;
}

// Function: FUN_00011220 @ 0x11220
// PLT stub for fprintf
int FUN_00011220(int fd, const char* fmt, ...)
{
 int result;
 __asm__ ("mov %%ebx, %0" : "=r" (result));
 result = (int)((unsigned int)result + 0x40);
 return (*(int (*)(int, const char*, ...))result)(fd, fmt);
}

// Function: FUN_00011230 @ 0x11230
void FUN_00011230(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x44))();
 return;
}

// Function: FUN_00011240 @ 0x11240
void FUN_00011240(void)
{
 int unaff_EBX;
 (**(void **)(unaff_EBX + 0x48))();
 return;
}

// Function: main @ 0x11250
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}

// Function: _start @ 0x11280
void _start(unsigned int param_1, unsigned int param_2)
{
 char auStack_4 [4];
 FUN_00011150();
 while(1); // infinite loop - entry point should never return
}

// Function: __i686.get_pc_thunk.bx @ 0x112ac
void __i686_get_pc_thunk_bx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.bx @ 0x112b0
void __x86_get_pc_thunk_bx(void)
{
 return;
}

// Function: deregister_tm_clones @ 0x112c0
void deregister_tm_clones(void)
{
 return;
}

// Function: register_tm_clones @ 0x11300
void register_tm_clones(void)
{
 return;
}

// Function: __do_global_dtors_aux @ 0x11350
void __do_global_dtors_aux(void)
{
 unsigned int uVar1;
 int unaff_EDI;
 __x86_get_pc_thunk_di();
 if (*(char *)(unaff_EDI + 0x4cb7) == '\0') {
 if (*(int *)(unaff_EDI + 0x4c93) != 0) {
 FUN_00011140(*(unsigned int *)(unaff_EDI + 0x4ca7));
 }
 uVar1 = *(unsigned int *)(unaff_EDI + 0x4cbb);
 while (uVar1 < ((unaff_EDI + 0x4b67) - (unaff_EDI + 0x4b63) >> 2) - 1U) {
 *(unsigned int *)(unaff_EDI + 0x4cbb) = uVar1 + 1;
 (**(void **)(unaff_EDI + 0x4b63 + (uVar1 + 1) * 4))();
 uVar1 = *(unsigned int *)(unaff_EDI + 0x4cbb);
 }
 deregister_tm_clones();
 *(char *)(unaff_EDI + 0x4cb7) = 1;
 }
 return;
}

// Function: __x86.get_pc_thunk.dx @ 0x113e9
void __x86_get_pc_thunk_dx(void)
{
 return;
}

// Function: __x86.get_pc_thunk.di @ 0x113ed
void __x86_get_pc_thunk_di(void)
{
 return;
}

// Function: double_value @ 0x11400
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: local_vars @ 0x11410
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x11420
unsigned int local_array(int param_1)
{
 int *piVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_38 [10];
 int local_10 [3];
 iVar2 = 0;
 local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = local_38;
 do {
 *piVar1 = iVar2;
 piVar1 = piVar1 + 1;
 iVar2 = iVar2 + param_1;
 } while (piVar1 != local_10);
 if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_38[5];
 }
 __stack_chk_fail_local();
}

// Function: local_struct @ 0x11470
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x11480
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x114a0
int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Function: large_stack_frame @ 0x114b0
int large_stack_frame(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char local_810 [2048];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 local_810[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)local_810[1024];
 }
 __stack_chk_fail_local();
}

// Function: vla_stack @ 0x11510
unsigned int vla_stack(int param_1)
{
 int iVar1;
 char *puVar2;
 int iVar3;
 unsigned int uVar4;
 unsigned int uVar5;
 char *puVar6;
 char *puVar8;
 int in_GS_OFFSET;
 char auStack_1c [12];
 int local_10;
 char *puVar7;
 puVar8 = auStack_1c;
 puVar6 = auStack_1c;
 puVar7 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 - 1U < 1000) {
 uVar5 = param_1 * 4 + 0xf;
 puVar2 = auStack_1c;
 while (puVar7 != auStack_1c + -(uVar5 & 0xfffff000)) {
 puVar6 = puVar2 + -0x1000;
 *(unsigned int *)(puVar2 + -4) = *(unsigned int *)(puVar2 + -4);
 puVar7 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar5 = uVar5 & 0xff0;
 iVar1 = -uVar5;
 puVar8 = puVar6 + iVar1;
 if (uVar5 != 0) {
 *(unsigned int *)(puVar6 + -4) = *(unsigned int *)(puVar6 + -4);
 }
 iVar3 = 0;
 do {
 *(int *)(puVar6 + iVar3 * 2 + iVar1) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != param_1 * 2);
 uVar4 = *(unsigned int *)(puVar6 + (param_1 >> 1) * 4 + iVar1);
 }
 else {
 uVar4 = 0xffffffff;
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(char **)(puVar8 + -4) = &UNK_000115b3;
 __stack_chk_fail_local();
 }
 return uVar4;
}

// Function: alloca_usage @ 0x115c0
unsigned int alloca_usage(int param_1)
{
 int iVar1;
 char *puVar2;
 int iVar3;
 unsigned int uVar4;
 unsigned int uVar5;
 char *puVar6;
 char *puVar8;
 int in_GS_OFFSET;
 char auStack_1c [12];
 int local_10;
 char *puVar7;
 puVar8 = auStack_1c;
 puVar6 = auStack_1c;
 puVar7 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 < 1) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar5 = param_1 * 4 + 0x1b;
 puVar2 = auStack_1c;
 while (puVar7 != auStack_1c + -(uVar5 & 0xfffff000)) {
 puVar6 = puVar2 + -0x1000;
 *(unsigned int *)(puVar2 + -4) = *(unsigned int *)(puVar2 + -4);
 puVar7 = puVar2 + -0x1000;
 puVar2 = puVar2 + -0x1000;
 }
 uVar5 = uVar5 & 0xff0;
 iVar1 = -uVar5;
 puVar8 = puVar6 + iVar1;
 if (uVar5 != 0) {
 *(unsigned int *)(puVar6 + -4) = *(unsigned int *)(puVar6 + -4);
 }
 iVar3 = 0;
 do {
 *(int *)(((unsigned int)(puVar6 + iVar1 + 0xf) & 0xfffffff0) + iVar3 * 4) = iVar3 * 3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 uVar4 = *(unsigned int *)(((unsigned int)(puVar6 + iVar1 + 0xf) & 0xfffffff0) + (param_1 >> 1) * 4);
 }
 if (local_10 != *(int *)(in_GS_OFFSET + 0x14)) {
 *(char **)(puVar8 + -4) = &UNK_0001165b;
 __stack_chk_fail_local();
 }
 return uVar4;
}

// Function: stack_alias @ 0x11660
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x11670
void test_stack_memory(void)
{
 unsigned int uVar1;
 FUN_000111f0(&DAT_00013008);
 FUN_00011220(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 FUN_00011220(1,"MEM-L1-02 (local_array): %d\n",10);
 FUN_00011220(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 FUN_00011220(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 FUN_00011220(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 FUN_00011220(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 FUN_00011220(1,"MEM-L2-02 (vla_stack): %d\n",10);
 uVar1 = alloca_usage(10);
 FUN_00011220(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 FUN_00011220(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x11750
unsigned int heap_basic(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 iVar1 = FUN_000111e0(param_1 * 4);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar2 = 0;
 do {
 *(int *)(iVar1 + iVar2 * 2) = iVar2;
 iVar2 = iVar2 + 2;
 } while (iVar2 != param_1 * 2);
 }
 uVar3 = *(unsigned int *)(iVar1 + (param_1 / 2) * 4);
 FUN_00011170(iVar1);
 }
 return uVar3;
}

// Function: heap_calloc @ 0x117c0
int heap_calloc(int param_1)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 piVar1 = (int *)FUN_00011240(param_1,4);
 if (piVar1 == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 if (param_1 < 1) {
 iVar3 = 0;
 }
 else {
 iVar3 = 0;
 piVar2 = piVar1;
 do {
 iVar3 = iVar3 + *piVar2;
 piVar2 = piVar2 + 1;
 } while (piVar2 != piVar1 + param_1);
 }
 FUN_00011170(piVar1);
 }
 return iVar3;
}

// Function: heap_realloc @ 0x11830
unsigned int heap_realloc(void)
{
 unsigned int *puVar1;
 int iVar2;
 unsigned int uVar3;
 puVar1 = (unsigned int *)FUN_000111e0(0x14);
 if (puVar1 == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 *puVar1 = 1;
 puVar1[1] = 2;
 puVar1[2] = 3;
 puVar1[3] = 4;
 puVar1[4] = 5;
 iVar2 = FUN_000111d0(puVar1,0x28);
 if (iVar2 == 0) {
 uVar3 = 0xfffffffe;
 FUN_00011170(puVar1);
 }
 else {
 uVar3 = 0x32;
 if (*(int *)(iVar2 + 8) != 3) {
 uVar3 = 0xfffffffd;
 }
 FUN_00011170(iVar2);
 }
 }
 return uVar3;
}

// Function: heap_array @ 0x118d0
unsigned int heap_array(int param_1)
{
 int iVar1;
 int iVar2;
 unsigned int uVar3;
 iVar1 = FUN_000111e0(param_1 * 4);
 if (iVar1 == 0) {
 uVar3 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar2 = 0;
 do {
 *(int *)(iVar1 + iVar2 * 4) = iVar2 * 3;
 iVar2 = iVar2 + 1;
 } while (param_1 != iVar2);
 }
 uVar3 = *(unsigned int *)(iVar1 + (param_1 / 2) * 4);
 FUN_00011170(iVar1);
 }
 return uVar3;
}

// Function: heap_struct @ 0x11940
int heap_struct(int param_1)
{
 int iVar1;
 iVar1 = FUN_000111e0(8);
 if (iVar1 == 0) {
 param_1 = -1;
 }
 else {
 param_1 = param_1 * 3;
 FUN_00011170(iVar1);
 }
 return param_1;
}

// Function: heap_nested @ 0x11990
unsigned int heap_nested(unsigned int *param_1)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 unsigned int uVar3;
 puVar1 = (unsigned int *)FUN_000111e0(8);
 *param_1 = puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 uVar3 = 0xffffffff;
 }
 else {
 *puVar1 = 10;
 puVar2 = (unsigned int *)FUN_000111e0(8);
 puVar1[1] = puVar2;
 if (puVar2 == (unsigned int *)0x0) {
 FUN_00011170(puVar1);
 uVar3 = 0xfffffffe;
 }
 else {
 *puVar2 = 0x14;
 puVar2[1] = 0;
 uVar3 = 0;
 }
 }
 return uVar3;
}

// Function: linked_list_heap @ 0x11a10
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int iVar4;
 int *piVar5;
 iVar4 = 0;
 piVar1 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 piVar2 = (int *)FUN_000111e0(8);
 if (piVar2 == (int *)0x0) {
 while (piVar3 != (int *)0x0) {
 piVar1 = (int *)piVar3[1];
 FUN_00011170(piVar3);
 piVar3 = piVar1;
 }
 return -1;
 }
 *piVar2 = iVar4;
 piVar2[1] = 0;
 piVar5 = piVar2;
 if (piVar3 != (int *)0x0) {
 piVar1[1] = (int)piVar2;
 piVar5 = piVar3;
 }
 iVar4 = iVar4 + 10;
 piVar1 = piVar2;
 piVar3 = piVar5;
 } while (iVar4 != 0x32);
 iVar4 = 0;
 do {
 iVar4 = iVar4 + *piVar3;
 piVar3 = (int *)piVar3[1];
 } while (piVar3 != (int *)0x0);
 do {
 piVar3 = (int *)piVar5[1];
 FUN_00011170(piVar5);
 piVar5 = piVar3;
 } while (piVar3 != (int *)0x0);
 return iVar4;
}

// Function: create_tree_node @ 0x11ac0
void create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)FUN_000111e0(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 puVar1[1] = 0;
 puVar1[2] = 0;
 *puVar1 = param_1;
 }
 return;
}

// Function: tree_heap_traversal @ 0x11b00
unsigned int tree_heap_traversal(void)
{
 int iVar1;
 int iVar2;
 int iVar3;
 unsigned int uVar4;
 iVar1 = FUN_000111e0(0xc);
 if (iVar1 == 0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar2 = FUN_000111e0(0xc);
 if (iVar2 == 0) {
 iVar2 = FUN_000111e0(0xc);
 if (iVar2 != 0) {
 FUN_00011170(iVar2);
 }
 }
 else {
 iVar3 = FUN_000111e0(0xc);
 if (iVar3 != 0) {
 FUN_00011170(iVar2);
 FUN_00011170(iVar3);
 FUN_00011170(iVar1);
 return 0x3c;
 }
 FUN_00011170(iVar2);
 }
 FUN_00011170(iVar1);
 uVar4 = 0xfffffffe;
 }
 return uVar4;
}

// Function: memory_leak @ 0x11bd0
unsigned int memory_leak(int param_1)
{
 int iVar1;
 unsigned int uVar2;
 int iVar3;
 iVar1 = FUN_000111e0(param_1 * 4);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 if (0 < param_1) {
 iVar3 = 0;
 do {
 *(int *)(iVar1 + iVar3 * 4) = iVar3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 }
 uVar2 = *(unsigned int *)(iVar1 + (param_1 / 2) * 4);
 }
 return uVar2;
}

// Function: dangling_pointer @ 0x11c30
unsigned int dangling_pointer(void)
{
 unsigned int *puVar1;
 unsigned int uVar2;
 puVar1 = (unsigned int *)FUN_000111e0(4);
 if (puVar1 == (unsigned int *)0x0) {
 uVar2 = 0xffffffff;
 }
 else {
 FUN_00011220(1,"value before free: %d\n",0x2a);
 FUN_00011170(puVar1);
 uVar2 = *puVar1;
 }
 return uVar2;
}

// Function: double_free @ 0x11c80
unsigned int double_free(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 if (param_1 == (unsigned int *)0x0) {
 iVar1 = FUN_000111e0(4);
 if (iVar1 != 0) {
 FUN_00011170(iVar1);
 FUN_00011170(iVar1);
 return 0xfffffffe;
 }
 uVar2 = 0xffffffff;
 }
 else {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: heap_overflow @ 0x11ce0
int heap_overflow(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 piVar1 = (int *)FUN_000111e0(0x28);
 if (piVar1 == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 piVar2 = piVar1;
 do {
 *piVar2 = iVar3;
 iVar3 = iVar3 + 100;
 piVar2 = piVar2 + 1;
 } while (iVar3 != 0x44c);
 iVar3 = *piVar1;
 FUN_00011170(piVar1);
 }
 return iVar3;
}

// Function: test_heap_memory @ 0x11d40
void test_heap_memory(void)
{
 unsigned int *puVar1;
 unsigned int *puVar2;
 int iVar3;
 unsigned int uVar4;
 unsigned int **ppuVar5;
 int in_GS_OFFSET;
 unsigned int *local_2c;
 char *pcStack_28;
 unsigned int uStack_24;
 unsigned int *puStack_20;
 char auStack_1c [8];
 unsigned int local_14;
 unsigned int local_10;
 unsigned int uStack_c;
 uStack_c = 0x11d4b;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 local_2c = (unsigned int *)&DAT_000130ea;
 FUN_000111f0(&DAT_000130ea, 0, 0x28);
 local_2c = (unsigned int *)0x28;
 local_2c = (unsigned int *)FUN_000111e0(0x28);
 if (local_2c == (unsigned int *)0x0) {
 uStack_24 = 0xffffffff;
 }
 else {
 iVar3 = 0;
 do {
 *(int *)((int)local_2c + iVar3 * 2) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != 0x14);
 uStack_24 = local_2c[5];
 FUN_00011170(local_2c);
 }
 pcStack_28 = "HEAP-L2-01 (heap_basic): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 pcStack_28 = (char *)0x4;
 local_2c = (unsigned int *)0x5;
 local_2c = (unsigned int *)FUN_00011240(5,4);
 if (local_2c == (unsigned int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = 0;
 puVar2 = local_2c;
 do {
 iVar3 = iVar3 + *puVar2;
 puVar2 = puVar2 + 1;
 } while (puVar2 != local_2c + 5);
 FUN_00011170(local_2c);
 }
 pcStack_28 = "HEAP-L2-02 (heap_calloc): %d\n";
 local_2c = (unsigned int *)0x1;
 uStack_24 = iVar3;
 FUN_00011220(1,pcStack_28,uStack_24);
 uStack_24 = heap_realloc();
 pcStack_28 = "HEAP-L2-03 (heap_realloc): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = (unsigned int *)0x28;
 local_2c = (unsigned int *)FUN_000111e0(0x28);
 if (local_2c == (unsigned int *)0x0) {
 uVar4 = 0xffffffff;
 }
 else {
 iVar3 = 0;
 do {
 local_2c[iVar3] = iVar3 * 3;
 iVar3 = iVar3 + 1;
 } while (iVar3 != 10);
 uVar4 = local_2c[5];
 FUN_00011170(local_2c);
 }
 pcStack_28 = "HEAP-L2-04 (heap_array): %d\n";
 local_2c = (unsigned int *)0x1;
 uStack_24 = uVar4;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = (unsigned int *)0x8;
 local_2c = (unsigned int *)FUN_000111e0(0x8);
 if (local_2c == (unsigned int *)0x0) {
 uStack_24 = 0xffffffff;
 }
 else {
 FUN_00011170(local_2c);
 uStack_24 = 0xf;
 }
 ppuVar5 = (unsigned int **)auStack_1c;
 pcStack_28 = "HEAP-L2-05 (heap_struct): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = (unsigned int *)0x8;
 puStack_20 = (unsigned int *)FUN_000111e0(0x8);
 if (puStack_20 == (unsigned int *)0x0) {
 pcStack_28 = "HEAP-L2-06 (heap_nested): %d\n";
 uStack_24 = 0xffffffff;
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 }
 else {
 local_2c = (unsigned int *)0x8;
 puVar1 = (unsigned int *)FUN_000111e0(0x8);
 puStack_20[1] = (unsigned int)puVar1;
 if (puVar1 == (unsigned int *)0x0) {
 local_2c = puStack_20;
 FUN_00011170(local_2c);
 uStack_24 = 0xfffffffe;
 }
 else {
 *puVar1 = 0x14;
 puVar1[1] = 0;
 uStack_24 = 0;
 }
 pcStack_28 = "HEAP-L2-06 (heap_nested): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = (unsigned int *)puStack_20[1];
 FUN_00011170(local_2c);
 local_2c = puStack_20;
 FUN_00011170(local_2c);
 }
 puStack_20 = (unsigned int *)0x11f04;
 uStack_24 = linked_list_heap();
 pcStack_28 = "HEAP-L3-01 (linked_list_heap): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 uStack_24 = tree_heap_traversal();
 pcStack_28 = "HEAP-L3-02 (tree_heap_traversal): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = (unsigned int *)0x14;
 puVar1 = (unsigned int *)FUN_000111e0(0x14);
 if (puVar1 == (unsigned int *)0x0) {
 uStack_24 = 0xffffffff;
 }
 else {
 *puVar1 = 0;
 puVar1[1] = 1;
 puVar1[2] = 2;
 puVar1[3] = 3;
 puVar1[4] = 4;
 uStack_24 = 2;
 }
 pcStack_28 = "HEAP-L3-03 (memory_leak): %d\n";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 pcStack_28 = "HEAP-L3-04 (dangling_pointer): ";
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28);
 local_2c = (unsigned int *)FUN_00011230(1);
 if (local_2c == (unsigned int *)0x0) {
 local_2c = (unsigned int *)0x4;
 puVar2 = (unsigned int *)FUN_000111e0(4);
 if (puVar2 == (unsigned int *)0x0) {
 uStack_24 = 0xffffffff;
 }
 else {
 pcStack_28 = "value before free: %d\n";
 uStack_24 = 0x2a;
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = puVar2;
 FUN_00011170(local_2c);
 uStack_24 = *puVar2;
 }
 pcStack_28 = &DAT_0001319c;
 ppuVar5 = &local_2c;
 local_2c = (unsigned int *)0x1;
 FUN_00011220(1,pcStack_28,uStack_24);
 local_2c = (unsigned int *)0x0;
 local_14 = FUN_00011200();
 }
 else {
 if ((int)local_2c < 1) {
 local_2c = (unsigned int *)&DAT_000131ac;
 FUN_000111b0();
 goto LAB_00011ff2;
 }
 uStack_24 = 0;
 pcStack_28 = (char *)&local_14;
 FUN_000111c0();
 uVar4 = local_14 & 0x7f;
 ppuVar5 = (unsigned int **)auStack_1c;
 if (uVar4 != 0) {
 ppuVar5 = (unsigned int **)auStack_1c;
 if ('\x01' < (char)((char)uVar4 + '\x01')) {
 pcStack_28 = &DAT_000133e4;
 local_2c = (unsigned int *)0x1;
 uStack_24 = uVar4;
 FUN_00011220(1,pcStack_28,uStack_24);
 ppuVar5 = (unsigned int **)auStack_1c;
 }
 goto LAB_00011ff2;
 }
 }
 *(unsigned int *)((int)ppuVar5 + -8) = local_14 >> 8 & 0xff;
 *(char **)((int)ppuVar5 + -0xc) = &DAT_000133bc;
 *(unsigned int *)((int)ppuVar5 + -0x10) = 1;
 *(unsigned int *)((int)ppuVar5 + -0x14) = 0x1207d;
 FUN_00011220(1,pcStack_28,uStack_24);
LAB_00011ff2:
 if (*(int *)((int)ppuVar5 + 0xc) == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 *(unsigned int *)((int)ppuVar5 + -4) = 0x12092;
 __stack_chk_fail_local();
}

// Function: global_var_access @ 0x120f0
void global_var_access(void)
{
 global_counter = global_counter + 1;
 return;
}

// Function: global_var_read @ 0x12110
int global_var_read(void)
{
 return global_counter * 2;
}

// Function: global_array_access @ 0x12130
unsigned int global_array_access(unsigned int param_1)
{
 if (param_1 < 10) {
 return *(unsigned int *)(global_array + param_1 * 4);
 }
 return 0xffffffff;
}

// Function: static_local @ 0x12160
void static_local(int param_1)
{
 int iVar1;
 iVar1 = 0;
 if (param_1 == 0) {
 iVar1 = counter_1 + 1;
 }
 counter_1 = iVar1;
 return;
}

// Function: call_static_func @ 0x12190
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x121a0
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x121c0
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x121e0
int read_const_data(void)
{
 return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x12200
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x12210
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x12220
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x12230
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x12250
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x12270
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x12290
unsigned int call_global_callback(void)
{
 unsigned int uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = (*global_func_ptr)();
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x122c0
unsigned int global_heap_store(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x122e0
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x122f0
int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x12300
unsigned int init_order_test(void)
{
 return 0x14;
}

// Function: test_static_global @ 0x12310
void test_static_global(void)
{
 unsigned int uVar1;
 FUN_000111f0(&DAT_00013428);
 global_counter = global_counter + 1;
 FUN_00011220(1,"STM-L1-01 (global_var_access): %d\n",global_counter);
 FUN_00011220(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 FUN_00011220(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 FUN_00011220(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 FUN_00011220(1,"STM-L1-03 (static_local): %d\n",counter_1);
 FUN_00011220(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 FUN_00011220(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 uVar1 = extern_function(5);
 FUN_00011220(1,"STM-L2-02 (call_extern_func): %d\n",uVar1);
 FUN_00011220(1,"STM-L2-03 (read_const_data): %d\n",(char)const_string[4] + 0x2a);
 FUN_00011220(1,"STM-L2-04 (access_bss_var): %d\n",0);
 FUN_00011220(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 FUN_00011220(1,"STM-L2-05 (global_struct_access): %d\n",0x1e);
 file_scope_static = 0x32;
 FUN_00011220(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 FUN_00011220(1,"STM-L2-07 (global_func_ptr): %d\n",10);
 FUN_00011220(1,"STM-L2-08 (global_heap_store): %d\n",100);
 FUN_00011220(1,"STM-L2-09 (static_complex_init): %d\n",0xf);
 FUN_00011220(1,"STM-L3-01 (tls_access): %d\n",0x14);
 FUN_00011220(1,"STM-L3-02 (init_order_test): %d\n",0x14);
 return;
}

// Function: memop_memset @ 0x124f0
unsigned int memop_memset(unsigned char *param_1,int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 if ((param_1 == (unsigned char *)0x0) || (param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011210(param_1,param_3,param_2);
 uVar1 = (unsigned int)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x12540
unsigned int memop_memcpy(int param_1,int param_2,unsigned int param_3)
{
 unsigned int uVar1;
 if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011180(param_1,param_2,param_3,0x12550);
 uVar1 = *(unsigned int *)(param_1 + -4 + (param_3 & 0xfffffffc));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x125a0
int memop_memmove(int param_1,unsigned int param_2)
{
 int iVar1;
 if ((param_1 == 0) || (param_2 < 2)) {
 iVar1 = -1;
 }
 else {
 FUN_00011160(param_1 + 1,param_1,param_2 - 1);
 iVar1 = (int)*(char *)(param_1 + 1);
 }
 return iVar1;
}

// Function: memop_memcmp @ 0x125f0
int memop_memcmp(int param_1,int param_2,int param_3)
{
 int iVar1;
 int iVar2;
 if ((param_2 != 0 && param_3 != 0) && (param_1 != 0)) {
 iVar1 = FUN_00011190(param_1,param_2,param_3,0x12600);
 iVar2 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 return iVar2;
 }
 return 0;
}

// Function: memop_bzero @ 0x12660
unsigned int memop_bzero(unsigned char *param_1,unsigned int param_2)
{
 unsigned int uVar1;
 if (param_1 == (unsigned char *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011210(param_1,0,param_2);
 uVar1 = (unsigned int)*param_1;
 }
 return uVar1;
}

// Function: memop_bcopy @ 0x126a0
unsigned int memop_bcopy(int param_1,unsigned char *param_2,int param_3)
{
 unsigned int uVar1;
 __x86_get_pc_thunk_di();
 if ((param_2 == (unsigned char *)0x0 || param_3 == 0) || (param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011160(param_2,param_1,param_3);
 uVar1 = (unsigned int)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x12700
unsigned int memop_unaligned_access(int param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x12720
int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x12740
void test_memory_op_functions(void)
{
 int iVar1;
 int iVar2;
 int in_GS_OFFSET;
 unsigned int local_140;
 unsigned int local_13c;
 unsigned int local_138;
 unsigned int local_134;
 unsigned int local_130;
 unsigned int local_12c;
 unsigned int local_125;
 unsigned int local_121;
 unsigned short local_11d;
 unsigned int local_11b;
 unsigned int local_117;
 unsigned short local_113;
 char local_111;
 unsigned int local_110;
 unsigned int local_10c;
 unsigned short local_108;
 int local_10;
 unsigned int uStack_8;
 uStack_8 = 0x1274a;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000111f0(&DAT_00013650);
 local_110 = 0x41414141;
 local_108 = 0x4141;
 local_10c = 0x41414141;
 FUN_00011220(1,"MEMOP-L2-01: %d\n",0x41);
 FUN_00011220(1,"MEMOP-L2-02: %d\n",0x32);
 local_111 = 0;
 local_113 = 0x646c;
 local_11b = 0x6c6c6548;
 local_117 = 0x726f576f;
 FUN_00011160((int)&local_11b + 1,&local_11b,9);
 FUN_00011220(1,"MEMOP-L2-03: %c\n",0x48);
 local_140 = 1;
 local_13c = 2;
 local_138 = 3;
 local_134 = 1;
 local_130 = 2;
 local_12c = 4;
 iVar1 = FUN_00011190(&local_140,&local_134,0xc);
 iVar2 = -(unsigned int)(iVar1 != 0);
 if (0 < iVar1) {
 iVar2 = 1;
 }
 FUN_00011220(1,"MEMOP-L2-04: %d\n",iVar2);
 local_125 = 0;
 local_11d = 0;
 local_121 = 0;
 FUN_00011220(1,"MEMOP-L2-05: %d\n",0);
 FUN_00011220(1,"MEMOP-L2-06: %d\n",1);
 FUN_00011220(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 LOCK();
 UNLOCK();
 FUN_00011220(1,"MEMOP-L3-02: %d\n",10);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: __x86.get_pc_thunk.ax @ 0x128ff
unsigned int __x86_get_pc_thunk_ax(void)
{
 unsigned int unaff_retaddr;
 return unaff_retaddr;
}

// Function: extern_function @ 0x12910
int extern_function(int param_1)
{
 return param_1 * 3;
}

// Function: __stack_chk_fail_local @ 0x12920
void __stack_chk_fail_local(void)
{
 FUN_000111a0();
 return;
}

// Function: __do_global_ctors_aux @ 0x12940
void __do_global_ctors_aux(void)
{
 return;
}

// Function: _fini @ 0x1298c
void _fini(void)
{
 __do_global_dtors_aux();
 return;
}

