// Decompiled by BinaryAI
// SHA256: 3b54182f2214bc59ff1062b927e488cbac6c4d1c7a22c13f7e6853199771e15e

// Global type definitions
typedef unsigned int uint;
typedef unsigned char byte;

// Global variable declarations
int global_counter = 0;
int counter_1 = 0;
int extern_global_var = 0;
unsigned int file_scope_static = 0;
void *global_func_ptr = 0;
unsigned int static_depends_0 = 0;
unsigned int global_array[10] = {0};
char const_string[100] = {0};
int DAT_00013008 = 0;
int DAT_000130ea = 0;
int DAT_000131ba = 0;
int DAT_000131ca = 0;
int DAT_000133e4 = 0;
int DAT_000133bc = 0;
int DAT_00013428 = 0;
int DAT_00013650 = 0;

// Forward declarations
unsigned int alloca_usage(int param_1);
unsigned int stack_alias(void);
unsigned int global_var_access(void);
void FUN_00011030(void);
void FUN_00011140(unsigned int param_1);
void FUN_00011150(void *func, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7);
void test_stack_memory(void);
void test_heap_memory(void);
void test_static_global(void);
void test_memory_op_functions(void);
unsigned int main(void);
void FUN_00011160(void *dest, void *src, unsigned int n, unsigned int retaddr);
void FUN_00011170(void *ptr);
void FUN_00011180(void *dest, void *src, unsigned int n, unsigned int retaddr);
int FUN_00011190(void *s1, void *s2, unsigned int n, unsigned int retaddr);
void FUN_000111a0(void);
void FUN_000111b0(void);
void FUN_000111c0(void);
void *FUN_000111d0(void *ptr, unsigned int size);
void *FUN_000111e0(unsigned int size);
void FUN_000111f0(int *param_1);
void *FUN_00011200(void);
void FUN_00011210(void *s, int c, unsigned int n, unsigned int retaddr);
void FUN_00011220(int level, const char *format, unsigned int value, ...);
void *FUN_00011230(void);
void *FUN_00011240(unsigned int nmemb, unsigned int size);
void __x86_get_pc_thunk_di(void);
void __stack_chk_fail_local(void);
static int extern_function(int param_1);


// CRT stub implementations
void __gmon_start__(void) { return; }
void frame_dummy(void) { return; }
int __do_global_ctors_aux(void) { return 0; }

// LOCK/UNLOCK implementations
static void LOCK(void) { return; }
static void UNLOCK(void) { return; }

// Stack check fail implementation
void __stack_chk_fail_local(void) { return; }

// x86 thunk implementation
void __x86_get_pc_thunk_di(void) { return; }


// Function: FUN_00011030 @ 0x11030
void FUN_00011030(void)
{
 return;
}

// Function: FUN_00011140 @ 0x11140
void FUN_00011140(unsigned int param_1)
{
 (*(void (*)(void))param_1)();
 return;
}

// Function: FUN_00011150 @ 0x11150
void FUN_00011150(void *func, unsigned int param_2, void *param_3, int param_4, int param_5, unsigned int param_6, char *param_7)
{
 ((void (*)(void))func)();
 return;
}

// Function: FUN_00011160 @ 0x11160
void FUN_00011160(void *dest, void *src, unsigned int n, unsigned int retaddr)
{
 return;
}

// Function: FUN_00011170 @ 0x11170
void FUN_00011170(void *ptr)
{
 return;
}

// Function: FUN_00011180 @ 0x11180
void FUN_00011180(void *dest, void *src, unsigned int n, unsigned int retaddr)
{
 return;
}

// Function: FUN_00011190 @ 0x11190
int FUN_00011190(void *s1, void *s2, unsigned int n, unsigned int retaddr)
{
 return 0;
}

// Function: FUN_000111a0 @ 0x111a0
void FUN_000111a0(void)
{
 return;
}

