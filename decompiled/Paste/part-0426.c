/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100545a48 | FUN_100545a48 */

void FUN_100545a48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100543a94(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100545ac8 | FUN_100545ac8 */

void FUN_100545ac8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10053c484(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100545b48 | FUN_100545b48 */

void FUN_100545b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100543c48(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100545bc8 | FUN_100545bc8 */

void FUN_100545bc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10053c698(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100545c34 | FUN_100545c34 */

void FUN_100545c34(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100543dbc(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100545cb4 | FUN_100545cb4 */

void FUN_100545cb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_5;
  *(undefined8 *)(unaff_x22 + 0x130) = param_6;
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  *(undefined8 *)(unaff_x22 + 0x120) = param_4;
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 **)(unaff_x22 + 0x110) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2[4];
  _swift_task_switch(FUN_100545ce8,param_1,0);
  return;
}



/* Address: 0x100545ce8 | FUN_100545ce8 */

void FUN_100545ce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x138) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x108);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x140) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100545e28;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)plVar4;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x108) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x108));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100545e88,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x100545e28 | FUN_100545e28 */

void FUN_100545e28(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x140));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x108);
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar3 + 0x148) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x108);
    pcVar1 = FUN_1005461c4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100545e88 | FUN_100545e88 */

void FUN_100545e88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x22;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  String function;
  
  uVar14 = *(ulong *)(unaff_x22 + 0x108);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100546158;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar12 = *(long *)(puVar4 + -8);
  lVar16 = *(long *)(lVar12 + 0x40);
  uVar8 = lVar16 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar14,0);
  if ((uVar14 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x108),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x110);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar14 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar14,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 200) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar20;
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0xf0) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar12 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar15 = uVar10 + 0x50 & (uVar10 ^ 0xffffffffffffffff);
  uVar13 = lVar16 + uVar15 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100ede250;
  _swift_allocObject(&DAT_100ede250,uVar13 + 0x20,uVar10 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar11;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar11 = puVar3[4];
  uVar21 = *puVar3;
  uVar20 = puVar3[3];
  uVar18 = puVar3[2];
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar21;
  *(undefined8 *)(puVar6 + 0x40) = uVar20;
  *(undefined8 *)(puVar6 + 0x38) = uVar18;
  *(undefined8 *)(puVar6 + 0x48) = uVar11;
  (**(code **)(lVar12 + 0x20))(puVar6 + uVar15,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar13) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar13) = uVar17;
  *(undefined8 *)(puVar6 + uVar13 + 0x10) = uVar9;
  *(undefined8 *)((long)(puVar6 + uVar13 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890(unaff_x22 + 0xb8,unaff_x22 + 0xd0);
  FUN_10000ca28(unaff_x22 + 0xe8,unaff_x22 + 0xf8);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar9,uVar1);
  FUN_1004e9c98(0,0,uVar14,&DAT_100c56f70,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar14);
  (**(code **)(lVar12 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100546158 | FUN_100546158 */

void FUN_100546158(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x108);
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x148) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x108);
    pcVar1 = FUN_1005461c4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005461c4 | FUN_1005461c4 */

void FUN_1005461c4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001005461cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005461d0 | FUN_1005461d0 */

void FUN_1005461d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x198) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_4;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_100546204,param_1,0);
  return;
}



/* Address: 0x100546204 | FUN_100546204 */

void FUN_100546204(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 400);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x1b8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 400);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1c0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10054634c;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)(unaff_x22 + 0x150);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 400) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 400));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1005463c4,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x10054634c | FUN_10054634c */

