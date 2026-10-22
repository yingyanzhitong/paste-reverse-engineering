/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10034fc48 | FUN_10034fc48 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10034fc48(ID param_1)

{
  uint uVar1;
  NSString *pNVar2;
  ID IVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined1 auVar8 [16];
  long local_70;
  ulong uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  uVar4 = 0;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c112a0(param_1,pNVar2);
  if (IVar3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  uStack_38 = uStack_58;
  local_40 = local_60;
  local_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_100005808(&local_40,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_dynamicCast(&local_70,&local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    if ((uVar4 & 1) != 0) {
      uVar1 = (uint)(uStack_68 >> 0x20);
      uVar5 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar5 == 0) {
          if ((uStack_68 & 0xff000000000000) != 0) goto LAB_10034fd50;
        }
        else {
          lVar6 = (long)(int)local_70;
          lVar7 = local_70 >> 0x20;
LAB_10034fd3c:
          if (lVar6 != lVar7) goto LAB_10034fd50;
        }
      }
      else if (uVar5 == 2) {
        lVar6 = *(long *)(local_70 + 0x10);
        lVar7 = *(long *)(local_70 + 0x18);
        goto LAB_10034fd3c;
      }
      FUN_10003bf2c();
    }
  }
  local_70 = 0;
  uStack_68 = 0xf000000000000000;
LAB_10034fd50:
  auVar8._8_8_ = uStack_68;
  auVar8._0_8_ = local_70;
  return auVar8;
}



/* Address: 0x10034fd60 | FUN_10034fd60 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10034fd60(ID *param_1,ID *param_2)

{
  bool bVar1;
  uint uVar2;
  URL UVar3;
  ID IVar4;
  URL UVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long extraout_x8;
  long lVar9;
  code *pcVar10;
  ID self;
  ID self_00;
  uint uVar11;
  undefined8 uVar12;
  String SVar13;
  String SVar14;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  self_00 = *param_1;
  self = *param_2;
  uVar12 = 0x52557463656a626f;
  IVar4 = self_00;
  uVar6 = uVar12;
  FUN_10034ce30(self_00,0x52557463656a626f,0xe900000000000049);
  uVar2 = (uint)IVar4;
  FUN_10034fa0c();
  _swift_bridgeObjectRelease(uVar6);
  IVar4 = self;
  FUN_10034ce30(self,0x52557463656a626f,0xe900000000000049);
  uVar11 = (uint)IVar4;
  FUN_10034fa0c();
  _swift_bridgeObjectRelease(uVar12);
  if (((uVar2 ^ uVar11) & 1) == 0) {
    uVar7 = 0xd000000000000012;
    FUN_10034fc48(self_00,0xd000000000000012,0x8000000100da2b90);
    FUN_10003bf18();
    if (uVar7 >> 0x3c < 0xf) {
      FUN_10003bf18(0,0xf000000000000000);
    }
    uVar8 = 0xd000000000000012;
    FUN_10034fc48(self,0xd000000000000012,0x8000000100da2b90);
    FUN_10003bf18();
    uVar8 = uVar8 >> 0x3c;
    uVar11 = (uint)(uVar8 < 0xf);
    if (uVar8 < 0xf) {
      FUN_10003bf18(0,0xf000000000000000);
    }
    if (uVar7 >> 0x3c < 0xf == uVar8 < 0xf) {
      IVar4 = objc_stub::objectID(self_00);
      UVar5.unknown = (undefined *)objc_stub::URIRepresentation(IVar4);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
      SVar13 = Foundation::URL::get_absoluteString((URL)0x0);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown
                );
      IVar4 = objc_stub::objectID(self);
      UVar5.unknown = (undefined *)objc_stub::URIRepresentation(IVar4);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
      SVar14 = Foundation::URL::get_absoluteString((URL)0x0);
      (*pcVar10)(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown
                );
      if (SVar13 == SVar14) {
        uVar11 = 0;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar14.str,(_StringGuts)SVar14.bridgeObject,
                           (_StringComparisonResult)(__int8)SVar13.str);
        uVar11 = (uint)bVar1;
      }
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
    }
  }
  return uVar11 & 1;
}



/* Address: 0x10034ffec | FUN_10034ffec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100350378) */
/* WARNING: Removing unreachable block (ram,0x0001003501a4) */
/* WARNING: Type propagation algorithm not settling */

long FUN_10034ffec(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  _ArrayBuffer _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  NSString *pNVar6;
  undefined *self;
  NSPredicate *pNVar7;
  undefined *puVar8;
  NSPredicate *pNVar9;
  _ArrayBuffer _Var10;
  ID IVar11;
  undefined *puVar12;
  ID self_00;
  URL UVar13;
  ulong uVar14;
  Dictionary<undefined,undefined> DVar15;
  _StringGuts *p_Var16;
  _StringGuts _Var17;
  CKRecordZoneID *pCVar18;
  CKRecordZoneID *pCVar19;
  NSString *pNVar20;
  undefined *puVar21;
  undefined **ppuVar22;
  ulong uVar23;
  _StringGuts _Var24;
  long extraout_x8;
  long lVar25;
  __int64 _Var26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  ContiguousArray oldCount;
  __int64 _Var30;
  String SVar31;
  String zoneName;
  String zoneName_00;
  undefined1 auStack_130 [8];
  undefined *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  NSPredicate *local_108;
  undefined *local_100;
  ID local_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined *local_d8;
  _StringGuts local_d0;
  _StringGuts _Stack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  _ArrayBuffer local_78;
  
  local_d8 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_100 = *(undefined **)(local_d8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_100 + 0x40));
  puVar5 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = (undefined *)objc_stub::initWithEntityName_((ID)puVar5,pNVar6);
  pNVar7 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar5 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  puVar21 = puVar5;
  _swift_allocObject();
  uStack_e8 = 4;
  local_f0 = 2;
  *(undefined8 *)(puVar21 + 0x18) = 4;
  *(undefined8 *)(puVar21 + 0x10) = 2;
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar21 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar8 = puVar21;
  FUN_10030d9e0();
  *(undefined8 *)(puVar21 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar21 + 0x28) = 0xea00000000007265;
  *(undefined **)(puVar21 + 0x60) = puVar12;
  *(undefined **)(puVar21 + 0x68) = puVar8;
  *(undefined **)(puVar21 + 0x40) = puVar8;
  *(undefined8 *)(puVar21 + 0x48) = 0xd000000000000017;
  *(undefined8 *)(puVar21 + 0x50) = 0x8000000100da2350;
  pNVar9 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar7);
  objc_stub::setPredicate_((ID)self,pNVar9);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  _Var10.unknown = self;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_120 = (undefined *)0x8000000100da2350;
  local_118 = puVar8;
  local_110 = self;
  local_108 = pNVar7;
  local_f8 = param_1;
  if ((ulong)_Var10.unknown >> 0x3e == 0) {
    lVar25 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
      _Var1.unknown = _Var10.unknown;
    }
    lVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar25 == 0) {
    _swift_bridgeObjectRelease(_Var10.unknown);
    return 0;
  }
  if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100350cb4);
      (*pcVar3)();
    }
    IVar11 = *(ID *)(_Var10.unknown + 0x20);
  }
  else {
    IVar11 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,_Var10);
  }
  _swift_bridgeObjectRelease(_Var10.unknown);
  puVar12 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  local_128 = (undefined *)objc_stub::initWithEntityName_((ID)puVar12,pNVar6);
  _swift_allocObject(puVar5,0x70,7);
  puVar21 = local_118;
  *(undefined8 *)(puVar5 + 0x18) = uStack_e8;
  *(ulong *)(puVar5 + 0x10) = local_f0;
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar5 + 0x40) = local_118;
  *(undefined8 *)(puVar5 + 0x20) = 0x52557463656a626f;
  *(undefined8 *)(puVar5 + 0x28) = 0xe900000000000049;
  self_00 = objc_stub::objectID(IVar11);
  UVar13.unknown = (undefined *)objc_stub::URIRepresentation(self_00);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar13);
  SVar31 = Foundation::URL::get_absoluteString((URL)0x0);
  _Var10.unknown = local_128;
  (**(code **)((long)local_100 + 8))
            (auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),local_d8);
  *(undefined **)(puVar5 + 0x60) = puVar12;
  *(undefined **)(puVar5 + 0x68) = puVar21;
  *(String *)(puVar5 + 0x48) = SVar31;
  pNVar7 = (extension_Foundation)::__C::NSPredicate::___allocating_init(local_108);
  objc_stub::setPredicate_((ID)_Var10.unknown,pNVar7);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_118 = (undefined *)IVar11;
  if ((ulong)_Var10.unknown >> 0x3e == 0) {
    _Var30 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
      _Var1.unknown = _Var10.unknown;
    }
    _Var30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  if (_Var30 == 0) {
    _swift_bridgeObjectRelease(_Var10.unknown);
    return 0;
  }
  uVar29 = 0;
  local_78.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_f0 = (ulong)_Var10.unknown & 0xc000000000000001;
  local_d8 = _Var10.unknown & 0xffffffffffffff8;
  local_108 = (NSPredicate *)0x100da2b30;
  local_100 = (undefined *)0xd000000000000012;
  do {
    if (local_f0 == 0) {
      if (*(ulong *)((long)local_d8 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100350c48);
        (*pcVar3)();
      }
      uVar14 = *(ulong *)(_Var10.unknown + uVar29 * 8 + 0x20);
    }
    else {
      uVar14 = uVar29;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar29,_Var10);
    }
    lVar25 = uVar29 + 1;
    if (SCARRY8(uVar29,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100350c44);
      (*pcVar3)();
    }
    IVar11 = objc_stub::entity(uVar14);
    objc_stub::FUN_100bfe2e0(IVar11);
    FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
    DVar15 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar15.unknown + 0x10) == 0) {
LAB_10035043c:
      _swift_bridgeObjectRelease(DVar15.unknown);
    }
    else {
      uVar23 = 0;
      FUN_100071370(local_100);
      if ((uVar23 & 1) == 0) goto LAB_10035043c;
      _swift_bridgeObjectRelease(DVar15.unknown);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar11 = objc_stub::FUN_100c112a0(uVar14,pNVar6);
      if (IVar11 == 0) {
        uStack_b8 = 0;
        local_c0 = (undefined *)0x0;
        lStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar11);
      }
      uStack_98 = uStack_b8;
      local_a0 = local_c0;
      local_88 = lStack_a8;
      uStack_90 = uStack_b0;
      if (lStack_a8 == 0) {
        FUN_100005808(&local_a0,&DAT_100fbe6f0,&DAT_100c42750);
      }
      else {
        p_Var16 = &local_d0;
        _Var24.unknown = (undefined *)&local_a0;
        _swift_dynamicCast(p_Var16,_Var24.unknown,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar5,6
                          );
        _Var17.unknown = _Stack_c8.unknown;
        if (((ulong)p_Var16 & 1) != 0) {
          if ((local_d0.unknown == (undefined *)0xd000000000000017) &&
             (local_120 == _Stack_c8.unknown)) {
            _swift_bridgeObjectRelease();
          }
          else {
            _Var24.unknown = _Stack_c8.unknown;
            bVar4 = Swift::_stringCompareWithSmolCheck
                              (local_d0,_Stack_c8,(_StringComparisonResult)0x17);
            _swift_bridgeObjectRelease();
            if (!bVar4) goto LAB_10035044c;
          }
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique
                    ((ContiguousArray)_Var17.unknown);
                    /* WARNING: Load size is inaccurate */
          oldCount.unknown = local_78.unknown[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)oldCount.unknown,(ContiguousArray)_Var24.unknown);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,uVar14);
          Swift::ContiguousArray::__endMutation(oldCount);
        }
      }
    }
