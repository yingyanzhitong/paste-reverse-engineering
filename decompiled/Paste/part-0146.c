/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001b6dbc | FUN_1001b6dbc */

undefined8 FUN_1001b6dbc(undefined8 param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  uVar1 = param_1;
  FUN_1001b735c();
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 8))(param_1);
  return uVar1;
}



/* Address: 0x1001b6e04 | FUN_1001b6e04 */

void FUN_1001b6e04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar6 = param_1[1];
  uVar5 = *param_1;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001b75e8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCollections/DiffableCollectionApplier.swift",0x30,1,0x48,UVar3.unknown,pMVar1);
  }
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_6;
  local_80 = param_2;
  local_78 = uVar5;
  uStack_70 = uVar6;
  FUN_1001b8a94(FUN_1001b762c,auStack_b0,"PasteCollections/DiffableCollectionApplier.swift",0x30,2,
                0x4a);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001b6f04 | FUN_1001b6f04 */

void FUN_1001b6f04(long param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001b75e8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCollections/DiffableCollectionApplier.swift",0x30,1,0x4a,UVar3.unknown,pMVar1);
  }
  pMVar1 = (MainActor *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar1 != (MainActor *)0x0) {
    FUN_1001b6fd4(param_2,param_3);
    _swift_release(pMVar2);
    pMVar2 = pMVar1;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001b6fd4 | FUN_1001b6fd4 */

void FUN_1001b6fd4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar5 = *unaff_x20;
  lVar4 = *(long *)(lVar5 + 0x50);
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar10 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uStack_98 = *(undefined8 *)(lVar5 + 0x60);
  uVar11 = *(undefined8 *)(lVar5 + 0x58);
  uVar7 = *(undefined8 *)(lVar5 + 0x68);
  uStack_a8 = *(undefined8 *)(lVar5 + 0x68);
  local_b0 = *(undefined8 *)(lVar5 + 0x60);
  local_a0 = uVar11;
  local_80 = lVar4;
  local_78 = uVar11;
  local_70 = local_b0;
  uStack_68 = uStack_a8;
  puStack_88 = (undefined *)AppKit::NSDiffableDataSourceSnapshot::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar10 - extraout_x8_00;
  (**(code **)(lVar6 + 0x10))(lVar10,(long)unaff_x20 + *(long *)(lVar5 + 0x80),lVar4);
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  FUN_1001b694c(lVar8,lVar10,param_1,param_2,lVar4,uVar11,local_b0,uVar7);
  lVar5 = *(long *)(*unaff_x20 + 0x98);
  if (*(char *)((long)unaff_x20 + lVar5) == '\x01') {
    _swift_beginAccess(unaff_x20 + 2,&local_80,0,0);
    uVar9 = (undefined1)unaff_x20[2];
  }
  else {
    uVar9 = 0;
  }
  *(undefined1 *)((long)unaff_x20 + lVar5) = 1;
  pcVar1 = *(code **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  puVar2 = &DAT_100ebe788;
  _swift_allocObject(&DAT_100ebe788,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &DAT_100ebe7d8;
  _swift_allocObject(&DAT_100ebe7d8,0x38,7);
  *(long *)(puVar3 + 0x10) = lVar4;
  *(undefined8 *)(puVar3 + 0x20) = uStack_98;
  *(undefined8 *)(puVar3 + 0x18) = local_a0;
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined **)(puVar3 + 0x30) = puVar2;
  _swift_retain(puVar2);
  (*pcVar1)(lVar8,uVar9,FUN_1001b7650,puVar3);
  _swift_release(puVar3);
  (**(code **)(local_90 + 8))(lVar8,puStack_88);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1001b71d8 | FUN_1001b71d8 */

void FUN_1001b71d8(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auStack_48 [24];
  
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x18,auStack_48,0,0);
    pcVar2 = *(code **)(param_1 + 0x18);
    if (pcVar2 == (code *)0x0) {
      _swift_release(param_1);
    }
    else {
      uVar1 = *(undefined8 *)(param_1 + 0x20);
      FUN_100011128(pcVar2,uVar1);
      _swift_release(param_1);
      (*pcVar2)();
      FUN_100004550(pcVar2,uVar1);
    }
  }
  return;
}



/* Address: 0x1001b7260 | FUN_1001b7260 */

void FUN_1001b7260(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_100004550(unaff_x20[3],unaff_x20[4]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88) + 8));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)));
  return;
}



/* Address: 0x1001b72c8 | FUN_1001b72c8 */

void FUN_1001b72c8(void)