void FUN_10054634c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar4 [16];
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1c0));
  if (unaff_x20 == 0) {
    auVar4 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0x150),*(undefined1 (*) [16])(lVar3 + 0x150),8,
                      1);
    *(long *)(lVar3 + 0x1e0) = auVar4._8_8_;
    *(long *)(lVar3 + 0x1d8) = auVar4._0_8_;
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0x168);
    *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 0x160);
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_100546718;
  }
  else {
    *(long *)(lVar3 + 0x1e8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_10054672c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005463c4 | FUN_1005463c4 */

void FUN_1005463c4(void)

{
  undefined8 uVar1;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x22;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String function;
  
  uVar11 = *(ulong *)(unaff_x22 + 400);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x170;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100546694;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar2 = &DAT_100fcf088;
  FUN_1000f7830(&DAT_100fcf088,&DAT_100c56f18);
  lVar13 = *(long *)(puVar2 + -8);
  lVar7 = *(long *)(lVar13 + 0x40);
  uVar6 = lVar7 + 0xf;
  uVar3 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_isCurrentExecutor(uVar11,0);
  if ((uVar11 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 400),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar14 = *(undefined8 *)(unaff_x22 + 400);
  puVar4 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar11 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar11);
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x198);
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar11,1,1,TVar5.unknown);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar13 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = uVar9 + 0x68 & (uVar9 ^ 0xffffffffffffffff);
  uVar12 = lVar7 + uVar10 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100ede1b0;
  _swift_allocObject(&DAT_100ede1b0,uVar12 + 0x20,uVar9 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar14;
  *(undefined8 *)(puVar4 + 0x18) = uVar16;
  *(undefined8 *)(puVar4 + 0x20) = uVar14;
  uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(puVar4 + 0x28) = uVar16;
  *(undefined8 *)(puVar4 + 0x40) = uVar19;
  *(undefined8 *)(puVar4 + 0x38) = uVar18;
  uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(puVar4 + 0x50) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(puVar4 + 0x48) = uVar16;
  *(undefined8 *)(puVar4 + 0x60) = uVar19;
  *(undefined8 *)(puVar4 + 0x58) = uVar18;
  (**(code **)(lVar13 + 0x20))(puVar4 + uVar10,uVar6,puVar2);
  *(undefined8 *)((long)(puVar4 + uVar12) + 8) = uVar17;
  *(undefined8 *)(puVar4 + uVar12) = uVar15;
  *(undefined8 *)(puVar4 + uVar12 + 0x10) = uVar8;
  *(undefined8 *)((long)(puVar4 + uVar12 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar6);
  _swift_retain_n(uVar14,2);
  FUN_1000f8cac(unaff_x22 + 0xd0,unaff_x22 + 0x110,&DAT_100fce8e0,&DAT_100c558b0);
  _swift_unknownObjectRetain(uVar15);
  FUN_1001037b4(uVar8,uVar1);
  FUN_1004e9c98(0,0,uVar11,&DAT_100c56f28,puVar4);
  _swift_release();
  _swift_task_dealloc(uVar11);
  (**(code **)(lVar13 + 8))(uVar3,puVar2);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100546694 | FUN_100546694 */

void FUN_100546694(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    auVar5 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0x170),*(undefined1 (*) [16])(lVar3 + 0x170),8,
                      1);
    *(long *)(lVar3 + 0x1e0) = auVar5._8_8_;
    *(long *)(lVar3 + 0x1d8) = auVar5._0_8_;
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0x188);
    *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 0x180);
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_100546718;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x1e8) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_10054672c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100546718 | FUN_100546718 */

void FUN_100546718(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100546728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x1e0),*(undefined8 *)(unaff_x22 + 0x1d8),
             *(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1c8));
  return;
}



/* Address: 0x10054672c | FUN_10054672c */

void FUN_10054672c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100546734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100546738 | FUN_100546738 */

void FUN_100546738(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x188) = param_3;
  *(undefined8 *)(unaff_x22 + 400) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 **)(unaff_x22 + 0x180) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2[6];
  _swift_task_switch(FUN_100546774,param_1,0);
  return;
}



/* Address: 0x100546774 | FUN_100546774 */

void FUN_100546774(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x1a8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x178);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005468bc;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)(unaff_x22 + 200);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x178) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x178));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100546934,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x1005468bc | FUN_1005468bc */

void FUN_1005468bc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar4 [16];
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1b0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0xd0);
    *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 200);
    auVar4 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0xd8),*(undefined1 (*) [16])(lVar3 + 0xd8),8,1)
    ;
    *(long *)(lVar3 + 0x1c0) = auVar4._8_8_;
    *(long *)(lVar3 + 0x1b8) = auVar4._0_8_;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = FUN_100546cd0;
  }
  else {
    *(long *)(lVar3 + 0x1d8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = FUN_100546ce4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100546934 | FUN_100546934 */

void FUN_100546934(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String function;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x178);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xe8;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100546c4c;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcf070;
  FUN_1000f7830(&DAT_100fcf070,&DAT_100c56ed0);
  lVar9 = *(long *)(puVar4 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  uVar8 = lVar10 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar15,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x178),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x180);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar15,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0x118) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0x140) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
  uVar18 = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0x150) = puVar3[6];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar9 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar14 = uVar12 + 0x60 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = lVar10 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100ede110;
  _swift_allocObject(&DAT_100ede110,uVar16 + 0x20,uVar12 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar22 = puVar3[3];
  uVar21 = puVar3[2];
  uVar20 = puVar3[5];
  uVar18 = puVar3[4];
  uVar13 = puVar3[6];
  uVar23 = *puVar3;
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x58) = uVar13;
  *(undefined8 *)(puVar6 + 0x50) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar22;
  *(undefined8 *)(puVar6 + 0x38) = uVar21;
  (**(code **)(lVar9 + 0x20))(puVar6 + uVar14,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar16) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar16) = uVar17;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = uVar11;
  *(undefined8 *)((long)(puVar6 + uVar16 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890((undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0x120);
  FUN_10000ca28((undefined8 *)(unaff_x22 + 0x138),unaff_x22 + 0x158);
  FUN_10054c088((undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x168);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar11,uVar1);
  FUN_1004e9c98(0,0,uVar15,&DAT_100c56ee0,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar15);
  (**(code **)(lVar9 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100546c4c | FUN_100546c4c */

void FUN_100546c4c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0xf0);
    *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 0xe8);
    auVar5 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0xf8),*(undefined1 (*) [16])(lVar3 + 0xf8),8,1)
    ;
    *(long *)(lVar3 + 0x1c0) = auVar5._8_8_;
    *(long *)(lVar3 + 0x1b8) = auVar5._0_8_;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = FUN_100546cd0;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x1d8) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = FUN_100546ce4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100546cd0 | FUN_100546cd0 */

