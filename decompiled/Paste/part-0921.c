/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009e6440 | FUN_1009e6440 */

void FUN_1009e6440(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncStream AVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  puVar1 = &DAT_100ff3d38;
  FUN_1000f7830(&DAT_100ff3d38,&DAT_100c8d420);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  lVar5 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  AVar3.unknown = &DAT_100ff3d08;
  FUN_1000f7830(&DAT_100ff3d08,&DAT_100c8d3a8);
  Swift::AsyncStream::_makeAsyncIterator(AVar3);
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009e6504;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1009e6504 | FUN_1009e6504 */

void FUN_1009e6504(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  _swift_task_switch(FUN_1009e6554,0,0);
  return;
}



/* Address: 0x1009e6554 | FUN_1009e6554 */

void FUN_1009e6554(void)

{
  long lVar1;
  undefined8 uVar2;
  CancellationError CVar3;
  CancellationError CVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  CVar3 = Swift::CancellationError::typeMetadataAccessor();
  CVar4 = CVar3;
  FUN_1009e8a00();
  _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
  Swift::CancellationError::init();
  _swift_willThrow();
  (**(code **)(lVar1 + 8))(uVar2,uVar5);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009e65ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e65f0 | FUN_1009e65f0 */

void FUN_1009e65f0(undefined8 param_1,undefined8 param_2,long param_3)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_90 [8];
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  long lStack_58;
  
  puVar2 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_90 + -extraout_x8;
  FUN_1000f8cac(param_1,puVar2,&DAT_100ff3d28,&DAT_100c8e750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_1000fb4c4(puVar2,&DAT_100ff3d28,&DAT_100c8e750);
    uVar6 = 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar8 + 8))(puVar2,TVar3.unknown);
    uVar6 = (ulong)_Var1 | 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  if (lVar8 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar8);
    _swift_unknownObjectRetain(lVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar8);
  }
  local_78 = *unaff_x20;
  puStack_80 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_70 = 0;
    uStack_68 = 0;
    puStack_80 = &local_70;
    local_60 = UVar5.unknown;
    lStack_58 = lVar7;
  }
  local_88 = 1;
  _swift_task_create(uVar6,&local_88,PTR___type_metadata_for____100eae0c8 + 8,param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x1009e6794 | FUN_1009e6794 */

void FUN_1009e6794(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  TaskPriority TVar4;
  UnownedSerialExecutor UVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined auStack_a0 [8];
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = auStack_a0 + -extraout_x8;
  FUN_1000f8cac(param_1,puVar2,&DAT_100ff3d28,&DAT_100c8e750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar8 = *(long *)(TVar3.unknown + -8);
  TVar4.unknown = puVar2;
  (**(code **)(lVar8 + 0x30))(puVar2,1,TVar3.unknown);
  if ((int)TVar4.unknown == 1) {
    FUN_1000fb4c4(puVar2,&DAT_100ff3d28,&DAT_100c8e750);
    uVar6 = 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar4);
    (**(code **)(lVar8 + 8))(puVar2,TVar3.unknown);
    uVar6 = (ulong)_Var1 | 0x3100;
    lVar8 = *(long *)(param_3 + 0x10);
  }
  if (lVar8 == 0) {
    UVar5.unknown = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(param_3 + 0x18);
    _swift_getObjectType(lVar8);
    _swift_unknownObjectRetain(lVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar8);
  }
  local_88 = *unaff_x20;
  puStack_90 = (undefined8 *)0x0;
  if (lVar7 != 0 || UVar5.unknown != (undefined *)0x0) {
    local_80 = 0;
    uStack_78 = 0;
    puStack_90 = &local_80;
    local_70 = UVar5.unknown;
    lStack_68 = lVar7;
  }
  local_98 = 1;
  _swift_task_create(uVar6,&local_98,*(undefined8 *)(param_4 + 0x10),param_2,param_3);
  _swift_release();
  return;
}



/* Address: 0x1009e693c | FUN_1009e693c */

void FUN_1009e693c(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001009e69b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1,param_6);
  return;
}



/* Address: 0x1009e69b8 | FUN_1009e69b8 */

void FUN_1009e69b8(ThrowingTaskGroup param_1,undefined8 param_2,undefined8 param_3,
                  undefined8 param_4)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005cd444;
    Swift::ThrowingTaskGroup::_next(param_1);
    return;
  }
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_1009c7ee8(plVar2,param_1.unknown,param_2,param_3,param_4);
  return;
}



/* Address: 0x1009e6abc | FUN_1009e6abc */

void FUN_1009e6abc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  long *plVar2;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x18) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)thunk_FUN_1005cd444;
    Swift::_withThrowingTaskGroup();
    return;
  }
  plVar2 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e8148(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1009e6c14 | FUN_1009e6c14 */

void FUN_1009e6c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_11;
  *(undefined8 *)(unaff_x22 + 0x68) = param_12;
  *(undefined8 *)(unaff_x22 + 0x50) = param_9;
  *(undefined8 *)(unaff_x22 + 0x58) = param_10;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = param_8;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar1 = 0;
  FUN_100a359a4(0,param_11);
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar1 = 0;
  FUN_1009eeb08();
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar1;
  lVar1 = *(long *)(lVar1 + 0x40);
  *(long *)(unaff_x22 + 0x98) = lVar1;
  uVar2 = lVar1 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  _swift_task_switch(FUN_1009e6cc8,0,0);
  return;
}



/* Address: 0x1009e6cc8 | FUN_1009e6cc8 */

