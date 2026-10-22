/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003b5270 | FUN_1003b5270 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_1003b5270(undefined *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  _ArrayBuffer _Var3;
  code *pcVar4;
  ID IVar5;
  Dictionary<undefined,undefined> DVar6;
  ID IVar7;
  ID IVar8;
  _ArrayBuffer *p_Var9;
  ulong uVar10;
  ID IVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  NSSet *pNVar15;
  NSString *pNVar16;
  undefined1 *puVar17;
  ID unaff_x20;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  String SVar21;
  undefined *local_170;
  undefined1 auStack_110 [64];
  _ArrayBuffer local_d0;
  undefined1 auStack_c8 [64];
  undefined *local_88 [3];
  undefined *local_70;
  
  IVar5 = objc_stub::entity(unaff_x20);
  objc_stub::FUN_100c08e00(IVar5);
  FUN_10000ec2c(0,&DAT_100fc2158,&PTR__OBJC_CLASS___NSRelationshipDescription_100f8dc20);
  DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar6.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(DVar6.unknown);
  }
  else {
    _swift_bridgeObjectRetain(DVar6.unknown);
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      _swift_bridgeObjectRelease_n(DVar6.unknown,2);
    }
    else {
      IVar5 = *(ID *)(*(long *)(DVar6.unknown + 0x38) + param_2 * 8);
      _swift_bridgeObjectRelease_n(DVar6.unknown,2);
      IVar7 = objc_stub::managedObjectContext(unaff_x20);
      if (IVar7 != 0) {
        IVar8 = objc_stub::FUN_100c05d40(IVar5);
        if ((IVar8 & 1) == 0) {
          if ((param_1 != (undefined *)0x0) &&
             (puVar19 = param_1, _swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___CKReference),
             puVar19 != (undefined *)0x0)) {
            _swift_unknownObjectRetain(param_1);
            IVar8 = objc_stub::FUN_100c01120(IVar5);
            if (IVar8 != 0) {
              IVar8 = objc_stub::FUN_100c06920(IVar8);
              if (IVar8 == 0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b5b30);
                (*pcVar4)();
              }
              _NSClassFromString();
              if (IVar8 != 0) {
                _swift_getObjCClassMetadata();
                IVar11 = IVar8;
                FUN_1003b4868();
                _swift_dynamicCastMetatype(IVar8,IVar11);
                if (IVar8 != 0) {
                  puVar12 = &DAT_100fbef68;
                  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
                  puVar17 = auStack_c8;
                  _swift_initStackObject();
                  *(undefined8 *)(puVar12 + 0x18) = 2;
                  *(undefined8 *)(puVar12 + 0x10) = 1;
                  puVar13 = puVar12;
                  (**(code **)(IVar8 + 0x78))();
                  *(undefined **)(puVar12 + 0x20) = puVar13;
                  *(undefined1 **)(puVar12 + 0x28) = puVar17;
                  IVar8 = objc_stub::recordID((ID)puVar19);
                  objc_stub::recordName(IVar8);
                  SVar21 = (extension_Foundation)::Swift::String::
                           __unconditionallyBridgeFromObjectiveC();
                  *(String *)(puVar12 + 0x30) = SVar21;
                  puVar13 = puVar12;
                  FUN_1003c92b8();
                  _swift_setDeallocating(puVar12);
                  FUN_100005808(puVar12 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
                  puVar19 = &DAT_100fbef78;
                  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
                  ppuVar14 = local_88;
                  local_88[0] = puVar13;
                  local_70 = puVar19;
                  FUN_100328e0c(ppuVar14,0,IVar7);
                  FUN_100004594(local_88);
                  if (ppuVar14 != (undefined **)0x0) {
                    IVar5 = objc_stub::FUN_100c055c0(IVar5);
                    pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                    objc_stub::setValue_forKey_(unaff_x20,ppuVar14,pNVar16);
                    if (IVar5 != 0) {
                      pNVar16 = (NSString *)objc_stub::name(IVar5);
                      if (pNVar16 == (NSString *)0x0) {
                        SVar21 = (extension_Foundation)::Swift::String::
                                 __unconditionallyBridgeFromObjectiveC();
                        pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                        _swift_bridgeObjectRelease(SVar21.bridgeObject);
                      }
                      objc_stub::willChangeValueForKey_((ID)ppuVar14,pNVar16);
                      pNVar16 = (NSString *)objc_stub::name(IVar5);
                      if (pNVar16 == (NSString *)0x0) {
                        SVar21 = (extension_Foundation)::Swift::String::
                                 __unconditionallyBridgeFromObjectiveC();
                        pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                        _swift_bridgeObjectRelease(SVar21.bridgeObject);
                      }
                      objc_stub::didChangeValueForKey_((ID)ppuVar14,pNVar16);
                    }
                    _swift_unknownObjectRelease(param_1);
                    return 1;
                  }
                  _swift_unknownObjectRelease(param_1);
                  return 0;
                }
              }
            }
            _swift_unknownObjectRelease(param_1);
            return 0;
          }
          pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setValue_forKey_(unaff_x20,0,pNVar16);
        }
        else {
          if (param_1 != (undefined *)0x0) {
            local_88[0] = param_1;
            _swift_unknownObjectRetain(param_1);
            puVar19 = &DAT_100fbee30;
            FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
            puVar12 = &DAT_100fc2560;
            FUN_1000037f0(&DAT_100fc2560,&DAT_100c44760);
            p_Var9 = &local_d0;
            _swift_dynamicCast(p_Var9,local_88,puVar19,puVar12,6);
            _Var3.unknown = local_d0.unknown;
            if (((ulong)p_Var9 & 1) != 0) {
              local_d0.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
              puVar19 = _Var3.unknown & 0xffffffffffffff8;
              if ((ulong)_Var3.unknown >> 0x3e == 0) {
                uVar18 = *(ulong *)(puVar19 + 0x10);
              }
              else {
                _Var2.unknown = puVar19;
                if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
                  _Var2.unknown = _Var3.unknown;
                }
                uVar18 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
              }
              local_170 = PTR___swiftEmptyArrayStorage_100eae0d8;
              if (uVar18 != 0) {
                uVar20 = 0;
                do {
                  while( true ) {
                    if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
                      if (*(ulong *)(puVar19 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
                        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b5a6c);
                        (*pcVar4)();
                      }
                      uVar10 = *(ulong *)(_Var3.unknown + uVar20 * 8 + 0x20);
                    }
                    else {
                      uVar10 = uVar20;
                      Swift::_ArrayBuffer::__getElementSlowPath(uVar20,_Var3);
                    }
                    uVar1 = uVar20 + 1;
                    if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
                      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b5a68);
                      (*pcVar4)();
                    }
                    IVar8 = objc_stub::FUN_100c01120(IVar5);
                    if (IVar8 != 0) break;
LAB_1003b543c:
                    uVar20 = uVar20 + 1;
                    if (uVar1 == uVar18) goto LAB_1003b5a90;
                  }
                  IVar8 = objc_stub::FUN_100c06920(IVar8);
                  if (IVar8 == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x1003b5b2c);
                    (*pcVar4)();
                  }
                  _NSClassFromString();
                  if (IVar8 == 0) goto LAB_1003b543c;
                  _swift_getObjCClassMetadata();
                  IVar11 = IVar8;
                  FUN_1003b4868();
                  _swift_dynamicCastMetatype(IVar8,IVar11);
                  if (IVar8 == 0) goto LAB_1003b543c;
                  puVar12 = &DAT_100fbef68;
                  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
                  puVar17 = auStack_110;
                  _swift_initStackObject();
                  *(undefined8 *)(puVar12 + 0x18) = 2;
                  *(undefined8 *)(puVar12 + 0x10) = 1;
                  puVar13 = puVar12;
                  (**(code **)(IVar8 + 0x78))();
                  *(undefined **)(puVar12 + 0x20) = puVar13;
                  *(undefined1 **)(puVar12 + 0x28) = puVar17;
                  IVar8 = objc_stub::recordID(uVar10);
                  objc_stub::recordName(IVar8);
                  SVar21 = (extension_Foundation)::Swift::String::
                           __unconditionallyBridgeFromObjectiveC();
                  *(String *)(puVar12 + 0x30) = SVar21;
                  puVar13 = puVar12;
                  FUN_1003c92b8();
                  _swift_setDeallocating(puVar12);
                  FUN_100005808(puVar12 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
                  puVar12 = &DAT_100fbef78;
                  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
                  ppuVar14 = local_88;
                  local_88[0] = puVar13;
                  local_70 = puVar12;
                  FUN_100328e0c(ppuVar14,0,IVar7);
                  FUN_100004594(local_88);
                  if (ppuVar14 == (undefined **)0x0) goto LAB_1003b543c;
                  Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
                  uVar20 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x10);
                  uVar10 = *(ulong *)(((ulong)local_d0.unknown & 0xffffffffffffff8) + 0x18);
                  if (uVar10 >> 1 <= uVar20) {
                    Swift::Array<undefined>::__createNewBuffer(1 < uVar10,uVar20 + 1,1);
                  }
                  Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar20,ppuVar14);
                  local_170 = local_d0.unknown;
                  uVar20 = uVar1;
                } while (uVar1 != uVar18);
              }
