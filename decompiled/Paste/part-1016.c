/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100afd244 | FUN_100afd244 */

void FUN_100afd244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100afd260 | FUN_100afd260 */

undefined8 * FUN_100afd260(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_release(uVar1);
  lVar2 = param_2[2];
  if (param_1[2] == 0) {
    if (lVar2 != 0) {
      uVar1 = param_2[3];
      param_1[2] = lVar2;
      param_1[3] = uVar1;
      goto LAB_100afd2dc;
    }
  }
  else {
    if (lVar2 != 0) {
      uVar3 = param_2[3];
      uVar1 = param_1[3];
      param_1[2] = lVar2;
      param_1[3] = uVar3;
      _swift_release(uVar1);
      goto LAB_100afd2dc;
    }
    _swift_release(param_1[3]);
  }
  lVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = lVar2;
LAB_100afd2dc:
  _swift_release(param_1[4]);
  uVar1 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100afd318 | FUN_100afd318 */

undefined1  [16] FUN_100afd318(void)

{
  return ZEXT816(0x100f332c0);
}



/* Address: 0x100afd328 | FUN_100afd328 */

void FUN_100afd328(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ccc688,1);
  return;
}



/* Address: 0x100afd338 | thunk_FUN_100afd750 */

void thunk_FUN_100afd750(void)

{
  FUN_100afd750();
  return;
}



/* Address: 0x100afd33c | FUN_100afd33c */

void FUN_100afd33c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100afc238(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100afd344 | FUN_100afd344 */

void FUN_100afd344(void)

{
  long unaff_x20;
  
  FUN_100afc54c(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100afd34c | FUN_100afd34c */

void FUN_100afd34c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100afc65c(param_1,param_2,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100afd354 | FUN_100afd354 */

void FUN_100afd354(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100ff9b70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9b68;
  FUN_100005c24(&DAT_100ff9b68,&DAT_100c96850);
  puVar2 = puVar1;
  FUN_100afd3cc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100ff9b70 = puVar3;
  return;
}



/* Address: 0x100afd3cc | FUN_100afd3cc */

void FUN_100afd3cc(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100ff9b78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9b80;
  FUN_100005c24(&DAT_100ff9b80,&DAT_100c96858);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c96f38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96f38,puVar1);
  DAT_100ff9b78 = pTVar2;
  return;
}



/* Address: 0x100afd41c | FUN_100afd41c */

void FUN_100afd41c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100ff9b88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff9b58;
  FUN_100005c24(&DAT_100ff9b58,&DAT_100c96840);
  puVar2 = puVar1;
  FUN_100afd48c();
  puVar3 = PTR__Swift__Swift__Array<undefined>_>Swift__Equatable_100eac528;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Array<undefined>_>Swift__Equatable_100eac528,puVar1,&local_28);
  DAT_100ff9b88 = puVar3;
  return;
}



/* Address: 0x100afd48c | FUN_100afd48c */

void FUN_100afd48c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9b90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96e40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96e40,&DAT_100f337c0);
  DAT_100ff9b90 = pTVar1;
  return;
}



/* Address: 0x100afd4cc | thunk_FUN_100afcb8c */

void thunk_FUN_100afcb8c(void)

{
  FUN_100afcb8c();
  return;
}



/* Address: 0x100afd4d0 | thunk_FUN_100afcc74 */

void thunk_FUN_100afcc74(void)

{
  FUN_100afcc74();
  return;
}



/* Address: 0x100afd4d4 | FUN_100afd4d4 */

bool FUN_100afd4d4(undefined *param_1,undefined *param_2,long param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  
  if (1 < *(ulong *)(param_3 + 0x50)) {
    plVar4 = (long *)(*(ulong *)(param_3 + 0x50) + 0x10);
    lVar5 = *plVar4;
    if (lVar5 != 0) {
      plVar4 = plVar4 + lVar5 * 2;
      _Var1.unknown = (undefined *)*plVar4;
      _Var2.unknown = (undefined *)plVar4[1];
      if (_Var1.unknown != param_1 || _Var2.unknown != param_2) {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var2,(_StringComparisonResult)(__int8)param_1);
        return bVar3;
      }
      return true;
    }
  }
  return false;
}