void FUN_1009e6cc8(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  byte bVar14;
  undefined *puVar15;
  ulong uVar16;
  TaskPriority TVar17;
  long *plVar18;
  int *piVar19;
  undefined8 uVar20;
  ulong uVar21;
  long unaff_x22;
  ulong uVar22;
  ulong uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar8 = *(long *)(unaff_x22 + 0x90);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  lVar9 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x70);
  piVar19 = *(int **)(unaff_x22 + 0x48);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar15 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  uVar16 = *(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar16);
  TVar17 = Swift::TaskPriority::typeMetadataAccessor();
  uVar20 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(TVar17.unknown + -8) + 0x38))(uVar16,1,1,TVar17.unknown);
  FUN_1000c495c(uVar12,uVar7,FUN_1009eeb08);
  (**(code **)(lVar4 + 0x10))(uVar3,uVar6,uVar10);
  bVar13 = *(byte *)(lVar8 + 0x50);
  uVar21 = (ulong)bVar13 + 0x38 & ((ulong)bVar13 ^ 0xffffffffffffffff);
  bVar14 = *(byte *)(lVar4 + 0x50);
  uVar22 = lVar2 + (ulong)bVar14 + uVar21 & ((ulong)bVar14 ^ 0xffffffffffffffff);
  uVar23 = lVar9 + uVar22 + 7 & 0xfffffffffffffff8;
  puVar15 = &DAT_100f27078;
  _swift_allocObject(&DAT_100f27078,uVar23 + 0x18,bVar13 | bVar14 | 7);
  *(undefined8 *)(puVar15 + 0x10) = 0;
  *(undefined8 *)(puVar15 + 0x18) = 0;
  *(undefined8 *)(puVar15 + 0x28) = uVar27;
  *(undefined8 *)(puVar15 + 0x20) = uVar25;
  *(undefined8 *)(puVar15 + 0x30) = uVar5;
  FUN_1000523d8(uVar7,puVar15 + uVar21,FUN_1009eeb08);
  (**(code **)(lVar4 + 0x20))(puVar15 + uVar22,uVar3,uVar10);
  *(undefined8 *)(puVar15 + uVar23) = uVar11;
  *(undefined8 *)((long)(puVar15 + uVar23 + 8) + 8) = uVar26;
  *(undefined8 *)(puVar15 + uVar23 + 8) = uVar24;
  _swift_retain();
  _swift_retain(uVar20);
  FUN_1009e65f0(uVar16,&DAT_100c8d448,puVar15);
  FUN_1000fb4c4(uVar16,&DAT_100ff3d28,&DAT_100c8e750);
  _swift_task_dealloc(uVar16);
  iVar1 = *piVar19;
  plVar18 = (long *)(ulong)(uint)piVar19[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar18;
  *plVar18 = unaff_x22;
  plVar18[1] = (long)FUN_1009e6f00;
                    /* WARNING: Could not recover jumptable at 0x0001009e6efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar19))(plVar18,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1009e6f00 | FUN_1009e6f00 */

void FUN_1009e6f00(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa8));
  if (unaff_x20 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x88);
    _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xa0));
    _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009e6f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  _swift_task_switch(FUN_1009e6f7c,0,0);
  return;
}



/* Address: 0x1009e6f7c | FUN_1009e6f7c */

void FUN_1009e6f7c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ThrowingTaskGroup TVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  TVar3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x18);
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  Swift::ThrowingTaskGroup::cancelAll(TVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e7008. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e700c | FUN_1009e700c */

void FUN_1009e700c(void)

{
  long *plVar1;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x7;
  plVar1 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009e7090;
  FUN_1009e712c(in_x4,in_x5,in_stack_00000008,in_stack_00000010);
  return;
}



/* Address: 0x1009e7090 | FUN_1009e7090 */

void FUN_1009e7090(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x28) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x20));
  _swift_task_switch(FUN_1009e70e8,0,0);
  return;
}



/* Address: 0x1009e70e8 | FUN_1009e70e8 */

void FUN_1009e70e8(void)

{
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x28) == '\0') {
    (**(code **)(unaff_x22 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x0001009e7128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e712c | FUN_1009e712c */

void FUN_1009e712c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  lVar1 = 0;
  FUN_1009ea95c();
  *(long *)(unaff_x22 + 0x50) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  lVar1 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar3 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  _swift_task_switch(FUN_1009e71c0,0,0);
  return;
}



/* Address: 0x1009e71c0 | FUN_1009e71c0 */

void FUN_1009e71c0(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 0x10))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x30),
             *(undefined8 *)(unaff_x22 + 0x40));
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(lVar1 + 0x18);
  plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009e7244;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1009e7244 | FUN_1009e7244 */

void FUN_1009e7244(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xd8) = 0;
    pcVar1 = FUN_1009e733c;
  }
  else {
    pcVar1 = FUN_1009e72ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e72ac | FUN_1009e72ac */

void FUN_1009e72ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x10);
  _swift_errorRetain(uVar2);
  FUN_1009ec4a8(uVar2,uVar1);
  _swift_errorRelease(uVar2);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x40));
  _swift_errorRelease(uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e7338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1009e733c | FUN_1009e733c */

void FUN_1009e733c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  char cVar7;
  code *pcVar8;
  int iVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  ulong *puVar25;
  code *pcVar26;
  long unaff_x22;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  undefined8 uVar31;
  
  uVar24 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar21 = *(ulong *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x98) = uVar24;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar23;
  *(ulong *)(unaff_x22 + 0xa8) = uVar21;
  if (0xfe < uVar21 >> 0x38) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x40));
    uVar24 = 0;
