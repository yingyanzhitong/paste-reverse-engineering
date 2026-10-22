/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10036f7b8 | FUN_10036f7b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10036f7b8(Continuation *param_1,long param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  long extraout_x8;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar1 = &DAT_100fc1478;
  FUN_1000037f0(&DAT_100fc1478,&DAT_100c43228);
  lVar8 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar6 + 0xfU & 0xfffffffffffffff0);
  IVar2 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar7 = *(undefined8 *)PTR__NSPersistentStoreRemoteChangeNotification_100ea9a20;
  uVar5 = *(undefined8 *)(param_2 + 0x70);
  (**(code **)(lVar8 + 0x10))((long)&local_90 - extraout_x8,param_1,puVar1);
  uVar4 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar9 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ecd078;
  _swift_allocObject(&DAT_100ecd078,uVar9 + lVar6,uVar4 | 7);
  (**(code **)(lVar8 + 0x20))(puVar3 + uVar9,(long)&local_90 - extraout_x8,puVar1);
  local_70 = FUN_100371030;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100059f04;
  puStack_78 = &DAT_100ecd090;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_release(local_68);
  IVar2 = objc_stub::addObserverForName_object_queue_usingBlock_(IVar2,uVar7,uVar5,0,aBlock);
  __Block_release(aBlock);
  puVar1 = &DAT_100ecd0c8;
  _swift_allocObject(&DAT_100ecd0c8,0x18,7);
  *(ID *)(puVar1 + 0x10) = IVar2;
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  return;
}



/* Address: 0x10036f968 | FUN_10036f968 */

void FUN_10036f968(void)

{
  undefined *puVar1;
  Continuation_conflict CVar2;
  long extraout_x8;
  long lVar3;
  
  puVar1 = &DAT_100fc1480;
  FUN_1000037f0(&DAT_100fc1480,&DAT_100c43230);
  lVar3 = *(long *)(puVar1 + -8);
  CVar2.unknown = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Swift::AsyncStream::Continuation::_yield(CVar2);
  (**(code **)(lVar3 + 8))(&stack0xffffffffffffffd0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10036f9e8 | FUN_10036f9e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10036f9e8(undefined8 param_1,undefined8 param_2)

{
  ID self;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self,param_2);
  return 0;
}



/* Address: 0x10036fa2c | FUN_10036fa2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010036ff10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_10036fa2c(_ArrayBuffer param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  String SVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  undefined *puVar8;
  ID IVar9;
  Dictionary<undefined,undefined> DVar10;
  char **ppcVar11;
  Hasher into;
  ulong uVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong extraout_x1;
  _StringGuts _Var20;
  char *pcVar21;
  ulong uVar22;
  undefined8 unaff_x20;
  _StringGuts _Var23;
  undefined **ppuVar24;
  _ArrayBuffer _Var25;
  __int64 _Var26;
  long lVar27;
  _CocoaArrayWrapper _Var28;
  ulong uVar29;
  ContiguousArray CVar30;
  String SVar31;
  String SVar32;
  char *local_110;
  undefined *local_108;
  undefined1 auStack_100 [32];
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ID IStack_c8;
  undefined8 local_c0;
  char *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  
  local_78 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_70 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_80 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    _Var26 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var28.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var28.unknown = param_1.unknown;
    }
    _Var26 = Swift::_CocoaArrayWrapper::get_endIndex(_Var28);
  }
  _Var25.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (_Var26 != 0) {
    uVar29 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10036fd10);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(param_1.unknown + uVar29 * 8 + 0x20);
      }
      else {
        uVar7 = uVar29;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar29,param_1);
      }
      lVar27 = uVar29 + 1;
      if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10036fd0c);
        (*pcVar5)();
      }
      puVar8 = (undefined *)objc_stub::FUN_100bff240(uVar7);
      puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (puVar8 != (undefined *)0x0) {
        FUN_10000ec2c(0,&DAT_100fc1218,&PTR__OBJC_CLASS___NSPersistentHistoryChange_100f8dbf0);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        puVar19 = puVar8;
      }
      FUN_100381d9c(puVar19);
      uVar29 = uVar29 + 1;
      _Var25.unknown = local_e0;
    } while (lVar27 != _Var26);
  }
  local_e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var25.unknown >> 0x3e == 0) {
    lVar27 = *(long *)(((ulong)_Var25.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var28.unknown = _Var25.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var25.unknown) {
      _Var28.unknown = _Var25.unknown;
    }
    lVar27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var28);
  }
  _Var28.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar27 != 0) {
    uVar29 = 0;
    do {
      if (((ulong)_Var25.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var25.unknown & 0xffffffffffffff8) + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10036fd18);
          (*pcVar5)();
        }
        uVar7 = *(ulong *)(_Var25.unknown + uVar29 * 8 + 0x20);
      }
      else {
        uVar7 = uVar29;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar29,_Var25);
      }
      lVar1 = uVar29 + 1;
      if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10036fd14);
        (*pcVar5)();
      }
      IVar9 = objc_stub::FUN_100bff200(uVar7);
      IVar9 = objc_stub::entity(IVar9);
      IVar9 = objc_stub::name(IVar9);
      if (IVar9 == 0) {
        auVar3._8_8_ = 0;
        auVar3._0_8_ = extraout_x1;
        SVar31 = (String)(auVar3 << 0x40);
        _Var23.unknown = (undefined *)0x0;
      }
      else {
        SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var23.unknown = SVar31.bridgeObject;
      }
      SVar4.bridgeObject = _Var23.unknown;
      SVar4.str = SVar31.str;
      FUN_1003214a8();
      SVar32 = Swift::__typeName(false);
      CVar30.unknown = SVar32.bridgeObject;
      if (_Var23.unknown == (undefined *)0x0) {
        _swift_bridgeObjectRelease(CVar30.unknown);
      }
      else {
        if (SVar32 == SVar4) {
          _swift_bridgeObjectRelease(_Var23.unknown);
          _swift_bridgeObjectRelease();
        }
        else {
          _Var20.unknown = _Var23.unknown;
          bVar6 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar31.str,_Var23,
                             (_StringComparisonResult)(__int8)SVar32.str);
          _swift_bridgeObjectRelease(_Var23.unknown);
          _swift_bridgeObjectRelease();
          pcVar21 = SVar32.str;
          SVar32.bridgeObject = _Var20.unknown;
          SVar32.str = pcVar21;
          if (!bVar6) goto LAB_10036fba4;
        }
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar30);
                    /* WARNING: Load size is inaccurate */
        CVar30.unknown = local_e0[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar30.unknown,(ContiguousArray)SVar32.bridgeObject);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar30.unknown,uVar7);
        Swift::ContiguousArray::__endMutation(CVar30);
      }
LAB_10036fba4:
      uVar29 = uVar29 + 1;
      _Var28.unknown = local_e0;
    } while (lVar1 != lVar27);
  }
  _swift_bridgeObjectRelease(_Var25.unknown);
  if (((long)_Var28.unknown < 0) || (((ulong)_Var28.unknown >> 0x3e & 1) != 0)) {
    uVar29 = Swift::_CocoaArrayWrapper::get_endIndex(_Var28);
  }
  else {
    uVar29 = *(ulong *)(_Var28.unknown + 0x10);
  }
  if (uVar29 == 0) {
    _swift_release(_Var28.unknown);
    ppuVar24 = *(undefined ***)(PTR___swiftEmptySetSingleton_100eae0e8 + 0x10);
    puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    uVar7 = 0;
    do {
      if (((ulong)_Var28.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(_Var28.unknown + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100370190);
          (*pcVar5)();
        }
        uVar12 = *(ulong *)(_Var28.unknown + uVar7 * 8 + 0x20);
      }
      else {
        uVar12 = uVar7;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar7,(_ArrayBuffer)_Var28.unknown);
      }
      bVar6 = SCARRY8(uVar7,1);
      uVar7 = uVar7 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10037018c);
        (*pcVar5)();
      }
      IVar9 = objc_stub::FUN_100bff1e0(uVar12);
      if (IVar9 < 2) {
        local_d0 = unaff_x20;
        IStack_c8 = uVar12;
        FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
        (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
        pcVar21 = local_90;
        puVar19 = puStack_88;
joined_r0x00010036ff74:
        if (puVar19 != (undefined *)0x0) {
          IVar9 = objc_stub::FUN_100bff1e0(uVar12);
          puVar8 = local_70;
          if (IVar9 == 0) {
            _swift_bridgeObjectRetain(puVar19);
            FUN_100369c0c(&local_e0,pcVar21,puVar19);
            _swift_bridgeObjectRelease(local_d8);
            puVar8 = puVar19;
            FUN_100370984(pcVar21,puVar19);
            _swift_bridgeObjectRelease(puVar8);
LAB_1003700b4:
            puVar8 = puVar19;
            FUN_100370984(pcVar21,puVar19);
            _swift_bridgeObjectRelease(puVar19);
            _swift_bridgeObjectRelease(puVar8);
          }
          else if (IVar9 == 1) {
            if (*(long *)(local_70 + 0x10) != 0) {
              Swift::Hasher::init(*(__int64 *)(local_70 + 0x28));
              into.unknown = (undefined *)&local_e0;
              SVar31.bridgeObject = puVar19;
              SVar31.str = pcVar21;
              Swift::String::hash(into,SVar31);
              uVar12 = Swift::Hasher::_finalize(into);
              uVar22 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
              uVar12 = uVar12 & (uVar22 ^ 0xffffffffffffffff);
              if ((*(ulong *)(puVar8 + (uVar12 >> 6) * 8 + 0x38) >> (uVar12 & 0x3f) & 1) != 0) {
                do {
                  puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x30) + uVar12 * 0x10);
                  _Var23.unknown = (undefined *)*puVar2;
                  _Var20.unknown = (undefined *)puVar2[1];
                  if ((_Var23.unknown == pcVar21 && puVar19 == _Var20.unknown) ||
                     (bVar6 = Swift::_stringCompareWithSmolCheck
                                        (_Var23,_Var20,(_StringComparisonResult)(__int8)pcVar21),
                     bVar6)) goto LAB_10037003c;
                  uVar12 = uVar12 + 1 & ~uVar22;
                } while ((*(ulong *)(puVar8 + (uVar12 >> 6) * 8 + 0x38) >> (uVar12 & 0x3f) & 1) != 0
                        );
              }
            }
            _swift_bridgeObjectRetain(puVar19);
            FUN_100369c0c(&local_e0,pcVar21,puVar19);
            _swift_bridgeObjectRelease(local_d8);
LAB_10037003c:
            puVar8 = puVar19;
            FUN_100370984(pcVar21,puVar19);
            _swift_bridgeObjectRelease(puVar19);
            _swift_bridgeObjectRelease(puVar8);
          }
          else {
            if (IVar9 == 2) {
              _swift_bridgeObjectRetain(puVar19);
              FUN_100369c0c(&local_e0,pcVar21,puVar19);
              _swift_bridgeObjectRelease(local_d8);
              puVar8 = puVar19;
              FUN_100370984(pcVar21,puVar19);
              _swift_bridgeObjectRelease(puVar8);
              goto LAB_1003700b4;
            }
            _swift_bridgeObjectRelease(puVar19);
          }
        }
      }
      else if ((IVar9 == 2) && (IVar9 = objc_stub::FUN_100c10820(uVar12), IVar9 != 0)) {
        DVar10 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        local_110 = (char *)0x696669746e656469;
        local_108 = (undefined *)0xea00000000007265;
        puVar19 = PTR___type_metadata_for_Swift_String_100eac208;
        Swift::AnyHashable::_init
                  (&local_e0,DVar10.unknown,PTR___type_metadata_for_Swift_String_100eac208,
                   PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                  );
        if (*(long *)(DVar10.unknown + 0x10) != 0) {
          ppuVar24 = &local_e0;
          FUN_1000f1290(ppuVar24);
          if (((ulong)puVar19 & 1) != 0) {
            FUN_10000cbfc(*(long *)(DVar10.unknown + 0x38) + (long)ppuVar24 * 0x20,auStack_100);
            FUN_100089674(&local_e0);
            _swift_bridgeObjectRelease(DVar10.unknown);
            ppcVar11 = &local_110;
            _swift_dynamicCast(ppcVar11,auStack_100,PTR___type_metadata_for_Any_100eae0c0 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            pcVar21 = local_110;
            puVar19 = local_108;
            if (((ulong)ppcVar11 & 1) != 0) goto joined_r0x00010036ff74;
            goto LAB_10036fda0;
          }
        }
        _swift_bridgeObjectRelease(DVar10.unknown);
        FUN_100089674(&local_e0);
      }
LAB_10036fda0:
    } while (uVar7 != uVar29);
    _swift_release(_Var28.unknown);
    ppuVar24 = *(undefined ***)(local_70 + 0x10);
    puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = local_70;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar19;
  if (ppuVar24 != (undefined **)0x0) {
    _swift_bridgeObjectRetain(puVar8);
    ppuVar13 = ppuVar24;
    FUN_10036433c(ppuVar24,0);
    ppuVar14 = &local_e0;
    FUN_100370d3c(ppuVar14,ppuVar13 + 4,ppuVar24,puVar8);
    FUN_10000c650(local_e0,local_d8,local_d0,IStack_c8,local_c0);
    if (ppuVar14 != ppuVar24) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100370308);
      (*pcVar5)();
    }
    puVar15 = (undefined *)0x0;
    FUN_100380374(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar29 = *(ulong *)(puVar15 + 0x10);
    puVar19 = puVar15;
    if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar29) {
      puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
      FUN_100380374(puVar19,uVar29 + 1,1,puVar15);
    }
    *(ulong *)(puVar19 + 0x10) = uVar29 + 1;
    *(undefined ***)(puVar19 + uVar29 * 0x10 + 0x20) = ppuVar13;
    puVar19[uVar29 * 0x10 + 0x28] = 0;
  }
  puVar15 = local_78;
  ppuVar24 = *(undefined ***)(local_78 + 0x10);
  if (ppuVar24 != (undefined **)0x0) {
    _swift_bridgeObjectRetain(local_78);
    ppuVar13 = ppuVar24;
    FUN_10036433c(ppuVar24,0);
    ppuVar14 = &local_e0;
    FUN_100370d3c(ppuVar14,ppuVar13 + 4,ppuVar24,puVar15);
    FUN_10000c650(local_e0,local_d8,local_d0,IStack_c8,local_c0);
    if (ppuVar14 != ppuVar24) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10037030c);
      (*pcVar5)();
    }
    puVar16 = puVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar17 = puVar19;
    if (((ulong)puVar16 & 1) == 0) {
      puVar17 = (undefined *)0x0;
      FUN_100380374(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
    }
    uVar29 = *(ulong *)(puVar17 + 0x10);
    puVar19 = puVar17;
    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar29) {
      puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
      FUN_100380374(puVar19,uVar29 + 1,1,puVar17);
    }
    *(ulong *)(puVar19 + 0x10) = uVar29 + 1;
    *(undefined ***)(puVar19 + uVar29 * 0x10 + 0x20) = ppuVar13;
    puVar19[uVar29 * 0x10 + 0x28] = 1;
  }
  puVar16 = local_80;
  ppuVar24 = *(undefined ***)(local_80 + 0x10);
  if (ppuVar24 != (undefined **)0x0) {
    _swift_bridgeObjectRetain(local_80);
    ppuVar13 = ppuVar24;
    FUN_10036433c(ppuVar24,0);
    ppuVar14 = &local_e0;
    FUN_100370d3c(ppuVar14,ppuVar13 + 4,ppuVar24,puVar16);
    FUN_10000c650(local_e0,local_d8,local_d0,IStack_c8,local_c0);
    if (ppuVar14 != ppuVar24) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100370330);
      (*pcVar5)();
    }
    puVar17 = puVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar18 = puVar19;
    if (((ulong)puVar17 & 1) == 0) {
      puVar18 = (undefined *)0x0;
      FUN_100380374(0,*(long *)(puVar19 + 0x10) + 1,1,puVar19);
    }
    uVar29 = *(ulong *)(puVar18 + 0x10);
    puVar19 = puVar18;
    if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar29) {
      puVar19 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
      FUN_100380374(puVar19,uVar29 + 1,1,puVar18);
    }
    *(ulong *)(puVar19 + 0x10) = uVar29 + 1;
    *(undefined ***)(puVar19 + uVar29 * 0x10 + 0x20) = ppuVar13;
    puVar19[uVar29 * 0x10 + 0x28] = 2;
  }
  _swift_bridgeObjectRelease(puVar15);
  _swift_bridgeObjectRelease(puVar16);
  _swift_bridgeObjectRelease(puVar8);
  return puVar19;
}