LAB_1003b5a90:
              _swift_bridgeObjectRelease(_Var3.unknown);
              puVar19 = local_170;
              FUN_10036c304(local_170);
              _swift_bridgeObjectRelease(local_170);
              FUN_1003b4868();
              FUN_1003b6598(&DAT_100fc1308);
              pNVar15 = (extension_Foundation)::Swift::Set::_bridgeToObjectiveC();
              _swift_bridgeObjectRelease(puVar19);
              pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
              objc_stub::setValue_forKey_(unaff_x20,pNVar15,pNVar16);
              return 1;
            }
          }
          FUN_1003b4868();
          FUN_1003b6598(&DAT_100fc1308);
          pNVar15 = (extension_Foundation)::Swift::Set::_bridgeToObjectiveC();
          pNVar16 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          objc_stub::setValue_forKey_(unaff_x20,pNVar15,pNVar16);
        }
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1003b5b30 | FUN_1003b5b30 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003b5cfc) */
/* WARNING: Removing unreachable block (ram,0x0001003b5db4) */
/* WARNING: Removing unreachable block (ram,0x0001003b6168) */
/* WARNING: Removing unreachable block (ram,0x0001003b5dc4) */

undefined8 FUN_1003b5b30(ID param_1,long param_2,ulong param_3)

