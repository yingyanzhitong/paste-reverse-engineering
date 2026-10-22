/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10006dc80 | FUN_10006dc80 */

void FUN_10006dc80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10006dc94 | FUN_10006dc94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10006dc94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x10006dce8 | FUN_10006dce8 */

int FUN_10006dce8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10006dd30 | FUN_10006dd30 */

void FUN_10006dd30(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10006dd74 | FUN_10006dd74 */

undefined1  [16] FUN_10006dd74(void)

{
  return ZEXT816(0x100eb26a8);
}



/* Address: 0x10006dd84 | FUN_10006dd84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10006dd84(ulong *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  long local_80 [3];
  long local_68;
  
  lVar6 = _TtC5Paste18ItemCollectionView::viewModel;
  lVar9 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar9 != 0) {
    uVar8 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
    _swift_retain(uVar8);
    lVar10 = lVar9;
    _swift_retain();
    FUN_1003b8bfc();
    _swift_release(uVar8);
    puVar4 = &DAT_100faa390;
    local_68 = lVar10;
    FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
    puVar5 = &DAT_100fa9820;
    FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b9698(local_80,param_2,&local_68,puVar4,puVar5);
    _swift_release(lVar10);
    _swift_release();
    if (local_80[0] == 0) {
      puVar7 = (ulong *)0x0;
      FUN_1003de76c(0);
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x280))();
    }
    else {
      FUN_10006cc94();
      _swift_beginAccess(lVar9 + 0x10,local_80,0,0);
      uVar1 = *(undefined1 *)(lVar9 + 0x10);
      _swift_release(lVar9);
      lVar10 = *(long *)(*(long *)(unaff_x20 + lVar6) + 0x40);
      lVar6 = lVar10;
      FUN_10000444c();
      FUN_100074bac();
      lVar9 = *(long *)(lVar6 + 0x10);
      _swift_bridgeObjectRelease();
      uVar3 = (uint)lVar6;
      lVar6 = 0;
      if (param_2 < lVar9) {
        lVar6 = param_2 + 1;
      }
      FUN_10031eba8();
      uVar3 = uVar3 & 0xff;
      if (uVar3 < 3) {
        if (uVar3 == 0) {
          puVar7 = (ulong *)0x0;
          FUN_1003de76c();
        }
        else if (uVar3 == 1) {
          puVar7 = (ulong *)0x0;
          FUN_1003d0b1c();
        }
        else {
          puVar7 = (ulong *)0x0;
          FUN_1003cde04();
        }
      }
      else if (uVar3 == 3) {
        puVar7 = (ulong *)0x0;
        FUN_1003cf984();
      }
      else if (uVar3 == 4) {
        puVar7 = (ulong *)0x0;
        FUN_1003db754();
      }
      else {
        puVar7 = (ulong *)0x0;
        FUN_1003dd14c();
      }
      puVar2 = PTR__swift_isaMask_100eae3b0;
      pcVar11 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x280);
      uVar8 = 0;
      FUN_1003d9138(0);
      (*pcVar11)(puVar7,thunk_FUN_10006e0c4,0,uVar8,&PTR_PTR_100ed0de8);
      puVar4 = &DAT_100eb2730;
      _swift_allocObject(&DAT_100eb2730,0x18,7);
      _swift_unknownObjectWeakInit(puVar4 + 0x10);
      puVar5 = &DAT_100eb2758;
      _swift_allocObject(&DAT_100eb2758,0x20,7);
      *(undefined **)(puVar5 + 0x10) = puVar4;
      *(long *)(puVar5 + 0x18) = local_80[0];
      pcVar11 = *(code **)((*(ulong *)puVar2 & *puVar7) + 400);
      _swift_retain(puVar4);
      (*pcVar11)(FUN_100074dc4,puVar5);
      _swift_release(puVar4);
      (**(code **)((*(ulong *)puVar2 & *puVar7) + 0x178))(thunk_FUN_100075000,0);
      (**(code **)((*(ulong *)puVar2 & *puVar7) + 0x208))
                (local_80[0],uVar1,lVar10,lVar6,lVar9 <= param_2);
      FUN_100021e40(lVar10);
    }
    auVar12._8_8_ = &PTR_PTR_100ed0de8;
    auVar12._0_8_ = puVar7;
    return auVar12;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x10006e0c0);
  (*pcVar11)();
}



/* Address: 0x10006e0c0 | thunk_FUN_10006e0c4 */

void thunk_FUN_10006e0c4(ID param_1)

{
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  objc_stub::init(param_1);
  return;
}



/* Address: 0x10006e0c4 | FUN_10006e0c4 */

void FUN_10006e0c4(ID param_1)

{
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  objc_stub::init(param_1);
  return;
}



/* Address: 0x10006e0dc | FUN_10006e0dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006e0dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 != 0) {
    uVar1 = *(undefined8 *)(param_3 + _TtC5Paste18ItemCollectionView::viewModel);
    _swift_retain(uVar1);
    FUN_1003bae08(param_1,param_2,param_4);
    _swift_release(uVar1);
    return;
  }
  return;
}



/* Address: 0x10006e168 | thunk_FUN_100075000 */

undefined1 thunk_FUN_100075000(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_58;
  undefined8 uStack_48;
  
  _swift_getKeyPath(&DAT_100c26c78);
  FUN_1002cb7e0(&uStack_e8);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&uStack_78);
  _swift_release(uStack_e8);
  _swift_release(uStack_e0);
  _swift_release(uStack_d8);
  _swift_release(uStack_c8);
  _swift_release(uStack_b8);
  uVar1 = uStack_78;
  puVar2 = &DAT_100c26ca8;
  _swift_getKeyPath(&DAT_100c26ca8);
  puVar3 = &DAT_100fa64a0;
  FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
  FUN_1002cbe78(&uStack_b0,puVar2,puVar3);
  puVar2 = &DAT_100fa9780;
  FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
  FUN_1002ca7e0(&uStack_78);
  _swift_release(uStack_b0);
  _swift_release(uStack_a8);
  _swift_release(uStack_a0);
  _swift_release(uStack_90);
  _swift_release(uStack_80);
  _swift_getKeyPath(&DAT_100c26cd8);
  FUN_1002cbe78(&uStack_78);
  FUN_1002ca7e0(auStack_f0,puVar2);
  _swift_release(CONCAT71(uStack_77,uStack_78));
  _swift_release(uStack_70);
  _swift_release(uStack_68);
  _swift_release(uStack_58);
  _swift_release(uStack_48);
  return uVar1;
}



/* Address: 0x10006e16c | FUN_10006e16c */

void FUN_10006e16c(void)

{
  FUN_10006dd84();
  return;
}



/* Address: 0x10006e188 | FUN_10006e188 */