// Function: FUN_000111b0 @ 0x111b0
void FUN_000111b0(void)
{
 return;
}

// Function: FUN_000111c0 @ 0x111c0
void FUN_000111c0(void)
{
 return;
}

// Function: FUN_000111d0 @ 0x111d0
void *FUN_000111d0(void *ptr, unsigned int size)
{
 return ptr;
}

// Function: FUN_000111e0 @ 0x111e0
void *FUN_000111e0(unsigned int size)
{
 return (void *)0;
}

// Function: FUN_000111f0 @ 0x111f0
void FUN_000111f0(int *param_1)
{
 return;
}

// Function: FUN_00011200 @ 0x11200
void *FUN_00011200(void)
{
 return (void *)0;
}

// Function: FUN_00011210 @ 0x11210
void FUN_00011210(void *s, int c, unsigned int n, unsigned int retaddr)
{
 return;
}

// Function: FUN_00011220 @ 0x11220
void FUN_00011220(int level, const char *format, unsigned int value, ...)
{
 return;
}

// Function: FUN_00011230 @ 0x11230
void *FUN_00011230(void)
{
 return (void *)0;
}

// Function: FUN_00011240 @ 0x11240
void *FUN_00011240(unsigned int nmemb, unsigned int size)
{
 return (void *)0;
}







// Function: double_value @ 0x113c1
int double_value(int param_1)
{
 return param_1 * 2;
}

// Function: local_vars @ 0x113cc
int local_vars(int param_1)
{
 return param_1 * 2 + 10;
}

// Function: local_array @ 0x113d9
unsigned int local_array(int param_1)
{
 int *piVar1;
 int iVar2;
 int in_GS_OFFSET;
 int local_38 [10];
 int local_10 [3];
 local_10[0] = *(int *)(in_GS_OFFSET + 0x14);
 piVar1 = local_38;
 iVar2 = 0;
 do {
 *piVar1 = iVar2;
 iVar2 = iVar2 + param_1;
 piVar1 = piVar1 + 1;
 } while (piVar1 != local_10);
 if (local_10[0] == *(int *)(in_GS_OFFSET + 0x14)) {
 return local_38[5];
 }
 __stack_chk_fail_local();
}

// Function: local_struct @ 0x11424
int local_struct(int param_1)
{
 return param_1 * 3;
}

// Function: address_of_local @ 0x11430
unsigned int address_of_local(unsigned int *param_1)
{
 *param_1 = 0x2a;
 return 0x2a;
}

// Function: address_of_array @ 0x11444
int address_of_array(int *param_1)
{
 return *param_1 * 2;
}

// Function: large_stack_frame @ 0x11451
int large_stack_frame(void)
{
 int iVar1;
 int in_GS_OFFSET;
 char acStack_810 [2048];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 iVar1 = 0;
 do {
 acStack_810[iVar1] = (char)iVar1;
 iVar1 = iVar1 + 1;
 } while (iVar1 != 0x800);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return (int)acStack_810[1024];
 }
 __stack_chk_fail_local();
}

// Function: vla_stack @ 0x1149c
unsigned int vla_stack(int param_1)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 unsigned int uVar4;
 char *puVar5;
 char *puVar6;
 int in_GS_OFFSET;
 char auStack_1c [12];
 int local_10;
 puVar6 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 - 1U < 1000) {
 uVar2 = param_1 * 4 + 0xf;
 for (; puVar5 != auStack_1c + -(uVar2 & 0xfffff000); puVar5 = puVar5 + -0x1000) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 uVar2 = uVar2 & 0xff0;
 iVar1 = -uVar2;
 puVar6 = puVar5 + iVar1;
 if (uVar2 != 0) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 iVar3 = 0;
 do {
 *(int *)(puVar5 + iVar3 * 2 + iVar1) = iVar3;
 iVar3 = iVar3 + 2;
 } while (iVar3 != param_1 * 2);
 uVar4 = *(unsigned int *)(puVar5 + (param_1 / 2) * 4 + iVar1);
 }
 else {
 uVar4 = 0xffffffff;
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar4;
 }
 *(void **)(puVar6 + -4) = alloca_usage;
 __stack_chk_fail_local();
}