LAB_10035044c:
    _Var2.unknown = local_78.unknown;
    uVar29 = uVar29 + 1;
  } while (lVar25 != _Var30);
  if (((long)local_78.unknown < 0) || (((ulong)local_78.unknown >> 0x3e & 1) != 0)) {
    _Var26 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)local_78.unknown);
  }
  else {
    _Var26 = *(__int64 *)(local_78.unknown + 0x10);
  }
  uVar29 = local_f0;
  if (_Var26 == 0) {
    _swift_release(_Var2.unknown);
    if (uVar29 == 0) {
      if (*(long *)((long)local_d8 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100350d0c);
        (*pcVar3)();
      }
      puVar5 = *(undefined **)(_Var10.unknown + 0x20);
    }
    else {
      puVar5 = (undefined *)0x0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var10);
    }
    local_a0 = puVar5;
    if (_Var30 != 1) {
      lVar25 = 5;
      do {
        puVar12 = (undefined *)(lVar25 + -4);
        if (uVar29 == 0) {
          if (*(undefined **)((long)local_d8 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100350cbc);
            (*pcVar3)();
          }
          puVar21 = *(undefined **)(_Var10.unknown + lVar25 * 8);
        }
        else {
          puVar21 = puVar12;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar12,_Var10);
        }
        lVar27 = lVar25 + -3;
        if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100350c94);
          (*pcVar3)();
        }
        ppuVar22 = &local_a0;
        local_c0 = puVar21;
        FUN_10034fd60(ppuVar22,&local_c0,local_f8);
        if (((ulong)ppuVar22 & 1) != 0) {
          puVar5 = puVar21;
          local_a0 = puVar21;
        }
        lVar25 = lVar25 + 1;
      } while (lVar27 != _Var30);
    }
  }
  else {
    if (((ulong)_Var2.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(_Var2.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100350cf8);
        (*pcVar3)();
      }
      puVar5 = *(undefined **)(_Var2.unknown + 0x20);
    }
    else {
      puVar5 = (undefined *)0x0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var2);
    }
    local_a0 = puVar5;
    if (_Var26 != 1) {
      lVar25 = 5;
      do {
        puVar12 = (undefined *)(lVar25 + -4);
        if (((ulong)_Var2.unknown & 0xc000000000000001) == 0) {
          if (*(undefined **)(_Var2.unknown + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100350cb8);
            (*pcVar3)();
          }
          puVar21 = *(undefined **)(_Var2.unknown + lVar25 * 8);
        }
        else {
          puVar21 = puVar12;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar12,_Var2);
        }
        lVar27 = lVar25 + -3;
        if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100350c54);
          (*pcVar3)();
        }
        ppuVar22 = &local_a0;
        local_c0 = puVar21;
        FUN_10034fd60(ppuVar22,&local_c0,local_f8);
        if (((ulong)ppuVar22 & 1) != 0) {
          puVar5 = puVar21;
          local_a0 = puVar21;
        }
        lVar25 = lVar25 + 1;
      } while (lVar27 != _Var26);
    }
    _swift_release(_Var2.unknown);
  }
  _Var17.unknown = puVar5;
  _Var24.unknown = local_100;
  FUN_10034ce30(puVar5,local_100,(ulong)local_108 | 0x8000000000000000);
  if (_Var24.unknown == (undefined *)0x0) {
LAB_1003507ec:
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setValue_forKey_((ID)puVar5,pNVar6,pNVar20);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setValue_forKey_((ID)puVar5,0,pNVar6);
    lVar25 = 1;
  }
  else if ((_Var17.unknown == (undefined *)0xd000000000000017) && (_Var24.unknown == local_120)) {
    _swift_bridgeObjectRelease(_Var24.unknown);
    lVar25 = 0;
  }
  else {
    bVar4 = Swift::_stringCompareWithSmolCheck(_Var17,_Var24,(_StringComparisonResult)0x17);
    _swift_bridgeObjectRelease(_Var24.unknown);
    if (!bVar4) goto LAB_1003507ec;
    lVar25 = 0;
  }
  uVar29 = 0xd000000000000010;
  puVar12 = puVar5;
  FUN_10034ce30(puVar5,0xd000000000000010,0x8000000100da2b50);
  if (uVar29 == 0) {
LAB_1003508d0:
    pCVar18 = (CKRecordZoneID *)0x0;
    FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
    SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    zoneName.bridgeObject = &DAT_e500000000000000;
    zoneName.str = (char *)0x6574736150;
    pCVar19 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(pCVar18,zoneName,SVar31);
    puVar12 = &_OBJC_CLASS___CKRecordZone;
    _objc_allocWithZone();
    IVar11 = objc_stub::initWithZoneID_((ID)puVar12,pCVar19);
    IVar11 = objc_stub::zoneID(IVar11);
    pNVar6 = (NSString *)objc_stub::zoneName(IVar11);
    if (pNVar6 == (NSString *)0x0) {
      SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
    }
    pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setValue_forKey_((ID)puVar5,pNVar6,pNVar20);
    lVar25 = lVar25 + 1;
  }
  else {
    _swift_bridgeObjectRelease(uVar29);
    uVar14 = (ulong)puVar12 & 0xffffffffffff;
    if ((uVar29 & 0x2000000000000000) != 0) {
      uVar14 = uVar29 >> 0x38 & 0xf;
    }
    if (uVar14 == 0) goto LAB_1003508d0;
  }
  uVar29 = 0xd000000000000015;
  puVar12 = puVar5;
  FUN_10034ce30(puVar5,0xd000000000000015,0x8000000100da2b70);
  if (uVar29 != 0) {
    _swift_bridgeObjectRelease(uVar29);
    uVar14 = (ulong)puVar12 & 0xffffffffffff;
    if ((uVar29 & 0x2000000000000000) != 0) {
      uVar14 = uVar29 >> 0x38 & 0xf;
    }
    if (uVar14 != 0) goto LAB_100350afc;
  }
  pCVar18 = (CKRecordZoneID *)0x0;
  FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  zoneName_00.bridgeObject = &DAT_e500000000000000;
  zoneName_00.str = (char *)0x6574736150;
  pCVar19 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(pCVar18,zoneName_00,SVar31)
  ;
  puVar12 = &_OBJC_CLASS___CKRecordZone;
  _objc_allocWithZone();
  IVar11 = objc_stub::initWithZoneID_((ID)puVar12,pCVar19);
  IVar11 = objc_stub::zoneID(IVar11);
  pNVar6 = (NSString *)objc_stub::ownerName(IVar11);
  if (pNVar6 == (NSString *)0x0) {
    SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
  }
  pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_((ID)puVar5,pNVar6,pNVar20);
  lVar25 = lVar25 + 1;
LAB_100350afc:
  uVar29 = local_f0;
  IVar11 = local_f8;
  lVar27 = 4;
  do {
    puVar12 = (undefined *)(lVar27 + -4);
    if (uVar29 == 0) {
      if (*(undefined **)((long)local_d8 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100350c50);
        (*pcVar3)();
      }
      puVar21 = *(undefined **)(_Var10.unknown + lVar27 * 8);
    }
    else {
      puVar21 = puVar12;
      Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar12,_Var10);
    }
    if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100350c4c);
      (*pcVar3)();
    }
    lVar28 = lVar27 + -3;
    if (puVar21 != puVar5) {
      objc_stub::deleteObject_(IVar11,puVar21);
      bVar4 = SCARRY8(lVar25,1);
      lVar25 = lVar25 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100350b84);
        (*pcVar3)();
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar28 != _Var30);
  _swift_bridgeObjectRelease(_Var10.unknown);
  return lVar25;
}



/* Address: 0x100350d0c | FUN_100350d0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100350d0c(_ArrayBuffer param_1,undefined8 param_2)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100350e64);
        (*pcVar3)();
      }
      uVar4 = *(ulong *)(param_1.unknown + 0x20);
    }
    else {
      uVar4 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
    }
    if (lVar7 != 1) {
      lVar9 = 5;
      local_68 = uVar4;
      do {
        uVar8 = lVar9 - 4;
        if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100350e10);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_1.unknown + lVar9 * 8);
        }
        else {
          uVar5 = uVar8;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
        }
        lVar1 = lVar9 + -3;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100350e0c);
          (*pcVar3)();
        }
        puVar6 = &local_68;
        local_70 = uVar5;
        FUN_10034fd60(puVar6,&local_70,param_2);
        if (((ulong)puVar6 & 1) != 0) {
          uVar4 = uVar5;
          local_68 = uVar5;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar7);
    }
  }
  return uVar4;
}



/* Address: 0x100350e64 | FUN_100350e64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100350e64(ID param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong self;
  ContiguousArray CVar5;
  long lVar6;
  _CocoaArrayWrapper _Var7;
  undefined *puVar8;
  __int64 _Var9;
  ContiguousArray CVar10;
  undefined *extraout_x1;
  uint uVar11;
  ulong uVar12;
  _CocoaArrayWrapper _Var13;
  long lVar14;
  _ArrayBuffer _Var15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long local_a0;
  long local_90;
  undefined *local_68;
  
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  local_90 = 0;
  local_a0 = 0;
  lVar14 = 0;
joined_r0x000100350f98:
  do {
    while (uVar17 == 0) {
      bVar3 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003511b0);
        (*pcVar2)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
        _swift_release(param_2);
        return local_90;
      }
      uVar17 = ((ulong *)(param_2 + 0x40))[lVar14];
    }
    uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 - 1 & uVar17;
    _Var15.unknown =
         *(undefined **)
          (*(long *)(param_2 + 0x38) + LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) * 8 + lVar14 * 0x200
          );
    if ((ulong)_Var15.unknown >> 0x3e != 0) goto LAB_100351118;
    uVar16 = *(ulong *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
  } while (uVar16 < 2);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRetain(_Var15.unknown);
  goto LAB_100351004;
LAB_100351118:
  _Var13.unknown = _Var15.unknown & 0xffffffffffffff8;
  if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
    _Var13.unknown = _Var15.unknown;
  }
  _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
  if (1 < _Var9) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
    _swift_bridgeObjectRetain(_Var15.unknown);
    _Var13.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar16 != 0) {
LAB_100351004:
      uVar19 = 0;
      do {
        if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1003511ac);
            (*pcVar2)();
          }
          self = *(ulong *)(_Var15.unknown + uVar19 * 8 + 0x20);
        }
        else {
          self = uVar19;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var15);
        }
        uVar1 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003511a8);
          (*pcVar2)();
        }
        CVar5.unknown = (undefined *)objc_stub::isDeleted(self);
        if ((int)CVar5.unknown == 0) {
          CVar10.unknown = extraout_x1;
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar5);
                    /* WARNING: Load size is inaccurate */
          CVar5.unknown = local_68[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar5.unknown,CVar10);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar5.unknown,self);
          Swift::ContiguousArray::__endMutation(CVar5);
        }
        uVar19 = uVar19 + 1;
        _Var13.unknown = local_68;
      } while (uVar1 != uVar16);
    }
    _swift_bridgeObjectRelease(_Var15.unknown);
    uVar11 = (uint)((ulong)_Var13.unknown >> 0x3e) & 1;
    if ((long)_Var13.unknown < 0) {
      uVar11 = 1;
    }
    if (uVar11 == 0) {
      lVar6 = *(long *)(_Var13.unknown + 0x10);
    }
    else {
      lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
    }
    if ((1 < lVar6) &&
       (_Var7.unknown = _Var13.unknown, FUN_100350d0c(_Var13.unknown,param_3),
       _Var7.unknown != (undefined *)0x0)) {
      if (uVar11 == 0) {
        puVar8 = *(undefined **)(_Var13.unknown + 0x10);
      }
      else {
        puVar8 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
      }
      if (puVar8 != (undefined *)0x0) {
        if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1003511b8);
          (*pcVar2)();
        }
        puVar18 = (undefined *)0x0;
        do {
          if (((ulong)_Var13.unknown & 0xc000000000000001) == 0) {
            puVar4 = *(undefined **)(_Var13.unknown + (long)puVar18 * 8 + 0x20);
          }
          else {
            puVar4 = puVar18;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar18,(_ArrayBuffer)_Var13.unknown)
            ;
          }
          if (puVar4 != _Var7.unknown) {
            objc_stub::deleteObject_(param_1,puVar4);
            bVar3 = SCARRY8(local_a0,1);
            local_90 = local_a0 + 1;
            local_a0 = local_90;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1003511b4);
              (*pcVar2)();
            }
          }
          puVar18 = puVar18 + 1;
        } while (puVar8 != puVar18);
        _swift_release(_Var13.unknown);
        goto joined_r0x000100350f98;
      }
    }
    _swift_release(_Var13.unknown);
  }
  goto joined_r0x000100350f98;
}



