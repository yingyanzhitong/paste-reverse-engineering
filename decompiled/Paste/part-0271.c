/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003556c8 | FUN_1003556c8 */

void FUN_1003556c8(void)

{
  FUN_1003556e8();
  return;
}



/* Address: 0x1003556e8 | FUN_1003556e8 */

undefined * FUN_1003556e8(CurrentValueSubject *param_1)

{
  long unaff_x20;
  undefined *puVar1;
  undefined1 auStack_40 [24];
  long local_28;
  
  Combine::CurrentValueSubject::get_value(*(CurrentValueSubject **)(unaff_x20 + 0x18),param_1);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_28 != 0) {
    _swift_beginAccess(local_28 + 0x10,auStack_40,0,0);
    puVar1 = *(undefined **)(local_28 + 0x10);
    _swift_bridgeObjectRetain(puVar1);
    _swift_release(local_28);
  }
  return puVar1;
}



/* Address: 0x100355754 | FUN_100355754 */

void FUN_100355754(undefined8 *param_1,undefined8 param_2)

{
  FUN_10035577c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10035577c | FUN_10035577c */

CurrentValueSubject * FUN_10035577c(CurrentValueSubject *param_1)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 local_28;
  
  Combine::CurrentValueSubject::get_value(*(CurrentValueSubject **)(unaff_x20 + 0x18),param_1);
  if (local_28 != 0) {
    FUN_10035440c(param_1);
    _swift_release(local_28);
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003557d0);
  (*pcVar1)();
}



/* Address: 0x1003557d0 | FUN_1003557d0 */

void FUN_1003557d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1003557fc();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003557fc | FUN_1003557fc */

CurrentValueSubject * FUN_1003557fc(CurrentValueSubject *param_1)

{
  long unaff_x20;
  undefined8 local_28;
  
  Combine::CurrentValueSubject::get_value(*(CurrentValueSubject **)(unaff_x20 + 0x18),param_1);
  if (local_28 == 0) {
    param_1 = (CurrentValueSubject *)0x0;
  }
  else {
    FUN_1003544dc(param_1);
    _swift_release(local_28);
  }
  return param_1;
}



/* Address: 0x100355854 | FUN_100355854 */

void FUN_100355854(void)

{
  FUN_100355874();
  return;
}



/* Address: 0x100355874 | FUN_100355874 */

undefined * FUN_100355874(void)

{
  CurrentValueSubject *pCVar1;
  undefined *puVar2;
  Map MVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  SwitchToLatest SVar6;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar7;
  long extraout_x8;
  long extraout_x8_00;
  long *unaff_x20;
  long local_a0;
  long local_98;
  undefined8 local_90;
  long *local_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 *local_70;
  undefined *puStack_68;
  
  local_88 = unaff_x20 + 3;
  local_90 = *(undefined8 *)(*unaff_x20 + 0x50);
  FUN_100354398(0xff);
  Swift::Optional::typeMetadataAccessor();
  pCVar1 = Combine::CurrentValueSubject::typeMetadataAccessor();
  puVar2 = &DAT_100fc07c8;
  FUN_100005c24(&DAT_100fc07c8,&DAT_100c425f0);
  _swift_getWitnessTable
            (PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
             ,pCVar1);
  MVar3 = Combine::Publishers::Map::typeMetadataAccessor();
  local_98 = *(long *)(MVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc07d0;
  FUN_100016eac(&DAT_100fc07d0,&DAT_100fc07c8,&DAT_100c425f0,
                PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
               );
  puVar5 = PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698;
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__Map<undefined,undefined>_>Combine__Publisher_100ea9698
             ,MVar3.unknown);
  local_80 = puVar2;
  puStack_78 = MVar3.unknown;
  local_70 = puVar4;
  puStack_68 = puVar5;
  SVar6 = Combine::Publishers::SwitchToLatest::typeMetadataAccessor();
  local_a0 = *(long *)(SVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100ecc150;
  _swift_allocObject(&DAT_100ecc150,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = local_90;
  (extension_Combine)::Combine::Publisher::_map();
  _swift_release(puVar2);
  (extension_Combine)::Combine::Publisher::_switchToLatest();
  (**(code **)(local_98 + 8))((long)&local_a0 - extraout_x8,MVar3.unknown);
  _swift_getWitnessTable
            (PTR_Combine__Combine__Publishers__SwitchToLatest<undefined,undefined>_>Combine__Publisher_100ea9670
             ,SVar6.unknown);
  AVar7 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  (**(code **)(local_a0 + 8))(((long)&local_a0 - extraout_x8) - extraout_x8_00,SVar6.unknown);
  return AVar7.unknown;
}



/* Address: 0x100355a98 | FUN_100355a98 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100355b48 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100355a98(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar3;
  __int64 _Var4;
  undefined *puVar5;
  long extraout_x8;
  long lVar6;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = &DAT_100fc07d8;
  FUN_1000037f0(&DAT_100fc07d8,&DAT_100c425f8);
  lVar6 = *(long *)(puVar1 + -8);
  AVar3.unknown = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*param_2 == 0) {
    puStack_48 = PTR___swiftEmptySetSingleton_100eae0e8;
    if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
       (_Var4 = Swift::_CocoaArrayWrapper::get_endIndex
                          ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
       puStack_48 = PTR___swiftEmptySetSingleton_100eae0e8, _Var4 != 0)) {
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1002fcf38();
      puStack_48 = puVar5;
    }
    local_50 = puVar2;
    puVar2 = &DAT_100fc07e0;
    FUN_1000037f0(&DAT_100fc07e0,&DAT_100c42600);
    Combine::Just::init((long)&local_50 - extraout_x8,puVar2,puVar2);
    FUN_100016eac(&DAT_100fc07e8,&DAT_100fc07d8,&DAT_100c425f8,
                  PTR_Combine__Combine__Just<undefined>_>Combine__Publisher_100ea9870);
    AVar3 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    (**(code **)(lVar6 + 8))((long)&local_50 - extraout_x8,puVar1);
  }
  else {
    FUN_100354614();
  }
  *param_1 = AVar3.unknown;
  return;
}



/* Address: 0x100355bd0 | FUN_100355bd0 */

void FUN_100355bd0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100355be0 | FUN_100355be0 */

void FUN_100355be0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100355a98(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100355be8 | FUN_100355be8 */

undefined8 FUN_100355be8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc07f0;
  FUN_1000037f0(&DAT_100fc07f0,&DAT_100c42950);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100355c30 | FUN_100355c30 */

undefined1  [16] FUN_100355c30(void)

{
  return ZEXT816(0x100ecc180);
}



/* Address: 0x100355c40 | FUN_100355c40 */

undefined * FUN_100355c40(undefined *param_1,undefined1 param_2)

{
  ulong uVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  undefined *puVar4;
  char cVar5;
  code *pcVar6;
  ulong uVar7;
  Index IVar8;
  Index IVar9;
  __uint64 _Var10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined1 isUnique;
  UnsafeMutablePointer UVar14;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_98 [32];
  Index local_78;
  ulong uStack_70;
  char local_68;
  
  uVar1 = (ulong)param_1 & 0xc000000000000001;
  if (uVar1 == 0) {
    uVar7 = *(ulong *)(param_1 + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    uVar7 = Swift::__CocoaSet::get_count(_Var2);
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    uVar11 = uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU);
    FUN_100307770(0,uVar11,0);
    if (uVar1 == 0) {
      local_78.cmsgPointer.unknown =
           (UnsafeMutablePointer)Swift::_HashTable::get_startBucket((_HashTable)(param_1 + 0x38));
      local_68 = '\0';
      uVar11 = (ulong)*(uint *)(param_1 + 0x24);
    }
    else {
      _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_1) {
        _Var2.unknown = param_1;
      }
      local_78 = Swift::__CocoaSet::get_startIndex(_Var2);
      local_68 = '\x01';
    }
    uStack_70 = uVar11;
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f5c);
      (*pcVar6)();
    }
    uVar11 = 0;
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    do {
      cVar5 = local_68;
      uVar3 = uStack_70;
      IVar8.cmsgPointer.unknown = local_78.cmsgPointer.unknown;
      if (uVar11 == uVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f4c);
        (*pcVar6)();
      }
      IVar9.cmsgPointer.unknown = local_78.cmsgPointer.unknown;
      FUN_100357284(local_78.cmsgPointer.unknown,uStack_70,local_68,param_1);
      uVar12 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar12) {
        FUN_100307770(1 < *(ulong *)(puVar4 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar12 + 1;
      *(UnsafeMutablePointer *)(puVar4 + uVar12 * 0x10 + 0x20) = IVar9.cmsgPointer.unknown;
      puVar4[uVar12 * 0x10 + 0x28] = param_2;
      if (uVar1 == 0) {
        if (cVar5 == '\x01') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f64);
          (*pcVar6)();
        }
        UVar14.unknown = (undefined *)(1L << ((ulong)(byte)param_1[0x20] & 0x3f));
        if (UVar14.unknown <= (ulong)IVar8.cmsgPointer.unknown) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f50);
          (*pcVar6)();
        }
        uVar12 = (ulong)IVar8.cmsgPointer.unknown >> 6;
        if ((*(ulong *)(param_1 + uVar12 * 8 + 0x38) >> ((ulong)IVar8.cmsgPointer.unknown & 0x3f) &
            1) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f54);
          (*pcVar6)();
        }
        if (*(int *)(param_1 + 0x24) != (int)uVar3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f58);
          (*pcVar6)();
        }
        uVar16 = *(ulong *)(param_1 + uVar12 * 8 + 0x38) &
                 -2L << ((ulong)IVar8.cmsgPointer.unknown & 0x3f);
        if (uVar16 == 0) {
          lVar15 = uVar12 << 6;
          puVar13 = (ulong *)(param_1 + uVar12 * 8 + 0x40);
          do {
            uVar12 = uVar12 + 1;
            if ((ulong)(UVar14.unknown + 0x3f) >> 6 <= uVar12) {
              FUN_10000cae0(IVar8.cmsgPointer.unknown,uVar3,cVar5);
              goto LAB_100355edc;
            }
            uVar16 = *puVar13;
            lVar15 = lVar15 + 0x40;
            puVar13 = puVar13 + 1;
          } while (uVar16 == 0);
          FUN_10000cae0(IVar8.cmsgPointer.unknown,uVar3,cVar5);
          uVar3 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          UVar14.unknown = (undefined *)(LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) + lVar15);
        }
        else {
          uVar3 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          UVar14.unknown =
               (undefined *)
               (LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) |
               (ulong)IVar8.cmsgPointer.unknown & 0x7fffffffffffffc0);
        }
