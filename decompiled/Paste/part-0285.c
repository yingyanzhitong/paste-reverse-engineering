/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10038bcc8 | FUN_10038bcc8 */

void FUN_10038bcc8(void)

{
  long unaff_x20;
  
  FUN_10038902c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10038bce4 | FUN_10038bce4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10038bce4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10038bd18 | FUN_10038bd18 */

void FUN_10038bd18(void)

{
  long unaff_x20;
  
  FUN_100388728(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10038bd34 | thunk_FUN_10038bce4 */

void thunk_FUN_10038bce4(void)

{
  thunk_FUN_10038bce4();
  return;
}



/* Address: 0x10038bd38 | FUN_10038bd38 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10038bd38(undefined *param_1)

{
  __CocoaSet _Var1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  Iterator *_cocoa;
  Iterator IVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined *local_98;
  long local_90;
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar11 = (ulong *)(param_1 + 0x38);
    uVar12 = ~uVar13;
    uVar13 = -uVar13;
    uVar9 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar9 = ~(-1L << (uVar13 & 0x3f));
    }
    uVar9 = uVar9 & *puVar11;
    IVar6.unknown = param_1;
    _swift_bridgeObjectRetain();
    lStack_70 = 0;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    _cocoa = Swift::__CocoaSet::makeIterator(_Var1);
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    FUN_1003084a8();
    IVar6 = Swift::Set::Iterator::_init(_cocoa);
    param_1 = local_88;
    puVar11 = puStack_80;
    uVar12 = local_78;
    uVar9 = local_68;
  }
  lVar14 = lStack_70;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    uVar13 = uVar9;
    lVar3 = lVar14;
    if ((long)param_1 < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)param_1 & 0x7fffffffffffffff));
      if (IVar6.unknown == (undefined *)0x0) {
LAB_10038bf64:
        local_90 = 0;
LAB_10038bf68:
        FUN_10000c650(param_1,puVar11,uVar12,lVar14,uVar9);
        return puVar8;
      }
      uVar7 = 0;
      local_98 = IVar6.unknown;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _swift_dynamicCast(&local_90,&local_98,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar7,7);
      lVar10 = local_90;
    }
    else {
      while (uVar13 == 0) {
        lVar10 = lVar3 + 1;
        if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10038bfa8);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x40 >> 6) <= lVar10) {
          uVar9 = 0;
          goto LAB_10038bf64;
        }
        lVar3 = lVar10;
        uVar13 = puVar11[lVar10];
      }
      uVar2 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      lVar10 = *(long *)(*(long *)(param_1 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 8 +
                        lVar3 * 0x200);
    }
    local_90 = lVar10;
    if (lVar10 == 0) goto LAB_10038bf68;
    uVar7 = 0;
    FUN_1003b4868(0);
    _swift_dynamicCastClass(lVar10,uVar7);
    uVar9 = uVar13;
    lVar14 = lVar3;
    if (lVar10 == 0) {
      IVar6.unknown = (undefined *)0x0;
    }
    else {
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar13 = (ulong)puVar4 & 0xffffffffffffff8;
      IVar6.unknown = *(undefined **)(uVar13 + 0x10);
      uVar13 = *(ulong *)(uVar13 + 0x18);
      if ((undefined *)(uVar13 >> 1) <= IVar6.unknown) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar13,IVar6.unknown + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(IVar6.unknown,lVar10);
      puVar8 = puVar4;
    }
  } while( true );
}



/* Address: 0x10038bfa8 | FUN_10038bfa8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10038bfa8(void)

{
  ID IVar1;
  
  IVar1 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::addObserver_selector_name_object_(IVar1);
  IVar1 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::addObserver_selector_name_object_(IVar1);
  return 0;
}



/* Address: 0x10038c04c | FUN_10038c04c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10038c04c(void)

{
  ID self;
  long unaff_x20;
  
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  NSNotificationCenter::removeObserver_(self);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10038c0bc | FUN_10038c0bc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10038c0bc(void)

{
  long lVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  URL UVar7;
  ID IVar8;
  undefined8 uVar9;
  Set<undefined> SVar10;
  Iterator *pIVar11;
  Iterator IVar12;
  undefined *puVar13;
  URL UVar14;
  undefined **self;
  undefined8 uVar15;
  Dictionary<undefined,undefined> DVar16;
  _StringGuts _Var17;
  long lVar18;
  long extraout_x8;
  ulong uVar19;
  long lVar20;
  long unaff_x20;
  ulong uVar21;
  undefined *puVar22;
  undefined *puVar23;
  ulong uVar24;
  ID self_00;
  ulong *puVar25;
  String SVar26;
  undefined1 auStack_1a0 [8];
  ulong local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_168;
  undefined *local_e0;
  undefined *local_d8 [4];
  undefined *local_b8;
  ulong *puStack_b0;
  ulong local_a8;
  long lStack_a0;
  ulong local_98;
  undefined *local_90;
  ulong *puStack_88;
  ulong local_80;
  undefined *local_78;
  ulong local_70;
  
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  self_00 = *(ID *)(unaff_x20 + 0x18);
  IVar8 = objc_stub::transactionAuthor(self_00);
  if (IVar8 != 0) {
    SVar26 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var17.unknown = SVar26.bridgeObject;
    if (SVar26.str == (undefined *)0x6c707041636e7973 &&
        _Var17.unknown == (undefined *)0xe900000000000079) {
      _swift_bridgeObjectRelease(_Var17.unknown);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar26.str,_Var17,(_StringComparisonResult)0x73);
      _swift_bridgeObjectRelease(_Var17.unknown);
      if (!bVar6) goto LAB_10038c1b4;
    }
    _swift_beginAccess(unaff_x20 + 0x30,&local_90,1,0);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    _swift_bridgeObjectRelease(uVar15);
    return;
  }
LAB_10038c1b4:
  objc_stub::deletedObjects(self_00);
  uVar9 = 0;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  uVar15 = uVar9;
  FUN_1003084a8();
  SVar10 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  IVar12.unknown = (undefined *)0x0;
  local_190 = uVar15;
  if (((ulong)SVar10.unknown & 0xc000000000000001) == 0) {
    lStack_a0 = 0;
    uVar24 = -1L << ((ulong)(byte)SVar10.unknown[0x20] & 0x3f);
    puVar25 = (ulong *)(SVar10.unknown + 0x38);
    local_a8 = ~uVar24;
    uVar24 = -uVar24;
    local_98 = 0xffffffffffffffff;
    if (uVar24 < 0x40) {
      local_98 = ~(-1L << (uVar24 & 0x3f));
    }
    local_98 = local_98 & *puVar25;
  }
  else {
    _Var2.unknown = SVar10.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar10.unknown) {
      _Var2.unknown = SVar10.unknown;
    }
    pIVar11 = Swift::__CocoaSet::makeIterator(_Var2);
    IVar12 = Swift::Set::Iterator::_init(pIVar11);
    SVar10.unknown = local_b8;
    puVar25 = puStack_b0;
  }
  uStack_178 = 2;
  local_180 = 1;
  local_188 = 0xe900000000000049;
  lVar20 = lStack_a0;
  uVar24 = local_98;
  local_198 = local_a8;
  local_168 = SVar10.unknown;
  do {
    lVar4 = lVar20;
    uVar21 = uVar24;
    if ((long)SVar10.unknown < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)SVar10.unknown & 0x7fffffffffffffff));
      if (IVar12.unknown == (undefined *)0x0) {
LAB_10038c554:
        FUN_10000c650(SVar10.unknown,puVar25,local_198,lVar20,uVar24);
        objc_stub::updatedObjects(self_00);
        SVar10 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
        IVar12.unknown = (undefined *)0x0;
        if (((ulong)SVar10.unknown & 0xc000000000000001) == 0) {
          puVar23 = (undefined *)0x0;
          uVar19 = -1L << ((ulong)(byte)SVar10.unknown[0x20] & 0x3f);
          puVar25 = (ulong *)(SVar10.unknown + 0x38);
          uVar21 = ~uVar19;
          uVar19 = -uVar19;
          uVar24 = 0xffffffffffffffff;
          if (uVar19 < 0x40) {
            uVar24 = ~(-1L << (uVar19 & 0x3f));
          }
          uVar24 = uVar24 & *puVar25;
        }
        else {
          _Var2.unknown = SVar10.unknown & 0xffffffffffffff8;
          if ((undefined *)0x7fffffffffffffff < SVar10.unknown) {
            _Var2.unknown = SVar10.unknown;
          }
          pIVar11 = Swift::__CocoaSet::makeIterator(_Var2);
          IVar12 = Swift::Set::Iterator::_init(pIVar11);
          uVar21 = local_80;
          puVar23 = local_78;
          uVar24 = local_70;
          puVar25 = puStack_88;
          SVar10.unknown = local_90;
        }
        puVar13 = puVar23;
        uVar19 = uVar24;
        if (-1 < (long)SVar10.unknown) goto joined_r0x00010038c69c;
        while ((Swift::__CocoaSet::Iterator::_next
                          ((Iterator *)((ulong)SVar10.unknown & 0x7fffffffffffffff)),
               IVar12.unknown != (undefined *)0x0 &&
               (local_e0 = IVar12.unknown,
               _swift_dynamicCast(local_d8,&local_e0,
                                  PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,uVar9,7),
               puVar22 = local_d8[0], uVar19 = uVar24, puVar13 = puVar23,
               local_d8[0] != (undefined *)0x0))) {
          while( true ) {
            puVar23 = puVar13;
            uVar24 = uVar19;
            uVar15 = 0;
            FUN_1003b4868(0);
            _swift_dynamicCastClass(puVar22,uVar15);
            if (puVar22 == (undefined *)0x0) {
              IVar12.unknown = (undefined *)0x0;
            }
            else {
              objc_stub::changedValues((ID)puVar22);
              IVar12.unknown =
                   (undefined *)
                   (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC
                             ();
              DVar16 = (Dictionary<undefined,undefined>)IVar12.unknown;
              _swift_bridgeObjectRetain();
              FUN_100365774();
              FUN_10038e24c(DVar16.unknown,puVar22);
              if (*(long *)(DVar16.unknown + 0x10) == 0) {
                _swift_release(DVar16.unknown);
                _swift_bridgeObjectRelease(IVar12.unknown);
                IVar12.unknown = (undefined *)0x0;
              }
              else {
                IVar8 = objc_stub::objectID((ID)puVar22);
                puVar13 = &DAT_100fc1bf0;
                FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
                _swift_initStaticObject();
                local_d8[0] = DVar16.unknown;
                FUN_10036c298();
                FUN_10000caac(puVar13 + 0x20);
                puVar13 = local_d8[0];
                _swift_beginAccess(unaff_x20 + 0x30,local_d8,0x21,0);
                uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
                _swift_isUniquelyReferenced_nonNull_native(uVar15);
                local_e0 = *(undefined **)(unaff_x20 + 0x30);
                *(undefined8 *)(unaff_x20 + 0x30) = 0x8000000000000000;
                FUN_100381278(puVar13,IVar8,uVar15);
                *(undefined **)(unaff_x20 + 0x30) = local_e0;
                _swift_endAccess(local_d8);
                _swift_bridgeObjectRelease();
              }
            }
            puVar13 = puVar23;
            uVar19 = uVar24;
            if ((long)SVar10.unknown < 0) break;
joined_r0x00010038c69c:
            while (uVar19 == 0) {
              puVar22 = puVar13 + 1;
              if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10038c8e8);
                (*pcVar5)();
              }
              if ((long)(uVar21 + 0x40 >> 6) <= (long)puVar22) {
                uVar24 = 0;
                goto LAB_10038c8a4;
              }
              puVar13 = puVar22;
              uVar19 = puVar25[(long)puVar22];
            }
            uVar3 = (uVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar19 & 0x5555555555555555) << 1;
            uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
            uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            puVar22 = *(undefined **)
                       (*(long *)(SVar10.unknown + 0x30) +
                        LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 + (long)puVar13 * 0x200);
            uVar19 = uVar19 - 1 & uVar19;
            if (puVar22 == (undefined *)0x0) goto LAB_10038c8a4;
          }
        }
LAB_10038c8a4:
        FUN_10000c650(SVar10.unknown,puVar25,uVar21,puVar23,uVar24);
        return;
      }
      local_d8[0] = IVar12.unknown;
      _swift_dynamicCast(&local_90,local_d8,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar9,7);
      puVar23 = local_90;
    }
    else {
      while (uVar21 == 0) {
        lVar1 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10038c8e4);
          (*pcVar5)();
        }
        if ((long)(local_a8 + 0x40 >> 6) <= lVar1) {
          uVar24 = 0;
          goto LAB_10038c554;
        }
        lVar4 = lVar1;
        uVar21 = puVar25[lVar1];
      }
      uVar19 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar21 = uVar21 - 1 & uVar21;
      puVar23 = *(undefined **)
                 (*(long *)(SVar10.unknown + 0x30) + LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) * 8 +
                 lVar4 * 0x200);
    }
    if (puVar23 == (undefined *)0x0) goto LAB_10038c554;
    uVar15 = 0;
    FUN_1003b4868(0);
    puVar13 = puVar23;
    _swift_dynamicCastClass(puVar23,uVar15);
    if (puVar13 != (undefined *)0x0) {
      FUN_10038fef4();
      IVar8 = objc_stub::objectID((ID)puVar23);
      UVar14.unknown = (undefined *)objc_stub::URIRepresentation(IVar8);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar14);
      SVar26 = Foundation::URL::get_absoluteString((URL)0x0);
      (**(code **)(lVar18 + 8))
                (auStack_1a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar7.unknown);
      puVar23 = &DAT_100fbef68;
      FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
      _swift_initStackObject();
      *(undefined8 *)(puVar23 + 0x18) = uStack_178;
      *(undefined8 *)(puVar23 + 0x10) = local_180;
      *(undefined8 *)(puVar23 + 0x20) = 0x52557463656a626f;
      *(undefined8 *)(puVar23 + 0x28) = local_188;
      *(String *)(puVar23 + 0x30) = SVar26;
      puVar13 = puVar23;
      FUN_1003c92b8();
      _swift_setDeallocating(puVar23);
      FUN_100005808(puVar23 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
      puVar23 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      self = &local_90;
      local_90 = puVar13;
      local_78 = puVar23;
      FUN_100328974(self,0,self_00);
      SVar10.unknown = local_168;
      FUN_100004594(&local_90);
      if (self != (undefined **)0x0) {
        objc_stub::setIsPendingDeletion_((ID)self,1);
      }
    }
    IVar12.unknown = (undefined *)0x0;
    lVar20 = lVar4;
    uVar24 = uVar21;
  } while( true );
}



/* Address: 0x10038c8e8 | FUN_10038c8e8 */

uint FUN_10038c8e8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  FUN_100052458(uVar2,uVar1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return (uint)uVar2 & 1;
}



/* Address: 0x10038c94c | _TtC9PasteCore14ContextMonitor::contextWillSave: */

/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCore14ContextMonitor::contextWillSave_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10038d3f4();
  return;
}



/* Address: 0x10038c958 | FUN_10038c958 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10038c958(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  ID IVar4;
  _ArrayBuffer _Var5;
  _ArrayBuffer _Var6;
  ulong *puVar7;
  long lVar8;
  _StringGuts _Var9;
  ID self;
  ulong *extraout_x1;
  _StringGuts _Var10;
  undefined *extraout_x1_00;
  undefined *extraout_x1_01;
  undefined **ppuVar11;
  ulong extraout_x1_02;
  uint uVar12;
  ulong uVar13;
  ContiguousArray CVar14;
  ContiguousArray CVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x20;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined *puVar22;
  _CocoaArrayWrapper _Var23;
  ID IVar24;
  long lVar25;
  ulong *puVar26;
  _CocoaArrayWrapper _Var27;
  ID IVar28;
  String SVar29;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_90;
  undefined *local_80 [4];
  
  IVar4 = objc_stub::transactionAuthor(*(ID *)(unaff_x20 + 0x18));
  _Var9.unknown = (undefined *)extraout_x1;
  if (IVar4 != 0) {
    SVar29 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var10.unknown = SVar29.bridgeObject;
    if (SVar29.str == (undefined *)0x6c707041636e7973 &&
        _Var10.unknown == (undefined *)0xe900000000000079) {
      _swift_bridgeObjectRelease(_Var10.unknown);
    }
    else {
      _Var9.unknown = _Var10.unknown;
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar29.str,_Var10,(_StringComparisonResult)0x73);
      _swift_bridgeObjectRelease(_Var10.unknown);
      if (!bVar3) goto LAB_10038ca04;
    }
    _swift_beginAccess(unaff_x20 + 0x30,local_80,1,0);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    goto LAB_10038d1dc;
  }
LAB_10038ca04:
  puVar22 = PTR__NSDeletedObjectsKey_100ea99d0;
  FUN_10038d27c();
  _Var5.unknown = puVar22;
  FUN_10038bd38();
  _swift_bridgeObjectRelease(puVar22);
  puVar22 = PTR__NSInsertedObjectsKey_100ea99e0;
  FUN_10038d27c();
  _Var6.unknown = puVar22;
  FUN_10038bd38();
  _swift_bridgeObjectRelease(puVar22);
  local_80[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    puVar22 = *(undefined **)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var23.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var23.unknown = _Var6.unknown;
    }
    puVar22 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var23);
  }
  _Var23.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar22 != (undefined *)0x0) {
    puVar26 = (ulong *)0x0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong **)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= puVar26) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10038cc88);
          (*pcVar2)();
        }
        puVar7 = *(ulong **)(_Var6.unknown + (long)puVar26 * 8 + 0x20);
      }
      else {
        puVar7 = puVar26;
        _Var9.unknown = _Var6.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar26,_Var6);
      }
      puVar20 = (undefined *)((long)puVar26 + 1);
      if (SCARRY8((long)puVar26,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10038cc84);
        (*pcVar2)();
      }
      CVar14.unknown = (undefined *)puVar7;
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar7) + 0x88))();
      if (((ulong)CVar14.unknown & 1) != 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar14);
                    /* WARNING: Load size is inaccurate */
        CVar14.unknown = local_80[0][0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar14.unknown,(ContiguousArray)_Var9.unknown);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
        Swift::ContiguousArray::__endMutation(CVar14);
        _Var9.unknown = (undefined *)puVar7;
      }
      puVar26 = (ulong *)((long)puVar26 + 1);
      _Var23.unknown = local_80[0];
    } while (puVar20 != puVar22);
  }
  puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRelease(_Var6.unknown);
  puVar20 = PTR__NSUpdatedObjectsKey_100ea9a38;
  FUN_10038d27c();
  _Var6.unknown = puVar20;
  FUN_10038bd38();
  _swift_bridgeObjectRelease(puVar20);
  local_80[0] = puVar22;
  if ((ulong)_Var6.unknown >> 0x3e == 0) {
    puVar20 = *(undefined **)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var27.unknown = _Var6.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var6.unknown) {
      _Var27.unknown = _Var6.unknown;
    }
    puVar20 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var27);
  }
  _Var27.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar20 != (undefined *)0x0) {
    puVar26 = (ulong *)0x0;
    do {
      if (((ulong)_Var6.unknown & 0xc000000000000001) == 0) {
        if (*(ulong **)(((ulong)_Var6.unknown & 0xffffffffffffff8) + 0x10) <= puVar26) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10038cc90);
          (*pcVar2)();
        }
        puVar7 = *(ulong **)(_Var6.unknown + (long)puVar26 * 8 + 0x20);
      }
      else {
        puVar7 = puVar26;
        _Var9.unknown = _Var6.unknown;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar26,_Var6);
      }
      puVar22 = (undefined *)((long)puVar26 + 1);
      if (SCARRY8((long)puVar26,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10038cc8c);
        (*pcVar2)();
      }
      CVar14.unknown = (undefined *)puVar7;
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar7) + 0x88))();
      if (((ulong)CVar14.unknown & 1) != 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar14);
                    /* WARNING: Load size is inaccurate */
        CVar14.unknown = local_80[0][0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar14.unknown,(ContiguousArray)_Var9.unknown);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
        Swift::ContiguousArray::__endMutation(CVar14);
        _Var9.unknown = (undefined *)puVar7;
      }
      puVar26 = (ulong *)((long)puVar26 + 1);
      _Var27.unknown = local_80[0];
    } while (puVar22 != puVar20);
  }
  _swift_bridgeObjectRelease(_Var6.unknown);
  if (((long)_Var23.unknown < 0) || (((ulong)_Var23.unknown >> 0x3e & 1) != 0)) {
    IVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var23);
  }
  else {
    IVar4 = *(ID *)(_Var23.unknown + 0x10);
  }
  uVar12 = (uint)((ulong)_Var27.unknown >> 0x3e) & 1;
  if ((long)_Var27.unknown < 0) {
    uVar12 = 1;
  }
  if (uVar12 == 1) {
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var27);
  }
  else {
    lVar8 = *(long *)(_Var27.unknown + 0x10);
  }
  if (SCARRY8(IVar4,lVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d224);
    (*pcVar2)();
  }
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    IVar24 = *(ID *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    IVar24 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar22;
  if (SCARRY8(IVar4 + lVar8,IVar24)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d254);
    (*pcVar2)();
  }
  if ((long)(IVar4 + lVar8 + IVar24) < 1) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    _swift_release(_Var23.unknown);
    _swift_release(_Var27.unknown);
    return;
  }
  local_90 = puVar22;
  FUN_1003c9d24();
  if (IVar4 == 0) {
    _swift_release(_Var23.unknown);
    local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (IVar24 == 0) goto LAB_10038cf14;
LAB_10038ce00:
    local_80[0] = puVar22;
    Swift::ContiguousArray::_reserveCapacity(IVar24,(ContiguousArray)_Var9.unknown);
    if ((long)IVar24 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d25c);
      (*pcVar2)();
    }
    IVar4 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        IVar28 = *(ID *)(_Var5.unknown + IVar4 * 8 + 0x20);
      }
      else {
        IVar28 = IVar4;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar4,_Var5);
      }
      IVar4 = IVar4 + 1;
      IVar28 = objc_stub::objectID(IVar28);
      CVar14.unknown = extraout_x1_01;
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
      CVar15.unknown = local_80[0][0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar15.unknown,CVar14);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar15.unknown,IVar28);
      Swift::ContiguousArray::__endMutation(CVar15);
    } while (IVar24 != IVar4);
    _swift_bridgeObjectRelease(_Var5.unknown);
    local_b0 = local_80[0];
    if (uVar12 != 0) goto LAB_10038ceb4;