/* Address: 0x1003511b8 | FUN_1003511b8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

char * FUN_1003511b8(_ArrayBuffer param_1,undefined8 param_2,undefined8 param_3,undefined *param_4)

{
  long lVar1;
  ulong *puVar2;
  _CocoaArrayWrapper _Var3;
  char *pcVar4;
  long lVar5;
  ulong self;
  NSString *pNVar6;
  ID IVar7;
  char **ppcVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  void *pvVar12;
  void *pvVar13;
  long lVar14;
  ulong uVar15;
  char *pcVar16;
  ulong uVar17;
  long lVar18;
  char *pcVar19;
  code *pcVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  char *local_c0;
  void *pvStack_b8;
  char *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  char *local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  long local_78;
  
  pcVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c977c();
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar5 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var3.unknown = param_1.unknown;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (lVar5 != 0) {
    pcVar20 = (code *)0x0;
    lVar18 = 4;
    do {
      uVar17 = lVar18 - 4;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1003516bc);
          (*pcVar20)();
        }
        self = *(ulong *)(param_1.unknown + lVar18 * 8);
      }
      else {
        self = uVar17;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar17,param_1);
      }
      lVar1 = lVar18 + -3;
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1003516b0);
        (*pcVar20)();
      }
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = objc_stub::FUN_100c112a0(self,pNVar6);
      if (IVar7 == 0) {
        uStack_a8 = 0;
        local_b0 = (char *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar7);
      }
      pvStack_88 = (void *)uStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10035133c:
        pvVar13 = (void *)0xe000000000000000;
        pcVar16 = (char *)0x0;
      }
      else {
        ppcVar8 = &local_c0;
        param_4 = PTR___type_metadata_for_Swift_String_100eac208;
        _swift_dynamicCast(ppcVar8,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        pvVar13 = pvStack_b8;
        pcVar16 = local_c0;
        if (((ulong)ppcVar8 & 1) == 0) goto LAB_10035133c;
      }
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = objc_stub::FUN_100c112a0(self,pNVar6);
      if (IVar7 == 0) {
        uStack_a8 = 0;
        local_b0 = (char *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar7);
      }
      pvStack_88 = (void *)uStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
LAB_100351400:
        pvVar11 = (void *)0xe000000000000000;
        pcVar9 = (char *)0x0;
      }
      else {
        ppcVar8 = &local_c0;
        param_4 = PTR___type_metadata_for_Swift_String_100eac208;
        _swift_dynamicCast(ppcVar8,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        pvVar11 = pvStack_b8;
        pcVar9 = local_c0;
        if (((ulong)ppcVar8 & 1) == 0) goto LAB_100351400;
      }
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = objc_stub::FUN_100c112a0(self,pNVar6);
      if (IVar7 == 0) {
        uStack_a8 = 0;
        local_b0 = (char *)0x0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar7);
      }
      pvStack_88 = (void *)uStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        pcVar10 = "NF\v";
        FUN_100005808(&local_90,&DAT_100fbe6f0);
LAB_1003514b8:
        pvVar12 = (void *)0xe000000000000000;
        pcVar19 = (char *)0x0;
      }
      else {
        ppcVar8 = &local_c0;
        pcVar10 = PTR___type_metadata_for_Any_100eae0c0 + 8;
        param_4 = PTR___type_metadata_for_Swift_String_100eac208;
        _swift_dynamicCast(ppcVar8,&local_90,pcVar10,PTR___type_metadata_for_Swift_String_100eac208,
                           6);
        pvVar12 = pvStack_b8;
        pcVar19 = local_c0;
        if (((ulong)ppcVar8 & 1) == 0) goto LAB_1003514b8;
      }
      SVar21.bridgeObject = (void *)0xe100000000000000;
      SVar21.str = (char *)0x7c;
      SVar25.bridgeObject = param_4;
      SVar25.str = pcVar10;
      local_90 = pcVar16;
      pvStack_88 = pvVar13;
      Swift::String::append(SVar21,SVar25);
      SVar22.bridgeObject = pvVar11;
      SVar22.str = pcVar9;
      SVar26.bridgeObject = param_4;
      SVar26.str = pcVar10;
      Swift::String::append(SVar22,SVar26);
      _swift_bridgeObjectRelease(pvVar11);
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = (char *)0x7c;
      SVar27.bridgeObject = param_4;
      SVar27.str = pcVar10;
      Swift::String::append(SVar23,SVar27);
      SVar24.bridgeObject = pvVar12;
      SVar24.str = pcVar19;
      SVar28.bridgeObject = param_4;
      SVar28.str = pcVar10;
      Swift::String::append(SVar24,SVar28);
      _swift_bridgeObjectRelease(pvVar12);
      FUN_100004550(pcVar20,0);
      pvVar13 = pvStack_88;
      pcVar16 = local_90;
      pcVar9 = pcVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      pcVar10 = pcVar16;
      pvVar11 = pvVar13;
      local_90 = pcVar4;
      FUN_100071370();
      uVar17 = (ulong)~(uint)pvVar11 & 1;
      lVar14 = *(long *)(pcVar4 + 0x10) + uVar17;
      if (SCARRY8(*(long *)(pcVar4 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1003516b4);
        (*pcVar20)();
      }
      if (*(long *)(pcVar4 + 0x18) < lVar14) {
        FUN_10031db58(lVar14,pcVar9);
        pcVar4 = local_90;
        pcVar10 = pcVar16;
        pvVar12 = pvVar13;
        FUN_100071370();
        if (((uint)pvVar11 & 1) != ((uint)pvVar12 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10035170c);
          (*pcVar20)();
        }
      }
      else if (((ulong)pcVar9 & 1) == 0) {
        FUN_10031cb94();
        pcVar4 = local_90;
      }
      if (((ulong)pvVar11 & 1) == 0) {
        *(ulong *)(pcVar4 + ((ulong)pcVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(pcVar4 + ((ulong)pcVar10 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar10 & 0x3f);
        puVar2 = (ulong *)(*(long *)(pcVar4 + 0x30) + (long)pcVar10 * 0x10);
        *puVar2 = (ulong)pcVar16;
        puVar2[1] = (ulong)pvVar13;
        *(undefined **)(*(long *)(pcVar4 + 0x38) + (long)pcVar10 * 8) =
             PTR___swiftEmptyArrayStorage_100eae0d8;
        if (SCARRY8(*(long *)(pcVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1003516b8);
          (*pcVar20)();
        }
        *(long *)(pcVar4 + 0x10) = *(long *)(pcVar4 + 0x10) + 1;
        _swift_bridgeObjectRetain(pvVar13);
      }
      lVar14 = *(long *)(pcVar4 + 0x38);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar15 = *(ulong *)(lVar14 + (long)pcVar10 * 8) & 0xffffffffffffff8;
      uVar17 = *(ulong *)(uVar15 + 0x10);
      uVar15 = *(ulong *)(uVar15 + 0x18);
      if (uVar15 >> 1 <= uVar17) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar15,uVar17 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar17,self);
      _swift_bridgeObjectRelease(pvVar13);
      lVar18 = lVar18 + 1;
      pcVar20 = thunk_FUN_1002f3d84;
    } while (lVar1 != lVar5);
  }
  return pcVar4;
}



/* Address: 0x10035170c | FUN_10035170c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035170c(_ArrayBuffer param_1)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  bool bVar4;
  ulong self;
  ID IVar5;
  URL UVar6;
  _StringGuts _Var7;
  long extraout_x8;
  code *pcVar8;
  ulong uVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_a0 [8];
  ulong local_98;
  _ArrayBuffer local_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  undefined *puStack_70;
  ID local_68;
  
  puStack_70 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_78 = *(long *)(puStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    local_88 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    local_88 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (local_88 == 0) {
    self = 0;
  }
  else {
    local_80 = (ulong)param_1.unknown & 0xc000000000000001;
    if (local_80 == 0) {
      if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1003519b4);
        (*pcVar8)();
      }
      self = *(ulong *)(param_1.unknown + 0x20);
    }
    else {
      self = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
    }
    if (local_88 != 1) {
      local_98 = (ulong)param_1.unknown & 0xffffffffffffff8;
      uVar9 = 1;
      local_90.unknown = param_1.unknown;
      local_68 = self;
      do {
        while( true ) {
          if (local_80 == 0) {
            if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10035195c);
              (*pcVar8)();
            }
            if (*(ulong *)(local_98 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100351960);
              (*pcVar8)();
            }
            self = *(ulong *)(local_90.unknown + uVar9 * 8 + 0x20);
          }
          else {
            self = uVar9;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar9,local_90);
          }
          uVar1 = uVar9 + 1;
          if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100351958);
            (*pcVar8)();
          }
          IVar5 = objc_stub::objectID(self);
          UVar6.unknown = (undefined *)objc_stub::URIRepresentation(IVar5);
          Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
          SVar10 = Foundation::URL::get_absoluteString((URL)0x0);
          puVar3 = puStack_70;
          _Var7.unknown = SVar10.bridgeObject;
          pcVar8 = *(code **)(local_78 + 8);
          (*pcVar8)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_70);
          IVar5 = objc_stub::objectID(local_68);
          UVar6.unknown = (undefined *)objc_stub::URIRepresentation(IVar5);
          Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
          SVar11 = Foundation::URL::get_absoluteString((URL)0x0);
          (*pcVar8)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puVar3);
          if (SVar10 != SVar11) break;
          _swift_bridgeObjectRelease(_Var7.unknown);
          _swift_bridgeObjectRelease(SVar11.bridgeObject);
LAB_1003517dc:
          uVar9 = uVar9 + 1;
          if (uVar1 == local_88) {
            return local_68;
          }
        }
        bVar4 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar10.str,_Var7,(_StringComparisonResult)(__int8)SVar11.str
                          );
        _swift_bridgeObjectRelease(_Var7.unknown);
        _swift_bridgeObjectRelease(SVar11.bridgeObject);
        if (!bVar4) goto LAB_1003517dc;
        uVar9 = uVar1;
        local_68 = self;
      } while (uVar1 != local_88);
    }
  }
  return self;
}



/* Address: 0x1003519b4 | FUN_1003519b4 */

undefined * FUN_1003519b4(undefined *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar5 = &local_80;
  lVar7 = 0x4d676e69646e6570;
  FUN_10034ce30(param_1,0x4d676e69646e6570,0xef73676e69707061);
  if (lVar7 == 0) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  local_80 = 0x2c;
  uStack_78 = 0xe100000000000000;
  local_70 = param_1;
  lStack_68 = lVar7;
  FUN_10030cce0();
  (extension_Foundation)::Swift::StringProtocol::_components
            (&local_80,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,param_1,param_1);
  _swift_bridgeObjectRelease(lVar7);
  uVar10 = 0;
  uVar11 = *(ulong *)((long)puVar5 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    puVar8 = (ulong *)((long)puVar5 + uVar10 * 0x10 + 0x28);
    do {
      if (uVar11 == uVar10) {
        _swift_bridgeObjectRelease(puVar5);
        return puVar9;
      }
      if (*(ulong *)((long)puVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100351b3c);
        (*pcVar4)();
      }
      uVar1 = puVar8[-1];
      uVar3 = *puVar8;
      puVar8 = puVar8 + 2;
      uVar10 = uVar10 + 1;
      uVar2 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar2 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar2 == 0);
    _swift_bridgeObjectRetain(uVar3);
    puVar6 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    local_70 = puVar9;
    if (((ulong)puVar6 & 1) == 0) {
      FUN_1003075b8(0,*(long *)(puVar9 + 0x10) + 1,1);
    }
    uVar2 = *(ulong *)(local_70 + 0x10);
    if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar2) {
      FUN_1003075b8(1 < *(ulong *)(local_70 + 0x18),uVar2 + 1,1);
    }
    *(ulong *)(local_70 + 0x10) = uVar2 + 1;
    *(ulong *)(local_70 + uVar2 * 0x10 + 0x20) = uVar1;
    *(ulong *)(local_70 + uVar2 * 0x10 + 0x28) = uVar3;
    puVar9 = local_70;
  } while( true );
}



/* Address: 0x100351b3c | FUN_100351b3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100352248) */

void FUN_100351b3c(ID param_1,_ArrayBuffer param_2)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  undefined8 *****pppppuVar3;
  undefined8 *****pppppuVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *****pppppuVar7;
  code *pcVar8;
  bool bVar9;
  CKRecord *this;
  ID IVar10;
  ulong self;
  NSString *pNVar11;
  ID IVar12;
  Data *pDVar13;
  undefined *puVar14;
  NSData *pNVar15;
  ID IVar16;
  long lVar17;
  undefined8 ******ppppppuVar18;
  undefined8 ******ppppppuVar19;
  NSString *pNVar20;
  CKRecordID *recordID;
  CKRecord *self_00;
  ID IVar21;
  Data DVar22;
  ulong uVar23;
  undefined8 extraout_x1;
  undefined8 uVar24;
  uint uVar25;
  undefined8 ******ppppppuVar26;
  undefined8 *puVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *****pppppuVar30;
  String SVar31;
  Data local_d0;
  ulong uStack_c8;
  undefined8 *****local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 *****local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar23 = 0xd000000000000012;
  IVar21 = param_1;
  FUN_10034fc48(param_1,0xd000000000000012,0x8000000100da2b90);
  if (0xe < uVar23 >> 0x3c) goto LAB_10035220c;
  this = (CKRecord *)0x0;
  FUN_10000ec2c(0,&DAT_100fc0458,&PTR__OBJC_CLASS___CKRecord_100f8dbc8);
  FUN_10038eecc(IVar21,uVar23);
  if (IVar21 == 0) goto LAB_10035220c;
  IVar12 = param_1;
  FUN_1003519b4();
  IVar10 = IVar12;
  FUN_10036be78();
  _swift_bridgeObjectRelease(IVar12);
  if ((ulong)param_2.unknown >> 0x3e == 0) {
    uVar23 = *(ulong *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
    if (uVar23 == 0) goto LAB_100352000;
LAB_100351c14:
    uVar29 = 0;
    puVar14 = PTR___type_metadata_for_Any_100eae0c0;
    do {
      while( true ) {
        if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100351fe8);
            (*pcVar8)();
          }
          self = *(ulong *)(param_2.unknown + uVar29 * 8 + 0x20);
        }
        else {
          self = uVar29;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar29,param_2);
        }
        bVar9 = SCARRY8(uVar29,1);
        uVar29 = uVar29 + 1;
        if (bVar9) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100351fe4);
          (*pcVar8)();
        }
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar12 = objc_stub::FUN_100c112a0(self,pNVar11);
        if (IVar12 == 0) {
          uStack_88 = 0;
          local_90 = (undefined8 ******)0x0;
          lStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar12);
        }
        uStack_b8 = uStack_88;
        local_c0 = local_90;
        local_a8 = lStack_78;
        local_b0 = uStack_80;
        if (lStack_78 != 0) break;
        FUN_100005808(&local_c0,&DAT_100fbe6f0,&DAT_100c42750);
LAB_100351c60:
        if (uVar29 == uVar23) goto LAB_100351f80;
      }
      pDVar13 = &local_d0;
      _swift_dynamicCast(pDVar13,&local_c0,puVar14 + 8,
                         PTR___type_metadata_for_Foundation_Data_100ea7300,6);
      uVar6 = uStack_c8;
      DVar22.unknown = local_d0.unknown;
      if (((ulong)pDVar13 & 1) == 0) goto LAB_100351c60;
      uVar5 = (uint)(uStack_c8 >> 0x20);
      uVar25 = uVar5 >> 0x1e;
      if (uVar5 >> 0x1e < 2) {
        if (uVar25 == 0) {
          if ((uStack_c8 & 0xff000000000000) == 0) {
LAB_100351ea8:
            FUN_10003bf2c(local_d0.unknown,uStack_c8);
            goto LAB_100351f70;
          }
        }
        else if ((long)(int)local_d0.unknown == (long)local_d0.unknown >> 0x20) goto LAB_100351ea8;
LAB_100351d50:
        puVar14 = &_OBJC_CLASS___NSKeyedUnarchiver;
        _objc_allocWithZone();
        FUN_1001037b4(DVar22.unknown,uVar6);
        pNVar15 = Foundation::Data::_bridgeToObjectiveC(DVar22);
        local_c0 = (undefined8 ******)0x0;
        IVar12 = objc_stub::initForReadingFromData_error_((ID)puVar14,pNVar15,&local_c0);
        ppppppuVar26 = (undefined8 ******)local_c0;
        if (IVar12 == 0) {
          FUN_10003bf2c(DVar22.unknown,uVar6);
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_10003bf2c(DVar22.unknown,uVar6);
          _swift_errorRelease(ppppppuVar26);
        }
        else {
          FUN_10003bf2c(DVar22.unknown,uVar6);
          objc_stub::setRequiresSecureCoding_(IVar12,1);
          puVar14 = &_OBJC_CLASS___CKRecord;
          _objc_allocWithZone();
          IVar16 = objc_stub::initWithCoder_((ID)puVar14,IVar12);
          if (IVar16 == 0) {
            FUN_10003bf2c(DVar22.unknown,uVar6);
          }
          else {
            objc_stub::finishDecoding(IVar12);
            FUN_10003bf2c(DVar22.unknown,uVar6);
            FUN_1003519b4();
            FUN_10036c298();
            lVar28 = *(long *)(self + 0x10);
            if (lVar28 != 0) {
              puVar27 = (undefined8 *)(self + 0x28);
              do {
                lVar2 = puVar27[-1];
                uVar24 = *puVar27;
                _swift_bridgeObjectRetain(uVar24);
                lVar17 = lVar2;
                ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                          (lVar2,uVar24);
                if (lVar17 == 0) {
                  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                            (lVar2,uVar24);
                  ___extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue_
                            ();
                }
                else {
                  _swift_bridgeObjectRelease(uVar24);
                  _swift_unknownObjectRelease(lVar17);
                }
                puVar27 = puVar27 + 2;
                lVar28 = lVar28 + -1;
              } while (lVar28 != 0);
            }
            _swift_bridgeObjectRelease(self);
          }
        }
      }
      else {
        if (uVar25 == 2) {
          if (*(long *)(local_d0.unknown + 0x10) == *(long *)(local_d0.unknown + 0x18))
          goto LAB_100351ea8;
          goto LAB_100351d50;
        }
        FUN_10003bf2c(local_d0.unknown,uStack_c8);
      }