/* Address: 0x1003703b0 | FUN_1003703b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003703b0(undefined8 *param_1,long param_2,ID param_3)

{
  Date DVar1;
  ID IVar2;
  Date DVar3;
  NSDate *pNVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  if (param_2 == 0) {
    DVar3 = Foundation::Date::get_distantPast(&_OBJC_CLASS___NSPersistentHistoryChangeRequest);
    pNVar4 = Foundation::Date::_bridgeToObjectiveC(DVar3);
    (**(code **)(lVar7 + 8))
              ((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
    IVar2 = objc_stub::FUN_100c02340((ID)&_OBJC_CLASS___NSPersistentHistoryChangeRequest,pNVar4);
  }
  else {
    IVar2 = objc_stub::FUN_100c02360((ID)&_OBJC_CLASS___NSPersistentHistoryChangeRequest,param_2);
  }
  local_90 = 0;
  IVar2 = objc_stub::FUN_100c02060(param_3,IVar2,&local_90);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    goto LAB_1003705fc;
  }
  _swift_dynamicCastObjCClass(IVar2,&_OBJC_CLASS___NSPersistentHistoryResult);
  if (IVar2 == 0) {
    uStack_88 = 0;
    local_90 = 0;
    local_78 = 0;
    uStack_80 = 0;
LAB_1003705c8:
    FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    IVar2 = objc_stub::FUN_100c095a0(IVar2);
    if (IVar2 == 0) {
      uStack_a8 = 0;
      local_b0 = 0;
      lStack_98 = 0;
      uStack_a0 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar2);
    }
    uStack_88 = uStack_a8;
    local_90 = local_b0;
    local_78 = lStack_98;
    uStack_80 = uStack_a0;
    if (lStack_98 == 0) goto LAB_1003705c8;
    puVar5 = &DAT_100fc1488;
    FUN_1000037f0(&DAT_100fc1488,&DAT_100c43238);
    puVar6 = &local_b0;
    _swift_dynamicCast(puVar6,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar5,6);
    if (((ulong)puVar6 & 1) != 0) {
      *param_1 = local_b0;
      goto LAB_1003705fc;
    }
  }
  *param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1003705fc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}



/* Address: 0x10037063c | FUN_10037063c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10037063c(String *param_1,long param_2,ID param_3)

{
  ID IVar1;
  undefined8 uVar2;
  ID self;
  String SVar3;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = *(ID *)(param_2 + 0x78);
  IVar1 = objc_stub::FUN_100bff200(param_3);
  local_50 = 0;
  IVar1 = objc_stub::FUN_100c02080(self,IVar1,&local_50);
  if (IVar1 == 0) {
    uVar2 = local_50;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar2);
  }
  else {
    uVar2 = 0;
    FUN_1003214a8(0);
    _swift_dynamicCastClass(IVar1,uVar2);
    if (IVar1 != 0) {
      objc_stub::identifier(IVar1);
      SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *param_1 = SVar3;
      goto LAB_100370754;
    }
  }
  param_1->str = (char *)0x0;
  param_1->bridgeObject = (void *)0x0;
LAB_100370754:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10037078c | FUN_10037078c */

undefined1  [16] FUN_10037078c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da3390;
  auVar1._0_8_ = 0xd000000000000031;
  return auVar1;
}



/* Address: 0x1003707a8 | FUN_1003707a8 */

undefined8 FUN_1003707a8(void)

{
  undefined *puVar1;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40 [4];
  
  uStack_48 = 0xf000000000000000;
  local_50 = 0;
  puVar1 = &DAT_100fbf838;
  FUN_1000037f0(&DAT_100fbf838,&DAT_100c43280);
  FUN_1002ccc34(local_40,0xd000000000000015,0x8000000100da3370,&local_50,puVar1);
  return local_40[0];
}



/* Address: 0x100370818 | FUN_100370818 */

void FUN_100370818(undefined8 param_1,long *param_2)

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
  _swift_beginAccess(lVar1 + 0x80,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x88);
  uVar3 = *(undefined8 *)(lVar1 + 0x80);
  uStack_78 = *(undefined8 *)(lVar1 + 0x98);
  uVar6 = *(undefined8 *)(lVar1 + 0x90);
  uStack_68 = *(undefined8 *)(lVar1 + 0xa8);
  uVar4 = *(undefined8 *)(lVar1 + 0xa0);
  uVar2 = *(undefined8 *)(lVar1 + 0xb0);
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
  FUN_1000037f0(&DAT_100fc1468,&DAT_100c431d0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100370900 | FUN_100370900 */

void FUN_100370900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &DAT_100c431d8;
  _swift_getKeyPath(&DAT_100c431d8);
  puVar4 = &DAT_100c43200;
  _swift_getKeyPath(&DAT_100c43200);
  local_50 = uVar1;
  uStack_48 = uVar2;
  _swift_retain(uVar5);
  FUN_10011da54(uVar1,uVar2);
  FUN_1002cb5a0(&local_50,uVar5,puVar3,puVar4);
  return;
}



/* Address: 0x100370984 | FUN_100370984 */

undefined1  [16] FUN_100370984(char *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  String SVar11;
  ulong local_98 [9];
  
  uVar9 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar9 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar11.bridgeObject = param_2;
  SVar11.str = param_1;
  Swift::String::hash(into,SVar11);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(uVar9 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar6 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98[0] = *unaff_x20;
        if ((uVar6 & 1) == 0) {
          FUN_10036b2bc();
        }
        uVar6 = local_98[0];
        puVar1 = (undefined8 *)(*(long *)(local_98[0] + 0x30) + uVar5 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        FUN_100007cc4(uVar5);
        *unaff_x20 = uVar6;
        goto LAB_100370a7c;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_100370a7c:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Address: 0x100370ab0 | FUN_100370ab0 */

undefined1  [16] FUN_100370ab0(undefined *param_1,Hasher param_2)

{
  Hasher HVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar6 + 0x28));
  HVar1.unknown = param_1;
  Swift::Hasher::_combine((__uint64)param_1,param_2);
  uVar2 = Swift::Hasher::_finalize(HVar1);
  uVar5 = -1L << ((ulong)*(byte *)(uVar6 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar5 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar6 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if (*(undefined **)(*(long *)(uVar6 + 0x30) + uVar2 * 8) == param_1) {
        uVar5 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = *unaff_x20;
        if ((uVar5 & 1) == 0) {
          FUN_10036b558();
        }
        uVar3 = *(undefined8 *)(*(long *)(uVar6 + 0x30) + uVar2 * 8);
        FUN_100370bac(uVar2);
        uVar4 = 0;
        *unaff_x20 = uVar6;
        goto LAB_100370b84;
      }
      uVar2 = uVar2 + 1 & ~uVar5;
    } while ((*(ulong *)(uVar6 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  uVar3 = 0;
  uVar4 = 1;
LAB_100370b84:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}



/* Address: 0x100370bac | FUN_100370bac */

void FUN_100370bac(Bucket param_1)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Bucket BVar5;
  ulong uVar6;
  _HashTable _Var7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  Hasher HVar10;
  long lVar11;
  ulong uVar12;
  
  lVar11 = *unaff_x20;
  _Var1.unknown = (undefined *)(lVar11 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
  uVar12 = param_1.offset + 1U & (uVar8 ^ 0xffffffffffffffff);
  uVar9 = 1L << (uVar12 & 0x3f);
  if ((uVar9 & *(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8)) == 0) {
    uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar8) =
         *(ulong *)(_Var1.unknown + uVar8) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  }
  else {
    uVar8 = ~uVar8;
    _Var7.unknown = _Var1.unknown;
    BVar5 = Swift::_HashTable::previousHole(param_1,_Var1);
    if ((*(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8) & uVar9) != 0) {
      uVar9 = BVar5.offset + 1U & uVar8;
      do {
        HVar10.unknown = *(undefined **)(*(long *)(lVar11 + 0x30) + uVar12 * 8);
        Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
        Swift::Hasher::_combine((__uint64)HVar10.unknown,(Hasher)_Var7.unknown);
        uVar6 = Swift::Hasher::_finalize(HVar10);
        uVar6 = uVar6 & uVar8;
        if (param_1.offset < (long)uVar9) {
          if (uVar6 < uVar9) {
LAB_100370c94:
            if (param_1.offset < (long)uVar6) goto LAB_100370c38;
          }
          puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + param_1.offset * 8);
          puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 8);
          if ((param_1.offset != uVar12) || (puVar3 + 1 <= puVar2)) {
            *puVar2 = *puVar3;
            param_1.offset = uVar12;
          }
        }
        else if (uVar9 <= uVar6) goto LAB_100370c94;
LAB_100370c38:
        uVar12 = uVar12 + 1 & uVar8;
      } while ((*(ulong *)(_Var1.unknown + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
    }
    uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar8) =
         (-1L << (param_1.offset & 0x3fU)) - 1U & *(ulong *)(_Var1.unknown + uVar8);
  }
  if (SBORROW8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100370d3c);
    (*pcVar4)();
  }
  *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + -1;
  *(int *)(lVar11 + 0x24) = *(int *)(lVar11 + 0x24) + 1;
  return;
}



/* Address: 0x100370d3c | FUN_100370d3c */

long FUN_100370d3c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x38);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100370e8c);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100370e88);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_100370e4c;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      _swift_bridgeObjectRetain();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    _swift_bridgeObjectRetain();
  }
LAB_100370e4c:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x100370e8c | FUN_100370e8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100370e8c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ID self;
  long unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  _swift_defaultActor_initialize();
  puVar3 = &DAT_100c43258;
  _swift_getKeyPath(&DAT_100c43258);
  puVar1 = puVar3;
  FUN_100371400();
  FUN_1002cb7e0(&local_68,puVar3,puVar1);
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_60;
  *(undefined8 *)(unaff_x20 + 0x80) = local_68;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_50;
  *(undefined8 *)(unaff_x20 + 0x90) = local_58;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_40;
  *(undefined8 *)(unaff_x20 + 0xa0) = local_48;
  *(undefined8 *)(unaff_x20 + 0xb0) = local_38;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0xd000000000000019;
  FUN_1000d4624(0xd000000000000019,0x8000000100c43100);
  *(undefined8 *)(unaff_x20 + 0xc0) = uVar2;
  puVar3 = &DAT_100c43288;
  _swift_getKeyPath();
  puVar1 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar1);
  *(undefined **)(unaff_x20 + 200) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  puVar3 = &_OBJC_CLASS___NSManagedObjectContext;
  _objc_allocWithZone();
  self = objc_stub::initWithConcurrencyType_((ID)puVar3,1);
  *(ID *)(unaff_x20 + 0x78) = self;
  objc_stub::setPersistentStoreCoordinator_(self,param_1);
  return;
}



/* Address: 0x100370fbc | thunk_FUN_100370818 */

void thunk_FUN_100370818(void)

{
  FUN_100370818();
  return;
}



/* Address: 0x100370fc0 | thunk_FUN_100370900 */

void thunk_FUN_100370900(void)

{
  FUN_100370900();
  return;
}



/* Address: 0x100370fc4 | FUN_100370fc4 */

void FUN_100370fc4(void)

{
  FUN_10036f7b8();
  return;
}



/* Address: 0x100370fcc | FUN_100370fcc */

void FUN_100370fcc(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fc1478;
  FUN_1000037f0(&DAT_100fc1478,&DAT_100c43228);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x100371030 | FUN_100371030 */

void FUN_100371030(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc1478;
  FUN_1000037f0(&DAT_100fc1478,&DAT_100c43228);
  FUN_10036f968(param_1,unaff_x20 +
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                        ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100371078 | FUN_100371078 */

void FUN_100371078(long param_1,long param_2)

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



/* Address: 0x10037108c | FUN_10037108c */

void FUN_10037108c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100371094 | FUN_100371094 */

void FUN_100371094(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003710b8 | FUN_1003710b8 */

void FUN_1003710b8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10036f9e8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1003710c0 | FUN_1003710c0 */

void FUN_1003710c0(void)

{
  long unaff_x20;
  
  FUN_1003703b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003710d8 | FUN_1003710d8 */

void FUN_1003710d8(void)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fc1490 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  lVar1 = (long)DAT_100fc1490;
  FUN_10036f460();
  pTVar2 = &TargetProtocolConformanceDescriptor_100c43190;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43190,lVar1);
  DAT_100fc1490 = pTVar2;
  return;
}



/* Address: 0x100371118 | FUN_100371118 */

void FUN_100371118(void)

{
  long unaff_x20;
  
  FUN_10037063c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100371130 | FUN_100371130 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100371130(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100371174 | FUN_100371174 */

void FUN_100371174(void)

{
  long unaff_x20;
  
  FUN_10036dc00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100371194 | FUN_100371194 */

void FUN_100371194(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc11a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbedd8;
  FUN_100005c24(&DAT_100fbedd8,&DAT_100c42ed0);
  puVar2 = PTR_Foundation__Swift__Array<undefined>_>Swift__CVarArg_100ea78b0;
  _swift_getWitnessTable(PTR_Foundation__Swift__Array<undefined>_>Swift__CVarArg_100ea78b0,puVar1);
  DAT_100fc11a0 = puVar2;
  return;
}



/* Address: 0x1003711e4 | FUN_1003711e4 */

undefined8 FUN_1003711e4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100371e9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100371228 | FUN_100371228 */

void FUN_100371228(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc14a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4338c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4338c,&DAT_100ecd1b0);
  DAT_100fc14a0 = pTVar1;
  return;
}



/* Address: 0x100371268 | FUN_100371268 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100371268(void)

{
  undefined *puVar1;
  Date DVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  lVar5 = *(long *)(puVar1 + -8);
  uVar4 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar4 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  lVar3 = unaff_x20 + uVar4;
  (**(code **)(lVar6 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 8))(unaff_x20 + uVar4,DVar2.unknown);
  }
  _swift_release(*(undefined8 *)
                  (unaff_x20 + (uVar4 + *(long *)(lVar5 + 0x40) + 7 & 0xfffffffffffffff8) + 8));
  _swift_deallocObject();
  return;
}



/* Address: 0x100371320 | FUN_100371320 */

void FUN_100371320(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8;
  FUN_10036d140(param_1,unaff_x20 + uVar3,*(undefined8 *)(unaff_x20 + uVar2),
                *(undefined8 *)(unaff_x20 + uVar2 + 8));
  return;
}



/* Address: 0x100371394 | FUN_100371394 */

void FUN_100371394(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = 0xf000000000000000;
  local_30 = 0;
  puVar1 = &DAT_100fbf838;
  FUN_1000037f0(&DAT_100fbf838,&DAT_100c43280);
  FUN_1002ccc34(param_1,0xd000000000000015,0x8000000100da3370,&local_30,puVar1);
  return;
}



/* Address: 0x100371400 | FUN_100371400 */

void FUN_100371400(void)

{
  undefined *puVar1;
  undefined *puVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined *local_28;
  
  if (DAT_100fc14a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbf838;
  FUN_100005c24(&DAT_100fbf838,&DAT_100c43280);
  puVar2 = puVar1;
  FUN_100371470();
  pTVar3 = &TargetProtocolConformanceDescriptor_100c3ced4;
  local_28 = puVar2;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3ced4,puVar1,&local_28);
  DAT_100fc14a8 = pTVar3;
  return;
}



/* Address: 0x100371470 | FUN_100371470 */

void FUN_100371470(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc14b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3ceb8;
  _swift_getWitnessTable
            (&TargetProtocolConformanceDescriptor_100c3ceb8,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fc14b0 = pTVar1;
  return;
}



/* Address: 0x1003714b0 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1003714b4 | FUN_1003714b4 */

void FUN_1003714b4(void)

{
  return;
}



/* Address: 0x1003714b8 | FUN_1003714b8 */

undefined1  [16] FUN_1003714b8(void)

{
  return ZEXT816(0x100ecd1b0);
}



/* Address: 0x1003714c8 | thunk_FUN_100371228 */

void thunk_FUN_100371228(void)

{
  FUN_100371228();
  return;
}



/* Address: 0x1003714cc | thunk_FUN_1003714d0 */

void thunk_FUN_1003714d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc14b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43364;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43364,&DAT_100ecd1b0);
  DAT_100fc14b8 = pTVar1;
  return;
}



/* Address: 0x1003714d0 | FUN_1003714d0 */

void FUN_1003714d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc14b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43364;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43364,&DAT_100ecd1b0);
  DAT_100fc14b8 = pTVar1;
  return;
}



/* Address: 0x100371510 | thunk_FUN_10036e968 */

void thunk_FUN_10036e968(Task param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  long *plVar7;
  long unaff_x22;
  
  if ((*(char *)(unaff_x22 + 0x100) != '\x01') &&
     (bVar6 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1), !bVar6)) {
    plVar7 = (long *)0x230;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10036ea3c;
    FUN_10036eaf0(*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x88));
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0xd0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  (**(code **)(*(long *)(unaff_x22 + 0xa0) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x98));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010036e9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100371514 | FUN_100371514 */

void FUN_100371514(long *param_1,ulong param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100371654);
    (*pcVar1)();
  }
  uVar8 = (uint)(param_4 >> 0x20);
  uVar7 = uVar8 >> 0x1e;
  uVar6 = param_3 >> 0x20;
  if (uVar8 >> 0x1e < 2) {
    uVar4 = param_4 >> 0x30 & 0xff;
    if (uVar7 != 0) {
      uVar4 = uVar6;
    }
    uVar5 = 0;
    if (uVar7 != 0) {
      uVar5 = (long)(int)param_3;
    }
  }
  else if (uVar7 == 2) {
    uVar4 = *(ulong *)(param_3 + 0x18);
    uVar5 = *(ulong *)(param_3 + 0x10);
  }
  else {
    uVar4 = 0;
    uVar5 = 0;
  }
  uVar2 = uVar5;
  FUN_10037533c(uVar5,uVar4,param_3,param_4);
  uVar8 = uVar8 >> 0x1e;
  if ((param_2 == 0) || (param_2 <= uVar2)) {
    FUN_1003752d8(uVar5,param_2,param_3,param_4);
    lVar3 = 0;
    if (uVar8 < 2) {
      uVar6 = uVar5;
      if (uVar8 != 0) goto LAB_100371600;
    }
    else if (uVar8 != 3) goto LAB_1003715f4;
  }
  else if (uVar8 < 2) {
    if (uVar7 == 0) {
      lVar3 = 0;
      uVar5 = param_4 >> 0x30 & 0xff;
      goto LAB_10037160c;
    }
LAB_100371600:
    lVar3 = (long)(int)param_3;
    uVar5 = uVar6;
  }
  else {
    if (uVar7 != 2) {
      uVar5 = 0;
      lVar3 = 0;
      goto LAB_10037160c;
    }
    uVar5 = *(ulong *)(param_3 + 0x18);
LAB_1003715f4:
    lVar3 = *(long *)(param_3 + 0x10);
  }
  if ((long)uVar5 < lVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100371658);
    (*pcVar1)();
  }