LAB_10038cf2c:
    lVar8 = *(long *)(_Var27.unknown + 0x10);
  }
  else {
    local_80[0] = puVar22;
    Swift::ContiguousArray::_reserveCapacity(IVar4,(ContiguousArray)_Var9.unknown);
    if ((long)IVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d258);
      (*pcVar2)();
    }
    IVar28 = 0;
    do {
      if (((ulong)_Var23.unknown & 0xc000000000000001) == 0) {
        self = *(ID *)(_Var23.unknown + IVar28 * 8 + 0x20);
      }
      else {
        self = IVar28;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar28,(_ArrayBuffer)_Var23.unknown);
      }
      IVar28 = IVar28 + 1;
      _Var9.unknown = (undefined *)objc_stub::objectID(self);
      CVar14.unknown = extraout_x1_00;
      Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique((ContiguousArray)0x0);
                    /* WARNING: Load size is inaccurate */
      CVar15.unknown = local_80[0][0x10];
      Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar15.unknown,CVar14);
      Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
      Swift::ContiguousArray::__endMutation(CVar15);
    } while (IVar4 != IVar28);
    _swift_release(_Var23.unknown);
    local_a8 = local_80[0];
    puVar22 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (IVar24 != 0) goto LAB_10038ce00;
LAB_10038cf14:
    _swift_bridgeObjectRelease(_Var5.unknown);
    local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar12 == 0) goto LAB_10038cf2c;
LAB_10038ceb4:
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var27);
  }
  if (lVar8 != 0) {
    lVar21 = 4;
    do {
      uVar16 = lVar21 - 4;
      if (((ulong)_Var27.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(_Var27.unknown + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d208);
          (*pcVar2)();
        }
        IVar4 = *(ID *)(_Var27.unknown + lVar21 * 8);
      }
      else {
        IVar4 = uVar16;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar16,(_ArrayBuffer)_Var27.unknown);
      }
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d204);
        (*pcVar2)();
      }
      lVar25 = lVar21 + -3;
      IVar24 = objc_stub::objectID(IVar4);
      ppuVar11 = local_80;
      _swift_beginAccess(unaff_x20 + 0x30,ppuVar11,0x20,0);
      lVar19 = *(long *)(unaff_x20 + 0x30);
      if (*(long *)(lVar19 + 0x10) == 0) {
        _swift_endAccess(local_80);
      }
      else {
        _swift_bridgeObjectRetain(lVar19);
        FUN_100380790();
        if (((ulong)ppuVar11 & 1) == 0) {
          _swift_endAccess(local_80);
          _swift_bridgeObjectRelease(lVar19);
        }
        else {
          uVar18 = *(undefined8 *)(*(long *)(lVar19 + 0x38) + IVar24 * 8);
          _swift_bridgeObjectRetain(uVar18);
          _swift_endAccess(local_80);
          _swift_bridgeObjectRelease(lVar19);
          IVar24 = objc_stub::objectID(IVar4);
          puVar22 = local_90;
          uVar16 = extraout_x1_02;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar12 = (uint)puVar22;
          local_80[0] = local_90;
          IVar4 = IVar24;
          FUN_100380790();
          uVar13 = (ulong)~(uint)uVar16 & 1;
          if (SCARRY8(*(long *)(local_90 + 0x10),uVar13)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d20c);
            (*pcVar2)();
          }
          if (*(long *)(local_90 + 0x18) < (long)(*(long *)(local_90 + 0x10) + uVar13)) {
            FUN_10031e5bc();
            IVar4 = IVar24;
            FUN_100380790();
            if (((uint)uVar16 & 1) != (uVar12 & 1)) {
              FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d27c);
              (*pcVar2)();
            }
          }
          else if (((ulong)puVar22 & 1) == 0) {
            FUN_10031d15c();
          }
          local_90 = local_80[0];
          if ((uVar16 & 1) == 0) {
            *(ulong *)(local_80[0] + (IVar4 >> 6) * 8 + 0x40) =
                 *(ulong *)(local_80[0] + (IVar4 >> 6) * 8 + 0x40) | 1L << (IVar4 & 0x3f);
            *(ID *)(*(long *)(local_80[0] + 0x30) + IVar4 * 8) = IVar24;
            *(undefined8 *)(*(long *)(local_80[0] + 0x38) + IVar4 * 8) = uVar18;
            if (SCARRY8(*(long *)(local_80[0] + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10038d210);
              (*pcVar2)();
            }
            *(long *)(local_80[0] + 0x10) = *(long *)(local_80[0] + 0x10) + 1;
          }
          else {
            uVar17 = *(undefined8 *)(*(long *)(local_80[0] + 0x38) + IVar4 * 8);
            *(undefined8 *)(*(long *)(local_80[0] + 0x38) + IVar4 * 8) = uVar18;
            _swift_bridgeObjectRelease(uVar17);
          }
        }
      }
      lVar21 = lVar21 + 1;
    } while (lVar25 != lVar8);
  }
  _swift_release(_Var27.unknown);
  (**(code **)(unaff_x20 + 0x20))(local_a8,local_b0,local_90);
  _swift_beginAccess(unaff_x20 + 0x30,local_80,1,0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined **)(unaff_x20 + 0x30) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(local_90);
  _swift_bridgeObjectRelease(local_b0);
  _swift_bridgeObjectRelease(local_a8);