void FUN_100546cd0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100546ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1c8),
             *(undefined8 *)(unaff_x22 + 0x1c0),*(undefined8 *)(unaff_x22 + 0x1b8));
  return;
}



/* Address: 0x100546ce4 | FUN_100546ce4 */

void FUN_100546ce4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100546cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100546cf0 | FUN_100546cf0 */

void FUN_100546cf0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x178) = param_5;
  *(undefined8 *)(unaff_x22 + 0x180) = param_6;
  *(undefined8 *)(unaff_x22 + 0x168) = param_3;
  *(undefined8 *)(unaff_x22 + 0x170) = param_4;
  *(undefined8 *)(unaff_x22 + 0x158) = param_1;
  *(undefined8 **)(unaff_x22 + 0x160) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2[6];
  _swift_task_switch(FUN_100546d2c,param_1,0);
  return;
}



/* Address: 0x100546d2c | FUN_100546d2c */

void FUN_100546d2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x188) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x158);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 400) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100546e74;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)(unaff_x22 + 0x118);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x158) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x158));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100546edc,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x100546e74 | FUN_100546e74 */

void FUN_100546e74(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 400));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x198) = *(undefined8 *)(lVar3 + 0x120);
    *(undefined8 *)(lVar3 + 0x1a0) = *(undefined8 *)(lVar3 + 0x118);
    uVar2 = *(undefined8 *)(lVar3 + 0x158);
    pcVar1 = FUN_100547250;
  }
  else {
    *(long *)(lVar3 + 0x1a8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x158);
    pcVar1 = FUN_100547260;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100546edc | FUN_100546edc */

void FUN_100546edc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String function;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x158);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x128;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1005471dc;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcf050;
  FUN_1000f7830(&DAT_100fcf050,&DAT_100c56e80);
  lVar13 = *(long *)(puVar4 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  uVar8 = lVar9 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar15,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x158),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x158);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x160);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x168);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar15,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0xd8) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar20;
  *(undefined8 *)(unaff_x22 + 200) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0x100) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar18;
  uVar18 = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0x110) = puVar3[6];
  *(undefined8 *)(unaff_x22 + 0x108) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar13 + 0x10))();
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar16 = uVar11 + 0x60 & (uVar11 ^ 0xffffffffffffffff);
  uVar14 = lVar9 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100ede070;
  _swift_allocObject(&DAT_100ede070,uVar14 + 0x20,uVar11 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar22 = puVar3[3];
  uVar21 = puVar3[2];
  uVar20 = puVar3[5];
  uVar18 = puVar3[4];
  uVar12 = puVar3[6];
  uVar23 = *puVar3;
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x58) = uVar12;
  *(undefined8 *)(puVar6 + 0x50) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar22;
  *(undefined8 *)(puVar6 + 0x38) = uVar21;
  (**(code **)(lVar13 + 0x20))(puVar6 + uVar16,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar14) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar14) = uVar17;
  *(undefined8 *)(puVar6 + uVar14 + 0x10) = uVar10;
  *(undefined8 *)((long)(puVar6 + uVar14 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890(unaff_x22 + 200,unaff_x22 + 0xe0);
  FUN_10000ca28(unaff_x22 + 0xf8,unaff_x22 + 0x138);
  FUN_10054bdac((undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0x148);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar10,uVar1);
  FUN_1004e9c98(0,0,uVar15,&DAT_100c56e90,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar15);
  (**(code **)(lVar13 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1005471dc | FUN_1005471dc */

void FUN_1005471dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    *(undefined8 *)(lVar3 + 0x198) = *(undefined8 *)(lVar3 + 0x130);
    *(undefined8 *)(lVar3 + 0x1a0) = *(undefined8 *)(lVar3 + 0x128);
    uVar2 = *(undefined8 *)(lVar3 + 0x158);
    pcVar1 = FUN_100547250;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x1a8) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x158);
    pcVar1 = FUN_100547260;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100547250 | FUN_100547250 */

void FUN_100547250(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010054725c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x1a0),*(undefined8 *)(unaff_x22 + 0x198));
  return;
}



/* Address: 0x100547260 | FUN_100547260 */

void FUN_100547260(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100547268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10054726c | FUN_10054726c */

void FUN_10054726c(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x188) = param_3;
  *(undefined8 *)(unaff_x22 + 400) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 **)(unaff_x22 + 0x180) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2[6];
  _swift_task_switch(FUN_1005472a8,param_1,0);
  return;
}



/* Address: 0x1005472a8 | FUN_1005472a8 */