{
  FUN_1001b7260();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001b72ec | FUN_1001b72ec */

void FUN_1001b72ec(undefined8 param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((((bVar1 & 1) != 0) && (lVar2 = param_2, _swift_isClassType(), (int)lVar2 != 0)) &&
     (param_2 != 0)) {
    FUN_1000037f0(&DAT_100fb4dc8,&DAT_100c32eb8);
    return;
  }
  Swift::_ContiguousArrayStorage::typeMetadataAccessor();
  return;
}



/* Address: 0x1001b735c | FUN_1001b735c */

void FUN_1001b735c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  AnyPublisher AVar4;
  AnyCancellable *pAVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x20;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  unaff_x20[3] = 0;
  unaff_x20[4] = 0;
  *(undefined8 *)((long)unaff_x20 + *(long *)(lVar8 + 0x90)) = 0;
  *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x98)) = 0;
  lVar7 = *(long *)(lVar8 + 0x50);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80),param_1,lVar7);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x88));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar2 = &DAT_100ebe788;
  _swift_allocObject(&DAT_100ebe788,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  puVar3 = &DAT_100ebe7b0;
  _swift_allocObject(&DAT_100ebe7b0,0x38,7);
  *(long *)(puVar3 + 0x10) = lVar7;
  *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(lVar8 + 0x58);
  *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar8 + 0x60);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(lVar8 + 0x68);
  *(undefined **)(puVar3 + 0x30) = puVar2;
  FUN_1001b693c(0xff);
  AVar4 = Combine::AnyPublisher::typeMetadataAccessor();
  _swift_retain(param_4);
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             AVar4.unknown);
  pAVar5 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(param_2);
  _swift_release(param_4);
  _swift_release(puVar3);
  uVar6 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90));
  *(AnyCancellable **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = pAVar5;
  _swift_release(uVar6);
  return;
}



/* Address: 0x1001b74e8 | FUN_1001b74e8 */

void FUN_1001b74e8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_50 = &DAT_100c32e70;
  puStack_48 = &DAT_100c32e88;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    local_30 = &DAT_100c32ea0;
    puStack_28 = &DAT_100c32e70;
    _swift_initClassMetadata2(param_1,0,6,&local_50,param_1 + 0x70);
  }
  return;
}



/* Address: 0x1001b7584 | FUN_1001b7584 */

void FUN_1001b7584(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetClassDescriptor_100ca709c);
  return;
}



/* Address: 0x1001b7590 | FUN_1001b7590 */