/* Address: 0x100afd520 | FUN_100afd520 */

void FUN_100afd520(long *param_1,long param_2,long param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long *plVar11;
  MainActor *pMVar12;
  _StringGuts _Var13;
  _StringGuts _Var14;
  
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    if (*(long *)(param_3 + 0x10) == 0) {
      uVar10 = 0;
      lVar8 = 0;
      pMVar12 = (MainActor *)0x0;
      _Var13.unknown = (undefined *)0x0;
      _Var14.unknown = (undefined *)0x0;
    }
    else {
      _Var13.unknown = *(undefined **)(param_3 + 0x20);
      _Var14.unknown = *(undefined **)(param_3 + 0x28);
      uVar10 = (uint)*(byte *)(param_3 + 0x30);
      lVar8 = *(long *)(param_3 + 0x38);
      pMVar12 = *(MainActor **)(param_3 + 0x40);
      _swift_bridgeObjectRetain(_Var14.unknown);
      _swift_retain(pMVar12);
    }
  }
  else {
    plVar11 = (long *)(param_2 + 0x10) + lVar8 * 2;
    _Var13.unknown = (undefined *)*plVar11;
    _Var14.unknown = (undefined *)plVar11[1];
    lVar9 = *(long *)(param_3 + 0x10);
    _swift_bridgeObjectRetain(_Var14.unknown);
    if (lVar9 != 0) {
      this = Swift::MainActor::typeMetadataAccessor();
      plVar11 = (long *)(param_3 + 0x40);
      do {
        _Var1.unknown = (undefined *)plVar11[-4];
        _Var2.unknown = (undefined *)plVar11[-3];
        uVar10 = (uint)*(byte *)(plVar11 + -2);
        lVar8 = plVar11[-1];
        pMVar12 = (MainActor *)*plVar11;
        _swift_bridgeObjectRetain(_Var2.unknown);
        pMVar4 = pMVar12;
        _swift_retain();
        pMVar5 = Swift::MainActor::get_shared(this,pMVar4);
        pMVar4 = pMVar5;
        FUN_100afbeec();
        UVar6 = Swift::Actor::get_unownedExecutor();
        UVar7 = UVar6;
        _swift_task_isCurrentExecutor();
        if (((ulong)UVar7.unknown & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteOnboarding/NavigationContainerView.swift",0x2d,1,0x6c,UVar6.unknown,
                     pMVar4);
        }
        if ((_Var1.unknown == _Var13.unknown) && (_Var2.unknown == _Var14.unknown)) {
          _swift_bridgeObjectRelease(_Var14.unknown);
          _swift_release(pMVar5);
          goto LAB_100afd6dc;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var2,(_StringComparisonResult)(__int8)_Var13.unknown);
        _swift_release(pMVar5);
        if (bVar3) {
          _swift_bridgeObjectRelease(_Var14.unknown);
          _Var13.unknown = _Var1.unknown;
          _Var14.unknown = _Var2.unknown;
          goto LAB_100afd6dc;
        }
        plVar11 = plVar11 + 5;
        _swift_release(pMVar12);
        _swift_bridgeObjectRelease(_Var2.unknown);
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    _swift_bridgeObjectRelease(_Var14.unknown);
    uVar10 = 0;
    lVar8 = 0;
    pMVar12 = (MainActor *)0x0;
    _Var13.unknown = (undefined *)0x0;
    _Var14.unknown = (undefined *)0x0;
  }
LAB_100afd6dc:
  *param_1 = (long)_Var13.unknown;
  param_1[1] = (long)_Var14.unknown;
  param_1[2] = (ulong)uVar10;
  param_1[3] = lVar8;
  param_1[4] = (long)pMVar12;
  return;
}



/* Address: 0x100afd70c | FUN_100afd70c */

undefined8 FUN_100afd70c(undefined8 param_1)

{
  FUN_1000884a0();
  return param_1;
}



/* Address: 0x100afd740 | thunk_FUN_100afd7e8 */

void thunk_FUN_100afd7e8(void)

{
  FUN_100afd7e8();
  return;
}



/* Address: 0x100afd744 | FUN_100afd744 */

void FUN_100afd744(void)

{
  long unaff_x20;
  
  FUN_100afc934(unaff_x20 + 0x10,unaff_x20 + 0x48);
  return;
}



/* Address: 0x100afd750 | FUN_100afd750 */

void FUN_100afd750(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100afd7a4 | FUN_100afd7a4 */

void FUN_100afd7a4(void)

{
  long unaff_x20;
  
  FUN_100afcb1c(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100afd7ac | FUN_100afd7ac */

undefined8 FUN_100afd7ac(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100172318(param_2,param_1);
  return param_2;
}



/* Address: 0x100afd7e8 | FUN_100afd7e8 */

void FUN_100afd7e8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x100afd84c | FUN_100afd84c */

void FUN_100afd84c(void)

{
  long unaff_x20;
  
  FUN_100afc794(unaff_x20 + 0x10,unaff_x20 + 0x48);
  return;
}



/* Address: 0x100afd858 | FUN_100afd858 */

void FUN_100afd858(undefined8 *param_1,undefined *param_2,undefined *param_3,long param_4)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  MainActor *pMVar16;
  
  lVar10 = *(long *)(param_4 + 0x10);
  if (lVar10 == 0) {
    uVar13 = 0;
    uVar9 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar12 = 0;
  }
  else {
    this = Swift::MainActor::typeMetadataAccessor();
    puVar8 = (undefined8 *)(param_4 + 0x68);
    lVar11 = 1;
    do {
      _Var1.unknown = (undefined *)puVar8[-9];
      _Var2.unknown = (undefined *)puVar8[-8];
      pMVar16 = (MainActor *)puVar8[-5];
      _swift_bridgeObjectRetain(_Var2.unknown);
      pMVar4 = pMVar16;
      _swift_retain();
      pMVar5 = Swift::MainActor::get_shared(this,pMVar4);
      pMVar4 = pMVar5;
      FUN_100afbeec();
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteOnboarding/NavigationContainerView.swift",0x2d,1,0x55,UVar6.unknown,pMVar4)
        ;
      }
      if ((_Var1.unknown == param_2) && (_Var2.unknown == param_3)) {
        _swift_release(pMVar16);
        _swift_bridgeObjectRelease(_Var2.unknown);
        _swift_release(pMVar5);
LAB_100afd9a8:
        if (lVar11 < lVar10) {
          uVar13 = puVar8[-4];
          uVar9 = puVar8[-3];
          uVar14 = (ulong)*(byte *)(puVar8 + -2);
          uVar15 = puVar8[-1];
          uVar12 = *puVar8;
          _swift_bridgeObjectRetain(uVar9);
          _swift_retain(uVar12);
          goto LAB_100afd9ec;
        }
        break;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)param_2);
      _swift_release(pMVar16);
      _swift_bridgeObjectRelease(_Var2.unknown);
      _swift_release(pMVar5);
      if (bVar3) goto LAB_100afd9a8;
      puVar8 = puVar8 + 5;
      lVar11 = lVar11 + 1;
    } while (lVar11 - lVar10 != 1);
    uVar13 = 0;
    uVar9 = 0;
    uVar14 = 0;
    uVar15 = 0;
    uVar12 = 0;
  }
LAB_100afd9ec:
  *param_1 = uVar13;
  param_1[1] = uVar9;
  param_1[2] = uVar14;
  param_1[3] = uVar15;
  param_1[4] = uVar12;
  return;
}



/* Address: 0x100afda18 | FUN_100afda18 */

void FUN_100afda18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100ff9b68;
  FUN_100005c24(&DAT_100ff9b68,&DAT_100c96850);
  puVar2 = &DAT_100ff9b58;
  FUN_100005c24(&DAT_100ff9b58,&DAT_100c96840);
  puVar3 = puVar2;
  FUN_100afd354();
  puVar4 = puVar3;
  FUN_100afd41c();
  local_50 = puVar1;
  puStack_48 = puVar2;
  local_40 = puVar3;
  puStack_38 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onChange<A_where_A1:_Swift_Equatable>(of:_A1,initial:_Swift_Bool,_:_(A1,A1)__>_())__>_some>>_100eab5f8
             ,1);
  return;
}