__int64 FUN_10006e188(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  __int64 _Var3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar5 = *(long *)(unaff_x20 + _TtC5Paste18ItemCollectionView::applier);
  if (lVar5 != 0) {
    _swift_beginAccess(lVar5 + 0x10,auStack_38,0,0);
    puVar4 = *(undefined **)(lVar5 + 0x10);
    if ((ulong)puVar4 >> 0x3e == 0) {
      _Var3 = *(__int64 *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar4) {
        _Var1.unknown = puVar4;
      }
      _Var3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    return _Var3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006e1f8);
  (*pcVar2)();
}



/* Address: 0x10006e1f8 | FUN_10006e1f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006e1f8(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  ulong *puVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  MainActor *pMVar12;
  undefined *puVar13;
  undefined *puVar14;
  MainActor *pMVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *local_a0;
  MainActor *local_78;
  long local_70;
  undefined *local_68;
  
  lVar6 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    puVar7 = (ulong *)(param_2 + 0x10);
    _swift_unknownObjectWeakLoadStrong();
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar18 = (ulong *)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar7 != (ulong *)0x0) {
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar7) + 0x108))();
      puVar18 = puVar7;
    }
    lVar3 = _TtC5Paste18ItemCollectionView::applier;
    lVar2 = _TtC5Paste18ItemCollectionView::viewModel;
    uVar17 = puVar18[2];
    if (uVar17 == 0) {
      _swift_bridgeObjectRelease(puVar18);
      local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      this = Swift::MainActor::typeMetadataAccessor();
      local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar20 = 0x20;
      pMVar15 = this;
      do {
        uVar19 = *(undefined8 *)((long)puVar18 + lVar20);
        pMVar8 = Swift::MainActor::get_shared(this,pMVar15);
        puVar9 = &DAT_100fa6bb0;
        FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                      PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
        UVar10 = Swift::Actor::get_unownedExecutor();
        UVar11 = UVar10;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar11.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar10.unknown,puVar9);
        }
        pMVar15 = *(MainActor **)(lVar6 + lVar3);
        if (pMVar15 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10006e4a8);
          (*pcVar5)();
        }
        uVar16 = *(undefined8 *)(lVar6 + lVar2);
        _swift_retain(uVar16);
        pMVar12 = pMVar15;
        _swift_retain();
        FUN_1003b8bfc();
        _swift_release(uVar16);
        puVar13 = &DAT_100faa390;
        local_78 = pMVar12;
        FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
        puVar14 = &DAT_100fa9820;
        FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                      &TargetProtocolConformanceDescriptor_100c32ac0);
        FUN_1001b9698(&local_70,uVar19,&local_78,puVar13,puVar14);
        _swift_release(pMVar8);
        _swift_release(pMVar12);
        _swift_release();
        lVar4 = local_70;
        if (local_70 != 0) {
          Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
          pMVar15 = *(MainActor **)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
          uVar1 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
          if ((MainActor *)(uVar1 >> 1) <= pMVar15) {
            Swift::Array<undefined>::__createNewBuffer(1 < uVar1,pMVar15 + 1,1);
          }
          Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(pMVar15,lVar4);
          local_a0 = local_68;
        }
        lVar20 = lVar20 + 8;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
      _swift_bridgeObjectRelease(puVar18);
    }
  }
  *param_1 = local_a0;
  return;
}



/* Address: 0x10006e4a8 | FUN_10006e4a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006e4a8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong *puVar5;
  undefined1 auStack_58 [24];
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar4 = _TtC7PasteUI14CollectionView::visibleCells;
  if (param_1 != 0) {
    puVar3 = auStack_58;
    _swift_beginAccess(param_1 + _TtC7PasteUI14CollectionView::visibleCells,puVar3,0,0);
    lVar4 = *(long *)(param_1 + lVar4);
    if ((*(long *)(lVar4 + 0x10) != 0) &&
       (lVar1 = param_2, FUN_100071340(), ((ulong)puVar3 & 1) != 0)) {
      puVar5 = *(ulong **)(*(long *)(lVar4 + 0x38) + lVar1 * 0x10);
      uVar2 = 0;
      FUN_1003d9138(0);
      _swift_dynamicCastClass(puVar5,uVar2);
      if (puVar5 != (ulong *)0x0) {
        FUN_100228c78(param_2,0,1);
        (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar5) + 0x238))();
      }
    }
  }
  return;
}



/* Address: 0x10006e59c | FUN_10006e59c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10006e59c(long param_1,undefined8 param_2)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10006bb3c(param_2);
    return 0;
  }
  return 0;
}



/* Address: 0x10006e5e0 | FUN_10006e5e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10006e5e0(long param_1,undefined8 param_2)

{
  MainActor *pMVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  MainActor *this;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  MainActor *pMVar14;
  MainActor *pMVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  _ArrayBuffer _Var18;
  long lVar19;
  MainActor *pMVar20;
  long local_78;
  long local_70;
  undefined *local_68;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar19 = _TtC5Paste18ItemCollectionView::applier;
  lVar5 = _TtC5Paste18ItemCollectionView::viewModel;
  if (param_1 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    this = Swift::MainActor::typeMetadataAccessor();
    puVar12 = PTR_typeMetadataAccessor_100eaec10;
    pMVar7 = Swift::MainActor::get_shared(this,this);
    puVar8 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar12,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar16 = puVar8;
    UVar9 = Swift::Actor::get_unownedExecutor();
    UVar10 = UVar9;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar10.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar9.unknown,puVar16);
    }
    lVar19 = *(long *)(param_1 + lVar19);
    if (lVar19 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10006e900);
      (*pcVar6)();
    }
    uVar17 = *(undefined8 *)(param_1 + lVar5);
    _swift_retain(uVar17);
    lVar11 = lVar19;
    _swift_retain();
    FUN_1003b8bfc();
    _swift_release(uVar17);
    puVar12 = &DAT_100faa390;
    local_78 = lVar11;
    FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
    puVar13 = &DAT_100fa9820;
    FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                  &TargetProtocolConformanceDescriptor_100c32ac0);
    FUN_1001b9698(&local_70,param_2,&local_78,puVar12,puVar13);
    _swift_release(pMVar7);
    _swift_release(lVar11);
    _swift_release(lVar19);
    _Var18.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (local_70 != 0) {
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar3 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
      uVar4 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
      if (uVar4 >> 1 <= uVar3) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar4,uVar3 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar3,local_70);
      _Var18.unknown = local_68;
    }
    if ((ulong)_Var18.unknown >> 0x3e == 0) {
      pMVar7 = *(MainActor **)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var2.unknown = _Var18.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var18.unknown) {
        _Var2.unknown = _Var18.unknown;
      }
      pMVar7 = (MainActor *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (pMVar7 != (MainActor *)0x0) {
      pMVar20 = (MainActor *)0x0;
      do {
        if (((ulong)_Var18.unknown & 0xc000000000000001) == 0) {
          if (*(MainActor **)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10) <= pMVar20) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10006e88c);
            (*pcVar6)();
          }
          pMVar14 = *(MainActor **)(_Var18.unknown + (long)pMVar20 * 8 + 0x20);
        }
        else {
          pMVar14 = pMVar20;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)pMVar20,_Var18);
        }
        pMVar1 = pMVar20 + 1;
        if (SCARRY8((long)pMVar20,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10006e888);
          (*pcVar6)();
        }
        pMVar15 = Swift::MainActor::get_shared(this,pMVar14);
        puVar16 = puVar8;
        UVar9 = Swift::Actor::get_unownedExecutor();
        UVar10 = UVar9;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar10.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("Paste/ItemCollectionView.swift",0x1e,1,0x165,UVar9.unknown,puVar16);
        }
        uVar17 = *(undefined8 *)(param_1 + lVar5);
        _swift_retain(uVar17);
        FUN_1003bb280(pMVar14);
        _swift_release(pMVar15);
        _swift_release(uVar17);
        pMVar20 = pMVar20 + 1;
      } while (pMVar1 != pMVar7);
    }
    _swift_bridgeObjectRelease(_Var18.unknown);
  }
  return;
}



/* Address: 0x10006e900 | FUN_10006e900 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10006e900(undefined8 param_1,long param_2,undefined8 param_3)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10006c338(param_3,param_1);
    return 0;
  }
  return 0;
}



/* Address: 0x10006e95c | FUN_10006e95c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10006e95c(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_100068db8();
    return 0;
  }
  return 0;
}



/* Address: 0x10006e998 | FUN_10006e998 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10006e998(_ArrayBuffer param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  ContiguousArray CVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  ContiguousArray CVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  MainActor *pMVar17;
  ulong local_70;
  
  uVar12 = (ulong)param_1.unknown >> 0x3e;
  CVar7.unknown = param_2;
  if (uVar12 == 0) {
    uVar14 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar15 = *(ulong *)(param_2 + 0x10);
  uVar16 = uVar15;
  if ((long)uVar14 <= (long)uVar15) {
    uVar16 = uVar14;
  }
  Swift::ContiguousArray::_reserveCapacity(uVar16,CVar7);
  if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10006edb8);
    (*pcVar3)();
  }
  if (uVar16 != 0) {
    uVar14 = 0;
    puVar13 = param_1.unknown & 0xffffffffffffff8;
    _Var1.unknown = puVar13;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    do {
      if (uVar12 == 0) {
        uVar4 = *(ulong *)(puVar13 + 0x10);
      }
      else {
        uVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (uVar14 == uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10006ed8c);
        (*pcVar3)();
      }
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar13 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10006ed9c);
          (*pcVar3)();
        }
        uVar4 = *(ulong *)(param_1.unknown + uVar14 * 8 + 0x20);
      }
      else {
        uVar4 = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,param_1);
      }
      if (uVar15 == uVar14) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10006edc4);
        (*pcVar3)();
      }
      pMVar17 = *(MainActor **)(param_2 + uVar14 * 8 + 0x20);
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar6 = pMVar17;
      _swift_bridgeObjectRetain();
      CVar7.unknown = Swift::MainActor::get_shared(pMVar5,pMVar6);
      puVar8 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x201,UVar9.unknown,puVar8);
      }
      uVar14 = uVar14 + 1;
      FUN_1003ca9c0(0);
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(pMVar17);
      CVar11.unknown = pMVar17;
      FUN_1003ca230(uVar4);
      _swift_bridgeObjectRelease(pMVar17);
      _swift_release();
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar7);
                    /* WARNING: Load size is inaccurate */
      CVar7.unknown = puVar2[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar7.unknown,CVar11);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar7.unknown,uVar4);
      Swift::ContiguousArray::__endMutation(CVar7);
    } while (uVar16 != uVar14);
  }
  local_70 = (ulong)param_1.unknown & 0xc000000000000001;
  puVar13 = param_1.unknown & 0xffffffffffffff8;
  _Var1.unknown = puVar13;
  if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
    _Var1.unknown = param_1.unknown;
  }
  while( true ) {
    if (uVar12 == 0) {
      uVar14 = *(ulong *)(puVar13 + 0x10);
    }
    else {
      uVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (uVar16 == uVar14) {
      return puVar2;
    }
    if (local_70 == 0) {
      if (*(ulong *)(puVar13 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10006ed94);
        (*pcVar3)();
      }
      uVar14 = *(ulong *)(param_1.unknown + uVar16 * 8 + 0x20);
    }
    else {
      uVar14 = uVar16;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar16,param_1);
    }
    if (SCARRY8(uVar16,1)) break;
    if (uVar15 == uVar16) {
      return puVar2;
    }
    if (uVar15 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10006ed98);
      (*pcVar3)();
    }
    pMVar17 = *(MainActor **)(param_2 + uVar16 * 8 + 0x20);
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    pMVar6 = pMVar17;
    _swift_bridgeObjectRetain();
    CVar7.unknown = Swift::MainActor::get_shared(pMVar5,pMVar6);
    puVar8 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar9 = Swift::Actor::get_unownedExecutor();
    UVar10 = UVar9;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar10.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/ItemCollectionView.swift",0x1e,1,0x201,UVar9.unknown,puVar8);
    }
    FUN_1003ca9c0(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(pMVar17);
    CVar11.unknown = pMVar17;
    FUN_1003ca230(uVar14);
    _swift_bridgeObjectRelease(pMVar17);
    _swift_release();
    Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar7);
                    /* WARNING: Load size is inaccurate */
    CVar7.unknown = puVar2[0x10];
    Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar7.unknown,CVar11);
    Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar7.unknown,uVar14);
    Swift::ContiguousArray::__endMutation(CVar7);
    uVar16 = uVar16 + 1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10006ed90);
  (*pcVar3)();
}