void FUN_1001b7590(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001b75b4 | FUN_1001b75b4 */

void FUN_1001b75b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001b75d8 | FUN_1001b75d8 */

void FUN_1001b75d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1001b6e04(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001b75e8 | FUN_1001b75e8 */

void FUN_1001b75e8(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fb4dc0 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fb4dc0 = puVar2;
  return;
}



/* Address: 0x1001b762c | FUN_1001b762c */

void FUN_1001b762c(void)

{
  long unaff_x20;
  
  FUN_1001b6f04(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001b7650 | FUN_1001b7650 */

void FUN_1001b7650(void)

{
  long unaff_x20;
  
  FUN_1001b71d8(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001b7660 | FUN_1001b7660 */

void FUN_1001b7660(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001b7684 | FUN_1001b7684 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b768c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001b7684(undefined8 param_1)

{
  long unaff_x20;
  
  Swift::Set::contains
            (param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001b7690 | thunk_FUN_1001b75b4 */

void thunk_FUN_1001b75b4(void)

{
  FUN_1001b75b4();
  return;
}



/* Address: 0x1001b7694 | FUN_1001b7694 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b7714 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_1001b7694(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  _ContiguousArrayStorage *p_Var4;
  long extraout_x8;
  long extraout_x12;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  tuple2_conflict3 tVar11;
  undefined1 auStack_c0 [8];
  ulong local_b8;
  ulong local_b0;
  ulong local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  __int64 local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar10 = *(long *)(param_4 + -8);
  lVar5 = param_4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar9 = (long)puVar8 - extraout_x12;
  local_80 = Swift::Array<undefined>::get_count(param_1,lVar5);
  if (local_80 < 2) {
    uVar1 = 0xff;
    Swift::Array<undefined>::typeMetadataAccessor();
    p_Var4 = Swift::_ContiguousArrayStorage::typeMetadataAccessor();
    _swift_allocObject(p_Var4,0x28,7);
    tVar11 = Swift::Array<undefined>::__adoptStorage();
    lVar5 = tVar11._0_8_;
    *(undefined8 *)(lVar5 + 0x20) = param_3;
    FUN_1001b6c44(lVar5,uVar1);
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    uVar1 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    local_88 = uVar1;
    tVar11 = Swift::Array<undefined>::_allocateUninitialized(0);
    local_68 = tVar11._0_8_;
    lVar5 = param_4;
    FUN_1001b72ec(param_4,param_4);
    local_a0 = *(long *)(lVar10 + 0x48);
    uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
    local_b0 = ~uVar6;
    local_98 = lVar5;
    _swift_allocObject();
    lVar5 = 1;
    tVar11 = Swift::Array<undefined>::__adoptStorage();
    lVar2 = tVar11._0_8_;
    local_b8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
    local_a8 = uVar6;
    Swift::Array<undefined>::get_subscript(lVar2 + local_b8,0,param_3,param_4);
    FUN_1001b6c44(lVar2,param_4);
    local_90 = param_4;
    local_70 = lVar2;
    do {
      Swift::Array<undefined>::get_subscript(uVar9,lVar5 + -1,param_3,param_4);
      Swift::Array<undefined>::get_subscript(puVar8,lVar5,param_3,param_4);
      uVar6 = uVar9;
      (*param_1)(uVar9,puVar8);
      pcVar7 = *(code **)(lVar10 + 8);
      (*pcVar7)(puVar8,param_4);
      (*pcVar7)(uVar9,param_4);
      lVar2 = local_70;
      if ((uVar6 & 1) == 0) {
        local_78 = local_70;
        uVar1 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        _swift_bridgeObjectRetain(lVar2);
        param_4 = local_90;
        Swift::Array<undefined>::append(&local_78,uVar1);
        _swift_allocObject(local_98,(*(uint *)(local_98 + 0x30) + local_a8 & local_b0) + local_a0,
                           *(ushort *)(local_98 + 0x34) | local_a8);
        tVar11 = Swift::Array<undefined>::__adoptStorage();
        lVar3 = tVar11._0_8_;
        Swift::Array<undefined>::get_subscript(lVar3 + local_b8,lVar5,param_3,param_4);
        _swift_bridgeObjectRelease(lVar2);
        FUN_1001b6c44(lVar3,param_4);
        local_70 = lVar3;
      }
      else {
        Swift::Array<undefined>::get_subscript(uVar9,lVar5,param_3,param_4);
        Swift::Array<undefined>::append(uVar9,local_88);
      }
      lVar5 = lVar5 + 1;
    } while (local_80 != lVar5);
    local_78 = local_70;
    uVar1 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Array<undefined>::append(&local_78,uVar1);
    lVar5 = local_68;
  }
  return lVar5;
}



/* Address: 0x1001b79c0 | FUN_1001b79c0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b7ac8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_1001b79c0(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  Optional OVar2;
  long lVar3;
  undefined8 uVar4;
  EnumeratedSequence EVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  tuple2_conflict3 tVar13;
  code *local_c0 [2];
  long local_b0;
  ulong local_a8;
  Iterator local_a0;
  long local_98;
  long lStack_90;
  undefined8 local_80;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_4 + -8);
  local_c0[0] = param_1;
  local_c0[1] = (code *)param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x12;
  lVar3 = 0xff;
  _swift_getTupleTypeMetadata2
            (0xff,PTR___type_metadata_for_Swift_Int_100eac6f8,param_4,"offset element ",0);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lStack_90 = CONCAT71((int7)((ulong)lVar3 >> 8),OVar2.value);
  local_98 = *(long *)(lStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar11 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  plVar12 = (long *)(lVar11 - extraout_x12_00);
  tVar13 = Swift::Array<undefined>::_allocateUninitialized(0,param_4);
  local_68 = tVar13._0_8_;
  local_a8 = Swift::Array<undefined>::get_count(local_68,param_4);
  uVar4 = 0;
  local_80 = param_3;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar4);
  (extension_Swift)::Swift::Sequence::enumerated();
  EVar5 = Swift::EnumeratedSequence::typeMetadataAccessor();
  Swift::EnumeratedSequence::_makeIterator(EVar5);
  local_a0 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
  local_b0 = local_a8 + -1;
  local_a8 = CONCAT44(local_a8._4_4_,(uint)SBORROW8(local_a8,1));
  while( true ) {
    Swift::EnumeratedSequence::Iterator::_next(local_a0);
    (**(code **)(local_98 + 0x20))(plVar12,lVar11,lStack_90);
    plVar6 = plVar12;
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(plVar12,1,lVar3);
    if ((int)plVar6 == 1) {
      _swift_bridgeObjectRelease(local_80);
      return local_68;
    }
    lVar7 = *plVar12;
    (**(code **)(lVar10 + 0x20))(lVar9,(long)plVar12 + (long)*(int *)(lVar3 + 0x30),param_4);
    (**(code **)(lVar10 + 0x10))(lVar8,lVar9,param_4);
    Swift::Array<undefined>::append(lVar8,uVar4);
    if ((local_a8 & 1) != 0) break;
    if (lVar7 < local_b0) {
      (*local_c0[0])(lVar8);
      Swift::Array<undefined>::append(lVar8,uVar4);
    }
    (**(code **)(lVar10 + 8))(lVar9,param_4);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b7c4c);
  (*pcVar1)();
}



/* Address: 0x1001b7c4c | FUN_1001b7c4c */

undefined * FUN_1001b7c4c(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  
  uVar11 = *(ulong *)(param_1 + 0x10);
  if (uVar11 < 2) {
    puVar9 = &DAT_100fb4c60;
    FUN_1000037f0(&DAT_100fb4c60,&DAT_100c32c38);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 2;
    *(undefined8 *)(puVar9 + 0x10) = 1;
    *(long *)(puVar9 + 0x20) = param_1;
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    puVar9 = &DAT_100fb4c58;
    FUN_1000037f0(&DAT_100fb4c58,&DAT_100c32c30);
    puVar8 = puVar9;
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
    plVar12 = (long *)(param_1 + 0x28);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b7e74);
        (*pcVar3)();
      }
      lVar2 = *plVar12;
      lVar10 = plVar12[-1] - lVar2;
      if (SBORROW8(plVar12[-1],lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b7e78);
        (*pcVar3)();
      }
      if ((lVar10 < 0) && (bVar4 = SBORROW8(0,lVar10), lVar10 = -lVar10, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1001b7e7c);
        (*pcVar3)();
      }
      if (lVar10 == 1) {
        uVar1 = *(ulong *)(puVar8 + 0x10);
        puVar6 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1001b13f4(puVar6,uVar1 + 1,1,puVar8);
        }
        *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
        *(long *)(puVar6 + uVar1 * 8 + 0x20) = lVar2;
      }
      else {
        _swift_bridgeObjectRetain(puVar8);
        puVar6 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar7 = puVar5;
        if (((ulong)puVar6 & 1) == 0) {
          puVar7 = (undefined *)0x0;
          FUN_1001b14f4(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar1 = *(ulong *)(puVar7 + 0x10);
        puVar5 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
          FUN_1001b14f4(puVar5,uVar1 + 1,1,puVar7);
        }
        *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
        *(undefined **)(puVar5 + uVar1 * 8 + 0x20) = puVar8;
        puVar6 = puVar9;
        _swift_allocObject(puVar9,0x28,7);
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        *(long *)(puVar6 + 0x20) = lVar2;
        _swift_bridgeObjectRelease(puVar8);
      }
      plVar12 = plVar12 + 1;
      uVar11 = uVar11 - 1;
      puVar8 = puVar6;
    } while (uVar11 != 1);
    _swift_bridgeObjectRetain(puVar6);
    puVar9 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar5;
    if (((ulong)puVar9 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_1001b14f4(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar11 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_1001b14f4(puVar9,uVar11 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar11 + 1;
    *(undefined **)(puVar9 + uVar11 * 8 + 0x20) = puVar6;
    _swift_bridgeObjectRelease(puVar6);
  }
  return puVar9;
}



/* Address: 0x1001b7ebc | FUN_1001b7ebc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b7f48 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

__int64 FUN_1001b7ebc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  
  uVar1 = param_1;
  (**(code **)(param_2 + 0x18))();
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100ca7120,&TargetProtocolRequirement_100ca7130);
  _swift_getAssociatedConformanceWitness
            (param_2,param_1,uVar2,0x100ca7120,&TargetProtocolRequirement_100ca7128);
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_2,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78,
             PTR___associated_type_descriptor_for_Swift_Identifiable_ID_100eabce8);
  _Var4 = Swift::Array<undefined>::get_count(uVar3,uVar3);
  _swift_bridgeObjectRelease(uVar1);
  return _Var4;
}



/* Address: 0x1001b7f70 | FUN_1001b7f70 */

bool FUN_1001b7f70(undefined8 param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1;
  (**(code **)(param_2 + 0x18))();
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100ca7120,&TargetProtocolRequirement_100ca7130);
  _swift_getAssociatedConformanceWitness
            (param_2,param_1,uVar3,0x100ca7120,&TargetProtocolRequirement_100ca7128);
  _swift_getAssociatedTypeWitness
            (0xff,param_2,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78,
             PTR___associated_type_descriptor_for_Swift_Identifiable_ID_100eabce8);
  uVar3 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar3);
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  _swift_bridgeObjectRelease(uVar2);
  return bVar1;
}



/* Address: 0x1001b8054 | FUN_1001b8054 */

void FUN_1001b8054(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long local_78;
  long local_70;
  
  uVar4 = param_3;
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100ca7120,&TargetProtocolRequirement_100ca7130);
  lVar3 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar1,0x100ca7120,&TargetProtocolRequirement_100ca7128);
  _swift_getAssociatedTypeWitness
            (0xff,lVar3,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78,
             PTR___associated_type_descriptor_for_Swift_Identifiable_ID_100eabce8);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar2);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  _swift_bridgeObjectRelease(uVar4);
  if ((param_2 < local_78) || (local_70 <= param_2)) {
    uVar4 = 1;
  }
  else {
    (**(code **)(param_4 + 0x20))(param_1,param_2,param_3,param_4);
    uVar4 = 0;
  }
  lVar3 = 0;
  _swift_checkMetadataState(0,uVar1);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,uVar4,1,lVar3);
  return;
}



/* Address: 0x1001b81c8 | FUN_1001b81c8 */

void FUN_1001b81c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 local_a0 [2];
  undefined8 local_90;
  long lStack_88;
  undefined8 uStack_78;
  
  uVar1 = param_3;
  (**(code **)(param_4 + 0x18))(param_3,param_4);
  uVar2 = 0xff;
  local_a0[0] = uVar1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100ca7120,&TargetProtocolRequirement_100ca7130);
  lVar3 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar2,0x100ca7120,&TargetProtocolRequirement_100ca7128);
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,lVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78,
             PTR___associated_type_descriptor_for_Swift_Identifiable_ID_100eabce8);
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar5);
  _swift_getAssociatedConformanceWitness
            (lVar3,uVar2,uVar4,puVar6,
             PTR___associated_conformance_descriptor_for_Swift_Identifiable_Swift_Identifiable_ID__Swift_Hashable_100eace70
            );
  (extension_Swift)::Swift::Collection::_firstIndex();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_3;
  FUN_1001b8378();
  puVar6 = &DAT_100fb4cb8;
  local_90 = param_3;
  lStack_88 = param_4;
  uStack_78 = uVar1;
  FUN_1000037f0(&DAT_100fb4cb8,&DAT_100c32db0);
  uVar4 = 0;
  _swift_checkMetadataState(0,uVar2);
  FUN_1001b8460(param_1,FUN_1001b8434,local_a0,puVar6,PTR___type_metadata_for_Swift_Never_100eadc38,
                uVar4,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
  ;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1001b8378 | FUN_1001b8378 */

undefined1  [16] FUN_1001b8378(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ebe880;
  _swift_allocObject(&DAT_100ebe880,uVar5 + lVar3,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_1001b8a50;
  return auVar6;
}



/* Address: 0x1001b8434 | FUN_1001b8434 */

void FUN_1001b8434(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))(*param_1);
  return;
}