LAB_100355edc:
        uStack_70 = (ulong)*(uint *)(param_1 + 0x24);
        local_68 = '\0';
        local_78.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)UVar14.unknown;
      }
      else {
        if (cVar5 != '\x01') {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100355f60);
          (*pcVar6)();
        }
        _Var10 = Swift::__CocoaSet::Index::get_handleBitPattern(IVar8);
        if (_Var10 == 0) {
          isUnique = true;
        }
        else {
          _swift_isUniquelyReferenced_nonNull_native();
          isUnique = (undefined1)_Var10;
        }
        IVar8.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_100fc02a0;
        FUN_1000037f0(&DAT_100fc02a0,&DAT_100c42158);
        IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)auStack_98;
        Swift::Set::Index::modify__asCocoa((Index *)&local_78,IVar9);
        Swift::__CocoaSet::formIndex(IVar8,(bool)isUnique,_Var2);
        (*(code *)IVar9.cmsgPointer.unknown)(auStack_98,0);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar7);
    FUN_10000cae0(local_78.cmsgPointer.unknown,uStack_70,local_68);
  }
  return puVar4;
}



/* Address: 0x100355f64 | thunk_FUN_100355f68 */

void thunk_FUN_100355f68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc07f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c42660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c42660,&DAT_100ecc220);
  DAT_100fc07f8 = pTVar1;
  return;
}



/* Address: 0x100355f68 | FUN_100355f68 */

void FUN_100355f68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc07f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c42660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c42660,&DAT_100ecc220);
  DAT_100fc07f8 = pTVar1;
  return;
}



/* Address: 0x100355fa8 | FUN_100355fa8 */

undefined1  [16] FUN_100355fa8(void)

{
  return ZEXT816(0x100ecc220);
}



/* Address: 0x100355fb8 | FUN_100355fb8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100355fb8(undefined8 param_1)

{
  undefined *puVar1;
  ID IVar2;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar3;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c9978();
  *(undefined **)(unaff_x20 + 0x30) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  IVar2 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar3 = *(undefined8 *)PTR__NSManagedObjectContextObjectsDidChangeNotification_100ea99f0;
  puVar1 = &DAT_100ecc2d0;
  _swift_allocObject(&DAT_100ecc2d0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  local_50 = FUN_100357928;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100059f04;
  puStack_58 = &DAT_100ecc2e8;
  local_48 = puVar1;
  aBlock = __Block_copy(&local_70);
  _swift_release(local_48);
  IVar2 = objc_stub::addObserverForName_object_queue_usingBlock_(IVar2,uVar3,param_1,0,aBlock);
  __Block_release(aBlock);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  *(ID *)(unaff_x20 + 0x38) = IVar2;
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Address: 0x10035611c | FUN_10035611c */