/* Address: 0x10006edc4 | FUN_10006edc4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10006edc4(ulong *param_1,ulong param_2)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  long lVar11;
  undefined *puVar12;
  ID self;
  ulong uVar13;
  ulong uVar14;
  ID unaff_x20;
  MainActor *pMVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined *local_b0;
  long local_88;
  long local_80;
  undefined *local_78;
  
  lVar2 = _TtC5Paste18ItemCollectionView::viewModel;
  pMVar15 = *(MainActor **)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  pMVar6 = pMVar15;
  _swift_retain();
  uVar5 = (uint)pMVar6;
  FUN_1003b9128();
  _swift_release();
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0x108))();
  lVar3 = _TtC5Paste18ItemCollectionView::applier;
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar17 = *(long *)(pMVar15 + 0x10);
  if (lVar17 == 0) {
    _swift_bridgeObjectRelease();
    local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    pMVar6 = Swift::MainActor::typeMetadataAccessor();
    local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar19 = 0x20;
    do {
      uVar21 = *(undefined8 *)(pMVar15 + lVar19);
      pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar15);
      puVar8 = &DAT_100fa6bb0;
      FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar9 = Swift::Actor::get_unownedExecutor();
      UVar10 = UVar9;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar10.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/ItemCollectionView.swift",0x1e,1,0x18d,UVar9.unknown,puVar8);
      }
      lVar22 = *(long *)(unaff_x20 + lVar3);
      if (lVar22 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f278);
        (*pcVar4)();
      }
      uVar16 = *(undefined8 *)(unaff_x20 + lVar2);
      _swift_retain(uVar16);
      lVar11 = lVar22;
      _swift_retain();
      FUN_1003b8bfc();
      _swift_release(uVar16);
      puVar18 = &DAT_100faa390;
      local_88 = lVar11;
      FUN_1000037f0(&DAT_100faa390,&DAT_100c26c70);
      puVar12 = &DAT_100fa9820;
      FUN_100016eac(&DAT_100fa9820,&DAT_100faa390,&DAT_100c26c70,
                    &TargetProtocolConformanceDescriptor_100c32ac0);
      FUN_1001b9698(&local_80,uVar21,&local_88,puVar18,puVar12);
      _swift_release(pMVar7);
      _swift_release(lVar11);
      _swift_release(lVar22);
      lVar22 = local_80;
      if (local_80 != 0) {
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        uVar20 = *(ulong *)(((ulong)local_78 & 0xffffffffffffff8) + 0x10);
        uVar13 = *(ulong *)(((ulong)local_78 & 0xffffffffffffff8) + 0x18);
        if (uVar13 >> 1 <= uVar20) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar13,uVar20 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar20,lVar22);
        local_b0 = local_78;
      }
      lVar19 = lVar19 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    _swift_bridgeObjectRelease();
  }
  puVar18 = (undefined *)((ulong)local_b0 & 0xffffffffffffff8);
  if ((ulong)local_b0 >> 0x3e == 0) {
    uVar20 = *(ulong *)(puVar18 + 0x10);
  }
  else {
    _Var1.unknown = puVar18;
    if ((undefined *)0x7fffffffffffffff < local_b0) {
      _Var1.unknown = local_b0;
    }
    uVar20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar13 = 0;
  do {
    uVar14 = uVar13;
    if (uVar20 == uVar14) break;
    if (((ulong)local_b0 & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar18 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f260);
        (*pcVar4)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(uVar14,(_ArrayBuffer)local_b0);
    }
    if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10006f25c);
      (*pcVar4)();
    }
    pMVar6 = Swift::MainActor::typeMetadataAccessor();
    pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
    puVar8 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,PTR_typeMetadataAccessor_100eaec10,
                  PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar9 = Swift::Actor::get_unownedExecutor();
    UVar10 = UVar9;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar10.unknown & 1) == 0) {
      UVar10.unknown = (undefined *)0x0;
      _swift_task_reportUnexpectedExecutor
                ("Paste/ItemCollectionView.swift",0x1e,1,0x220,UVar9.unknown,puVar8);
    }
    FUN_10030cc3c();
    _swift_release(pMVar6);
    uVar13 = uVar14 + 1;
  } while (((ulong)UVar10.unknown & 1) != 0);
  _swift_bridgeObjectRelease(local_b0);
  self = objc_stub::window(unaff_x20);
  if (self != 0) {
    pMVar6 = Swift::MainActor::typeMetadataAccessor();
    puVar18 = PTR_typeMetadataAccessor_100eaec10;
    pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
    puVar8 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar18,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar9 = Swift::Actor::get_unownedExecutor();
    UVar10 = UVar9;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar10.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/ItemCollectionView.swift",0x1e,1,0x222,UVar9.unknown,puVar8);
    }
    uVar13 = objc_stub::frame(self);
    _CGRectContainsPoint();
    _swift_release(pMVar6);
    if (((uVar20 != uVar14) && ((uVar5 & 1) == 0 && (param_2 & 1) != 0)) && ((uVar13 & 1) == 0)) {
      uVar21 = *(undefined8 *)(unaff_x20 + lVar2);
      _swift_retain(uVar21);
      FUN_1003bb23c();
      _swift_release(uVar21);
    }
  }
  return;
}



/* Address: 0x10006f278 | FUN_10006f278 */

void FUN_10006f278(undefined8 param_1,undefined8 param_2)

{
  FUN_100075460(param_2);
  return;
}



/* Address: 0x10006f280 | FUN_10006f280 */

void FUN_10006f280(undefined8 param_1,undefined8 param_2)

{
  FUN_100075718(param_2);
  return;
}



/* Address: 0x10006f288 | FUN_10006f288 */

void FUN_10006f288(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100075a6c(param_2,param_3);
  return;
}



/* Address: 0x10006f294 | FUN_10006f294 */

void FUN_10006f294(undefined8 param_1,undefined8 param_2)

{
  FUN_100075e3c(param_2);
  return;
}