/* Address: 0x1001b8460 | FUN_1001b8460 */

void FUN_1001b8460(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  
  lVar4 = *(long *)(param_5 + -8);
  local_80 = param_5;
  local_78 = param_8;
  local_70 = param_3;
  local_68 = param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar6 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  lVar5 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar7 = lVar5 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar7);
  uVar2 = 1;
  lVar1 = lVar7;
  (**(code **)(lVar3 + 0x30))(lVar7,1,lVar8);
  if ((int)lVar1 != 1) {
    (**(code **)(lVar3 + 0x20))(lVar5,lVar7,lVar8);
    (*local_68)(param_1,lVar5,lVar6);
    (**(code **)(lVar3 + 8))(lVar5,lVar8);
    if (unaff_x21 != 0) {
      (**(code **)(lVar4 + 0x20))(local_78,lVar6,local_80);
      return;
    }
    uVar2 = 0;
  }
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,uVar2,1);
  return;
}



/* Address: 0x1001b85f0 | FUN_1001b85f0 */

undefined8 FUN_1001b85f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  
  uVar1 = param_1;
  (**(code **)(param_2 + 0x18))();
  uVar4 = param_1;
  FUN_1001b871c();
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_2,param_1,0x100ca7120,&TargetProtocolRequirement_100ca7130);
  _swift_getAssociatedConformanceWitness
            (param_2,param_1,uVar2,0x100ca7120,&TargetProtocolRequirement_100ca7128);
  _swift_getAssociatedTypeWitness
            (0xff,param_2,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78,
             PTR___associated_type_descriptor_for_Swift_Identifiable_ID_100eabce8);
  uVar3 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_checkMetadataState(0,uVar2);
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar3);
  (extension_Swift)::Swift::Sequence::_compactMap();
  _swift_release(uVar4);
  _swift_bridgeObjectRelease(uVar1);
  return unaff_x20;
}