LAB_10037160c:
  __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
            (lVar3,uVar5,param_3,param_4);
  FUN_10003bf2c(param_3,param_4);
  *param_1 = lVar3;
  param_1[1] = uVar5;
  return;
}



/* Address: 0x100371658 | FUN_100371658 */

undefined * FUN_100371658(long param_1,ulong param_2)

{
  ulong uVar1;
  __DataStorage _Var2;
  uint uVar3;
  code *pcVar4;
  __DataStorage *p_Var5;
  long lVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  undefined *puVar11;
  long lVar12;
  uint uVar13;
  String SVar14;
  __DataStorage local_7e [4];
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_2 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar10 = (int)param_1;
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar3 >> 0x1e < 2) {
    if (uVar13 == 0) {
      uVar9 = param_2 >> 0x30 & 0xff;
    }
    else {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,iVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10037198c);
        (*pcVar4)();
      }
      uVar9 = (ulong)(iVar8 - iVar10);
    }
  }
  else {
    if (uVar13 != 2) goto LAB_10037192c;
    uVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003716c8);
      (*pcVar4)();
    }
  }
  if (uVar9 != 0) {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    p_Var5 = (__DataStorage *)0x0;
    FUN_1003075b8(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if (uVar3 >> 0x1e == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = (long)iVar10;
      if (uVar13 == 2) {
        lVar12 = *(long *)(param_1 + 0x10);
      }
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100371988);
      (*pcVar4)();
    }
    do {
      puVar11 = local_70;
      if (uVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10037196c);
        (*pcVar4)();
      }
      if (uVar13 == 2) {
        if (lVar12 < *(long *)(param_1 + 0x10)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100371970);
          (*pcVar4)();
        }
        if (*(long *)(param_1 + 0x18) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10037197c);
          (*pcVar4)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100371994);
          (*pcVar4)();
        }
        lVar6 = Foundation::__DataStorage::get__offset
                          ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100371984);
          (*pcVar4)();
        }
LAB_1003717ec:
        _Var2 = p_Var5[lVar12 - lVar6];
      }
      else {
        if (uVar3 >> 0x1e == 1) {
          if ((lVar12 < iVar10) || (param_1 >> 0x20 <= lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100371978);
            (*pcVar4)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100371990);
            (*pcVar4)();
          }
          lVar6 = Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100371980);
            (*pcVar4)();
          }
          goto LAB_1003717ec;
        }
        if ((long)(param_2 >> 0x30 & 0xff) <= lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100371974);
          (*pcVar4)();
        }
        local_7e[0] = SUB81(param_1,0);
        local_7e[1] = (__DataStorage)(char)((ulong)param_1 >> 8);
        local_7e[2] = (__DataStorage)(char)((ulong)param_1 >> 0x10);
        local_7e[3] = (__DataStorage)(char)((ulong)param_1 >> 0x18);
        local_7a = (char)((ulong)param_1 >> 0x20);
        local_79 = (char)((ulong)param_1 >> 0x28);
        local_78 = (char)((ulong)param_1 >> 0x30);
        local_77 = (char)((ulong)param_1 >> 0x38);
        local_76 = (char)param_2;
        local_75 = (char)(param_2 >> 8);
        local_74 = (char)(param_2 >> 0x10);
        local_73 = (char)(param_2 >> 0x18);
        local_72 = (char)(param_2 >> 0x20);
        local_71 = (char)(param_2 >> 0x28);
        _Var2 = local_7e[lVar12];
      }
      puVar7 = &DAT_100fbeb40;
      FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100eadd00;
      *(__DataStorage *)(puVar7 + 0x20) = _Var2;
      SVar14 = (extension_Foundation)::Swift::String::_init();
      p_Var5 = (__DataStorage *)SVar14.str;
      local_70 = puVar11;
      uVar1 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar1) {
        FUN_1003075b8(1 < *(ulong *)(puVar11 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(String *)(local_70 + uVar1 * 0x10 + 0x20) = SVar14;
      lVar12 = lVar12 + 1;
      uVar9 = uVar9 - 1;
      puVar11 = local_70;
    } while (uVar9 != 0);
  }
LAB_10037192c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar11;
}



/* Address: 0x100371998 | FUN_100371998 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100371998(String *param_1,ID param_2,undefined8 param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  NSString *pNVar6;
  long lVar7;
  Date DVar8;
  long lVar9;
  ulong uVar10;
  ID IVar11;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  long lVar15;
  undefined1 uVar16;
  undefined1 *puVar17;
  char *pcVar18;
  String SVar19;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar3 = 0xd000000000000014;
  FUN_1000d4624(0xd000000000000014,0x8000000100da33d0);
  puVar4 = &DAT_100c433d0;
  _swift_getKeyPath();
  puVar12 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar4,puVar12);
  objc_stub::identifier(param_2);
  SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar19;
  IVar5 = objc_stub::sourceApplication(param_2);
  if (IVar5 == 0) {
    SVar19 = (String)ZEXT816(0);
  }
  else {
    objc_stub::name(IVar5);
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  param_1[4] = SVar19;
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::valueForKeyPath_(param_2,pNVar6);
  if (IVar5 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  lVar7 = 0;
  FUN_100371e9c();
  lVar15 = (long)*(int *)(lVar7 + 0x28);
  uStack_78 = uStack_98;
  local_80 = local_a0;
  local_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x38))
              ((long)&param_1->str + lVar15,1,1,DVar8.unknown);
  }
  else {
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar9 = (long)&param_1->str + lVar15;
    _swift_dynamicCast(lVar9,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,DVar8.unknown,6);
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x38))
              ((long)&param_1->str + lVar15,(uint)lVar9 ^ 1,1,DVar8.unknown);
  }
  IVar5 = objc_stub::device(param_2);
  if (IVar5 == 0) {
    SVar19 = (String)ZEXT816(0);
  }
  else {
    objc_stub::name(IVar5);
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *(String *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x2c)) = SVar19;
  uVar10 = objc_stub::list(param_2);
  if (((uVar10 == 0) || (FUN_1003250f0(), (uVar10 & 1) == 0)) ||
     (IVar5 = objc_stub::list(param_2), IVar5 == 0)) {
    SVar19 = (String)ZEXT816(0);
  }
  else {
    objc_stub::identifier(IVar5);
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *(String *)((long)&param_1->str + (long)*(int *)(lVar7 + 0x30)) = SVar19;
  IVar5 = objc_stub::objectID(param_2);
  uVar10 = objc_stub::rawType(param_2);
  FUN_100323594();
  uVar16 = (undefined1)uVar10;
  uVar1 = (uint)uVar10 & 0xff;
  if (uVar1 < 3) {
    if ((uVar10 & 0xff) != 0) {
      if (uVar1 == 1) {
        bVar2 = true;
        puVar17 = &DAT_e500000000000000;
        pcVar18 = (char *)0x6567616d49;
      }
      else {
        bVar2 = false;
        puVar17 = &DAT_e500000000000000;
        pcVar18 = (char *)0x726f6c6f43;
      }
      goto LAB_100371d9c;
    }
  }
  else {
    if (uVar1 < 5) {
      if (uVar1 == 3) {
        bVar2 = false;
        puVar17 = &DAT_e400000000000000;
        pcVar18 = (char *)0x656c6946;
      }
      else {
        bVar2 = false;
        puVar17 = &DAT_e400000000000000;
        pcVar18 = (char *)0x6b6e694c;
      }
      goto LAB_100371d9c;
    }
    if (uVar1 == 5) {
      bVar2 = false;
      puVar17 = &DAT_e400000000000000;
      pcVar18 = (char *)0x74786554;
      goto LAB_100371d9c;
    }
  }
  bVar2 = false;
  uVar16 = 0;
  puVar17 = &DAT_e700000000000000;
  pcVar18 = (char *)0x6e776f6e6b6e55;
LAB_100371d9c:
  SVar19.bridgeObject = puVar17;
  SVar19.str = pcVar18;
  param_1[1].str = pcVar18;
  param_1[1].bridgeObject = puVar17;
  IVar11 = objc_stub::title(param_2);
  if (IVar11 == 0) {
    _swift_bridgeObjectRetain(puVar17);
  }
  else {
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  param_1[2] = SVar19;
  if (bVar2) {
    param_1[3].str = (char *)0x0;
    puVar12 = &DAT_100ecd2a8;
    _swift_allocObject(&DAT_100ecd2a8,0x30,7);
    puVar13 = (undefined *)0x0;
    *(undefined8 *)(puVar12 + 0x10) = param_3;
    *(ID *)(puVar12 + 0x18) = IVar5;
    *(undefined8 *)(puVar12 + 0x20) = uVar3;
    *(undefined **)(puVar12 + 0x28) = puVar4;
    pcVar14 = FUN_100375458;
  }
  else {
    puVar13 = &DAT_100ecd280;
    _swift_allocObject(&DAT_100ecd280,0x31,7);
    pcVar14 = (code *)0x0;
    puVar12 = (undefined *)0x0;
    *(undefined8 *)(puVar13 + 0x10) = param_3;
    *(ID *)(puVar13 + 0x18) = IVar5;
    *(undefined8 *)(puVar13 + 0x20) = uVar3;
    *(undefined **)(puVar13 + 0x28) = puVar4;
    puVar13[0x30] = uVar16;
    param_1[3].str = (char *)FUN_1003753f8;
  }
  param_1[3].bridgeObject = puVar13;
  param_1[5].str = (char *)pcVar14;
  param_1[5].bridgeObject = puVar12;
  return;
}



/* Address: 0x100371e98 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x100371e9c | FUN_100371e9c */

void FUN_100371e9c(undefined8 param_1)

{
  if (DAT_100fc1538 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cad06c);
  return;
}



/* Address: 0x100371ed4 | FUN_100371ed4 */