// Function: alloca_usage @ 0x11537
unsigned int alloca_usage(int param_1)
{
 int iVar1;
 uint uVar2;
 int iVar3;
 unsigned int uVar4;
 char *puVar5;
 char *puVar6;
 int in_GS_OFFSET;
 char auStack_1c [12];
 int local_10;
 puVar6 = auStack_1c;
 puVar5 = auStack_1c;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 if (param_1 < 1) {
 uVar4 = 0xffffffff;
 }
 else {
 uVar2 = param_1 * 4 + 0x1b;
 for (; puVar5 != auStack_1c + -(uVar2 & 0xfffff000); puVar5 = puVar5 + -0x1000) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 uVar2 = uVar2 & 0xff0;
 iVar1 = -uVar2;
 puVar6 = puVar5 + iVar1;
 if (uVar2 != 0) {
 *(unsigned int *)(puVar5 + -4) = *(unsigned int *)(puVar5 + -4);
 }
 iVar3 = 0;
 do {
 *(int *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + iVar3 * 4) = iVar3 * 3;
 iVar3 = iVar3 + 1;
 } while (param_1 != iVar3);
 uVar4 = *(unsigned int *)(((uint)(puVar5 + iVar1 + 0xf) & 0xfffffff0) + (iVar3 / 2) * 4);
 }
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return uVar4;
 }
 *(void **)(puVar6 + -4) = stack_alias;
 __stack_chk_fail_local();
}

// Function: stack_alias @ 0x115d1
unsigned int stack_alias(void)
{
 return 0x14;
}

// Function: test_stack_memory @ 0x115db
void test_stack_memory(void)
{
 unsigned int uVar1;
 FUN_000111f0(&DAT_00013008);
 FUN_00011220(1,"MEM-L1-01 (local_vars): %d\n",0x14);
 uVar1 = local_array(2);
 FUN_00011220(1,"MEM-L1-02 (local_array): %d\n",uVar1);
 FUN_00011220(1,"MEM-L1-03 (local_struct): %d\n",0xf);
 FUN_00011220(1,"MEM-L1-04 (address_of_local): %d\n",0x2a);
 FUN_00011220(1,"MEM-L1-05 (address_of_array): %d\n",2);
 uVar1 = large_stack_frame();
 FUN_00011220(1,"MEM-L2-01 (large_stack_frame): %d\n",uVar1);
 uVar1 = vla_stack(10);
 FUN_00011220(1,"MEM-L2-02 (vla_stack): %d\n",uVar1);
 uVar1 = alloca_usage(10);
 FUN_00011220(1,"MEM-L2-03 (alloca_usage): %d\n",uVar1);
 FUN_00011220(1,"MEM-L2-04 (stack_alias): %d\n",0x14);
 return;
}

// Function: heap_basic @ 0x116cf
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

// Function: heap_calloc @ 0x1173a
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

// Function: heap_realloc @ 0x1179a
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
 FUN_00011170(puVar1);
 uVar3 = 0xfffffffe;
 }
 else {
 *(unsigned int *)(iVar2 + 0x14) = 0x32;
 *(unsigned int *)(iVar2 + 0x18) = 0x3c;
 *(unsigned int *)(iVar2 + 0x1c) = 0x46;
 *(unsigned int *)(iVar2 + 0x20) = 0x50;
 *(unsigned int *)(iVar2 + 0x24) = 0x5a;
 uVar3 = 0xfffffffd;
 if (*(int *)(iVar2 + 8) == 3) {
 uVar3 = 0x32;
 }
 FUN_00011170(iVar2);
 }
 }
 return uVar3;
}

// Function: heap_array @ 0x11859
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