/* Address: 0x10006f29c | FUN_10006f29c */

void FUN_10006f29c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 local_48;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _TtC5Paste18ItemCollectionView::viewModel);
  _swift_retain(uVar3);
  FUN_10006c924();
  puVar1 = &DAT_100fa8310;
  local_48 = param_2;
  FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
  puVar2 = &DAT_100fa9830;
  FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  FUN_1003bace8(&local_48,param_3,puVar1,puVar2);
  _swift_bridgeObjectRelease(param_2);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10006f35c | thunk_FUN_100075d4c */

void thunk_FUN_100075d4c(void)

{
  FUN_100075d4c();
  return;
}



/* Address: 0x10006f360 | thunk_FUN_10006edc4 */

void thunk_FUN_10006edc4(void)

{
  FUN_10006edc4();
  return;
}



/* Address: 0x10006f364 | FUN_10006f364 */

void FUN_10006f364(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0x20000;
  uVar1 = 0;
  FUN_1000038c0(0);
  FUN_1002ccc34(param_1,0xd000000000000016,0x8000000100d8ec90,&local_28,uVar1);
  return;
}



/* Address: 0x10006f3c0 | FUN_10006f3c0 */

void FUN_10006f3c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  local_28 = 0x100000;
  uVar1 = 0;
  FUN_1000038c0(0);
  FUN_1002ccc34(param_1,0xd000000000000017,0x8000000100d8ec70,&local_28,uVar1);
  return;
}