/* Address: 0x1001b871c | FUN_1001b871c */

undefined1  [16] FUN_1001b871c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ebe858;
  _swift_allocObject(&DAT_100ebe858,uVar5 + lVar3,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = thunk_FUN_1001b89c8;
  return auVar6;
}



/* Address: 0x1001b87d8 | FUN_1001b87d8 */

undefined8
FUN_1001b87d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  
  uVar3 = param_3;
  FUN_1001b8904();
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x100ca7120,&TargetProtocolRequirement_100ca7130);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar1,0x100ca7120,&TargetProtocolRequirement_100ca7128);
  _swift_getAssociatedTypeWitness
            (0xff,param_4,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_Identifiable_100eace78,
             PTR___associated_type_descriptor_for_Swift_Identifiable_ID_100eabce8);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(param_1);
  _swift_checkMetadataState(0,uVar1);
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar2);
  (extension_Swift)::Swift::Sequence::_compactMap();
  _swift_release(uVar3);
  _swift_bridgeObjectRelease(param_1);
  return unaff_x20;
}



/* Address: 0x1001b8904 | FUN_1001b8904 */

undefined1  [16] FUN_1001b8904(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(param_1,param_1);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ebe830;
  _swift_allocObject(&DAT_100ebe830,uVar5 + lVar3,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  (**(code **)(lVar4 + 0x20))
            (puVar1 + uVar5,&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2)
  ;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = thunk_FUN_1001b89c8;
  return auVar6;
}



/* Address: 0x1001b89c0 | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  FUN_1001b8a00();
  return;
}



/* Address: 0x1001b89c4 | thunk_FUN_1001b89c8 */

void thunk_FUN_1001b89c8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))();
  return;
}