undefined1  [16] FUN_100371ed4(void)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar2 = 0xd00000000000002c;
  pcVar4 = "Search indexing: item content resolved to empty string";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd000000000000036;
    pcVar4 = "Item has no pasteboard data for content indexing (type: ";
  }
  pcVar1 = " item has no pasteboard data";
  uVar3 = 0xd00000000000002f;
  if (*unaff_x20 != '\0') {
    pcVar1 = pcVar4 + 0x20;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x100371f2c | FUN_100371f2c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100371f2c(undefined8 param_1)

{
  undefined *self;
  ID self_00;
  undefined1 local_50 [16];
  
  self = &_OBJC_CLASS___NSManagedObjectContext;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithConcurrencyType_((ID)self,1);
  objc_stub::setPersistentStoreCoordinator_(self_00,param_1);
  FUN_1000037f0(&DAT_100fbf838,&DAT_100c43280);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  return local_50;
}



/* Address: 0x100371fd4 | FUN_100371fd4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100371fd4(undefined8 *param_1,ID param_2,undefined8 param_3)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *pcVar3;
  ID self;
  undefined8 uVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *extraout_x1;
  _ArrayBuffer _Var11;
  _StringGuts _Var12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  String SVar19;
  String SVar20;
  undefined *local_120;
  char local_118 [24];
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_98 [3];
  undefined *local_80;
  long lStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_98[0] = 0;
  puVar14 = local_98;
  self = objc_stub::FUN_100c02080(param_2,param_3);
  if (self == 0) {
    uVar9 = local_98[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_1000d468c(local_98);
    lVar2 = lStack_78;
    puVar10 = local_80;
    _Var12.unknown = local_80;
    FUN_100004640(local_98);
    local_f8 = 0;
    local_f0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x20,_Var12);
    _swift_bridgeObjectRelease(local_f0);
    local_f8 = 0xd00000000000001e;
    local_f0 = 0x8000000100da33f0;
    pcVar13 = local_118;
    _swift_getErrorValue(uVar9,auStack_100);
    SVar19 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar20.bridgeObject = puVar14;
    SVar20.str = pcVar13;
    Swift::String::append(SVar19,SVar20);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    uVar4 = local_f0;
    FUN_1000d4df0(local_f8,local_f0,puVar10,lVar2);
    _swift_bridgeObjectRelease(uVar4);
    FUN_100004594(local_98);
    FUN_1000da768(local_98);
    FUN_100004640(local_98,local_80);
    puVar10 = &DAT_100fbf9d8;
    FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
    _swift_initStackObject();
    *(undefined8 *)(puVar10 + 0x20) = 0x656372756f73;
    *(undefined8 *)(puVar10 + 0x18) = 2;
    *(undefined8 *)(puVar10 + 0x10) = 1;
    *(undefined **)(puVar10 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar10 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar10 + 0x30) = 0xd00000000000001b;
    *(undefined8 *)(puVar10 + 0x38) = 0x8000000100da3410;
    puVar15 = puVar10;
    FUN_1003c8f44();
    _swift_setDeallocating(puVar10);
    FUN_100005808(puVar10 + 0x20,&DAT_100fbf9e0,&DAT_100c422f0);
    (**(code **)(lStack_78 + 0x28))(uVar9,puVar15,local_80,lStack_78);
    _swift_errorRelease(uVar9);
    _swift_bridgeObjectRelease(puVar15);
    FUN_100004594(local_98);
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
  }
  else {
    uVar4 = 0;
    FUN_1003214a8(0);
    _swift_dynamicCastClass(self,uVar4);
    if (self == 0) {
      param_1[1] = 0xf000000000000000;
      *param_1 = 0;
    }
    else {
      _Var5.unknown = (undefined *)objc_stub::data(self);
      puVar10 = extraout_x1;
      FUN_10031b218();
      puVar15 = _Var5.unknown & 0xffffffffffffff8;
      if ((ulong)_Var5.unknown >> 0x3e == 0) {
        uVar17 = *(ulong *)(puVar15 + 0x10);
      }
      else {
        _Var1.unknown = puVar15;
        if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
          _Var1.unknown = _Var5.unknown;
        }
        uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar18 = 0;
      while (uVar17 != uVar18) {
        if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar15 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100372428);
            (*pcVar3)();
          }
          uVar6 = *(ulong *)(_Var5.unknown + uVar18 * 8 + 0x20);
          _Var11.unknown = puVar10;
        }
        else {
          uVar6 = uVar18;
          _Var11.unknown = _Var5.unknown;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar18,_Var5);
        }
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100372424);
          (*pcVar3)();
        }
        uVar16 = uVar18 + 1;
        FUN_10037d5c4();
        puVar10 = _Var11.unknown;
        uVar18 = uVar18 + 1;
        if ((ulong)_Var11.unknown >> 0x3c < 0xf) {
          puVar7 = local_120;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = local_120;
          if (((ulong)puVar7 & 1) == 0) {
            puVar10 = (undefined *)(*(long *)(local_120 + 0x10) + 1);
            puVar8 = (undefined *)0x0;
            FUN_10037fa6c(0,puVar10,1,local_120);
          }
          uVar18 = *(ulong *)(puVar8 + 0x10);
          puVar7 = (undefined *)(uVar18 + 1);
          local_120 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar18) {
            local_120 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            puVar10 = puVar7;
            FUN_10037fa6c(local_120,puVar7,1,puVar8);
          }
          *(undefined **)(local_120 + 0x10) = puVar7;
          *(ulong *)(local_120 + uVar18 * 0x10 + 0x20) = uVar6;
          *(undefined **)(local_120 + uVar18 * 0x10 + 0x28) = _Var11.unknown;
          uVar18 = uVar16;
        }
      }
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (*(long *)(local_120 + 0x10) == 0) {
        _swift_bridgeObjectRelease(local_120);
        param_1[1] = 0xf000000000000000;
        *param_1 = 0;
      }
      else {
        uVar4 = *(undefined8 *)(local_120 + 0x28);
        *param_1 = *(undefined8 *)(local_120 + 0x20);
        param_1[1] = uVar4;
        FUN_1001037b4();
        _swift_bridgeObjectRelease(local_120);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100372440 | FUN_100372440 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100372440(undefined8 param_1)

{
  undefined *self;
  ID self_00;
  undefined1 local_50 [16];
  
  self = &_OBJC_CLASS___NSManagedObjectContext;
  _objc_allocWithZone();
  self_00 = objc_stub::initWithConcurrencyType_((ID)self,1);
  objc_stub::setPersistentStoreCoordinator_(self_00,param_1);
  FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  return local_50;
}



/* Address: 0x1003724f0 | FUN_1003724f0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003724f0(String *param_1,char *param_2,undefined8 param_3,code *param_4,undefined8 param_5
                  ,byte param_6)

{
  undefined8 *puVar1;
  Encoding data;
  byte bVar2;
  uint uVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  bool bVar8;
  long **pplVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  Date DVar13;
  long lVar14;
  Encoding EVar15;
  UTType UVar16;
  ID IVar17;
  undefined8 uVar18;
  _ArrayBuffer _Var19;
  undefined *puVar20;
  char *pcVar21;
  undefined *puVar22;
  long *plVar23;
  URL UVar24;
  UTType UVar25;
  long *plVar26;
  URL UVar27;
  ulong uVar28;
  UTType UVar29;
  long lVar30;
  void *pvVar31;
  ID IVar32;
  long **pplVar33;
  char *pcVar34;
  undefined *extraout_x1;
  _StringGuts _Var35;
  _ArrayBuffer _Var36;
  _CocoaArrayWrapper _Var37;
  NSString *pNVar38;
  long **pplVar39;
  long extraout_x8;
  char *pcVar40;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar41;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  ulong uVar42;
  int iVar43;
  long *plVar44;
  undefined *puVar45;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined1 *puVar46;
  __int64 _Var47;
  long unaff_x21;
  uint uVar48;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var49;
  _CocoaArrayWrapper _Var50;
  long *plVar51;
  undefined1 uVar52;
  long lVar53;
  _ArrayBuffer _Var54;
  char *pcVar55;
  undefined *puVar56;
  undefined *puVar57;
  undefined *puVar58;
  undefined8 uVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String separator_00;
  String separator_01;
  String separator_02;
  String separator_03;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  String SVar70;
  String SVar71;
  String SVar72;
  String SVar73;
  String SVar74;
  String SVar75;
  String SVar76;
  String separator_04;
  String SVar77;
  String separator_05;
  String SVar78;
  String SVar79;
  String SVar80;
  String SVar81;
  String SVar82;
  String SVar83;
  String SVar84;
  String SVar85;
  String SVar86;
  String SVar87;
  String SVar88;
  String SVar89;
  String SVar90;
  String SVar91;
  String SVar92;
  String SVar93;
  String SVar94;
  String SVar95;
  String SVar96;
  String SVar97;
  String SVar98;
  String SVar99;
  String SVar100;
  String SVar101;
  String SVar102;
  String SVar103;
  String SVar104;
  long *aplStack_2c0 [2];
  long **local_2b0;
  long **local_2a8;
  long **local_2a0;
  undefined *local_298;
  String local_290;
  undefined *local_280;
  ulong local_278;
  undefined8 local_270;
  long local_268;
  ID local_260;
  char *local_258;
  undefined *local_250;
  char *local_248;
  char *local_240;
  char *local_238;
  long local_230;
  long *local_228;
  code *local_220;
  long *local_218;
  String *local_210;
  long *local_208;
  long **local_200;
  undefined8 uStack_1f8;
  ID local_1f0;
  long *local_1a8;
  char local_1a0 [24];
  undefined1 auStack_188 [8];
  long *local_180;
  undefined8 local_178;
  code *local_170;
  undefined *local_168;
  long **local_160;
  undefined *local_158;
  char *local_80;
  undefined *local_78;
  long local_70;
  String separator;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar13 = Foundation::Date::typeMetadataAccessor();
  lVar53 = *(long *)(DVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar53 + 0x40));
  lVar14 = (long)aplStack_2c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_230 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar40 = (char *)(lVar14 - extraout_x12);
  lVar14 = 0;
  local_238 = pcVar40;
  FUN_10031a030();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar14 + -8) + 0x40));
  pcVar40 = pcVar40 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_258 = pcVar40;
  EVar15 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar15.unknown + -8) + 0x40));
  local_200 = (long **)(pcVar40 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  UVar16 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar14 = *(long *)(UVar16.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar41 = (long)(pcVar40 + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar45 = &DAT_100fbe6e0;
  FUN_1000037f0(&DAT_100fbe6e0,&DAT_100c40980);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar45 + -8) + 0x40));
  plVar44 = (long *)(lVar41 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  local_228 = plVar44;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  plVar44 = (long *)((long)plVar44 - extraout_x12_00);
  pcVar40 = (char *)0x0;
  local_208 = plVar44;
  FUN_1003187b8();
  local_248 = pcVar40;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pcVar40 + -8) + 0x40));
  puVar45 = (undefined *)((long)plVar44 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_250 = puVar45;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  plVar44 = (long *)(puVar45 + -extraout_x12_01);
  puVar45 = &DAT_100fc1a40;
  local_218 = plVar44;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar45 + -8) + 0x40));
  puVar45 = (undefined *)((long)plVar44 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar57 = puVar45 + -extraout_x12_02;
  local_180 = (long *)0x0;
  pplVar39 = &local_180;
  local_240 = param_2;
  IVar17 = objc_stub::FUN_100c02080((ID)param_2,param_3);
  if (IVar17 == 0) {
    plVar44 = local_180;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_1000d468c(&local_180);
    pplVar33 = local_160;
    puVar45 = local_168;
    _Var35.unknown = local_168;
    FUN_100004640(&local_180);
    local_80 = (char *)0x0;
    local_78 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1f,_Var35);
    _swift_bridgeObjectRelease(local_78);
    local_80 = (char *)0xd00000000000001d;
    local_78 = (undefined *)0x8000000100da3430;
    pcVar40 = local_1a0;
    _swift_getErrorValue(plVar44,auStack_188);
    SVar60 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar78.bridgeObject = pplVar39;
    SVar78.str = pcVar40;
    Swift::String::append(SVar60,SVar78);
    _swift_bridgeObjectRelease(SVar60.bridgeObject);
    puVar57 = local_78;
    FUN_1000d4df0(local_80,local_78,puVar45,pplVar33);
    _swift_bridgeObjectRelease(puVar57);
    FUN_100004594(&local_180);
    FUN_1000da768(&local_180);
    pplVar39 = local_160;
    puVar57 = local_168;
    FUN_100004640(&local_180,local_168);
    puVar45 = &DAT_100fbf9d8;
    FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
    _swift_initStackObject();
    *(undefined8 *)(puVar45 + 0x20) = 0x656372756f73;
    *(undefined8 *)(puVar45 + 0x18) = 2;
    *(undefined8 *)(puVar45 + 0x10) = 1;
    *(undefined **)(puVar45 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar45 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar45 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(puVar45 + 0x38) = 0x8000000100da3450;
    puVar56 = puVar45;
    FUN_1003c8f44();
    _swift_setDeallocating(puVar45);
    FUN_100005808(puVar45 + 0x20,&DAT_100fbf9e0,&DAT_100c422f0);
    (*(code *)pplVar39[5])(plVar44,puVar56,puVar57,pplVar39);
    _swift_errorRelease(plVar44);
    _swift_bridgeObjectRelease(puVar56);
    FUN_100004594(&local_180);
    param_1->str = (char *)0x0;
    param_1->bridgeObject = (void *)0x0;
    goto LAB_100373890;
  }
  uVar18 = 0;
  local_268 = lVar53;
  local_220 = param_4;
  FUN_1003214a8(0);
  IVar32 = IVar17;
  _swift_dynamicCastClass(IVar17,uVar18);
  local_210 = param_1;
  if (IVar32 == 0) {
    FUN_1000d468c(&local_180,0);
    pplVar33 = local_160;
    puVar45 = local_168;
    pplVar39 = &local_180;
    FUN_100004640(pplVar39,local_168);
    FUN_1000d4df0(0xd00000000000003a,0x8000000100da3470,puVar45,pplVar33,pplVar39);
    FUN_100004594(&local_180);
    FUN_1000da768(&local_180);
    pplVar33 = local_160;
    puVar58 = local_168;
    pplVar39 = &local_180;
    FUN_100004640(pplVar39,local_168);
    FUN_1003754a0();
    puVar45 = &DAT_100ecd430;
    _swift_allocError(&DAT_100ecd430,pplVar39,0,0);
    *(undefined1 *)pplVar39 = 0;
    puVar57 = &DAT_100fbf9d8;
    FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
    _swift_initStackObject();
    *(undefined8 *)(puVar57 + 0x18) = 4;
    *(undefined8 *)(puVar57 + 0x10) = 2;
    *(undefined8 *)(puVar57 + 0x20) = 0x656372756f73;
    puVar56 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar57 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar57 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(puVar57 + 0x38) = 0x8000000100da3450;
    *(undefined **)(puVar57 + 0x48) = puVar56;
    *(undefined1 **)(puVar57 + 0x50) = &DAT_65707974;
    *(undefined1 **)(puVar57 + 0x58) = &DAT_e400000000000000;
    local_80 = (char *)(ulong)param_6;
    FUN_1003754e0();
    SVar60 = (extension_Swift)::Swift::BinaryInteger::get_description();
    *(undefined **)(puVar57 + 0x78) = puVar56;
    *(String *)(puVar57 + 0x60) = SVar60;
    puVar20 = puVar57;
    FUN_1003c8f44(puVar57);
    _swift_setDeallocating(puVar57);
    puVar56 = &DAT_100fbf9e0;
    FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
    _swift_arrayDestroy(puVar57 + 0x20,2,puVar56);
    (*(code *)pplVar33[5])(puVar45,puVar20,puVar58,pplVar33);
    _swift_bridgeObjectRelease(puVar20);
    _swift_errorRelease(puVar45);
    FUN_100004594(&local_180);
    local_210->str = (char *)0x0;
    local_210->bridgeObject = (void *)0x0;
    goto LAB_100373890;
  }
  local_260 = IVar32;
  _Var19.unknown = (undefined *)objc_stub::data(IVar32);
  _Var54.unknown = extraout_x1;
  FUN_10031b218();
  local_278 = (ulong)_Var19.unknown >> 0x3e;
  if (local_278 == 0) {
    puVar56 = *(undefined **)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var37.unknown = _Var19.unknown & 0xffffffffffffff8;
    if (((ulong)_Var19.unknown & 0x8000000000000000) != 0) {
      _Var37.unknown = _Var19.unknown;
    }
    puVar56 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var37);
  }
  local_280 = DVar13.unknown;
  local_270 = param_5;
  local_1f0 = IVar17;
  if (puVar56 == (undefined *)0x0) {
    local_170 = (code *)objc_stub::data(local_260);
    FUN_1002ffc68(&local_80,FUN_10031bc34,&local_180);
    pcVar40 = local_80;
    puVar58 = local_78;
    if (unaff_x21 != 0) {
      _swift_errorRelease(unaff_x21);
      pcVar40 = (char *)0x0;
      puVar58 = (undefined *)0xc000000000000000;
    }
    FUN_1001037b4(pcVar40,puVar58);
    FUN_100371514(&local_180,6,pcVar40,puVar58);
    uVar18 = local_178;
    plVar44 = local_180;
    plVar51 = local_180;
    FUN_100371658(local_180,local_178);
    FUN_10003bf2c(plVar44,uVar18);
    pcVar55 = &DAT_100fbedd8;
    local_180 = plVar51;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    pcVar21 = pcVar55;
    FUN_100310704();
    SVar60 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                       ((String)(ZEXT816(0xe000000000000000) << 0x40));
    local_290.bridgeObject = SVar60.str;
    local_290.str = SVar60.bridgeObject;
    _swift_bridgeObjectRelease(plVar51);
    FUN_1000d468c(&local_180);
    pplVar33 = local_160;
    puVar20 = local_168;
    pplVar39 = &local_180;
    _Var35.unknown = local_168;
    FUN_100004640();
    local_80 = (char *)0x0;
    local_78 = (undefined *)0xe000000000000000;
    local_2a0 = pplVar39;
    Swift::_StringGuts::grow(0x57,_Var35);
    SVar60.bridgeObject = (void *)0x8000000100da3580;
    SVar60.str = (char *)0xd000000000000038;
    SVar79.bridgeObject = pcVar21;
    SVar79.str = pcVar55;
    Swift::String::append(SVar60,SVar79);
    local_1a8 = (long *)CONCAT71(local_1a8._1_7_,param_6);
    pcVar55 = "\x01\x02";
    puVar22 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_1a8,&local_80,&DAT_100eca8f0,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar61.bridgeObject = (void *)0xeb00000000203a65;
    SVar61.str = (char *)0x7a6953776172202c;
    SVar80.bridgeObject = puVar22;
    SVar80.str = pcVar55;
    Swift::String::append(SVar61,SVar80);
    uVar3 = (uint)((ulong)puVar58 >> 0x20);
    uVar48 = uVar3 >> 0x1e;
    iVar43 = (int)pcVar40;
    iVar12 = (int)((ulong)pcVar40 >> 0x20);
    local_298 = puVar58;
    if (uVar3 >> 0x1e < 2) {
      if (uVar48 == 0) {
        plVar44 = (long *)((ulong)puVar58 >> 0x30 & 0xff);
      }
      else {
        if (SBORROW4(iVar12,iVar43)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100374df8);
          (*pcVar10)();
        }
        plVar44 = (long *)(long)(iVar12 - iVar43);
      }
    }
    else {
      plVar44 = (long *)0x0;
      if ((uVar48 == 2) &&
         (plVar44 = (long *)(*(long *)(pcVar40 + 0x18) - *(long *)(pcVar40 + 0x10)),
         SBORROW8(*(long *)(pcVar40 + 0x18),*(long *)(pcVar40 + 0x10)))) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100372d9c);
        (*pcVar10)();
      }
    }
    local_1a8 = plVar44;
    SVar60 = Swift::CustomStringConvertible::get_description();
    SVar81.bridgeObject = puVar22;
    SVar81.str = pcVar55;
    Swift::String::append(SVar60,SVar81);
    _swift_bridgeObjectRelease(SVar60.bridgeObject);
    SVar62.bridgeObject = (void *)0xed0000203a786966;
    SVar62.str = (char *)0x657250776172202c;
    SVar82.bridgeObject = puVar22;
    SVar82.str = pcVar55;
    Swift::String::append(SVar62,SVar82);
    SVar63.bridgeObject = local_290.str;
    SVar63.str = local_290.bridgeObject;
    SVar83.bridgeObject = puVar22;
    SVar83.str = pcVar55;
    Swift::String::append(SVar63,SVar83);
    SVar64.bridgeObject = (void *)0xe100000000000000;
    SVar64.str = (char *)0x29;
    SVar84.bridgeObject = puVar22;
    SVar84.str = pcVar55;
    Swift::String::append(SVar64,SVar84);
    puVar58 = local_78;
    FUN_1000d4df0(local_80,local_78,puVar20,pplVar33);
    _swift_bridgeObjectRelease(puVar58);
    FUN_100004594(&local_180);
    FUN_1000da768(&local_180);
    local_2a8 = local_160;
    local_2a0 = (long **)local_168;
    pplVar39 = &local_180;
    FUN_100004640();
    local_2b0 = pplVar39;
    FUN_1003754a0();
    puVar58 = &DAT_100ecd430;
    _swift_allocError(&DAT_100ecd430,pplVar39,0,0);
    aplStack_2c0[1] = (long *)puVar58;
    *(undefined1 *)pplVar39 = 1;
    puVar58 = &DAT_100fbf9d8;
    FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
    _swift_allocObject();
    *(undefined8 *)(puVar58 + 0x20) = 0x656372756f73;
    *(undefined8 *)(puVar58 + 0x18) = 8;
    *(undefined8 *)(puVar58 + 0x10) = 4;
    puVar20 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar58 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar58 + 0x30) = 0xd000000000000016;
    *(undefined8 *)(puVar58 + 0x38) = 0x8000000100da3450;
    *(undefined **)(puVar58 + 0x48) = puVar20;
    *(undefined1 **)(puVar58 + 0x50) = &DAT_65707974;
    *(undefined1 **)(puVar58 + 0x58) = &DAT_e400000000000000;
    local_80 = (char *)(ulong)param_6;
    FUN_1003754e0();
    SVar60 = (extension_Swift)::Swift::BinaryInteger::get_description();
    param_1 = local_210;
    *(String *)(puVar58 + 0x60) = SVar60;
    *(undefined **)(puVar58 + 0x78) = puVar20;
    *(undefined8 *)(puVar58 + 0x80) = 0x657a6953776172;
    *(undefined1 **)(puVar58 + 0x88) = &DAT_e700000000000000;
    if (uVar48 < 2) {
      if (uVar48 == 0) {
        uVar42 = (ulong)local_298 >> 0x30 & 0xff;
      }
      else {
        if (SBORROW4(iVar12,iVar43)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100374dfc);
          (*pcVar10)();
        }
        uVar42 = (ulong)(iVar12 - iVar43);
      }
    }
    else {
      uVar42 = 0;
      if ((uVar48 == 2) &&
         (uVar42 = *(long *)(pcVar40 + 0x18) - *(long *)(pcVar40 + 0x10),
         SBORROW8(*(long *)(pcVar40 + 0x18),*(long *)(pcVar40 + 0x10)))) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100372f98);
        (*pcVar10)();
      }
    }
    *(ulong *)(puVar58 + 0x90) = uVar42;
    *(undefined **)(puVar58 + 0xa8) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined8 *)(puVar58 + 0xb0) = 0x6966657250776172;
    *(undefined **)(puVar58 + 0xd8) = puVar20;
    *(undefined8 *)(puVar58 + 0xb8) = 0xe900000000000078;
    *(void **)(puVar58 + 0xc0) = local_290.bridgeObject;
    *(char **)(puVar58 + 200) = local_290.str;
    puVar22 = puVar58;
    FUN_1003c8f44(puVar58);
    _swift_setDeallocating(puVar58);
    puVar20 = &DAT_100fbf9e0;
    FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
    _swift_arrayDestroy(puVar58 + 0x20,4,puVar20);
    _swift_deallocClassInstance(puVar58,0x20,7);
    plVar44 = aplStack_2c0[1];
    pplVar39 = local_2a8;
    (*(code *)local_2a8[5])(aplStack_2c0[1],puVar22,local_2a0);
    _Var54.unknown = local_298;
    FUN_10003bf2c(pcVar40);
    _swift_bridgeObjectRelease(puVar22);
    _swift_errorRelease(plVar44);
    FUN_100004594(&local_180);
  }
  if (param_6 < 3) {
    if (param_6 == 0) {
LAB_100373188:
      plVar44 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar45 = (undefined *)0x0;
      while (puVar56 != puVar45) {
        if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10) <= puVar45) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100373e4c);
            (*pcVar10)();
          }
          puVar57 = *(undefined **)(_Var19.unknown + (long)puVar45 * 8 + 0x20);
          _Var36.unknown = _Var54.unknown;
        }
        else {
          puVar57 = puVar45;
          _Var36.unknown = _Var19.unknown;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar45,_Var19);
        }
        if (SCARRY8((long)puVar45,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100373e48);
          (*pcVar10)();
        }
        puVar58 = puVar45 + 1;
        FUN_10037c9a8();
        _Var54.unknown = _Var36.unknown;
        puVar45 = puVar45 + 1;
        if (_Var36.unknown != (undefined *)0x0) {
          plVar51 = plVar44;
          _swift_isUniquelyReferenced_nonNull_native();
          plVar23 = plVar44;
          if (((ulong)plVar51 & 1) == 0) {
            _Var54.unknown = (undefined *)(plVar44[2] + 1);
            plVar23 = (long *)0x0;
            FUN_10037f834(0,_Var54.unknown,1,plVar44);
          }
          uVar42 = plVar23[2];
          puVar45 = (undefined *)(uVar42 + 1);
          plVar44 = plVar23;
          if ((ulong)plVar23[3] >> 1 <= uVar42) {
            plVar44 = (long *)(ulong)(1 < (ulong)plVar23[3]);
            _Var54.unknown = puVar45;
            FUN_10037f834(plVar44,puVar45,1,plVar23);
          }
          plVar44[2] = (long)puVar45;
          plVar44[uVar42 * 2 + 4] = (long)puVar57;
          plVar44[uVar42 * 2 + 5] = (long)_Var36.unknown;
          puVar45 = puVar58;
        }
      }
      pplVar39 = (long **)&DAT_100fbedd8;
      local_180 = plVar44;
      FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
      FUN_100310704();
      separator.bridgeObject = (void *)0xe100000000000000;
      separator.str = (char *)0x20;
      SVar65 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
      _swift_bridgeObjectRelease(plVar44);
      param_1 = local_210;
      goto LAB_1003737d0;
    }
    if ((param_6 == 1) || (puVar56 == (undefined *)0x0)) {
      _swift_bridgeObjectRelease(_Var19.unknown);
      SVar65 = (String)ZEXT816(0);
    }
    else {
      if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100374df0);
          (*pcVar10)();
        }
        pcVar40 = *(char **)(_Var19.unknown + 0x20);
      }
      else {
        pcVar40 = (char *)0x0;
        _Var54.unknown = _Var19.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath(0,_Var19);
      }
      FUN_10037c9a8();
      SVar65.bridgeObject = _Var54.unknown;
      SVar65.str = pcVar40;
      if (_Var54.unknown != (undefined *)0x0) goto LAB_1003737d0;
      _swift_bridgeObjectRelease(_Var19.unknown);
    }
  }
  else {
    if (param_6 == 5) goto LAB_100373188;
    if (param_6 == 4) {
      local_180 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
      plVar44 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
      if (puVar56 != (undefined *)0x0) {
        if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100374df4);
            (*pcVar10)();
          }
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath(0,_Var19);
        }
        FUN_10037ce0c(puVar57);
        UVar27 = Foundation::URL::typeMetadataAccessor();
        lVar41 = *(long *)(UVar27.unknown + -8);
        UVar24.unknown = puVar57;
        (**(code **)(lVar41 + 0x30))(puVar57,1,UVar27.unknown);
        if ((int)UVar24.unknown == 1) {
          FUN_100005808(puVar57,&DAT_100fc1a40,&DAT_100c40660);
          plVar44 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          SVar60 = Foundation::URL::get_absoluteString(UVar24);
          (**(code **)(lVar41 + 8))(puVar57,UVar27.unknown);
          plVar51 = (long *)0x0;
          FUN_10037f834(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
          uVar42 = plVar51[2];
          plVar44 = plVar51;
          if ((ulong)plVar51[3] >> 1 <= uVar42) {
            plVar44 = (long *)(ulong)(1 < (ulong)plVar51[3]);
            FUN_10037f834(plVar44,uVar42 + 1,1,plVar51);
          }
          plVar44[2] = uVar42 + 1;
          *(String *)(plVar44 + uVar42 * 2 + 4) = SVar60;
          local_180 = plVar44;
        }
      }
      plVar51 = local_208;
      FUN_10031ebc8(local_208);
      lVar41 = 0;
      FUN_100317b10();
      plVar23 = plVar51;
      (**(code **)(*(long *)(lVar41 + -8) + 0x30))(plVar51,1,lVar41);
      if ((int)plVar23 == 1) {
        FUN_100005808(plVar51,&DAT_100fbe6e0,&DAT_100c40980);
      }
      else {
        plVar26 = plVar51;
        _swift_getEnumCaseMultiPayload(plVar51,lVar41);
        plVar23 = local_218;
        if ((int)plVar26 == 1) {
          FUN_1000523d8(plVar51,local_218,FUN_1003187b8);
          plVar51 = (long *)((long)plVar23 + (long)*(int *)(local_248 + 0x14));
          lVar41 = plVar51[1];
          if (lVar41 != 0) {
            lVar53 = *plVar51;
            _swift_bridgeObjectRetain(lVar41);
            plVar51 = plVar44;
            _swift_isUniquelyReferenced_nonNull_native();
            plVar23 = plVar44;
            if (((ulong)plVar51 & 1) == 0) {
              plVar23 = (long *)0x0;
              FUN_10037f834(0,plVar44[2] + 1,1,plVar44);
            }
            uVar42 = plVar23[2];
            plVar44 = plVar23;
            if ((ulong)plVar23[3] >> 1 <= uVar42) {
              plVar44 = (long *)(ulong)(1 < (ulong)plVar23[3]);
              FUN_10037f834(plVar44,uVar42 + 1,1,plVar23);
            }
            plVar44[2] = uVar42 + 1;
            plVar44[uVar42 * 2 + 4] = lVar53;
            plVar44[uVar42 * 2 + 5] = lVar41;
            FUN_10005241c(local_218,FUN_1003187b8);
            local_180 = plVar44;
            goto LAB_100373784;
          }
          pcVar10 = FUN_1003187b8;
          plVar51 = plVar23;
        }
        else {
          pcVar10 = FUN_100317b10;
        }
        FUN_10005241c(plVar51,pcVar10);
      }
LAB_100373784:
      pplVar39 = (long **)&DAT_100fbedd8;
      FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
      FUN_100310704();
      separator_01.bridgeObject = (void *)0xe100000000000000;
      separator_01.str = (char *)0x20;
      SVar65 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_01);
      _swift_bridgeObjectRelease(plVar44);
      param_1 = local_210;
    }
    else {
      if (puVar56 != (undefined *)0x0) {
        local_208 = (long *)((ulong)_Var19.unknown & 0xc000000000000001);
        local_290.bridgeObject = PTR___swiftEmptyArrayStorage_100eae0d8;
        local_218 = (long *)((ulong)_Var19.unknown & 0xffffffffffffff8);
        puVar57 = (undefined *)0x0;
        if (local_208 == (long *)0x0) goto LAB_10037339c;
LAB_100373564:
        UVar25.unknown = puVar57;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar57,_Var19);
        do {
          if (SCARRY8((long)puVar57,1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100373eb8);
            (*pcVar10)();
          }
          UVar29 = UniformTypeIdentifiers::UTType::get_fileURL(UVar25);
          SVar60 = UniformTypeIdentifiers::UTType::get_identifier(UVar29);
          pvVar31 = SVar60.bridgeObject;
          (**(code **)(lVar14 + 8))(lVar41,UVar16.unknown);
          lVar53 = _TtC9PasteCore14PasteboardItem::dataByType;
          _swift_beginAccess(UVar25.unknown + _TtC9PasteCore14PasteboardItem::dataByType,&local_180,
                             0x20,0);
                    /* WARNING: Load size is inaccurate */
          EVar15.unknown = UVar25.unknown[lVar53];
          if (*(long *)(EVar15.unknown + 0x10) == 0) {
LAB_10037332c:
            _swift_endAccess(&local_180);
            _swift_bridgeObjectRelease(pvVar31);
LAB_10037333c:
            UVar24 = Foundation::URL::typeMetadataAccessor();
            (**(code **)(*(long *)(UVar24.unknown + -8) + 0x38))(puVar45,1,1,UVar24.unknown);
LAB_10037336c:
            FUN_100005808(puVar45,&DAT_100fc1a40,&DAT_100c40660);
          }
          else {
            _swift_bridgeObjectRetain(EVar15.unknown);
            FUN_100071370();
            if (((ulong)SVar60.bridgeObject & 1) == 0) {
              _swift_bridgeObjectRelease(EVar15.unknown);
              goto LAB_10037332c;
            }
            puVar1 = (undefined8 *)(*(long *)(EVar15.unknown + 0x38) + (long)SVar60.str * 0x10);
            data.unknown = (undefined *)*puVar1;
            lVar53 = puVar1[1];
            FUN_1001037b4(data.unknown,lVar53);
            _swift_endAccess(&local_180);
            _swift_bridgeObjectRelease();
            Encoding::_get_utf8(EVar15);
            lVar30 = lVar53;
            (extension_Foundation)::Swift::String::_init(data);
            _swift_bridgeObjectRelease(pvVar31);
            FUN_10003bf2c(data.unknown,lVar53);
            if (lVar30 == 0) goto LAB_10037333c;
            Foundation::URL::_init();
            _swift_bridgeObjectRelease(lVar30);
            UVar27 = Foundation::URL::typeMetadataAccessor();
            lVar53 = *(long *)(UVar27.unknown + -8);
            UVar24.unknown = puVar45;
            (**(code **)(lVar53 + 0x30))(puVar45,1,UVar27.unknown);
            if ((int)UVar24.unknown == 1) goto LAB_10037336c;
            SVar60 = Foundation::URL::get_path(UVar24);
            (**(code **)(lVar53 + 8))(puVar45,UVar27.unknown);
            pvVar31 = local_290.bridgeObject;
            _swift_isUniquelyReferenced_nonNull_native();
            if (((ulong)pvVar31 & 1) == 0) {
              pvVar31 = (void *)0x0;
              FUN_10037f834(0,*(long *)((long)local_290.bridgeObject + 0x10) + 1,1);
              local_290.bridgeObject = pvVar31;
            }
            uVar42 = *(ulong *)((long)local_290.bridgeObject + 0x10);
            if (*(ulong *)((long)local_290.bridgeObject + 0x18) >> 1 <= uVar42) {
              pvVar31 = (void *)(ulong)(1 < *(ulong *)((long)local_290.bridgeObject + 0x18));
              FUN_10037f834(pvVar31,uVar42 + 1,1,local_290.bridgeObject);
              local_290.bridgeObject = pvVar31;
            }
            *(ulong *)((long)local_290.bridgeObject + 0x10) = uVar42 + 1;
            *(String *)((long)local_290.bridgeObject + uVar42 * 0x10 + 0x20) = SVar60;
          }
          if (puVar57 + 1 == puVar56) goto LAB_1003735c8;
          puVar57 = puVar57 + 1;
          if (local_208 != (long *)0x0) goto LAB_100373564;
LAB_10037339c:
          if ((undefined *)local_218[2] <= puVar57) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100373ebc);
            (*pcVar10)();
          }
                    /* WARNING: Load size is inaccurate */
          UVar25.unknown = _Var19.unknown[(long)puVar57 * 8 + 0x20];
        } while( true );
      }
      local_290.bridgeObject = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1003735c8:
      pvVar31 = local_290.bridgeObject;
      local_180 = local_290.bridgeObject;
      pplVar39 = (long **)&DAT_100fbedd8;
      FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
      FUN_100310704();
      separator_00.bridgeObject = (void *)0xe100000000000000;
      separator_00.str = (char *)0x20;
      SVar65 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
      _swift_bridgeObjectRelease(pvVar31);
      param_1 = local_210;
    }