LAB_10038d1dc:
  _swift_bridgeObjectRelease(uVar18);
  return;
}



/* Address: 0x10038d27c | FUN_10038d27c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010038d2cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10038d27c(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  undefined *puVar2;
  __int64 _Var3;
  char *pcVar4;
  String SVar5;
  Notification NVar6;
  undefined1 local_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  NVar6.pastePaused.bridgeObject = param_2;
  NVar6.pastePaused.str = param_1;
  NVar6.syncInProgress.bridgeObject = param_4;
  NVar6.syncInProgress.str = param_3;
  Foundation::Notification::_get_userInfo(NVar6);
  if (param_1 == (char *)0x0) {
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pcVar4 = SVar5.bridgeObject;
    _swift_bridgeObjectRetain(pcVar4);
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    Swift::AnyHashable::_init
              (local_68,param_1,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_10038d320:
      uStack_38 = 0;
      local_40 = 0;
      local_28 = 0;
      uStack_30 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_1);
      puVar1 = local_68;
      FUN_1000f1290(puVar1);
      if (((ulong)puVar2 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_10038d320;
      }
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)puVar1 * 0x20,&local_40);
      _swift_bridgeObjectRelease(pcVar4);
      pcVar4 = param_1;
    }
    _swift_bridgeObjectRelease(pcVar4);
    _swift_bridgeObjectRelease(param_1);
    FUN_100089674(local_68);
    if (local_28 != 0) {
      puVar2 = &DAT_100fc0670;
      FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
      puVar1 = local_68;
      _swift_dynamicCast(puVar1,&local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar2,6);
      if (((ulong)puVar1 & 1) != 0) {
        return;
      }
      goto LAB_10038d3a0;
    }
  }
  FUN_100005808(&local_40,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10038d3a0:
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8), _Var3 != 0)) {
    FUN_1002fcf5c(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  return;
}



/* Address: 0x10038d3e8 | _TtC9PasteCore14ContextMonitor::contextDidSave: */

/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCore14ContextMonitor::contextDidSave_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10038d3f4();
  return;
}



/* Address: 0x10038d3f4 | FUN_10038d3f4 */

void FUN_10038d3f4(undefined8 param_1,undefined8 param_2,char *param_3,code *param_4)

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
  NVar6.pastePaused.str = param_3;
  NVar6.syncInProgress.bridgeObject = pvVar3;
  NVar6.syncInProgress.str = pcVar2;
  NVar6 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar6);
  _swift_retain(param_1,NVar6.pastePaused.bridgeObject,NVar6.syncInProgress.str,
                NVar6.syncInProgress.bridgeObject);
  (*param_4)(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_release(param_1);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             NVar5.pastePaused.str);
  return;
}



/* Address: 0x10038d49c | FUN_10038d49c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10038d49c(void)

{
  return ZEXT816(0x100fc2038);
}



/* Address: 0x10038d4bc | thunk_FUN_10038d4f0 */

void thunk_FUN_10038d4f0(void)

{
  FUN_10038d4f0();
  return;
}



/* Address: 0x10038d4c0 | FUN_10038d4c0 */

void FUN_10038d4c0(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  return;
}



/* Address: 0x10038d4f0 | FUN_10038d4f0 */

undefined8 * FUN_10038d4f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x10038d540 | FUN_10038d540 */

undefined8 * FUN_10038d540(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10038d5b4 | FUN_10038d5b4 */

undefined8 * FUN_10038d5b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10038d600 | FUN_10038d600 */

undefined1  [16] FUN_10038d600(void)

{
  return ZEXT816(0x100ecdb38);
}



/* Address: 0x10038d610 | FUN_10038d610 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10038d610(Continuation *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  
  puVar1 = &DAT_100fc20e8;
  FUN_1000037f0(&DAT_100fc20e8,&DAT_100c43d90);
  lVar7 = *(long *)(puVar1 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar6 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(&stack0xffffffffffffffb0 + -extraout_x8,param_1,puVar1);
  uVar5 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar8 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar2 = &DAT_100ecdb68;
  _swift_allocObject(&DAT_100ecdb68,uVar8 + lVar6,uVar5 | 7);
  puVar3 = puVar2 + uVar8;
  (**(code **)(lVar7 + 0x20))(puVar3,&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
  FUN_10038d49c();
  _swift_allocObject();
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar4 = 0x4d747865746e6f43;
  FUN_1000d4624(0x4d747865746e6f43,0xee00726f74696e6f);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c9d24();
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(code **)(puVar3 + 0x20) = FUN_10038e528;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  *(undefined **)(puVar3 + 0x30) = puVar1;
  _swift_retain(puVar3);
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  FUN_10038bfa8();
  _swift_release(puVar3);
  return;
}



/* Address: 0x10038d784 | FUN_10038d784 */

void FUN_10038d784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long lVar3;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar1 = &DAT_100fc20f0;
  FUN_1000037f0(&DAT_100fc20f0,&DAT_100c43d98);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = param_1;
  uStack_60 = param_2;
  local_58 = param_3;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  puVar2 = &DAT_100fc20e8;
  FUN_1000037f0(&DAT_100fc20e8,&DAT_100c43d90);
  Swift::AsyncStream::Continuation::_yield(auStack_70 + -extraout_x8,&local_68,puVar2);
  (**(code **)(lVar3 + 8))(auStack_70 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10038d860 | FUN_10038d860 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10038d860(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  long lVar7;
  ulong uVar8;
  long local_78;
  
  local_78 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar8 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar8 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar8 = uVar8 & *(ulong *)(param_3 + 0x38);
  lVar4 = 0;
  do {
    if (uVar8 == 0) {
      do {
        lVar7 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10038d9cc);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar7) {
          _swift_retain(param_3);
          FUN_10038db3c(param_1,param_2,local_78,param_3);
          return;
        }
        uVar8 = ((ulong *)(param_3 + 0x38))[lVar7];
        lVar4 = lVar4 + 1;
      } while (uVar8 == 0);
      uVar3 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
    }
    else {
      uVar3 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      lVar7 = lVar4;
    }
    uVar5 = 0;
    (*param_4)();
    if (unaff_x21 != 0) {
      return;
    }
    lVar4 = lVar7;
    if ((uVar5 & 1) != 0) {
      uVar5 = (LZCOUNT(uVar3) & 0xffffffffffffffc0U | lVar7 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (LZCOUNT(uVar3) & 0x3fU);
      bVar2 = SCARRY8(local_78,1);
      local_78 = local_78 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10038d988);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Address: 0x10038d9cc | FUN_10038d9cc */

void FUN_10038d9cc(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x21;
  long lVar8;
  ulong uVar9;
  long local_80;
  
  local_80 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar9 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar9 = uVar9 & *(ulong *)(param_3 + 0x38);
  lVar6 = 0;
  do {
    if (uVar9 == 0) {
      do {
        lVar8 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10038db3c);
          (*pcVar2)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar8) {
          _swift_retain(param_3);
          FUN_10038dd2c(param_1,param_2,local_80,param_3);
          return;
        }
        uVar9 = ((ulong *)(param_3 + 0x38))[lVar8];
        lVar6 = lVar6 + 1;
      } while (uVar9 == 0);
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
    }
    else {
      uVar4 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar4 = (uVar4 & 0xcccccccccccccccc) >> 2 | (uVar4 & 0x3333333333333333) << 2;
      uVar4 = (uVar4 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar4 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar4 = (uVar4 & 0xff00ff00ff00ff00) >> 8 | (uVar4 & 0xff00ff00ff00ff) << 8;
      uVar4 = (uVar4 & 0xffff0000ffff0000) >> 0x10 | (uVar4 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 >> 0x20 | uVar4 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      lVar8 = lVar6;
    }
    uVar5 = LZCOUNT(uVar4);
    uVar1 = *(undefined8 *)(*(long *)(param_3 + 0x30) + (uVar5 | lVar8 << 6) * 0x10 + 8);
    _swift_bridgeObjectRetain(uVar1);
    uVar4 = 0;
    (*param_4)();
    _swift_bridgeObjectRelease(uVar1);
    if (unaff_x21 != 0) {
      return;
    }
    lVar6 = lVar8;
    if ((uVar4 & 1) != 0) {
      uVar4 = (uVar5 & 0xffffffffffffffc0 | lVar8 << 6) >> 3;
      *(ulong *)(param_1 + uVar4) = *(ulong *)(param_1 + uVar4) | 1L << (uVar5 & 0x3f);
      bVar3 = SCARRY8(local_80,1);
      local_80 = local_80 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10038daf4);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Address: 0x10038db3c | FUN_10038db3c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10038db3c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  _SetStorage *this;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    this = (_SetStorage *)&DAT_100fbe430;
    FUN_1000037f0(&DAT_100fbe430,&DAT_100c43050);
    puVar3 = param_3;
    Swift::_SetStorage::_allocate(this,(__int64)param_3);
    if (param_2 < 1) {
      uVar11 = 0;
    }
    else {
      uVar11 = *param_1;
    }
    lVar7 = 0;
    do {
      if (uVar11 == 0) {
        do {
          lVar10 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10038dd24);
            (*pcVar1)();
          }
          if (param_2 <= lVar10) goto LAB_10038dbb4;
          uVar11 = param_1[lVar10];
          lVar7 = lVar7 + 1;
        } while (uVar11 == 0);
        uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
      }
      else {
        uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar10 = lVar7;
      }
      uVar4 = *(undefined8 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar6) | lVar10 << 6) * 8);
      uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar3 + 0x28));
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar5 = uVar5 & (uVar9 ^ 0xffffffffffffffff);
      uVar8 = uVar5 >> 6;
      uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(puVar3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar2 = false;
        uVar6 = 0x3f - uVar9 >> 6;
        do {
          uVar5 = uVar8 + 1;
          if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10038dd28);
            (*pcVar1)();
          }
          uVar8 = 0;
          if (uVar5 != uVar6) {
            uVar8 = uVar5;
          }
          bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        } while (*(ulong *)(puVar3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar3 + uVar8 * 8 + 0x38);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar3 + uVar8 + 0x38);
      *(undefined8 *)(*(long *)(puVar3 + 0x30) + uVar6 * 8) = uVar4;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10038dd2c);
        (*pcVar1)();
      }
      lVar7 = lVar10;
    } while (param_3 != (undefined *)0x0);
  }
LAB_10038dbb4:
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10038dd2c | FUN_10038dd2c */

undefined * FUN_10038dd2c(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  _SetStorage *this;
  undefined *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  puVar8 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    this = (_SetStorage *)&DAT_100fbe468;
    FUN_1000037f0(&DAT_100fbe468,&DAT_100c40460);
    puVar8 = param_3;
    Swift::_SetStorage::_allocate(this,(__int64)param_3);
    if (param_2 < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = *param_1;
    }
    lVar11 = 0;
    do {
      if (uVar14 == 0) {
        do {
          lVar15 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10038df44);
            (*pcVar6)();
          }
          if (param_2 <= lVar15) goto LAB_10038dda8;
          uVar14 = param_1[lVar15];
          lVar11 = lVar11 + 1;
        } while (uVar14 == 0);
        uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
      }
      else {
        uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        lVar15 = lVar11;
      }
      pSVar1 = (String *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
      pcVar3 = pSVar1->str;
      pvVar4 = pSVar1->bridgeObject;
      SVar5 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(puVar8 + 0x28));
      _swift_bridgeObjectRetain(pvVar4);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar5);
      uVar9 = Swift::Hasher::_finalize(into);
      uVar13 = -1L << ((ulong)(byte)puVar8[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
      uVar12 = uVar9 >> 6;
      uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff)
      ;
      if (uVar10 == 0) {
        bVar7 = false;
        uVar10 = 0x3f - uVar13 >> 6;
        do {
          uVar9 = uVar12 + 1;
          if ((uVar9 == uVar10) && (bVar7)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10038df48);
            (*pcVar6)();
          }
          uVar12 = 0;
          if (uVar9 != uVar10) {
            uVar12 = uVar9;
          }
          bVar7 = (bool)(uVar9 == uVar10 | bVar7);
        } while (*(ulong *)(puVar8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
        uVar10 = ~*(ulong *)(puVar8 + uVar12 * 8 + 0x38);
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
      }
      else {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar12 + 0x38) =
           1L << (uVar10 & 0x3f) | *(ulong *)(puVar8 + uVar12 + 0x38);
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x30) + uVar10 * 0x10);
      *puVar2 = pcVar3;
      puVar2[1] = pvVar4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      bVar7 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10038df4c);
        (*pcVar6)();
      }
      lVar11 = lVar15;
    } while (param_3 != (undefined *)0x0);
  }
LAB_10038dda8:
  _swift_release(param_4);
  return puVar8;
}



/* Address: 0x10038df4c | FUN_10038df4c */

void FUN_10038df4c(undefined8 *param_1,void *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10038e018);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    FUN_10038d9cc(param_2,param_3,param_4,param_5,param_6);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10038e014);
  (*pcVar1)();
}