/* Address: 0x100afda98 | thunk_FUN_100afd750 */

void thunk_FUN_100afd750(void)

{
  thunk_FUN_100afd750();
  return;
}



/* Address: 0x100afda9c | thunk_FUN_100afd750 */

void thunk_FUN_100afd750(void)

{
  thunk_FUN_100afd750();
  return;
}



/* Address: 0x100afdaa0 | thunk_FUN_100afd750 */

void thunk_FUN_100afd750(void)

{
  thunk_FUN_100afd750();
  return;
}



/* Address: 0x100afdaa4 | thunk_FUN_100afd7e8 */

void thunk_FUN_100afd7e8(void)

{
  thunk_FUN_100afd7e8();
  return;
}



/* Address: 0x100afdaa8 | FUN_100afdaa8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100afdb84) */
/* WARNING: Removing unreachable block (ram,0x000100afdbf0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100afdbe8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100afdaa8(ID param_1)

{
  NSString *pNVar1;
  Data DVar2;
  JSONDecoder *pJVar3;
  ID IVar4;
  JSONEncoder *pJVar5;
  JSONEncoder *pJVar6;
  NSData *pNVar7;
  undefined8 extraout_x1;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 local_58;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar2.unknown = (undefined *)objc_stub::dataForKey_(param_1,pNVar1);
  if (DVar2.unknown == (undefined *)0x0) {
    IVar4 = param_1;
    FUN_100afdcc4();
    if ((IVar4 & 1) == 0) {
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::removeObjectForKey_(param_1,pNVar1);
    }
    else {
      pJVar5 = Foundation::JSONEncoder::typeMetadataAccessor();
      _swift_allocObject(pJVar5,*(undefined4 *)(pJVar5 + 0x30),*(undefined2 *)(pJVar5 + 0x34));
      pJVar6 = Foundation::JSONEncoder::init(pJVar5);
      pJVar5 = pJVar6;
      FUN_100afb7cc();
      puVar9 = &DAT_100f334b0;
      DVar2 = Foundation::JSONEncoder::_encode(pJVar6,pJVar5,&DAT_100f334b0,pJVar5);
      _swift_release(pJVar6);
      pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar2);
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setObject_forKey_(param_1,pNVar7,pNVar1);
      FUN_10003bf2c(DVar2.unknown,puVar9);
    }
  }
  else {
    uVar8 = extraout_x1;
    DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar2);
    pJVar3 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar3,*(undefined4 *)(pJVar3 + 0x30),*(undefined2 *)(pJVar3 + 0x34));
    pJVar3 = Foundation::JSONDecoder::init(pJVar3);
    FUN_100afb71c();
    Foundation::JSONDecoder::_decode(pJVar3,(Data)0x100f334b0);
    FUN_10003bf2c(DVar2.unknown,uVar8);
    _swift_release(pJVar3);
    _swift_bridgeObjectRelease(local_58);
  }
  return;
}



/* Address: 0x100afdcc4 | FUN_100afdcc4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100afde2c) */