{
  URL UVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  ID IVar4;
  undefined *self;
  URL UVar5;
  Data DVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  NSString *pNVar9;
  undefined8 uVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID unaff_x20;
  NSData *pNVar11;
  NSDataReadingOptions contentsOf;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 local_f0 [24];
  ID local_d8;
  ID local_d0 [3];
  long local_b8;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  contentsOf.unknown = local_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  IVar2 = objc_stub::entity(unaff_x20);
  objc_stub::FUN_100bfe2e0(IVar2);
  FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar3.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(DVar3.unknown);
    return 0;
  }
  _swift_bridgeObjectRetain(DVar3.unknown);
  FUN_100071370();
  if ((param_3 & 1) == 0) {
    _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    return 0;
  }
  IVar2 = *(ID *)(*(long *)(DVar3.unknown + 0x38) + param_2 * 8);
  _swift_bridgeObjectRelease_n(DVar3.unknown,2);
  IVar4 = objc_stub::FUN_100bfe200(IVar2);
  if (IVar4 != 1000) {
    if (IVar4 != 0x708) {
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKey_(unaff_x20,param_1,pNVar9);
      return 1;
    }
    if (param_1 != 0) {
      local_d0[0] = param_1;
      _swift_unknownObjectRetain(param_1);
      puVar7 = &DAT_100fbee30;
      FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
      ppuVar8 = &local_90;
      _swift_dynamicCast(ppuVar8,local_d0,puVar7,PTR___type_metadata_for_Foundation_Data_100ea7300,6
                        );
      uVar10 = uStack_88;
      puVar7 = local_90;
      if (((ulong)ppuVar8 & 1) != 0) {
        _objc_allocWithZone(&_OBJC_CLASS___NSKeyedUnarchiver);
        FUN_1001037b4(puVar7,uVar10);
        self = puVar7;
        FUN_1003b09f8(puVar7,uVar10);
        FUN_10003bf2c(puVar7,uVar10);
        objc_stub::setRequiresSecureCoding_((ID)self,0);
        IVar4 = objc_stub::FUN_100c00ce0
                          ((ID)self,*(undefined8 *)PTR__NSKeyedArchiveRootObjectKey_100ea7c08);
        if (IVar4 == 0) {
          uStack_88 = 0;
          local_90 = (undefined *)0x0;
          local_78 = 0;
          uStack_80 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar4);
        }
        objc_stub::finishDecoding((ID)self);
        FUN_10032af50(&local_90,local_d0);
        if (local_b8 == 0) {
          lVar13 = 0;
        }
        else {
          FUN_100004640(local_d0,local_b8);
          lVar14 = *(long *)(local_b8 + -8);
          local_d8 = IVar2;
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
          lVar12 = (long)contentsOf.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar14 + 0x10))(lVar12);
          lVar13 = lVar12;
          Swift::__bridgeAnythingToObjectiveC(lVar12,local_b8);
          (**(code **)(lVar14 + 8))(lVar12,local_b8);
          FUN_100004594(local_d0);
        }
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(unaff_x20,lVar13,pNVar9);
        _swift_unknownObjectRelease(lVar13);
        FUN_10003bf2c(puVar7,uVar10);
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
        return 1;
      }
    }
    return 0;
  }
  local_d8 = IVar2;
  if (param_1 == 0) {
LAB_1003b5f64:
    pNVar11 = (NSData *)0x0;
    DVar6.unknown = (undefined *)0x0;
    uVar10 = 0xf000000000000000;
  }
  else {
    IVar4 = param_1;
    _swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___CKAsset);
    if (IVar4 == 0) {
      local_d0[0] = param_1;
      _swift_unknownObjectRetain(param_1);
      puVar7 = &DAT_100fbee30;
      FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
      ppuVar8 = &local_90;
      _swift_dynamicCast(ppuVar8,local_d0,puVar7,PTR___type_metadata_for_Foundation_Data_100ea7300,6
                        );
      DVar6.unknown = local_90;
      uVar10 = uStack_88;
      if (((ulong)ppuVar8 & 1) == 0) goto LAB_1003b5f64;
    }
    else {
      _swift_unknownObjectRetain(param_1);
      UVar5.unknown = (undefined *)objc_stub::fileURL(IVar4);
      if (UVar5.unknown == (undefined *)0x0) {
        _swift_unknownObjectRelease(param_1);
        goto LAB_1003b5f64;
      }
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
      (**(code **)(lVar13 + 0x20))
                (contentsOf.unknown,local_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
      uVar10 = 0;
      DVar6 = Foundation::Data::_init(contentsOf);
      _swift_unknownObjectRelease(param_1);
      (**(code **)(lVar13 + 8))(contentsOf.unknown,UVar1.unknown);
    }
    pNVar11 = Foundation::Data::_bridgeToObjectiveC(DVar6);
  }
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_(unaff_x20,pNVar11,pNVar9);
  _swift_unknownObjectRelease(pNVar11);
  FUN_10003bf18(DVar6.unknown,uVar10);
  return 1;
}



/* Address: 0x1003b6180 | FUN_1003b6180 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003b6180(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  
  FUN_1003b4868();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,
                              "initWithEntity:insertIntoManagedObjectContext:",param_1,param_2);
  return IVar1;
}



/* Address: 0x1003b61e8 | _TtC9PasteCore21SyncableManagedObject::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore21SyncableManagedObject::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  FUN_1003b4868();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x1003b623c | FUN_1003b623c */

void FUN_1003b623c(void)

{
  FUN_1003b4868();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1003b626c | _TtC9PasteCore21SyncableManagedObject::.cxx_construct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore21SyncableManagedObject::_cxx_construct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003b6270 | _TtC9PasteCore21SyncableManagedObject::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore21SyncableManagedObject::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x1003b6274 | FUN_1003b6274 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1003b6274(undefined *param_1,Iterator *param_2)

{
  long lVar1;
  __CocoaSet _Var2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  Iterator *pIVar7;
  Iterator *pIVar8;
  Iterator IVar9;
  CKRecordID *this;
  CKRecordZoneID *zoneID;
  CKRecordID *pCVar10;
  undefined *self;
  Iterator *extraout_x1;
  ulong uVar11;
  long unaff_x21;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  ulong uVar15;
  char *******pppppppcVar16;
  String recordName;
  undefined *local_b8;
  undefined *local_98;
  char *******local_90;
  undefined *local_88;
  ulong *puStack_80;
  ulong local_78;
  long lStack_70;
  ulong local_68;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (((ulong)param_1 & 0xc000000000000001) == 0) {
    uVar11 = -1L << ((ulong)(byte)param_1[0x20] & 0x3f);
    puVar14 = (ulong *)(param_1 + 0x38);
    uVar12 = ~uVar11;
    uVar11 = -uVar11;
    uVar15 = 0xffffffffffffffff;
    if (uVar11 < 0x40) {
      uVar15 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar15 = uVar15 & *puVar14;
    IVar9.unknown = param_1;
    pIVar8 = param_2;
    _swift_bridgeObjectRetain();
    lStack_70 = 0;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    _swift_bridgeObjectRetain(param_1);
    pIVar7 = Swift::__CocoaSet::makeIterator(_Var2);
    pIVar8 = pIVar7;
    FUN_1003b4868();
    FUN_1003b6598(&DAT_100fc1308);
    IVar9 = Swift::Set::Iterator::_init(pIVar7);
    uVar12 = local_78;
    puVar14 = puStack_80;
    uVar15 = local_68;
    param_1 = local_88;
  }
  local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar13 = lStack_70;
  do {
    lVar4 = lVar13;
    uVar11 = uVar15;
    if ((long)param_1 < 0) {
      Swift::__CocoaSet::Iterator::_next((Iterator *)((ulong)param_1 & 0x7fffffffffffffff));
      if (IVar9.unknown == (undefined *)0x0) {
LAB_1003b6514:
        local_90 = (char *******)0x0;
        goto LAB_1003b6518;
      }
      local_98 = IVar9.unknown;
      FUN_1003b4868();
      pppppppcVar16 = (char *******)&local_90;
      pIVar8 = (Iterator *)&local_98;
      _swift_dynamicCast(pppppppcVar16,pIVar8,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         IVar9.unknown,7);
    }
    else {
      while (uVar11 == 0) {
        lVar1 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003b6598);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x40 >> 6) <= lVar1) {
          uVar15 = 0;
          goto LAB_1003b6514;
        }
        lVar4 = lVar1;
        uVar11 = puVar14[lVar1];
      }
      uVar3 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      pppppppcVar16 =
           *(char ********)
            (*(long *)(param_1 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 + lVar4 * 0x200)
      ;
      local_90 = pppppppcVar16;
    }
    if (local_90 == (char *******)0x0) {
LAB_1003b6518:
      FUN_10000c650(param_1,puVar14,uVar12,lVar13,uVar15);
      return;
    }
    FUN_1003b41b8();
    if (unaff_x21 != 0) {
      FUN_10000c650(param_1,puVar14,uVar12,lVar13,uVar15);
      _swift_bridgeObjectRelease(local_b8);
      return;
    }
    this = (CKRecordID *)0x0;
    FUN_10000ec2c(0,&DAT_100fbfa88,&PTR__OBJC_CLASS___CKRecordID_100f8db58);
    zoneID = (CKRecordZoneID *)objc_stub::zoneID((ID)param_2);
    recordName.bridgeObject = pIVar8;
    recordName.str = (char *)pppppppcVar16;
    pCVar10 = (extension_CloudKit)::__C::CKRecordID::__allocating_init(this,recordName,zoneID);
    self = &_OBJC_CLASS___CKReference;
    _objc_allocWithZone();
    pIVar7 = (Iterator *)objc_stub::initWithRecordID_action_((ID)self,pCVar10,0);
    IVar9.unknown = (undefined *)0x0;
    pIVar8 = extraout_x1;
    lVar13 = lVar4;
    uVar15 = uVar11;
    if (pIVar7 != (Iterator *)0x0) {
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar11 = (ulong)puVar5 & 0xffffffffffffff8;
      IVar9.unknown = *(undefined **)(uVar11 + 0x10);
      uVar11 = *(ulong *)(uVar11 + 0x18);
      if ((undefined *)(uVar11 >> 1) <= IVar9.unknown) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar11,IVar9.unknown + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity();
      local_b8 = puVar5;
      pIVar8 = pIVar7;
    }
  } while( true );
}