LAB_1009e7420:
    uVar23 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x60);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001009e7460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar24);
    return;
  }
  cVar7 = (char)(uVar21 >> 0x38);
  if (cVar7 == '\0') {
    lVar28 = *(long *)(unaff_x22 + 0x68);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x70);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_1009e8f0c();
    (**(code **)(lVar28 + 8))(uVar24,uVar23);
    uVar24 = 1;
    goto LAB_1009e7420;
  }
  if (cVar7 == '\x01') {
    FUN_1008758fc();
    plVar10 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar10;
    *plVar10 = unaff_x22;
    plVar10[1] = (long)FUN_1009e7b40;
    FUN_1009eae7c(*(undefined8 *)(unaff_x22 + 0x80));
    return;
  }
  lVar28 = *(long *)(*(long *)(unaff_x22 + 0x78) + 0x10);
  iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar28 + 0x58));
  if (iVar9 != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b24);
    (*pcVar8)();
  }
  uVar20 = *(undefined8 *)(lVar28 + 0x18);
  uVar22 = *(ulong *)(lVar28 + 0x20);
  puVar11 = *(undefined8 **)(lVar28 + 0x10);
  lVar29 = *(long *)(lVar28 + 0x28);
  lVar30 = *(long *)(lVar28 + 0x30);
  uVar6 = *(undefined2 *)(lVar28 + 0x38);
  bVar3 = *(byte *)(lVar28 + 0x3a);
  if (bVar3 < 3) {
    bVar4 = *(byte *)(lVar28 + 0x21);
    if (bVar3 == 0) {
      FUN_1009e8ec8();
      FUN_1006883ac();
      uVar20 = *(undefined8 *)(lVar28 + 0x10);
      uVar1 = *(undefined8 *)(lVar28 + 0x18);
      uVar12 = *(undefined8 *)(lVar28 + 0x20);
      uVar2 = *(undefined8 *)(lVar28 + 0x28);
      uVar31 = *(undefined8 *)(lVar28 + 0x30);
      *(undefined8 *)(lVar28 + 0x10) = *puVar11;
      *(ulong *)(lVar28 + 0x18) = (ulong)bVar4 & 1;
      *(undefined8 *)(lVar28 + 0x28) = 0;
      *(undefined8 *)(lVar28 + 0x30) = 0;
      uVar6 = *(undefined2 *)(lVar28 + 0x38);
      *(undefined2 *)(lVar28 + 0x38) = 0;
      *(ulong *)(lVar28 + 0x20) = 0;
      uVar5 = *(undefined1 *)(lVar28 + 0x3a);
      *(undefined1 *)(lVar28 + 0x3a) = 2;
      _swift_retain();
      FUN_1009e8f30(uVar20,uVar1,uVar12,uVar2,uVar31,uVar6,uVar5);
      goto LAB_1009e77e0;
    }
    if (bVar3 != 1) {
      FUN_1009e8ec8();
      _swift_release(puVar11);
      _swift_errorRelease(uVar22 & 0xffffffffffff0000 | uVar22 & 0xff | (ulong)bVar4 << 8);
      goto LAB_1009e77e0;
    }
    bVar3 = *(byte *)(lVar28 + 0x39);
    if (lVar30 == 0) {
      FUN_1009e8ec8();
      FUN_1009e8f30(puVar11,uVar20,uVar22,lVar29,0,uVar6,1);
      *(long *)(lVar28 + 0x10) = lVar29;
      *(byte *)(lVar28 + 0x18) = bVar3 & 1;
      *(undefined8 *)(lVar28 + 0x20) = 0;
      *(undefined1 *)(lVar28 + 0x3a) = 2;
      goto LAB_1009e77e0;
    }
    lVar27 = *(long *)(lVar29 + 0x18);
    FUN_1009e8ec8();
    _swift_release(lVar29);
    if (lVar27 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b34);
      (*pcVar8)();
    }
    FUN_1009e8f30(*(undefined8 *)(lVar28 + 0x10),*(undefined8 *)(lVar28 + 0x18),
                  *(undefined8 *)(lVar28 + 0x20),*(undefined8 *)(lVar28 + 0x28),
                  *(undefined8 *)(lVar28 + 0x30),*(undefined2 *)(lVar28 + 0x38),
                  *(undefined1 *)(lVar28 + 0x3a));
    *(ulong *)(lVar28 + 0x10) = (ulong)bVar3 & 1;
    *(undefined8 *)(lVar28 + 0x20) = 0;
    *(undefined8 *)(lVar28 + 0x18) = 0;
    *(undefined8 *)(lVar28 + 0x30) = 0;
    *(undefined8 *)(lVar28 + 0x28) = 0;
    *(undefined2 *)(lVar28 + 0x38) = 0;
    *(undefined1 *)(lVar28 + 0x3a) = 4;
    plVar10 = *(long **)(lVar28 + 0x40);
    *(undefined8 *)(lVar28 + 0x40) = 0;
    _swift_errorRetain(0);
    _swift_errorRelease(0);
    iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar28 + 0x58));
    if (iVar9 != 0) goto LAB_1009e7b24;
    _swift_errorRetain(0);
    puVar11 = *(undefined8 **)(*(long *)(lVar30 + 0x40) + 0x28);
    *puVar11 = 0;
    puVar11[1] = 0;
    *(undefined8 *)((long)puVar11 + 0xf) = 0;
    _swift_continuation_throwingResume(lVar30);
    if (plVar10 != (long *)0x0) {
      lVar28 = *(long *)(*plVar10 +
                         *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8
                        + 0x10);
      uVar22 = (ulong)*(uint *)(*plVar10 + 0x30) + 7 & 0x1fffffff8;
      iVar9 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar10 + uVar22));
      if (iVar9 != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b38);
        (*pcVar8)();
      }
      uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
      FUN_1000c495c((long)plVar10 + lVar28,uVar12,FUN_1009ea95c);
      _swift_getEnumCaseMultiPayload(uVar12,uVar20);
      iVar9 = (int)uVar12;
      if (iVar9 < 2) {
        if (iVar9 == 0) {
          uVar20 = *(undefined8 *)(unaff_x22 + 0x58);
          FUN_10005241c((long)plVar10 + lVar28,FUN_1009ea95c);
          puVar16 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          uVar15 = *(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xf;
          uVar13 = uVar15 & 0xfffffffffffffff0;
          _swift_task_alloc(uVar13);
          FUN_10011532c(uVar20,uVar13,&DAT_100ff3d50,&DAT_100c8d458);
          puVar16 = &DAT_100ff3d48;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar29 = *(long *)(puVar16 + -8);
          uVar14 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc(uVar14);
          uVar15 = uVar15 & 0xfffffffffffffff0;
          _swift_task_alloc();
          FUN_1000f8cac(uVar13,uVar15,&DAT_100ff3d50,&DAT_100c8d458);
          uVar17 = uVar15;
          (**(code **)(lVar29 + 0x30))(uVar15,1,puVar16);
          if ((int)uVar17 == 1) {
            FUN_1000fb4c4(uVar13,&DAT_100ff3d50,&DAT_100c8d458);
            FUN_1000fb4c4(uVar15,&DAT_100ff3d50,&DAT_100c8d458);
            _swift_task_dealloc(uVar15);
          }
          else {
            (**(code **)(lVar29 + 0x20))(uVar14,uVar15,puVar16);
            _swift_task_dealloc(uVar15);
            Swift::CheckedContinuation::resume();
            (**(code **)(lVar29 + 8))(uVar14,puVar16);
            FUN_1000fb4c4(uVar13,&DAT_100ff3d50,&DAT_100c8d458);
          }
          uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
          _swift_task_dealloc(uVar14);
          _swift_storeEnumTagMultiPayload((long)plVar10 + lVar28,uVar20,3);
          _swift_task_dealloc(uVar13);
        }
        else {
          puVar25 = *(ulong **)(unaff_x22 + 0x58);
          FUN_10005241c((long)plVar10 + lVar28,FUN_1009ea95c);
          uVar14 = *puVar25;
          *(ulong *)(unaff_x22 + 0x28) = uVar14;
          puVar16 = &DAT_100ff3d48;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar29 = *(long *)(puVar16 + -8);
          bVar3 = *(byte *)(lVar29 + 0x50);
          uVar15 = *(long *)(lVar29 + 0x40) + 0xf;
          uVar17 = uVar15 & 0xfffffffffffffff0;
          _swift_task_alloc(uVar17);
          puVar18 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          uVar13 = *(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc(uVar13);
          if (*(long *)(uVar14 + 0x18) < 1) {
            pcVar8 = *(code **)(lVar29 + 0x38);
          }
          else {
            do {
              uVar19 = uVar14;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar19 & 1) == 0) {
                FUN_1009ed5b0();
                uVar14 = *(ulong *)(unaff_x22 + 0x28);
              }
              pcVar26 = *(code **)(lVar29 + 0x20);
              (*pcVar26)(uVar13,uVar14 + (bVar3 + 0x28 & (bVar3 ^ 0xffffffff)) +
                                *(long *)(lVar29 + 0x48) * *(long *)(uVar14 + 0x20),puVar16);
              lVar27 = *(long *)(uVar14 + 0x20) + 1;
              if (SCARRY8(*(long *)(uVar14 + 0x20),1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b2c);
                (*pcVar8)();
              }
              if (*(long *)(uVar14 + 0x10) <= lVar27) {
                lVar27 = 0;
              }
              *(long *)(uVar14 + 0x20) = lVar27;
              if (SBORROW8(*(long *)(uVar14 + 0x18),1)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b30);
                (*pcVar8)();
              }
              *(long *)(uVar14 + 0x18) = *(long *)(uVar14 + 0x18) + -1;
              pcVar8 = *(code **)(lVar29 + 0x38);
              (*pcVar8)(uVar13,0,1,puVar16);
              (*pcVar26)(uVar17,uVar13,puVar16);
              _swift_task_dealloc(uVar13);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar29 + 8))(uVar17,puVar16);
              _swift_task_dealloc(uVar17);
              uVar17 = uVar15 & 0xfffffffffffffff0;
              _swift_task_alloc();
              puVar18 = &DAT_100ff3d50;
              FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
              uVar13 = *(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
              _swift_task_alloc();
            } while (0 < *(long *)(uVar14 + 0x18));
          }
          uVar20 = *(undefined8 *)(unaff_x22 + 0x50);
          (*pcVar8)(uVar13,1,1,puVar16);
          _swift_release(uVar14);
          FUN_1000fb4c4(uVar13,&DAT_100ff3d50,&DAT_100c8d458);
          _swift_task_dealloc(uVar13);
          _swift_task_dealloc(uVar17);
          _swift_storeEnumTagMultiPayload((long)plVar10 + lVar28,uVar20,3);
        }
      }
      else if (iVar9 != 2) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7868);
        (*pcVar8)();
      }
      iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar10 + uVar22));
      FUN_1009e8f0c(uVar24,uVar23,uVar21);
      FUN_1009e8f20(lVar30,0);
      if (iVar9 != 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b3c);
        (*pcVar8)();
      }
      _swift_release(plVar10);
      goto LAB_1009e7808;
    }
  }
  else {
    if (bVar3 == 3) {
      FUN_1009e8ec8();
    }
    else {
      if (bVar3 != 4) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b40);
        (*pcVar8)();
      }
      FUN_1009e8ec8();
    }