/* Address: 0x1001b89c8 | FUN_1001b89c8 */

void FUN_1001b89c8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))();
  return;
}



/* Address: 0x1001b8a00 | FUN_1001b8a00 */

void FUN_1001b8a00(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001b8a50 | FUN_1001b8a50 */

void FUN_1001b8a50(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x20))();
  return;
}



/* Address: 0x1001b8a88 | thunk_FUN_1001b89c8 */

void thunk_FUN_1001b89c8(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x18) + 0x28))();
  return;
}



/* Address: 0x1001b8a8c | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  thunk_FUN_1001b8a00();
  return;
}



/* Address: 0x1001b8a90 | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  thunk_FUN_1001b8a00();
  return;
}



/* Address: 0x1001b8a94 | FUN_1001b8a94 */

void FUN_1001b8a94(undefined8 param_1,MainActor *param_2,undefined *param_3,char *param_4,
                  void *param_5)

{
  code *pcVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  MainActor *unaff_x20;
  long unaff_x21;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  _Var5.unknown = param_3;
  pcVar6 = param_4;
  pMVar2 = Swift::MainActor::get_shared(unaff_x20,param_2);
  _swift_release();
  _swift_task_getMainExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)pMVar2 & 1) == 0) {
    Swift::_StringGuts::grow(0x42,_Var5);
    SVar7.bridgeObject = (void *)0x8000000100d8eb40;
    SVar7.str = (char *)0xd00000000000003f;
    SVar10.bridgeObject = param_5;
    SVar10.str = pcVar6;
    Swift::String::append(SVar7,SVar10);
    SVar7 = Swift::__typeName(SUB81(unaff_x20,0));
    SVar11.bridgeObject = param_5;
    SVar11.str = pcVar6;
    Swift::String::append(SVar7,SVar11);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x2e;
    SVar12.bridgeObject = param_5;
    SVar12.str = pcVar6;
    Swift::String::append(SVar8,SVar12);
    SVar9.bridgeObject = (void *)0x2;
    SVar9.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar9,(StaticString)0x0,0xe000000000000000,
               (__uint32)param_4);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b8c1c);
    (*pcVar1)();
  }
  puVar3 = &DAT_100ebea30;
  _swift_allocObject(&DAT_100ebea30,0x20,7);
  *(MainActor **)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3;
  (*(code *)param_2)(param_1);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0,0,0,0);
  _swift_release(puVar3);
  if (unaff_x21 == 0) {
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b8b80);
      (*pcVar1)();
    }
  }
  else if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b8b54);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x1001b8c1c | FUN_1001b8c1c */

void FUN_1001b8c1c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1001b8c50 | FUN_1001b8c50 */

undefined1 FUN_1001b8c50(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0x28);
}



/* Address: 0x1001b8c80 | FUN_1001b8c80 */

void FUN_1001b8c80(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Address: 0x1001b8cbc | FUN_1001b8cbc */

undefined1  [16] FUN_1001b8cbc(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x28,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1001b8cec | FUN_1001b8cec */

undefined8 FUN_1001b8cec(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_28,0,0);
  return *(undefined8 *)(unaff_x20 + 0x30);
}



/* Address: 0x1001b8d1c | FUN_1001b8d1c */

void FUN_1001b8d1c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_38,1,0);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Address: 0x1001b8d58 | FUN_1001b8d58 */