// Function: heap_struct @ 0x118c4
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

// Function: heap_nested @ 0x11908
unsigned int heap_nested(unsigned int **param_1)
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

// Function: linked_list_heap @ 0x1197e
int linked_list_heap(void)
{
 int *piVar1;
 int *piVar2;
 int *piVar3;
 int *piVar4;
 int iVar5;
 iVar5 = 0;
 piVar2 = (int *)0x0;
 piVar3 = (int *)0x0;
 do {
 piVar1 = (int *)FUN_000111e0(8);
 if (piVar1 == (int *)0x0) {
 if (piVar3 != (int *)0x0) {
 do {
 piVar2 = (int *)piVar3[1];
 FUN_00011170(piVar3);
 piVar3 = piVar2;
 } while (piVar2 != (int *)0x0);
 return -1;
 }
 return -1;
 }
 *piVar1 = iVar5;
 piVar1[1] = 0;
 piVar4 = piVar1;
 if (piVar3 != (int *)0x0) {
 piVar2[1] = (int)piVar1;
 piVar4 = piVar3;
 }
 iVar5 = iVar5 + 10;
 piVar2 = piVar1;
 piVar3 = piVar4;
 } while (iVar5 != 0x32);
 if (piVar4 == (int *)0x0) {
 iVar5 = 0;
 }
 else {
 iVar5 = 0;
 piVar2 = piVar4;
 do {
 iVar5 = iVar5 + *piVar2;
 piVar2 = (int *)piVar2[1];
 } while (piVar2 != (int *)0x0);
 do {
 piVar2 = (int *)piVar4[1];
 FUN_00011170(piVar4);
 piVar4 = piVar2;
 } while (piVar2 != (int *)0x0);
 }
 return iVar5;
}

// Function: create_tree_node @ 0x11a35
void *create_tree_node(unsigned int param_1)
{
 unsigned int *puVar1;
 puVar1 = (unsigned int *)FUN_000111e0(0xc);
 if (puVar1 != (unsigned int *)0x0) {
 *puVar1 = param_1;
 puVar1[1] = 0;
 puVar1[2] = 0;
 }
 return puVar1;
}

// Function: tree_heap_traversal @ 0x11a6f
int tree_heap_traversal(void)
{
 int *piVar1;
 int *piVar2;
 int iVar3;
 int *piVar4;
 piVar2 = (int *)create_tree_node(10);
 if (piVar2 == (int *)0x0) {
 iVar3 = -1;
 }
 else {
 iVar3 = create_tree_node(0x14);
 piVar2[1] = iVar3;
 piVar4 = (int *)create_tree_node(0x1e);
 piVar2[2] = (int)piVar4;
 piVar1 = (int *)piVar2[1];
 if ((piVar4 == (int *)0x0) || (piVar1 == (int *)0x0)) {
 if (piVar1 != (int *)0x0) {
 FUN_00011170(piVar1);
 }
 if (piVar2[2] != 0) {
 FUN_00011170(piVar2[2]);
 }
 FUN_00011170(piVar2);
 iVar3 = -2;
 }
 else {
 iVar3 = *piVar1 + *piVar2 + *piVar4;
 FUN_00011170(piVar1);
 FUN_00011170(piVar2[2]);
 FUN_00011170(piVar2);
 }
 }
 return iVar3;
}

// Function: memory_leak @ 0x11b2a
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

// Function: dangling_pointer @ 0x11b82
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

// Function: double_free @ 0x11bd3
unsigned int double_free(unsigned int *param_1)
{
 int iVar1;
 unsigned int uVar2;
 if (param_1 == (unsigned int *)0x0) {
 iVar1 = FUN_000111e0(4);
 if (iVar1 == 0) {
 uVar2 = 0xffffffff;
 }
 else {
 FUN_00011170(iVar1);
 FUN_00011170(iVar1);
 uVar2 = 0xfffffffe;
 }
 }
 else {
 uVar2 = *param_1;
 }
 return uVar2;
}