void FUN_1005472a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x1a8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x178);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005473f0;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)(unaff_x22 + 200);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x178) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x178));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100547468,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x1005473f0 | FUN_1005473f0 */

void FUN_1005473f0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar4 [16];
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1b0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0xd0);
    *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 200);
    auVar4 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0xd8),*(undefined1 (*) [16])(lVar3 + 0xd8),8,1)
    ;
    *(long *)(lVar3 + 0x1c0) = auVar4._8_8_;
    *(long *)(lVar3 + 0x1b8) = auVar4._0_8_;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = thunk_FUN_100546cd0;
  }
  else {
    *(long *)(lVar3 + 0x1d8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = thunk_FUN_100546ce4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100547468 | FUN_100547468 */

void FUN_100547468(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String function;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x178);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xe8;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100547780;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcf030;
  FUN_1000f7830(&DAT_100fcf030,&DAT_100c56e30);
  lVar9 = *(long *)(puVar4 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  uVar8 = lVar10 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar15,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x178),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x180);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar15,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0x118) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0x140) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
  uVar18 = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0x150) = puVar3[6];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar9 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar14 = uVar12 + 0x60 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = lVar10 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100eddfd0;
  _swift_allocObject(&DAT_100eddfd0,uVar16 + 0x20,uVar12 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar22 = puVar3[3];
  uVar21 = puVar3[2];
  uVar20 = puVar3[5];
  uVar18 = puVar3[4];
  uVar13 = puVar3[6];
  uVar23 = *puVar3;
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x58) = uVar13;
  *(undefined8 *)(puVar6 + 0x50) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar22;
  *(undefined8 *)(puVar6 + 0x38) = uVar21;
  (**(code **)(lVar9 + 0x20))(puVar6 + uVar14,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar16) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar16) = uVar17;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = uVar11;
  *(undefined8 *)((long)(puVar6 + uVar16 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890((undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0x120);
  FUN_10000ca28((undefined8 *)(unaff_x22 + 0x138),unaff_x22 + 0x158);
  FUN_10054bb70((undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x168);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar11,uVar1);
  FUN_1004e9c98(0,0,uVar15,&DAT_100c56e40,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar15);
  (**(code **)(lVar9 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100547780 | FUN_100547780 */

void FUN_100547780(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    *(undefined8 *)(lVar3 + 0x1c8) = *(undefined8 *)(lVar3 + 0xf0);
    *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(lVar3 + 0xe8);
    auVar5 = NEON_ext(*(undefined1 (*) [16])(lVar3 + 0xf8),*(undefined1 (*) [16])(lVar3 + 0xf8),8,1)
    ;
    *(long *)(lVar3 + 0x1c0) = auVar5._8_8_;
    *(long *)(lVar3 + 0x1b8) = auVar5._0_8_;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = thunk_FUN_100546cd0;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x1d8) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x178);
    pcVar1 = thunk_FUN_100546ce4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100547804 | FUN_100547804 */

void FUN_100547804(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x148) = param_3;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 **)(unaff_x22 + 0x140) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2[6];
  _swift_task_switch(FUN_100547840,param_1,0);
  return;
}



/* Address: 0x100547840 | FUN_100547840 */

void FUN_100547840(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x168) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x138);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x170) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100547980;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)plVar4;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x138) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x138));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1005479e0,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x100547980 | FUN_100547980 */

void FUN_100547980(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x170));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x138);
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar3 + 0x178) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x138);
    pcVar1 = FUN_100547d44;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005479e0 | FUN_1005479e0 */

void FUN_1005479e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String function;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x138);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100547cd8;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar13 = *(long *)(puVar4 + -8);
  lVar9 = *(long *)(lVar13 + 0x40);
  uVar8 = lVar9 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar15,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x138),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x140);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar15,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0xd8) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar20;
  *(undefined8 *)(unaff_x22 + 200) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0x100) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar18;
  uVar18 = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0x110) = puVar3[6];
  *(undefined8 *)(unaff_x22 + 0x108) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar13 + 0x10))();
  uVar11 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar16 = uVar11 + 0x60 & (uVar11 ^ 0xffffffffffffffff);
  uVar14 = lVar9 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100eddf30;
  _swift_allocObject(&DAT_100eddf30,uVar14 + 0x20,uVar11 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar12;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar22 = puVar3[3];
  uVar21 = puVar3[2];
  uVar20 = puVar3[5];
  uVar18 = puVar3[4];
  uVar12 = puVar3[6];
  uVar23 = *puVar3;
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x58) = uVar12;
  *(undefined8 *)(puVar6 + 0x50) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar22;
  *(undefined8 *)(puVar6 + 0x38) = uVar21;
  (**(code **)(lVar13 + 0x20))(puVar6 + uVar16,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar14) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar14) = uVar17;
  *(undefined8 *)(puVar6 + uVar14 + 0x10) = uVar10;
  *(undefined8 *)((long)(puVar6 + uVar14 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890(unaff_x22 + 200,unaff_x22 + 0xe0);
  FUN_10000ca28(unaff_x22 + 0xf8,unaff_x22 + 0x118);
  FUN_10054b974((undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0x128);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar10,uVar1);
  FUN_1004e9c98(0,0,uVar15,&DAT_100c56df8,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar15);
  (**(code **)(lVar13 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100547cd8 | FUN_100547cd8 */

void FUN_100547cd8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x138);
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x178) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x138);
    pcVar1 = FUN_100547d44;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100547d44 | FUN_100547d44 */

void FUN_100547d44(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100547d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100547d50 | FUN_100547d50 */

void FUN_100547d50(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x188) = param_3;
  *(undefined8 *)(unaff_x22 + 400) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 **)(unaff_x22 + 0x180) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2[6];
  _swift_task_switch(FUN_100547d8c,param_1,0);
  return;
}