undefined1  [16] FUN_1001b8d58(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x30,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1001b8d88 | FUN_1001b8d88 */

undefined8 FUN_1001b8d88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1001b8ddc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1001b8ddc | FUN_1001b8ddc */

void FUN_1001b8ddc(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyPublisher AVar3;
  AnyCancellable *pAVar4;
  long *unaff_x20;
  undefined8 uVar5;
  long lVar6;
  tuple2_conflict3 tVar7;
  
  lVar6 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar6 + 0x50);
  tVar7 = Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  unaff_x20[3] = 0;
  unaff_x20[4] = 0;
  unaff_x20[2] = tVar7._0_8_;
  *(undefined1 *)(unaff_x20 + 5) = 1;
  unaff_x20[0xc] = 0;
  unaff_x20[9] = 0;
  unaff_x20[10] = 0;
  *(undefined4 *)(unaff_x20 + 0xb) = 0;
  unaff_x20[6] = 300;
  unaff_x20[7] = param_2;
  unaff_x20[8] = param_3;
  puVar1 = &DAT_100ebe8b0;
  _swift_allocObject(&DAT_100ebe8b0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_100ebe8d8;
  _swift_allocObject(&DAT_100ebe8d8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(lVar6 + 0x58);
  *(undefined **)(puVar2 + 0x20) = puVar1;
  FUN_1001b693c(0xff,uVar5);
  AVar3 = Combine::AnyPublisher::typeMetadataAccessor();
  _swift_retain(param_3);
  _swift_getWitnessTable
            (PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758,
             AVar3.unknown);
  pAVar4 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(param_1);
  _swift_release(puVar2);
  _swift_release(param_3);
  lVar6 = unaff_x20[0xc];
  unaff_x20[0xc] = (long)pAVar4;
  _swift_release(lVar6);
  return;
}



/* Address: 0x1001b8f38 | FUN_1001b8f38 */

void FUN_1001b8f38(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar7 = param_1[1];
  uVar6 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb4dc0;
  FUN_100003a00(&DAT_100fb4dc0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCollections/SnapshotApplier.swift",0x26,1,0x35,UVar4.unknown,puVar3);
  }
  local_80 = param_3;
  uStack_78 = param_4;
  local_70 = param_2;
  local_68 = uVar6;
  uStack_60 = uVar7;
  FUN_1001b8a94(FUN_1001ba0a4,auStack_90,"PasteCollections/SnapshotApplier.swift",0x26,2,0x37);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001b9040 | FUN_1001b9040 */

void FUN_1001b9040(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  MainActor *pMVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fb4dc0;
  FUN_100003a00(&DAT_100fb4dc0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteCollections/SnapshotApplier.swift",0x26,1,0x37,UVar4.unknown,puVar3);
  }
  pMVar6 = (MainActor *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar6 != (MainActor *)0x0) {
    FUN_1001b912c(param_2,param_3);
    _swift_release(pMVar2);
    pMVar2 = pMVar6;
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1001b912c | FUN_1001b912c */

void FUN_1001b912c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar3 = unaff_x20[9];
  if (lVar3 == 0) {
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
    lVar3 = 0;
  }
  else {
    lVar4 = unaff_x20[10];
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
    uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    FUN_1001b59e4(param_1,param_2,lVar3,lVar4,uVar1,uVar2);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease(lVar3);
    lVar3 = unaff_x20[9];
  }
  lVar4 = unaff_x20[10];
  unaff_x20[9] = param_1;
  unaff_x20[10] = param_2;
  FUN_1001b9e60(lVar3,lVar4);
  FUN_1001b9214();
  return;
}



/* Address: 0x1001b91e4 | FUN_1001b91e4 */

void FUN_1001b91e4(code *param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x5b) = 1;
  (*param_1)();
  *(undefined1 *)(unaff_x20 + 0x5b) = 0;
  FUN_1001b9214();
  return;
}



/* Address: 0x1001b9214 | FUN_1001b9214 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b9214(void)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  long lVar8;
  DispatchWorkItemFlags qos;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  lVar10 = *unaff_x20;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  qos.unknown = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if ((((*(byte *)((long)unaff_x20 + 0x59) & 1) == 0) && ((*(byte *)(unaff_x20 + 0xb) & 1) == 0)) &&
     ((*(byte *)((long)unaff_x20 + 0x5b) & 1) == 0)) {
    *(undefined1 *)(unaff_x20 + 0xb) = 1;
    pOVar3 = (OS_dispatch_queue *)0x0;
    local_a0 = DVar2.unknown;
    FUN_1001b9fe8();
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
    puVar4 = &DAT_100ebe8b0;
    _swift_allocObject(&DAT_100ebe8b0,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar5 = &DAT_100ebe9e0;
    _swift_allocObject(&DAT_100ebe9e0,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = *(undefined8 *)(lVar10 + 0x50);
    *(undefined8 *)(puVar5 + 0x18) = *(undefined8 *)(lVar10 + 0x58);
    *(undefined **)(puVar5 + 0x20) = puVar4;
    local_70 = FUN_1001ba02c;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100ebe9f8;
    local_68 = puVar5;
    aBlock = __Block_copy(&local_90);
    DVar2.unknown = puVar4;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar2);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar5 = &DAT_100fb4e58;
    FUN_100003a00(&DAT_100fb4e58,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar6 = &DAT_100fb4e60;
    FUN_1000037f0(&DAT_100fb4e60,&DAT_100c32fb0);
    puVar7 = puVar6;
    FUN_1001ba054();
    Swift::SetAlgebra::_init(lVar8,&local_98,puVar6,puVar7,DVar1.unknown,puVar5);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(lVar8,DVar1.unknown);
    (**(code **)(lVar9 + 8))(qos.unknown,local_a0);
    puVar5 = local_68;
    _swift_release(puVar4);
    _swift_release(puVar5);
  }
  return;
}



/* Address: 0x1001b9460 | FUN_1001b9460 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001b9540 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001b9460(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  __int64 _Var2;
  long extraout_x8;
  long extraout_x12;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(*unaff_x20 + 0x50);
  lVar7 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)puVar6 - extraout_x12;
  _swift_beginAccess(unaff_x20 + 2,auStack_78,0x21,0);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::remove(lVar5,param_1,uVar1);
  _swift_endAccess(auStack_78);
  (**(code **)(lVar7 + 0x10))(puVar6,lVar5,lVar3);
  lVar4 = unaff_x20[2];
  _swift_bridgeObjectRetain(lVar4);
  _Var2 = Swift::Array<undefined>::get_count(auStack_78,lVar3);
  _swift_bridgeObjectRelease(lVar4);
  if (param_2 <= _Var2) {
    _Var2 = param_2;
  }
  _swift_beginAccess(unaff_x20 + 2,auStack_78,0x21,0);
  Swift::Array<undefined>::insert(puVar6,_Var2,uVar1);
  _swift_endAccess(auStack_78);
  (**(code **)(lVar7 + 8))(lVar5,lVar3);
  return;
}



/* Address: 0x1001b95b8 | thunk_FUN_1001b95bc */

void thunk_FUN_1001b95bc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  if (((*(byte *)(unaff_x20 + 0x5b) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x59) & 1) == 0)) {
    lVar1 = *(long *)(unaff_x20 + 0x48);
    *(undefined1 *)(unaff_x20 + 0x59) = 1;
    while ((lVar1 != 0 && ((*(byte *)(unaff_x20 + 0x5b) & 1) == 0))) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      *(long *)(unaff_x20 + 0x48) = 0;
      *(undefined8 *)(unaff_x20 + 0x50) = 0;
      FUN_1001b9b78(lVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(lVar1);
      lVar1 = *(long *)(unaff_x20 + 0x48);
    }
    *(undefined1 *)(unaff_x20 + 0x59) = 0;
  }
  return;
}



/* Address: 0x1001b95bc | FUN_1001b95bc */

void FUN_1001b95bc(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  if (((*(byte *)(unaff_x20 + 0x5b) & 1) == 0) && ((*(byte *)(unaff_x20 + 0x59) & 1) == 0)) {
    lVar1 = *(long *)(unaff_x20 + 0x48);
    *(undefined1 *)(unaff_x20 + 0x59) = 1;
    while ((lVar1 != 0 && ((*(byte *)(unaff_x20 + 0x5b) & 1) == 0))) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      *(long *)(unaff_x20 + 0x48) = 0;
      *(undefined8 *)(unaff_x20 + 0x50) = 0;
      FUN_1001b9b78(lVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(lVar1);
      lVar1 = *(long *)(unaff_x20 + 0x48);
    }
    *(undefined1 *)(unaff_x20 + 0x59) = 0;
  }
  return;
}



/* Address: 0x1001b963c | FUN_1001b963c */

void FUN_1001b963c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_1001b9e60(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1001b9678 | FUN_1001b9678 */

void FUN_1001b9678(void)

{
  FUN_1001b963c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001b9698 | FUN_1001b9698 */

void FUN_1001b9698(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 local_a0;
  long local_98;
  long local_90;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar3 = *(long *)(lVar2 + -8);
  local_a0 = param_3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  lVar4 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 2,auStack_78,0,0);
  local_80 = unaff_x20[2];
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  if ((param_2 < local_98) || (local_90 <= param_2)) {
    lVar2 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_5,param_4,0x100ca7120,&TargetProtocolRequirement_100ca7130);
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,1,1,lVar2);
  }
  else {
    _swift_beginAccess(unaff_x20 + 2,&local_98,0x20,0);
    Swift::Array<undefined>::get_subscript(lVar4,param_2,unaff_x20[2],lVar2);
    _swift_endAccess(&local_98);
    (**(code **)(param_5 + 0x28))(param_1,lVar4,param_4,param_5);
    (**(code **)(lVar3 + 8))(lVar4,lVar2);
  }
  return;
}



/* Address: 0x1001b9830 | FUN_1001b9830 */

undefined1  [16] FUN_1001b9830(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_78 [24];
  unkuint9 local_60;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar2);
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar1);
  (extension_Swift)::Swift::Collection::_firstIndex();
  _swift_bridgeObjectRelease(uVar2);
  auVar3._9_7_ = 0;
  auVar3._0_9_ = local_60;
  return auVar3;
}