// Function: heap_overflow @ 0x11c2c
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

// Function: test_heap_memory @ 0x11c82
void test_heap_memory(void)
{
 unsigned int **pppuVar1;
 unsigned int **ppuVar2;
 char *puVar3;
 int in_GS_OFFSET;
 int **local_2c;
 char *pcStack_28;
 uint uStack_24;
 unsigned int uStack_20;
 char auStack_1c [4];
 unsigned int **local_18;
 uint local_14;
 unsigned int local_10;
 local_10 = *(unsigned int *)(in_GS_OFFSET + 0x14);
 local_2c = (int **)&DAT_000130ea;
 FUN_000111f0(&DAT_000130ea);
 local_2c = (unsigned int **)0xa;
 uStack_24 = heap_basic(10);
 pcStack_28 = "HEAP-L2-01 (heap_basic): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 local_2c = (unsigned int **)0x5;
 uStack_24 = heap_calloc(5);
 pcStack_28 = "HEAP-L2-02 (heap_calloc): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 uStack_24 = heap_realloc();
 pcStack_28 = "HEAP-L2-03 (heap_realloc): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 local_2c = (unsigned int **)0xa;
 uStack_24 = heap_array(10);
 pcStack_28 = "HEAP-L2-04 (heap_array): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 local_2c = (unsigned int **)0x5;
 uStack_24 = heap_struct(5);
 pcStack_28 = "HEAP-L2-05 (heap_struct): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 local_18 = (unsigned int **)0x0;
 local_2c = (int **)&local_18;
 uStack_24 = heap_nested(&local_18);
 pcStack_28 = "HEAP-L2-06 (heap_nested): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
  if (local_18 != (unsigned int **)0x0) {
  FUN_00011170(local_18[1]);
  FUN_00011170(local_18);
  }
 uStack_20 = 0x11d8d;
 uStack_24 = linked_list_heap();
 pcStack_28 = "HEAP-L3-01 (linked_list_heap): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 uStack_24 = tree_heap_traversal();
 pcStack_28 = "HEAP-L3-02 (tree_heap_traversal): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 local_2c = (unsigned int **)0x5;
 uStack_24 = memory_leak(5);
 pcStack_28 = "HEAP-L3-03 (memory_leak): %d\n";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 pcStack_28 = "HEAP-L3-04 (dangling_pointer): ";
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, 0);
 ppuVar2 = (unsigned int **)FUN_00011230();
 if (ppuVar2 == (unsigned int **)0x0) {
 uStack_20 = 0x11e37;
 uStack_24 = dangling_pointer();
 pcStack_28 = &DAT_000131ba;
 local_2c = (unsigned int **)0x1;
 FUN_00011220(1, pcStack_28, uStack_24);
 local_2c = (unsigned int **)0x0;
 local_14 = FUN_00011200();
 pppuVar1 = &local_2c;
 }
 else {
 if ((int)ppuVar2 < 1) {
 local_2c = (int **)&DAT_000131ca;
 FUN_000111b0();
 puVar3 = auStack_1c;
 goto LAB_00011e81;
 }
  uStack_24 = 0;
  pcStack_28 = (char *)&local_14;
  FUN_000111c0();
  puVar3 = auStack_1c;
  pppuVar1 = (unsigned int ***)ppuVar2;
 if ((local_14 & 0x7f) != 0) {
 if ('\x01' < (char)(((byte)local_14 & 0x7f) + 1)) {
 pcStack_28 = &DAT_000133e4;
 local_2c = (unsigned int **)0x1;
 uStack_24 = local_14 & 0x7f;
 FUN_00011220(1, pcStack_28, uStack_24);
 puVar3 = auStack_1c;
 }
 goto LAB_00011e81;
 }
 }
 puVar3 = (char *)pppuVar1;
 *(uint *)(puVar3 + -8) = local_14 >> 8 & 0xff;
 *(char **)(puVar3 + -0xc) = &DAT_000133bc;
 *(unsigned int *)(puVar3 + -0x10) = 1;
 *(unsigned int *)(puVar3 + -0x14) = 0x11e6a;
 FUN_00011220(1, *(char **)(puVar3 + -0xc), *(unsigned int *)(puVar3 + -0x10));