ID FUN_100afdcc4(ID param_1)

{
  NSString *pNVar1;
  ID IVar2;
  Data DVar3;
  JSONDecoder *pJVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ulong local_60 [4];
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::objectForKey_(param_1,pNVar1);
  if (IVar2 == 0) {
    local_60[1] = 0;
    local_60[0] = 0;
    local_60[3] = 0;
    local_60[2] = 0;
    FUN_100afde94(local_60);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar3.unknown = (undefined *)objc_stub::dataForKey_(param_1,pNVar1);
    if (DVar3.unknown == (undefined *)0x0) {
      IVar2 = 0;
    }
    else {
      uVar5 = extraout_x1;
      DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
      pJVar4 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
      pJVar4 = Foundation::JSONDecoder::init(pJVar4);
      Foundation::JSONDecoder::_decode(pJVar4,(Data)PTR___type_metadata_for_Swift_Bool_100eac570);
      FUN_10003bf2c(DVar3.unknown,uVar5);
      _swift_release(pJVar4);
      IVar2 = local_60[0] & 0xff;
    }
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
    FUN_100afde94(local_60);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar2 = objc_stub::boolForKey_(param_1,pNVar1);
  }
  return IVar2;
}



/* Address: 0x100afde84 | FUN_100afde84 */