LAB_1003737d0:
    pvVar31 = SVar65.bridgeObject;
    _swift_bridgeObjectRetain(pvVar31);
    _swift_bridgeObjectRelease();
    plVar44 = local_228;
    uVar42 = (ulong)SVar65.str & 0xffffffffffff;
    if (((ulong)pvVar31 & 0x2000000000000000) != 0) {
      uVar42 = (ulong)pvVar31 >> 0x38 & 0xf;
    }
    if (uVar42 == 0) {
      if (param_6 != 0) {
        FUN_10031ebc8(local_228);
        lVar41 = 0;
        FUN_100317b10();
        plVar51 = plVar44;
        (**(code **)(*(long *)(lVar41 + -8) + 0x30))(plVar44,1,lVar41);
        local_208 = (long *)0x0;
        if ((int)plVar51 != 1) {
          _swift_getEnumCaseMultiPayload(plVar44,lVar41);
          puVar45 = local_250;
          iVar12 = (int)plVar44;
          local_290 = SVar65;
          if (iVar12 < 2) {
            if (iVar12 != 0) {
              FUN_1000523d8(local_228,local_250,FUN_1003187b8);
              UVar24.unknown = &DAT_100fc14d8;
              FUN_1000037f0(&DAT_100fc14d8,&DAT_100c43400);
              _swift_allocObject();
              SVar60 = Foundation::URL::get_absoluteString(UVar24);
              *(String *)(UVar24.unknown + 0x20) = SVar60;
              puVar1 = (undefined8 *)(puVar45 + *(int *)(local_248 + 0x14));
              uVar18 = puVar1[1];
              uVar59 = *puVar1;
              *(undefined8 *)(UVar24.unknown + 0x38) = puVar1[1];
              *(undefined8 *)(UVar24.unknown + 0x30) = uVar59;
              _swift_bridgeObjectRetain(uVar18);
              lVar41 = 0;
              UVar27.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
              do {
                plVar44 = (long *)(UVar24.unknown + lVar41 * 0x10 + 0x28);
                do {
                  plVar51 = plVar44;
                  lVar41 = lVar41 + 1;
                  if (lVar41 == 3) {
                    _swift_setDeallocating(UVar24.unknown);
                    puVar45 = &DAT_100fbf830;
                    FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
                    _swift_arrayDestroy((String *)(UVar24.unknown + 0x20),2,puVar45);
                    _swift_deallocClassInstance(UVar24.unknown,0x20,7);
                    pplVar39 = (long **)&DAT_100fbedd8;
                    local_180 = (long *)UVar27.unknown;
                    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
                    FUN_100310704();
                    separator_03.bridgeObject = (void *)0xe100000000000000;
                    separator_03.str = (char *)0x20;
                    SVar60 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                                       (separator_03);
                    local_208 = SVar60.bridgeObject;
                    pcVar40 = SVar60.str;
                    _swift_bridgeObjectRelease();
                    puVar45 = local_250;
                    SVar60 = Foundation::URL::get_absoluteString(UVar27);
                    plVar44 = (long *)Swift::String::get_count(SVar60);
                    _swift_bridgeObjectRelease(SVar60.bridgeObject);
                    FUN_10005241c(puVar45,FUN_1003187b8);
                    param_1 = local_210;
                    pvVar31 = local_290.bridgeObject;
                    goto LAB_100373eec;
                  }
                  lVar53 = *plVar51;
                  plVar44 = plVar51 + 2;
                } while (lVar53 == 0);
                lVar30 = plVar51[-1];
                _swift_bridgeObjectRetain(lVar53);
                plVar44 = (long *)UVar27.unknown;
                _swift_isUniquelyReferenced_nonNull_native();
                plVar51 = (long *)UVar27.unknown;
                if (((ulong)plVar44 & 1) == 0) {
                  plVar51 = (long *)0x0;
                  FUN_10037f834(0,*(long *)((long)UVar27.unknown + 0x10) + 1,1,UVar27.unknown);
                }
                uVar42 = plVar51[2];
                UVar27.unknown = (undefined *)plVar51;
                if ((ulong)plVar51[3] >> 1 <= uVar42) {
                  UVar27.unknown = (undefined *)(ulong)(1 < (ulong)plVar51[3]);
                  FUN_10037f834(UVar27.unknown,uVar42 + 1,1,plVar51);
                }
                *(ulong *)((long)UVar27.unknown + 0x10) = uVar42 + 1;
                *(long *)((long)UVar27.unknown + (uVar42 * 2 + 4) * 8) = lVar30;
                *(long *)((long)UVar27.unknown + (uVar42 * 2 + 5) * 8) = lVar53;
              } while( true );
            }
            FUN_1000523d8(local_228,local_258,FUN_10031a030);
            if (puVar56 == (undefined *)0x0) {
              SVar60 = (String)ZEXT816(0);
            }
            else {
              if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
                if (*(long *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100374e7c);
                  (*pcVar10)();
                }
                uVar18 = *(undefined8 *)(_Var19.unknown + 0x20);
              }
              else {
                uVar18 = 0;
                Swift::_ArrayBuffer::__getElementSlowPath(0,_Var19);
              }
              UVar25.unknown = &DAT_100fbf8d8;
              FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
              bVar2 = *(byte *)(lVar14 + 0x50);
              _swift_allocObject();
              *(undefined8 *)(UVar25.unknown + 0x18) = 6;
              *(undefined8 *)(UVar25.unknown + 0x10) = 3;
              UVar29 = UniformTypeIdentifiers::UTType::get_flatRTFD(UVar25);
              UVar29 = UniformTypeIdentifiers::UTType::get_rtfd(UVar29);
              UniformTypeIdentifiers::UTType::get_rtf(UVar29);
              UVar29.unknown = UVar25.unknown;
              FUN_10037ebdc(UVar25.unknown,uVar18);
              _swift_setDeallocating(UVar25.unknown);
              _swift_arrayDestroy(UVar25.unknown +
                                  ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)),3,
                                  UVar16.unknown);
              lVar41 = 0x20;
              _swift_deallocClassInstance(UVar25.unknown,0x20,7);
              if (UVar29.unknown == (undefined *)0x0) {
                FUN_10037c9a8();
                if (lVar41 != 0) {
                  puVar45 = &_OBJC_CLASS___NSAttributedString;
                  _objc_allocWithZone();
                  pNVar38 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                  _swift_bridgeObjectRelease(lVar41);
                  IVar17 = objc_stub::initWithString_((ID)puVar45,pNVar38);
                  if (IVar17 != 0) goto LAB_100373bf0;
                }
                SVar60 = (String)ZEXT816(0);
                param_1 = local_210;
              }
              else {
                puVar45 = &_OBJC_CLASS___NSMutableAttributedString;
                _objc_allocWithZone();
                IVar17 = objc_stub::initWithAttributedString_((ID)puVar45,UVar29.unknown);
                IVar32 = objc_stub::length((ID)UVar29.unknown);
                puVar45 = &DAT_100ecd348;
                _swift_allocObject(&DAT_100ecd348,0x18,7);
                *(ID *)(puVar45 + 0x10) = IVar17;
                puVar57 = &DAT_100ecd370;
                _swift_allocObject(&DAT_100ecd370,0x20,7);
                *(code **)(puVar57 + 0x10) = thunk_FUN_100309b24;
                *(undefined **)(puVar57 + 0x18) = puVar45;
                local_160 = (long **)thunk_FUN_100215f00;
                local_180 = (long *)PTR___NSConcreteStackBlock_100ea82a0;
                local_178 = 0x42000000;
                local_170 = FUN_100309738;
                local_168 = &DAT_100ecd388;
                local_158 = puVar57;
                pvVar31 = __Block_copy(&local_180);
                puVar58 = local_158;
                _swift_retain(puVar57);
                _swift_release(puVar58);
                objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar17,0,IVar32,0,pvVar31)
                ;
                __Block_release(pvVar31);
                pplVar39 = (long **)0x25;
                puVar58 = puVar57;
                _swift_isEscapingClosureAtFileLocation(puVar57,"",0x9e,0x25,0x45,1);
                _swift_release(puVar45);
                _swift_release(puVar57);
                if (((ulong)puVar58 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100374e80);
                  (*pcVar10)();
                }
                pvVar31 = local_290.bridgeObject;
LAB_100373bf0:
                param_1 = local_210;
                objc_stub::string(IVar17);
                SVar60 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
              }
            }
            local_208 = SVar60.bridgeObject;
            pcVar40 = SVar60.str;
            plVar44 = *(long **)local_258;
            FUN_10005241c(local_258,FUN_10031a030);