LAB_00011e81:
 if (*(int *)(puVar3 + 0xc) == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 *(void **)(puVar3 + -4) = (void *)global_var_access;
 __stack_chk_fail_local();
}

// Function: global_var_access @ 0x11e98
unsigned int global_var_access(void)
{
 global_counter = global_counter + 1;
 return global_counter;
}

// Function: global_var_read @ 0x11eb7
int global_var_read(void)
{
 return global_counter * 2;
}

// Function: global_array_access @ 0x11ece
unsigned int global_array_access(uint param_1)
{
 if (param_1 < 10) {
 return *(unsigned int *)(global_array + param_1 * 4);
 }
 return 0xffffffff;
}

// Function: static_local @ 0x11ef4
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

// Function: call_static_func @ 0x11f1f
int call_static_func(int param_1)
{
 return param_1 * 2 + 1;
}

// Function: access_extern_global @ 0x11f2c
int access_extern_global(void)
{
 return extern_global_var + 100;
}

// Function: call_extern_func @ 0x11f46
void call_extern_func(void)
{
 extern_function(5);
 return;
}

// Function: read_const_data @ 0x11f65
int read_const_data(void)
{
 return (char)const_string[4] + 0x2a;
}

// Function: access_bss_var @ 0x11f81
unsigned int access_bss_var(void)
{
 return 0;
}

// Function: access_bss_buffer @ 0x11f8b
unsigned int access_bss_buffer(void)
{
 return 0;
}

// Function: global_struct_access @ 0x11f95
unsigned int global_struct_access(void)
{
 return 0x1e;
}

// Function: set_file_static @ 0x11f9f
void set_file_static(unsigned int param_1)
{
 file_scope_static = param_1;
 return;
}

// Function: get_file_static @ 0x11fb8
unsigned int get_file_static(void)
{
 return file_scope_static;
}

// Function: set_global_callback @ 0x11fcd
void set_global_callback(unsigned int param_1)
{
 global_func_ptr = param_1;
 return;
}

// Function: call_global_callback @ 0x11fe6
unsigned int call_global_callback(unsigned int param_1)
{
 unsigned int uVar1;
 if (global_func_ptr != (void *)0x0) {
 uVar1 = ((unsigned int (*)(unsigned int))global_func_ptr)(param_1);
 return uVar1;
 }
 return 0xffffffff;
}

// Function: global_heap_store @ 0x12011
unsigned int global_heap_store(unsigned int *param_1)
{
 if (param_1 != (unsigned int *)0x0) {
 return *param_1;
 }
 return 0xffffffff;
}

// Function: static_complex_init @ 0x12026
unsigned int static_complex_init(void)
{
 return 0xf;
}

// Function: tls_access @ 0x12030
int tls_access(int param_1)
{
 return param_1 * 2;
}

// Function: init_order_test @ 0x1203b
unsigned int init_order_test(void)
{
 static_depends_0 = 0x14;
 return 0x14;
}