/* Address: 0x100547d8c | FUN_100547d8c */

void FUN_100547d8c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x1a8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x178);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005473f0;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)(unaff_x22 + 200);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x178) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x178));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100547ed4,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x100547ed4 | FUN_100547ed4 */

void FUN_100547ed4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String function;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x178);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xe8;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100547780;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcf000;
  FUN_1000f7830(&DAT_100fcf000,&DAT_100c56da0);
  lVar9 = *(long *)(puVar4 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  uVar8 = lVar10 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar15,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x178),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x180);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar15,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0x118) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0x140) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
  uVar18 = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0x150) = puVar3[6];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar9 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar14 = uVar12 + 0x60 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = lVar10 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100edde90;
  _swift_allocObject(&DAT_100edde90,uVar16 + 0x20,uVar12 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar22 = puVar3[3];
  uVar21 = puVar3[2];
  uVar20 = puVar3[5];
  uVar18 = puVar3[4];
  uVar13 = puVar3[6];
  uVar23 = *puVar3;
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x58) = uVar13;
  *(undefined8 *)(puVar6 + 0x50) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar22;
  *(undefined8 *)(puVar6 + 0x38) = uVar21;
  (**(code **)(lVar9 + 0x20))(puVar6 + uVar14,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar16) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar16) = uVar17;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = uVar11;
  *(undefined8 *)((long)(puVar6 + uVar16 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890((undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0x120);
  FUN_10000ca28((undefined8 *)(unaff_x22 + 0x138),unaff_x22 + 0x158);
  FUN_10054b738((undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x168);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar11,uVar1);
  FUN_1004e9c98(0,0,uVar15,&DAT_100c56db0,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar15);
  (**(code **)(lVar9 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1005481ec | FUN_1005481ec */

void FUN_1005481ec(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x188) = param_3;
  *(undefined8 *)(unaff_x22 + 400) = param_4;
  *(undefined8 *)(unaff_x22 + 0x178) = param_1;
  *(undefined8 **)(unaff_x22 + 0x180) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_2[6];
  _swift_task_switch(FUN_100548228,param_1,0);
  return;
}



/* Address: 0x100548228 | FUN_100548228 */

void FUN_100548228(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x1a8) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x178);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005473f0;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)(unaff_x22 + 200);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x178) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x178));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100548370,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x100548370 | FUN_100548370 */

void FUN_100548370(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  long unaff_x22;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String function;
  
  uVar15 = *(ulong *)(unaff_x22 + 0x178);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xe8;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100547780;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcefe0;
  FUN_1000f7830(&DAT_100fcefe0,&DAT_100c56d50);
  lVar9 = *(long *)(puVar4 + -8);
  lVar10 = *(long *)(lVar9 + 0x40);
  uVar8 = lVar10 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar15,0);
  if ((uVar15 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x178),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x180);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar15 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 400);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar15,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar18 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0x118) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar18;
  uVar18 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0x140) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
  uVar18 = puVar3[5];
  *(undefined8 *)(unaff_x22 + 0x150) = puVar3[6];
  *(undefined8 *)(unaff_x22 + 0x148) = uVar18;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar9 + 0x10))();
  uVar12 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar14 = uVar12 + 0x60 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = lVar10 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100edddf0;
  _swift_allocObject(&DAT_100edddf0,uVar16 + 0x20,uVar12 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar13;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar22 = puVar3[3];
  uVar21 = puVar3[2];
  uVar20 = puVar3[5];
  uVar18 = puVar3[4];
  uVar13 = puVar3[6];
  uVar23 = *puVar3;
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar23;
  *(undefined8 *)(puVar6 + 0x58) = uVar13;
  *(undefined8 *)(puVar6 + 0x50) = uVar20;
  *(undefined8 *)(puVar6 + 0x48) = uVar18;
  *(undefined8 *)(puVar6 + 0x40) = uVar22;
  *(undefined8 *)(puVar6 + 0x38) = uVar21;
  (**(code **)(lVar9 + 0x20))(puVar6 + uVar14,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar16) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar16) = uVar17;
  *(undefined8 *)(puVar6 + uVar16 + 0x10) = uVar11;
  *(undefined8 *)((long)(puVar6 + uVar16 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890((undefined8 *)(unaff_x22 + 0x108),unaff_x22 + 0x120);
  FUN_10000ca28((undefined8 *)(unaff_x22 + 0x138),unaff_x22 + 0x158);
  FUN_10054b4fc((undefined8 *)(unaff_x22 + 0x148),unaff_x22 + 0x168);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar11,uVar1);
  FUN_1004e9c98(0,0,uVar15,&DAT_100c56d60,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar15);
  (**(code **)(lVar9 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100548688 | FUN_100548688 */

void FUN_100548688(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_5;
  *(undefined8 *)(unaff_x22 + 0x138) = param_6;
  *(undefined8 *)(unaff_x22 + 0x120) = param_3;
  *(undefined8 *)(unaff_x22 + 0x128) = param_4;
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  *(undefined8 **)(unaff_x22 + 0x118) = param_2;
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)(unaff_x22 + 0xb1) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)(unaff_x22 + 0xa9) = uVar1;
  _swift_task_switch(FUN_1005486bc,param_1,0);
  return;
}



/* Address: 0x1005486bc | FUN_1005486bc */

void FUN_1005486bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  void *pvVar7;
  long unaff_x22;
  undefined8 uVar8;
  String isolation;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar6 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x140) = puVar6;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    pvVar7 = *(void **)(unaff_x22 + 0x110);
    plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x148) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1005487f8;
    isolation.bridgeObject = pvVar7;
    isolation.str = (char *)plVar4;
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x110) == 0) {
    UVar5.unknown = (undefined *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x110));
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100548858,UVar5.unknown,puVar6);
  return;
}