LAB_1009e77e0:
    iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar28 + 0x58));
    if (iVar9 != 0) {
LAB_1009e7b24:
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009e7b28);
      (*pcVar8)();
    }
    lVar30 = 0;
  }
  FUN_1009e8f0c(uVar24,uVar23,uVar21);
  FUN_1009e8f20(lVar30,0);
LAB_1009e7808:
  plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1009e7d98;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1009e7b40 | FUN_1009e7b40 */

void FUN_1009e7b40(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb0));
  _swift_task_switch(FUN_1009e7b90,0,0);
  return;
}



/* Address: 0x1009e7b90 | FUN_1009e7b90 */

void FUN_1009e7b90(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 uVar7;
  long unaff_x22;
  ulong uVar8;
  long lVar9;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_1009ecd20(uVar3,*(undefined8 *)(unaff_x22 + 0xa0),
                *(ulong *)(unaff_x22 + 0xa8) & 0xffffffffffffff,
                *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x10));
  if (((uint)uVar3 & 0xff) == 1) {
    plVar6 = *(long **)(unaff_x22 + 0x80);
    lVar9 = *(long *)(*plVar6 + *(long *)
                                 PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8
                     + 0x10);
    uVar8 = (ulong)*(uint *)(*plVar6 + 0x30) + 7 & 0x1fffffff8;
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar6 + uVar8));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e7d30);
      (*pcVar1)();
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
    FUN_1000c495c((long)plVar6 + lVar9,uVar3,FUN_1009ea95c);
    _swift_getEnumCaseMultiPayload(uVar3,uVar5);
    if ((int)uVar3 < 2) {
      FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x60),FUN_1009ea95c);
    }
    else if ((int)uVar3 == 2) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
      FUN_10005241c((long)plVar6 + lVar9,FUN_1009ea95c);
      puVar4 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      (**(code **)(*(long *)(puVar4 + -8) + 0x38))((long)plVar6 + lVar9,1,1,puVar4);
      _swift_storeEnumTagMultiPayload((long)plVar6 + lVar9,uVar3,0);
    }
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar6 + uVar8));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e7d34);
      (*pcVar1)();
    }
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  FUN_1009e8f0c(uVar7,uVar3,uVar5);
  FUN_1009e8f0c(uVar7,uVar3,uVar5);
  plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1009e7d34;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1009e7d34 | FUN_1009e7d34 */