/* Address: 0x1003b6598 | FUN_1003b6598 */

void FUN_1003b6598(long *param_1,undefined8 param_2,code *param_3,long param_4)

{
  if (*param_1 == 0) {
    (*param_3)(param_2);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1003b65d8 | FUN_1003b65d8 */

void FUN_1003b65d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc25b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c44798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c44798,&DAT_100ece970);
  DAT_100fc25b8 = pTVar1;
  return;
}



/* Address: 0x1003b6618 | FUN_1003b6618 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003b6618(void)

{
  code *pcVar1;
  Dictionary<undefined,undefined> DVar2;
  ID IVar3;
  ID IVar4;
  void *pvVar5;
  String SVar6;
  
  if (DAT_100fc0ee0 != -1) {
    _swift_once(&DAT_100fc0ee0,FUN_10035e28c);
  }
  objc_stub::FUN_100c01bc0(DAT_101057980);
  FUN_10000ec2c(0,&DAT_100fc04b0,&PTR__OBJC_CLASS___NSEntityDescription_100f8db90);
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar6 = (extension_CloudKit)::__C::CKRecord::get_recordType((CKRecord *)0x0);
  pvVar5 = SVar6.bridgeObject;
  if (*(long *)(DVar2.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(pvVar5);
    _swift_bridgeObjectRelease(DVar2.unknown);
  }
  else {
    _swift_bridgeObjectRetain(DVar2.unknown);
    FUN_100071370();
    if (((ulong)SVar6.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(pvVar5);
      _swift_bridgeObjectRelease_n(DVar2.unknown,2);
    }
    else {
      IVar3 = *(ID *)(*(long *)(DVar2.unknown + 0x38) + (long)SVar6.str * 8);
      _swift_bridgeObjectRelease(pvVar5);
      _swift_bridgeObjectRelease_n(DVar2.unknown,2);
      IVar3 = objc_stub::FUN_100c06920(IVar3);
      if (IVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b6794);
        (*pcVar1)();
      }
      _NSClassFromString();
      if (IVar3 != 0) {
        _swift_getObjCClassMetadata(IVar3);
        IVar4 = IVar3;
        FUN_1003b4868();
        _swift_dynamicCastMetatype(IVar3,IVar4);
      }
    }
  }
  return;
}



/* Address: 0x1003b6794 | FUN_1003b6794 */

undefined1  [16] FUN_1003b6794(void)

{
  return ZEXT816(0x100ece970);
}



/* Address: 0x1003b67a4 | FUN_1003b67a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1003b67a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  return param_1;
}



/* Address: 0x1003b6808 | FUN_1003b6808 */

undefined1  [16] FUN_1003b6808(void)

{
  return ZEXT816(0x100ecea18);
}



/* Address: 0x1003b6818 | FUN_1003b6818 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_1003b6818(ulong param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,ID param_6)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  void *pvVar4;
  String SVar5;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if ((param_1 & 1) == 0) {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar2 = objc_stub::stringForKey_(param_6,pNVar1);
    if (IVar2 != 0) {
      SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pvVar4 = SVar5.bridgeObject;
      (*param_2)(SVar5.str,pvVar4);
      _swift_bridgeObjectRelease(pvVar4);
      return pvVar4;
    }
  }
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = CKContainer::containerWithIdentifier_((ID)&_OBJC_CLASS___CKContainer,pNVar1);
  puVar3 = &DAT_100ecea50;
  _swift_allocObject(&DAT_100ecea50,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(ID *)(puVar3 + 0x20) = param_6;
  *(code **)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x30) = param_3;
  local_60 = FUN_1003b6b08;
  local_80 = PTR___NSConcreteStackBlock_100ea82a0;
  local_78 = 0x42000000;
  local_70 = FUN_100318594;
  puStack_68 = &DAT_100ecea68;
  local_58 = puVar3;
  pvVar4 = __Block_copy(&local_80);
  puVar3 = local_58;
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(param_3);
  _swift_release(puVar3);
  CKContainer::fetchUserRecordIDWithCompletionHandler_(IVar2,pvVar4);
  __Block_release(pvVar4);
  return (void *)0x0;
}



/* Address: 0x1003b69d4 | FUN_1003b69d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b69d4(ID param_1)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID in_x4;
  code *in_x5;
  String SVar3;
  
  if (param_1 == 0) {
    SVar3 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    pNVar1 = (NSString *)objc_stub::recordName(param_1);
    if (pNVar1 == (NSString *)0x0) {
      SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar3.bridgeObject);
    }
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setObject_forKey_(in_x4,pNVar1,pNVar2);
    objc_stub::recordName(param_1);
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  (*in_x5)(SVar3.str,SVar3.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return;
}



/* Address: 0x1003b6ac8 | FUN_1003b6ac8 */