/* Address: 0x1005487f8 | FUN_1005487f8 */

void FUN_1005487f8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x148));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x110);
    pcVar1 = FUN_1000e5808;
  }
  else {
    *(long *)(lVar3 + 0x150) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x110);
    pcVar1 = FUN_100548b8c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100548858 | FUN_100548858 */

void FUN_100548858(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x22;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String function;
  
  uVar12 = *(ulong *)(unaff_x22 + 0x110);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100548b20;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar4 = &DAT_100fcef98;
  FUN_1000f7830(&DAT_100fcef98,&DAT_100c56cb0);
  lVar15 = *(long *)(puVar4 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  uVar8 = lVar14 + 0xf;
  uVar5 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar12,0);
  if ((uVar12 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x110),0);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x110);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x118);
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar12 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar12,1,1,TVar7.unknown);
  uVar20 = puVar3[1];
  uVar17 = *puVar3;
  *(undefined1 *)(unaff_x22 + 0xd0) = *(undefined1 *)(puVar3 + 2);
  *(undefined8 *)(unaff_x22 + 200) = uVar20;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar17;
  uVar17 = puVar3[3];
  *(undefined8 *)(unaff_x22 + 0xf8) = puVar3[4];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar17;
  uVar8 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar8);
  (**(code **)(lVar15 + 0x10))();
  uVar10 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar13 = uVar10 + 0x51 & (uVar10 ^ 0xffffffffffffffff);
  uVar11 = lVar14 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_100eddcb0;
  _swift_allocObject(&DAT_100eddcb0,uVar11 + 0x20,uVar10 | 7);
  *(undefined8 *)(puVar6 + 0x10) = uVar2;
  *(undefined8 *)(puVar6 + 0x18) = uVar18;
  *(undefined8 *)(puVar6 + 0x20) = uVar2;
  uVar17 = *(undefined8 *)((long)puVar3 + 0x21);
  uVar18 = *(undefined8 *)((long)puVar3 + 0x19);
  uVar22 = *puVar3;
  uVar21 = puVar3[3];
  uVar20 = puVar3[2];
  *(undefined8 *)(puVar6 + 0x30) = puVar3[1];
  *(undefined8 *)(puVar6 + 0x28) = uVar22;
  *(undefined8 *)(puVar6 + 0x40) = uVar21;
  *(undefined8 *)(puVar6 + 0x38) = uVar20;
  *(undefined8 *)(puVar6 + 0x49) = uVar17;
  *(undefined8 *)(puVar6 + 0x41) = uVar18;
  (**(code **)(lVar15 + 0x20))(puVar6 + uVar13,uVar8,puVar4);
  *(undefined8 *)((long)(puVar6 + uVar11) + 8) = uVar19;
  *(undefined8 *)(puVar6 + uVar11) = uVar16;
  *(undefined8 *)(puVar6 + uVar11 + 0x10) = uVar9;
  *(undefined8 *)((long)(puVar6 + uVar11 + 0x10) + 8) = uVar1;
  _swift_task_dealloc(uVar8);
  _swift_retain_n(uVar2,2);
  FUN_10054a890(unaff_x22 + 0xc0,unaff_x22 + 0xd8);
  FUN_10000ca28(unaff_x22 + 0xf0,unaff_x22 + 0x100);
  _swift_unknownObjectRetain(uVar16);
  FUN_1001037b4(uVar9,uVar1);
  FUN_1004e9c98(0,0,uVar12,&DAT_100c56cc0,puVar6);
  _swift_release();
  _swift_task_dealloc(uVar12);
  (**(code **)(lVar15 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100548b20 | FUN_100548b20 */

void FUN_100548b20(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x110);
    pcVar1 = FUN_1000e5808;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x150) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x110);
    pcVar1 = FUN_100548b8c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100548b8c | FUN_100548b8c */