void FUN_1009e7d34(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e733c;
  }
  else {
    pcVar1 = FUN_1009e7e70;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e7d98 | FUN_1009e7d98 */

void FUN_1009e7d98(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xd8) = 1;
    pcVar1 = FUN_1009e733c;
  }
  else {
    pcVar1 = FUN_1009e7e04;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e7e04 | FUN_1009e7e04 */

void FUN_1009e7e04(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x40));
  _swift_errorRelease(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009e7e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1009e7e70 | FUN_1009e7e70 */

void FUN_1009e7e70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  if ((*(byte *)(unaff_x22 + 0xd8) & 1) == 0) {
    uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x78) + 0x10);
    _swift_errorRetain(uVar2);
    FUN_1009ec4a8(uVar2,uVar1);
    _swift_errorRelease(uVar2);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
            (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x40));
  _swift_errorRelease(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009e7f04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0);
  return;
}



/* Address: 0x1009e7f08 | FUN_1009e7f08 */

void FUN_1009e7f08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_10090c6f0(plVar5,param_1,uVar3,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x1009e7f88 | FUN_1009e7f88 */

void FUN_1009e7f88(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff3cf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff3cd8;
  FUN_1000f8b08(&DAT_100ff3cd8,&DAT_100c8d340);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8d840;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8d840,puVar1);
  DAT_100ff3cf8 = pTVar2;
  return;
}



/* Address: 0x1009e7fd8 | FUN_1009e7fd8 */

void FUN_1009e7fd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5378(plVar5,param_1,uVar3,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x1009e8058 | FUN_1009e8058 */

void FUN_1009e8058(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff3d00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff3c00;
  FUN_1000f8b08(&DAT_100ff3c00,&DAT_100c8d460);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c66380;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c66380,puVar1);
  DAT_100ff3d00 = pTVar2;
  return;
}



/* Address: 0x1009e80a8 | FUN_1009e80a8 */

void FUN_1009e80a8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e80b8 | FUN_1009e80b8 */

void FUN_1009e80b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5938(plVar3,param_1,param_2,uVar2,uVar4,uVar1);
  return;
}



/* Address: 0x1009e8148 | FUN_1009e8148 */

void FUN_1009e8148(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x128) = param_7;
  *(undefined8 *)(unaff_x22 + 0x130) = param_8;
  *(undefined8 *)(unaff_x22 + 0x118) = param_1;
  *(undefined8 *)(unaff_x22 + 0x120) = param_6;
  if (param_4 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_5 = 0;
  }
  else {
    _swift_getObjectType(param_4);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x138) = UVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x140) = param_5;
  _swift_task_switch(FUN_1009e81c0,UVar1.unknown);
  return;
}



/* Address: 0x1009e81c0 | FUN_1009e81c0 */

void FUN_1009e81c0(void)

{
  int iVar1;
  undefined *puVar2;
  ThrowingTaskGroup<undefined,undefined> TVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  piVar5 = *(int **)(unaff_x22 + 0x120);
  _swift_taskGroup_initialize(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x130));
  puVar2 = &DAT_100ff3d20;
  FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
  *(undefined **)(unaff_x22 + 0x148) = puVar2;
  TVar3 = Swift::ThrowingTaskGroup::init((void *)(unaff_x22 + 0x10));
  *(undefined **)(unaff_x22 + 0x110) = TVar3.unknown;
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x150) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009c7c74;
                    /* WARNING: Could not recover jumptable at 0x0001009e8270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (plVar4,*(undefined8 *)(unaff_x22 + 0x118),unaff_x22 + 0x110);
  return;
}



/* Address: 0x1009e8274 | FUN_1009e8274 */