void FUN_1003b6ac8(void)

{
  FUN_1003b6818();
  return;
}



/* Address: 0x1003b6ad4 | FUN_1003b6ad4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b6ad4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b6b08 | FUN_1003b6b08 */

void FUN_1003b6b08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1003b69d4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1003b6b18 | FUN_1003b6b18 */

void FUN_1003b6b18(long param_1,long param_2)

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



/* Address: 0x1003b6b2c | FUN_1003b6b2c */

void FUN_1003b6b2c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003b6b34 | FUN_1003b6b34 */

void FUN_1003b6b34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined1 auStack_140 [96];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_a0 = param_10;
  uStack_98 = param_11;
  local_90 = param_12;
  uStack_88 = param_13;
  local_40 = param_10;
  uStack_38 = param_11;
  local_30 = param_12;
  uStack_28 = param_13;
  local_e0 = param_2;
  uStack_d8 = param_3;
  local_d0 = param_4;
  uStack_c8 = param_5;
  local_c0 = param_6;
  uStack_b8 = param_7;
  local_b0 = param_8;
  uStack_a8 = param_9;
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_7;
  local_50 = param_8;
  uStack_48 = param_9;
  FUN_10003c978(&local_e0,auStack_140);
  FUN_10003c9b4(&local_80);
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = local_b0;
  param_1[9] = uStack_98;
  param_1[8] = local_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = local_90;
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = local_d0;
  return;
}



/* Address: 0x1003b6bbc | FUN_1003b6bbc */

undefined8 FUN_1003b6bbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_retain(uVar2);
  return uVar1;
}



/* Address: 0x1003b6c04 | FUN_1003b6c04 */

void FUN_1003b6c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  return;
}



/* Address: 0x1003b6c54 | FUN_1003b6c54 */

undefined8 FUN_1003b6c54(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_100253870(uVar1,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58));
  return uVar1;
}



/* Address: 0x1003b6ca0 | FUN_1003b6ca0 */

void FUN_1003b6ca0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_10025fbc0(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  *(undefined8 *)(unaff_x20 + 0x50) = param_3;
  *(undefined8 *)(unaff_x20 + 0x58) = param_4;
  return;
}



/* Address: 0x1003b6cec | FUN_1003b6cec */

undefined1  [16] FUN_1003b6cec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1003b6cfc | FUN_1003b6cfc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003b6cfc(ID param_1)

{
  code *pcVar1;
  ID IVar2;
  undefined1 auStack_90 [96];
  
  FUN_1003b6d98(0);
  FUN_10003c978(param_1,auStack_90);
  IVar2 = param_1;
  FUN_1003b6ddc();
  if (*(ID *)PTR__NSApp_100ea8fa0 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1003b6d98);
    (*pcVar1)();
  }
  objc_stub::activateIgnoringOtherApps_(*(ID *)PTR__NSApp_100ea8fa0,1);
  IVar2 = objc_stub::runModal(IVar2);
  if (IVar2 == 1000) {
    pcVar1 = *(code **)(param_1 + 0x30);
  }
  else {
    if (*(long *)(param_1 + 0x48) == 0) {
      return 0;
    }
    pcVar1 = *(code **)(param_1 + 0x50);
  }
  (*pcVar1)();
  return 0;
}



/* Address: 0x1003b6d98 | FUN_1003b6d98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1003b6d98(void)

{
  undefined *puVar1;
  
  if (DAT_100fc25c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSAlert;
  _swift_getObjCClassMetadata();
  DAT_100fc25c0 = puVar1;
  return;
}



/* Address: 0x1003b6ddc | FUN_1003b6ddc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1003b6ddc(long param_1)

{
  ID self;
  NSString *pNVar1;
  ID unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = objc_stub::init(unaff_x20);
  objc_stub::setAlertStyle_(self,0);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setMessageText_(self,pNVar1);
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
    objc_stub::setInformativeText_(self,pNVar1);
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _swift_bridgeObjectRetain(uVar3);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar3);
  objc_stub::addButtonWithTitle_(self,pNVar1);
  lVar2 = *(long *)(param_1 + 0x48);
  local_60 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_50 = *(undefined8 *)(param_1 + 0x50);
  lStack_58 = lVar2;
  local_48 = uVar3;
  if (lVar2 == 0) {
    FUN_10003c9b4(param_1);
  }
  else {
    FUN_1003b6f80(&local_60,auStack_80);
    _swift_bridgeObjectRetain(lVar2);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar2);
    objc_stub::addButtonWithTitle_(self,pNVar1);
    FUN_10003c9b4(param_1);
    _swift_release(uVar3);
    _swift_bridgeObjectRelease(lVar2);
  }
  return self;
}



/* Address: 0x1003b6f80 | FUN_1003b6f80 */

undefined8 FUN_1003b6f80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc25c8;
  FUN_1000037f0(&DAT_100fc25c8,&DAT_100c44830);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1003b6fd0 | FUN_1003b6fd0 */

void FUN_1003b6fd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x48) != 0) {
    _swift_bridgeObjectRelease();
    _swift_release(*(undefined8 *)(param_1 + 0x58));
    return;
  }
  return;
}



/* Address: 0x1003b7028 | FUN_1003b7028 */

undefined8 * FUN_1003b7028(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  uVar3 = param_2[7];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  param_1[7] = uVar3;
  lVar1 = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  _swift_retain(uVar3);
  if (lVar1 == 0) {
    uVar2 = param_2[8];
    uVar4 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[0xb] = uVar4;
    param_1[10] = uVar3;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = lVar1;
    uVar2 = param_2[0xb];
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    _swift_bridgeObjectRetain(lVar1);
    _swift_retain(uVar2);
  }
  return param_1;
}