LAB_100351f70:
      puVar14 = PTR___type_metadata_for_Any_100eae0c0;
    } while (uVar29 != uVar23);
LAB_100351f80:
    ppppppuVar26 = *(undefined8 *******)(IVar10 + 0x10);
    ppppppuVar18 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = param_2.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
      _Var1.unknown = param_2.unknown;
    }
    uVar23 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    if (uVar23 != 0) goto LAB_100351c14;
LAB_100352000:
    ppppppuVar26 = *(undefined8 *******)(IVar10 + 0x10);
    ppppppuVar18 = (undefined8 ******)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = (undefined *)ppppppuVar18;
  if (ppppppuVar26 != (undefined8 ******)0x0) {
    _swift_bridgeObjectRetain(IVar10);
    ppppppuVar18 = ppppppuVar26;
    FUN_10036433c(ppppppuVar26,0);
    ppppppuVar19 = &local_c0;
    FUN_100370d3c(ppppppuVar19,ppppppuVar18 + 4,ppppppuVar26,IVar10);
    FUN_10000c650(local_c0,uStack_b8,local_b0,local_a8,local_a0);
    if (ppppppuVar19 != ppppppuVar26) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100351fe0);
      (*pcVar8)();
    }
  }
  local_c0 = ppppppuVar18;
  FUN_100310608(&local_c0);
  pppppuVar7 = local_c0;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  FUN_100310704();
  SVar31.bridgeObject = (void *)0xe100000000000000;
  SVar31.str = (char *)0x2c;
  SVar31 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar31);
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  pNVar20 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_(param_1,pNVar11,pNVar20);
  SVar31 = (extension_CloudKit)::__C::CKRecord::get_recordType((CKRecord *)0x0);
  recordID = (CKRecordID *)objc_stub::recordID(IVar21);
  self_00 = (extension_CloudKit)::__C::CKRecord::__allocating_init(this,SVar31,recordID);
  pppppuVar30 = (undefined8 *****)pppppuVar7[2];
  if (pppppuVar30 != (undefined8 *****)0x0) {
    ppppppuVar26 = (undefined8 ******)(pppppuVar7 + 5);
    do {
      pppppuVar3 = ppppppuVar26[-1];
      pppppuVar4 = *ppppppuVar26;
      _swift_bridgeObjectRetain(pppppuVar4);
      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                (pppppuVar3,pppppuVar4);
      ___extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue_
                ();
      ppppppuVar26 = ppppppuVar26 + 2;
      pppppuVar30 = (undefined8 *****)((long)pppppuVar30 + -1);
    } while (pppppuVar30 != (undefined8 *****)0x0);
  }
  _swift_release(pppppuVar7);
  puVar14 = &_OBJC_CLASS___NSKeyedArchiver;
  _objc_allocWithZone();
  IVar21 = objc_stub::FUN_100c039c0((ID)puVar14,1);
  objc_stub::FUN_100c019e0((ID)self_00,IVar21);
  objc_stub::FUN_100c02680(IVar21);
  DVar22.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar21);
  uVar24 = extraout_x1;
  DVar22 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar22);
  pNVar15 = Foundation::Data::_bridgeToObjectiveC(DVar22);
  FUN_10003bf2c(DVar22.unknown,uVar24);
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_(param_1,pNVar15,pNVar11);
  _swift_bridgeObjectRelease(IVar10);
LAB_10035220c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100352254 | FUN_100352254 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100352254(ID param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  ContiguousArray CVar6;
  long lVar7;
  _CocoaArrayWrapper _Var8;
  __int64 _Var9;
  _CocoaArrayWrapper _Var10;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *puVar15;
  _CocoaArrayWrapper _Var16;
  _ArrayBuffer _Var17;
  ContiguousArray CVar18;
  undefined *puVar19;
  long local_98;
  long local_90;
  undefined *local_68;
  
  _Var10.unknown = (undefined *)0x52557463656a626f;
  FUN_10034caf0(param_2,0x52557463656a626f,0xe900000000000049);
  local_98 = 0;
  local_90 = 0;
  lVar14 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_2 + 0x40);
joined_r0x00010035243c:
  do {
    while (uVar13 == 0) {
      bVar4 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10035267c);
        (*pcVar3)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
        _swift_release(param_2);
        return local_90;
      }
      uVar13 = ((ulong *)(param_2 + 0x40))[lVar14];
    }
    uVar2 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    uVar13 = uVar13 - 1 & uVar13;
    _Var17.unknown =
         *(undefined **)
          (*(long *)(param_2 + 0x38) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 + lVar14 * 0x200);
    if ((ulong)_Var17.unknown >> 0x3e != 0) goto LAB_1003525dc;
    puVar15 = *(undefined **)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10);
  } while (puVar15 < (undefined *)0x2);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRetain(_Var17.unknown);
  goto LAB_1003524ac;
LAB_1003525dc:
  _Var16.unknown = _Var17.unknown & 0xffffffffffffff8;
  if ((undefined *)0x7fffffffffffffff < _Var17.unknown) {
    _Var16.unknown = _Var17.unknown;
  }
  _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var16);
  if (1 < _Var9) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar15 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var16);
    _swift_bridgeObjectRetain(_Var17.unknown);
    _Var16.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar15 != (undefined *)0x0) {
LAB_1003524ac:
      puVar19 = (undefined *)0x0;
      do {
        if (((ulong)_Var17.unknown & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)_Var17.unknown & 0xffffffffffffff8) + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100352678);
            (*pcVar3)();
          }
          puVar5 = *(undefined **)(_Var17.unknown + (long)puVar19 * 8 + 0x20);
        }
        else {
          puVar5 = puVar19;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar19,_Var17);
        }
        puVar1 = puVar19 + 1;
        if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100352674);
          (*pcVar3)();
        }
        CVar6.unknown = (undefined *)objc_stub::isDeleted(puVar5);
        _Var10.unknown = extraout_x1_00;
        if (((ulong)CVar6.unknown & 1) == 0) {
          CVar18.unknown = extraout_x1_00;
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar6);
                    /* WARNING: Load size is inaccurate */
          CVar6.unknown = local_68[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar6.unknown,CVar18);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
          Swift::ContiguousArray::__endMutation(CVar6);
          _Var10.unknown = puVar5;
        }
        puVar19 = puVar19 + 1;
        _Var16.unknown = local_68;
      } while (puVar1 != puVar15);
    }
    _swift_bridgeObjectRelease(_Var17.unknown);
    uVar11 = (uint)((ulong)_Var16.unknown >> 0x3e) & 1;
    if ((long)_Var16.unknown < 0) {
      uVar11 = 1;
    }
    if (uVar11 == 1) {
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var16);
    }
    else {
      lVar7 = *(long *)(_Var16.unknown + 0x10);
    }
    if ((1 < lVar7) &&
       (_Var8.unknown = _Var16.unknown, FUN_10035170c(),
       puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8, _Var8.unknown != (undefined *)0x0)) {
      if (uVar11 == 0) {
        puVar19 = *(undefined **)(_Var16.unknown + 0x10);
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        puVar19 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var16);
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      PTR___swiftEmptyArrayStorage_100eae0d8 = puVar5;
      if (puVar19 == (undefined *)0x0) {
        _Var10.unknown = puVar5;
        FUN_100351b3c(_Var8.unknown);
        _swift_release(puVar5);
      }
      else {
        puVar5 = (undefined *)0x0;
        do {
          if (((ulong)_Var16.unknown & 0xc000000000000001) == 0) {
            if (*(undefined **)(_Var16.unknown + 0x10) <= puVar5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100352684);
              (*pcVar3)();
            }
                    /* WARNING: Load size is inaccurate */
            CVar6.unknown = _Var16.unknown[(long)puVar5 * 8 + 0x20];
          }
          else {
            CVar6.unknown = puVar5;
            _Var10.unknown = _Var16.unknown;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar5,(_ArrayBuffer)_Var16.unknown);
          }
          puVar1 = puVar5 + 1;
          if (SCARRY8((long)puVar5,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100352680);
            (*pcVar3)();
          }
          if (CVar6.unknown != _Var8.unknown) {
            Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar6);
                    /* WARNING: Load size is inaccurate */
            CVar18.unknown = puVar15[0x10];
            Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                      ((__int64)CVar18.unknown,(ContiguousArray)_Var10.unknown);
            Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
            Swift::ContiguousArray::__endMutation(CVar18);
            _Var10.unknown = CVar6.unknown;
          }
          puVar5 = puVar5 + 1;
        } while (puVar1 != puVar19);
        _Var10.unknown = puVar15;
        FUN_100351b3c(_Var8.unknown);
        _swift_release(puVar15);
        if ((long)puVar19 < 1) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10035268c);
          (*pcVar3)();
        }
        puVar15 = (undefined *)0x0;
        do {
          if (((ulong)_Var16.unknown & 0xc000000000000001) == 0) {
            puVar5 = *(undefined **)(_Var16.unknown + (long)puVar15 * 8 + 0x20);
          }
          else {
            puVar5 = puVar15;
            _Var10.unknown = _Var16.unknown;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar15,(_ArrayBuffer)_Var16.unknown)
            ;
          }
          if (puVar5 != _Var8.unknown) {
            objc_stub::deleteObject_(param_1,puVar5);
            bVar4 = SCARRY8(local_98,1);
            local_90 = local_98 + 1;
            _Var10.unknown = extraout_x1;
            local_98 = local_90;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100352688);
              (*pcVar3)();
            }
          }
          puVar15 = puVar15 + 1;
        } while (puVar19 != puVar15);
      }
    }
    _swift_release(_Var16.unknown);
  }
  goto joined_r0x00010035243c;
}



/* Address: 0x10035268c | FUN_10035268c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100352804) */