undefined1  [16] FUN_100afde84(void)

{
  return ZEXT816(0x100f33420);
}



/* Address: 0x100afde94 | FUN_100afde94 */

undefined8 FUN_100afde94(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9bb8;
  FUN_1000037f0(&DAT_100ff9bb8,&DAT_100c968e8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100afdedc | FUN_100afdedc */

undefined1  [16] FUN_100afdedc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6574656c706d6f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6572676f72506e69;
  }
  uVar2 = 0xe900000000000064;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xea00000000007373;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100afdf20 | FUN_100afdf20 */

void FUN_100afdf20(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x6572676f72506e69 || param_3 != -0x15ffffffffff8c8d) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6572676f72506e69,(_StringGuts)0xea00000000007373,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6574656c706d6f63) && (param_3 == -0x16ffffffffffff9c)) {
        _swift_bridgeObjectRelease(0xe900000000000064);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6574656c706d6f63,(_StringGuts)0xe900000000000064,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100afdf88;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100afdf88:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100afe008 | FUN_100afe008 */

String FUN_100afe008(void)

{
  String SVar1;
  
  FUN_100afe6ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100afe030 | FUN_100afe030 */

String FUN_100afe030(void)

{
  String SVar1;
  
  FUN_100afe6ec();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100afe058 | FUN_100afe058 */

String FUN_100afe058(void)

{
  String SVar1;
  
  FUN_100afe72c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100afe080 | FUN_100afe080 */

String FUN_100afe080(void)

{
  String SVar1;
  
  FUN_100afe72c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100afe0a8 | FUN_100afe0a8 */

undefined1  [16] FUN_100afe0a8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee00687461506e6f;
  auVar1._0_8_ = 0x697461676976616e;
  return auVar1;
}



/* Address: 0x100afe0cc | FUN_100afe0cc */

void FUN_100afe0cc(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x697461676976616e && param_3 == -0x11ff978b9eaf9191) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x697461676976616e,(_StringGuts)0xee00687461506e6f,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100afe158 | FUN_100afe158 */

String FUN_100afe158(void)

{
  String SVar1;
  
  FUN_100afe76c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100afe180 | FUN_100afe180 */

String FUN_100afe180(void)

{
  String SVar1;
  
  FUN_100afe76c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100afe1a8 | thunk_FUN_100afe64c */

void thunk_FUN_100afe64c(void)

{
  FUN_100afe64c();
  return;
}



/* Address: 0x100afe1ac | FUN_100afe1ac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100afe3b8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100afe1ac(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedEncodingContainer<undefined> KVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar4;
  long lVar5;
  long local_90;
  undefined *puStack_88;
  long local_80;
  long local_78;
  long local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100ff9bc0;
  FUN_1000037f0(&DAT_100ff9bc0,&DAT_100c968f0);
  local_90 = *(long *)(puVar1 + -8);
  puStack_88 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&local_90 - extraout_x8;
  puVar1 = &DAT_100ff9bc8;
  FUN_1000037f0(&DAT_100ff9bc8,&DAT_100c968f8);
  local_80 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = lVar5 - extraout_x8_00;
  puVar2 = &DAT_100ff9bd0;
  FUN_1000037f0(&DAT_100ff9bd0,&DAT_100c96900);
  local_78 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100afe6ec();
  KVar3 = Swift::Encoder::_container();
  if (param_2 == 0) {
    local_51 = 1;
    FUN_100afe72c();
    Swift::KeyedEncodingContainer::_nestedContainer
              (lVar5,KVar3.unknown,&local_51,puVar2,&DAT_100f335f0,KVar3.unknown);
    (**(code **)(local_90 + 8))(lVar5,puStack_88);
    (**(code **)(local_78 + 8))(lVar4 - extraout_x8_01,puVar2);
  }
  else {
    local_52 = 0;
    FUN_100afe76c();
    Swift::KeyedEncodingContainer::_nestedContainer
              (lVar4,KVar3.unknown,&local_52,puVar2,&DAT_100f335d0,KVar3.unknown);
    local_68 = param_2;
    FUN_1000037f0(&DAT_100ff9b58,&DAT_100c96840);
    FUN_100afee48(&DAT_100ff9bf0,FUN_100afe7ac,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(&local_68);
    (**(code **)(local_80 + 8))(lVar4,puVar1);
    (**(code **)(local_78 + 8))(lVar4 - extraout_x8_01,puVar2);
  }
  return;
}



/* Address: 0x100afe408 | FUN_100afe408 */

void FUN_100afe408(void)

{
  FUN_100afe7ec();
  return;
}



/* Address: 0x100afe41c | FUN_100afe41c */

undefined8 FUN_100afe41c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a0,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100ff9aa8,&DAT_100c96d10);
  FUN_1002ca7e0(&local_88);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_88;
}



/* Address: 0x100afe4f8 | FUN_100afe4f8 */

void FUN_100afe4f8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100afe7ec();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100afe520 | FUN_100afe520 */

void FUN_100afe520(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100afe1ac(param_1,*unaff_x20);
  return;
}



/* Address: 0x100afe538 | FUN_100afe538 */

void FUN_100afe538(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100afe64c(*param_1,*param_2);
  return;
}



/* Address: 0x100afe544 | FUN_100afe544 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100afe544(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = unaff_x20 + 0x48;
  _swift_unknownObjectWeakLoadStrong();
  if (IVar1 != 0) {
    IVar1 = objc_stub::view(IVar1);
    IVar1 = objc_stub::window(IVar1);
    IVar1 = objc_stub::windowController(IVar1);
    objc_stub::close(IVar1);
    return 0;
  }
  return 0;
}



/* Address: 0x100afe5d4 | FUN_100afe5d4 */

void FUN_100afe5d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x48);
  FUN_1005677a8(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100afe64c | FUN_100afe64c */

undefined8 FUN_100afe64c(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 != 0) {
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 == *(long *)(param_2 + 0x10)) {
      if ((lVar3 != 0) && (param_1 != param_2)) {
        puVar4 = (undefined8 *)(param_2 + 0x28);
        puVar5 = (undefined8 *)(param_1 + 0x28);
        do {
          if (((undefined *)puVar5[-1] != (undefined *)puVar4[-1] ||
               (undefined *)*puVar5 != (undefined *)*puVar4) &&
             (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar5[-1],(undefined *)*puVar5,
                                 (_StringComparisonResult)(__int8)(undefined *)puVar4[-1]), !bVar1))
          goto LAB_100afe6d8;
          puVar4 = puVar4 + 2;
          puVar5 = puVar5 + 2;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      uVar2 = 1;
    }
    else {
LAB_100afe6d8:
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0;
}



/* Address: 0x100afe6ec | FUN_100afe6ec */

void FUN_100afe6ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9bd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96c9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96c9c,&DAT_100f33540);
  DAT_100ff9bd8 = pTVar1;
  return;
}



/* Address: 0x100afe72c | FUN_100afe72c */

void FUN_100afe72c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9be0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96c4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96c4c,&DAT_100f335f0);
  DAT_100ff9be0 = pTVar1;
  return;
}



/* Address: 0x100afe76c | FUN_100afe76c */

void FUN_100afe76c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9be8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96bfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96bfc,&DAT_100f335d0);
  DAT_100ff9be8 = pTVar1;
  return;
}