/* Address: 0x10038e018 | FUN_10038e018 */

void FUN_10038e018(long param_1,undefined8 param_2,long param_3,long param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  bool bVar8;
  long lVar9;
  undefined *puVar10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  long local_c8;
  undefined1 auStack_a8 [72];
  ulong local_58;
  
  local_c8 = 0;
  uVar14 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  local_58 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    local_58 = ~(-1L << (uVar14 & 0x3f));
  }
  local_58 = local_58 & *(ulong *)(param_3 + 0x38);
  lVar9 = 0;
LAB_10038e098:
  do {
    if (local_58 == 0) {
      do {
        lVar16 = lVar9 + 1;
        if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x10038e24c);
          (*pcVar15)();
        }
        if ((long)(uVar14 + 0x3f >> 6) <= lVar16) {
          _swift_retain(param_3);
          FUN_10038dd2c(param_1,param_2,local_c8,param_3);
          return;
        }
        local_58 = ((ulong *)(param_3 + 0x38))[lVar16];
        lVar9 = lVar9 + 1;
      } while (local_58 == 0);
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_58 = local_58 - 1 & local_58;
    }
    else {
      uVar12 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_58 = local_58 - 1 & local_58;
      lVar16 = lVar9;
    }
    uVar12 = LZCOUNT(uVar12);
    pSVar1 = (String *)(*(long *)(param_3 + 0x30) + (uVar12 | lVar16 << 6) * 0x10);
    pcVar3 = pSVar1->str;
    puVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    lVar9 = param_4;
    _swift_getObjectType();
    pcVar15 = *(code **)(lVar9 + 0x60);
    puVar10 = puVar5;
    _swift_bridgeObjectRetain();
    (*pcVar15)();
    lVar9 = lVar16;
    if (*(long *)(puVar10 + 0x10) != 0) {
      Swift::Hasher::init(*(__int64 *)(puVar10 + 0x28));
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar7);
      uVar11 = Swift::Hasher::_finalize(into);
      uVar13 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
      uVar11 = uVar11 & (uVar13 ^ 0xffffffffffffffff);
      if ((*(ulong *)(puVar10 + (uVar11 >> 6) * 8 + 0x38) >> (uVar11 & 0x3f) & 1) != 0) {
        do {
          puVar2 = (undefined8 *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
          _Var4.unknown = (undefined *)*puVar2;
          _Var6.unknown = (undefined *)puVar2[1];
          if ((_Var4.unknown == pcVar3 && _Var6.unknown == puVar5) ||
             (bVar8 = Swift::_stringCompareWithSmolCheck
                                (_Var4,_Var6,(_StringComparisonResult)(__int8)pcVar3), bVar8)) {
            _swift_bridgeObjectRelease(puVar5);
            _swift_bridgeObjectRelease(puVar10);
            uVar11 = (uVar12 & 0xffffffffffffffc0 | lVar16 << 6) >> 3;
            *(ulong *)(param_1 + uVar11) = *(ulong *)(param_1 + uVar11) | 1L << (uVar12 & 0x3f);
            bVar8 = SCARRY8(local_c8,1);
            local_c8 = local_c8 + 1;
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10038e208);
              (*pcVar15)();
            }
            goto LAB_10038e098;
          }
          uVar11 = uVar11 + 1 & ~uVar13;
        } while ((*(ulong *)(puVar10 + (uVar11 >> 6) * 8 + 0x38) >> (uVar11 & 0x3f) & 1) != 0);
      }
    }
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(puVar10);
  } while( true );
}



/* Address: 0x10038e24c | FUN_10038e24c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_10038e24c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  size_t sVar6;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80 [4];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar6 = uVar5 * 8;
  local_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_1);
    if (((bVar1 & 1) == 0) ||
       (sVar4 = sVar6, _swift_stdlib_isStackAllocationSafe(sVar6,8), (sVar4 & 1) == 0)) {
      _swift_slowAlloc(sVar6,0xffffffffffffffff);
      FUN_10038df4c(local_80);
      puVar2 = local_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = local_88;
      }
      _swift_slowDealloc(sVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x00010038e454;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar2 = auStack_90 + -(sVar6 + 0xf & 0x1ffffffffffffff0);
  _bzero(puVar2,sVar6);
  FUN_10038e018(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  _swift_release(param_1);
joined_r0x00010038e454:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_release(param_1);
  }
  else {
    local_88 = puVar2;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100fc1bb0;
      FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
      _swift_willThrowTypedImpl
                (&local_88,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar2;
}



/* Address: 0x10038e4a8 | FUN_10038e4a8 */