void FUN_10035268c(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  NSString *pNVar5;
  _ArrayBuffer self;
  undefined *puVar6;
  ID IVar7;
  NSArray *pNVar8;
  undefined *self_00;
  ulong *puVar9;
  Data DVar10;
  undefined *puVar11;
  NSData *pNVar12;
  ID IVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined *local_f0;
  ulong local_d0;
  ulong uStack_c8;
  undefined *local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar4,pNVar5);
  puVar4 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar6 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = objc_stub::FUN_100c04440((ID)puVar6,pNVar5,1);
  *(ID *)(puVar4 + 0x20) = IVar7;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar4);
  objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar8);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_c0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)self.unknown >> 0x3e == 0) {
    puVar4 = *(undefined **)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var1.unknown = self.unknown;
    }
    puVar4 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (puVar4 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(self.unknown);
    lVar18 = 0;
    local_f0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    if ((long)puVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100352d18);
      (*pcVar2)();
    }
    lVar18 = 0;
    puVar6 = (undefined *)0x0;
    local_f0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        self_00 = *(undefined **)(self.unknown + (long)puVar6 * 8 + 0x20);
      }
      else {
        self_00 = puVar6;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar6,self);
      }
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = objc_stub::FUN_100c112a0((ID)self_00,pNVar5);
      if (IVar7 == 0) {
        uStack_a8 = 0;
        local_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar7);
      }
      uStack_88 = uStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
        uVar16 = 0;
        uVar15 = 0;
      }
      else {
        puVar9 = &local_d0;
        _swift_dynamicCast(puVar9,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        bVar3 = (int)puVar9 == 0;
        uVar15 = uStack_c8;
        if (bVar3) {
          uVar15 = 0;
        }
        uVar16 = local_d0 & 0xffffffffffff;
        if (bVar3) {
          uVar16 = 0;
        }
      }
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar7 = objc_stub::FUN_100c112a0((ID)self_00,pNVar5);
      if (IVar7 == 0) {
        uStack_a8 = 0;
        local_b0 = 0;
        lStack_98 = 0;
        uStack_a0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar7);
      }
      uStack_88 = uStack_a8;
      local_90 = local_b0;
      local_78 = lStack_98;
      uStack_80 = uStack_a0;
      if (lStack_98 == 0) {
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
        uVar17 = 0;
        uVar19 = 0;
        if (uVar15 != 0) goto LAB_100352a48;
LAB_100352ba8:
        _swift_bridgeObjectRelease(uVar19);
LAB_100352bb0:
        objc_stub::deleteObject_(param_1,self_00);
        bVar3 = SCARRY8(lVar18,1);
        lVar18 = lVar18 + 1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100352c84);
          (*pcVar2)();
        }
      }
      else {
        puVar9 = &local_d0;
        _swift_dynamicCast(puVar9,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        bVar3 = (int)puVar9 == 0;
        uVar19 = uStack_c8;
        if (bVar3) {
          uVar19 = 0;
        }
        uVar17 = local_d0 & 0xffffffffffff;
        if (bVar3) {
          uVar17 = 0;
        }
        if (uVar15 == 0) goto LAB_100352ba8;
LAB_100352a48:
        _swift_bridgeObjectRelease(uVar15);
        if ((uVar15 & 0x2000000000000000) != 0) {
          uVar16 = uVar15 >> 0x38 & 0xf;
        }
        if (uVar16 == 0) goto LAB_100352ba8;
        if (uVar19 == 0) goto LAB_100352bb0;
        _swift_bridgeObjectRelease(uVar19);
        if ((uVar19 & 0x2000000000000000) != 0) {
          uVar17 = uVar19 >> 0x38 & 0xf;
        }
        if (uVar17 == 0) goto LAB_100352bb0;
        uVar15 = 0xd000000000000012;
        DVar10.unknown = self_00;
        FUN_10034fc48(self_00,0xd000000000000012,0x8000000100da2b90);
        if (0xe < uVar15 >> 0x3c) goto LAB_100352bb0;
        puVar11 = &_OBJC_CLASS___NSKeyedUnarchiver;
        _objc_allocWithZone();
        FUN_1001037b4(DVar10.unknown,uVar15);
        pNVar12 = Foundation::Data::_bridgeToObjectiveC(DVar10);
        local_90 = 0;
        IVar7 = objc_stub::initForReadingFromData_error_((ID)puVar11,pNVar12,&local_90);
        uVar14 = local_90;
        if (IVar7 == 0) {
          FUN_10003bf18(DVar10.unknown,uVar15);
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_10003bf18(DVar10.unknown,uVar15);
          _swift_errorRelease(uVar14);
          goto LAB_100352bb0;
        }
        FUN_10003bf18(DVar10.unknown,uVar15);
        objc_stub::setRequiresSecureCoding_(IVar7,1);
        puVar11 = &_OBJC_CLASS___CKRecord;
        _objc_allocWithZone();
        IVar13 = objc_stub::initWithCoder_((ID)puVar11,IVar7);
        if (IVar13 == 0) {
          FUN_10003bf18(DVar10.unknown,uVar15);
          goto LAB_100352bb0;
        }
        objc_stub::finishDecoding(IVar7);
        FUN_10003bf18(DVar10.unknown,uVar15);
        Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
        uVar15 = *(ulong *)(((ulong)local_c0 & 0xffffffffffffff8) + 0x10);
        uVar16 = *(ulong *)(((ulong)local_c0 & 0xffffffffffffff8) + 0x18);
        if (uVar16 >> 1 <= uVar15) {
          Swift::Array<undefined>::__createNewBuffer(1 < uVar16,uVar15 + 1,1);
        }
        Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar15,self_00);
        local_f0 = local_c0;
      }
      puVar6 = puVar6 + 1;
    } while (puVar4 != puVar6);
    _swift_bridgeObjectRelease(self.unknown);
  }
  FUN_100352254(param_1,local_f0);
  _swift_bridgeObjectRelease(local_f0);
  if (SCARRY8(lVar18,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100352d14);
    (*pcVar2)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(lVar18 + param_1);
  }
  return;
}



/* Address: 0x100352d1c | FUN_100352d1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100352d90) */

ID FUN_100352d1c(ID param_1)

{
  ID IVar1;
  ID self;
  undefined *self_00;
  ulong uVar2;
  
  uVar2 = 0x6365526572616873;
  FUN_10034fc48(param_1,0x6365526572616873,0xef6174614464726f);
  IVar1 = 0;
  if (uVar2 >> 0x3c < 0xf) {
    _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
    self = param_1;
    FUN_1003b09f8(param_1,uVar2);
    objc_stub::setRequiresSecureCoding_(self,1);
    self_00 = &_OBJC_CLASS___CKShare;
    _objc_allocWithZone();
    IVar1 = objc_stub::initWithCoder_((ID)self_00,self);
    objc_stub::finishDecoding(self);
    FUN_10003bf18(param_1,uVar2);
  }
  return IVar1;
}



/* Address: 0x100352e04 | FUN_100352e04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100352e04(ulong *param_1,ID param_2,long *param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  uVar3 = 0x6365526572616873;
  uVar2 = uVar4;
  FUN_10034ce30(uVar4,0x6365526572616873,0xef656d614e64726f);
  if (uVar3 != 0) {
    _swift_bridgeObjectRelease(uVar3);
    uVar2 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      uVar3 = 0xd000000000000010;
      uVar2 = uVar4;
      FUN_10034ce30(uVar4,0xd000000000000010,0x8000000100da2ca0);
      if (uVar3 != 0) {
        _swift_bridgeObjectRelease(uVar3);
        uVar2 = uVar2 & 0xffffffffffff;
        if ((uVar3 & 0x2000000000000000) != 0) {
          uVar2 = uVar3 >> 0x38 & 0xf;
        }
        if (uVar2 != 0) {
          uVar5 = 0x6f636552746f6f72;
          uVar2 = uVar4;
          uVar3 = uVar5;
          FUN_10034ce30(uVar4,0x6f636552746f6f72,0xee00656d614e6472);
          if (uVar3 != 0) {
            _swift_bridgeObjectRelease(uVar3);
            uVar2 = uVar2 & 0xffffffffffff;
            if ((uVar3 & 0x2000000000000000) != 0) {
              uVar2 = uVar3 >> 0x38 & 0xf;
            }
            if ((uVar2 != 0) &&
               (uVar2 = uVar4, FUN_10034ce30(uVar4,0x6f636552746f6f72,0xee00657079546472),
               uVar5 != 0)) {
              _swift_bridgeObjectRelease(uVar5);
              uVar2 = uVar2 & 0xffffffffffff;
              if ((uVar5 & 0x2000000000000000) != 0) {
                uVar2 = uVar5 >> 0x38 & 0xf;
              }
              if ((uVar2 != 0) && (uVar2 = uVar4, FUN_100352d1c(), uVar2 != 0)) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  objc_stub::deleteObject_(param_2,uVar4);
  if (!SCARRY8(*param_3,1)) {
    *param_3 = *param_3 + 1;
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100352fb4);
  (*pcVar1)();
}



/* Address: 0x100352fb4 | thunk_FUN_100353db4 */

String thunk_FUN_100353db4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined8 uStack_70;
  long alStack_68 [3];
  
  lVar7 = -0x2ffffffffffffff0;
  uVar3 = param_1;
  FUN_10034ce30(param_1,0xd000000000000010,0x8000000100da2ca0);
  uVar8 = 0x6365526572616873;
  uStack_70 = uVar3;
  alStack_68[0] = lVar7;
  FUN_10034ce30(param_1,0x6365526572616873,0xef656d614e64726f);
  lVar7 = 0;
  alStack_68[1] = param_1;
  alStack_68[2] = uVar8;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    plVar2 = alStack_68 + lVar7 * 2;
    do {
      plVar9 = plVar2;
      lVar7 = lVar7 + 1;
      if (lVar7 == 3) {
        puVar6 = &DAT_100fbf830;
        FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
        _swift_arrayDestroy(&uStack_70,2,puVar6);
        FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
        FUN_100310704();
        SVar12.bridgeObject = (void *)0xe100000000000000;
        SVar12.str = (char *)0x7c;
        SVar12 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar12);
        _swift_bridgeObjectRelease(puVar5);
        return SVar12;
      }
      lVar10 = *plVar9;
      plVar2 = plVar9 + 2;
    } while (lVar10 == 0);
    lVar11 = plVar9[-1];
    _swift_bridgeObjectRetain(lVar10);
    puVar6 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_10037f834(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_10037f834(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(long *)(puVar5 + uVar1 * 0x10 + 0x20) = lVar11;
    *(long *)(puVar5 + uVar1 * 0x10 + 0x28) = lVar10;
  } while( true );
}



/* Address: 0x100352fb8 | FUN_100352fb8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100352fb8(_ArrayBuffer param_1,code *param_2,undefined8 param_3)

{
  ulong *puVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  _ArrayBuffer _Var7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  pcVar3 = param_2;
  FUN_1003c977c();
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar13 != 0) {
    pcVar14 = (code *)0x0;
    lVar15 = 4;
    do {
      pcVar12 = (code *)(lVar15 + -4);
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(code **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= pcVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100353214);
          (*pcVar3)();
        }
        pcVar5 = *(code **)(param_1.unknown + lVar15 * 8);
        _Var7.unknown = pcVar3;
      }
      else {
        pcVar5 = pcVar12;
        _Var7.unknown = param_1.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pcVar12,param_1);
      }
      pcVar3 = pcVar5;
      if (SCARRY8((long)pcVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100353208);
        (*pcVar3)();
      }
      lVar16 = lVar15 + -3;
      pcVar12 = pcVar3;
      (*param_2)();
      FUN_100004550(pcVar14,0);
      puVar6 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      pcVar14 = pcVar12;
      pcVar5 = (code *)_Var7.unknown;
      FUN_100071370();
      uVar11 = (ulong)~(uint)pcVar5 & 1;
      lVar9 = *(long *)(puVar4 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar4 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10035320c);
        (*pcVar3)();
      }
      if (*(long *)(puVar4 + 0x18) < lVar9) {
        FUN_10031db58(lVar9,puVar6);
        pcVar14 = pcVar12;
        pcVar8 = (code *)_Var7.unknown;
        FUN_100071370();
        if (((uint)pcVar5 & 1) != ((uint)pcVar8 & 1)) {
          _swift_release(param_3);
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100353268);
          (*pcVar3)();
        }
      }
      else if (((ulong)puVar6 & 1) == 0) {
        FUN_10031cb94();
      }
      if (((ulong)pcVar5 & 1) == 0) {
        *(ulong *)(puVar4 + ((ulong)pcVar14 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar4 + ((ulong)pcVar14 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar14 & 0x3f);
        puVar1 = (ulong *)(*(long *)(puVar4 + 0x30) + (long)pcVar14 * 0x10);
        *puVar1 = (ulong)pcVar12;
        puVar1[1] = (ulong)_Var7.unknown;
        *(undefined **)(*(long *)(puVar4 + 0x38) + (long)pcVar14 * 8) =
             PTR___swiftEmptyArrayStorage_100eae0d8;
        if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100353210);
          (*pcVar3)();
        }
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        _swift_bridgeObjectRetain(_Var7.unknown);
      }
      lVar9 = *(long *)(puVar4 + 0x38);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar10 = *(ulong *)(lVar9 + (long)pcVar14 * 8) & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar10 + 0x10);
      uVar10 = *(ulong *)(uVar10 + 0x18);
      if (uVar10 >> 1 <= uVar11) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar10,uVar11 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar11);
      _swift_bridgeObjectRelease(_Var7.unknown);
      lVar15 = lVar15 + 1;
      pcVar14 = thunk_FUN_1002f3d84;
    } while (lVar16 != lVar13);
  }
  return puVar4;
}



/* Address: 0x100353268 | FUN_100353268 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100353268(ID param_1)

{
  ulong uVar1;
  code *pcVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  undefined8 *puVar6;
  URL UVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  String SVar16;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long local_d8 [5];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  String local_70;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::FUN_100c112a0(param_1,pNVar4);
  if (IVar5 == 0) {
    uStack_108 = 0;
    local_110 = (undefined *)0x0;
    lStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  puVar9 = PTR___type_metadata_for_Any_100eae0c0;
  uStack_e8 = uStack_108;
  local_f0 = local_110;
  local_d8[0] = lStack_f8;
  uStack_e0 = uStack_100;
  if (lStack_f8 == 0) {
    FUN_100005808(&local_f0,&DAT_100fbe6f0,&DAT_100c42750);
LAB_100353388:
    local_b0 = 0;
    uStack_a8 = 0;
  }
  else {
    puVar6 = &local_b0;
    _swift_dynamicCast(puVar6,&local_f0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)puVar6 & 1) == 0) goto LAB_100353388;
  }
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::FUN_100c112a0(param_1,pNVar4);
  if (IVar5 == 0) {
    uStack_108 = 0;
    local_110 = (undefined *)0x0;
    lStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  uStack_e8 = uStack_108;
  local_f0 = local_110;
  local_d8[0] = lStack_f8;
  uStack_e0 = uStack_100;
  if (lStack_f8 == 0) {
    FUN_100005808(&local_f0,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10035344c:
    local_a0 = 0;
    uStack_98 = 0;
  }
  else {
    puVar6 = &local_a0;
    _swift_dynamicCast(puVar6,&local_f0,puVar9 + 8,PTR___type_metadata_for_Swift_String_100eac208,6)
    ;
    if (((ulong)puVar6 & 1) == 0) goto LAB_10035344c;
  }
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::FUN_100c112a0(param_1,pNVar4);
  if (IVar5 == 0) {
    uStack_108 = 0;
    local_110 = (undefined *)0x0;
    lStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  uStack_e8 = uStack_108;
  local_f0 = local_110;
  local_d8[0] = lStack_f8;
  uStack_e0 = uStack_100;
  if (lStack_f8 == 0) {
    FUN_100005808(&local_f0,&DAT_100fbe6f0,&DAT_100c42750);
LAB_100353500:
    local_90 = 0;
    uStack_88 = 0;
  }
  else {
    puVar6 = &local_90;
    _swift_dynamicCast(puVar6,&local_f0,puVar9 + 8,PTR___type_metadata_for_Swift_String_100eac208,6)
    ;
    if (((ulong)puVar6 & 1) == 0) goto LAB_100353500;
  }
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar5 = objc_stub::FUN_100c112a0(param_1,pNVar4);
  if (IVar5 == 0) {
    uStack_108 = 0;
    local_110 = (undefined *)0x0;
    lStack_f8 = 0;
    uStack_100 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  uStack_e8 = uStack_108;
  local_f0 = local_110;
  local_d8[0] = lStack_f8;
  uStack_e0 = uStack_100;
  if (lStack_f8 == 0) {
    FUN_100005808(&local_f0,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    puVar6 = &local_80;
    _swift_dynamicCast(puVar6,&local_f0,puVar9 + 8,PTR___type_metadata_for_Swift_String_100eac208,6)
    ;
    if (((ulong)puVar6 & 1) != 0) goto LAB_1003535bc;
  }
  local_80 = 0;
  uStack_78 = 0;
LAB_1003535bc:
  IVar5 = objc_stub::objectID(param_1);
  UVar7.unknown = (undefined *)objc_stub::URIRepresentation(IVar5);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  SVar16 = Foundation::URL::get_absoluteString((URL)0x0);
  (**(code **)(lVar14 + 8))
            ((long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar3.unknown);
  uVar13 = 0;
  local_70 = SVar16;
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar1 = uVar13;
    if (uVar13 < 6) {
      uVar1 = 5;
    }
    lVar14 = uVar13 * 0x10 + 0x28;
    do {
      lVar11 = lVar14;
      if (uVar13 == 5) {
        puVar10 = &DAT_100fbf830;
        FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
        _swift_arrayDestroy(&local_b0,5,puVar10);
        local_f0 = puVar9;
        FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
        FUN_100310704();
        SVar16.bridgeObject = (void *)0xe100000000000000;
        SVar16.str = (char *)0x7c;
        SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
        _swift_bridgeObjectRelease(puVar9);
        return SVar16;
      }
      uVar13 = uVar13 + 1;
      if (uVar1 + 1 == uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10035377c);
        (*pcVar2)();
      }
      lVar12 = *(long *)((long)local_d8 + lVar11 + 8);
      lVar14 = lVar11 + 0x10;
    } while (lVar12 == 0);
    uVar15 = *(undefined8 *)((long)local_d8 + lVar11);
    _swift_bridgeObjectRetain(lVar12);
    puVar10 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar9;
    if (((ulong)puVar10 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_10037f834(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_10037f834(puVar9,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = uVar15;
    *(long *)(puVar9 + uVar1 * 0x10 + 0x28) = lVar12;
  } while( true );
}



/* Address: 0x10035377c | FUN_10035377c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10035377c(long *param_1,long *param_2)

{
  bool bVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  ulong uVar8;
  
  _Var6.unknown = (undefined *)*param_1;
  puVar5 = (undefined *)*param_2;
  puVar2 = _Var6.unknown;
  FUN_100352d1c();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar5;
    FUN_100352d1c();
    if (puVar2 != (undefined *)0x0) {
      return false;
    }
  }
  else {
    puVar2 = puVar5;
    FUN_100352d1c();
    if (puVar2 == (undefined *)0x0) {
      return true;
    }
  }
  puVar7 = (undefined *)0x6365526572616873;
  puVar2 = puVar7;
  FUN_10034fc48(_Var6.unknown,0x6365526572616873,0xef6174614464726f);
  FUN_10003bf18();
  uVar8 = (ulong)puVar2 >> 0x3c;
  if (uVar8 < 0xf) {
    FUN_10003bf18(0,0xf000000000000000);
  }
  FUN_10034fc48(puVar5,0x6365526572616873,0xef6174614464726f);
  _Var3.unknown = puVar7;
  FUN_10003bf18();
  if ((ulong)puVar7 >> 0x3c < 0xf) {
    _Var3.unknown = (undefined *)0xf000000000000000;
    FUN_10003bf18(0);
  }
  if (uVar8 < 0xf == (ulong)puVar7 >> 0x3c < 0xf) {
    FUN_100353268();
    _Var4.unknown = _Var3.unknown;
    FUN_100353268();
    if ((_Var6.unknown == puVar5) && (_Var3.unknown == _Var4.unknown)) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(_Var4.unknown);
      return false;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck(_Var6,_Var3,(_StringComparisonResult)(__int8)puVar5);
    _swift_bridgeObjectRelease(_Var3.unknown);
    _swift_bridgeObjectRelease(_Var4.unknown);
    return bVar1;
  }
  return uVar8 < 0xf;
}



/* Address: 0x100353910 | FUN_100353910 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_100353910(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong local_70;
  ulong local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100353a60);
        (*pcVar3)();
      }
      uVar4 = *(ulong *)(param_1.unknown + 0x20);
    }
    else {
      uVar4 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
    }
    if (lVar7 != 1) {
      lVar9 = 5;
      local_68 = uVar4;
      do {
        uVar8 = lVar9 - 4;
        if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100353a0c);
            (*pcVar3)();
          }
          uVar5 = *(ulong *)(param_1.unknown + lVar9 * 8);
        }
        else {
          uVar5 = uVar8;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
        }
        lVar1 = lVar9 + -3;
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100353a08);
          (*pcVar3)();
        }
        puVar6 = &local_70;
        local_70 = uVar5;
        FUN_10035377c(puVar6,&local_68);
        if (((ulong)puVar6 & 1) != 0) {
          uVar4 = uVar5;
          local_68 = uVar5;
        }
        lVar9 = lVar9 + 1;
      } while (lVar1 != lVar7);
    }
  }
  return uVar4;
}



/* Address: 0x100353a60 | thunk_FUN_100353f5c */