LAB_100373eec:
            if (plVar44 == (long *)0x0) goto LAB_100373858;
          }
          else {
            if (iVar12 == 2) {
              FUN_10005241c(local_228,FUN_100317b10);
            }
            else if (iVar12 != 3) {
              plVar51 = (long *)*local_228;
              lVar41 = local_228[2];
              lVar53 = local_228[3];
              local_180 = plVar51;
              _swift_bridgeObjectRetain(plVar51);
              pplVar39 = (long **)&DAT_100fbedd8;
              FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
              FUN_100310704();
              separator_02.bridgeObject = (void *)0xe100000000000000;
              separator_02.str = (char *)0x20;
              SVar60 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_02);
              local_208 = SVar60.bridgeObject;
              pcVar40 = SVar60.str;
              _swift_bridgeObjectRelease(plVar51);
              local_180 = plVar51;
              _swift_bridgeObjectRetain(plVar51);
              pvVar31 = local_290.bridgeObject;
              SVar60 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                                 ((String)(ZEXT816(0xe000000000000000) << 0x40));
              _swift_bridgeObjectRelease(plVar51);
              plVar44 = (long *)Swift::String::get_count(SVar60);
              _swift_bridgeObjectRelease(plVar51);
              param_1 = local_210;
              FUN_10003bf18(lVar41,lVar53);
              _swift_bridgeObjectRelease(SVar60.bridgeObject);
              goto LAB_100373eec;
            }
            local_208 = (long *)0x0;
            pcVar40 = (char *)0x0;
            plVar44 = (long *)0xffffffffffffffff;
          }
          if ((long)puVar56 < 0) {
            _Var37.unknown = (undefined *)0x5;
          }
          else {
            _Var37.unknown = puVar56;
            if ((undefined *)0x4 < puVar56) {
              _Var37.unknown = (undefined *)0x5;
            }
          }
          if (local_278 == 0) {
            lVar41 = *(long *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var50.unknown = _Var19.unknown & 0xffffffffffffff8;
            if (((ulong)_Var19.unknown & 0x8000000000000000) != 0) {
              _Var50.unknown = _Var19.unknown;
            }
            _Var47 = Swift::_CocoaArrayWrapper::get_endIndex(_Var50);
            if (_Var47 < 0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100374e00);
              (*pcVar10)();
            }
            lVar41 = Swift::_CocoaArrayWrapper::get_endIndex(_Var50);
          }
          if (lVar41 < (long)_Var37.unknown) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100374e04);
            (*pcVar10)();
          }
          local_218 = plVar44;
          if ((((ulong)_Var19.unknown & 0xc000000000000001) == 0) ||
             (_Var37.unknown == (undefined *)0x0)) {
            _swift_bridgeObjectRetain(_Var19.unknown);
          }
          else {
            FUN_100381740(0);
            _swift_bridgeObjectRetain(_Var19.unknown);
            Swift::_ArrayBuffer::_typeCheckSlowPath(0,_Var19);
            if ((((_Var37.unknown != &DAT_00000001) &&
                 (Swift::_ArrayBuffer::_typeCheckSlowPath(1,_Var19),
                 _Var37.unknown != (undefined *)0x2)) &&
                (Swift::_ArrayBuffer::_typeCheckSlowPath(2,_Var19),
                _Var37.unknown != (undefined *)0x3)) &&
               (Swift::_ArrayBuffer::_typeCheckSlowPath(3,_Var19),
               _Var37.unknown != (undefined *)0x4)) {
              Swift::_ArrayBuffer::_typeCheckSlowPath(4,_Var19);
            }
          }
          if (local_278 == 0) {
            _Var54.unknown = (undefined *)0x0;
            _Var49.unknown = _Var19.unknown & 0xffffffffffffff8;
            _Var50.unknown = _Var37.unknown;
            _Var37.unknown = _Var49.unknown + 0x20;
          }
          else {
            _swift_bridgeObjectRelease(_Var19.unknown);
            _Var54.unknown = _Var19.unknown & 0xffffffffffffff8;
            if (((ulong)_Var19.unknown & 0x8000000000000000) != 0) {
              _Var54.unknown = _Var19.unknown;
            }
            _Var49 = Swift::_CocoaArrayWrapper::_get_subscript((Range<__int64>)0x0,_Var37);
            _Var50.unknown = (undefined *)((ulong)pplVar39 >> 1);
          }
          local_180 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
          pNVar38 = (NSString *)0x0;
          local_248 = pcVar40;
          FUN_1003075b8(0,0);
          plVar44 = local_180;
          local_200 = (long **)_Var49.unknown;
          _swift_unknownObjectRetain(_Var49.unknown);
          if (_Var50.unknown != _Var54.unknown) {
            lVar41 = 0;
            puVar45 = _Var50.unknown;
            if ((long)_Var50.unknown < (long)_Var54.unknown) {
              puVar45 = _Var54.unknown;
            }
            do {
              if ((long)puVar45 - (long)_Var54.unknown == lVar41) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100374da8);
                (*pcVar10)();
              }
              if (SCARRY8(lVar41,1)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100374dac);
                (*pcVar10)();
              }
              lVar30 = *(long *)(_Var37.unknown + lVar41 * 8 + (long)_Var54.unknown * 8);
              lVar53 = lVar41;
              FUN_100374e84();
              uVar42 = plVar44[2];
              local_180 = plVar44;
              if ((ulong)plVar44[3] >> 1 <= uVar42) {
                pNVar38 = (NSString *)&DAT_00000001;
                FUN_1003075b8(1 < (ulong)plVar44[3],uVar42 + 1);
              }
              local_180[2] = uVar42 + 1;
              local_180[uVar42 * 2 + 4] = lVar53;
              local_180[uVar42 * 2 + 5] = lVar30;
              lVar41 = lVar41 + 1;
              plVar44 = local_180;
            } while ((long)_Var50.unknown - (long)_Var54.unknown != lVar41);
          }
          local_228 = plVar44;
          _swift_unknownObjectRelease_n(local_200,2);
          if (puVar56 == (undefined *)0x0) {
            uVar52 = 0;
          }
          else {
            uVar42 = 0;
            uStack_1f8 = 6;
            local_200 = (long **)0x3;
            do {
              if (((ulong)_Var19.unknown & 0xc000000000000001) == 0) {
                if (*(ulong *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10) <= uVar42) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100374dcc);
                  (*pcVar10)();
                }
                uVar28 = *(ulong *)(_Var19.unknown + uVar42 * 8 + 0x20);
              }
              else {
                uVar28 = uVar42;
                Swift::_ArrayBuffer::__getElementSlowPath(uVar42,_Var19);
              }
              puVar45 = (undefined *)(uVar42 + 1);
              if (SCARRY8(uVar42,1)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100374dc8);
                (*pcVar10)();
              }
              UVar25.unknown = &DAT_100fbf8d8;
              FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
              bVar2 = *(byte *)(lVar14 + 0x50);
              _swift_allocObject();
              *(undefined8 *)(UVar25.unknown + 0x18) = uStack_1f8;
              *(long ***)(UVar25.unknown + 0x10) = local_200;
              UVar29 = UniformTypeIdentifiers::UTType::get_flatRTFD(UVar25);
              UVar29 = UniformTypeIdentifiers::UTType::get_rtfd(UVar29);
              UniformTypeIdentifiers::UTType::get_rtf(UVar29);
              UVar29.unknown = UVar25.unknown;
              FUN_10037ebdc(UVar25.unknown,uVar28);
              _swift_setDeallocating(UVar25.unknown);
              _swift_arrayDestroy(UVar25.unknown +
                                  ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)),3,
                                  UVar16.unknown);
              lVar41 = 0x20;
              pNVar38 = (NSString *)0x7;
              _swift_deallocClassInstance(UVar25.unknown);
              if (UVar29.unknown != (undefined *)0x0) {
                puVar45 = &_OBJC_CLASS___NSMutableAttributedString;
                _objc_allocWithZone();
                IVar17 = objc_stub::initWithAttributedString_((ID)puVar45,UVar29.unknown);
                IVar32 = objc_stub::length((ID)UVar29.unknown);
                puVar45 = &DAT_100ecd2d0;
                _swift_allocObject(&DAT_100ecd2d0,0x18,7);
                *(ID *)(puVar45 + 0x10) = IVar17;
                puVar57 = &DAT_100ecd2f8;
                _swift_allocObject(&DAT_100ecd2f8,0x20,7);
                *(code **)(puVar57 + 0x10) = FUN_100309b24;
                *(undefined **)(puVar57 + 0x18) = puVar45;
                local_160 = (long **)FUN_100215f00;
                local_180 = (long *)PTR___NSConcreteStackBlock_100ea82a0;
                local_178 = 0x42000000;
                local_170 = FUN_100309738;
                local_168 = &DAT_100ecd310;
                local_158 = puVar57;
                pvVar31 = __Block_copy(&local_180);
                puVar56 = local_158;
                _swift_retain(puVar57);
                _swift_release(puVar56);
                objc_stub::enumerateAttributesInRange_options_usingBlock_(IVar17,0,IVar32,0,pvVar31)
                ;
                __Block_release(pvVar31);
                uVar52 = 1;
                pNVar38 = (NSString *)0x9e;
                pplVar39 = (long **)0x25;
                puVar56 = puVar57;
                _swift_isEscapingClosureAtFileLocation(puVar57,"",0x9e,0x25,0x45,1);
                _swift_release(puVar45);
                _swift_release(puVar57);
                if (((ulong)puVar56 & 1) != 0) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x100374428);
                  (*pcVar10)();
                }
                goto LAB_100374440;
              }
              FUN_10037c9a8();
              if (lVar41 != 0) {
                puVar57 = &_OBJC_CLASS___NSAttributedString;
                _objc_allocWithZone();
                pNVar38 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(lVar41);
                IVar17 = objc_stub::initWithString_((ID)puVar57);
                if (IVar17 != 0) {
                  uVar52 = 1;
                  goto LAB_100374440;
                }
              }
              uVar42 = uVar42 + 1;
            } while (puVar45 != puVar56);
            uVar52 = 0;
          }