/* Address: 0x10006f41c | FUN_10006f41c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

long * FUN_10006f41c(ulong param_1,long param_2,code *param_3,undefined8 param_4,long param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                    undefined8 param_10,long param_11,undefined8 param_12,undefined8 param_13,
                    undefined8 param_14)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  undefined *puVar4;
  char cVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  NSString *pNVar13;
  long *plVar14;
  undefined *puVar15;
  _ArrayBuffer _Var16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  LocalizedStringResource LVar20;
  long *plVar21;
  long *plVar22;
  undefined8 uVar23;
  char *pcVar24;
  void *pvVar25;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar26;
  long unaff_x20;
  __int64 _Var27;
  uint uVar28;
  char *pcVar29;
  undefined8 uVar30;
  long lVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  String SVar36;
  String SVar37;
  ulong local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  uint local_208;
  uint local_204;
  undefined8 local_200;
  long local_1f8;
  char *local_1f0;
  ulong local_1e8;
  code *local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  _ArrayBuffer _Stack_1c8;
  long *local_1c0;
  ulong local_1b8;
  long *local_1b0;
  undefined8 local_1a8;
  long local_1a0;
  long local_198;
  long *local_190;
  long *local_188;
  long *local_180;
  undefined8 local_178;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar12 = (undefined8 *)
            (unaff_x20 + _TtCC5Paste18ItemCollectionView11ContextMenu::_isPasteAsPlainTextEnabled);
  local_218 = param_7;
  uStack_210 = param_8;
  local_200 = param_6;
  local_1f8 = param_5;
  local_1e8 = param_1;
  _swift_getKeyPath(&DAT_100c26d88);
  FUN_1002cb7e0(&local_160);
  puVar12[1] = uStack_158;
  *puVar12 = local_160;
  puVar12[3] = uStack_148;
  puVar12[2] = uStack_150;
  puVar12[5] = uStack_138;
  puVar12[4] = local_140;
  puVar12[6] = local_130;
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtCC5Paste18ItemCollectionView11ContextMenu::_plainTextModifierFlags);
  puVar11 = &DAT_100c26ca8;
  _swift_getKeyPath(&DAT_100c26ca8);
  puVar12 = &DAT_100fa64a0;
  FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
  FUN_1002cbe78(&local_128,puVar11,puVar12);
  puVar1[1] = uStack_120;
  *puVar1 = local_128;
  puVar1[3] = uStack_110;
  puVar1[2] = local_118;
  puVar1[5] = uStack_100;
  puVar1[4] = local_108;
  puVar1[6] = local_f8;
  pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  FUN_10009e888();
  pcVar24 = "initWithTitle:";
  plVar14 = (long *)_objc_msgSendSuper2((objc_super *)&stack0xfffffffffffffe90,"initWithTitle:",
                                        pNVar13);
  local_198 = param_11;
  _Var16.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_1e0 = param_3;
  local_1d8 = param_4;
  if (param_11 != 0) {
    pcVar29 = *(char **)(param_2 + 0x40);
    FUN_10000444c(pcVar29);
    (*param_3)(&local_b0);
    puVar11 = &DAT_100fa8310;
    FUN_1000037f0(&DAT_100fa8310,&DAT_100c26d10);
    puVar15 = &DAT_100fa9830;
    FUN_100016eac(&DAT_100fa9830,&DAT_100fa8310,&DAT_100c26d10,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
    _Var16.unknown = (undefined *)&local_b0;
    pcVar24 = pcVar29;
    FUN_1003b83c4(_Var16.unknown,pcVar29,puVar11,puVar15);
    FUN_100021e40(pcVar29);
    _swift_bridgeObjectRelease(local_b0);
  }
  uVar26 = local_1e8;
  FUN_100053fb8();
  uVar10 = uVar28;
  FUN_10031eba8();
  uVar28 = (uint)uVar26;
  local_208 = uVar28;
  local_204 = uVar10;
  if ((uVar26 & 1) != 0) {
    plVar21 = plVar14;
    FUN_10009db88();
    plVar17 = (long *)0x0;
    FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    FUN_10020c888();
    lVar32 = *plVar17;
    lVar3 = plVar17[1];
    _swift_bridgeObjectRetain_n(lVar3,2);
    lVar18 = lVar32;
    FUN_1000f653c(lVar32,lVar3);
    if (lVar18 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      lVar32 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070de0);
        (*pcVar6)();
      }
    }
    else {
      FUN_1000f653c(lVar32,lVar3);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10006f678);
        (*pcVar6)();
      }
    }
    bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar8 & 1) == 0) {
      lVar32 = 0;
    }
    uVar19 = 0;
    FUN_10009f298(0,lVar32);
    puVar11 = &DAT_100eb2a78;
    _swift_allocObject(&DAT_100eb2a78,0x28,7);
    uVar30 = local_1d8;
    *(long *)(puVar11 + 0x10) = param_2;
    *(code **)(puVar11 + 0x18) = local_1e0;
    *(undefined8 *)(puVar11 + 0x20) = local_1d8;
    _swift_retain(param_2);
    _swift_retain(uVar30);
    FUN_10021bafc(plVar21,pcVar24,uVar19,0,0x6f,0xe100000000000000,0x100000,0,FUN_1000762bc,puVar11,
                  plVar14);
    _swift_bridgeObjectRelease(pcVar24);
    _swift_release(puVar11);
  }
  if ((local_204 & 0xff) == 3) {
    LVar20 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(undefined8 *)(*(long *)(LVar20.unknown + -8) + 0x40));
    LVar20.unknown = (undefined *)((long)&local_220 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
    FUN_1001c3788(LVar20.unknown);
    SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
    plVar21 = (long *)0x0;
    FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
    FUN_10020cfa8();
    lVar32 = *plVar21;
    lVar3 = plVar21[1];
    _swift_bridgeObjectRetain_n(lVar3,2);
    lVar18 = lVar32;
    FUN_1000f653c(lVar32,lVar3);
    if (lVar18 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      lVar32 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070de4);
        (*pcVar6)();
      }
    }
    else {
      FUN_1000f653c(lVar32,lVar3);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10006f840);
        (*pcVar6)();
      }
    }
    bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar8 & 1) == 0) {
      lVar32 = 0;
    }
    uVar19 = 0;
    FUN_10009f298(0,lVar32);
    puVar11 = &DAT_100eb2a50;
    _swift_allocObject(&DAT_100eb2a50,0x28,7);
    uVar30 = local_1d8;
    *(long *)(puVar11 + 0x10) = param_2;
    *(code **)(puVar11 + 0x18) = local_1e0;
    *(undefined8 *)(puVar11 + 0x20) = local_1d8;
    _swift_retain(param_2);
    _swift_retain(uVar30);
    FUN_10021bafc(SVar36.str,SVar36.bridgeObject,uVar19,0,0,0xe000000000000000,0,0,FUN_1000762b0,
                  puVar11,plVar14);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    _swift_release(puVar11);
  }
  local_1a8 = param_12;
  uVar26 = (ulong)_Var16.unknown >> 0x3e;
  local_1a0 = param_2;
  if (local_198 != 0) {
    local_220 = uVar26;
    if (uVar26 == 0) {
      _Var27 = *(__int64 *)((_Var16.unknown & 0xffffffffffffff8U) + 0x10);
    }
    else {
      _Var2.unknown = _Var16.unknown & 0xffffffffffffff8U;
      if ((undefined8 *)0x7fffffffffffffff < _Var16.unknown) {
        _Var2.unknown = _Var16.unknown;
      }
      _Var27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    _swift_retain(local_1a8);
    if (_Var27 != 0) {
      plVar21 = (long *)0x0;
      local_1b0 = (long *)((ulong)_Var16.unknown & 0xc000000000000001);
      local_1b8 = (ulong)_Var16.unknown & 0xffffffffffffff8;
      local_1f0 = "Paste.PreviewHeader";
      local_1d0 = _Var27;
      _Stack_1c8.unknown = _Var16.unknown;
      local_1c0 = plVar14;
      do {
        plVar14 = local_1c0;
        if (local_1b0 == (long *)0x0) {
          if (*(long **)(local_1b8 + 0x10) <= plVar21) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100070d9c);
            (*pcVar6)();
          }
          plVar17 = *(long **)(_Stack_1c8.unknown + (long)plVar21 * 8 + 0x20);
        }
        else {
          plVar17 = plVar21;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)plVar21,_Stack_1c8);
        }
        if (SCARRY8((long)plVar21,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100070d98);
          (*pcVar6)();
        }
        plVar22 = plVar17;
        FUN_1003250f0();
        local_180 = (long *)((long)plVar21 + 1);
        if (((ulong)plVar22 & 1) == 0) {
          FUN_10020cccc();
        }
        else {
          FUN_100328e60();
          if (((ulong)plVar22 & 1) == 0) {
            FUN_10020cbec();
          }
          else {
            FUN_10020cc18();
          }
        }
        lVar32 = *plVar22;
        lVar3 = plVar22[1];
        _swift_bridgeObjectRetain(lVar3);
        LVar20 = Foundation::LocalizedStringResource::typeMetadataAccessor();
        (*(code *)PTR____chkstk_darwin_100ea82c0)
                  (*(undefined8 *)(*(long *)(LVar20.unknown + -8) + 0x40));
        LVar20.unknown =
             (undefined *)((long)&local_220 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
        local_188 = plVar14;
        objc_stub::name((ID)plVar17);
        SVar36 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        thunk_FUN_1001e6bd8(LVar20.unknown,SVar36.str,SVar36.bridgeObject);
        _swift_bridgeObjectRelease(SVar36.bridgeObject);
        SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
        FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
        _swift_bridgeObjectRetain(lVar3);
        lVar18 = lVar32;
        FUN_1000f653c(lVar32,lVar3);
        if (lVar18 == 0) {
          _swift_bridgeObjectRelease(lVar3);
          lVar32 = -0x2fffffffffffffed;
          FUN_1000f653c(0xd000000000000013,(ulong)local_1f0 | 0x8000000000000000);
          if (lVar32 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dcc);
            (*pcVar6)();
          }
        }
        else {
          FUN_1000f653c(lVar32,lVar3);
          if (lVar32 == 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dc8);
            (*pcVar6)();
          }
        }
        local_190 = SVar36.bridgeObject;
        bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
        if ((bVar8 & 1) == 0) {
          lVar32 = 0;
        }
        bVar7 = plVar21 != (long *)0x0;
        uVar30 = 0x100000;
        if (bVar7) {
          uVar30 = 0;
        }
        uVar19 = 0x67;
        if (bVar7) {
          uVar19 = 0;
        }
        uVar23 = 0xe100000000000000;
        if (bVar7) {
          uVar23 = 0xe000000000000000;
        }
        puVar11 = &DAT_100eb2a28;
        _swift_allocObject(&DAT_100eb2a28,0x28,7);
        *(long *)(puVar11 + 0x10) = local_198;
        *(undefined8 *)(puVar11 + 0x18) = local_1a8;
        *(long **)(puVar11 + 0x20) = plVar17;
        FUN_100011128();
        plVar14 = local_190;
        FUN_10021bafc(SVar36.str,local_190,lVar32,0,uVar19,uVar23,uVar30,0,FUN_1000762a4,puVar11,
                      local_188);
        _swift_bridgeObjectRelease(plVar14);
        _swift_bridgeObjectRelease(uVar23);
        _swift_release(puVar11);
        plVar21 = (long *)((long)plVar21 + 1);
        plVar14 = local_1c0;
        _Var16.unknown = _Stack_1c8.unknown;
        param_2 = local_1a0;
      } while (local_180 != (long *)local_1d0);
    }
    FUN_100004550(local_198,local_1a8);
    uVar26 = local_220;
  }
  if (((uint)((local_204 & 0xff) != 3) & (local_208 ^ 0xffffffff)) == 0) {
    _swift_bridgeObjectRelease(_Var16.unknown);
  }
  else {
    if (uVar26 == 0) {
      _Var27 = *(__int64 *)((_Var16.unknown & 0xffffffffffffff8U) + 0x10);
    }
    else {
      _Var2.unknown = _Var16.unknown & 0xffffffffffffff8U;
      if ((undefined8 *)0x7fffffffffffffff < _Var16.unknown) {
        _Var2.unknown = _Var16.unknown;
      }
      _Var27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    _swift_bridgeObjectRelease(_Var16.unknown);
    if (_Var27 == 0) goto LAB_10006fcb4;
  }
  FUN_10021b7b4(plVar14);
LAB_10006fcb4:
  puVar12 = (undefined8 *)
            ((long)plVar14 +
            _TtCC5Paste18ItemCollectionView11ContextMenu::_isPasteAsPlainTextEnabled);
  uVar34 = puVar12[1];
  uVar19 = *puVar12;
  uStack_98 = puVar12[3];
  uVar23 = puVar12[2];
  uStack_88 = puVar12[5];
  uVar33 = puVar12[4];
  uVar30 = puVar12[6];
  local_b0 = uVar19;
  uStack_a8 = uVar34;
  local_a0 = uVar23;
  local_90 = uVar33;
  local_80 = uVar30;
  _swift_retain(uVar19);
  _swift_retain(uVar34);
  _swift_retain(uVar23);
  _swift_retain(uVar33);
  _swift_retain(uVar30);
  puVar11 = &DAT_100c25940;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_f0);
  _swift_release(uVar30);
  _swift_release(uVar33);
  _swift_release(uVar23);
  _swift_release(uVar34);
  _swift_release(uVar19);
  cVar5 = (char)local_f0;
  plVar21 = plVar14;
  FUN_10009ddc8();
  plVar22 = (long *)0x0;
  FUN_10000ec2c(0,&DAT_100fa8680,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
  plVar17 = plVar22;
  FUN_10020cdec();
  lVar32 = *plVar17;
  lVar3 = plVar17[1];
  _swift_bridgeObjectRetain_n(lVar3,2);
  lVar18 = lVar32;
  local_180 = plVar22;
  FUN_1000f653c(lVar32,lVar3);
  if (cVar5 == '\x01') {
    if (lVar18 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      lVar32 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070de8);
        (*pcVar6)();
      }
    }
    else {
      FUN_1000f653c(lVar32,lVar3);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10006fde0);
        (*pcVar6)();
      }
    }
    bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar8 & 1) == 0) {
      lVar32 = 0;
    }
    uVar19 = 1;
    FUN_10009f298(1,lVar32);
    puVar15 = &DAT_100fa9838;
    FUN_1000037f0(&DAT_100fa9838,&DAT_100c26db0);
    _swift_allocObject();
    *(undefined8 *)(puVar15 + 0x18) = 2;
    *(undefined8 *)(puVar15 + 0x10) = 1;
    puVar4 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
    *(undefined **)(puVar15 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined **)(puVar15 + 0x40) = puVar4;
    *(undefined8 *)(puVar15 + 0x20) = 0xd;
    SVar36 = (extension_Foundation)::Swift::String::_init();
    pvVar25 = SVar36.bridgeObject;
    puVar15 = &DAT_100eb2a00;
    _swift_allocObject(&DAT_100eb2a00,0x28,7);
    uVar30 = local_1d8;
    *(long *)(puVar15 + 0x10) = param_2;
    *(code **)(puVar15 + 0x18) = local_1e0;
    *(undefined8 *)(puVar15 + 0x20) = local_1d8;
    _swift_retain(param_2);
    _swift_retain(uVar30);
    FUN_10021bafc(plVar21,puVar11,uVar19,0,SVar36.str,pvVar25,0,0,FUN_10007626c,puVar15,plVar14);
    _swift_bridgeObjectRelease(puVar11);
  }
  else {
    if (lVar18 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      lVar32 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dec);
        (*pcVar6)();
      }
    }
    else {
      FUN_1000f653c(lVar32,lVar3);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10006fe00);
        (*pcVar6)();
      }
    }
    bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar8 & 1) == 0) {
      lVar32 = 0;
    }
    uVar19 = 1;
    FUN_10009f298(1,lVar32);
    puVar15 = &DAT_100fa9838;
    FUN_1000037f0(&DAT_100fa9838,&DAT_100c26db0);
    _swift_allocObject();
    *(undefined8 *)(puVar15 + 0x18) = 2;
    *(undefined8 *)(puVar15 + 0x10) = 1;
    puVar4 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
    *(undefined **)(puVar15 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined **)(puVar15 + 0x40) = puVar4;
    *(undefined8 *)(puVar15 + 0x20) = 0xd;
    SVar36 = (extension_Foundation)::Swift::String::_init();
    puVar15 = &DAT_100eb28c0;
    _swift_allocObject(&DAT_100eb28c0,0x28,7);
    uVar30 = local_1d8;
    *(long *)(puVar15 + 0x10) = param_2;
    *(code **)(puVar15 + 0x18) = local_1e0;
    *(undefined8 *)(puVar15 + 0x20) = local_1d8;
    _swift_retain(param_2);
    _swift_retain(uVar30);
    FUN_10021bafc(plVar21,puVar11,uVar19,0,SVar36.str,SVar36.bridgeObject,0,0,FUN_1000761ac,puVar15,
                  plVar14);
    local_190 = plVar14;
    local_188 = plVar21;
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    _swift_release(puVar15);
    LVar20 = Foundation::LocalizedStringResource::typeMetadataAccessor();
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(undefined8 *)(*(long *)(LVar20.unknown + -8) + 0x40));
    LVar20.unknown = (undefined *)((long)&local_220 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    FUN_1001c2588(LVar20.unknown);
    SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
    pvVar25 = SVar36.bridgeObject;
    plVar14 = (long *)SVar36.str;
    FUN_10020d9f8();
    lVar32 = *plVar14;
    lVar3 = plVar14[1];
    _swift_bridgeObjectRetain_n(lVar3,2);
    lVar18 = lVar32;
    FUN_1000f653c(lVar32,lVar3);
    if (lVar18 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      lVar32 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070df0);
        (*pcVar6)();
      }
    }
    else {
      FUN_1000f653c(lVar32,lVar3);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070150);
        (*pcVar6)();
      }
    }
    if ((bVar8 & 1) == 0) {
      lVar32 = 0;
    }
    uVar23 = 1;
    local_1b0 = (long *)SVar36.str;
    FUN_10009f298(1,lVar32);
    plVar14 = local_190;
    puVar12 = (undefined8 *)
              ((long)local_190 +
              _TtCC5Paste18ItemCollectionView11ContextMenu::_plainTextModifierFlags);
    uVar35 = puVar12[1];
    uVar19 = *puVar12;
    uStack_d8 = puVar12[3];
    uVar33 = puVar12[2];
    uStack_c8 = puVar12[5];
    uVar34 = puVar12[4];
    uVar30 = puVar12[6];
    local_f0 = uVar19;
    uStack_e8 = uVar35;
    local_e0 = uVar33;
    local_d0 = uVar34;
    local_c0 = uVar30;
    _swift_retain(uVar19);
    _swift_retain(uVar35);
    _swift_retain(uVar33);
    _swift_retain(uVar34);
    _swift_retain(uVar30);
    FUN_1000037f0(&DAT_100fa9780,&DAT_100c26cd0);
    FUN_1002ca7e0(&local_178);
    _swift_release(uVar30);
    _swift_release(uVar34);
    _swift_release(uVar33);
    _swift_release(uVar35);
    _swift_release(uVar19);
    uVar19 = local_178;
    puVar15 = &DAT_100eb28e8;
    _swift_allocObject(&DAT_100eb28e8,0x28,7);
    param_2 = local_1a0;
    uVar30 = local_1d8;
    *(long *)(puVar15 + 0x10) = local_1a0;
    *(code **)(puVar15 + 0x18) = local_1e0;
    *(undefined8 *)(puVar15 + 0x20) = local_1d8;
    _swift_retain(local_1a0);
    _swift_retain(uVar30);
    FUN_10021bafc(local_1b0,pvVar25,uVar23,0,10,0xe100000000000000,uVar19,0,FUN_100076200,puVar15,
                  local_188);
  }
  _swift_bridgeObjectRelease(pvVar25);
  _swift_release(puVar15);
  LVar20 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar31 = *(long *)(*(long *)(LVar20.unknown + -8) + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  LVar20.unknown = (undefined *)((long)&local_220 - (lVar31 + 0xfU & 0xfffffffffffffff0));
  FUN_1001c0c08(LVar20.unknown);
  SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
  plVar21 = (long *)SVar36.str;
  FUN_10020ce14();
  lVar32 = *plVar21;
  lVar3 = plVar21[1];
  _swift_bridgeObjectRetain_n(lVar3,2);
  lVar18 = lVar32;
  FUN_1000f653c(lVar32,lVar3);
  if (lVar18 == 0) {
    _swift_bridgeObjectRelease(lVar3);
    lVar32 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar32 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dd4);
      (*pcVar6)();
    }
  }
  else {
    FUN_1000f653c(lVar32,lVar3);
    if (lVar32 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000703a0);
      (*pcVar6)();
    }
  }
  local_188 = (long *)param_14;
  local_190 = (long *)param_10;
  uVar19 = 0;
  FUN_10009f298(0,lVar32);
  puVar11 = &DAT_100eb2910;
  _swift_allocObject(&DAT_100eb2910,0x28,7);
  uVar30 = local_1d8;
  *(long *)(puVar11 + 0x10) = param_2;
  *(code **)(puVar11 + 0x18) = local_1e0;
  *(undefined8 *)(puVar11 + 0x20) = local_1d8;
  _swift_retain(param_2);
  _swift_retain(uVar30);
  FUN_10021bafc(SVar36.str,SVar36.bridgeObject,uVar19,0,99,0xe100000000000000,0x100000,0,
                FUN_10007620c,puVar11,plVar14);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  _swift_release(puVar11);
  uVar26 = 0;
  FUN_10031f040();
  if ((uVar26 & 1) != 0) {
    FUN_10021b7b4();
    uVar26 = 0;
    FUN_10031c2ec();
    local_1b0 = plVar14;
    if ((uVar26 & 1) != 0) {
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      LVar20.unknown = (undefined *)((long)&local_220 - (lVar31 + 0xfU & 0xfffffffffffffff0));
      FUN_1001c1688(LVar20.unknown);
      SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
      plVar21 = (long *)SVar36.str;
      FUN_10020d5e4();
      lVar32 = *plVar21;
      lVar3 = plVar21[1];
      _swift_bridgeObjectRetain_n(lVar3,2);
      lVar18 = lVar32;
      FUN_1000f653c(lVar32,lVar3);
      if (lVar18 == 0) {
        _swift_bridgeObjectRelease(lVar3);
        lVar32 = -0x2fffffffffffffed;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (lVar32 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dfc);
          (*pcVar6)();
        }
      }
      else {
        FUN_1000f653c(lVar32,lVar3);
        if (lVar32 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100070560);
          (*pcVar6)();
        }
      }
      bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      if ((bVar8 & 1) == 0) {
        lVar32 = 0;
      }
      puVar11 = &DAT_100eb29b0;
      _swift_allocObject(&DAT_100eb29b0,0x20,7);
      plVar21 = local_190;
      *(undefined8 *)(puVar11 + 0x10) = param_9;
      *(long **)(puVar11 + 0x18) = local_190;
      _swift_retain(local_190);
      FUN_10021bafc(SVar36.str,SVar36.bridgeObject,lVar32,0,0x65,0xe100000000000000,0x100000,0,
                    FUN_10007625c,puVar11,plVar14);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      _swift_release(puVar11);
      puVar11 = &DAT_100eb29d8;
      _swift_allocObject(&DAT_100eb29d8,0x20,7);
      *(undefined8 *)(puVar11 + 0x10) = param_9;
      *(long **)(puVar11 + 0x18) = plVar21;
      _swift_retain(plVar21);
      pcVar6 = FUN_100076264;
      FUN_100216b48(FUN_100076264,puVar11);
      _swift_release();
      uVar28 = (uint)puVar11;
      if ((pcVar6 != (code *)0x0) && (FUN_10031eba8(), (uVar28 & 0xff) == 5)) {
        FUN_10021b710(pcVar6,plVar14);
      }
    }
    lVar32 = local_1f8;
    if (local_1f8 != 0) {
      (*(code *)PTR____chkstk_darwin_100ea82c0)();
      LVar20.unknown = (undefined *)((long)&local_220 - (lVar31 + 0xfU & 0xfffffffffffffff0));
      FUN_100011128(lVar32,local_200);
      FUN_1001c2e88(LVar20.unknown);
      SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
      plVar21 = (long *)SVar36.str;
      FUN_10020d604();
      lVar32 = *plVar21;
      lVar3 = plVar21[1];
      _swift_bridgeObjectRetain_n(lVar3,2);
      lVar18 = lVar32;
      FUN_1000f653c(lVar32,lVar3);
      if (lVar18 == 0) {
        _swift_bridgeObjectRelease(lVar3);
        lVar32 = -0x2fffffffffffffed;
        FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
        if (lVar32 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100070df8);
          (*pcVar6)();
        }
      }
      else {
        FUN_1000f653c(lVar32,lVar3);
        if (lVar32 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100070778);
          (*pcVar6)();
        }
      }
      bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
      if ((bVar8 & 1) == 0) {
        lVar32 = 0;
      }
      puVar11 = &DAT_100eb2988;
      _swift_allocObject(&DAT_100eb2988,0x20,7);
      lVar3 = local_1f8;
      uVar30 = local_200;
      *(long *)(puVar11 + 0x10) = local_1f8;
      *(undefined8 *)(puVar11 + 0x18) = local_200;
      _swift_retain(local_200);
      FUN_10021bafc(SVar36.str,SVar36.bridgeObject,lVar32,0,0x72,0xe100000000000000,0x100000,0,
                    FUN_10007625c,puVar11,plVar14);
      FUN_100004550(lVar3,uVar30);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      _swift_release(puVar11);
    }
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    LVar20.unknown = (undefined *)((long)&local_220 - (lVar31 + 0xfU & 0xfffffffffffffff0));
    FUN_1001c1088(LVar20.unknown);
    SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
    plVar21 = (long *)SVar36.str;
    FUN_10020da20();
    lVar32 = *plVar21;
    lVar3 = plVar21[1];
    _swift_bridgeObjectRetain_n(lVar3,2);
    lVar18 = lVar32;
    FUN_1000f653c(lVar32,lVar3);
    if (lVar18 == 0) {
      _swift_bridgeObjectRelease(lVar3);
      lVar32 = -0x2fffffffffffffed;
      FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100070df4);
        (*pcVar6)();
      }
    }
    else {
      FUN_1000f653c(lVar32,lVar3);
      if (lVar32 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000708f4);
        (*pcVar6)();
      }
    }
    bVar8 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    if ((bVar8 & 1) == 0) {
      lVar32 = 0;
    }
    puVar11 = &DAT_100fa9838;
    FUN_1000037f0(&DAT_100fa9838,&DAT_100c26db0);
    _swift_allocObject();
    *(undefined8 *)(puVar11 + 0x18) = 2;
    *(undefined8 *)(puVar11 + 0x10) = 1;
    puVar15 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
    *(undefined **)(puVar11 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined **)(puVar11 + 0x40) = puVar15;
    *(undefined8 *)(puVar11 + 0x20) = 8;
    SVar37 = (extension_Foundation)::Swift::String::_init();
    puVar11 = &DAT_100eb2960;
    _swift_allocObject(&DAT_100eb2960,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = param_13;
    *(long **)(puVar11 + 0x18) = local_188;
    _swift_retain();
    FUN_10021bafc(SVar36.str,SVar36.bridgeObject,lVar32,0,SVar37.str,SVar37.bridgeObject,0,0,
                  FUN_10007625c,puVar11,plVar14);
    _swift_bridgeObjectRelease(SVar36.bridgeObject);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    _swift_release(puVar11);
    plVar14 = local_1b0;
  }
  plVar21 = plVar14;
  FUN_10021b7b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  LVar20.unknown = (undefined *)((long)&local_220 - (lVar31 + 0xfU & 0xfffffffffffffff0));
  FUN_1001c2a08(LVar20.unknown);
  SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
  plVar22 = (long *)SVar36.str;
  plVar17 = plVar22;
  FUN_10020d6c4();
  lVar32 = *plVar17;
  lVar3 = plVar17[1];
  _swift_bridgeObjectRetain_n(lVar3,2);
  lVar18 = lVar32;
  FUN_1000f653c(lVar32,lVar3);
  if (lVar18 == 0) {
    _swift_bridgeObjectRelease(lVar3);
    lVar32 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    if (lVar32 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dd8);
      (*pcVar6)();
    }
  }
  else {
    FUN_1000f653c(lVar32,lVar3);
    if (lVar32 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100070ae0);
      (*pcVar6)();
    }
  }
  bVar9 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  bVar8 = bVar9;
  if ((bVar9 & 1) == 0) {
    bVar8 = 0;
    lVar32 = 0;
  }
  (*local_1e0)(&local_178,bVar8);
  uVar30 = local_178;
  FUN_100075284(local_178,local_1a0);
  _swift_bridgeObjectRelease(local_178);
  FUN_10021b998(plVar22,SVar36.bridgeObject,lVar32,uVar30,plVar21);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  FUN_10021b7b4();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(0);
  LVar20.unknown = (undefined *)((long)&local_220 - (lVar31 + 0xfU & 0xfffffffffffffff0));
  FUN_1001c2b88(LVar20.unknown);
  SVar36 = (extension_Foundation)::Swift::String::init(LVar20);
  plVar21 = (long *)SVar36.str;
  FUN_10020cf68();
  lVar32 = *plVar21;
  lVar3 = plVar21[1];
  _swift_bridgeObjectRetain_n(lVar3,2);
  lVar18 = lVar32;
  FUN_1000f653c(lVar32,lVar3);
  if (lVar18 == 0) {
    _swift_bridgeObjectRelease(lVar3);
    lVar32 = -0x2fffffffffffffed;
    FUN_1000f653c(0xd000000000000013,0x8000000100d8de20);
    lVar3 = local_1f8;
    lVar18 = local_1a0;
    if (lVar32 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100070ddc);
      (*pcVar6)();
    }
  }
  else {
    FUN_1000f653c(lVar32,lVar3);
    lVar3 = local_1f8;
    lVar18 = local_1a0;
    if (lVar32 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100070dd0);
      (*pcVar6)();
    }
  }
  if ((bVar9 & 1) == 0) {
    lVar32 = 0;
  }
  puVar11 = &DAT_100eb2938;
  local_1f8 = lVar3;
  local_1a0 = lVar18;
  _swift_allocObject(&DAT_100eb2938,0x20,7);
  uVar30 = uStack_210;
  *(undefined8 *)(puVar11 + 0x10) = local_218;
  *(undefined8 *)(puVar11 + 0x18) = uStack_210;
  _swift_retain(uStack_210);
  FUN_10021bafc(SVar36.str,SVar36.bridgeObject,lVar32,0,0x20,0xe100000000000000,0,0,FUN_10007625c,
                puVar11,plVar22);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  _swift_release(puVar11);
  FUN_10009e094(local_1e8);
  _swift_release(local_188);
  FUN_100004550(local_198,local_1a8);
  _swift_release(uVar30);
  _swift_release(local_190);
  FUN_100004550(lVar3,local_200);
  _swift_release(lVar18);
  _swift_release(local_1d8);
  return plVar14;
}



/* Address: 0x100070dfc | FUN_100070dfc */