String thunk_FUN_100353f5c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  String SVar15;
  undefined *puStack_a8;
  long alStack_a0 [4];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar8 = 0xd000000000000010;
  uVar14 = param_1;
  FUN_10034ce30(param_1,0xd000000000000010,0x8000000100da2ca0);
  uVar11 = 0x6f636552746f6f72;
  uVar4 = param_1;
  uVar9 = uVar11;
  uStack_80 = uVar14;
  uStack_78 = uVar8;
  FUN_10034ce30(param_1,0x6f636552746f6f72,0xee00657079546472);
  uStack_70 = uVar4;
  uStack_68 = uVar9;
  FUN_10034ce30(param_1,0x6f636552746f6f72,0xee00656d614e6472);
  uVar13 = 0;
  uStack_60 = param_1;
  uStack_58 = uVar11;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar1 = uVar13;
    if (uVar13 < 4) {
      uVar1 = 3;
    }
    lVar2 = uVar13 * 0x10 + 0x28;
    do {
      lVar10 = lVar2;
      if (uVar13 == 3) {
        puVar7 = &DAT_100fbf830;
        FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
        _swift_arrayDestroy(&uStack_80,3,puVar7);
        puStack_a8 = puVar6;
        FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
        FUN_100310704();
        SVar15.bridgeObject = (void *)0xe100000000000000;
        SVar15.str = (char *)0x7c;
        SVar15 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar15);
        _swift_bridgeObjectRelease(puVar6);
        return SVar15;
      }
      uVar13 = uVar13 + 1;
      if (uVar1 + 1 == uVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100354148);
        (*pcVar3)();
      }
      lVar12 = *(long *)((long)alStack_a0 + lVar10);
      lVar2 = lVar10 + 0x10;
    } while (lVar12 == 0);
    uVar14 = *(undefined8 *)((long)alStack_a0 + lVar10 + -8);
    _swift_bridgeObjectRetain(lVar12);
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_10037f834(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_10037f834(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar14;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar12;
  } while( true );
}



/* Address: 0x100353a64 | FUN_100353a64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100353a64(ID param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong self;
  ContiguousArray CVar5;
  long lVar6;
  _CocoaArrayWrapper _Var7;
  undefined *puVar8;
  __int64 _Var9;
  ContiguousArray CVar10;
  undefined *extraout_x1;
  uint uVar11;
  ulong uVar12;
  _CocoaArrayWrapper _Var13;
  long lVar14;
  _ArrayBuffer _Var15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  long local_98;
  long local_90;
  undefined *local_68;
  
  uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain(param_2);
  local_98 = 0;
  local_90 = 0;
  lVar14 = 0;
joined_r0x000100353b98:
  do {
    while (uVar17 == 0) {
      bVar3 = SCARRY8(lVar14,1);
      lVar14 = lVar14 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100353dac);
        (*pcVar2)();
      }
      if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
        _swift_release(param_2);
        return local_90;
      }
      uVar17 = ((ulong *)(param_2 + 0x40))[lVar14];
    }
    uVar16 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
    uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
    uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
    uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
    uVar17 = uVar17 - 1 & uVar17;
    _Var15.unknown =
         *(undefined **)
          (*(long *)(param_2 + 0x38) + LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) * 8 + lVar14 * 0x200
          );
    if ((ulong)_Var15.unknown >> 0x3e != 0) goto LAB_100353d14;
    uVar16 = *(ulong *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
  } while (uVar16 < 2);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRetain(_Var15.unknown);
  goto LAB_100353c04;
LAB_100353d14:
  _Var13.unknown = _Var15.unknown & 0xffffffffffffff8;
  if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
    _Var13.unknown = _Var15.unknown;
  }
  _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
  if (1 < _Var9) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
    _swift_bridgeObjectRetain(_Var15.unknown);
    _Var13.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar16 != 0) {
LAB_100353c04:
      uVar19 = 0;
      do {
        if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100353da8);
            (*pcVar2)();
          }
          self = *(ulong *)(_Var15.unknown + uVar19 * 8 + 0x20);
        }
        else {
          self = uVar19;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var15);
        }
        uVar1 = uVar19 + 1;
        if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100353da4);
          (*pcVar2)();
        }
        CVar5.unknown = (undefined *)objc_stub::isDeleted(self);
        if ((int)CVar5.unknown == 0) {
          CVar10.unknown = extraout_x1;
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar5);
                    /* WARNING: Load size is inaccurate */
          CVar5.unknown = local_68[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar5.unknown,CVar10);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar5.unknown,self);
          Swift::ContiguousArray::__endMutation(CVar5);
        }
        uVar19 = uVar19 + 1;
        _Var13.unknown = local_68;
      } while (uVar1 != uVar16);
    }
    _swift_bridgeObjectRelease(_Var15.unknown);
    uVar11 = (uint)((ulong)_Var13.unknown >> 0x3e) & 1;
    if ((long)_Var13.unknown < 0) {
      uVar11 = 1;
    }
    if (uVar11 == 0) {
      lVar6 = *(long *)(_Var13.unknown + 0x10);
    }
    else {
      lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
    }
    if ((1 < lVar6) &&
       (_Var7.unknown = _Var13.unknown, FUN_100353910(), _Var7.unknown != (undefined *)0x0)) {
      if (uVar11 == 0) {
        puVar8 = *(undefined **)(_Var13.unknown + 0x10);
      }
      else {
        puVar8 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var13);
      }
      if (puVar8 != (undefined *)0x0) {
        if ((long)puVar8 < 1) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100353db4);
          (*pcVar2)();
        }
        puVar18 = (undefined *)0x0;
        do {
          if (((ulong)_Var13.unknown & 0xc000000000000001) == 0) {
            puVar4 = *(undefined **)(_Var13.unknown + (long)puVar18 * 8 + 0x20);
          }
          else {
            puVar4 = puVar18;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar18,(_ArrayBuffer)_Var13.unknown)
            ;
          }
          if (puVar4 != _Var7.unknown) {
            objc_stub::deleteObject_(param_1,puVar4);
            bVar3 = SCARRY8(local_98,1);
            local_90 = local_98 + 1;
            local_98 = local_90;
            if (bVar3) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100353db0);
              (*pcVar2)();
            }
          }
          puVar18 = puVar18 + 1;
        } while (puVar8 != puVar18);
        _swift_release(_Var13.unknown);
        goto joined_r0x000100353b98;
      }
    }
    _swift_release(_Var13.unknown);
  }
  goto joined_r0x000100353b98;
}



/* Address: 0x100353db4 | FUN_100353db4 */

String FUN_100353db4(undefined8 param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined8 local_70;
  long local_68 [3];
  
  lVar7 = -0x2ffffffffffffff0;
  uVar3 = param_1;
  FUN_10034ce30(param_1,0xd000000000000010,0x8000000100da2ca0);
  uVar8 = 0x6365526572616873;
  local_70 = uVar3;
  local_68[0] = lVar7;
  FUN_10034ce30(param_1,0x6365526572616873,0xef656d614e64726f);
  lVar7 = 0;
  local_68[1] = param_1;
  local_68[2] = uVar8;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    plVar2 = local_68 + lVar7 * 2;
    do {
      plVar9 = plVar2;
      lVar7 = lVar7 + 1;
      if (lVar7 == 3) {
        puVar6 = &DAT_100fbf830;
        FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
        _swift_arrayDestroy(&local_70,2,puVar6);
        FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
        FUN_100310704();
        SVar12.bridgeObject = (void *)0xe100000000000000;
        SVar12.str = (char *)0x7c;
        SVar12 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar12);
        _swift_bridgeObjectRelease(puVar5);
        return SVar12;
      }
      lVar10 = *plVar9;
      plVar2 = plVar9 + 2;
    } while (lVar10 == 0);
    lVar11 = plVar9[-1];
    _swift_bridgeObjectRetain(lVar10);
    puVar6 = puVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar4 = puVar5;
    if (((ulong)puVar6 & 1) == 0) {
      puVar4 = (undefined *)0x0;
      FUN_10037f834(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
    }
    uVar1 = *(ulong *)(puVar4 + 0x10);
    puVar5 = puVar4;
    if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
      puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
      FUN_10037f834(puVar5,uVar1 + 1,1,puVar4);
    }
    *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
    *(long *)(puVar5 + uVar1 * 0x10 + 0x20) = lVar11;
    *(long *)(puVar5 + uVar1 * 0x10 + 0x28) = lVar10;
  } while( true );
}