void FUN_100548b8c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100548b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100548b98 | FUN_100548b98 */

void FUN_100548b98(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 600) = param_6;
  *(undefined8 *)(unaff_x22 + 0x250) = param_5;
  *(undefined8 *)(unaff_x22 + 0x248) = param_4;
  *(undefined8 *)(unaff_x22 + 0x240) = param_3;
  *(undefined8 *)(unaff_x22 + 0x238) = param_1;
  uVar1 = param_2[8];
  uVar3 = param_2[0xb];
  uVar2 = param_2[10];
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2[9];
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xe0) = uVar2;
  uVar1 = param_2[0xc];
  *(undefined8 *)(unaff_x22 + 0xf8) = param_2[0xd];
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x100) = param_2[0xe];
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x98) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar1;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2[5];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar1;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_100548bec,param_1,0);
  return;
}



/* Address: 0x100548bec | FUN_100548bec */

void FUN_100548bec(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long *plVar2;
  UnownedSerialExecutor UVar3;
  undefined *puVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  String isolation;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 600);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x238);
  puVar4 = &DAT_100fce8b8;
  FUN_1003b6598(&DAT_100fce8b8,param_2,FUN_1005451e4,&TargetProtocolConformanceDescriptor_100c56118)
  ;
  *(undefined **)(unaff_x22 + 0x260) = puVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x90;
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x248);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x240);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar6;
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(unaff_x22 + 0x238);
    plVar2 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x268) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100548d34;
    isolation.bridgeObject = pvVar5;
    isolation.str = (char *)(unaff_x22 + 0x1f8);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  if (*(long *)(unaff_x22 + 0x238) == 0) {
    UVar3.unknown = (undefined *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    _swift_getObjectType(*(long *)(unaff_x22 + 0x238));
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_100548db8,UVar3.unknown,puVar4);
  return;
}



/* Address: 0x100548d34 | FUN_100548d34 */

void FUN_100548d34(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x268));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x280) = *(undefined8 *)(lVar3 + 0x1f8);
    *(undefined8 *)(lVar3 + 0x278) = *(undefined8 *)(lVar3 + 0x200);
    *(undefined1 *)(lVar3 + 0x291) = *(undefined1 *)(lVar3 + 0x208);
    *(undefined1 *)(lVar3 + 0x290) = *(undefined1 *)(lVar3 + 0x209);
    *(undefined8 *)(lVar3 + 0x270) = *(undefined8 *)(lVar3 + 0x210);
    uVar2 = *(undefined8 *)(lVar3 + 0x238);
    pcVar1 = FUN_100549158;
  }
  else {
    *(long *)(lVar3 + 0x288) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x238);
    pcVar1 = FUN_100549178;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100548db8 | FUN_100548db8 */

void FUN_100548db8(void)