LAB_100374440:
          IVar17 = local_260;
          FUN_10038fef4(0);
          IVar32 = objc_stub::objectID(IVar17);
          FUN_10038efa8(IVar32,local_240);
          pcVar55 = (char *)((ulong)local_208 >> 0x38 & 0xf);
          pcVar40 = (char *)((ulong)local_248 & 0xffffffffffff);
          if (((ulong)local_208 & 0x2000000000000000) != 0) {
            pcVar40 = pcVar55;
          }
          bVar11 = local_208 != (long *)0x0;
          FUN_1000d468c(&local_180,0);
          pplVar9 = local_160;
          puVar45 = local_168;
          pplVar33 = &local_180;
          _Var35.unknown = local_168;
          FUN_100004640();
          local_80 = (char *)0x0;
          local_78 = (void *)0xe000000000000000;
          local_200 = pplVar33;
          Swift::_StringGuts::grow(0x1c,_Var35);
          SVar66.bridgeObject = &DAT_e500000000000000;
          SVar66.str = (char *)0x203a646928;
          SVar85.bridgeObject = pplVar39;
          SVar85.str = (char *)pNVar38;
          Swift::String::append(SVar66,SVar85);
          objc_stub::identifier(IVar17);
          SVar60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          SVar86.bridgeObject = pplVar39;
          SVar86.str = (char *)pNVar38;
          Swift::String::append(SVar60,SVar86);
          _swift_bridgeObjectRelease(SVar60.bridgeObject);
          SVar67.bridgeObject = &DAT_e800000000000000;
          SVar67.str = (char *)0x203a65707974202c;
          SVar87.bridgeObject = pplVar39;
          SVar87.str = (char *)pNVar38;
          Swift::String::append(SVar67,SVar87);
          local_1a8 = (long *)CONCAT71(local_1a8._1_7_,param_6);
          pcVar21 = "\x01\x02";
          puVar57 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
          Swift::__print_unlocked
                    (&local_1a8,&local_80,&DAT_100eca8f0,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          SVar68.bridgeObject = &DAT_e700000000000000;
          SVar68.str = (char *)0x203a707061202c;
          SVar88.bridgeObject = puVar57;
          SVar88.str = pcVar21;
          Swift::String::append(SVar68,SVar88);
          IVar17 = objc_stub::sourceApplication(IVar17);
          local_258 = pcVar55;
          if (IVar17 == 0) {
            SVar69.bridgeObject = (void *)0xe300000000000000;
            SVar69.str = (char *)0x6c696e;
          }
          else {
            objc_stub::name(IVar17);
            SVar69 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          }
          SVar89.bridgeObject = puVar57;
          SVar89.str = pcVar21;
          Swift::String::append(SVar69,SVar89);
          _swift_bridgeObjectRelease(SVar69.bridgeObject);
          SVar70.bridgeObject = &SUB_e200000000000000;
          SVar70.str = (char *)0x202c;
          SVar90.bridgeObject = puVar57;
          SVar90.str = pcVar21;
          Swift::String::append(SVar70,SVar90);
          puVar56 = local_78;
          SVar4.bridgeObject = local_78;
          SVar4.str = local_80;
          local_80 = (char *)0xd000000000000026;
          local_78 = (undefined *)0x8000000100da34b0;
          SVar91.bridgeObject = puVar57;
          SVar91.str = pcVar21;
          Swift::String::append(SVar4,SVar91);
          _swift_bridgeObjectRelease(puVar56);
          puVar56 = local_78;
          pcVar34 = local_80;
          local_80 = (char *)0x203a6465636e7973;
          local_78 = &DAT_e800000000000000;
          pcVar55 = (char *)0x65757274;
          if (IVar32 == 0) {
            pcVar55 = (char *)0x65736c6166;
          }
          puVar46 = &DAT_e400000000000000;
          if (IVar32 == 0) {
            puVar46 = &DAT_e500000000000000;
          }
          SVar71.bridgeObject = puVar46;
          SVar71.str = pcVar55;
          SVar92.bridgeObject = puVar57;
          SVar92.str = pcVar21;
          Swift::String::append(SVar71,SVar92);
          _swift_bridgeObjectRelease(puVar46);
          SVar72.bridgeObject = (void *)0xeb00000000203a64;
          SVar72.str = (char *)0x657461657263202c;
          SVar93.bridgeObject = puVar57;
          SVar93.str = pcVar21;
          Swift::String::append(SVar72,SVar93);
          IVar17 = local_260;
          DVar13.unknown = (undefined *)objc_stub::FUN_100c00560(local_260);
          pcVar55 = local_238;
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar13);
          FUN_100375520(0);
          puVar58 = local_280;
          SVar60 = Swift::CustomStringConvertible::get_description();
          SVar94.bridgeObject = puVar57;
          SVar94.str = pcVar21;
          Swift::String::append(SVar60,SVar94);
          _swift_bridgeObjectRelease(SVar60.bridgeObject);
          local_220 = *(code **)(local_268 + 8);
          (*local_220)(pcVar55,puVar58);
          SVar73.bridgeObject = (void *)0x8000000100da34e0;
          SVar73.str = (char *)0xd000000000000011;
          SVar95.bridgeObject = puVar57;
          SVar95.str = pcVar21;
          Swift::String::append(SVar73,SVar95);
          local_1a8 = local_218;
          SVar60 = Swift::CustomStringConvertible::get_description();
          SVar96.bridgeObject = puVar57;
          SVar96.str = pcVar21;
          Swift::String::append(SVar60,SVar96);
          _swift_bridgeObjectRelease(SVar60.bridgeObject);
          SVar74.bridgeObject = &SUB_e200000000000000;
          SVar74.str = (char *)0x202c;
          SVar97.bridgeObject = puVar57;
          SVar97.str = pcVar21;
          Swift::String::append(SVar74,SVar97);
          puVar58 = local_78;
          SVar5.bridgeObject = local_78;
          SVar5.str = local_80;
          local_80 = pcVar34;
          local_78 = puVar56;
          _swift_bridgeObjectRetain(puVar56);
          SVar98.bridgeObject = puVar57;
          SVar98.str = pcVar21;
          Swift::String::append(SVar5,SVar98);
          _swift_bridgeObjectRelease(puVar56);
          _swift_bridgeObjectRelease(puVar58);
          puVar56 = local_78;
          pcVar34 = local_80;
          local_80 = (char *)0xd000000000000015;
          local_78 = (void *)0x8000000100da3500;
          bVar8 = !bVar11 || pcVar40 == (char *)0x0;
          pcVar55 = (char *)0x65757274;
          if (bVar8) {
            pcVar55 = (char *)0x65736c6166;
          }
          puVar46 = &DAT_e400000000000000;
          if (bVar8) {
            puVar46 = &DAT_e500000000000000;
          }
          SVar75.bridgeObject = puVar46;
          SVar75.str = pcVar55;
          SVar99.bridgeObject = puVar57;
          SVar99.str = pcVar21;
          Swift::String::append(SVar75,SVar99);
          _swift_bridgeObjectRelease(puVar46);
          SVar76.bridgeObject = &SUB_e200000000000000;
          SVar76.str = (char *)0x202c;
          SVar100.bridgeObject = puVar57;
          SVar100.str = pcVar21;
          Swift::String::append(SVar76,SVar100);
          puVar58 = local_78;
          SVar6.bridgeObject = local_78;
          SVar6.str = local_80;
          local_80 = pcVar34;
          local_78 = puVar56;
          _swift_bridgeObjectRetain(puVar56);
          SVar101.bridgeObject = puVar57;
          SVar101.str = pcVar21;
          Swift::String::append(SVar6,SVar101);
          _swift_bridgeObjectRelease(puVar56);
          _swift_bridgeObjectRelease(puVar58);
          puVar57 = local_78;
          pcVar21 = local_80;
          local_80 = (char *)0x203a736570797475;
          local_78 = &DAT_e800000000000000;
          local_1a8 = local_228;
          pcVar55 = &DAT_100fbedd8;
          FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
          pcVar34 = pcVar55;
          FUN_100310704();
          separator_04.bridgeObject = &SUB_e200000000000000;
          separator_04.str = (char *)0x203b;
          local_240 = pcVar34;
          local_238 = pcVar55;
          SVar60 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_04);
          SVar102.bridgeObject = pcVar34;
          SVar102.str = pcVar55;
          Swift::String::append(SVar60,SVar102);
          _swift_bridgeObjectRelease(SVar60.bridgeObject);
          SVar77.bridgeObject = (void *)0xe100000000000000;
          SVar77.str = (char *)0x29;
          SVar103.bridgeObject = pcVar34;
          SVar103.str = pcVar55;
          Swift::String::append(SVar77,SVar103);
          puVar56 = local_78;
          SVar7.bridgeObject = local_78;
          SVar7.str = local_80;
          local_80 = pcVar21;
          local_78 = puVar57;
          _swift_bridgeObjectRetain(puVar57);
          SVar104.bridgeObject = pcVar34;
          SVar104.str = pcVar55;
          Swift::String::append(SVar7,SVar104);
          _swift_bridgeObjectRelease(puVar57);
          _swift_bridgeObjectRelease(puVar56);
          puVar57 = local_78;
          FUN_1000d4df0(local_80,local_78,puVar45,pplVar9);
          _swift_bridgeObjectRelease(puVar57);
          FUN_100004594(&local_180);
          FUN_1000da768(&local_180);
          pplVar33 = local_160;
          puVar56 = local_168;
          pplVar39 = &local_180;
          FUN_100004640();
          local_200 = pplVar39;
          FUN_1003754a0();
          puVar45 = &DAT_100ecd430;
          _swift_allocError(&DAT_100ecd430,pplVar39,0,0);
          local_250 = puVar45;
          *(undefined1 *)pplVar39 = 2;
          puVar45 = &DAT_100fbf9d8;
          FUN_1000037f0(&DAT_100fbf9d8,&DAT_100c42b00);
          _swift_allocObject();
          *(undefined8 *)(puVar45 + 0x20) = 0x656372756f73;
          *(undefined8 *)(puVar45 + 0x18) = 0x16;
          *(undefined8 *)(puVar45 + 0x10) = 0xb;
          puVar57 = PTR___type_metadata_for_Swift_String_100eac208;
          *(undefined1 **)(puVar45 + 0x28) = &DAT_e600000000000000;
          *(undefined8 *)(puVar45 + 0x30) = 0xd000000000000016;
          *(undefined8 *)(puVar45 + 0x38) = 0x8000000100da3450;
          *(undefined **)(puVar45 + 0x48) = puVar57;
          *(undefined1 **)(puVar45 + 0x50) = &DAT_65707974;
          *(undefined1 **)(puVar45 + 0x58) = &DAT_e400000000000000;
          local_80 = (char *)(ulong)param_6;
          FUN_1003754e0();
          SVar60 = (extension_Swift)::Swift::BinaryInteger::get_description();
          *(String *)(puVar45 + 0x60) = SVar60;
          *(undefined **)(puVar45 + 0x78) = puVar57;
          *(undefined8 *)(puVar45 + 0x80) = 0x696669746e656469;
          *(undefined8 *)(puVar45 + 0x88) = 0xea00000000007265;
          objc_stub::identifier(IVar17);
          SVar60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar45 + 0x90) = SVar60;
          *(undefined **)(puVar45 + 0xa8) = puVar57;
          *(undefined8 *)(puVar45 + 0xb0) = 0x707061;
          *(undefined8 *)(puVar45 + 0xb8) = 0xe300000000000000;
          IVar17 = objc_stub::sourceApplication(IVar17);
          if (IVar17 == 0) {
            *(undefined **)(puVar45 + 0xd8) = puVar57;
LAB_100374af8:
            *(undefined8 *)(puVar45 + 0xc0) = 0x6e776f6e6b6e75;
            puVar46 = &DAT_e700000000000000;
          }
          else {
            objc_stub::name(IVar17);
            SVar60 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            puVar46 = SVar60.bridgeObject;
            *(undefined **)(puVar45 + 0xd8) = puVar57;
            if (puVar46 == (undefined1 *)0x0) goto LAB_100374af8;
            *(char **)(puVar45 + 0xc0) = SVar60.str;
          }
          pcVar10 = local_220;
          lVar14 = local_230;
          *(undefined1 **)(puVar45 + 200) = puVar46;
          *(undefined8 *)(puVar45 + 0xe0) = 0x6465636e7973;
          *(undefined1 **)(puVar45 + 0xe8) = &DAT_e600000000000000;
          puVar58 = PTR___type_metadata_for_Swift_Bool_100eac570;
          puVar45[0xf0] = IVar32 != 0;
          *(undefined **)(puVar45 + 0x108) = puVar58;
          *(undefined8 *)(puVar45 + 0x110) = 0x64657461657263;
          *(undefined1 **)(puVar45 + 0x118) = &DAT_e700000000000000;
          DVar13.unknown = (undefined *)objc_stub::FUN_100c00560(local_260);
          Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar13);
          SVar60 = Foundation::Date::get_description((Date)0x0);
          *(undefined **)(puVar45 + 0x138) = puVar57;
          *(String *)(puVar45 + 0x120) = SVar60;
          (*pcVar10)(lVar14,local_280);
          *(undefined8 *)(puVar45 + 0x140) = 0x4c77656976657270;
          *(undefined8 *)(puVar45 + 0x148) = 0xed00006874676e65;
          *(long **)(puVar45 + 0x150) = local_218;
          puVar20 = PTR___type_metadata_for_Swift_Int_100eac6f8;
          *(undefined **)(puVar45 + 0x168) = PTR___type_metadata_for_Swift_Int_100eac6f8;
          *(undefined8 *)(puVar45 + 0x170) = 0xd000000000000013;
          *(undefined8 *)(puVar45 + 0x178) = 0x8000000100da3520;
          if (local_278 == 0) {
            _Var47 = *(__int64 *)(((ulong)_Var19.unknown & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var37.unknown = _Var19.unknown & 0xffffffffffffff8;
            if (((ulong)_Var19.unknown & 0x8000000000000000) != 0) {
              _Var37.unknown = _Var19.unknown;
            }
            _Var47 = Swift::_CocoaArrayWrapper::get_endIndex(_Var37);
          }
          _swift_bridgeObjectRelease(_Var19.unknown);
          plVar44 = local_228;
          *(__int64 *)(puVar45 + 0x180) = _Var47;
          *(undefined **)(puVar45 + 0x198) = puVar20;
          *(undefined8 *)(puVar45 + 0x1a0) = 0x736570797475;
          *(undefined1 **)(puVar45 + 0x1a8) = &DAT_e600000000000000;
          local_1a8 = local_228;
          separator_05.bridgeObject = &SUB_e200000000000000;
          separator_05.str = (char *)0x203b;
          SVar60 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_05);
          _swift_release(plVar44);
          *(String *)(puVar45 + 0x1b0) = SVar60;
          *(undefined **)(puVar45 + 0x1c8) = puVar57;
          *(undefined8 *)(puVar45 + 0x1d0) = 0xd000000000000013;
          *(undefined8 *)(puVar45 + 0x1d8) = 0x8000000100da3540;
          puVar45[0x1e0] = uVar52;
          *(undefined **)(puVar45 + 0x1f8) = puVar58;
          *(undefined8 *)(puVar45 + 0x200) = 0xd000000000000013;
          *(undefined8 *)(puVar45 + 0x208) = 0x8000000100da3560;
          *(undefined **)(puVar45 + 0x228) = puVar58;
          puVar45[0x210] = bVar11 && pcVar40 != (char *)0x0;
          puVar58 = puVar45;
          FUN_1003c8f44(puVar45);
          _swift_setDeallocating(puVar45);
          puVar57 = &DAT_100fbf9e0;
          FUN_1000037f0(&DAT_100fbf9e0,&DAT_100c422f0);
          _swift_arrayDestroy(puVar45 + 0x20,0xb,puVar57);
          _swift_deallocClassInstance(puVar45,0x20,7);
          puVar45 = local_250;
          (*(code *)pplVar33[5])(local_250,puVar58,puVar56);
          _swift_bridgeObjectRelease(puVar58);
          _swift_errorRelease(puVar45);
          FUN_100004594(&local_180);
          plVar44 = local_208;
          param_1 = local_210;
          pcVar40 = local_248;
          SVar65 = local_290;
          if (local_208 != (long *)0x0) {
            pcVar55 = (char *)((ulong)local_248 & 0xffffffffffff);
            if (((ulong)local_208 & 0x2000000000000000) != 0) {
              pcVar55 = local_258;
            }
            if (pcVar55 != (char *)0x0) {
              _swift_bridgeObjectRelease(local_290.bridgeObject);
              param_1->str = pcVar40;
              param_1->bridgeObject = plVar44;
              goto LAB_100373890;
            }
            _swift_bridgeObjectRelease(local_208);
          }
          goto LAB_100373804;
        }