void FUN_10035611c(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_100356260(param_1);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x100356160 | FUN_100356160 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100356160(void)

{
  undefined8 uVar1;
  ID self;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x30,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 != 0) {
    _swift_unknownObjectRetain(lVar2);
    self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    objc_stub::removeObserver_(self,lVar2);
    _swift_unknownObjectRelease(lVar2);
  }
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x100356220 | FUN_100356220 */

void FUN_100356220(void)

{
  FUN_100356160();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100356240 | FUN_100356240 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100356240(void)

{
  return ZEXT816(0x100fc0840);
}



/* Address: 0x100356260 | FUN_100356260 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003562dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100356260(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  bool bVar4;
  char *pcVar5;
  String **ppSVar6;
  undefined *puVar7;
  String *pSVar8;
  Iterator this;
  ID IVar9;
  Iterator *pIVar10;
  String *pSVar11;
  String *pSVar12;
  String *pSVar13;
  __int64 _Var14;
  char *pcVar15;
  undefined *puVar16;
  ulong extraout_x1;
  undefined1 uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  Iterator *unaff_x20;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  code *pcVar25;
  __CocoaSet _Var26;
  __CocoaSet _Var27;
  ulong *puVar28;
  Notification NVar29;
  Iterator *local_e8;
  String local_e0;
  Iterator *local_c8 [2];
  undefined *local_b8;
  String local_b0;
  undefined8 uStack_a0;
  long local_98;
  String *local_90;
  ulong *puStack_88;
  ulong local_80;
  long lStack_78;
  ulong local_70;
  
  if (unaff_x20[0x10] != (Iterator)0x1) {
    return;
  }
  NVar29.pastePaused.bridgeObject = param_2;
  NVar29.pastePaused.str = param_1;
  NVar29.syncInProgress.bridgeObject = param_4;
  NVar29.syncInProgress.str = param_3;
  pcVar5 = param_1;
  Foundation::Notification::_get_userInfo(NVar29);
  if (pcVar5 == (char *)0x0) {
    return;
  }
  local_e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar15 = local_e0.bridgeObject;
  _swift_bridgeObjectRetain(pcVar15);
  puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (&local_90,pcVar5,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(pcVar5 + 0x10) == 0) {
LAB_100356324:
    local_b0.bridgeObject = (void *)0x0;
    local_b0.str = (char *)0x0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(pcVar5);
    ppSVar6 = &local_90;
    FUN_1000f1290(ppSVar6);
    if (((ulong)puVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar5);
      goto LAB_100356324;
    }
    FUN_10000cbfc(*(long *)(pcVar5 + 0x38) + (long)ppSVar6 * 0x20,&local_b0);
    _swift_bridgeObjectRelease(pcVar15);
    pcVar15 = pcVar5;
  }
  _swift_bridgeObjectRelease(pcVar15);
  FUN_100089674(&local_90);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar16 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_98 == 0) {
    pSVar8 = &local_b0;
    FUN_10030e660(pSVar8);
LAB_100356394:
    pSVar11 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
    if ((ulong)puVar3 >> 0x3e != 0) {
      _Var14 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
      pSVar8 = (String *)0x0;
      pSVar11 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
      if (_Var14 != 0) {
        pSVar11 = (String *)PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1002fcf5c();
        pSVar8 = pSVar11;
      }
    }
  }
  else {
    puVar7 = &DAT_100fc0670;
    FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
    pSVar8 = &local_e0;
    _swift_dynamicCast(pSVar8,&local_b0,puVar16 + 8,puVar7,6);
    if (((ulong)pSVar8 & 1) == 0) goto LAB_100356394;
    pSVar11 = (String *)local_e0.str;
  }
  local_e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar15 = local_e0.bridgeObject;
  _swift_bridgeObjectRetain(pcVar15);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (&local_90,pSVar8,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(pcVar5 + 0x10) == 0) {
LAB_100356424:
    local_b0.bridgeObject = (void *)0x0;
    local_b0.str = (char *)0x0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(pcVar5);
    ppSVar6 = &local_90;
    FUN_1000f1290(ppSVar6);
    if (((ulong)puVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar5);
      goto LAB_100356424;
    }
    FUN_10000cbfc(*(long *)(pcVar5 + 0x38) + (long)ppSVar6 * 0x20,&local_b0);
    _swift_bridgeObjectRelease(pcVar15);
    pcVar15 = pcVar5;
  }
  _swift_bridgeObjectRelease(pcVar15);
  FUN_100089674(&local_90);
  if (local_98 == 0) {
    pSVar8 = &local_b0;
    FUN_10030e660(pSVar8);
LAB_100356484:
    pSVar12 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
    if ((ulong)puVar3 >> 0x3e != 0) {
      _Var14 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
      pSVar8 = (String *)0x0;
      pSVar12 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
      if (_Var14 != 0) {
        pSVar12 = (String *)PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1002fcf5c();
        pSVar8 = pSVar12;
      }
    }
  }
  else {
    puVar7 = &DAT_100fc0670;
    FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
    pSVar8 = &local_e0;
    _swift_dynamicCast(pSVar8,&local_b0,puVar16 + 8,puVar7,6);
    if (((ulong)pSVar8 & 1) == 0) goto LAB_100356484;
    pSVar12 = (String *)local_e0.str;
  }
  local_e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar15 = local_e0.bridgeObject;
  _swift_bridgeObjectRetain(pcVar15);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (&local_90,pSVar8,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(pcVar5 + 0x10) == 0) {
LAB_100356514:
    local_b0.bridgeObject = (void *)0x0;
    local_b0.str = (char *)0x0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(pcVar5);
    ppSVar6 = &local_90;
    FUN_1000f1290(ppSVar6);
    if (((ulong)puVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar5);
      goto LAB_100356514;
    }
    FUN_10000cbfc(*(long *)(pcVar5 + 0x38) + (long)ppSVar6 * 0x20,&local_b0);
    _swift_bridgeObjectRelease(pcVar15);
    pcVar15 = pcVar5;
  }
  _swift_bridgeObjectRelease(pcVar15);
  FUN_100089674(&local_90);
  if (local_98 == 0) {
    pSVar8 = &local_b0;
    FUN_10030e660(pSVar8);
LAB_100356574:
    pSVar13 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
    if ((ulong)puVar3 >> 0x3e != 0) {
      _Var14 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
      pSVar8 = (String *)0x0;
      pSVar13 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
      if (_Var14 != 0) {
        pSVar13 = (String *)PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1002fcf5c();
        pSVar8 = pSVar13;
      }
    }
  }
  else {
    puVar7 = &DAT_100fc0670;
    FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
    pSVar8 = &local_e0;
    _swift_dynamicCast(pSVar8,&local_b0,puVar16 + 8,puVar7,6);
    if (((ulong)pSVar8 & 1) == 0) goto LAB_100356574;
    pSVar13 = (String *)local_e0.str;
  }
  local_e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar15 = local_e0.bridgeObject;
  _swift_bridgeObjectRetain(pcVar15);
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (&local_90,pSVar8,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(pcVar5 + 0x10) == 0) {
LAB_100356604:
    local_b0.bridgeObject = (void *)0x0;
    local_b0.str = (char *)0x0;
    local_98 = 0;
    uStack_a0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(pcVar5);
    ppSVar6 = &local_90;
    FUN_1000f1290(ppSVar6);
    if (((ulong)puVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(pcVar5);
      goto LAB_100356604;
    }
    FUN_10000cbfc(*(long *)(pcVar5 + 0x38) + (long)ppSVar6 * 0x20,&local_b0);
    _swift_bridgeObjectRelease(pcVar15);
    pcVar15 = pcVar5;
  }
  _swift_bridgeObjectRelease(pcVar15);
  _swift_bridgeObjectRelease(pcVar5);
  FUN_100089674(&local_90);
  if (local_98 == 0) {
    FUN_10030e660(&local_b0);
  }
  else {
    puVar7 = &DAT_100fc0670;
    FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
    pSVar8 = &local_e0;
    _swift_dynamicCast(pSVar8,&local_b0,puVar16 + 8,puVar7,6);
    if (((ulong)pSVar8 & 1) != 0) {
      pcVar5 = local_e0.str;
      goto LAB_10035667c;
    }
  }
  pcVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)puVar3 >> 0x3e != 0) &&
     (_Var14 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     pcVar5 = PTR___swiftEmptySetSingleton_100eae0e8, _Var14 != 0)) {
    pcVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002fcf5c();
  }
LAB_10035667c:
  local_b8 = puVar3;
  FUN_100355c40(pSVar11,0);
  FUN_100381ca4();
  FUN_100355c40(pSVar13,1);
  FUN_100381ca4();
  FUN_100355c40(pSVar12,2);
  FUN_100381ca4();
  FUN_100355c40(pcVar5,3);
  FUN_100381ca4();
  puVar16 = local_b8;
  pcVar25 = *(code **)(unaff_x20 + 0x20);
  if (pcVar25 != (code *)0x0) {
    uVar22 = *(undefined8 *)(unaff_x20 + 0x28);
    _swift_retain(uVar22);
    (*pcVar25)(param_1,puVar16);
    FUN_100004550(pcVar25,uVar22);
  }
  local_90 = pSVar11;
  _swift_bridgeObjectRetain(pSVar11);
  _swift_bridgeObjectRetain(pSVar13);
  FUN_100365ac0();
  _swift_bridgeObjectRetain(pSVar12);
  FUN_100365ac0();
  _swift_bridgeObjectRetain(pcVar5);
  FUN_100365ac0();
  pSVar8 = local_90;
  _Var27.unknown = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)local_90 & 0xc000000000000001) == 0) {
    _swift_retain();
    FUN_100357540();
    this.unknown = unaff_x20;
    _swift_release();
    _Var27.unknown = (undefined *)pSVar8;
  }
  else {
    local_90 = (String *)PTR___swiftEmptySetSingleton_100eae0e8;
    _Var26.unknown = (undefined *)((ulong)pSVar8 & 0xffffffffffffff8);
    if ((String *)0x7fffffffffffffff < pSVar8) {
      _Var26.unknown = (undefined *)pSVar8;
    }
    _swift_retain();
    this.unknown = Swift::__CocoaSet::makeIterator(_Var26);
    pIVar10 = unaff_x20 + 0x30;
    _swift_beginAccess(pIVar10,&local_b0,0,0);
    Swift::__CocoaSet::Iterator::_next((Iterator *)this.unknown);
    if (pIVar10 != (Iterator *)0x0) {
      uVar22 = 0;
      FUN_100308464(0);
      do {
        local_c8[0] = pIVar10;
        _swift_dynamicCast(&local_e0,local_c8,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                           uVar22,7);
        pcVar15 = local_e0.str;
        lVar23 = *(long *)(unaff_x20 + 0x30);
        _swift_bridgeObjectRetain(lVar23);
        IVar9 = objc_stub::objectID((ID)pcVar15);
        if (*(long *)(lVar23 + 0x10) == 0) {
          _swift_bridgeObjectRelease(lVar23);
LAB_1003567e4:
          pIVar10 = (Iterator *)0x0;
        }
        else {
          uVar19 = extraout_x1;
          FUN_100380790(IVar9);
          _swift_bridgeObjectRelease(lVar23);
          if ((uVar19 & 1) == 0) goto LAB_1003567e4;
          pcVar15 = local_e0.str;
          if (((String *)((long)_Var27.unknown + 0x10))->bridgeObject <=
              ((String *)((long)_Var27.unknown + 0x10))->str) {
            FUN_10036b8fc(((String *)((long)_Var27.unknown + 0x10))->str + 1);
            _Var27.unknown = (undefined *)local_90;
          }
          pIVar10 = (Iterator *)
                    (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                              ((__int64)((String *)((long)_Var27.unknown + 0x20))->bridgeObject);
          uVar21 = -1L << ((ulong)*(byte *)&((String *)((long)_Var27.unknown + 0x20))->str & 0x3f);
          uVar20 = (ulong)pIVar10 & (uVar21 ^ 0xffffffffffffffff);
          uVar18 = uVar20 >> 6;
          uVar19 = -1L << (uVar20 & 0x3f) &
                   ((ulong)(&((String *)((long)_Var27.unknown + 0x30))->bridgeObject)[uVar18] ^
                   0xffffffffffffffff);
          if (uVar19 == 0) {
            bVar4 = false;
            uVar19 = 0x3f - uVar21 >> 6;
            do {
              uVar20 = uVar18 + 1;
              if ((uVar20 == uVar19) && (bVar4)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x100357000);
                (*pcVar25)();
              }
              uVar18 = 0;
              if (uVar20 != uVar19) {
                uVar18 = uVar20;
              }
              bVar4 = (bool)(uVar20 == uVar19 | bVar4);
            } while ((&((String *)((long)_Var27.unknown + 0x30))->bridgeObject)[uVar18] ==
                     (void *)0xffffffffffffffff);
            uVar19 = ~(ulong)(&((String *)((long)_Var27.unknown + 0x30))->bridgeObject)[uVar18];
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | uVar18 << 6;
          }
          else {
            uVar19 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
            uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
            uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
            uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | uVar20 & 0x7fffffffffffffc0;
          }
          uVar18 = uVar19 >> 3 & 0x1ffffffffffffff8;
          *(ulong *)((long)&((String *)((long)_Var27.unknown + 0x30))->bridgeObject + uVar18) =
               1L << (uVar19 & 0x3f) |
               *(ulong *)((long)&((String *)((long)_Var27.unknown + 0x30))->bridgeObject + uVar18);
          *(char **)(((String *)((long)_Var27.unknown + 0x30))->str + uVar19 * 8) = pcVar15;
          ((String *)((long)_Var27.unknown + 0x10))->str =
               ((String *)((long)_Var27.unknown + 0x10))->str + 1;
        }
        Swift::__CocoaSet::Iterator::_next((Iterator *)this.unknown);
      } while (pIVar10 != (Iterator *)0x0);
    }
    _swift_release(unaff_x20);
    _swift_release();
  }
  if (((ulong)_Var27.unknown & 0xc000000000000001) == 0) {
    lStack_78 = 0;
    uVar18 = -1L << ((ulong)(byte)_Var27.unknown[0x20] & 0x3f);
    puVar28 = (ulong *)(_Var27.unknown + 0x38);
    uVar19 = ~uVar18;
    uVar18 = -uVar18;
    local_70 = 0xffffffffffffffff;
    if (uVar18 < 0x40) {
      local_70 = ~(-1L << (uVar18 & 0x3f));
    }
    local_70 = local_70 & *puVar28;
  }
  else {
    pIVar10 = Swift::__CocoaSet::makeIterator(_Var27);
    FUN_100308464(0);
    FUN_1003084a8();
    this = Swift::Set::Iterator::_init(pIVar10);
    uVar19 = local_80;
    _Var27.unknown = (undefined *)local_90;
    puVar28 = puStack_88;
  }
  lVar23 = lStack_78;
  uVar18 = local_70;
  do {
    lVar2 = lVar23;
    uVar20 = uVar18;
    if ((long)_Var27.unknown < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)_Var27.unknown & 0x7fffffffffffffff));
      if ((Iterator *)this.unknown == (Iterator *)0x0) {
LAB_100356f98:
        FUN_10000c650(_Var27.unknown,puVar28,uVar19,lVar23,uVar18);
        _swift_bridgeObjectRelease(pSVar11);
        _swift_bridgeObjectRelease(pSVar12);
        _swift_bridgeObjectRelease(pSVar13);
        _swift_bridgeObjectRelease(pcVar5);
        _swift_bridgeObjectRelease(local_b8);
        return;
      }
      uVar22 = 0;
      local_e8 = (Iterator *)this.unknown;
      FUN_100308464(0);
      _swift_dynamicCast(local_c8,&local_e8,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar22,7);
      _Var26.unknown = local_c8[0];
    }
    else {
      while (uVar20 == 0) {
        lVar24 = lVar2 + 1;
        if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x100356ffc);
          (*pcVar25)();
        }
        if ((long)(uVar19 + 0x40 >> 6) <= lVar24) {
          uVar18 = 0;
          goto LAB_100356f98;
        }
        lVar2 = lVar24;
        uVar20 = puVar28[lVar24];
      }
      uVar21 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
      uVar21 = (uVar21 & 0xcccccccccccccccc) >> 2 | (uVar21 & 0x3333333333333333) << 2;
      uVar21 = (uVar21 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar21 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar21 = (uVar21 & 0xff00ff00ff00ff00) >> 8 | (uVar21 & 0xff00ff00ff00ff) << 8;
      uVar21 = (uVar21 & 0xffff0000ffff0000) >> 0x10 | (uVar21 & 0xffff0000ffff) << 0x10;
      uVar20 = uVar20 - 1 & uVar20;
      _Var26.unknown =
           *(undefined **)
            (((String *)((long)_Var27.unknown + 0x30))->str +
            lVar2 * 0x200 + LZCOUNT(uVar21 >> 0x20 | uVar21 << 0x20) * 8);
    }
    if (_Var26.unknown == (undefined *)0x0) goto LAB_100356f98;
    IVar9 = objc_stub::objectID((ID)_Var26.unknown);
    pSVar8 = &local_e0;
    _swift_beginAccess(unaff_x20 + 0x30,pSVar8,0,0);
    lVar24 = *(long *)(unaff_x20 + 0x30);
    lVar23 = lVar2;
    uVar18 = uVar20;
    if (*(long *)(lVar24 + 0x10) == 0) {
LAB_100356c0c:
      this.unknown = (Iterator *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(lVar24);
      FUN_100380790();
      if (((ulong)pSVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar24);
        goto LAB_100356c0c;
      }
      puVar1 = (undefined8 *)(*(long *)(lVar24 + 0x38) + IVar9 * 0x10);
      pcVar25 = (code *)*puVar1;
      this.unknown = (undefined *)puVar1[1];
      _swift_retain(this.unknown);
      _swift_bridgeObjectRelease(lVar24);
      FUN_100308464(0);
      if (((ulong)pSVar11 & 0xc000000000000001) == 0) {
        if (pSVar11[1].str != (char *)0x0) {
          uVar20 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                             ((__int64)pSVar11[2].bridgeObject);
          uVar21 = -1L << ((ulong)*(byte *)&pSVar11[2].str & 0x3f);
          uVar20 = uVar20 & (uVar21 ^ 0xffffffffffffffff);
          if (((ulong)(&pSVar11[3].bridgeObject)[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                                (*(NSObject **)(pSVar11[3].str + uVar20 * 8),
                                 (NSObject *)_Var26.unknown);
              if (bVar4) goto LAB_100356be4;
              uVar20 = uVar20 + 1 & ~uVar21;
            } while (((ulong)(&pSVar11[3].bridgeObject)[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0);
          }
        }
LAB_100356ca8:
        if (((ulong)pSVar12 & 0xc000000000000001) != 0) {
          bVar4 = Swift::__CocoaSet::_contains(_Var26);
          if (!bVar4) goto LAB_100356d6c;
LAB_100356cd4:
          uVar17 = 2;
LAB_100356da0:
          local_e8 = (Iterator *)CONCAT71(local_e8._1_7_,uVar17);
          goto LAB_100356da4;
        }
        if (pSVar12[1].str != (char *)0x0) {
          uVar20 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                             ((__int64)pSVar12[2].bridgeObject);
          uVar21 = -1L << ((ulong)*(byte *)&pSVar12[2].str & 0x3f);
          uVar20 = uVar20 & (uVar21 ^ 0xffffffffffffffff);
          if (((ulong)(&pSVar12[3].bridgeObject)[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                                (*(NSObject **)(pSVar12[3].str + uVar20 * 8),
                                 (NSObject *)_Var26.unknown);
              if (bVar4) goto LAB_100356cd4;
              uVar20 = uVar20 + 1 & ~uVar21;
            } while (((ulong)(&pSVar12[3].bridgeObject)[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0);
          }
        }
LAB_100356d6c:
        if (((ulong)pSVar13 & 0xc000000000000001) == 0) {
          if (pSVar13[1].str != (char *)0x0) {
            uVar20 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                               ((__int64)pSVar13[2].bridgeObject);
            uVar21 = -1L << ((ulong)*(byte *)&pSVar13[2].str & 0x3f);
            uVar20 = uVar20 & (uVar21 ^ 0xffffffffffffffff);
            if (((ulong)(&pSVar13[3].bridgeObject)[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0) {
              do {
                bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                                  (*(NSObject **)(pSVar13[3].str + uVar20 * 8),
                                   (NSObject *)_Var26.unknown);
                if (bVar4) goto LAB_100356d98;
                uVar20 = uVar20 + 1 & ~uVar21;
              } while (((ulong)(&pSVar13[3].bridgeObject)[uVar20 >> 6] >> (uVar20 & 0x3f) & 1) != 0)
              ;
            }
          }
        }
        else {
          bVar4 = Swift::__CocoaSet::_contains(_Var26);
          if (bVar4) {
LAB_100356d98:
            uVar17 = 1;
            goto LAB_100356da0;
          }
        }
        if (((ulong)pcVar5 & 0xc000000000000001) == 0) {
          if (*(long *)(pcVar5 + 0x10) == 0) goto LAB_100356f80;
          uVar20 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(pcVar5 + 0x28))
          ;
          uVar21 = -1L << ((ulong)(byte)pcVar5[0x20] & 0x3f);
          uVar20 = uVar20 & (uVar21 ^ 0xffffffffffffffff);
          if ((*(ulong *)(pcVar5 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0) {
            do {
              bVar4 = (extension_ObjectiveC)::__C::NSObject::___infix
                                (*(NSObject **)(*(long *)(pcVar5 + 0x30) + uVar20 * 8),
                                 (NSObject *)_Var26.unknown);
              if (bVar4) goto LAB_100356e98;
              uVar20 = uVar20 + 1 & ~uVar21;
            } while ((*(ulong *)(pcVar5 + (uVar20 >> 6) * 8 + 0x38) >> (uVar20 & 0x3f) & 1) != 0);
          }
          goto LAB_100356dc4;
        }
        bVar4 = Swift::__CocoaSet::_contains(_Var26);
        if (bVar4) {
LAB_100356e98:
          local_e8 = (Iterator *)CONCAT71(local_e8._1_7_,3);
          local_c8[0] = (Iterator *)_Var26.unknown;
          (*pcVar25)(local_c8,&local_e8);
        }
LAB_100356f80:
        _swift_release();
      }
      else {
        bVar4 = Swift::__CocoaSet::_contains(_Var26);
        if (!bVar4) goto LAB_100356ca8;
LAB_100356be4:
        local_e8 = (Iterator *)((ulong)local_e8 & 0xffffffffffffff00);
LAB_100356da4:
        local_c8[0] = (Iterator *)_Var26.unknown;
        (*pcVar25)(local_c8,&local_e8);
LAB_100356dc4:
        _swift_release();
      }
    }
  } while( true );
}



/* Address: 0x100357090 | FUN_100357090 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100357090(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x1003570c4 | FUN_1003570c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003570c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x100357104 | FUN_100357104 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100357104(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10035713c | FUN_10035713c */

int FUN_10035713c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfd;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 4) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100357184 | FUN_100357184 */

void FUN_100357184(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0xfd);
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x1003571c8 | FUN_1003571c8 */

undefined1  [16] FUN_1003571c8(void)

{
  return ZEXT816(0x100ecc2b0);
}



/* Address: 0x1003571d8 | FUN_1003571d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003571d8(ID *param_1,long param_2)

{
  uint extraout_w1;
  long lVar1;
  uint uVar2;
  ID IVar3;
  undefined1 auStack_48 [24];
  
  IVar3 = *param_1;
  _swift_beginAccess(param_2 + 0x30,auStack_48,0,0);
  lVar1 = *(long *)(param_2 + 0x30);
  _swift_bridgeObjectRetain(lVar1);
  IVar3 = objc_stub::objectID(IVar3);
  if (*(long *)(lVar1 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar1);
    uVar2 = 0;
  }
  else {
    uVar2 = extraout_w1;
    FUN_100380790(IVar3);
    _swift_bridgeObjectRelease(lVar1);
  }
  return uVar2 & 1;
}



/* Address: 0x100357284 | FUN_100357284 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

NSObject * FUN_100357284(Index param_1,__CocoaSet param_2,char param_3,ulong param_4)

{
  code *pcVar1;
  bool bVar2;
  __int32 _Var3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *local_60;
  NSObject *local_58;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_3 == '\x01') {
      Swift::__CocoaSet::_element(param_1,param_2);
      uVar4 = 0;
      local_60 = (undefined *)param_1.cmsgPointer.unknown;
      FUN_100308464(0);
      _swift_dynamicCast(&local_58,&local_60,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar4,7);
      return local_58;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100357474);
    (*pcVar1)();
  }
  if (param_3 == '\x01') {
    uVar4 = 0;
    FUN_100308464(0);
    _Var3 = Swift::__CocoaSet::Index::get_age(param_1);
    if (_Var3 != *(int *)(param_4 + 0x24)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100357468);
      (*pcVar1)();
    }
    Swift::__CocoaSet::Index::_get_element(param_1);
    local_60 = (undefined *)param_1.cmsgPointer.unknown;
    _swift_dynamicCast(&local_58,&local_60,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                       uVar4,7);
    uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(param_4 + 0x28));
    uVar6 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
    param_1.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar5 & (uVar6 ^ 0xffffffffffffffff));
    if ((*(ulong *)(param_4 + 0x38 + ((ulong)param_1.cmsgPointer.unknown >> 6) * 8) >>
         ((ulong)param_1.cmsgPointer.unknown & 0x3f) & 1) != 0) {
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)
                            (*(long *)(param_4 + 0x30) + (long)param_1.cmsgPointer.unknown * 8),
                           local_58);
        if (bVar2) goto LAB_100357440;
        param_1.cmsgPointer.unknown =
             (UnsafeMutablePointer)((ulong)((long)param_1.cmsgPointer.unknown + 1) & ~uVar6);
      } while ((*(ulong *)(param_4 + 0x38 + ((ulong)param_1.cmsgPointer.unknown >> 6) * 8) >>
                ((ulong)param_1.cmsgPointer.unknown & 0x3f) & 1) != 0);
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100357408);
    (*pcVar1)();
  }
  if ((ulong)param_1.cmsgPointer.unknown >> ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10035746c);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + ((ulong)param_1.cmsgPointer.unknown >> 6) * 8 + 0x38) >>
       ((ulong)param_1.cmsgPointer.unknown & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100357470);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) != (int)param_2.unknown) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100357438);
    (*pcVar1)();
  }
LAB_100357440:
  return *(NSObject **)(*(long *)(param_4 + 0x30) + (long)param_1.cmsgPointer.unknown * 8);
}



/* Address: 0x100357474 | FUN_100357474 */

void FUN_100357474(undefined8 *param_1,void *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100357540);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    FUN_10038d860(param_2,param_3,param_4,param_5,param_6);
    _swift_release(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      _swift_release(param_4);
    }
    else {
      *param_7 = unaff_x21;
      _swift_release(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035753c);
  (*pcVar1)();
}



/* Address: 0x100357540 | FUN_100357540 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void * FUN_100357540(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  ID IVar4;
  void *pvVar5;
  undefined *puVar6;
  ulong extraout_x1;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  void *pvVar11;
  long lVar12;
  long unaff_x21;
  ulong uVar13;
  long lVar14;
  ulong uStack_d0;
  undefined1 *local_c8;
  ulong local_c0;
  long local_a8;
  undefined1 local_90 [24];
  void *local_78 [2];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar13 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  pvVar11 = (void *)(uVar13 * 8);
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_2);
    _swift_retain(param_1);
  }
  else {
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_2);
    _swift_retain(param_1);
    if (((bVar3 & 1) == 0) ||
       (pvVar5 = pvVar11, _swift_stdlib_isStackAllocationSafe(pvVar11,8), ((ulong)pvVar5 & 1) == 0))
    {
      pvVar5 = pvVar11;
      _swift_slowAlloc(pvVar11,0xffffffffffffffff);
      FUN_100357474(local_78);
      if (unaff_x21 == 0) {
        _swift_slowDealloc(pvVar5,0xffffffffffffffff,0xffffffffffffffff);
        pvVar11 = local_78[0];
LAB_100357784:
        _swift_release(param_2);
        _swift_release(param_1);
      }
      else {
        _swift_slowDealloc(pvVar5,0xffffffffffffffff,0xffffffffffffffff);
        bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar3 & 1) != 0) {
          puVar6 = &DAT_100fc1bb0;
          FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
          _swift_willThrowTypedImpl
                    (local_90,puVar6,
                     PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
        }
        _swift_release(param_1);
        _swift_release(param_2);
      }
      if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return pvVar11;
    }
  }
  local_c8 = (undefined1 *)&uStack_d0;
  local_c0 = uVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar5 = (void *)((long)&uStack_d0 - ((long)pvVar11 + 0xfU & 0x1ffffffffffffff0));
  _bzero(pvVar5,(size_t)pvVar11);
  uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_1 + 0x38);
  _swift_retain(param_2);
  _swift_beginAccess(param_2 + 0x30,local_90,0,0);
  local_a8 = 0;
  lVar8 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar14 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003577d8);
          (*pcVar1)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          _swift_retain(param_1);
          FUN_10038db3c(pvVar5,local_c0,local_a8,param_1);
          _swift_release(param_1);
          _swift_release(param_2);
          pvVar11 = pvVar5;
          goto LAB_100357784;
        }
        uVar13 = ((ulong *)(param_1 + 0x38))[lVar14];
        lVar8 = lVar8 + 1;
      } while (uVar13 == 0);
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar7 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar14 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7);
    IVar4 = *(ID *)(*(long *)(param_1 + 0x30) + (uVar7 | lVar14 << 6) * 8);
    lVar12 = *(long *)(param_2 + 0x30);
    _swift_bridgeObjectRetain(lVar12);
    IVar4 = objc_stub::objectID(IVar4);
    lVar8 = lVar14;
    if (*(long *)(lVar12 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lVar12);
    }
    else {
      uVar9 = extraout_x1;
      FUN_100380790(IVar4);
      _swift_bridgeObjectRelease(lVar12);
      if ((uVar9 & 1) != 0) {
        uVar9 = (uVar7 & 0xffffffffffffffc0 | lVar14 << 6) >> 3;
        *(ulong *)((long)pvVar5 + uVar9) = *(ulong *)((long)pvVar5 + uVar9) | 1L << (uVar7 & 0x3f);
        bVar2 = SCARRY8(local_a8,1);
        local_a8 = local_a8 + 1;
        if (bVar2) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10035774c);
          (*pcVar1)();
        }
      }
    }
  } while( true );
}



/* Address: 0x1003578e8 | FUN_1003578e8 */

uint FUN_1003578e8(uint param_1)

{
  FUN_1003571d8();
  return param_1 & 1;
}



/* Address: 0x100357904 | FUN_100357904 */

void FUN_100357904(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100357928 | FUN_100357928 */

void FUN_100357928(void)

{
  FUN_10035611c();
  return;
}



/* Address: 0x100357930 | FUN_100357930 */

void FUN_100357930(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100357944 | FUN_100357944 */

void FUN_100357944(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10035794c | thunk_FUN_100357090 */

void thunk_FUN_100357090(void)

{
  FUN_100357090();
  return;
}



/* Address: 0x100357950 | FUN_100357950 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100357950(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Address: 0x100357958 | FUN_100357958 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100357958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_allocObject();
  FUN_100357a84(param_1,param_2,param_3);
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x1003579c0 | FUN_1003579c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003579c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100357a84();
  _swift_release(param_3);
  return param_1;
}



/* Address: 0x100357a04 | FUN_100357a04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100357a04(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  _swift_beginAccess(lVar2 + 0x30,auStack_38,1,0);
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  *(undefined **)(lVar2 + 0x30) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100357a64 | FUN_100357a64 */

void FUN_100357a64(void)

{
  FUN_100357a04();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100357a84 | FUN_100357a84 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100357a84(ID param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_68 [24];
  
  lVar8 = *unaff_x20;
  unaff_x20[2] = param_1;
  IVar2 = objc_stub::managedObjectContext(param_1);
  if (IVar2 != 0) {
    uVar3 = 0;
    FUN_100356240(0);
    _swift_allocObject();
    FUN_100355fb8(IVar2,uVar3);
    unaff_x20[3] = IVar2;
    puVar4 = &DAT_100ecc438;
    _swift_allocObject(&DAT_100ecc438,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = *(undefined8 *)(lVar8 + 0x50);
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    _swift_retain(IVar2);
    _swift_retain(param_3);
    IVar5 = objc_stub::objectID(param_1);
    puVar6 = &DAT_100ecc460;
    _swift_allocObject(&DAT_100ecc460,0x20,7);
    *(code **)(puVar6 + 0x10) = FUN_100357c80;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    _swift_beginAccess(IVar2 + 0x30,auStack_68,0x21,0);
    _swift_retain(puVar4);
    uVar3 = *(undefined8 *)(IVar2 + 0x30);
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    uVar7 = *(undefined8 *)(IVar2 + 0x30);
    *(undefined8 *)(IVar2 + 0x30) = 0x8000000000000000;
    FUN_100381154(FUN_100357ce8,puVar6,IVar5,uVar3);
    *(undefined8 *)(IVar2 + 0x30) = uVar7;
    _swift_endAccess(auStack_68);
    _swift_release(IVar2);
    _swift_release(puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100357c04);
  (*pcVar1)();
}



/* Address: 0x100357c04 | FUN_100357c04 */

void FUN_100357c04(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_20 = &DAT_100c42798;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x58);
  return;
}



/* Address: 0x100357c50 | FUN_100357c50 */

void FUN_100357c50(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100357c5c | FUN_100357c5c */

void FUN_100357c5c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100357c80 | FUN_100357c80 */

void FUN_100357c80(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  _swift_dynamicCastUnknownClassUnconditional(param_1,*(undefined8 *)(unaff_x20 + 0x10),0,0,0);
  (*pcVar1)(param_1,param_2);
  return;
}



/* Address: 0x100357cc4 | FUN_100357cc4 */

void FUN_100357cc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100357ce8 | FUN_100357ce8 */

void FUN_100357ce8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1003c01c8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100357cf0 | FUN_100357cf0 */

void FUN_100357cf0(void)

{
  FUN_1003594e4(&DAT_100fc09c0,&DAT_100c427b0,thunk_FUN_100076508,&PTR_PTR_100eccad0);
  return;
}



/* Address: 0x100357d14 | FUN_100357d14 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100357d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined1 *puStack_68;
  
  puVar2 = auStack_90;
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_90);
  FUN_100004640(auStack_90,local_78);
  uVar1 = local_78;
  (**(code **)(local_70 + 0x10))(local_78,local_70);
  FUN_100004594();
  FUN_100357efc();
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x60) = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  *(undefined8 *)(puVar2 + 0x68) = 0;
  *(undefined8 *)(puVar2 + 0x80) = 0;
  *(undefined8 *)(puVar2 + 0x78) = 0;
  *(undefined8 *)(puVar2 + 0x90) = 0;
  *(undefined8 *)(puVar2 + 0x88) = 0;
  *(undefined8 *)(puVar2 + 0xa0) = 0;
  *(undefined8 *)(puVar2 + 0x98) = 0;
  *(undefined8 *)(puVar2 + 0xb0) = 0;
  *(undefined8 *)(puVar2 + 0xa8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  local_80 = param_3;
  local_78 = param_1;
  local_70 = param_2;
  puStack_68 = puVar2;
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(puVar2);
  return;
}



/* Address: 0x100357e58 | FUN_100357e58 */

void FUN_100357e58(void)

{
  FUN_10035961c(&DAT_100fc09d8,&DAT_100c427b8,thunk_FUN_100076508,&PTR_PTR_100eccd58);
  return;
}



/* Address: 0x100357e7c | FUN_100357e7c */

void FUN_100357e7c(void)

{
  FUN_1003597ec(&DAT_100fc09e0,&DAT_100c42810,thunk_FUN_100076508,&PTR_PTR_100ecc8c8);
  return;
}



/* Address: 0x100357ea0 | FUN_100357ea0 */

void FUN_100357ea0(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c427c0;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fbdba8,&DAT_100c435d0);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_100fc09d0 = puVar1;
  return;
}



/* Address: 0x100357efc | FUN_100357efc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100357efc(void)

{
  return ZEXT816(0x100fc0b38);
}



/* Address: 0x100357f1c | FUN_100357f1c */

void FUN_100357f1c(void)

{
  undefined8 uVar1;
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar1 = 0x4244;
  FUN_1000d4624(0x4244,&SUB_e200000000000000);
  DAT_100fc0c30 = uVar1;
  return;
}



/* Address: 0x100357f60 | FUN_100357f60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100357f60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined1 *puStack_58;
  
  if (DAT_100fc09c8 != -1) {
    _swift_once(&DAT_100fc09c8,FUN_100357ea0);
  }
  FUN_1000da768(auStack_80);
  FUN_100004640(auStack_80,local_68);
  uVar1 = local_68;
  (**(code **)(local_60 + 0x10))(local_68,local_60);
  puVar2 = auStack_80;
  FUN_100004594();
  FUN_100358ba4();
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x28) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x50) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x60) = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  *(undefined8 *)(puVar2 + 0x68) = 0;
  *(undefined8 *)(puVar2 + 0x80) = 0;
  *(undefined8 *)(puVar2 + 0x78) = 0;
  *(undefined8 *)(puVar2 + 0x90) = 0;
  *(undefined8 *)(puVar2 + 0x88) = 0;
  *(undefined8 *)(puVar2 + 0xa0) = 0;
  *(undefined8 *)(puVar2 + 0x98) = 0;
  *(undefined8 *)(puVar2 + 0xb0) = 0;
  *(undefined8 *)(puVar2 + 0xa8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  local_70 = param_3;
  local_68 = param_1;
  local_60 = param_2;
  puStack_58 = puVar2;
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  _swift_release(puVar2);
  return;
}



/* Address: 0x100358094 | FUN_100358094 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100358114) */
/* WARNING: Removing unreachable block (ram,0x000100358b60) */
/* WARNING: Removing unreachable block (ram,0x0001003581d0) */
/* WARNING: Removing unreachable block (ram,0x000100358260) */
/* WARNING: Removing unreachable block (ram,0x000100358248) */
/* WARNING: Removing unreachable block (ram,0x000100358254) */
/* WARNING: Removing unreachable block (ram,0x000100358268) */
/* WARNING: Removing unreachable block (ram,0x0001003582d4) */
/* WARNING: Removing unreachable block (ram,0x0001003582c0) */
/* WARNING: Removing unreachable block (ram,0x0001003582c8) */
/* WARNING: Removing unreachable block (ram,0x0001003582d8) */
/* WARNING: Removing unreachable block (ram,0x000100358344) */
/* WARNING: Removing unreachable block (ram,0x00010035832c) */
/* WARNING: Removing unreachable block (ram,0x000100358334) */
/* WARNING: Removing unreachable block (ram,0x000100358348) */
/* WARNING: Removing unreachable block (ram,0x000100358484) */
/* WARNING: Removing unreachable block (ram,0x0001003584b0) */
/* WARNING: Removing unreachable block (ram,0x000100358454) */
/* WARNING: Removing unreachable block (ram,0x00010035845c) */
/* WARNING: Removing unreachable block (ram,0x0001003584b8) */
/* WARNING: Removing unreachable block (ram,0x0001003584e4) */
/* WARNING: Removing unreachable block (ram,0x000100358504) */
/* WARNING: Removing unreachable block (ram,0x000100358510) */
/* WARNING: Removing unreachable block (ram,0x0001003585a0) */
/* WARNING: Removing unreachable block (ram,0x0001003585a4) */
/* WARNING: Removing unreachable block (ram,0x0001003584e8) */
/* WARNING: Removing unreachable block (ram,0x0001003585bc) */
/* WARNING: Removing unreachable block (ram,0x000100358688) */
/* WARNING: Removing unreachable block (ram,0x00010035866c) */
/* WARNING: Removing unreachable block (ram,0x000100358690) */
/* WARNING: Removing unreachable block (ram,0x00010035878c) */
/* WARNING: Removing unreachable block (ram,0x000100358548) */
/* WARNING: Removing unreachable block (ram,0x000100358558) */
/* WARNING: Removing unreachable block (ram,0x000100358b58) */
/* WARNING: Removing unreachable block (ram,0x000100358560) */
/* WARNING: Removing unreachable block (ram,0x000100358790) */
/* WARNING: Removing unreachable block (ram,0x000100358568) */
/* WARNING: Removing unreachable block (ram,0x000100358574) */
/* WARNING: Removing unreachable block (ram,0x000100358b50) */
/* WARNING: Removing unreachable block (ram,0x000100358794) */
/* WARNING: Removing unreachable block (ram,0x0001003587e4) */
/* WARNING: Removing unreachable block (ram,0x00010035880c) */
/* WARNING: Removing unreachable block (ram,0x0001003587b4) */
/* WARNING: Removing unreachable block (ram,0x0001003587bc) */
/* WARNING: Removing unreachable block (ram,0x000100358814) */
/* WARNING: Removing unreachable block (ram,0x000100358834) */
/* WARNING: Removing unreachable block (ram,0x000100358854) */
/* WARNING: Removing unreachable block (ram,0x000100358860) */
/* WARNING: Removing unreachable block (ram,0x0001003588e8) */
/* WARNING: Removing unreachable block (ram,0x0001003588ec) */
/* WARNING: Removing unreachable block (ram,0x000100358838) */
/* WARNING: Removing unreachable block (ram,0x000100358904) */
/* WARNING: Removing unreachable block (ram,0x0001003589d0) */
/* WARNING: Removing unreachable block (ram,0x0001003589b4) */
/* WARNING: Removing unreachable block (ram,0x0001003589d8) */
/* WARNING: Removing unreachable block (ram,0x000100358ad0) */
/* WARNING: Removing unreachable block (ram,0x000100358894) */
/* WARNING: Removing unreachable block (ram,0x0001003588a4) */
/* WARNING: Removing unreachable block (ram,0x000100358b5c) */
/* WARNING: Removing unreachable block (ram,0x0001003588ac) */
/* WARNING: Removing unreachable block (ram,0x000100358ad4) */
/* WARNING: Removing unreachable block (ram,0x0001003588b4) */
/* WARNING: Removing unreachable block (ram,0x0001003588c0) */
/* WARNING: Removing unreachable block (ram,0x000100358ad8) */

void FUN_100358094(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,ID param_5
                  )

{
  ID IVar1;
  long unaff_x21;
  undefined1 local_f0 [16];
  ID local_e0;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  (*param_2)(param_1,param_4);
  if ((unaff_x21 == 0) && (IVar1 = objc_stub::hasChanges(param_5), (int)IVar1 != 0)) {
    local_e0 = param_5;
    FUN_1002ff9c8(FUN_100308968,local_f0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100358b7c | FUN_100358b7c */

void FUN_100358b7c(void)

{
  long unaff_x20;
  
  FUN_100358094(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100358b9c | thunk_FUN_10037631c */

void thunk_FUN_10037631c(void)

{
  FUN_10037631c();
  return;
}



/* Address: 0x100358ba0 | thunk_FUN_1002fda40 */

void thunk_FUN_1002fda40(void)

{
  FUN_1002fda40();
  return;
}



/* Address: 0x100358ba4 | FUN_100358ba4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100358ba4(void)

{
  return ZEXT816(0x100fc0a78);
}