uint FUN_10038e4a8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10038c8e8(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x10038e4c4 | FUN_10038e4c4 */

void FUN_10038e4c4(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fc20e8;
  FUN_1000037f0(&DAT_100fc20e8,&DAT_100c43d90);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x10038e528 | FUN_10038e528 */

void FUN_10038e528(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fc20e8;
  FUN_1000037f0(&DAT_100fc20e8,&DAT_100c43d90);
  FUN_10038d784(param_1,param_2,param_3,
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x10 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10038e588 | FUN_10038e588 */

void FUN_10038e588(void)

{
  FUN_10036f9e8();
  return;
}



/* Address: 0x10038e590 | thunk_FUN_10038d4f0 */

void thunk_FUN_10038d4f0(void)

{
  thunk_FUN_10038d4f0();
  return;
}



/* Address: 0x10038e594 | FUN_10038e594 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10038e594(Data param_1,undefined8 param_2)

{
  URL UVar1;
  UUID UVar2;
  UUID UVar3;
  URL UVar4;
  ID IVar5;
  URL UVar6;
  NSURL *pNVar7;
  ID IVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  URL unaff_x20;
  long unaff_x21;
  long lVar10;
  code *pcVar11;
  URL to;
  undefined1 *puVar12;
  code *pcVar13;
  String SVar14;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar12 = &stack0xffffffffffffff70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = puVar12 + -extraout_x12;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  UVar3 = Foundation::UUID::init();
  SVar14 = Foundation::UUID::get_uuidString(UVar3);
  (**(code **)(lVar10 + 8))
            ((long)to.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  if (DAT_100fc2100 != -1) {
    _swift_once(&DAT_100fc2100,FUN_10038ea74);
  }
  UVar4 = UVar1;
  FUN_1000cd990(UVar1.unknown,&DAT_1010579c8);
  pcVar11 = *(code **)(lVar9 + 0x10);
  UVar6 = UVar1;
  (*pcVar11)(puVar12,UVar4.unknown);
  Foundation::URL::appendingPathComponent(SVar14,UVar6);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  pcVar13 = *(code **)(lVar9 + 8);
  (*pcVar13)(puVar12,UVar1.unknown);
  IVar5 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar6.unknown = puVar12;
  (*pcVar11)(puVar12,UVar4.unknown,UVar1.unknown);
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
  (*pcVar13)(puVar12,UVar1.unknown);
  local_70 = 0;
  IVar8 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (IVar5,pNVar7,1,0,&local_70);
  IVar5 = local_70;
  if ((int)IVar8 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_10003bf2c(param_1.unknown,param_2);
    (*pcVar13)(to.unknown,UVar1.unknown);
  }
  else {
    Foundation::Data::_write(to,(NSDataWritingOptions)0x1,param_1);
    if (unaff_x21 == 0) {
      _swift_getObjCClassFromMetadata();
      _objc_allocWithZone();
      pNVar7 = Foundation::URL::_bridgeToObjectiveC(unaff_x20);
      IVar5 = objc_stub::FUN_100c041a0((ID)unaff_x20.unknown,pNVar7);
      FUN_10003bf2c(param_1.unknown,param_2);
      (*pcVar13)(to.unknown,UVar1.unknown);
    }
    else {
      (*pcVar13)(to.unknown,UVar1.unknown);
      FUN_10003bf2c(param_1.unknown,param_2);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10038e888 | FUN_10038e888 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010038e9ec) */

undefined1  [16] FUN_10038e888(void)

{
  URLResourceValues UVar1;
  URL UVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID unaff_x20;
  long lVar5;
  URLResourceValues forKeys;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  UVar1 = Foundation::URLResourceValues::typeMetadataAccessor();
  lVar8 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar5 - extraout_x12;
  UVar3.unknown = (undefined *)objc_stub::fileURL(unaff_x20);
  if (UVar3.unknown == (undefined *)0x0) {
    forKeys.unknown = (undefined *)0x0;
    UVar3.unknown = &DAT_00000001;
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
    (**(code **)(lVar7 + 0x20))(lVar6,lVar5,UVar2.unknown);
    puVar4 = &DAT_100fbf508;
    FUN_1000037f0(&DAT_100fbf508,&DAT_100c40b90);
    UVar3.unknown = auStack_88;
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined8 *)(puVar4 + 0x20) = *(undefined8 *)PTR__NSURLFileSizeKey_100ea9ae0;
    forKeys.unknown = puVar4;
    FUN_1002fca9c();
    _swift_setDeallocating(puVar4);
    FUN_100313308(puVar4 + 0x20);
    Foundation::URL::_resourceValues((Set<NSURLResourceKey>)forKeys.unknown,UVar3);
    _swift_bridgeObjectRelease();
    Foundation::URLResourceValues::_get_fileSize(forKeys);
    (**(code **)(lVar8 + 8))(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
    (**(code **)(lVar7 + 8))(lVar6,UVar2.unknown);
  }
  auVar9._8_8_ = UVar3.unknown;
  auVar9._0_8_ = forKeys.unknown;
  return auVar9;
}



/* Address: 0x10038ea74 | FUN_10038ea74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10038ea74(undefined8 param_1,undefined8 param_2,URL param_3)

{
  URL UVar1;
  long extraout_x8;
  long lVar2;
  String SVar3;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar2 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  FUN_1000ce204();
  FUN_1000cd990(UVar1.unknown,&DAT_1010579c8);
  _NSTemporaryDirectory();
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar3.bridgeObject = (void *)0xed00006174614474;
  SVar3.str = (char *)0x65737341636e7953;
  Foundation::URL::appendingPathComponent(SVar3,param_3);
  (**(code **)(lVar2 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x10038eb74 | FUN_10038eb74 */

void FUN_10038eb74(void)

{
  undefined8 uVar1;
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar1 = 0x74657373414b43;
  FUN_1000d4624(0x74657373414b43,&DAT_e700000000000000);
  DAT_100fc20f8 = uVar1;
  return;
}



/* Address: 0x10038ebc4 | FUN_10038ebc4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10038ebc4(void)

{
  code *pcVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  NSURL *pNVar5;
  URL UVar6;
  ID IVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  code *local_90;
  code *local_88;
  undefined *local_80;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar11 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined *)(lVar10 - extraout_x12_00);
  local_80 = &_OBJC_CLASS___NSFileManager;
  IVar3 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  if (DAT_100fc2100 != -1) {
    _swift_once(&DAT_100fc2100,FUN_10038ea74);
  }
  UVar6 = UVar2;
  FUN_1000cd990(UVar2.unknown,&DAT_1010579c8);
  local_90 = *(code **)(lVar13 + 0x10);
  UVar4.unknown = puVar9;
  (*local_90)(puVar9,UVar6.unknown,UVar2.unknown);
  pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar4);
  local_88 = *(code **)(lVar13 + 8);
  (*local_88)(puVar9,UVar2.unknown);
  local_70 = 0;
  IVar3 = objc_stub::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                    (IVar3,pNVar5,0,0,&local_70);
  if (IVar3 == 0) {
    uVar8 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
LAB_10038ee70:
    _swift_errorRelease(uVar8);
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    uVar14 = *(ulong *)(IVar3 + 0x10);
    if (uVar14 != 0) {
      uVar12 = 0;
      do {
        if (*(ulong *)(IVar3 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10038eeb0);
          (*pcVar1)();
        }
        (*local_90)(lVar10,IVar3 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                                   ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff)) +
                           *(long *)(lVar13 + 0x48) * uVar12,UVar2.unknown);
        (**(code **)(lVar13 + 0x20))(lVar11,lVar10,UVar2.unknown);
        UVar6.unknown = (undefined *)objc_stub::defaultManager(local_80);
        pNVar5 = Foundation::URL::_bridgeToObjectiveC(UVar6);
        local_70 = 0;
        IVar7 = objc_stub::removeItemAtURL_error_((ID)UVar6.unknown,pNVar5,&local_70);
        if ((int)IVar7 == 0) {
          uVar8 = local_70;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_bridgeObjectRelease(IVar3);
          (*local_88)(lVar11,UVar2.unknown);
          goto LAB_10038ee70;
        }
        uVar12 = uVar12 + 1;
        (*local_88)(lVar11,UVar2.unknown);
      } while (uVar14 != uVar12);
    }
    _swift_bridgeObjectRelease(IVar3);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10038eecc | FUN_10038eecc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010038ef14) */

ID FUN_10038eecc(ID param_1,undefined8 param_2)

{
  ID self;
  ID IVar1;
  ID unaff_x20;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
  self = param_1;
  FUN_1003b09f8(param_1,param_2);
  objc_stub::setRequiresSecureCoding_(self,1);
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithCoder_(unaff_x20,self);
  if (IVar1 == 0) {
    FUN_10003bf2c(param_1,param_2);
    IVar1 = 0;
  }
  else {
    objc_stub::finishDecoding(self);
    FUN_10003bf2c(param_1,param_2);
  }
  return IVar1;
}



/* Address: 0x10038efa8 | FUN_10038efa8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined ** FUN_10038efa8(ID param_1,undefined8 param_2)

{
  URL UVar1;
  URL UVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long extraout_x8;
  long lVar6;
  String SVar7;
  undefined1 auStack_b0 [64];
  undefined *local_70 [3];
  undefined *local_58;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  UVar2.unknown = (undefined *)objc_stub::URIRepresentation(param_1);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar2);
  SVar7 = Foundation::URL::get_absoluteString((URL)0x0);
  (**(code **)(lVar6 + 8))(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  puVar3 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x52557463656a626f;
  *(undefined8 *)(puVar3 + 0x28) = 0xe900000000000049;
  *(String *)(puVar3 + 0x30) = SVar7;
  puVar4 = puVar3;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar3);
  FUN_100005808(puVar3 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar3 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  ppuVar5 = local_70;
  local_70[0] = puVar4;
  local_58 = puVar3;
  FUN_100328974(ppuVar5,0,param_2);
  FUN_100004594(local_70);
  return ppuVar5;
}



/* Address: 0x10038f124 | FUN_10038f124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10038f124(void)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  ID IVar4;
  NSURL *pNVar5;
  ID self;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ID unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  String SVar10;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_70 + -extraout_x8;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  objc_stub::FUN_100c07540(unaff_x20);
  SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  puVar3 = puVar8;
  (**(code **)(lVar9 + 0x30))(puVar8,1,UVar2.unknown);
  if ((int)puVar3 == 1) {
    FUN_100005808(puVar8,&DAT_100fc1a40,&DAT_100c40660);
    goto LAB_10038f3c8;
  }
  (**(code **)(lVar9 + 0x20))(lVar7,puVar8,UVar2.unknown);
  IVar4 = objc_stub::managedObjectContext(unaff_x20);
  if ((IVar4 != 0) && (IVar4 = objc_stub::persistentStoreCoordinator(IVar4), IVar4 != 0)) {
    pNVar5 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
    IVar4 = objc_stub::managedObjectIDForURIRepresentation_(IVar4,pNVar5);
    if (IVar4 == 0) {
      (**(code **)(lVar9 + 8))(lVar7,UVar2.unknown);
      goto LAB_10038f3c8;
    }
    self = objc_stub::managedObjectContext(unaff_x20);
    if (self == 0) {
      (**(code **)(lVar9 + 8))(lVar7,UVar2.unknown);
      goto LAB_10038f3c8;
    }
    local_60 = 0;
    IVar4 = objc_stub::FUN_100c02080(self,IVar4,&local_60);
    if (IVar4 != 0) {
      (**(code **)(lVar9 + 8))(lVar7,UVar2.unknown);
      uVar6 = 0;
      FUN_1003b4868(0);
      _swift_dynamicCastClass(IVar4,uVar6);
      goto LAB_10038f3c8;
    }
    uVar6 = local_60;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar6);
  }
  (**(code **)(lVar9 + 8))(lVar7,UVar2.unknown);
LAB_10038f3c8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10038f400 | FUN_10038f400 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10038f400(ID param_1,undefined8 param_2)

{
  bool bVar1;
  ID IVar2;
  _StringGuts *p_Var3;
  _StringGuts self;
  NSString *pNVar4;
  undefined *puVar5;
  Data DVar6;
  NSData *pNVar7;
  void *pvVar9;
  undefined8 extraout_x1;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  _StringGuts local_68;
  _StringGuts _Stack_60;
  ID local_58;
  void *pvVar8;
  
  IVar2 = objc_stub::recordID(param_1);
  objc_stub::recordName(IVar2);
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar8 = SVar11.bridgeObject;
  IVar2 = objc_stub::zoneID(IVar2);
  FUN_1003905c0(SVar11.str,pvVar8,IVar2,param_2);
  pvVar9 = SVar11.bridgeObject;
  _swift_bridgeObjectRelease(pvVar8);
  if (SVar11.str != (char *)0x0) {
    return;
  }
  IVar2 = param_1;
  FUN_1003b6618();
  if (IVar2 != 0) {
    (**(code **)(IVar2 + 0x78))();
    ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_()
    ;
    _swift_bridgeObjectRelease(pvVar9);
    if (IVar2 != 0) {
      puVar5 = &DAT_100fbee30;
      local_58 = IVar2;
      FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
      p_Var3 = &local_68;
      _swift_dynamicCast(p_Var3,&local_58,puVar5,PTR___type_metadata_for_Swift_String_100eac208,6);
      if (((ulong)p_Var3 & 1) != 0) {
        SVar11.bridgeObject = _Stack_60.unknown;
        SVar11.str = local_68.unknown;
        IVar2 = objc_stub::recordID(param_1);
        objc_stub::recordName(IVar2);
        SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar12 == SVar11) {
          _swift_bridgeObjectRelease(_Stack_60.unknown);
          _Stack_60.unknown = SVar12.bridgeObject;
        }
        else {
          bVar1 = Swift::_stringCompareWithSmolCheck
                            (local_68,_Stack_60,(_StringComparisonResult)(__int8)SVar12.str);
          _swift_bridgeObjectRelease(SVar12.bridgeObject);
          if (!bVar1) {
            IVar2 = objc_stub::recordID(param_1);
            IVar2 = objc_stub::zoneID(IVar2);
            self.unknown = local_68.unknown;
            FUN_1003905c0(local_68.unknown,_Stack_60.unknown,IVar2,param_2);
            _swift_bridgeObjectRelease(_Stack_60.unknown);
            if (self.unknown != (undefined *)0x0) {
              IVar2 = objc_stub::recordID(param_1);
              pNVar4 = (NSString *)objc_stub::recordName(IVar2);
              if (pNVar4 == (NSString *)0x0) {
                SVar11 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(SVar11.bridgeObject);
              }
              objc_stub::FUN_100c0ae80((ID)self.unknown,pNVar4);
              puVar5 = &_OBJC_CLASS___NSKeyedArchiver;
              _objc_allocWithZone();
              IVar2 = objc_stub::FUN_100c039c0((ID)puVar5,1);
              objc_stub::FUN_100c019c0(param_1,IVar2);
              objc_stub::FUN_100c02680(IVar2);
              DVar6.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar2);
              uVar10 = extraout_x1;
              DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
              pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar6);
              FUN_10003bf2c(DVar6.unknown,uVar10);
              objc_stub::FUN_100c0ae60((ID)self.unknown,pNVar7);
              IVar2 = objc_stub::recordID(param_1);
              IVar2 = objc_stub::zoneID(IVar2);
              pNVar4 = (NSString *)objc_stub::ownerName(IVar2);
              if (pNVar4 == (NSString *)0x0) {
                SVar11 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(SVar11.bridgeObject);
              }
              objc_stub::FUN_100c0aec0((ID)self.unknown,pNVar4);
              IVar2 = objc_stub::recordID(param_1);
              IVar2 = objc_stub::zoneID(IVar2);
              pNVar4 = (NSString *)objc_stub::zoneName(IVar2);
              if (pNVar4 == (NSString *)0x0) {
                SVar11 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                _swift_bridgeObjectRelease(SVar11.bridgeObject);
              }
              objc_stub::FUN_100c0aea0((ID)self.unknown,pNVar4);
              return;
            }
            goto LAB_10038f5b0;
          }
        }
        _swift_bridgeObjectRelease(_Stack_60.unknown);
      }
    }
  }
LAB_10038f5b0:
  FUN_100390bac(param_1,param_2);
  return;
}



/* Address: 0x10038f824 | FUN_10038f824 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

CKRecordID * FUN_10038f824(ID param_1)

{
  ulong uVar1;
  CKRecordID *this;
  CKRecordZoneID *zoneID;
  CKRecordID *pCVar2;
  void *pvVar3;
  ID unaff_x20;
  String SVar4;
  
  objc_stub::cloudKitRecordName(unaff_x20);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar3 = SVar4.bridgeObject;
  _swift_bridgeObjectRelease(pvVar3);
  uVar1 = (ulong)SVar4.str & 0xffffffffffff;
  if (((ulong)pvVar3 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    pCVar2 = (CKRecordID *)0x0;
  }
  else {
    this = (CKRecordID *)0x0;
    FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
    objc_stub::cloudKitRecordName(unaff_x20);
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    zoneID = (CKRecordZoneID *)objc_stub::zoneID(param_1);
    pCVar2 = (extension_CloudKit)::__C::CKRecordID::__allocating_init(this,SVar4,zoneID);
  }
  return pCVar2;
}



/* Address: 0x10038f904 | FUN_10038f904 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10038f904(CKRecordID *param_1)

{
  Data DVar1;
  long lVar2;
  CKRecord *this;
  undefined8 extraout_x1;
  undefined8 uVar3;
  ID unaff_x20;
  String recordType;
  
  DVar1.unknown = (undefined *)objc_stub::cloudKitRecordData(unaff_x20);
  if (DVar1.unknown != (undefined *)0x0) {
    uVar3 = extraout_x1;
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    FUN_10000ec2c(0,&DAT_100fc0458,&PTR__OBJC_CLASS___CKRecord_100f8dbc8);
    FUN_10038eecc(DVar1.unknown,uVar3);
    if (DVar1.unknown != (undefined *)0x0) {
      return;
    }
  }
  lVar2 = 0;
  FUN_10038f124();
  if ((lVar2 != 0) && (FUN_10038f824(), param_1 != (CKRecordID *)0x0)) {
    this = (CKRecord *)0x0;
    FUN_10000ec2c(0,&DAT_100fc0458,&PTR__OBJC_CLASS___CKRecord_100f8dbc8);
    _swift_getObjectType();
    recordType = Swift::__typeName(SUB81(lVar2,0));
    (extension_CloudKit)::__C::CKRecord::__allocating_init(this,recordType,param_1);
  }
  return;
}



/* Address: 0x10038fa04 | FUN_10038fa04 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong * FUN_10038fa04(ulong *param_1,ulong *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  _StringGuts _Var5;
  bool bVar6;
  ulong *self;
  ulong *puVar7;
  ulong *puVar8;
  char *pcVar9;
  char *pcVar10;
  Hasher into;
  ulong uVar11;
  String *pSVar12;
  ulong uVar13;
  ulong uVar14;
  code *pcVar15;
  ID unaff_x20;
  long unaff_x21;
  ulong uVar16;
  long lVar17;
  ulong *unaff_x25;
  ulong *puVar18;
  String SVar19;
  undefined1 auStack_a8 [72];
  
  self = param_2;
  FUN_10038f904();
  if (self == (ulong *)0x0) {
    objc_stub::FUN_100c07540(unaff_x20);
    SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pSVar12 = (String *)0x0;
    FUN_10039378c();
    _swift_allocError(&DAT_100ecdce8,pSVar12,0,0);
    *pSVar12 = SVar19;
    _swift_willThrow();
    self = unaff_x25;
  }
  else {
    puVar7 = self;
    FUN_10038f124();
    if (puVar7 == (ulong *)0x0) {
      objc_stub::FUN_100c07540(unaff_x20);
      SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pSVar12 = (String *)0x0;
      FUN_1003937cc();
      _swift_allocError(&DAT_100ecdc68,pSVar12,0,0);
      *pSVar12 = SVar19;
      _swift_willThrow();
    }
    else {
      puVar8 = param_1;
      if (param_1 == (ulong *)0x0) {
        puVar8 = puVar7;
        _swift_getObjectType();
        (*(code *)puVar8[0xc])();
      }
      uVar14 = 1L << ((ulong)(byte)puVar8[4] & 0x3f);
      uVar16 = 0xffffffffffffffff;
      if (((byte)puVar8[4] & 0x3f) < 6) {
        uVar16 = ~(-1L << (uVar14 & 0x3f));
      }
      uVar16 = uVar16 & puVar8[7];
      _swift_bridgeObjectRetain(param_1);
      lVar17 = 0;
joined_r0x00010038fbb8:
      for (; uVar16 != 0; uVar16 = uVar16 - 1 & uVar16) {
        uVar11 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        pSVar12 = (String *)
                  (puVar8[6] + LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) * 0x10 + lVar17 * 0x400);
        pcVar2 = pSVar12->str;
        puVar4 = pSVar12->bridgeObject;
        SVar19 = *pSVar12;
        pcVar15 = *(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar7) + 0xb0);
        _swift_bridgeObjectRetain(puVar4);
        pcVar9 = pcVar2;
        (*pcVar15)(pcVar2,puVar4,param_2);
        if (unaff_x21 != 0) {
          _swift_bridgeObjectRelease(puVar4);
          goto LAB_10038fd5c;
        }
        if (pcVar9 == (char *)0x0) {
          pcVar10 = pcVar9;
          (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar7) + 0x68))();
          puVar18 = self;
          if (*(long *)(pcVar10 + 0x10) != 0) {
            Swift::Hasher::init(*(__int64 *)(pcVar10 + 0x28));
            into.unknown = auStack_a8;
            Swift::String::hash(into,SVar19);
            uVar11 = Swift::Hasher::_finalize(into);
            uVar13 = -1L << ((ulong)(byte)pcVar10[0x20] & 0x3f);
            puVar18 = (ulong *)(uVar11 & (uVar13 ^ 0xffffffffffffffff));
            if ((*(ulong *)(pcVar10 + ((ulong)puVar18 >> 6) * 8 + 0x38) >> ((ulong)puVar18 & 0x3f) &
                1) != 0) {
              while( true ) {
                puVar1 = (undefined8 *)(*(long *)(pcVar10 + 0x30) + (long)puVar18 * 0x10);
                _Var3.unknown = (undefined *)*puVar1;
                _Var5.unknown = (undefined *)puVar1[1];
                if ((_Var3.unknown == pcVar2 && _Var5.unknown == puVar4) ||
                   (bVar6 = Swift::_stringCompareWithSmolCheck
                                      (_Var3,_Var5,(_StringComparisonResult)(__int8)pcVar2), bVar6))
                break;
                puVar18 = (ulong *)((long)puVar18 + 1U & ~uVar13);
                if ((*(ulong *)(pcVar10 + ((ulong)puVar18 >> 6) * 8 + 0x38) >>
                     ((ulong)puVar18 & 0x3f) & 1) == 0) goto LAB_10038fcf8;
              }
              _swift_bridgeObjectRelease(pcVar10);
              goto LAB_10038fb80;
            }
          }
LAB_10038fcf8:
          _swift_bridgeObjectRelease(pcVar10);
          objc_stub::FUN_100c07540(unaff_x20);
          SVar19 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pSVar12 = (String *)0x0;
          FUN_10039380c();
          _swift_allocError(&DAT_100ecdbe8,pSVar12,0,0);
          *pSVar12 = SVar19;
          pSVar12[1].str = pcVar2;
          pSVar12[1].bridgeObject = puVar4;
          _swift_willThrow();
          self = puVar18;
LAB_10038fd5c:
          _swift_release(puVar8);
          return self;
        }
LAB_10038fb80:
        SVar19.bridgeObject = pcVar2;
        SVar19.str = pcVar9;
        (extension_CloudKit)::__C::CKRecord::_setObject(SVar19);
        _swift_bridgeObjectRelease(puVar4);
        _swift_unknownObjectRelease(pcVar9);
      }
      bVar6 = SCARRY8(lVar17,1);
      lVar17 = lVar17 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10038fe1c);
        (*pcVar15)();
      }
      if (lVar17 < (long)(uVar14 + 0x3f >> 6)) {
        uVar16 = (puVar8 + 7)[lVar17];
        goto joined_r0x00010038fbb8;
      }
      _swift_release(puVar8);
      (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar7) + 0xa8))(param_2);
      if (unaff_x21 == 0) {
        objc_stub::FUN_100c0cfc0((ID)self,param_2);
      }
    }
  }
  return self;
}



/* Address: 0x10038fe1c | _TtC9PasteCore14ObjectMetadata::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore14ObjectMetadata::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x10038fe70 | _TtC9PasteCore14ObjectMetadata::.cxx_construct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore14ObjectMetadata::_cxx_construct(ID param_1,SEL param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = telemetry;
  puVar2 = &DAT_100c43dc0;
  _swift_getKeyPath();
  puVar3 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_1 + lVar1) = puVar2;
  return;
}



/* Address: 0x10038fee4 | _TtC9PasteCore14ObjectMetadata::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore14ObjectMetadata::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + telemetry));
  return;
}



/* Address: 0x10038fef4 | FUN_10038fef4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10038fef4(void)

{
  return ZEXT816(0x100f98428);
}



/* Address: 0x10038ff14 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10038ff18 | FUN_10038ff18 */

void FUN_10038ff18(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100c43dc0;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_allocObject();
  FUN_1000da6e0();
  DAT_100fc2148 = puVar1;
  return;
}



/* Address: 0x10038ff74 | FUN_10038ff74 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100390068) */

ID FUN_10038ff74(ID param_1,ID param_2)

{
  URL UVar1;
  ID IVar2;
  undefined8 uVar3;
  ID IVar4;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar5;
  undefined *self;
  ID IVar6;
  NSString *pNVar7;
  URL UVar8;
  long extraout_x8;
  ID unaff_x20;
  long unaff_x21;
  long lVar9;
  String SVar10;
  String zoneName;
  String zoneName_00;
  void *local_b0;
  char *local_a8;
  void *local_a0;
  long local_98;
  CKRecordZoneID *local_90;
  ID local_88;
  undefined8 local_80;
  ID local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  local_70 = 0;
  IVar2 = objc_stub::FUN_100c02080(param_2,param_1,&local_70);
  IVar6 = local_70;
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(IVar6);
    IVar6 = 0;
  }
  else {
    uVar3 = 0;
    FUN_1003b4868();
    _swift_dynamicCastClass();
    if (IVar2 == 0) {
      IVar6 = 0;
    }
    else {
      IVar4 = IVar6;
      FUN_1003b41b8();
      if (unaff_x21 == 0) {
        local_88 = IVar4;
        local_80 = uVar3;
        FUN_1003903f8(IVar2,param_2);
        this = (CKRecordZoneID *)0x0;
        local_98 = lVar9;
        if (IVar2 == 0) {
          FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
          SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          zoneName_00.bridgeObject = &DAT_e500000000000000;
          zoneName_00.str = (char *)0x6574736150;
          pCVar5 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                             (this,zoneName_00,SVar10);
          self = &_OBJC_CLASS___CKRecordZone;
          _objc_allocWithZone();
          IVar6 = objc_stub::initWithZoneID_((ID)self,pCVar5);
          pCVar5 = (CKRecordZoneID *)objc_stub::zoneID(IVar6);
        }
        else {
          FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
          objc_stub::cloudKitZoneName(IVar2);
          SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          local_a0 = SVar10.bridgeObject;
          local_90 = (CKRecordZoneID *)SVar10.str;
          objc_stub::cloudKitZoneOwnerName(IVar2);
          SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          local_b0 = SVar10.bridgeObject;
          local_a8 = SVar10.str;
          zoneName.bridgeObject = local_a0;
          zoneName.str = (char *)local_90;
          pCVar5 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init
                             (this,zoneName,SVar10);
        }
        IVar6 = local_88;
        FUN_1003905c0(local_88,local_80,pCVar5,param_2);
        lVar9 = local_98;
        IVar2 = 0;
        local_90 = pCVar5;
        if (IVar6 != 0) {
          FUN_10038f124();
          if (IVar2 != 0) {
            IVar2 = objc_stub::isDeleted(IVar2);
            local_a0 = (void *)CONCAT44(local_a0._4_4_,(int)IVar2);
            if ((IVar2 & 1) == 0) {
              _swift_bridgeObjectRelease(local_80);
              goto LAB_1003900c4;
            }
          }
          IVar2 = objc_stub::managedObjectContext(IVar6);
          objc_stub::deleteObject_(IVar2,IVar6);
        }
        _swift_getObjCClassFromMetadata();
        _objc_allocWithZone();
        IVar6 = objc_stub::initWithContext_(unaff_x20,param_2);
        pCVar5 = local_90;
        pNVar7 = (NSString *)objc_stub::ownerName((ID)local_90);
        if (pNVar7 == (NSString *)0x0) {
          SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          pCVar5 = local_90;
          _swift_bridgeObjectRelease(SVar10.bridgeObject);
        }
        objc_stub::FUN_100c0aec0(IVar6,pNVar7);
        pNVar7 = (NSString *)objc_stub::zoneName((ID)pCVar5);
        if (pNVar7 == (NSString *)0x0) {
          SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(SVar10.bridgeObject);
        }
        objc_stub::FUN_100c0aea0(IVar6,pNVar7);
        UVar8.unknown = (undefined *)objc_stub::URIRepresentation(param_1);
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
        SVar10 = Foundation::URL::get_absoluteString((URL)0x0);
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar10.bridgeObject);
        (**(code **)(lVar9 + 8))
                  ((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
        objc_stub::FUN_100c0ce20(IVar6,pNVar7);
        uVar3 = local_80;
        pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(uVar3);
        objc_stub::FUN_100c0ae80(IVar6,pNVar7);
      }
    }
  }
LAB_1003900c4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003903f8 | FUN_1003903f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003905a0) */

long FUN_1003903f8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_10039076c(param_1,param_2);
  lVar3 = 0;
  if (unaff_x21 == 0) {
    while ((lVar2 = param_1, param_1 = 0, lVar2 != 0 && (FUN_10038f124(), param_1 != 0))) {
      FUN_10039076c(param_1,param_2);
      lVar3 = lVar2;
    }
  }
  else {
    lVar3 = 0;
    if (DAT_100fc2140 != -1) {
      _swift_once(&DAT_100fc2140,FUN_10038ff18);
    }
    FUN_1000da768(auStack_78);
    lVar2 = lStack_58;
    uVar1 = local_60;
    FUN_100004640(auStack_78,local_60);
    (**(code **)(lVar2 + 0x30))
              (0x636e7973,&DAT_e400000000000000,0xd000000000000016,0x8000000100da4150,uVar1,lVar2);
    FUN_100004594(auStack_78);
    FUN_1000da768(auStack_78);
    FUN_100004640(auStack_78,local_60);
    (**(code **)(lStack_58 + 0x20))(unaff_x21,local_60,lStack_58);
    _swift_errorRelease(unaff_x21);
    FUN_100004594(auStack_78);
  }
  return lVar3;
}



/* Address: 0x1003905c0 | FUN_1003905c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined ** FUN_1003905c0(undefined8 param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  String SVar5;
  undefined *local_80 [3];
  undefined *local_68;
  
  puVar1 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar1 + 0x28) = 0x8000000100da2b30;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  *(undefined8 *)(puVar1 + 0x40) = 0xd000000000000010;
  *(undefined8 *)(puVar1 + 0x48) = 0x8000000100da2b50;
  _swift_bridgeObjectRetain(param_2);
  objc_stub::zoneName(param_3);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x50) = SVar5;
  *(undefined8 *)(puVar1 + 0x60) = 0xd000000000000015;
  *(undefined8 *)(puVar1 + 0x68) = 0x8000000100da2b70;
  objc_stub::ownerName(param_3);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x70) = SVar5;
  puVar2 = puVar1;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar1);
  puVar3 = &DAT_100fbef70;
  FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
  _swift_arrayDestroy(puVar1 + 0x20,3,puVar3);
  puVar1 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  ppuVar4 = local_80;
  local_80[0] = puVar2;
  local_68 = puVar1;
  FUN_100328974(ppuVar4,0,param_4);
  FUN_100004594(local_80);
  return ppuVar4;
}



/* Address: 0x10039076c | FUN_10039076c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100390a70) */

ID FUN_10039076c(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar4;
  undefined *self;
  ID IVar5;
  Dictionary<undefined,undefined> DVar6;
  ID IVar7;
  NSString *pNVar8;
  undefined8 uVar9;
  _StringGuts _Var10;
  _StringGuts _Var11;
  ulong uVar12;
  ulong uVar13;
  long unaff_x21;
  long lVar14;
  String SVar15;
  String SVar16;
  char *local_b8;
  undefined *local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  ID local_58;
  
  this = (CKRecordZoneID *)0x0;
  FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
  SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar16.bridgeObject = &DAT_e500000000000000;
  SVar16.str = (char *)0x6574736150;
  pCVar4 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(this,SVar16,SVar15);
  self = &_OBJC_CLASS___CKRecordZone;
  _objc_allocWithZone();
  IVar5 = objc_stub::initWithZoneID_((ID)self,pCVar4);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_1) + 0xa8))();
  IVar7 = 0;
  if (unaff_x21 == 0) {
    if (IVar5 == 0) {
LAB_100390b1c:
      IVar7 = 0;
    }
    else {
      IVar5 = objc_stub::recordID(IVar5);
      objc_stub::recordName(IVar5);
      SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar5 = objc_stub::entity((ID)param_1);
      objc_stub::FUN_100c08e00(IVar5);
      FUN_10000ec2c(0,&DAT_100fc2158,&PTR__OBJC_CLASS___NSRelationshipDescription_100f8dc20);
      DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      lVar14 = 0;
      uVar12 = 1L << ((ulong)(byte)DVar6.unknown[0x20] & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if ((DVar6.unknown[0x20] & 0x3f) < 6) {
        uVar13 = ~(-1L << (uVar12 & 0x3f));
      }
      uVar13 = uVar13 & *(ulong *)(DVar6.unknown + 0x40);
      do {
        do {
          while( true ) {
            do {
              local_b0 = SVar15.bridgeObject;
              while (uVar13 == 0) {
                bVar3 = SCARRY8(lVar14,1);
                lVar14 = lVar14 + 1;
                if (bVar3) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100390b48);
                  (*pcVar2)();
                }
                if ((long)(uVar12 + 0x3f >> 6) <= lVar14) {
                  _swift_release(DVar6.unknown);
                  _swift_bridgeObjectRelease(local_b0);
                  goto LAB_100390b1c;
                }
                uVar13 = *(ulong *)((long)(DVar6.unknown + 0x40) + lVar14 * 8);
              }
              uVar1 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
              uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
              uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
              uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
              uVar13 = uVar13 - 1 & uVar13;
              IVar5 = *(ID *)(*(long *)(DVar6.unknown + 0x38) +
                              LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) * 8 + lVar14 * 0x200);
              IVar7 = objc_stub::FUN_100c05d40(IVar5);
            } while ((IVar7 & 1) != 0);
            pNVar8 = (NSString *)objc_stub::name(IVar5);
            if (pNVar8 == (NSString *)0x0) {
              SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(SVar16.bridgeObject);
            }
            IVar5 = objc_stub::FUN_100c112a0((ID)param_1,pNVar8);
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
            uStack_78 = uStack_98;
            local_80 = local_a0;
            local_68 = lStack_88;
            uStack_70 = uStack_90;
            if (lStack_88 != 0) break;
            FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
          }
          uVar9 = 0;
          FUN_1003b4868(0);
          _Var10.unknown = (undefined *)&local_58;
          _Var11.unknown = (undefined *)&local_80;
          _swift_dynamicCast(_Var10.unknown,_Var11.unknown,PTR___type_metadata_for_Any_100eae0c0 + 8
                             ,uVar9,6);
          IVar5 = local_58;
        } while (((ulong)_Var10.unknown & 1) == 0);
        FUN_1003b41b8();
        local_b8 = SVar15.str;
        if ((_Var10.unknown == local_b8) && (_Var11.unknown == local_b0)) {
          _swift_bridgeObjectRelease(local_b0);
          local_b0 = _Var11.unknown;
          break;
        }
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var10,_Var11,(_StringComparisonResult)(__int8)SVar15.str);
        _swift_bridgeObjectRelease(_Var11.unknown);
      } while (!bVar3);
      _swift_bridgeObjectRelease(local_b0);
      IVar7 = objc_stub::objectID(IVar5);
      FUN_10038efa8(IVar7,param_2);
      _swift_release(DVar6.unknown);
    }
  }
  return IVar7;
}