void FUN_1009e8274(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 local_88;
  long local_70;
  
  puVar2 = &DAT_100ff3d40;
  local_90 = param_2;
  local_88 = param_1;
  FUN_1000f7830(&DAT_100ff3d40,&DAT_100c8d428);
  lVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar7 = lVar9 + 0xfU & 0xfffffffffffffff0;
  lVar5 = (long)&local_90 - uVar7;
  puVar2 = &DAT_100ff3d10;
  FUN_1000f7830(&DAT_100ff3d10,&DAT_100c8d3b0);
  lVar6 = *(long *)(puVar2 + -8);
  (**(code **)(lVar6 + 0x38))(lVar5,1,1,puVar2);
  puVar3 = &DAT_100ff3d08;
  FUN_1000f7830(&DAT_100ff3d08,&DAT_100c8d3a8);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar5 - extraout_x8;
  FUN_1000f7830(&DAT_100ff3d18,&DAT_100c8d3b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  (**(code **)(extraout_x8_00 + 0x10))(lVar10 - extraout_x12,param_3);
  local_70 = lVar5;
  Swift::AsyncStream::_init((BufferingPolicy)((char)PTR___type_metadata_for____100eae0c8 + 8));
  (**(code **)(lVar4 + 0x10))(local_88,lVar10,puVar3);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (lVar10 - extraout_x12) - uVar7;
  FUN_1000f8cac(lVar5,lVar8,&DAT_100ff3d40,&DAT_100c8d428);
  lVar9 = lVar8;
  (**(code **)(lVar6 + 0x30))(lVar8,1,puVar2);
  if ((int)lVar9 != 1) {
    (**(code **)(lVar4 + 8))(lVar10,puVar3);
    (**(code **)(lVar6 + 0x20))(local_90,lVar8,puVar2);
    FUN_1000fb4c4(lVar5,&DAT_100ff3d40,&DAT_100c8d428);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e8494);
  (*pcVar1)();
}



/* Address: 0x1009e8494 | FUN_1009e8494 */

void FUN_1009e8494(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5d88(plVar5,param_1,param_2,uVar3,uVar2,uVar4,uVar6,uVar1);
  return;
}



/* Address: 0x1009e852c | FUN_1009e852c */

void FUN_1009e852c(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100ff3d10;
  FUN_1000f7830(&DAT_100ff3d10,&DAT_100c8d3b0);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e8590 | FUN_1009e8590 */

void FUN_1009e8590(void)

{
  Continuation_conflict CVar1;
  
  CVar1.unknown = &DAT_100ff3d10;
  FUN_1000f7830(&DAT_100ff3d10,&DAT_100c8d3b0);
  Swift::AsyncStream::Continuation::finish(CVar1);
  return;
}



/* Address: 0x1009e85d4 | FUN_1009e85d4 */

void FUN_1009e85d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e5e58(plVar7,param_1,param_2,uVar4,uVar2,uVar5,uVar3,uVar6,uVar1);
  return;
}



/* Address: 0x1009e8670 | FUN_1009e8670 */

void FUN_1009e8670(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100ff3d08;
  FUN_1000f7830(&DAT_100ff3d08,&DAT_100c8d3a8);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e86e8 | FUN_1009e86e8 */

void FUN_1009e86e8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  puVar4 = &DAT_100ff3d08;
  FUN_1000f7830(&DAT_100ff3d08,&DAT_100c8d3a8);
  bVar3 = *(byte *)(*(long *)(puVar4 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar5 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e6428(plVar5,param_1,uVar1,uVar2,
                unaff_x20 + ((ulong)bVar3 + 0x28 & ((ulong)bVar3 ^ 0xffffffffffffffff)),uVar6);
  return;
}



/* Address: 0x1009e878c | FUN_1009e878c */

void FUN_1009e878c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long unaff_x20;
  ulong uVar8;
  
  lVar2 = 0;
  FUN_1009eeb08();
  uVar8 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  puVar7 = (undefined8 *)(unaff_x20 + (uVar8 + 0x38 & (uVar8 ^ 0xffffffffffffffff)));
  uVar3 = 0;
  FUN_1009e8f94(0);
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,uVar3);
  iVar1 = (int)puVar4;
  if (iVar1 == 2) {
    _swift_release(puVar7[1]);
    puVar5 = &DAT_100ff3bf0;
    puVar6 = &DAT_100c8d490;
LAB_1009e885c:
    FUN_1000f7830(puVar5,puVar6);
    puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(puVar5 + 0x30));
    lVar2 = 0;
    FUN_1009e908c();
    puVar4 = puVar7;
    (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar7,1,lVar2);
    if ((int)puVar4 != 0) goto LAB_1009e8930;
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar4 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,puVar5);
    if ((int)puVar4 == 1) {
      _swift_release(*puVar7);
    }
    else {
      puVar5 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(puVar7,puVar5);
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_1009e8930;
      _swift_release(*puVar7);
      puVar5 = &DAT_100ff3bf8;
      puVar6 = &DAT_100c8d470;
      goto LAB_1009e885c;
    }
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar4 = puVar7;
    _swift_getEnumCaseMultiPayload(puVar7,puVar5);
    if ((int)puVar4 == 1) {
      _swift_release(*puVar7);
    }
    else {
      puVar5 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(puVar7,puVar5);
    }
    lVar2 = 0;
    FUN_1009e908c();
  }
  _swift_release(*(undefined8 *)((long)puVar7 + (long)*(int *)(lVar2 + 0x14)));
LAB_1009e8930:
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e8954 | FUN_1009e8954 */

void FUN_1009e8954(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar5 = 0;
  FUN_1009eeb08();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar6 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e693c(plVar6,param_1,uVar1,uVar3,uVar2,uVar4,
                unaff_x20 + (uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff)),uVar8);
  return;
}



/* Address: 0x1009e8a00 | FUN_1009e8a00 */

void FUN_1009e8a00(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  
  if (DAT_100ff3d30 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40;
  _swift_getWitnessTable(PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40,CVar1.unknown);
  DAT_100ff3d30 = puVar2;
  return;
}



/* Address: 0x1009e8a44 | FUN_1009e8a44 */

void FUN_1009e8a44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  FUN_1000fb4c4(param_2,&DAT_100ff3d40,&DAT_100c8d428);
  puVar1 = &DAT_100ff3d10;
  FUN_1000f7830(&DAT_100ff3d10,&DAT_100c8d3b0);
  lVar2 = *(long *)(puVar1 + -8);
  (**(code **)(lVar2 + 0x10))(param_2,param_1,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e8ac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_2,0,1,puVar1);
  return;
}