LAB_100373858:
        _swift_bridgeObjectRelease(_Var19.unknown);
        _Var19.unknown = (undefined *)local_208;
      }
      _swift_bridgeObjectRelease(_Var19.unknown);
      _swift_bridgeObjectRelease(pvVar31);
      param_1->str = (char *)0x0;
      param_1->bridgeObject = (void *)0x0;
      goto LAB_100373890;
    }
    _swift_bridgeObjectRelease(_Var19.unknown);
  }
LAB_100373804:
  *param_1 = SVar65;
LAB_100373890:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100374e84 | FUN_100374e84 */

undefined1  [16] FUN_100374e84(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  char *pcVar10;
  ulong uVar11;
  char *pcVar12;
  void *pvVar13;
  uint uVar14;
  ulong uVar15;
  undefined *puVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong *puVar21;
  String SVar22;
  String SVar23;
  String separator;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  ulong local_a8;
  undefined1 *puStack_a0;
  undefined *local_90;
  ulong uStack_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar19 = _TtC9PasteCore14PasteboardItem::types;
  pcVar12 = (char *)0x0;
  pvVar13 = (void *)0x0;
  _swift_beginAccess(param_2 + _TtC9PasteCore14PasteboardItem::types,auStack_78);
  lVar19 = *(long *)(param_2 + lVar19);
  uVar15 = *(ulong *)(lVar19 + 0x10);
  uVar20 = uVar15;
  if (9 < uVar15) {
    uVar20 = 10;
  }
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar15 != 0) {
    local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRetain(lVar19);
    pcVar12 = (char *)0x0;
    FUN_1003075b8(0,uVar20);
    lVar7 = _TtC9PasteCore14PasteboardItem::dataByType;
    puVar21 = (ulong *)(lVar19 + 0x28);
    do {
      puVar16 = local_80;
      if (uVar20 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1003751cc);
        (*pcVar9)();
      }
      uVar15 = puVar21[-1];
      uVar3 = *puVar21;
      local_90 = (undefined *)uVar15;
      uStack_88 = uVar3;
      _swift_bridgeObjectRetain_n(uVar3,2);
      SVar22.bridgeObject = (void *)0xe100000000000000;
      SVar22.str = &DAT_0000003a;
      SVar25.bridgeObject = pvVar13;
      SVar25.str = pcVar12;
      Swift::String::append(SVar22,SVar25);
      pcVar12 = (char *)0x20;
      pvVar13 = (void *)0x0;
      _swift_beginAccess(param_2 + lVar7,&local_a8);
      lVar18 = *(long *)(param_2 + lVar7);
      if (*(long *)(lVar18 + 0x10) == 0) {
        _swift_endAccess(&local_a8);
LAB_100374fec:
        uVar15 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar18);
        uVar11 = uVar3;
        FUN_100071370();
        if ((uVar11 & 1) == 0) {
          _swift_endAccess(&local_a8);
          _swift_bridgeObjectRelease(lVar18);
          goto LAB_100374fec;
        }
        plVar1 = (long *)(*(long *)(lVar18 + 0x38) + uVar15 * 0x10);
        lVar2 = *plVar1;
        uVar15 = plVar1[1];
        FUN_1001037b4(lVar2,uVar15);
        _swift_endAccess(&local_a8);
        _swift_bridgeObjectRelease(lVar18);
        uVar5 = (uint)(uVar15 >> 0x20);
        uVar14 = uVar5 >> 0x1e;
        if (uVar5 >> 0x1e < 2) {
          if (uVar14 == 0) {
            FUN_10003bf2c(lVar2,uVar15);
            uVar15 = uVar15 >> 0x30 & 0xff;
          }
          else {
            FUN_10003bf2c(lVar2,uVar15);
            iVar17 = (int)((ulong)lVar2 >> 0x20);
            if (SBORROW4(iVar17,(int)lVar2)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1003751d0);
              (*pcVar9)();
            }
            uVar15 = (ulong)(iVar17 - (int)lVar2);
          }
        }
        else {
          if (uVar14 != 2) {
            FUN_10003bf2c(lVar2,uVar15);
            goto LAB_100374fec;
          }
          lVar18 = *(long *)(lVar2 + 0x10);
          lVar4 = *(long *)(lVar2 + 0x18);
          FUN_10003bf2c(lVar2,uVar15);
          uVar15 = lVar4 - lVar18;
          if (SBORROW8(lVar4,lVar18)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1003751d4);
            (*pcVar9)();
          }
        }
      }
      local_a8 = uVar15;
      SVar22 = Swift::CustomStringConvertible::get_description();
      SVar26.bridgeObject = pvVar13;
      SVar26.str = pcVar12;
      Swift::String::append(SVar22,SVar26);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      uVar3 = uStack_88;
      puVar8 = local_90;
      uVar15 = *(ulong *)(puVar16 + 0x10);
      local_80 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar15) {
        pcVar12 = &DAT_00000001;
        FUN_1003075b8(1 < *(ulong *)(puVar16 + 0x18),uVar15 + 1);
      }
      puVar16 = local_80;
      *(ulong *)(local_80 + 0x10) = uVar15 + 1;
      *(undefined **)(local_80 + uVar15 * 0x10 + 0x20) = puVar8;
      *(ulong *)(local_80 + uVar15 * 0x10 + 0x28) = uVar3;
      puVar21 = puVar21 + 2;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    _swift_bridgeObjectRelease(lVar19);
  }
  local_a8 = 0x5b6d657469;
  puStack_a0 = &DAT_e500000000000000;
  local_90 = (undefined *)param_1;
  SVar22 = Swift::CustomStringConvertible::get_description();
  SVar27.bridgeObject = pvVar13;
  SVar27.str = pcVar12;
  Swift::String::append(SVar22,SVar27);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar23.bridgeObject = (void *)0xe300000000000000;
  SVar23.str = (char *)0x7b3d5d;
  SVar28.bridgeObject = pvVar13;
  SVar28.str = pcVar12;
  Swift::String::append(SVar23,SVar28);
  pcVar12 = &DAT_100fbedd8;
  local_90 = puVar16;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  pcVar10 = pcVar12;
  FUN_100310704();
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x202c;
  SVar22 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(puVar16);
  SVar29.bridgeObject = pcVar10;
  SVar29.str = pcVar12;
  Swift::String::append(SVar22,SVar29);
  _swift_bridgeObjectRelease(SVar22.bridgeObject);
  SVar24.bridgeObject = (void *)0xe100000000000000;
  SVar24.str = (char *)0x7d;
  SVar30.bridgeObject = pcVar10;
  SVar30.str = pcVar12;
  Swift::String::append(SVar24,SVar30);
  auVar6._8_8_ = puStack_a0;
  auVar6._0_8_ = local_a8;
  return auVar6;
}



/* Address: 0x1003751d4 | FUN_1003751d4 */

undefined1  [16] FUN_1003751d4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Address: 0x100375200 | FUN_100375200 */

void FUN_100375200(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_100364a64(unaff_x20 + *(int *)(param_2 + 0x28),param_1);
  return;
}



/* Address: 0x100375210 | FUN_100375210 */

undefined1  [16] FUN_100375210(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x2c));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100375244 | FUN_100375244 */

undefined1  [16] FUN_100375244(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Address: 0x100375274 | FUN_100375274 */

undefined1  [16] FUN_100375274(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x30));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1003752a8 | FUN_1003752a8 */

undefined1  [16] FUN_1003752a8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Address: 0x1003752d8 | FUN_1003752d8 */

void FUN_1003752d8(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100375338);
    (*pcVar2)();
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar5 = param_4 >> 0x30 & 0xff;
    if (uVar3 != 0) {
      uVar5 = (long)(int)((ulong)param_3 >> 0x20);
    }
    lVar4 = 0;
    if (uVar3 != 0) {
      lVar4 = (long)(int)param_3;
    }
  }
  else if (uVar3 == 2) {
    uVar5 = *(ulong *)(param_3 + 0x18);
    lVar4 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar5 = 0;
    lVar4 = 0;
  }
  if ((param_1 + param_2 <= (long)uVar5) && (lVar4 <= param_1 + param_2)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10037533c);
  (*pcVar2)();
}



/* Address: 0x10037533c | FUN_10037533c */

long FUN_10037533c(long param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  
  iVar3 = (int)((ulong)param_3 >> 0x20);
  uVar1 = (uint)(param_4 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    uVar6 = param_4 >> 0x30 & 0xff;
    if (uVar4 != 0) {
      uVar6 = (long)iVar3;
    }
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = (long)(int)param_3;
    }
  }
  else if (uVar4 == 2) {
    uVar6 = *(ulong *)(param_3 + 0x18);
    lVar5 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
  }
  if (((long)uVar6 < param_1) || (param_1 < lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1003753e8);
    (*pcVar2)();
  }
  if (uVar4 < 2) {
    uVar6 = param_4 >> 0x30 & 0xff;
    if (uVar4 != 0) {
      uVar6 = (long)iVar3;
    }
    lVar5 = 0;
    if (uVar4 != 0) {
      lVar5 = (long)(int)param_3;
    }
  }
  else if (uVar4 == 2) {
    uVar6 = *(ulong *)(param_3 + 0x18);
    lVar5 = *(long *)(param_3 + 0x10);
  }
  else {
    uVar6 = 0;
    lVar5 = 0;
  }
  if ((param_2 <= (long)uVar6) && (lVar5 <= param_2)) {
    if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003753f0);
      (*pcVar2)();
    }
    return param_2 - param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1003753ec);
  (*pcVar2)();
}



/* Address: 0x1003753f0 | FUN_1003753f0 */

void FUN_1003753f0(void)

{
  FUN_100375410(0x31);
  return;
}