/* Address: 0x100390bac | FUN_100390bac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100390bac(ID param_1,ID param_2)

{
  void *pvVar1;
  URL UVar2;
  NSArray *pNVar3;
  ID IVar4;
  ID IVar5;
  NSString *pNVar6;
  undefined *puVar7;
  Data DVar8;
  NSData *pNVar9;
  undefined8 uVar10;
  CKRecord *pCVar11;
  URL UVar12;
  undefined8 extraout_x1;
  _StringGuts _Var13;
  undefined8 extraout_x1_00;
  undefined8 *puVar14;
  long extraout_x8;
  ID unaff_x20;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [8];
  String local_a8;
  undefined8 local_90 [3];
  undefined *local_78;
  long lStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  IVar5 = param_1;
  FUN_100393104(param_1,param_2);
  puVar7 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(ID *)(puVar7 + 0x20) = IVar5;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar7);
  local_90[0] = 0;
  puVar14 = local_90;
  IVar4 = objc_stub::FUN_100c075e0(param_2);
  if ((int)IVar4 == 0) {
    uVar10 = local_90[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    if (DAT_100fc2140 != -1) {
      _swift_once(&DAT_100fc2140,FUN_10038ff18);
    }
    FUN_1000da768(local_90);
    _Var13.unknown = local_78;
    FUN_100004640(local_90);
    local_a8.str = (char *)0x0;
    local_a8.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x27,_Var13);
    pCVar11 = (CKRecord *)0xd00000000000001e;
    SVar16.bridgeObject = (void *)0x8000000100da4100;
    SVar16.str = (char *)0xd00000000000001e;
    SVar21.bridgeObject = puVar14;
    SVar21.str = (char *)pNVar3;
    Swift::String::append(SVar16,SVar21);
    SVar16 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar11);
    SVar22.bridgeObject = puVar14;
    SVar22.str = (char *)pNVar3;
    Swift::String::append(SVar16,SVar22);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar17.bridgeObject = (void *)0xe100000000000000;
    SVar17.str = (char *)0x2f;
    SVar23.bridgeObject = puVar14;
    SVar23.str = (char *)pNVar3;
    Swift::String::append(SVar17,SVar23);
    IVar5 = objc_stub::recordID(param_1);
    objc_stub::recordName(IVar5);
    SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar24.bridgeObject = puVar14;
    SVar24.str = (char *)pNVar3;
    Swift::String::append(SVar16,SVar24);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar18.bridgeObject = &SUB_e200000000000000;
    SVar18.str = (char *)0x203a;
    SVar25.bridgeObject = puVar14;
    SVar25.str = (char *)pNVar3;
    Swift::String::append(SVar18,SVar25);
    _swift_getErrorValue(uVar10,auStack_b0,&local_c8);
    Swift::DefaultStringInterpolation::_appendInterpolation(local_c8,uStack_c0);
    pvVar1 = local_a8.bridgeObject;
    (**(code **)(lStack_70 + 0x30))
              (0x636e7973,&DAT_e400000000000000,local_a8.str,local_a8.bridgeObject,local_78,
               lStack_70);
    _swift_errorRelease(uVar10);
    _swift_bridgeObjectRelease(pvVar1);
    FUN_100004594(local_90);
    IVar4 = 0;
  }
  else {
    IVar4 = objc_stub::objectID(IVar5);
    FUN_10038efa8(IVar4,param_2);
    if (IVar4 == 0) {
      _swift_getObjCClassFromMetadata();
      _objc_allocWithZone();
      IVar4 = objc_stub::initWithContext_(unaff_x20,param_2);
      IVar5 = objc_stub::objectID(IVar5);
      UVar12.unknown = (undefined *)objc_stub::URIRepresentation(IVar5);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar12);
      SVar16 = Foundation::URL::get_absoluteString((URL)0x0);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar16.bridgeObject);
      (**(code **)(lVar15 + 8))
                (auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
      objc_stub::FUN_100c0ce20(IVar4,pNVar6);
      IVar5 = objc_stub::recordID(param_1);
      pNVar6 = (NSString *)objc_stub::recordName(IVar5);
      if (pNVar6 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      objc_stub::FUN_100c0ae80(IVar4,pNVar6);
      puVar7 = &_OBJC_CLASS___NSKeyedArchiver;
      _objc_allocWithZone();
      IVar5 = objc_stub::FUN_100c039c0((ID)puVar7,1);
      objc_stub::FUN_100c019c0(param_1,IVar5);
      objc_stub::FUN_100c02680(IVar5);
      DVar8.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar5);
      uVar10 = extraout_x1_00;
      DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
      pNVar9 = Foundation::Data::_bridgeToObjectiveC(DVar8);
      FUN_10003bf2c(DVar8.unknown,uVar10);
      objc_stub::FUN_100c0ae60(IVar4,pNVar9);
      IVar5 = objc_stub::recordID(param_1);
      IVar5 = objc_stub::zoneID(IVar5);
      pNVar6 = (NSString *)objc_stub::ownerName(IVar5);
      if (pNVar6 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      objc_stub::FUN_100c0aec0(IVar4,pNVar6);
      IVar5 = objc_stub::recordID(param_1);
      IVar5 = objc_stub::zoneID(IVar5);
      pNVar6 = (NSString *)objc_stub::zoneName(IVar5);
      if (pNVar6 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      objc_stub::FUN_100c0aea0(IVar4);
      lVar15 = 0;
      FUN_10038f124();
      if (lVar15 == 0) {
        if (DAT_100fc2140 != -1) {
          _swift_once(&DAT_100fc2140,FUN_10038ff18);
        }
        FUN_1000da768(local_90);
        pCVar11 = (CKRecord *)local_90;
        FUN_100004640(pCVar11,local_78);
        local_a8 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar11);
        SVar19.bridgeObject = (void *)0xe100000000000000;
        SVar19.str = (char *)0x2f;
        SVar26.bridgeObject = puVar14;
        SVar26.str = (char *)pNVar6;
        Swift::String::append(SVar19,SVar26);
        IVar5 = objc_stub::recordID(param_1);
        objc_stub::recordName(IVar5);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar27.bridgeObject = puVar14;
        SVar27.str = (char *)pNVar6;
        Swift::String::append(SVar16,SVar27);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar20.bridgeObject = &DAT_e500000000000000;
        SVar20.str = (char *)0x3d49525520;
        SVar28.bridgeObject = puVar14;
        SVar28.str = (char *)pNVar6;
        Swift::String::append(SVar20,SVar28);
        objc_stub::FUN_100c07540(IVar4);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        SVar29.bridgeObject = puVar14;
        SVar29.str = (char *)pNVar6;
        Swift::String::append(SVar16,SVar29);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        SVar16 = local_a8;
        pvVar1 = local_a8.bridgeObject;
        local_a8.bridgeObject = (void *)0x8000000100da4120;
        local_a8.str = (char *)0xd000000000000028;
        SVar30.bridgeObject = puVar14;
        SVar30.str = (char *)pNVar6;
        Swift::String::append(SVar16,SVar30);
        _swift_bridgeObjectRelease(pvVar1);
        pvVar1 = local_a8.bridgeObject;
        (**(code **)(lStack_70 + 0x30))
                  (0x636e7973,&DAT_e400000000000000,local_a8.str,local_a8.bridgeObject,local_78,
                   lStack_70);
        _swift_bridgeObjectRelease(pvVar1);
        FUN_100004594(local_90);
      }
    }
    else {
      IVar5 = objc_stub::recordID(param_1);
      pNVar6 = (NSString *)objc_stub::recordName(IVar5);
      if (pNVar6 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      objc_stub::FUN_100c0ae80(IVar4,pNVar6);
      puVar7 = &_OBJC_CLASS___NSKeyedArchiver;
      _objc_allocWithZone();
      IVar5 = objc_stub::FUN_100c039c0((ID)puVar7,1);
      objc_stub::FUN_100c019c0(param_1,IVar5);
      objc_stub::FUN_100c02680(IVar5);
      DVar8.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar5);
      uVar10 = extraout_x1;
      DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
      pNVar9 = Foundation::Data::_bridgeToObjectiveC(DVar8);
      FUN_10003bf2c(DVar8.unknown,uVar10);
      objc_stub::FUN_100c0ae60(IVar4,pNVar9);
      IVar5 = objc_stub::recordID(param_1);
      IVar5 = objc_stub::zoneID(IVar5);
      pNVar6 = (NSString *)objc_stub::ownerName(IVar5);
      if (pNVar6 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      objc_stub::FUN_100c0aec0(IVar4,pNVar6);
      IVar5 = objc_stub::recordID(param_1);
      IVar5 = objc_stub::zoneID(IVar5);
      pNVar6 = (NSString *)objc_stub::zoneName(IVar5);
      if (pNVar6 == (NSString *)0x0) {
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
      objc_stub::FUN_100c0aea0(IVar4,pNVar6);
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar4;
}



/* Address: 0x1003914e8 | FUN_1003914e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003914e8(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  FUN_10038f124();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    uVar1 = 0;
    FUN_10032b0c8(0);
    _swift_dynamicCastClass(param_1,uVar1);
    lVar2 = param_1;
    if (param_1 == 0) {
      param_1 = 0;
    }
  }
  FUN_10038f124();
  if (param_1 != 0) {
    uVar1 = 0;
    FUN_10032b0c8(0);
    _swift_dynamicCastClass(param_1,uVar1);
    if (param_1 != 0) {
      if (lVar2 != 0) {
        return false;
      }
      return true;
    }
  }
  if (lVar2 == 0) {
    return false;
  }
  return lVar2 == 0;
}



/* Address: 0x1003915b8 | FUN_1003915b8 */