/* Address: 0x100afe7ac | FUN_100afe7ac */

void FUN_100afe7ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9bf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96df0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96df0,&DAT_100f337c0);
  DAT_100ff9bf8 = pTVar1;
  return;
}



/* Address: 0x100afe7bc | FUN_100afe7bc */

void FUN_100afe7bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96df0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96df0,&DAT_100f337c0);
  DAT_100ff9bf8 = pTVar1;
  return;
}



/* Address: 0x100afe7ec | FUN_100afe7ec */

/* WARNING: Removing unreachable block (ram,0x000100afea84) */
/* WARNING: Removing unreachable block (ram,0x000100afeadc) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100afeac8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

long FUN_100afe7ec(long param_1)

{
  char cVar1;
  int iVar2;
  DecodingError DVar3;
  undefined *puVar4;
  KeyedDecodingContainer KVar5;
  long lVar6;
  KeyedDecodingContainer KVar7;
  undefined *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_90;
  undefined *puStack_88;
  long local_80;
  long local_68;
  char local_52;
  char local_51;
  long lVar8;
  
  puVar4 = &DAT_100ff9cf0;
  FUN_1000037f0(&DAT_100ff9cf0,&DAT_100c96cf0);
  local_90 = *(long *)(puVar4 + -8);
  puStack_88 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100ff9cf8;
  local_80 = (long)&local_90 - extraout_x8;
  FUN_1000037f0(&DAT_100ff9cf8,&DAT_100c96cf8);
  lVar14 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  KVar5.unknown = &DAT_100ff9d00;
  FUN_1000037f0(&DAT_100ff9d00,&DAT_100c96d00);
  lVar11 = *(long *)(KVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar13 - extraout_x8_01;
  lVar6 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100afe6ec();
  Swift::Decoder::_container();
  lVar8 = local_80;
  if (unaff_x21 == 0) {
    KVar7.unknown = KVar5.unknown;
    Swift::KeyedDecodingContainer::get_allKeys(KVar5);
    if ((*(long *)(KVar7.unknown + 0x10) != 0) &&
       (cVar1 = KVar7.unknown[0x20], *(long *)(KVar7.unknown + 0x10) == 1 && cVar1 != '\x02')) {
      if (cVar1 == '\x01') {
        puVar4 = KVar7.unknown;
        local_51 = cVar1;
        FUN_100afe72c();
        Swift::KeyedDecodingContainer::_nestedContainer
                  (lVar8,puVar4,&local_51,KVar5.unknown,&DAT_100f335f0,puVar4);
        (**(code **)(local_90 + 8))(lVar8,puStack_88);
        (**(code **)(lVar11 + 8))(lVar12,KVar5.unknown);
        _swift_unknownObjectRelease(KVar7.unknown);
        lVar8 = 0;
      }
      else {
        puVar9 = KVar7.unknown;
        local_52 = cVar1;
        FUN_100afe76c();
        Swift::KeyedDecodingContainer::_nestedContainer
                  (lVar13,puVar9,&local_52,KVar5.unknown,&DAT_100f335d0,puVar9);
        puVar9 = &DAT_100ff9b58;
        FUN_1000037f0(&DAT_100ff9b58,&DAT_100c96840);
        FUN_100afee48(&DAT_100ff9d10,FUN_100afeeb8,
                      PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
        Swift::KeyedDecodingContainer::_decode(&local_68,puVar9);
        (**(code **)(lVar14 + 8))(lVar13,puVar4);
        (**(code **)(lVar11 + 8))(lVar12,KVar5.unknown);
        _swift_unknownObjectRelease(KVar7.unknown);
        lVar8 = local_68;
      }
      FUN_100004594(param_1);
      return lVar8;
    }
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    lVar8 = CONCAT71((int7)((ulong)KVar7.unknown >> 8),DVar3.value);
    puVar10 = (undefined8 *)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(lVar8,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    puVar4 = &DAT_100ff9d08;
    FUN_1000037f0(&DAT_100ff9d08,&DAT_100c96d08);
    iVar2 = *(int *)(puVar4 + 0x30);
    *puVar10 = &DAT_100f334b0;
    Swift::KeyedDecodingContainer::_get_codingPath(KVar5);
    Swift::DecodingError::Context::_init
              ((long)puVar10 + (long)iVar2,puVar4,0xd00000000000002b,0x8000000100da2320,0);
    (**(code **)(*(long *)(lVar8 + -8) + 0x68))
              (puVar10,*(undefined4 *)
                        PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
               ,lVar8);
    _swift_willThrow();
    (**(code **)(lVar11 + 8))(lVar12,KVar5.unknown);
    _swift_unknownObjectRelease(KVar7.unknown);
    lVar6 = lVar12;
  }
  FUN_100004594(param_1);
  return lVar6;
}



/* Address: 0x100afebac | FUN_100afebac */

void FUN_100afebac(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100afebb8 | FUN_100afebb8 */

undefined1  [16] FUN_100afebb8(void)

{
  return ZEXT816(0x100f334b0);
}



/* Address: 0x100afebc8 | FUN_100afebc8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100afebc8(void)

{
  return ZEXT816(0x100ff9c40);
}



/* Address: 0x100afebe8 | FUN_100afebe8 */

void FUN_100afebe8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