/* Address: 0x1009e8ac8 | FUN_1009e8ac8 */

void FUN_1009e8ac8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009e8a44(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009e8ad0 | FUN_1009e8ad0 */

void FUN_1009e8ad0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x58);
  plVar11 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar11;
  *plVar11 = unaff_x22;
  plVar11[1] = (long)FUN_1005c804c;
  FUN_1009e6c14(plVar11,param_1,param_2,uVar7,uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar1,uVar6,uVar2
               );
  return;
}



/* Address: 0x1009e8b80 | FUN_1009e8b80 */

void FUN_1009e8b80(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  
  lVar9 = *(long *)(unaff_x20 + 0x28);
  lVar2 = 0;
  FUN_1009eeb08();
  lVar12 = *(long *)(lVar2 + -8);
  uVar11 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar11 = uVar11 + 0x38 & (uVar11 ^ 0xffffffffffffffff);
  lVar2 = 0;
  FUN_100a359a4(0,lVar9);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar10 = (undefined8 *)(unaff_x20 + uVar11);
  uVar3 = 0;
  FUN_1009e8f94(0);
  puVar4 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,uVar3);
  iVar1 = (int)puVar4;
  if (iVar1 == 2) {
    _swift_release(puVar10[1]);
    puVar5 = &DAT_100ff3bf0;
    puVar7 = &DAT_100c8d490;
LAB_1009e8c60:
    FUN_1000f7830(puVar5,puVar7);
    puVar10 = (undefined8 *)((long)puVar10 + (long)*(int *)(puVar5 + 0x30));
    lVar6 = 0;
    FUN_1009e908c();
    puVar4 = puVar10;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar10,1,lVar6);
    if ((int)puVar4 != 0) goto LAB_1009e8d34;
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar4 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,puVar5);
    if ((int)puVar4 == 1) {
      _swift_release(*puVar10);
    }
    else {
      puVar5 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(puVar10,puVar5);
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) goto LAB_1009e8d34;
      _swift_release(*puVar10);
      puVar5 = &DAT_100ff3bf8;
      puVar7 = &DAT_100c8d470;
      goto LAB_1009e8c60;
    }
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar4 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,puVar5);
    if ((int)puVar4 == 1) {
      _swift_release(*puVar10);
    }
    else {
      puVar5 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar5 + -8) + 8))(puVar10,puVar5);
    }
    lVar6 = 0;
    FUN_1009e908c();
  }
  _swift_release(*(undefined8 *)((long)puVar10 + (long)*(int *)(lVar6 + 0x14)));
LAB_1009e8d34:
  uVar8 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar11 = *(long *)(lVar12 + 0x40) + uVar11 + uVar8 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar11 + 7 & 0xfffffffffffffff8;
  (**(code **)(*(long *)(lVar9 + -8) + 8))(unaff_x20 + uVar11,lVar9);
  _swift_release(*(undefined8 *)(unaff_x20 + uVar8));
  _swift_release(*(undefined8 *)(unaff_x20 + uVar8 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009e8db4 | FUN_1009e8db4 */

void FUN_1009e8db4(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar8 = 0;
  FUN_1009eeb08();
  uVar12 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar15 = uVar12 + 0x38 & (uVar12 ^ 0xffffffffffffffff);
  lVar11 = *(long *)(*(long *)(lVar8 + -8) + 0x40);
  lVar8 = 0;
  FUN_100a359a4(0,uVar5);
  uVar12 = (ulong)*(byte *)(*(long *)(lVar8 + -8) + 0x50);
  uVar13 = uVar15 + lVar11 + uVar12 & (uVar12 ^ 0xffffffffffffffff);
  uVar12 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + uVar13 + 7 & 0xfffffffffffffff8;
  uVar14 = *(undefined8 *)(unaff_x20 + uVar12);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = (undefined8 *)(unaff_x20 + uVar12 + 8);
  uVar4 = *puVar1;
  uVar7 = puVar1[1];
  plVar9 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)thunk_FUN_1005c804c;
  FUN_1009e700c(plVar9,param_1,uVar3,uVar6,unaff_x20 + uVar15,unaff_x20 + uVar13,uVar14,uVar4,uVar7,
                uVar2,uVar5,uVar10);
  return;
}



/* Address: 0x1009e8ec8 | FUN_1009e8ec8 */

void FUN_1009e8ec8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == '\x02') {
    _swift_retain();
    _swift_errorRetain(param_3);
    return;
  }
  if (param_7 == '\x01') {
    _swift_retain(param_4);
    return;
  }
  return;
}



/* Address: 0x1009e8f0c | FUN_1009e8f0c */

void FUN_1009e8f0c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (0xfe < param_3 >> 0x38) {
    return;
  }
  FUN_100875938();
  return;
}



/* Address: 0x1009e8f20 | FUN_1009e8f20 */

void FUN_1009e8f20(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_errorRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x1009e8f30 | FUN_1009e8f30 */

void FUN_1009e8f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,char param_7)

{
  if (param_7 == '\x02') {
    _swift_release();
    _swift_errorRelease(param_3);
    return;
  }
  if (param_7 == '\x01') {
    _swift_release(param_4);
    return;
  }
  return;
}



/* Address: 0x1009e8f74 | FUN_1009e8f74 */

void FUN_1009e8f74(undefined8 param_1,undefined8 param_2)

{
  FUN_1000523d8(param_2,param_1,FUN_1009e8f94);
  return;
}



/* Address: 0x1009e8f94 | FUN_1009e8f94 */