// Function: test_static_global @ 0x12059
void test_static_global(void)
{
 unsigned int uVar1;
 FUN_000111f0(&DAT_00013428);
 uVar1 = global_var_access();
 FUN_00011220(1,"STM-L1-01 (global_var_access): %d\n",uVar1);
 FUN_00011220(1,"STM-L1-01 (global_var_read): %d\n",global_counter * 2);
 FUN_00011220(1,"STM-L1-02 (global_array_access): %d\n",5);
 counter_1 = 1;
 FUN_00011220(1,"STM-L1-03 (static_local): %d\n",1);
 counter_1 = counter_1 + 1;
 FUN_00011220(1,"STM-L1-03 (static_local): %d\n",counter_1);
 FUN_00011220(1,"STM-L1-04 (call_static_func): %d\n",0xb);
 FUN_00011220(1,"STM-L2-01 (access_extern_global): %d\n",extern_global_var + 100);
 call_extern_func();
 FUN_00011220(1,"STM-L2-02 (call_extern_func): %d\n",0);
 uVar1 = read_const_data();
 FUN_00011220(1,"STM-L2-03 (read_const_data): %d\n",uVar1);
 FUN_00011220(1,"STM-L2-04 (access_bss_var): %d\n",0);
 FUN_00011220(1,"STM-L2-04 (access_bss_buffer): %d\n",0);
 uVar1 = global_struct_access();
 FUN_00011220(1,"STM-L2-05 (global_struct_access): %d\n",uVar1);
 file_scope_static = 0x32;
 FUN_00011220(1,"STM-L2-06 (file_static): %d\n",0x32);
 global_func_ptr = double_value;
 uVar1 = call_global_callback(5);
 FUN_00011220(1,"STM-L2-07 (global_func_ptr): %d\n",uVar1);
 FUN_00011220(1,"STM-L2-08 (global_heap_store): %d\n",100);
 uVar1 = static_complex_init();
 FUN_00011220(1,"STM-L2-09 (static_complex_init): %d\n",uVar1);
 FUN_00011220(1,"STM-L3-01 (tls_access): %d\n",0x14);
 uVar1 = init_order_test();
 FUN_00011220(1,"STM-L3-02 (init_order_test): %d\n",uVar1);
 return;
}