/* Address: 0x1003b70e8 | FUN_1003b70e8 */

undefined8 * FUN_1003b70e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[7];
  uVar1 = param_2[7];
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  lVar3 = param_1[9];
  if (lVar3 == 0) {
    if (param_2[9] == 0) {
      uVar1 = param_2[8];
      uVar4 = param_2[0xb];
      uVar2 = param_2[10];
      param_1[9] = param_2[9];
      param_1[8] = uVar1;
      param_1[0xb] = uVar4;
      param_1[10] = uVar2;
    }
    else {
      param_1[8] = param_2[8];
      param_1[9] = param_2[9];
      uVar1 = param_2[0xb];
      uVar2 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar2;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar1);
    }
  }
  else if (param_2[9] == 0) {
    FUN_1003b7228(param_1 + 8);
    uVar4 = param_2[8];
    uVar2 = param_2[0xb];
    uVar1 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar2;
    param_1[10] = uVar1;
  }
  else {
    param_1[8] = param_2[8];
    param_1[9] = param_2[9];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar3);
    uVar2 = param_1[0xb];
    uVar1 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    _swift_retain(uVar1);
    _swift_release(uVar2);
  }
  return param_1;
}



/* Address: 0x1003b7228 | FUN_1003b7228 */

undefined8 FUN_1003b7228(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc25d0;
  FUN_1000037f0(&DAT_100fc25d0,&DAT_100c44840);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1003b7270 | FUN_1003b7270 */

void FUN_1003b7270(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x1003b728c | FUN_1003b728c */

undefined8 * FUN_1003b728c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[7];
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  _swift_release(uVar2);
  if (param_1[9] != 0) {
    lVar3 = param_2[9];
    if (lVar3 != 0) {
      param_1[8] = param_2[8];
      param_1[9] = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = param_1[0xb];
      uVar1 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      _swift_release(uVar2);
      return param_1;
    }
    FUN_1003b7228(param_1 + 8);
  }
  uVar2 = param_2[8];
  uVar4 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar2;
  param_1[0xb] = uVar4;
  param_1[10] = uVar1;
  return param_1;
}



/* Address: 0x1003b7330 | FUN_1003b7330 */

undefined1  [16] FUN_1003b7330(void)

{
  return ZEXT816(0x100eceaf8);
}



/* Address: 0x1003b7340 | FUN_1003b7340 */

long FUN_1003b7340(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1000385d4(param_3,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x1003b7394 | FUN_1003b7394 */

void FUN_1003b7394(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  FUN_1000385d4(param_3,unaff_x20 + 0x20);
  return;
}



/* Address: 0x1003b73b8 | FUN_1003b73b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003b7404) */

void FUN_1003b73b8(long param_1)

{
  undefined1 auStack_70 [16];
  code *local_60;
  undefined1 *puStack_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  FUN_1003b7428();
  if (param_1 != 0) {
    puStack_58 = auStack_50;
    local_60 = FUN_1003b7ed4;
    local_40 = param_1;
    FUN_1002ff5a8(FUN_1003b7eec,auStack_70);
  }
  return;
}



/* Address: 0x1003b7428 | FUN_1003b7428 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1003b7428(ID param_1)

{
  char cVar1;
  code *pcVar2;
  UTType UVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  ID IVar9;
  UTType UVar10;
  UTType UVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  code *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  char local_61;
  
  UVar3 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar13 - extraout_x8_00;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar4.unknown + -8);
  UVar5 = UVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar14 = (undefined *)(lVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  FUN_1003b787c();
  if (((ulong)UVar5.unknown & 1) == 0) {
    local_61 = '\0';
    IVar9 = objc_stub::length(param_1);
    puVar14 = &DAT_100eceb28;
    _swift_allocObject(&DAT_100eceb28,0x18,7);
    *(char **)(puVar14 + 0x10) = &local_61;
    puVar7 = &DAT_100eceb50;
    _swift_allocObject(&DAT_100eceb50,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_1003b80bc;
    *(undefined **)(puVar7 + 0x18) = puVar14;
    local_78 = FUN_100215f00;
    local_98 = PTR___NSConcreteStackBlock_100ea82a0;
    local_90 = 0x42000000;
    local_88 = FUN_100309738;
    puStack_80 = &DAT_100eceb68;
    local_70 = puVar7;
    aBlock = __Block_copy(&local_98);
    puVar8 = local_70;
    _swift_retain(puVar7);
    _swift_release(puVar8);
    objc_stub::enumerateAttributesInRange_options_usingBlock_(param_1,0,IVar9,0,aBlock);
    __Block_release(aBlock);
    puVar8 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0xa6,0x42,0x39,1);
    _swift_release(puVar7);
    cVar1 = local_61;
    if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003b787c);
      (*pcVar2)();
    }
    _swift_release(puVar14);
    if (cVar1 == '\x01') {
      FUN_100381740(0);
      FUN_10037efac(param_1);
    }
    else {
      objc_stub::string(param_1);
      SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar9 = 0;
      FUN_100381740();
      _objc_allocWithZone();
      UVar10.unknown = (undefined *)objc_stub::init(IVar9);
      UVar10 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar10);
      SVar18 = UniformTypeIdentifiers::UTType::get_identifier(UVar10);
      (**(code **)(lVar16 + 8))(lVar13,UVar3.unknown);
      FUN_10037c4a8(SVar17.str,SVar17.bridgeObject,SVar18.str,SVar18.bridgeObject);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
    }
  }
  else {
    objc_stub::string(param_1);
    SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    lVar6 = lVar15;
    (**(code **)(lVar12 + 0x30))(lVar15,1,UVar4.unknown);
    if ((int)lVar6 == 1) {
      FUN_1002fc0a4(lVar15);
    }
    else {
      UVar5.unknown = puVar14;
      (**(code **)(lVar12 + 0x20))(puVar14,lVar15,UVar4.unknown);
      SVar17 = Foundation::URL::get_absoluteString(UVar5);
      IVar9 = 0;
      FUN_100381740();
      _objc_allocWithZone();
      UVar10.unknown = (undefined *)objc_stub::init(IVar9);
      UVar11 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar10);
      SVar18 = UniformTypeIdentifiers::UTType::get_identifier(UVar11);
      local_a0 = *(code **)(lVar16 + 8);
      (*local_a0)(lVar13,UVar3.unknown);
      FUN_10037c4a8(SVar17.str,SVar17.bridgeObject,SVar18.str,SVar18.bridgeObject);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
      SVar17 = Foundation::URL::get_absoluteString((URL)UVar10.unknown);
      UVar10 = UniformTypeIdentifiers::UTType::get_url((UTType)SVar17.str);
      SVar18 = UniformTypeIdentifiers::UTType::get_identifier(UVar10);
      (*local_a0)(lVar13,UVar3.unknown);
      FUN_10037c4a8(SVar17.str,SVar17.bridgeObject,SVar18.str,SVar18.bridgeObject);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      _swift_bridgeObjectRelease(SVar18.bridgeObject);
      (**(code **)(lVar12 + 8))(puVar14,UVar4.unknown);
    }
  }
  return;
}



/* Address: 0x1003b787c | FUN_1003b787c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003b787c(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  CharacterSet CVar3;
  undefined *puVar4;
  ID IVar5;
  __int64 _Var6;
  NSString *pNVar7;
  ID IVar8;
  URL UVar9;
  char *pcVar10;
  URL UVar11;
  void *pvVar12;
  long extraout_x1;
  undefined1 *puVar14;
  _StringGuts _Var15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID unaff_x20;
  undefined *puVar16;
  long lVar17;
  long lVar18;
  String SVar19;
  String local_80;
  long local_68;
  void *pvVar13;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar17 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar16 = (undefined *)(lVar17 - extraout_x12);
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar18 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar4 = &_OBJC_CLASS___NSDataDetector;
  _objc_allocWithZone();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_80.bridgeObject;
  local_80 = (String)(auVar1 << 0x40);
  IVar5 = objc_stub::FUN_100c050a0((ID)puVar4,0x20,&local_80);
  if (IVar5 == 0) {
    pcVar10 = local_80.str;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(pcVar10);
  }
  else {
    objc_stub::string(unaff_x20);
    local_80 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar12 = local_80.bridgeObject;
    Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)0x0);
    FUN_10030cce0();
    SVar19 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                       ((CharacterSet)(puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    pvVar13 = SVar19.bridgeObject;
    (**(code **)(lVar18 + 8))(puVar16 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),CVar3.unknown)
    ;
    _swift_bridgeObjectRelease(pvVar12);
    _swift_bridgeObjectRetain(pvVar13);
    _Var6 = Swift::String::UTF16View::get_count((UTF16View)SVar19.str);
    _swift_bridgeObjectRelease(pvVar13);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar13);
    IVar5 = objc_stub::firstMatchInString_options_range_(IVar5,pNVar7,0,0,_Var6);
    if (((IVar5 != 0) && (IVar8 = objc_stub::range(IVar5), IVar8 == 0)) && (extraout_x1 == _Var6)) {
      UVar9.unknown = (undefined *)objc_stub::URL(IVar5);
      if (UVar9.unknown != (undefined *)0x0) {
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar9);
      }
      UVar11 = Foundation::URL::typeMetadataAccessor();
      lVar18 = *(long *)(UVar11.unknown + -8);
      (**(code **)(lVar18 + 0x38))(lVar17,UVar9.unknown == (undefined *)0x0,1,UVar11.unknown);
      FUN_1002fc004(lVar17,puVar16);
      puVar14 = &DAT_00000001;
      UVar9.unknown = puVar16;
      (**(code **)(lVar18 + 0x30))(puVar16,1,UVar11.unknown);
      if ((int)UVar9.unknown == 1) {
        FUN_1002fc0a4(puVar16);
      }
      else {
        Foundation::URL::_get_scheme(UVar9);
        (**(code **)(lVar18 + 8))(puVar16,UVar11.unknown);
        if (puVar14 != (undefined1 *)0x0) {
          SVar19.bridgeObject = puVar14;
          SVar19.str = UVar9.unknown;
          SVar19 = Swift::String::lowercased(SVar19);
          _Var15.unknown = SVar19.bridgeObject;
          _swift_bridgeObjectRelease(puVar14);
          if ((SVar19.str != (undefined *)0x6f746c69616d) ||
             (_Var15.unknown != &DAT_e600000000000000)) {
            bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar19.str,_Var15,(_StringComparisonResult)0x6d);
            _swift_bridgeObjectRelease(_Var15.unknown);
            bVar2 = !bVar2;
            goto LAB_1003b7ba0;
          }
          _swift_bridgeObjectRelease(&DAT_e600000000000000);
          goto LAB_1003b7b9c;
        }
      }
      bVar2 = true;
      goto LAB_1003b7ba0;
    }
  }
LAB_1003b7b9c:
  bVar2 = false;
LAB_1003b7ba0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar2;
}



/* Address: 0x1003b7c34 | FUN_1003b7c34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b7c34(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long local_a8;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  undefined *local_58;
  
  FUN_100357cf0(auStack_88);
  lVar8 = lStack_68;
  lVar7 = local_70;
  FUN_100004640(auStack_88,local_70);
  puVar2 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  puVar3 = puVar2;
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 3;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  puVar4 = puVar3;
  (**(code **)(*(long *)(lVar8 + 0x10) + 0x10))(puVar3,lVar7,*(long *)(lVar8 + 0x10));
  _swift_release(puVar3);
  FUN_100004594(auStack_88);
  if (unaff_x21 != 0) {
    return;
  }
  lVar7 = *(long *)(param_3 + 0x18);
  if (lVar7 != 0) {
    local_a8 = *(long *)(param_3 + 0x10);
    FUN_100357e58(auStack_88);
    lVar1 = lStack_68;
    lVar8 = local_70;
    FUN_100004640(auStack_88,local_70);
    (**(code **)(*(long *)(lVar1 + 8) + 0x20))(local_a8,lVar7,lVar8);
    FUN_100004594(auStack_88);
    if (local_a8 != 0) goto LAB_1003b7dac;
  }
  FUN_100357e58(auStack_88);
  lVar7 = lStack_68;
  local_a8 = local_70;
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lVar7 + 8) + 0x28))();
  FUN_100004594(auStack_88);
LAB_1003b7dac:
  FUN_100357cf0(auStack_88);
  lVar8 = lStack_68;
  lVar7 = local_70;
  FUN_100004640(auStack_88,local_70);
  _swift_allocObject(puVar2,0x28,7);
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined **)(puVar2 + 0x20) = puVar4;
  lVar8 = *(long *)(lVar8 + 0x10);
  pcVar6 = *(code **)(lVar8 + 0x28);
  puVar3 = &DAT_100fbe920;
  local_58 = puVar2;
  FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
  puVar5 = puVar3;
  FUN_10030b508();
  (*pcVar6)(&local_58,local_a8,puVar3,puVar5,lVar7,lVar8);
  _swift_release(puVar2);
  FUN_100004594(auStack_88);
  FUN_100357cf0(auStack_88);
  FUN_100004640(auStack_88,local_70);
  (**(code **)(*(long *)(lStack_68 + 0x10) + 0x20))(puVar4,FUN_1003b80a4,param_1,local_70);
  FUN_100004594(auStack_88);
  return;
}



/* Address: 0x1003b7ed4 | FUN_1003b7ed4 */

void FUN_1003b7ed4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1003b7c34(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1003b7eec | FUN_1003b7eec */

void FUN_1003b7eec(undefined1 *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x10))();
  if (unaff_x21 == 0) {
    *param_1 = 0;
  }
  return;
}



/* Address: 0x1003b7f18 | FUN_1003b7f18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003b7f18(long param_1)

{
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_100357e7c(auStack_58);
  FUN_100004640(auStack_58,local_40);
  (**(code **)(*(long *)(lStack_38 + 0x10) + 0x18))();
  *(undefined8 *)(param_1 + 0x10) = local_40;
  FUN_100004594(auStack_58);
  return;
}



/* Address: 0x1003b7f8c | FUN_1003b7f8c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_1003b7f8c(ID param_1)

{
  ulong uVar1;
  void *pvVar2;
  String SVar3;
  
  objc_stub::string(param_1);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar2 = SVar3.bridgeObject;
  _swift_bridgeObjectRelease(pvVar2);
  uVar1 = (ulong)SVar3.str & 0xffffffffffff;
  if (((ulong)pvVar2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar2 >> 0x38 & 0xf;
  }
  return uVar1 != 0;
}



/* Address: 0x1003b7ff0 | FUN_1003b7ff0 */

void FUN_1003b7ff0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  FUN_1001ad344(uVar1,uVar2);
  return;
}



/* Address: 0x1003b8034 | FUN_1003b8034 */

void FUN_1003b8034(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  return;
}



/* Address: 0x1003b8058 | FUN_1003b8058 */

void FUN_1003b8058(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1003b8084 | FUN_1003b8084 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003b8084(void)

{
  return ZEXT816(0x100fc2618);
}



/* Address: 0x1003b80a4 | FUN_1003b80a4 */

void FUN_1003b80a4(void)

{
  FUN_1003b7f18();
  return;
}



/* Address: 0x1003b80ac | FUN_1003b80ac */

void FUN_1003b80ac(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b80bc | FUN_1003b80bc */

void FUN_1003b80bc(void)

{
  FUN_1003c14d0();
  return;
}



/* Address: 0x1003b80c4 | FUN_1003b80c4 */

void FUN_1003b80c4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003b80d4 | FUN_1003b80d4 */

void FUN_1003b80d4(long param_1,long param_2)

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



/* Address: 0x1003b80e8 | FUN_1003b80e8 */

void FUN_1003b80e8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1003b80f0 | FUN_1003b80f0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_1003b80f0(ulong param_1)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  String SVar5;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  IVar1 = objc_stub::rawType(param_1);
  if (IVar1 == 2) {
    param_1 = param_1 | 0x8000000000000000;
  }
  else if (IVar1 == 1) {
    param_1 = param_1 | 0x4000000000000000;
  }
  else {
    puVar2 = &DAT_100c448c0;
    _swift_getKeyPath(&DAT_100c448c0);
    puVar3 = &DAT_100fbdbb0;
    FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
    _swift_initStackObject();
    FUN_1000da6e0(puVar2,puVar3);
    FUN_1000da768(auStack_88);
    _swift_release(puVar2);
    FUN_100004640(auStack_88,local_70);
    puVar2 = &DAT_100fbef68;
    FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0x6564695f7473696c;
    *(undefined8 *)(puVar2 + 0x28) = 0xef7265696669746e;
    objc_stub::identifier(param_1);
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar2 + 0x30) = SVar5;
    puVar3 = puVar2;
    FUN_1003c92b8(puVar2);
    _swift_setDeallocating(puVar2);
    FUN_100005808(puVar2 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
    FUN_10019c380(0xd000000000000039,0x8000000100da4ff0,3,puVar3,local_70,uStack_68);
    _swift_bridgeObjectRelease(puVar3);
    FUN_100004594(auStack_88);
    pcVar4 = thunk_FUN_10035aca8;
    FUN_10035a72c(thunk_FUN_10035aca8,0);
    param_1 = (ulong)pcVar4 | 0x4000000000000000;
  }
  return param_1;
}



/* Address: 0x1003b82cc | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1003b82d0 | FUN_1003b82d0 */

String FUN_1003b82d0(undefined8 param_1)

{
  LocalizedStringResource LVar1;
  uint uVar2;
  long extraout_x8;
  String SVar3;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = (uint)((ulong)param_1 >> 0x3e);
  if (uVar2 == 0) {
    FUN_1001bfd08(LVar1.unknown);
  }
  else if (uVar2 == 1) {
    FUN_1001bfa08(LVar1.unknown);
  }
  else {
    FUN_1001bfb88(LVar1.unknown);
  }
  SVar3 = (extension_Foundation)::Swift::String::init(LVar1);
  return SVar3;
}



/* Address: 0x1003b835c | FUN_1003b835c */

bool FUN_1003b835c(ulong param_1)

{
  return param_1 >> 0x3e == 1;
}



/* Address: 0x1003b836c | FUN_1003b836c */

bool FUN_1003b836c(long param_1)

{
  return param_1 < -0x4000000000000000;
}



/* Address: 0x1003b837c | FUN_1003b837c */

bool FUN_1003b837c(ulong param_1)

{
  return param_1 >> 0x3e == 0;
}