void FUN_1009e8f94(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3e88,&TargetEnumDescriptor_100cc8e20);
  return;
}



/* Address: 0x1009e8fa8 | FUN_1009e8fa8 */

void FUN_1009e8fa8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  pthread_mutexattr_t local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1000f8cac(param_2,param_1,&DAT_100ff3c00,&DAT_100c8d460);
  puVar3 = &DAT_100ff3c08;
  FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
  _swift_allocObject();
  puVar3[0x10] = 0;
  local_48.__sig = 0;
  local_48.__opaque[0] = '\0';
  local_48.__opaque[1] = '\0';
  local_48.__opaque[2] = '\0';
  local_48.__opaque[3] = '\0';
  local_48.__opaque[4] = '\0';
  local_48.__opaque[5] = '\0';
  local_48.__opaque[6] = '\0';
  local_48.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_48);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x18),&local_48);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e9088);
    (*pcVar1)();
  }
  FUN_1000fb4c4(param_2,&DAT_100ff3c00,&DAT_100c8d460);
  lVar4 = 0;
  FUN_1009e908c();
  *(undefined **)(param_1 + *(int *)(lVar4 + 0x14)) = puVar3;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009e908c | FUN_1009e908c */

void FUN_1009e908c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff4100,&TargetStructDescriptor_100cc8ef0);
  return;
}



/* Address: 0x1009e90a0 | FUN_1009e90a0 */

void FUN_1009e90a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_1000523d8(param_2,param_1,FUN_1009e908c);
  uVar1 = 0;
  FUN_1009e8f94(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}



/* Address: 0x1009e90e0 | FUN_1009e90e0 */

void FUN_1009e90e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = &DAT_100ff3bf8;
  FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
  iVar1 = *(int *)(puVar2 + 0x30);
  *param_1 = param_2;
  *(int *)(param_1 + 1) = (int)param_3;
  *(int *)((long)param_1 + 0xc) = (int)((ulong)param_3 >> 0x20);
  *(int *)(param_1 + 2) = (int)param_4;
  *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
  *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
  lVar3 = 0;
  FUN_1009e908c();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))((long)param_1 + (long)iVar1,1,1,lVar3);
  uVar4 = 0;
  FUN_1009e8f94(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar4,0);
  return;
}



/* Address: 0x1009e9190 | FUN_1009e9190 */

undefined8 * FUN_1009e9190(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long extraout_x8;
  undefined1 *puVar11;
  undefined1 auStack_60 [8];
  pthread_mutexattr_t local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = 0;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar11 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_storeEnumTagMultiPayload(puVar11);
  plVar5 = (long *)&DAT_100ff3d58;
  FUN_1000f7830(&DAT_100ff3d58,&DAT_100c8d478);
  _swift_allocObject();
  FUN_1000c495c(puVar11,(undefined *)
                        ((long)plVar5 +
                        *(long *)(*plVar5 + *(long *)
                                             PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8
                                 + 0x10)),FUN_1009ea95c);
  uVar1 = *(uint *)(*plVar5 + 0x30);
  local_58.__sig = 0;
  local_58.__opaque[0] = '\0';
  local_58.__opaque[1] = '\0';
  local_58.__opaque[2] = '\0';
  local_58.__opaque[3] = '\0';
  local_58.__opaque[4] = '\0';
  local_58.__opaque[5] = '\0';
  local_58.__opaque[6] = '\0';
  local_58.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_58);
  iVar3 = _pthread_mutex_init((pthread_mutex_t *)((long)plVar5 + ((ulong)uVar1 + 7 & 0x1fffffff8)),
                              &local_58);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009e93cc);
    (*pcVar2)();
  }
  FUN_10005241c(puVar11,FUN_1009ea95c);
  _swift_retain(plVar5);
  uVar6 = 2;
  FUN_1009ec380(2,4,1,plVar5);
  puVar7 = &DAT_100ff3d60;
  FUN_1000f7830(&DAT_100ff3d60,&DAT_100c8d480);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x10) = uVar6;
  puVar8 = &DAT_100ff3d68;
  FUN_1000f7830(&DAT_100ff3d68,&DAT_100c8d488);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x10) = uVar6;
  puVar8[0x18] = 0;
  puVar9 = &DAT_100ff3bf0;
  FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
  iVar3 = *(int *)(puVar9 + 0x30);
  *param_1 = FUN_1009eda50;
  param_1[1] = puVar7;
  lVar4 = 0;
  FUN_1009e908c();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))((long)param_1 + (long)iVar3,1,1,lVar4);
  uVar10 = 0;
  FUN_1009e8f94(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar10,2);
  FUN_1009eda58();
  _swift_allocObject();
  param_1[2] = puVar8;
  param_1[3] = plVar5;
  _swift_retain(uVar6);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009e93d0 | FUN_1009e93d0 */

void FUN_1009e93d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1009e93ec,0,0);
  return;
}



/* Address: 0x1009e93ec | FUN_1009e93ec */

void FUN_1009e93ec(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x28) + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009e9448;
  FUN_1009eae7c(uVar2);
  return;
}



/* Address: 0x1009e9448 | FUN_1009e9448 */

void FUN_1009e9448(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
  _swift_task_switch(FUN_1009e9498,0,0);
  return;
}



/* Address: 0x1009e9498 | FUN_1009e9498 */

void FUN_1009e9498(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_1009ecd20(uVar1,*(undefined8 *)(unaff_x22 + 0x18),
                *(ulong *)(unaff_x22 + 0x20) & 0xffffffffffffff,
                *(undefined8 *)(*(long *)(*(long *)(unaff_x22 + 0x28) + 0x10) + 0x10));
  if (((uint)uVar1 & 0xff) == 1) {
    FUN_1009eb6a8(*(undefined8 *)(unaff_x22 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x0001009e94f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