void FUN_100070dfc(undefined8 *param_1,code *param_2)

{
  undefined8 local_38;
  
  (*param_2)(&local_38);
  FUN_10037a9f8();
  FUN_100066068(local_38,*param_1,0);
  _swift_bridgeObjectRelease(local_38);
  return;
}



/* Address: 0x100070e54 | FUN_100070e54 */

void FUN_100070e54(ulong *param_1,code *param_2)

{
  ulong uVar1;
  undefined8 local_38;
  
  (*param_2)(&local_38);
  FUN_10037a9f8();
  uVar1 = *param_1;
  FUN_10037aa04();
  FUN_100066068(local_38,*param_1 | uVar1,0);
  _swift_bridgeObjectRelease(local_38);
  return;
}



/* Address: 0x100070eb8 | FUN_100070eb8 */

void FUN_100070eb8(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0xd000000000000019,0x8000000100d8ecf0,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100070efc | FUN_100070efc */

void FUN_100070efc(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x110,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x118);
  uVar3 = *(undefined8 *)(lVar1 + 0x110);
  uStack_78 = *(undefined8 *)(lVar1 + 0x128);
  uVar6 = *(undefined8 *)(lVar1 + 0x120);
  uStack_68 = *(undefined8 *)(lVar1 + 0x138);
  uVar4 = *(undefined8 *)(lVar1 + 0x130);
  uVar2 = *(undefined8 *)(lVar1 + 0x140);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100070fe4 | FUN_100070fe4 */

void FUN_100070fe4(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 local_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &DAT_100c26d20;
  _swift_getKeyPath(&DAT_100c26d20);
  puVar3 = &DAT_100c26d48;
  _swift_getKeyPath(&DAT_100c26d48);
  local_31 = uVar1;
  _swift_retain(uVar4);
  FUN_1002cb5a0(&local_31,uVar4,puVar2,puVar3);
  return;
}



/* Address: 0x100071054 | FUN_100071054 */

void FUN_100071054(undefined8 param_1,int *param_2)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1000749a0;
                    /* WARNING: Could not recover jumptable at 0x0001000710b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1);
  return;
}



/* Address: 0x1000710b8 | FUN_1000710b8 */

undefined * FUN_1000710b8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fa9848;
    FUN_1000037f0(&DAT_100fa9848,&DAT_100c26df8);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  return puVar2;
}