{
  undefined8 *puVar1;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  TaskPriority TVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  String function;
  
  puVar1 = (undefined8 *)(unaff_x22 + 0x108);
  uVar12 = *(ulong *)(unaff_x22 + 0x238);
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x218;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_1005490c4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x50);
  _swift_continuation_init(continuation.unknown,1);
  puVar2 = &DAT_100fcef78;
  FUN_1000f7830(&DAT_100fcef78,&DAT_100c56c60);
  lVar11 = *(long *)(puVar2 + -8);
  lVar16 = *(long *)(lVar11 + 0x40);
  uVar6 = lVar16 + 0xf;
  uVar3 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(unaff_x22 + 0xd8);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(unaff_x22 + 0xd0);
  *(undefined8 *)(unaff_x22 + 0x160) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x158) = *(undefined8 *)(unaff_x22 + 0xe0);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x98);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 200);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0xc0);
  _swift_task_isCurrentExecutor(uVar12,0);
  if ((uVar12 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/Client.swift",0x10,1,400,*(undefined8 *)(unaff_x22 + 0x238),0);
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar10 = *(undefined8 *)(unaff_x22 + 600);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
  puVar4 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar12 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar5 = Swift::TaskPriority::typeMetadataAccessor();
  uVar19 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x240);
  (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(uVar12,1,1,TVar5.unknown);
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar11 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar13 = uVar9 + 0xa0 & (uVar9 ^ 0xffffffffffffffff);
  uVar14 = lVar16 + uVar13 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100eddc10;
  _swift_allocObject(&DAT_100eddc10,uVar14 + 0x20,uVar9 | 7);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(puVar4 + 0x70) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(puVar4 + 0x68) = uVar18;
  *(undefined8 *)(puVar4 + 0x80) = uVar21;
  *(undefined8 *)(puVar4 + 0x78) = uVar20;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(puVar4 + 0x90) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(puVar4 + 0x88) = uVar18;
  uVar18 = *puVar1;
  uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(puVar4 + 0x28) = uVar18;
  *(undefined8 *)(puVar4 + 0x40) = uVar21;
  *(undefined8 *)(puVar4 + 0x38) = uVar20;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x138);
  *(undefined8 *)(puVar4 + 0x50) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(puVar4 + 0x48) = uVar18;
  *(undefined8 *)(puVar4 + 0x10) = uVar15;
  *(undefined8 *)(puVar4 + 0x18) = uVar7;
  *(undefined8 *)(puVar4 + 0x20) = uVar15;
  *(undefined8 *)(puVar4 + 0x98) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(puVar4 + 0x60) = uVar21;
  *(undefined8 *)(puVar4 + 0x58) = uVar20;
  (**(code **)(lVar11 + 0x20))(puVar4 + uVar13,uVar6,puVar2);
  *(undefined8 *)((long)(puVar4 + uVar14) + 8) = uVar19;
  *(undefined8 *)(puVar4 + uVar14) = uVar17;
  *(undefined8 *)(puVar4 + uVar14 + 0x10) = uVar8;
  *(undefined8 *)((long)(puVar4 + uVar14 + 0x10) + 8) = uVar10;
  _swift_task_dealloc(uVar6);
  _swift_retain_n(uVar15,2);
  FUN_1000f8cac(puVar1,unaff_x22 + 0x180,&DAT_100fce908,&DAT_100c55a40);
  _swift_unknownObjectRetain(uVar17);
  FUN_1001037b4(uVar8,uVar10);
  FUN_1004e9c98(0,0,uVar12,&DAT_100c56c70,puVar4);
  _swift_release();
  _swift_task_dealloc(uVar12);
  (**(code **)(lVar11 + 8))(uVar3,puVar2);
  _swift_task_dealloc(uVar3);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x1005490c4 | FUN_1005490c4 */

void FUN_1005490c4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x70);
  if (lVar4 == 0) {
    *(undefined8 *)(lVar3 + 0x280) = *(undefined8 *)(lVar3 + 0x218);
    *(undefined8 *)(lVar3 + 0x278) = *(undefined8 *)(lVar3 + 0x220);
    *(undefined1 *)(lVar3 + 0x291) = *(undefined1 *)(lVar3 + 0x228);
    *(undefined1 *)(lVar3 + 0x290) = *(undefined1 *)(lVar3 + 0x229);
    *(undefined8 *)(lVar3 + 0x270) = *(undefined8 *)(lVar3 + 0x230);
    uVar2 = *(undefined8 *)(lVar3 + 0x238);
    pcVar1 = FUN_100549158;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x288) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x238);
    pcVar1 = FUN_100549178;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100549158 | FUN_100549158 */

void FUN_100549158(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100549174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x280),*(undefined8 *)(unaff_x22 + 0x278),
             *(ushort *)(unaff_x22 + 0x290) >> 8 | *(ushort *)(unaff_x22 + 0x290) << 8,
             *(undefined8 *)(unaff_x22 + 0x270));
  return;
}



/* Address: 0x100549178 | FUN_100549178 */

void FUN_100549178(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100549180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100549184 | FUN_100549184 */

/* WARNING: Removing unreachable block (ram,0x000100549324) */
/* WARNING: Removing unreachable block (ram,0x000100549384) */

void FUN_100549184(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcef50;
  FUN_1000f7830(&DAT_100fcef50,&DAT_100c56c38);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar1 = &DAT_100fcef58;
  FUN_1000f7830(&DAT_100fcef58,&DAT_100c56c40);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar5 - extraout_x8_00;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005493b8();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    (**(code **)(lVar6 + 0x38))(puVar5,0,1,puVar1);
    lVar2 = lVar4;
    (**(code **)(lVar6 + 0x20))(lVar4,puVar5,puVar1);
    local_52 = 0;
    FUN_10054a94c();
    puVar3 = &DAT_100edd6e0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_51,&DAT_100edd6e0,&local_52,puVar1,&DAT_100edd6e0,lVar2);
    local_54 = 1;
    FUN_10054a98c();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_53,&DAT_100edd700,&local_54,puVar1,&DAT_100edd700,puVar3);
    (**(code **)(lVar6 + 8))(lVar4,puVar1);
  }
  else {
    _swift_errorRelease();
    (**(code **)(lVar6 + 0x38))(puVar5,1,1,puVar1);
    FUN_1000fb4c4(puVar5,&DAT_100fcef50,&DAT_100c56c38);
  }
  FUN_100004594(param_1);
  return;
}



/* Address: 0x1005493b8 | FUN_1005493b8 */

void FUN_1005493b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce918 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5694c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5694c,&DAT_100edd8e0);
  DAT_100fce918 = pTVar1;
  return;
}