// Function: memop_memset @ 0x12231
uint memop_memset(byte *param_1,int param_2,unsigned int param_3)
{
 uint uVar1;
 if ((param_1 == (byte *)0x0) || (param_2 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011210(param_1,param_3,param_2,0x1223f);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_memcpy @ 0x12276
unsigned int memop_memcpy(int param_1,int param_2,uint param_3)
{
 unsigned int uVar1;
 if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011180(param_1,param_2,param_3,0x12282);
 uVar1 = *(unsigned int *)(param_1 + -4 + (param_3 & 0xfffffffc));
 }
 return uVar1;
}

// Function: memop_memmove @ 0x122c6
int memop_memmove(int param_1,uint param_2)
{
 int iVar1;
 if ((param_1 == 0) || (param_2 < 2)) {
 iVar1 = -1;
 }
 else {
 FUN_00011160(param_1 + 1,param_1,param_2 - 1,0x122d4);
 iVar1 = (int)*(char *)(param_1 + 1);
 }
 return iVar1;
}

// Function: memop_memcmp @ 0x12310
int memop_memcmp(int param_1,int param_2,int param_3)
{
 int iVar1;
 int iVar2;
 if ((param_2 == 0 || param_3 == 0) || (param_1 == 0)) {
 iVar2 = 0;
 }
 else {
 iVar1 = FUN_00011190(param_1,param_2,param_3,0x1231c);
 iVar2 = 1;
 if (iVar1 < 1) {
 iVar2 = iVar1 >> 0x1f;
 }
 }
 return iVar2;
}

// Function: memop_bzero @ 0x12364
uint memop_bzero(byte *param_1,unsigned int param_2)
{
 uint uVar1;
 if (param_1 == (byte *)0x0) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011210(param_1,0,param_2,0x12372);
 uVar1 = (uint)*param_1;
 }
 return uVar1;
}

// Function: memop_bcopy @ 0x123a2
uint memop_bcopy(int param_1,byte *param_2,int param_3)
{
 uint uVar1;
 __x86_get_pc_thunk_di();
 if ((param_2 == (byte *)0x0 || param_3 == 0) || (param_1 == 0)) {
 uVar1 = 0xffffffff;
 }
 else {
 FUN_00011160(param_2,param_1,param_3,0);
 uVar1 = (uint)*param_2;
 }
 return uVar1;
}

// Function: memop_unaligned_access @ 0x123f0
unsigned int memop_unaligned_access(int param_1)
{
 if (param_1 != 0) {
 return *(unsigned int *)(param_1 + 1);
 }
 return 0xffffffff;
}

// Function: memop_memory_barrier @ 0x12406
int memop_memory_barrier(int *param_1)
{
 if (param_1 != (int *)0x0) {
 LOCK();
 UNLOCK();
 return *param_1 + *param_1;
 }
 return -1;
}

// Function: test_memory_op_functions @ 0x12424
void test_memory_op_functions(void)
{
 unsigned int uVar1;
 int in_GS_OFFSET;
 unsigned int local_174;
 unsigned int local_170;
 unsigned int local_16c;
 unsigned int local_168;
 unsigned int local_164;
 unsigned int local_160;
 unsigned int local_15c;
 unsigned int local_158;
 unsigned int local_154;
 unsigned int local_150;
 unsigned int local_14c;
 unsigned int local_148;
 unsigned int local_144;
 unsigned int local_140;
 unsigned int local_13c;
 unsigned int local_138;
 unsigned int local_134;
 unsigned int local_12d;
 unsigned int local_129;
 char local_125 [10];
 unsigned int local_11b;
 unsigned int local_117;
 unsigned short local_113;
 char local_111;
 char local_110 [256];
 int local_10;
 local_10 = *(int *)(in_GS_OFFSET + 0x14);
 FUN_000111f0(&DAT_00013650);
 local_158 = 10;
 local_154 = 0x14;
 local_150 = 0x1e;
 local_14c = 0x28;
 local_148 = 0x32;
 local_144 = 0;
 local_140 = 0;
 local_13c = 0;
 local_138 = 0;
 local_134 = 0;
 uVar1 = memop_memset(local_110,10,0x41);
 FUN_00011220(1,"MEMOP-L2-01: %d\n",uVar1);
 uVar1 = memop_memcpy(&local_144,&local_158,0x14);
 FUN_00011220(1,"MEMOP-L2-02: %d\n",uVar1);
 local_11b = 0x6c6c6548;
 local_117 = 0x726f576f;
 local_113 = 0x646c;
 local_111 = 0;
 uVar1 = memop_memmove(&local_11b,10);
 FUN_00011220(1,"MEMOP-L2-03: %c\n",uVar1);
 local_170 = 1;
 local_16c = 2;
 local_168 = 3;
 local_164 = 1;
 local_160 = 2;
 local_15c = 4;
 uVar1 = memop_memcmp(&local_170,&local_164,0xc);
 FUN_00011220(1,"MEMOP-L2-04: %d\n",uVar1);
 uVar1 = memop_bzero(local_125,10);
 FUN_00011220(1,"MEMOP-L2-05: %d\n",uVar1);
 local_12d = 0x4030201;
 local_129 = 0;
 uVar1 = memop_bcopy(&local_12d,&local_129,4);
 FUN_00011220(1,"MEMOP-L2-06: %d\n",uVar1);
 FUN_00011220(1,"MEMOP-L3-01: 0x%x\n",0x4030201);
 local_174 = 5;
 uVar1 = memop_memory_barrier(&local_174);
 FUN_00011220(1,"MEMOP-L3-02: %d\n",uVar1);
 if (local_10 == *(int *)(in_GS_OFFSET + 0x14)) {
 return;
 }
 __stack_chk_fail_local();
}

// Function: main @ 0x12635
unsigned int main(void)
{
 test_stack_memory();
 test_heap_memory();
 test_static_global();
 test_memory_op_functions();
 return 0;
}



// Function: extern_function @ 0x1265e
static int extern_function(int param_1)
{
 return param_1 * 3;
}