/* Address: 0x100071138 | FUN_100071138 */

undefined * FUN_100071138(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x1000711bc | FUN_1000711bc */

void FUN_1000711bc(ulong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  bool bVar7;
  Hasher HVar8;
  __int64 _Var9;
  long unaff_x20;
  String SVar10;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  uVar1 = (uint)param_1 & 0xff;
  pcVar4 = (char *)0x656369766564;
  if (uVar1 != 4) {
    pcVar4 = (char *)0x6472616f626e6970;
  }
  puVar2 = &DAT_e600000000000000;
  if (uVar1 != 4) {
    puVar2 = &DAT_e800000000000000;
  }
  pcVar3 = (char *)0x65746164;
  if (uVar1 != 3) {
    pcVar3 = pcVar4;
  }
  HVar8.unknown = &DAT_e400000000000000;
  if (uVar1 != 3) {
    HVar8.unknown = puVar2;
  }
  pcVar4 = &DAT_65707974;
  if (uVar1 != 1) {
    pcVar4 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (uVar1 != 1) {
    puVar2 = &DAT_e500000000000000;
  }
  bVar7 = (param_1 & 0xff) != 0;
  pcVar5 = (char *)0x707061;
  if (bVar7) {
    pcVar5 = pcVar4;
  }
  puVar6 = (undefined1 *)0xe300000000000000;
  if (bVar7) {
    puVar6 = puVar2;
  }
  if (uVar1 < 3) {
    HVar8.unknown = puVar6;
    pcVar3 = pcVar5;
  }
  SVar10.bridgeObject = HVar8.unknown;
  SVar10.str = pcVar3;
  Swift::String::hash((Hasher)auStack_78,SVar10);
  _swift_bridgeObjectRelease();
  _Var9 = Swift::Hasher::_finalize(HVar8);
  FUN_100071664(param_1,_Var9);
  return;
}



/* Address: 0x1000712c0 | FUN_1000712c0 */

void FUN_1000712c0(undefined8 param_1)

{
  Hasher into;
  long unaff_x20;
  __int64 _Var1;
  String SVar2;
  undefined1 auStack_88 [72];
  
  _Var1 = *(__int64 *)(unaff_x20 + 0x28);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(_Var1);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_10007145c(param_1,_Var1);
  return;
}



/* Address: 0x100071340 | FUN_100071340 */

void FUN_100071340(__uint64 param_1,undefined8 param_2,Hasher param_3)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = Swift::Hasher::_hash(*(__int64 *)(unaff_x20 + 0x28),param_1,param_3);
  FUN_100071554(param_1,_Var1);
  return;
}



/* Address: 0x100071370 | FUN_100071370 */

void FUN_100071370(char *param_1,void *param_2)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_1000715b8(param_1,param_2,_Var1);
  return;
}