void FUN_1003915b8(ulong *param_1)

{
  ContiguousArray CVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_1 = uVar4;
  if ((uVar5 & 1) == 0) {
    FUN_100392bb0();
    *param_1 = uVar4;
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  CVar1.unknown = (undefined *)Swift::_minimumMergeRunLength(uVar5);
  if ((long)CVar1.unknown < (long)uVar5) {
    uVar4 = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = CVar1.unknown;
      FUN_10038fef4();
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(uVar4,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = uVar4;
    }
    local_68 = _Var3.unknown + 0x20;
    CVar2.unknown = (undefined *)&local_68;
    uStack_60 = uVar4;
    FUN_1003916d0(CVar2.unknown,auStack_58,&local_50,CVar1.unknown);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    Swift::ContiguousArray::__endMutation(CVar2);
    _swift_release();
    CVar1.unknown = _Var3.unknown;
  }
  else if (uVar5 != 0) {
    CVar1.unknown = (undefined *)0x0;
    FUN_10039225c(0,uVar5,1,&local_50);
  }
  Swift::ContiguousArray::__endMutation(CVar1);
  return;
}



/* Address: 0x1003916d0 | FUN_1003916d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003916d0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  URL UVar4;
  undefined8 uVar5;
  ID IVar6;
  ID IVar7;
  NSURL *pNVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ID *pIVar17;
  long extraout_x12;
  long extraout_x12_00;
  long lVar18;
  ID IVar19;
  long unaff_x21;
  long lVar20;
  ulong uVar21;
  String SVar22;
  long local_110;
  long *plStack_108;
  long *local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  ID *local_d8;
  long lStack_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  ID local_a8;
  undefined *local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  ID local_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar11 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar14 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar14 - extraout_x12;
  local_b8 = lVar12;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  local_98 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_c0 = lVar12 - extraout_x12_00;
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar12 = param_3[1];
  if (0 < lVar12) {
    lVar18 = 0;
    local_110 = param_4;
    plStack_108 = param_1;
    local_100 = param_3;
    local_c8 = lVar14;
    local_a0 = UVar4.unknown;
    do {
      lVar14 = lVar18 + 1;
      local_f0 = lVar18;
      if (lVar14 < lVar12) {
        lVar20 = *param_3;
        local_a8 = *(ID *)(lVar20 + lVar14 * 8);
        local_88 = *(undefined8 *)(lVar20 + lVar18 * 8);
        pIVar17 = &local_80;
        local_80 = local_a8;
        FUN_1003914e8(pIVar17,&local_88);
        if (unaff_x21 != 0) goto LAB_1003921d8;
        lVar14 = lVar18 + 2;
        if (lVar14 < lVar12) {
          lVar20 = lVar20 + lVar18 * 8 + 0x10;
          lVar13 = lVar14;
          do {
            lVar14 = lVar13;
            lVar18 = *(long *)(lVar20 + -8);
            FUN_10038f124();
            if (lVar18 == 0) {
              lVar13 = 0;
            }
            else {
              uVar5 = 0;
              FUN_10032b0c8(0);
              _swift_dynamicCastClass(lVar18,uVar5);
              lVar13 = lVar18;
              if (lVar18 == 0) {
                lVar18 = 0;
              }
            }
            FUN_10038f124();
            if (lVar18 == 0) {
LAB_100391988:
              param_4 = local_110;
              param_1 = plStack_108;
              lVar18 = local_f0;
              if (lVar13 == 0) goto joined_r0x000100391998;
LAB_100391898:
              lVar18 = local_f0;
              param_4 = local_110;
              param_1 = plStack_108;
              if ((((uint)pIVar17 ^ (uint)(lVar13 == 0)) & 1) != 0) break;
            }
            else {
              uVar5 = 0;
              FUN_10032b0c8(0);
              _swift_dynamicCastClass(lVar18,uVar5);
              if (lVar18 == 0) goto LAB_100391988;
              param_4 = local_110;
              param_1 = plStack_108;
              lVar18 = local_f0;
              if (lVar13 == 0) goto LAB_100391898;
joined_r0x000100391998:
              local_110 = param_4;
              plStack_108 = param_1;
              local_f0 = lVar18;
              if (((ulong)pIVar17 & 1) != 0) goto LAB_1003919f8;
            }
            lVar20 = lVar20 + 8;
            lVar13 = lVar14 + 1;
            lVar18 = local_f0;
            param_4 = local_110;
            param_1 = plStack_108;
            lVar14 = lVar12;
          } while (lVar12 != lVar13);
        }
        param_3 = local_100;
        if (((ulong)pIVar17 & 1) != 0) {
LAB_1003919f8:
          if (lVar14 < lVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10039222c);
            (*pcVar2)();
          }
          param_3 = local_100;
          if (lVar18 < lVar14) {
            lVar13 = *local_100;
            puVar15 = (undefined8 *)(lVar13 + lVar14 * 8);
            puVar16 = (undefined8 *)(lVar13 + lVar18 * 8);
            lVar20 = lVar14;
            lVar12 = lVar18;
            do {
              puVar15 = puVar15 + -1;
              lVar20 = lVar20 + -1;
              if (lVar12 != lVar20) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x10039224c);
                  (*pcVar2)();
                }
                uVar5 = *puVar16;
                *puVar16 = *puVar15;
                *puVar15 = uVar5;
              }
              lVar12 = lVar12 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar12 < lVar20);
          }
        }
      }
      lVar13 = param_3[1];
      lVar12 = lVar18;
      lVar20 = lVar14;
      if (lVar14 < lVar13) {
        if (SBORROW8(lVar14,lVar18)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100392228);
          (*pcVar2)();
        }
        if (lVar14 - lVar18 < param_4) {
          if (SCARRY8(lVar18,param_4)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100392230);
            (*pcVar2)();
          }
          lVar1 = lVar18 + param_4;
          if (lVar13 <= lVar18 + param_4) {
            lVar1 = lVar13;
          }
          if (lVar1 < lVar18) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100392234);
            (*pcVar2)();
          }
          if (lVar14 != lVar1) {
            local_b0 = *param_3;
            pIVar17 = (ID *)(local_b0 + lVar14 * 8 + -8);
            lVar18 = lVar18 - lVar14;
            lVar13 = local_98;
            local_f8 = unaff_x21;
            local_e8 = lVar1;
            do {
              IVar6 = *(ID *)(local_b0 + lVar14 * 8);
              local_e0 = lVar18;
              local_d8 = pIVar17;
              lStack_d0 = lVar14;
LAB_100391ac8:
              IVar19 = *pIVar17;
              objc_stub::FUN_100c07540(IVar6);
              SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              lVar12 = local_b8;
              Foundation::URL::_init();
              _swift_bridgeObjectRelease(SVar22.bridgeObject);
              puVar11 = local_a0;
              pcVar2 = *(code **)(lVar13 + 0x30);
              lVar14 = lVar12;
              (*pcVar2)(lVar12,1,local_a0);
              local_a8 = IVar6;
              if ((int)lVar14 == 1) {
                FUN_100005808(lVar12,&DAT_100fc1a40,&DAT_100c40660);
LAB_100391cf0:
                IVar6 = 0;
              }
              else {
                (**(code **)(lVar13 + 0x20))(local_c0,lVar12,puVar11);
                IVar7 = objc_stub::managedObjectContext(IVar6);
                if ((IVar7 == 0) ||
                   (IVar7 = objc_stub::persistentStoreCoordinator(IVar7), lVar12 = local_c0,
                   IVar7 == 0)) {
                  (**(code **)(local_98 + 8))(local_c0,puVar11);
                  goto LAB_100391cf0;
                }
                pNVar8 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
                IVar7 = objc_stub::managedObjectIDForURIRepresentation_(IVar7,pNVar8);
                puVar11 = local_a0;
                if (IVar7 == 0) {
                  (**(code **)(local_98 + 8))(lVar12,local_a0);
                  goto LAB_100391cf0;
                }
                IVar6 = objc_stub::managedObjectContext(IVar6);
                puVar11 = local_a0;
                if (IVar6 == 0) {
                  (**(code **)(local_98 + 8))(lVar12,local_a0);
                  goto LAB_100391cf0;
                }
                local_80 = 0;
                IVar6 = objc_stub::FUN_100c02080(IVar6,IVar7,&local_80);
                if (IVar6 == 0) {
                  IVar6 = local_80;
                  Foundation::__convertNSErrorToError();
                  _swift_willThrow(0);
                  _swift_errorRelease(IVar6);
                  puVar11 = local_a0;
                  (**(code **)(local_98 + 8))(lVar12,local_a0);
                  IVar6 = 0;
                  local_f8 = 0;
                }
                else {
                  (**(code **)(local_98 + 8))(lVar12,local_a0);
                  uVar5 = 0;
                  FUN_1003b4868(0);
                  _swift_dynamicCastClass(IVar6,uVar5);
                  if (IVar6 == 0) {
                    IVar6 = 0;
                    puVar11 = local_a0;
                  }
                  else {
                    uVar5 = 0;
                    FUN_10032b0c8(0);
                    _swift_dynamicCastClass(IVar6,uVar5);
                    puVar11 = local_a0;
                  }
                }
              }
              objc_stub::FUN_100c07540(IVar19);
              SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC
                                 ();
              lVar12 = local_c8;
              Foundation::URL::_init();
              _swift_bridgeObjectRelease(SVar22.bridgeObject);
              lVar14 = lVar12;
              (*pcVar2)(lVar12,1,puVar11);
              lVar13 = local_98;
              if ((int)lVar14 != 1) {
                (**(code **)(local_98 + 0x20))(local_90,lVar12,puVar11);
                IVar7 = objc_stub::managedObjectContext(IVar19);
                if ((IVar7 == 0) ||
                   (IVar7 = objc_stub::persistentStoreCoordinator(IVar7), IVar7 == 0)) {
                  (**(code **)(lVar13 + 8))(local_90,puVar11);
                  goto LAB_100392024;
                }
                pNVar8 = Foundation::URL::_bridgeToObjectiveC((URL)0x0);
                IVar7 = objc_stub::managedObjectIDForURIRepresentation_(IVar7,pNVar8);
                if (IVar7 == 0) {
                  (**(code **)(lVar13 + 8))(local_90,local_a0);
                  goto LAB_100392024;
                }
                IVar19 = objc_stub::managedObjectContext(IVar19);
                lVar13 = local_98;
                if (IVar19 == 0) {
                  (**(code **)(local_98 + 8))(local_90,local_a0);
                  goto LAB_100392024;
                }
                local_80 = 0;
                IVar19 = objc_stub::FUN_100c02080(IVar19,IVar7,&local_80);
                lVar13 = local_98;
                if (IVar19 == 0) {
                  IVar6 = local_80;
                  Foundation::__convertNSErrorToError();
                  _swift_willThrow(0);
                  _swift_errorRelease(IVar6);
                  lVar13 = local_98;
                  (**(code **)(local_98 + 8))(local_90,local_a0);
                  local_f8 = 0;
                  goto LAB_100392024;
                }
                (**(code **)(local_98 + 8))(local_90,local_a0);
                uVar5 = 0;
                FUN_1003b4868(0);
                _swift_dynamicCastClass(IVar19,uVar5);
                if (IVar19 == 0) goto LAB_100392024;
                uVar5 = 0;
                FUN_10032b0c8(0);
                _swift_dynamicCastClass(IVar19,uVar5);
                if ((IVar19 == 0) || (IVar6 != 0)) goto LAB_100392024;
                if (local_b0 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100392248);
                  (*pcVar2)();
                }
                IVar19 = *pIVar17;
                IVar6 = pIVar17[1];
                *pIVar17 = IVar6;
                pIVar17[1] = IVar19;
                bVar3 = lVar18 == -1;
                lVar18 = lVar18 + 1;
                pIVar17 = pIVar17 + -1;
                if (bVar3) goto LAB_100392024;
                goto LAB_100391ac8;
              }
              FUN_100005808(lVar12,&DAT_100fc1a40,&DAT_100c40660);
              lVar13 = local_98;
LAB_100392024:
              lVar14 = lStack_d0 + 1;
              pIVar17 = local_d8 + 1;
              lVar18 = local_e0 + -1;
              lVar12 = local_f0;
              param_4 = local_110;
              param_1 = plStack_108;
              lVar20 = local_e8;
              param_3 = local_100;
              unaff_x21 = local_f8;
            } while (lVar14 != local_e8);
          }
        }
      }
      lVar18 = lVar20;
      puVar11 = local_78;
      if (lVar18 < lVar12) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10039221c);
        (*pcVar2)();
      }
      puVar9 = local_78;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100392630(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar21 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar21) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100392630(puVar11,uVar21 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar21 + 1;
      *(long *)(puVar11 + uVar21 * 0x10 + 0x20) = local_f0;
      *(long *)(puVar11 + uVar21 * 0x10 + 0x28) = lVar18;
      local_78 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100392250);
        (*pcVar2)();
      }
      FUN_1003923c8(&local_78,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1003921d8;
      lVar12 = param_3[1];
    } while (lVar18 < lVar12);
    unaff_x21 = 0;
  }
  puVar11 = local_78;
  lVar12 = *param_1;
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10039225c);
    (*pcVar2)();
  }
  puVar9 = local_78;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100392b74();
  }
  uVar21 = *(ulong *)(puVar11 + 0x10);
  while (local_78 = puVar11, 1 < uVar21) {
    lVar14 = *param_3;
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100392254);
      (*pcVar2)();
    }
    lVar20 = uVar21 - 1;
    lVar13 = *(long *)(puVar11 + uVar21 * 0x10);
    lVar18 = *(long *)(puVar11 + lVar20 * 0x10 + 0x28);
    FUN_100392730(lVar14 + lVar13 * 8,lVar14 + *(long *)(puVar11 + lVar20 * 0x10 + 0x20) * 8,
                  lVar14 + lVar18 * 8,lVar12);
    if (unaff_x21 != 0) break;
    if (lVar18 < lVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100392220);
      (*pcVar2)();
    }
    puVar9 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar9 & 1) == 0) {
      FUN_100392b74();
    }
    if (*(ulong *)(puVar11 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100392224);
      (*pcVar2)();
    }
    *(long *)(puVar11 + uVar21 * 0x10) = lVar13;
    *(long *)((long)(puVar11 + uVar21 * 0x10) + 8) = lVar18;
    local_78 = puVar11;
    FUN_100392aec(lVar20);
    puVar11 = local_78;
    uVar21 = *(ulong *)(local_78 + 0x10);
  }
LAB_1003921d8:
  _swift_bridgeObjectRelease(local_78);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10039225c | FUN_10039225c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10039225c(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  
  if (param_3 != param_2) {
    lVar8 = *param_4;
    plVar9 = (long *)(lVar8 + param_3 * 8 + -8);
    lVar5 = param_1 - param_3;
    plVar10 = plVar9;
    lVar6 = lVar5;
LAB_100392314:
    do {
      lVar4 = *plVar9;
      FUN_10038f124();
      if (lVar4 == 0) {
        lVar7 = 0;
      }
      else {
        uVar3 = 0;
        FUN_10032b0c8(0);
        _swift_dynamicCastClass(lVar4,uVar3);
        lVar7 = lVar4;
        if (lVar4 == 0) {
          lVar4 = 0;
        }
      }
      FUN_10038f124();
      if (lVar4 == 0) {
LAB_1003922d4:
        param_1 = 0;
      }
      else {
        uVar3 = 0;
        FUN_10032b0c8(0);
        _swift_dynamicCastClass(lVar4,uVar3);
        if ((lVar4 == 0) || (lVar7 != 0)) goto LAB_1003922d4;
        if (lVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1003923c8);
          (*pcVar1)();
        }
        lVar4 = *plVar9;
        param_1 = plVar9[1];
        *plVar9 = param_1;
        plVar9[1] = lVar4;
        bVar2 = lVar5 != -1;
        lVar5 = lVar5 + 1;
        plVar9 = plVar9 + -1;
        if (bVar2) goto LAB_100392314;
      }
      param_3 = param_3 + 1;
      plVar9 = plVar10 + 1;
      lVar5 = lVar6 + -1;
      plVar10 = plVar9;
      lVar6 = lVar5;
    } while (param_3 != param_2);
  }
  return param_1;
}



/* Address: 0x1003923c8 | FUN_1003923c8 */

undefined8 FUN_1003923c8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100392b74();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10039249c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100392618);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100392500:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100392608);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100392610);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925f0);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925f4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925fc);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100392604);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10039249c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925f8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100392600);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10039260c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100392614);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100392500;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10039261c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925e4);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100392630);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100392730(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925e8);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100392b74();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003925ec);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100392aec(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x100392630 | FUN_100392630 */

undefined * FUN_100392630(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100392730);
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
    puVar3 = &DAT_100fc2150;
    FUN_1000037f0(&DAT_100fc2150,&DAT_100c43df8);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}