/* Address: 0x100353f5c | FUN_100353f5c */

String FUN_100353f5c(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  String SVar15;
  undefined *local_a8;
  long alStack_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar8 = 0xd000000000000010;
  uVar14 = param_1;
  FUN_10034ce30(param_1,0xd000000000000010,0x8000000100da2ca0);
  uVar11 = 0x6f636552746f6f72;
  uVar4 = param_1;
  uVar9 = uVar11;
  local_80 = uVar14;
  uStack_78 = uVar8;
  FUN_10034ce30(param_1,0x6f636552746f6f72,0xee00657079546472);
  local_70 = uVar4;
  uStack_68 = uVar9;
  FUN_10034ce30(param_1,0x6f636552746f6f72,0xee00656d614e6472);
  uVar13 = 0;
  local_60 = param_1;
  uStack_58 = uVar11;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar1 = uVar13;
    if (uVar13 < 4) {
      uVar1 = 3;
    }
    lVar2 = uVar13 * 0x10 + 0x28;
    do {
      lVar10 = lVar2;
      if (uVar13 == 3) {
        puVar7 = &DAT_100fbf830;
        FUN_1000037f0(&DAT_100fbf830,&DAT_100c40fb8);
        _swift_arrayDestroy(&local_80,3,puVar7);
        local_a8 = puVar6;
        FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
        FUN_100310704();
        SVar15.bridgeObject = (void *)0xe100000000000000;
        SVar15.str = (char *)0x7c;
        SVar15 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar15);
        _swift_bridgeObjectRelease(puVar6);
        return SVar15;
      }
      uVar13 = uVar13 + 1;
      if (uVar1 + 1 == uVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100354148);
        (*pcVar3)();
      }
      lVar12 = *(long *)((long)alStack_a0 + lVar10);
      lVar2 = lVar10 + 0x10;
    } while (lVar12 == 0);
    uVar14 = *(undefined8 *)((long)alStack_a0 + lVar10 + -8);
    _swift_bridgeObjectRetain(lVar12);
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar5 = puVar6;
    if (((ulong)puVar7 & 1) == 0) {
      puVar5 = (undefined *)0x0;
      FUN_10037f834(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
    }
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar6 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_10037f834(puVar6,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar6 + uVar1 * 0x10 + 0x20) = uVar14;
    *(long *)(puVar6 + uVar1 * 0x10 + 0x28) = lVar12;
  } while( true );
}



/* Address: 0x100354148 | FUN_100354148 */

undefined8 FUN_100354148(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100354198 | FUN_100354198 */

void FUN_100354198(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc04a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000ec2c(0xff,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0,uVar1);
  DAT_100fc04a8 = puVar2;
  return;
}



/* Address: 0x1003541ec | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1003541f0 | thunk_FUN_1002f3d84 */

void thunk_FUN_1002f3d84(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  return;
}



/* Address: 0x1003541f4 | FUN_1003541f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003541f4(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::objectID(unaff_x20);
  return IVar1;
}



/* Address: 0x100354210 | thunk_FUN_100354214 */

void thunk_FUN_100354214(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc04c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000ec2c(0xff,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
  DAT_100fc04c0 = puVar2;
  return;
}



/* Address: 0x100354214 | FUN_100354214 */

void FUN_100354214(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc04c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000ec2c(0xff,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
  DAT_100fc04c0 = puVar2;
  return;
}



/* Address: 0x100354268 | FUN_100354268 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100354268(ID *param_1)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::objectID(*unaff_x20);
  *param_1 = IVar1;
  return;
}



/* Address: 0x100354298 | FUN_100354298 */

void FUN_100354298(long param_1)

{
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_60 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_50 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  puStack_48 = &DAT_100c42420;
  local_40 = &DAT_100c42420;
  puStack_38 = &DAT_100c42420;
  puStack_28 = &DAT_100c42438;
  local_30 = local_60;
  local_20 = puStack_58;
  puStack_18 = puStack_58;
  _swift_initClassMetadata2(param_1,0,10,&local_60,param_1 + 0x58);
  return;
}



/* Address: 0x100354314 | FUN_100354314 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100354314(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_1001b9e60(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x100354378 | FUN_100354378 */

void FUN_100354378(void)

{
  FUN_100354314();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100354398 | FUN_100354398 */

void FUN_100354398(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1003543a4 | FUN_1003543a4 */

void FUN_1003543a4(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(lVar1 + 0x10));
  return;
}



/* Address: 0x1003543e4 | FUN_1003543e4 */

void FUN_1003543e4(undefined8 *param_1,undefined8 param_2)

{
  FUN_10035440c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10035440c | FUN_10035440c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10035440c(ulong param_1)

{
  code *pcVar1;
  _ArrayBuffer _Var2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0x20,0);
  _Var2.unknown = *(undefined **)(unaff_x20 + 0x10);
  if (((ulong)_Var2.unknown & 0xc000000000000001) == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003544a8);
      (*pcVar1)();
    }
    if (*(ulong *)(((ulong)_Var2.unknown & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1003544ac);
      (*pcVar1)();
    }
    param_1 = *(ulong *)(_Var2.unknown + param_1 * 8 + 0x20);
  }
  else {
    Swift::_ArrayBuffer::__getElementSlowPath(param_1,_Var2);
  }
  _swift_endAccess(auStack_38);
  FUN_1003544dc();
  if (param_1 != 0) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003544b0);
  (*pcVar1)();
}



/* Address: 0x1003544b0 | FUN_1003544b0 */

void FUN_1003544b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1003544dc();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1003544dc | FUN_1003544dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003544dc(undefined8 param_1)

{
  ID IVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  ID local_58;
  long lStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x20;
  FUN_1000da768(auStack_70);
  FUN_100004640(auStack_70,local_58);
  (**(code **)(lStack_50 + 0x10))(local_58,lStack_50);
  local_78 = 0;
  IVar1 = objc_stub::FUN_100c02080(local_58,param_1,&local_78);
  uVar2 = local_78;
  FUN_100004594(auStack_70);
  if (IVar1 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar2);
  }
  else {
    _swift_dynamicCastUnknownClass(IVar1,*(undefined8 *)(lVar3 + 0x50));
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1003545f4 | FUN_1003545f4 */

void FUN_1003545f4(void)

{
  FUN_100354614();
  return;
}



/* Address: 0x100354614 | FUN_100354614 */

void FUN_100354614(void)

{
  FUN_1000037f0(&DAT_100fc0650,&DAT_100c424f0);
  FUN_100016eac(&DAT_100fc0658,&DAT_100fc0650,&DAT_100c424f0,
                PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
               );
  (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  return;
}



/* Address: 0x100354680 | FUN_100354680 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100354680(ID *param_1,ID *param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::objectID(*param_2);
  *param_1 = IVar1;
  return;
}



/* Address: 0x1003546b0 | FUN_1003546b0 */

uint FUN_1003546b0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_1003546f0(uVar1,param_2,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  return (uint)uVar1 & 1;
}



/* Address: 0x1003546dc | FUN_1003546dc */

void FUN_1003546dc(undefined8 param_1,undefined8 param_2)

{
  FUN_1003546f0(param_1,param_2,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  return;
}



/* Address: 0x1003546f0 | FUN_1003546f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003546f0(__CocoaSet param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  if ((param_2 & 0xc000000000000001) == 0) {
    if (*(long *)(param_2 + 0x10) != 0) {
      FUN_10000ec2c(0,param_3,param_4);
      uVar2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(param_2 + 0x28));
      uVar3 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
      uVar2 = uVar2 & (uVar3 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
        do {
          bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix
                            (*(NSObject **)(*(long *)(param_2 + 0x30) + uVar2 * 8),
                             (NSObject *)param_1.unknown);
          if (bVar1) {
            return true;
          }
          uVar2 = uVar2 + 1 & ~uVar3;
        } while ((*(ulong *)(param_2 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
        return false;
      }
    }
    bVar1 = false;
  }
  else {
    bVar1 = Swift::__CocoaSet::_contains(param_1);
  }
  return bVar1;
}



/* Address: 0x100354800 | FUN_100354800 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100354800(ID param_1,
                  CollectionDifference<(extension_in_Swift):Swift_RangeReplaceableCollection_applying(Swift_CollectionDifference<A_Element>)__>_A_>
                  param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  long lVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  ContiguousArray CVar8;
  __int64 _Var9;
  undefined *extraout_x1;
  undefined *extraout_x1_00;
  undefined *extraout_x1_01;
  undefined8 uVar10;
  long unaff_x20;
  ID IVar11;
  ContiguousArray CVar12;
  ContiguousArray oldCount;
  ID *pIVar13;
  bool bVar14;
  undefined *local_70;
  undefined *local_68;
  
  FUN_1000037f0(&DAT_100fc0678,&DAT_100c42508);
  FUN_100016eac(&DAT_100fc0680,&DAT_100fc0678,&DAT_100c42508,
                PTR_Swift__Swift__CollectionDifference<undefined>_>Swift__Collection_100ead440);
  Swift::Collection::_get_startIndex();
  Swift::Collection::_get_endIndex();
  if (local_68 == local_70) {
    return;
  }
  _Var3.unknown = (undefined *)objc_stub::FUN_100c09d40(param_1);
  if (_Var3.unknown == (undefined *)0x0) {
LAB_100354958:
    IVar5 = 0;
    bVar14 = true;
  }
  else {
    FUN_1000037f0(&DAT_100fc06a0,&DAT_100c42520);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    if ((ulong)_Var3.unknown >> 0x3e == 0) {
      lVar4 = *(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
        _Var1.unknown = _Var3.unknown;
      }
      lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar4 == 0) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      goto LAB_100354958;
    }
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100354c70);
        (*pcVar2)();
      }
      IVar11 = *(ID *)(_Var3.unknown + 0x20);
      _swift_unknownObjectRetain(IVar11);
    }
    else {
      IVar11 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var3);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
    IVar5 = objc_stub::FUN_100c072a0(IVar11);
    _swift_unknownObjectRelease(IVar11);
    bVar14 = false;
  }
  lVar4 = _TtC9PasteCore32DifferenceFetchedResultsDelegate::ids;
  FUN_1000037f0(&DAT_100fc0688,&DAT_100c42510);
  FUN_100016eac(&DAT_100fc0690,&DAT_100fc0688,&DAT_100c42510,
                PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550);
  (extension_Swift)::Swift::RangeReplaceableCollection::_applying(param_2);
  if (local_68 != (undefined *)0x0) {
    if ((ulong)local_68 >> 0x3e == 0) {
      IVar11 = *(ID *)((undefined *)((ulong)local_68 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = local_68;
      if (-1 < (long)local_68) {
        _Var1.unknown = (undefined *)((ulong)local_68 & 0xffffffffffffff8);
      }
      IVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (IVar5 == IVar11) {
      bVar14 = true;
    }
    if (bVar14) goto LAB_100354b88;
    _swift_bridgeObjectRelease();
  }
  puVar6 = (undefined *)objc_stub::FUN_100c023c0(param_1);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar6 == (undefined *)0x0) {
    CVar12.unknown = extraout_x1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) goto LAB_100354a58;
LAB_100354afc:
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    puVar6 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  else {
    CVar12.unknown = &DAT_100fc0698;
    FUN_1000037f0(&DAT_100fc0698,&DAT_100c42518);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    puVar7 = puVar6;
    FUN_100354c70();
    _swift_bridgeObjectRelease(puVar6);
    _Var3.unknown = local_68;
    if (puVar7 != (undefined *)0x0) {
      _Var3.unknown = puVar7;
    }
    if ((ulong)_Var3.unknown >> 0x3e != 0) goto LAB_100354afc;
LAB_100354a58:
    puVar6 = *(undefined **)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  if (puVar6 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(_Var3.unknown);
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    Swift::ContiguousArray::_reserveCapacity((__int64)puVar6,CVar12);
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100354c58);
      (*pcVar2)();
    }
    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
      pIVar13 = (ID *)(_Var3.unknown + 0x20);
      do {
        CVar8.unknown = (undefined *)objc_stub::objectID(*pIVar13);
        CVar12.unknown = extraout_x1_01;
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar8);
                    /* WARNING: Load size is inaccurate */
        oldCount.unknown = local_68[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)oldCount.unknown,CVar12);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity
                  (oldCount.unknown,CVar8.unknown);
        Swift::ContiguousArray::__endMutation(oldCount);
        puVar6 = puVar6 + -1;
        pIVar13 = pIVar13 + 1;
      } while (puVar6 != (undefined *)0x0);
    }
    else {
      CVar12.unknown = (undefined *)0x0;
      do {
        puVar7 = CVar12.unknown + 1;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)CVar12.unknown,_Var3);
        IVar5 = objc_stub::objectID((ID)CVar12.unknown);
        CVar8.unknown = extraout_x1_00;
        _swift_unknownObjectRelease();
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar12);
                    /* WARNING: Load size is inaccurate */
        CVar12.unknown = local_68[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar12.unknown,CVar8)
        ;
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar12.unknown,IVar5);
        Swift::ContiguousArray::__endMutation(CVar12);
        CVar12.unknown = puVar7;
      } while (puVar6 != puVar7);
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
LAB_100354b88:
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  *(undefined **)(unaff_x20 + lVar4) = local_68;
  _swift_bridgeObjectRelease(uVar10);
  pcVar2 = *(code **)(unaff_x20 + _TtC9PasteCore32DifferenceFetchedResultsDelegate::handler);
  uVar10 = *(undefined8 *)(unaff_x20 + lVar4);
  if (((ulong)puVar6 >> 0x3e == 0) ||
     (_Var9 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8), _Var9 == 0)) {
    _swift_bridgeObjectRetain(uVar10);
    puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    _swift_bridgeObjectRetain(uVar10);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1002fcf38(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  (*pcVar2)(uVar10,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(uVar10);
  return;
}



/* Address: 0x100354c70 | FUN_100354c70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_100354c70(_ArrayBuffer param_1,ContiguousArray param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  ContiguousArray CVar4;
  ContiguousArray CVar5;
  __int64 _Var6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ContiguousArray oldCount;
  undefined *puVar10;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    Swift::ContiguousArray::_reserveCapacity
              (*(__int64 *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10),param_2);
    puVar8 = *(undefined **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    _Var6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    Swift::ContiguousArray::_reserveCapacity(_Var6,param_2);
    puVar8 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (puVar8 != (undefined *)0x0) {
    puVar9 = (undefined *)0x0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= puVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100354d90);
          (*pcVar3)();
        }
        puVar7 = *(undefined **)(param_1.unknown + (long)puVar9 * 8 + 0x20);
        _swift_unknownObjectRetain(puVar7);
      }
      else {
        puVar7 = puVar9;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar9,param_1);
      }
      if (SCARRY8((long)puVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100354d74);
        (*pcVar3)();
      }
      puVar10 = puVar9 + 1;
      CVar4.unknown = &_OBJC_CLASS___NSManagedObject;
      CVar5.unknown = puVar7;
      _swift_dynamicCastObjCClass();
      if (CVar5.unknown == (undefined *)0x0) {
        _swift_unknownObjectRelease(puVar7);
        _swift_release(puVar2);
        return (undefined *)0x0;
      }
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar5);
                    /* WARNING: Load size is inaccurate */
      oldCount.unknown = puVar2[0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)oldCount.unknown,CVar4)
      ;
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(oldCount.unknown,CVar5.unknown)
      ;
      Swift::ContiguousArray::__endMutation(oldCount);
      puVar9 = puVar9 + 1;
    } while (puVar10 != puVar8);
  }
  return puVar2;
}