/* Address: 0x1000713d4 | FUN_1000713d4 */

void FUN_1000713d4(undefined8 param_1)

{
  uint uVar1;
  Hasher HVar2;
  __int64 _Var3;
  long unaff_x20;
  String SVar4;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  uVar1 = 0x6b6e696c;
  if (((uint)param_1 & 0xff) != 1) {
    uVar1 = 0x74786574;
  }
  SVar4.bridgeObject = &DAT_e400000000000000;
  SVar4.str = (char *)(ulong)uVar1;
  Swift::String::hash((Hasher)auStack_78,SVar4);
  HVar2.unknown = &DAT_e400000000000000;
  _swift_bridgeObjectRelease();
  _Var3 = Swift::Hasher::_finalize(HVar2);
  FUN_100071664(param_1,_Var3);
  return;
}



/* Address: 0x10007145c | FUN_10007145c */

undefined1  [16] FUN_10007145c(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  String SVar5;
  String SVar6;
  undefined1 auVar7 [16];
  
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar4 = 0;
  }
  else {
    while( true ) {
      SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var2.unknown = SVar5.bridgeObject;
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar5 == SVar6) break;
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar5.str,_Var2,(_StringComparisonResult)(__int8)SVar6.str);
      uVar4 = (ulong)bVar1;
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_bridgeObjectRelease(SVar6.bridgeObject);
      if ((bVar1) ||
         (param_2 = param_2 + 1 & ~uVar3,
         (*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0))
      goto LAB_100071534;
    }
    _swift_bridgeObjectRelease(_Var2.unknown);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    uVar4 = 1;
  }
LAB_100071534:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = param_2;
  return auVar7;
}



/* Address: 0x100071554 | FUN_100071554 */

void FUN_100071554(long param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Address: 0x1000715b8 | FUN_1000715b8 */

undefined1  [16] FUN_1000715b8(undefined *param_1,undefined *param_2,ulong param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar5 = 1;
        goto LAB_10007164c;
      }
      param_3 = param_3 + 1 & ~uVar6;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
  }
  uVar5 = 0;
LAB_10007164c:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = param_3;
  return auVar7;
}



/* Address: 0x100071664 | FUN_100071664 */

void FUN_100071664(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Address: 0x1000716cc | FUN_1000716cc */

void FUN_1000716cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071a00();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100071700 | FUN_100071700 */

void FUN_100071700(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1000718e4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10007171c | FUN_10007171c */

void FUN_10007171c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071a00();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100071750 | FUN_100071750 */

void FUN_100071750(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071b08();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10007176c | FUN_10007176c */

void FUN_10007176c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100072158();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000717a8 | FUN_1000717a8 */

void FUN_1000717a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071c10();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000717c4 | FUN_1000717c4 */

void FUN_1000717c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071d10();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000717e0 | FUN_1000717e0 */

void FUN_1000717e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071e1c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000717fc | FUN_1000717fc */

void FUN_1000717fc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100072158();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100071838 | FUN_100071838 */

void FUN_100071838(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100071f40();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100071854 | FUN_100071854 */

void FUN_100071854(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100072058();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100071870 | FUN_100071870 */

void FUN_100071870(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100072158();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000718ac | FUN_1000718ac */

void FUN_1000718ac(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10007229c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000718c8 | FUN_1000718c8 */

void FUN_1000718c8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100072418();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000718e4 | FUN_1000718e4 */

undefined * FUN_1000718e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071a00);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fa6830;
    FUN_1000037f0(&DAT_100fa6830,&DAT_100c26f60);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ec8580);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100071a00 | FUN_100071a00 */

undefined *
FUN_100071a00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071b08);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    FUN_1000037f0(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar5 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 5) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar6,param_7);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 0x20 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 * 0x20);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar5;
}



/* Address: 0x100071b08 | FUN_100071b08 */

undefined * FUN_100071b08(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100071c10);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fa8ac8;
    FUN_1000037f0(&DAT_100fa8ac8,&DAT_100c26e00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}