/* Address: 0x100354de0 | FUN_100354de0 */

undefined * FUN_100354de0(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined8 local_78;
  ulong local_70;
  undefined *local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    uVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003077dc(0,uVar4 & ((long)uVar4 >> 0x3f ^ 0xffffffffffffffffU),0);
  puVar9 = local_68;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar10 = *(long *)((param_1.unknown & 0xffffffffffffff8U) + 0x10);
    puVar6 = local_68;
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8U;
    if (((ulong)param_1.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = param_1.unknown;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar6 = local_68;
  }
  local_68 = puVar9;
  if (lVar10 != 0) {
    uVar4 = 0;
    local_68 = puVar6;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100354f80);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(param_1.unknown + uVar4 * 8 + 0x20);
        _swift_unknownObjectRetain();
      }
      else {
        uVar5 = uVar4;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar4,param_1);
      }
      if (SCARRY8(uVar4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100354f7c);
        (*pcVar3)();
      }
      lVar11 = uVar4 + 1;
      puVar6 = &DAT_100fc0698;
      local_70 = uVar5;
      FUN_1000037f0(&DAT_100fc0698,&DAT_100c42518);
      puVar7 = &DAT_100fbe610;
      FUN_1000037f0(&DAT_100fbe610,&DAT_100c40718);
      puVar8 = &local_78;
      _swift_dynamicCast(puVar8,&local_70,puVar6,puVar7,6);
      uVar2 = local_78;
      if (((ulong)puVar8 & 1) == 0) {
        _swift_release(puVar9);
        return (undefined *)0x0;
      }
      uVar5 = *(ulong *)(puVar9 + 0x10);
      local_68 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar5) {
        FUN_1003077dc(1 < *(ulong *)(puVar9 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar5 + 1;
      *(undefined8 *)(local_68 + uVar5 * 8 + 0x20) = uVar2;
      uVar4 = uVar4 + 1;
      puVar9 = local_68;
    } while (lVar11 != lVar10);
  }
  return local_68;
}



/* Address: 0x100354f90 | _TtC9PasteCore32DifferenceFetchedResultsDelegate::controller:didChangeContentWithDifference: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC9PasteCore32DifferenceFetchedResultsDelegate::controller_didChangeContentWithDifference_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fc0678;
  FUN_1000037f0(&DAT_100fc0678,&DAT_100c42508);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
  (extension_Foundation)::Swift::CollectionDifference::__unconditionallyBridgeFromObjectiveC();
  FUN_100354800(param_3,&stack0xffffffffffffffc0 + -extraout_x8);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffc0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100355074 | _TtC9PasteCore32DifferenceFetchedResultsDelegate::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore32DifferenceFetchedResultsDelegate::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCore.DifferenceFetchedResultsDelegate",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003550a0);
  (*pcVar1)();
}



/* Address: 0x1003550a0 | _TtC9PasteCore32DifferenceFetchedResultsDelegate::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore32DifferenceFetchedResultsDelegate::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + handler + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + ids));
  return;
}



/* Address: 0x1003550dc | FUN_1003550dc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003550dc(void)

{
  return ZEXT816(0x100f981d8);
}



/* Address: 0x1003550fc | _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::dealloc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::dealloc
               (ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID self;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  self = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::removeObserver_(self,param_1);
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"dealloc");
  return;
}



/* Address: 0x100355184 | _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::
     _cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + handler + 8));
  return;
}



/* Address: 0x100355198 | FUN_100355198 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100355324 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100355198(char *param_1,char ****param_2,char *param_3,undefined *param_4)

{
  __CocoaSet _Var1;
  undefined *puVar2;
  char ****ppppcVar3;
  char *****pppppcVar4;
  char *****pppppcVar5;
  undefined *puVar6;
  char ****ppppcVar7;
  __int64 _Var8;
  char *pcVar9;
  char *****pppppcVar10;
  long unaff_x20;
  char *****pppppcVar11;
  String SVar12;
  Notification NVar13;
  Notification NVar14;
  char ****local_88 [5];
  char ***local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  NVar13.pastePaused.bridgeObject = param_2;
  NVar13.pastePaused.str = param_1;
  NVar13.syncInProgress.bridgeObject = param_4;
  NVar13.syncInProgress.str = param_3;
  Foundation::Notification::_get_userInfo(NVar13);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 == (char *)0x0) {
    uStack_58 = 0;
    local_60 = (char ***)0x0;
    local_48 = 0;
    uStack_50 = 0;
LAB_1003552c4:
    pppppcVar4 = (char *****)&local_60;
    FUN_10030e660();
LAB_1003552cc:
    pppppcVar11 = (char *****)PTR___swiftEmptySetSingleton_100eae0e8;
    if ((ulong)puVar2 >> 0x3e != 0) {
      _Var8 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
      pppppcVar4 = (char *****)0x0;
      pppppcVar11 = (char *****)PTR___swiftEmptySetSingleton_100eae0e8;
      if (_Var8 != 0) {
        pppppcVar4 = (char *****)PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1002fcf5c();
        pppppcVar11 = pppppcVar4;
      }
    }
  }
  else {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar9 = SVar12.bridgeObject;
    _swift_bridgeObjectRetain(pcVar9);
    param_2 = (char ****)PTR___type_metadata_for_Swift_String_100eac208;
    param_3 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
    Swift::AnyHashable::_init(local_88);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_10035525c:
      uStack_58 = 0;
      local_60 = (char ***)0x0;
      local_48 = 0;
      uStack_50 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_1);
      pppppcVar4 = local_88;
      FUN_1000f1290(pppppcVar4);
      if (((ulong)param_2 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_10035525c;
      }
      param_2 = &local_60;
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)pppppcVar4 * 0x20);
      _swift_bridgeObjectRelease(pcVar9);
      pcVar9 = param_1;
    }
    _swift_bridgeObjectRelease(pcVar9);
    _swift_bridgeObjectRelease(param_1);
    FUN_100089674(local_88);
    if (local_48 == 0) goto LAB_1003552c4;
    param_4 = &DAT_100fc0670;
    FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
    pppppcVar4 = local_88;
    param_2 = &local_60;
    param_3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    pppppcVar11 = (char *****)local_88[0];
    if (((ulong)pppppcVar4 & 1) == 0) goto LAB_1003552cc;
  }
  NVar14.pastePaused.bridgeObject = param_2;
  NVar14.pastePaused.str = (char *)pppppcVar4;
  NVar14.syncInProgress.bridgeObject = param_4;
  NVar14.syncInProgress.str = param_3;
  Foundation::Notification::_get_userInfo(NVar14);
  if (pppppcVar4 == (char *****)0x0) {
    uStack_58 = 0;
    local_60 = (char ***)0x0;
    local_48 = 0;
    uStack_50 = 0;
LAB_1003553e0:
    FUN_10030e660(&local_60);
  }
  else {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pppppcVar10 = SVar12.bridgeObject;
    _swift_bridgeObjectRetain(pppppcVar10);
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (local_88,pppppcVar4,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (pppppcVar4[2] == (char ****)0x0) {
LAB_100355378:
      uStack_58 = 0;
      local_60 = (char ***)0x0;
      local_48 = 0;
      uStack_50 = 0;
    }
    else {
      _swift_bridgeObjectRetain(pppppcVar4);
      pppppcVar5 = local_88;
      FUN_1000f1290(pppppcVar5);
      if (((ulong)puVar6 & 1) == 0) {
        _swift_bridgeObjectRelease(pppppcVar4);
        goto LAB_100355378;
      }
      FUN_10000cbfc(pppppcVar4[7] + (long)pppppcVar5 * 4,&local_60);
      _swift_bridgeObjectRelease(pppppcVar10);
      pppppcVar10 = pppppcVar4;
    }
    _swift_bridgeObjectRelease(pppppcVar10);
    _swift_bridgeObjectRelease(pppppcVar4);
    FUN_100089674(local_88);
    if (local_48 == 0) goto LAB_1003553e0;
    puVar6 = &DAT_100fc0670;
    FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
    pppppcVar4 = local_88;
    _swift_dynamicCast(pppppcVar4,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
    if (((ulong)pppppcVar4 & 1) != 0) goto LAB_1003553f8;
  }
  if (((ulong)puVar2 >> 0x3e != 0) &&
     (_Var8 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8), _Var8 != 0)) {
    FUN_1002fcf5c(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
LAB_1003553f8:
  local_88[0] = (char ****)pppppcVar11;
  FUN_100365ac0();
  ppppcVar3 = local_88[0];
  if (((ulong)local_88[0] & 0xc000000000000001) == 0) {
    ppppcVar7 = (char ****)local_88[0][2];
  }
  else {
    _Var1.unknown = (undefined *)((ulong)local_88[0] & 0xffffffffffffff8);
    if ((char *****)0x7fffffffffffffff < local_88[0]) {
      _Var1.unknown = (undefined *)local_88[0];
    }
    ppppcVar7 = (char ****)Swift::__CocoaSet::get_count(_Var1);
  }
  if (ppppcVar7 != (char ****)0x0) {
    (**(code **)(unaff_x20 +
                _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver
                ::handler))(ppppcVar3);
  }
  _swift_bridgeObjectRelease(ppppcVar3);
  return;
}



/* Address: 0x1003554ac | _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::contextObjectsDidChange: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::
     contextObjectsDidChange_(ID param_1,SEL param_2,ID param_3)

{
  void *pvVar1;
  char *pcVar2;
  void *pvVar3;
  long extraout_x8;
  long lVar4;
  Notification NVar5;
  Notification NVar6;
  
  NVar5 = Foundation::Notification::typeMetadataAccessor();
  pvVar3 = NVar5.syncInProgress.bridgeObject;
  pcVar2 = NVar5.syncInProgress.str;
  pvVar1 = NVar5.pastePaused.bridgeObject;
  lVar4 = *(long *)(NVar5.pastePaused.str + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  NVar6.pastePaused.bridgeObject = pvVar1;
  NVar6.pastePaused.str = (char *)param_3;
  NVar6.syncInProgress.bridgeObject = pvVar3;
  NVar6.syncInProgress.str = pcVar2;
  NVar6 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar6);
  FUN_100355198(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                NVar6.pastePaused.bridgeObject,NVar6.syncInProgress.str,
                NVar6.syncInProgress.bridgeObject);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             NVar5.pastePaused.str);
  return;
}



/* Address: 0x100355550 | _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCoreP33_9486B9FF9DE242091A03430635F3A7DA31ContextObjectsDidChangeObserver::init
             (ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("PasteCore.ContextObjectsDidChangeObserver",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10035557c);
  (*pcVar1)();
}



/* Address: 0x10035557c | FUN_10035557c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10035557c(void)

{
  return ZEXT816(0x100f982a0);
}



/* Address: 0x10035559c | FUN_10035559c */

void FUN_10035559c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4236c,param_1);
  return;
}



/* Address: 0x1003555ac | FUN_1003555ac */

void FUN_1003555ac(long param_1)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_30 = &DAT_100c42578;
  puStack_28 = &DAT_100c42590;
  puStack_38 = local_40;
  local_20 = local_40;
  puStack_18 = local_40;
  _swift_initClassMetadata2(param_1,0,6,&local_40,param_1 + 0x58);
  return;
}



/* Address: 0x100355608 | FUN_100355608 */

void FUN_100355608(void)

{
  Task TVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x48);
  if (puVar2 != (undefined *)0x0) {
    TVar1.unknown = puVar2;
    _swift_retain();
    Swift::Task::cancel(TVar1);
    _swift_release(puVar2);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100355be8(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x10035568c | FUN_10035568c */

void FUN_10035568c(void)

{
  FUN_100355608();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003556ac | FUN_1003556ac */

void FUN_1003556ac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1003556b8 | FUN_1003556b8 */

void FUN_1003556b8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4236c,param_1);
  return;
}


