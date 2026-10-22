/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1003116b8 | FUN_1003116b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003117fc) */
/* WARNING: Removing unreachable block (ram,0x000100311b7c) */
/* WARNING: Removing unreachable block (ram,0x000100311810) */

ID FUN_1003116b8(ID param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  URL UVar2;
  ID self;
  URL UVar3;
  Data DVar4;
  undefined *puVar5;
  Data *pDVar6;
  Data DVar7;
  Data DVar8;
  NSData *pNVar9;
  ulong uVar10;
  ulong extraout_x1;
  ulong extraout_x1_00;
  long extraout_x8;
  long extraout_x12;
  ID unaff_x20;
  ulong uVar11;
  NSDataReadingOptions contentsOf;
  long lVar12;
  undefined1 auStack_e0 [64];
  ID local_a0 [6];
  Data local_70;
  ulong uStack_68;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  contentsOf.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
  if (((param_2 != 0x6e6f6349776172) || (param_3 != &DAT_e700000000000000)) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x6e6f6349776172,(_StringGuts)0xe700000000000000,
                         (_StringComparisonResult)(__int8)param_2), !bVar1)) {
    FUN_1003b3f7c(param_1,param_2,param_3);
    return param_1;
  }
  if (param_1 == 0) {
    DVar4.unknown = (undefined *)objc_stub::rawIcon(unaff_x20);
    if (DVar4.unknown == (undefined *)0x0) {
      DVar4.unknown = (undefined *)0x0;
      uVar10 = 0xf000000000000000;
    }
    else {
      uVar10 = extraout_x1;
      DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
      if (uVar10 >> 0x3c < 0xf) {
        FUN_10003bf18(DVar4.unknown,uVar10);
        FUN_10003bf18(0,0xf000000000000000);
        objc_stub::setRawIcon_(unaff_x20,0);
        return 1;
      }
    }
    goto LAB_100311a08;
  }
  self = param_1;
  _swift_dynamicCastObjCClass(param_1,&_OBJC_CLASS___CKAsset);
  _swift_unknownObjectRetain(param_1);
  if (self == 0) {
LAB_10031199c:
    local_a0[0] = param_1;
    _swift_unknownObjectRetain(param_1);
    puVar5 = &DAT_100fbee30;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    pDVar6 = &local_70;
    _swift_dynamicCast(pDVar6,local_a0,puVar5,PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    if ((int)pDVar6 == 0) {
      uStack_68 = 0xf000000000000000;
      local_70.unknown = (undefined *)0x0;
    }
  }
  else {
    _swift_unknownObjectRetain(param_1);
    UVar3.unknown = (undefined *)objc_stub::fileURL(self);
    if (UVar3.unknown == (undefined *)0x0) {
      _swift_unknownObjectRelease(param_1);
      goto LAB_10031199c;
    }
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
    (**(code **)(lVar12 + 0x20))
              (contentsOf.unknown,auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    uVar10 = 0;
    DVar4 = Foundation::Data::_init(contentsOf);
    _swift_unknownObjectRelease(param_1);
    (**(code **)(lVar12 + 8))(contentsOf.unknown,UVar2.unknown);
    local_70 = DVar4;
    uStack_68 = uVar10;
  }
  uVar10 = uStack_68;
  DVar4.unknown = local_70.unknown;
  if (0xe < uStack_68 >> 0x3c) {
    _swift_unknownObjectRelease(param_1);
    return 0;
  }
  DVar7.unknown = (undefined *)objc_stub::rawIcon(unaff_x20);
  if (DVar7.unknown == (undefined *)0x0) {
    DVar7.unknown = (undefined *)0x0;
    uVar11 = 0xf000000000000000;
  }
  else {
    uVar11 = extraout_x1_00;
    DVar7 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar7);
    if (uVar11 >> 0x3c < 0xf) {
      FUN_10011da54(DVar4.unknown,uVar10);
      FUN_10011da54(DVar7.unknown,uVar11);
      DVar8 = DVar7;
      FUN_10031b830(DVar7.unknown,uVar11,DVar4.unknown,uVar10);
      FUN_10003bf18(DVar7.unknown,uVar11);
      FUN_10003bf18(DVar4.unknown,uVar10);
      FUN_10003bf18(DVar7.unknown,uVar11);
      if (((ulong)DVar8.unknown & 1) != 0) {
        _swift_unknownObjectRelease(param_1);
LAB_100311a08:
        FUN_10003bf18(DVar4.unknown,uVar10);
        return 1;
      }
      goto LAB_100311b20;
    }
  }
  FUN_10011da54(DVar4.unknown,uVar10);
  FUN_10003bf18(DVar7.unknown,uVar11);
  FUN_10003bf18(DVar4.unknown,uVar10);
LAB_100311b20:
  pNVar9 = Foundation::Data::_bridgeToObjectiveC(DVar4);
  objc_stub::setRawIcon_(unaff_x20,pNVar9);
  _swift_unknownObjectRelease(param_1);
  FUN_10003bf18(DVar4.unknown,uVar10);
  return 1;
}



/* Address: 0x100311b94 | FUN_100311b94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100311b94(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  ID unaff_x20;
  
  _objc_allocWithZone();
  IVar1 = objc_stub::initWithEntity_insertIntoManagedObjectContext_(unaff_x20,param_1,param_2);
  return IVar1;
}



/* Address: 0x100311be8 | FUN_100311be8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100311be8(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  
  _swift_getObjectType();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,
                              "initWithEntity:insertIntoManagedObjectContext:",param_1,param_2);
  return IVar1;
}



/* Address: 0x100311c54 | _TtC9PasteCore17ApplicationEntity::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore17ApplicationEntity::initWithEntity_insertIntoManagedObjectContext_
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



/* Address: 0x100311ca8 | FUN_100311ca8 */

void FUN_100311ca8(undefined8 *param_1,undefined8 param_2)

{
  FUN_100310dd0();
  *param_1 = param_2;
  return;
}



/* Address: 0x100311cd0 | thunk_FUN_100310ea4 */

void thunk_FUN_100310ea4(void)

{
  FUN_100310ea4();
  return;
}



/* Address: 0x100311cd4 | thunk_FUN_100310f5c */

void thunk_FUN_100310f5c(void)

{
  FUN_100310f5c();
  return;
}



/* Address: 0x100311cd8 | FUN_100311cd8 */

void FUN_100311cd8(long param_1,ID *param_2)

{
  code *pcVar1;
  ID self;
  
  self = *param_2;
  FUN_100308c8c();
  if (-1 < param_1) {
    objc_stub::setRawColor_(self,param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100311d0c);
  (*pcVar1)();
}



/* Address: 0x100311d0c | FUN_100311d0c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100311d0c(void)

{
  return ZEXT816(0x100f97aa0);
}



/* Address: 0x100311d2c | FUN_100311d2c */

void FUN_100311d2c(void)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  
  this = (_DictionaryStorage *)&DAT_100fbf420;
  FUN_1000037f0(&DAT_100fbf420,&DAT_100c40b20);
  lVar9 = 0x2f;
  lVar5 = 0x2f;
  Swift::_DictionaryStorage::_allocate(this,0x2f);
  _swift_retain();
  puVar10 = &DAT_100fbefc8;
  while( true ) {
    uVar2 = puVar10[-2];
    uVar3 = puVar10[-1];
    uVar11 = *puVar10;
    _swift_bridgeObjectRetain(uVar3);
    uVar6 = uVar2;
    uVar8 = uVar3;
    FUN_100071370();
    if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100311e38);
      (*pcVar4)();
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar5 + 0x40 + uVar8) = *(ulong *)(lVar5 + 0x40 + uVar8) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar5 + 0x30) + uVar6 * 0x10);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8) = uVar11;
    if (SCARRY8(*(long *)(lVar5 + 0x10),1)) break;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar9 = lVar9 + -1;
    puVar10 = puVar10 + 3;
    if (lVar9 == 0) {
      _swift_release(lVar5);
      puVar7 = &DAT_100fbf428;
      FUN_1000037f0(&DAT_100fbf428,&DAT_100c40b28);
      _swift_arrayDestroy(&DAT_100fbefb8,0x2f,puVar7);
      DAT_100fbef88 = lVar5;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100311e3c);
  (*pcVar4)();
}



/* Address: 0x100311e3c | FUN_100311e3c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_100311e3c(ID param_1,undefined8 param_2)

{
  ID IVar1;
  void *pvVar2;
  char *pcVar3;
  String SVar4;
  
  IVar1 = objc_stub::bundleIdentifier(param_1);
  if (IVar1 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar2 = SVar4.bridgeObject;
    pcVar3 = SVar4.str;
    IVar1 = objc_stub::localizedName(param_1);
    if (IVar1 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      IVar1 = objc_stub::FUN_100c034e0(param_1);
      if (IVar1 == 0) {
        pcVar3 = (char *)0x0;
      }
      else {
        FUN_100310fb8(pcVar3,pvVar2,SVar4.str,SVar4.bridgeObject,IVar1,param_2);
      }
      _swift_bridgeObjectRelease(pvVar2);
      pvVar2 = SVar4.bridgeObject;
    }
    _swift_bridgeObjectRelease(pvVar2);
  }
  return pcVar3;
}



/* Address: 0x100311f38 | FUN_100311f38 */

void FUN_100311f38(void)

{
  URL UVar1;
  undefined *puVar2;
  
  if (DAT_100fbee38 != (undefined *)0x0) {
    return;
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100ea71d8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__URL_>Swift__CustomStringConvertible_100ea71d8,UVar1.unknown
            );
  DAT_100fbee38 = puVar2;
  return;
}



/* Address: 0x100311f7c | FUN_100311f7c */

void FUN_100311f7c(long param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (DAT_100fbef80 != -1) {
    _swift_once(&DAT_100fbef80,FUN_100311d2c);
  }
  lVar1 = DAT_100fbef88;
  if (*(long *)(DAT_100fbef88 + 0x10) != 0) {
    _swift_bridgeObjectRetain(DAT_100fbef88);
    FUN_100071370();
    if ((param_2 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar1);
    }
    else {
      lVar3 = *(long *)(*(long *)(lVar1 + 0x38) + param_1 * 8);
      _swift_bridgeObjectRelease(lVar1);
      FUN_10000ec2c(0,&DAT_100fbee00,&PTR__OBJC_CLASS___NSColor_100f8d680);
      if (lVar3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100312044);
        (*pcVar2)();
      }
      FUN_100308ea0(lVar3);
    }
  }
  return;
}



/* Address: 0x100312044 | FUN_100312044 */

undefined8 FUN_100312044(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbef70;
  FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10031208c | FUN_10031208c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10031208c(String *param_1,ID *param_2)

{
  String SVar1;
  
  objc_stub::name(*param_2);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar1;
  return 0;
}



/* Address: 0x1003120dc | FUN_1003120dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003120dc(String *param_1,ID *param_2)

{
  String SVar1;
  
  objc_stub::identifier(*param_2);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar1;
  return 0;
}



/* Address: 0x10031212c | FUN_10031212c */

void FUN_10031212c(void)

{
  code *pcVar1;
  ID IVar2;
  ID unaff_x20;
  
  IVar2 = objc_stub::rawType(unaff_x20);
  if (IVar2 < 3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100312150);
  (*pcVar1)();
}



/* Address: 0x100312150 | FUN_100312150 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined ** FUN_100312150(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **self;
  NSString *pNVar4;
  undefined8 uVar5;
  ID unaff_x20;
  undefined8 uVar6;
  undefined *local_70 [3];
  undefined *local_58;
  
  puVar1 = param_1;
  FUN_1000f3588();
  uVar6 = *puVar1;
  uVar5 = uVar6;
  _swift_retain();
  FUN_1000f35e0();
  _swift_release(uVar6);
  puVar2 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar2 + 0x28) = 0xea00000000007265;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar3 = puVar2;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar2);
  FUN_100312044(puVar2 + 0x20);
  puVar2 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  self = local_70;
  uVar5 = 0;
  local_70[0] = puVar3;
  local_58 = puVar2;
  FUN_100328968(self,0,param_1);
  FUN_100004594(local_70);
  if (self == (undefined **)0x0) {
    uVar6 = *puVar1;
    _swift_retain(uVar6);
    FUN_1000f36ec();
    _swift_release(uVar6);
    _objc_allocWithZone();
    self = (undefined **)objc_stub::initWithContext_(unaff_x20,param_1);
    objc_stub::setRawType_((ID)self,2);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
    objc_stub::setIdentifier_((ID)self,pNVar4);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar5);
    objc_stub::setName_((ID)self,pNVar4);
  }
  else {
    _swift_bridgeObjectRelease(param_2);
  }
  return self;
}



/* Address: 0x100312324 | FUN_100312324 */

undefined1  [16] FUN_100312324(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007265;
  auVar1._0_8_ = 0x696669746e656469;
  return auVar1;
}



/* Address: 0x100312340 | FUN_100312340 */

undefined * FUN_100312340(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  puVar4 = puVar3;
  FUN_1002fc6c0();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  _swift_arrayDestroy(puVar3 + 0x20,3,PTR___type_metadata_for_Swift_String_100eac208);
  _swift_initStaticObject(puVar2,&DAT_100fbf4b8);
  FUN_10036c298();
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar1);
  return puVar4;
}



/* Address: 0x1003123e4 | _TtC9PasteCore12DeviceEntity::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore12DeviceEntity::initWithEntity_insertIntoManagedObjectContext_
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



/* Address: 0x100312438 | FUN_100312438 */

char * FUN_100312438(void)

{
  return "name";
}



/* Address: 0x100312444 | thunk_FUN_10031208c */

void thunk_FUN_10031208c(void)

{
  FUN_10031208c();
  return;
}



/* Address: 0x100312448 | FUN_100312448 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100312448(undefined8 param_1,ID *param_2)

{
  NSString *pNVar1;
  ID self;
  
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setName_(self,pNVar1);
  return 0;
}



/* Address: 0x100312488 | FUN_100312488 */

char * FUN_100312488(void)

{
  return "identifier";
}



/* Address: 0x100312494 | thunk_FUN_1003120dc */

void thunk_FUN_1003120dc(void)

{
  FUN_1003120dc();
  return;
}



/* Address: 0x100312498 | FUN_100312498 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100312498(undefined8 param_1,ID *param_2)

{
  NSString *pNVar1;
  ID self;
  
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setIdentifier_(self,pNVar1);
  return 0;
}



/* Address: 0x1003124d8 | FUN_1003124d8 */

void FUN_1003124d8(undefined1 *param_1,ID *param_2)

{
  code *pcVar1;
  ID IVar2;
  
  IVar2 = objc_stub::rawType(*param_2);
  if (IVar2 < 3) {
    *param_1 = (char)IVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10031250c);
  (*pcVar1)();
}



/* Address: 0x10031250c | FUN_10031250c */

void FUN_10031250c(byte *param_1,ID *param_2)

{
  objc_stub::setRawType_(*param_2,(ulong)*param_1);
  return;
}



/* Address: 0x100312518 | FUN_100312518 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100312518(void)

{
  return ZEXT816(0x100f97bc0);
}



/* Address: 0x100312538 | FUN_100312538 */

void FUN_100312538(undefined8 param_1)

{
  FUN_100312568(0);
  FUN_100308ea0(param_1);
  return;
}



/* Address: 0x100312568 | FUN_100312568 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100312568(void)

{
  undefined *puVar1;
  
  if (DAT_100fbee00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSColor;
  _swift_getObjCClassMetadata();
  DAT_100fbee00 = puVar1;
  return;
}



/* Address: 0x1003125ac | FUN_1003125ac */

undefined1  [16] FUN_1003125ac(void)

{
  return ZEXT816(0x100eca390);
}



/* Address: 0x1003125bc | FUN_1003125bc */

undefined1  [16]
FUN_1003125bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  FUN_10011da54(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1003125f0 | FUN_1003125f0 */

void FUN_1003125f0(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  if (0xe < (ulong)param_1[3] >> 0x3c) {
    return;
  }
  FUN_10003bf2c(param_1[2]);
  return;
}



/* Address: 0x100312634 | FUN_100312634 */

undefined8 * FUN_100312634(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[2];
    FUN_1001037b4(uVar1,uVar2);
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar1;
  }
  return param_1;
}



/* Address: 0x10031269c | FUN_10031269c */

undefined8 * FUN_10031269c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[1] = param_2[1];
  uVar4 = param_2[3];
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_2[2];
      FUN_1001037b4(uVar2,uVar4);
      uVar3 = param_1[2];
      uVar1 = param_1[3];
      param_1[2] = uVar2;
      param_1[3] = uVar4;
      FUN_10003bf2c(uVar3,uVar1);
      return param_1;
    }
    FUN_10031275c(param_1 + 2);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[2];
    FUN_1001037b4(uVar3,uVar4);
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    return param_1;
  }
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  return param_1;
}



/* Address: 0x10031275c | FUN_10031275c */

undefined8 FUN_10031275c(undefined8 param_1)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Foundation_Data_100ea7300 + -8) + 8))();
  return param_1;
}



/* Address: 0x100312790 | FUN_100312790 */

undefined8 * FUN_100312790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  if ((ulong)param_1[3] >> 0x3c < 0xf) {
    uVar2 = param_2[3];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[2];
      param_1[2] = param_2[2];
      param_1[3] = uVar2;
      FUN_10003bf2c(uVar1);
      return param_1;
    }
    FUN_10031275c(param_1 + 2);
  }
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x100312810 | FUN_100312810 */

undefined1  [16] FUN_100312810(void)

{
  return ZEXT816(0x100eca410);
}



/* Address: 0x100312820 | FUN_100312820 */

undefined8 FUN_100312820(void)

{
  undefined1 local_29;
  undefined8 local_28 [3];
  
  local_29 = 1;
  FUN_1002ccc34(local_28,0xd000000000000021,0x8000000100da2200,&local_29,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_28[0];
}



/* Address: 0x100312874 | FUN_100312874 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_100312874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  NSURL *pNVar4;
  undefined *puVar5;
  URL UVar6;
  NSString *pNVar7;
  ID IVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  long lVar10;
  String SVar11;
  undefined1 auVar12 [16];
  char local_51;
  
  puVar2 = &DAT_100c40b98;
  _swift_getKeyPath(&DAT_100c40b98);
  FUN_1002d0bc8();
  FUN_1002d0c78(&local_51);
  if (local_51 == '\x01') {
    puVar5 = &DAT_100fbf510;
    FUN_1000037f0(&DAT_100fbf510,&DAT_100c40bc0);
    _swift_initStackObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    if (*(NSString **)PTR__kQLThumbnailOptionIconModeKey_100eaa3d8 == (NSString *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100312ae4);
      (*pcVar1)();
    }
    SVar11 = (extension_Foundation)::Swift::String::init
                       (*(NSString **)PTR__kQLThumbnailOptionIconModeKey_100eaa3d8);
    *(String *)(puVar5 + 0x20) = SVar11;
    puVar5[0x30] = 1;
    UVar6.unknown = puVar5;
    FUN_1003c9578();
    _swift_setDeallocating(puVar5);
    FUN_100005808((String *)(puVar5 + 0x20),&DAT_100fbf518,&DAT_100c40bc8);
    pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease();
    lVar10 = *(long *)PTR__kCFAllocatorDefault_100ea9b18;
    pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar6);
    _QLThumbnailImageCreate(0x4070000000000000,0x4070000000000000,lVar10,pNVar4,pNVar3);
    if (lVar10 != 0) {
      puVar5 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      objc_stub::initWithCGImage_size_((ID)puVar5,0,0,lVar10);
      IVar8 = 0;
      uVar9 = extraout_x1;
      FUN_1003c89c8(0);
      goto LAB_100312a9c;
    }
  }
  UVar6.unknown = (undefined *)objc_stub::sharedWorkspace(&_OBJC_CLASS___NSWorkspace);
  SVar11 = Foundation::URL::get_path(UVar6);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  IVar8 = objc_stub::iconForFile_((ID)UVar6.unknown,pNVar7);
  IVar8 = objc_stub::setSize_(IVar8,0x4060000000000000,0x4060000000000000);
  uVar9 = extraout_x1_00;
  FUN_1003c89c8();
LAB_100312a9c:
  _swift_release(param_3);
  _swift_release(param_2);
  _swift_release(puVar2);
  auVar12._8_8_ = uVar9;
  auVar12._0_8_ = IVar8;
  return auVar12;
}



/* Address: 0x100312ae4 | FUN_100312ae4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100313044) */

undefined * FUN_100312ae4(_ArrayBuffer param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  _CocoaArrayWrapper _Var3;
  Encoding data;
  Encoding EVar4;
  URL UVar5;
  UTType UVar6;
  UTType UVar7;
  URLResourceValues forKeys;
  URL UVar8;
  uint uVar9;
  void *pvVar10;
  undefined8 uVar11;
  undefined8 extraout_x1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  undefined *puVar20;
  String SVar21;
  long local_140;
  undefined *local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  long local_f8;
  ulong local_f0;
  ulong local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined1 auStack_a8 [40];
  undefined *local_80 [4];
  
  local_138 = (undefined *)Foundation::URLResourceValues::typeMetadataAccessor();
  local_140 = *(long *)(local_138 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140 + 0x40));
  lVar12 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_128 = lVar12;
  EVar4 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar4.unknown + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_108 = lVar12;
  local_d0 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  local_d8 = *(undefined **)(local_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_d8 + 0x40));
  lVar12 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100fc1a40;
  local_e0 = (undefined *)lVar12;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar12 = lVar12 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar12 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar13 = (undefined *)((lVar14 - extraout_x12_00) - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0))
  ;
  local_c8 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_110 = lVar15 - extraout_x12_02;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var3.unknown = param_1.unknown;
    }
    puVar13 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  local_130 = lVar15;
  local_120 = lVar12;
  local_118 = lVar14;
  local_c0 = UVar5.unknown;
  local_b8 = lVar17;
  if (puVar13 == (undefined *)0x0) {
    local_100 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar19 = (undefined *)0x0;
    local_e8 = (ulong)param_1.unknown & 0xc000000000000001;
    local_100 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_f0 = (ulong)param_1.unknown & 0xffffffffffffff8;
    local_f8 = lVar14 - extraout_x12_00;
    do {
      if (local_e8 == 0) {
        if (*(undefined **)(local_f0 + 0x10) <= puVar19) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1003132ec);
          (*pcVar16)();
        }
                    /* WARNING: Load size is inaccurate */
        UVar6.unknown = param_1.unknown[(long)puVar19 * 8 + 0x20];
      }
      else {
        UVar6.unknown = puVar19;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar19,param_1);
      }
      puVar20 = local_e0;
      puVar1 = puVar19 + 1;
      if (SCARRY8((long)puVar19,1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1003132e8);
        (*pcVar16)();
      }
      UVar7 = UniformTypeIdentifiers::UTType::get_fileURL(UVar6);
      SVar21 = UniformTypeIdentifiers::UTType::get_identifier(UVar7);
      pvVar10 = SVar21.bridgeObject;
      (**(code **)((long)local_d8 + 8))(puVar20,local_d0);
      lVar12 = _TtC9PasteCore14PasteboardItem::dataByType;
      _swift_beginAccess(UVar6.unknown + _TtC9PasteCore14PasteboardItem::dataByType,local_80,0x20,0)
      ;
                    /* WARNING: Load size is inaccurate */
      EVar4.unknown = UVar6.unknown[lVar12];
      if (*(long *)(EVar4.unknown + 0x10) == 0) {
LAB_100312d1c:
        _swift_endAccess(local_80);
        _swift_bridgeObjectRelease(pvVar10);
LAB_100312d2c:
        lVar12 = local_f8;
        (**(code **)(lVar17 + 0x38))(local_f8,1,1,UVar5.unknown);
LAB_100312d54:
        FUN_100005808(lVar12,&DAT_100fc1a40,&DAT_100c40660);
      }
      else {
        _swift_bridgeObjectRetain(EVar4.unknown);
        FUN_100071370();
        if (((ulong)SVar21.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(EVar4.unknown);
          goto LAB_100312d1c;
        }
        puVar2 = (undefined8 *)(*(long *)(EVar4.unknown + 0x38) + (long)SVar21.str * 0x10);
        data.unknown = (undefined *)*puVar2;
        lVar12 = puVar2[1];
        FUN_1001037b4(data.unknown,lVar12);
        _swift_endAccess(local_80);
        _swift_bridgeObjectRelease();
        Encoding::_get_utf8(EVar4);
        lVar14 = lVar12;
        (extension_Foundation)::Swift::String::_init(data);
        _swift_bridgeObjectRelease(pvVar10);
        lVar17 = local_b8;
        UVar5.unknown = local_c0;
        FUN_10003bf2c(data.unknown,lVar12);
        lVar12 = local_f8;
        if (lVar14 == 0) goto LAB_100312d2c;
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(lVar14);
        lVar14 = lVar12;
        (**(code **)(lVar17 + 0x30))(lVar12,1,UVar5.unknown);
        if ((int)lVar14 == 1) goto LAB_100312d54;
        pcVar16 = *(code **)(lVar17 + 0x20);
        (*pcVar16)(local_110,lVar12,UVar5.unknown);
        puVar20 = local_100;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar20 & 1) == 0) {
          puVar20 = (undefined *)0x0;
          FUN_10037fb74(0,*(long *)(local_100 + 0x10) + 1,1);
          local_100 = puVar20;
        }
        uVar18 = *(ulong *)(local_100 + 0x10);
        if (*(ulong *)(local_100 + 0x18) >> 1 <= uVar18) {
          puVar20 = (undefined *)(ulong)(1 < *(ulong *)(local_100 + 0x18));
          FUN_10037fb74(puVar20,uVar18 + 1,1,local_100);
          local_100 = puVar20;
        }
        lVar17 = local_b8;
        *(ulong *)(local_100 + 0x10) = uVar18 + 1;
        (*pcVar16)(local_100 +
                   *(long *)(local_b8 + 0x48) * uVar18 +
                   ((ulong)*(byte *)(local_b8 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(local_b8 + 0x50) ^ 0xffffffffffffffff)),local_110,UVar5.unknown
                  );
      }
      puVar19 = puVar19 + 1;
    } while (puVar1 != puVar13);
  }
  _swift_bridgeObjectRelease(param_1.unknown);
  puVar13 = local_100;
  lVar12 = local_130;
  if (*(long *)(local_100 + 0x10) == 0) {
    puVar19 = (undefined *)0x0;
    uVar11 = 1;
    lVar12 = local_120;
    lVar14 = local_118;
  }
  else {
    uVar18 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
             ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
    pcVar16 = *(code **)(lVar17 + 0x10);
    (*pcVar16)(local_130,local_100 + uVar18,UVar5.unknown);
    puVar19 = &DAT_100fbf508;
    FUN_1000037f0(&DAT_100fbf508,&DAT_100c40b90);
    UVar8.unknown = auStack_a8;
    _swift_initStackObject();
    *(undefined8 *)(puVar19 + 0x18) = 2;
    *(undefined8 *)(puVar19 + 0x10) = 1;
    *(undefined8 *)(puVar19 + 0x20) = *(undefined8 *)PTR__NSURLTotalFileSizeKey_100ea9ae8;
    forKeys.unknown = puVar19;
    FUN_1002fca9c();
    _swift_setDeallocating(puVar19);
    FUN_100313308(puVar19 + 0x20);
    lVar14 = local_128;
    Foundation::URL::_resourceValues((Set<NSURLResourceKey>)forKeys.unknown,UVar8);
    puVar19 = UVar5.unknown;
    (**(code **)(lVar17 + 8))(lVar12);
    uVar9 = (uint)puVar19;
    _swift_bridgeObjectRelease();
    Foundation::URLResourceValues::_get_totalFileSize(forKeys);
    (**(code **)(local_140 + 8))(lVar14,local_138);
    lVar14 = local_118;
    lVar12 = local_120;
    puVar19 = (undefined *)0x0;
    if ((uVar9 & 0xff) != 1) {
      puVar19 = forKeys.unknown;
    }
    if (*(long *)(puVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x100313308);
      (*pcVar16)();
    }
    (*pcVar16)(local_118,puVar13 + uVar18,UVar5.unknown);
    uVar11 = 0;
    lVar17 = local_b8;
  }
  (**(code **)(lVar17 + 0x38))(lVar14,uVar11,1,UVar5.unknown);
  FUN_1002fc054(lVar14,lVar12);
  lVar15 = lVar12;
  (**(code **)(lVar17 + 0x30))(lVar12,1,UVar5.unknown);
  puVar1 = local_c8;
  if ((int)lVar15 == 1) {
    puVar20 = (undefined *)0x0;
    local_d0 = (undefined *)0xf000000000000000;
  }
  else {
    (**(code **)(lVar17 + 0x20))(local_c8,lVar12,UVar5.unknown);
    objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    puVar20 = puVar1;
    uVar11 = extraout_x1;
    FUN_100312874();
    local_d0 = (undefined *)uVar11;
    (**(code **)(lVar17 + 8))(puVar1,UVar5.unknown);
  }
  FUN_100005808(lVar14,&DAT_100fc1a40,&DAT_100c40660);
  lVar12 = *(long *)(puVar13 + 0x10);
  if (lVar12 == 0) {
    _swift_bridgeObjectRelease(puVar13);
    puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_80[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_e0 = puVar20;
    local_d8 = puVar19;
    FUN_1003075b8(0,lVar12,0);
    puVar13 = puVar13 + ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff));
    lVar14 = *(long *)(lVar17 + 0x48);
    pcVar16 = *(code **)(lVar17 + 0x10);
    do {
      puVar1 = local_80[0];
      puVar19 = local_c8;
      UVar8.unknown = local_c8;
      (*pcVar16)(local_c8,puVar13,UVar5.unknown);
      SVar21 = Foundation::URL::get_path(UVar8);
      (**(code **)(local_b8 + 8))(puVar19,UVar5.unknown);
      uVar18 = *(ulong *)(puVar1 + 0x10);
      local_80[0] = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar18) {
        FUN_1003075b8(1 < *(ulong *)(puVar1 + 0x18),uVar18 + 1,1);
      }
      puVar19 = local_80[0];
      *(ulong *)(local_80[0] + 0x10) = uVar18 + 1;
      *(String *)(local_80[0] + uVar18 * 0x10 + 0x20) = SVar21;
      puVar13 = puVar13 + lVar14;
      lVar12 = lVar12 + -1;
      UVar5.unknown = local_c0;
    } while (lVar12 != 0);
    _swift_bridgeObjectRelease(local_100);
  }
  return puVar19;
}



/* Address: 0x100313308 | FUN_100313308 */

undefined8 FUN_100313308(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002fc228();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100313344 | FUN_100313344 */

void FUN_100313344(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000021,0x8000000100da2200,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x10031338c | FUN_10031338c */

undefined1  [16] FUN_10031338c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  FUN_1001037b4();
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1003133b8 | FUN_1003133b8 */

void FUN_1003133b8(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1003133c4 | FUN_1003133c4 */

undefined8 * FUN_1003133c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  FUN_1001037b4(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x100313408 | FUN_100313408 */

undefined8 * FUN_100313408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x10031345c | FUN_10031345c */

undefined8 * FUN_10031345c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100313494 | FUN_100313494 */

int FUN_100313494(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1003134e8 | FUN_1003134e8 */

void FUN_1003134e8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = 0;
      param_1[3] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    param_1[1] = 0;
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
  }
  return;
}



/* Address: 0x100313538 | FUN_100313538 */

undefined1  [16] FUN_100313538(void)

{
  return ZEXT816(0x100eca498);
}



/* Address: 0x100313548 | FUN_100313548 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100313548(_ArrayBuffer param_1,undefined *param_2)

{
  undefined *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  Data DVar5;
  NSData *pNVar6;
  ID self;
  _ArrayBuffer self_00;
  ulong uVar7;
  _ArrayBuffer _Var8;
  ulong extraout_x1;
  ulong uVar9;
  undefined *self_01;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 extraout_d0;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar13 = param_1.unknown & 0xffffffffffffff8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    puVar11 = *(undefined **)(puVar13 + 0x10);
    self_00.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = puVar13;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    puVar11 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    self_00.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = self_00.unknown;
  if (puVar11 != (undefined *)0x0) {
    puVar12 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar13 + 0x10) <= puVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100313710);
            (*pcVar4)();
          }
                    /* WARNING: Load size is inaccurate */
          DVar5.unknown = param_1.unknown[(long)puVar12 * 8 + 0x20];
          _Var8.unknown = param_2;
        }
        else {
          DVar5.unknown = puVar12;
          _Var8.unknown = param_1.unknown;
          Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar12,param_1);
        }
        puVar1 = puVar12 + 1;
        if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10031370c);
          (*pcVar4)();
        }
        FUN_10037d5c4();
        if ((ulong)_Var8.unknown >> 0x3c < 0xf) break;
LAB_1003135b8:
        param_2 = _Var8.unknown;
        puVar12 = puVar12 + 1;
        if (puVar1 == puVar11) goto LAB_10031372c;
      }
      self_01 = &_OBJC_CLASS___NSImage;
      _objc_allocWithZone();
      FUN_1001037b4(DVar5.unknown,_Var8.unknown);
      pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar5);
      param_2 = (undefined *)objc_stub::initWithData_((ID)self_01,pNVar6);
      FUN_10003bf18(DVar5.unknown,_Var8.unknown);
      FUN_10003bf18(DVar5.unknown);
      if (param_2 == (undefined *)0x0) goto LAB_1003135b8;
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar9 = *(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
      uVar7 = *(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x18);
      if (uVar7 >> 1 <= uVar9) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar7,uVar9 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar9);
      self_00.unknown = puVar3;
      puVar12 = puVar1;
    } while (puVar1 != puVar11);
  }
LAB_10031372c:
  _swift_bridgeObjectRelease(param_1.unknown);
  if ((ulong)self_00.unknown >> 0x3e == 0) {
    lVar10 = *(long *)(((ulong)self_00.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = self_00.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self_00.unknown) {
      _Var2.unknown = self_00.unknown;
    }
    lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar10 == 0) {
    _swift_bridgeObjectRelease(self_00.unknown);
  }
  else {
    if (((ulong)self_00.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)self_00.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003138b8);
        (*pcVar4)();
      }
      self = *(ID *)(self_00.unknown + 0x20);
    }
    else {
      self = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,self_00);
    }
    _swift_bridgeObjectRelease();
    FUN_1003c9f3c(0x4071800000000000,0x406cc00000000000);
    if (self_00.unknown != (undefined *)0x0) {
      uVar7 = objc_stub::CGImageForProposedRect_context_hints_((ID)self_00.unknown,0,0,0);
      uVar9 = extraout_x1;
      if ((uVar7 == 0) || (FUN_100308a6c(), (uVar7 & 1) == 0)) {
        FUN_1003c8b58(0x3fe3333333333333,0);
      }
      else {
        FUN_1003c89c8();
      }
      if (uVar9 >> 0x3c < 0xf) {
        objc_stub::size(self);
        return extraout_d0;
      }
    }
  }
  return 0;
}



/* Address: 0x1003138b8 | FUN_1003138b8 */

long * FUN_1003138b8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  AttributedString AVar5;
  undefined *puVar6;
  long lVar7;
  URL UVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    lVar7 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar7;
    param_1[2] = param_2[2];
    *(char *)(param_1 + 3) = (char)param_2[3];
    lVar11 = (long)*(int *)(param_3 + 0x18);
    AVar5 = Foundation::AttributedString::typeMetadataAccessor();
    lVar12 = *(long *)(AVar5.unknown + -8);
    pcVar13 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(lVar7);
    lVar7 = (long)param_2 + lVar11;
    (*pcVar13)(lVar7,1,AVar5.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,AVar5.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,AVar5.unknown);
    }
    else {
      puVar6 = &DAT_100fbf520;
      FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    lVar11 = (long)*(int *)(param_3 + 0x1c);
    UVar8 = Foundation::URL::typeMetadataAccessor();
    lVar12 = *(long *)(UVar8.unknown + -8);
    lVar7 = (long)param_2 + lVar11;
    (**(code **)(lVar12 + 0x30))(lVar7,1,UVar8.unknown);
    if ((int)lVar7 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,UVar8.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,UVar8.unknown);
    }
    else {
      puVar6 = &DAT_100fc1a40;
      FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
      _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    iVar3 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar10 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    uVar9 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (uVar9 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      FUN_1001037b4(uVar10,uVar9);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar9 = puVar2[1];
    if (uVar9 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      FUN_1001037b4(uVar10,uVar9);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
    }
    iVar3 = *(int *)(param_3 + 0x30);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    uVar10 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar10;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    uVar9 = puVar2[1];
    if (uVar9 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      FUN_1001037b4(uVar10,uVar9);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
    }
    iVar3 = *(int *)(param_3 + 0x38);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
    uVar9 = puVar2[1];
    _swift_bridgeObjectRetain();
    if (uVar9 >> 0x3c < 0xf) {
      uVar10 = *puVar2;
      FUN_1001037b4(uVar10,uVar9);
      *puVar1 = uVar10;
      puVar1[1] = uVar9;
    }
    else {
      uVar10 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar10;
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
    *puVar1 = *puVar2;
    *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar9 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar7 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100313bac | FUN_100313bac */

void FUN_100313bac(long param_1,long param_2)

{
  undefined8 *puVar1;
  int iVar2;
  AttributedString AVar3;
  long lVar4;
  URL UVar5;
  long lVar6;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar2 = *(int *)(param_2 + 0x18);
  AVar3 = Foundation::AttributedString::typeMetadataAccessor();
  lVar6 = *(long *)(AVar3.unknown + -8);
  lVar4 = param_1 + iVar2;
  (**(code **)(lVar6 + 0x30))(lVar4,1,AVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 8))(param_1 + iVar2,AVar3.unknown);
  }
  iVar2 = *(int *)(param_2 + 0x1c);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar5.unknown + -8);
  lVar4 = param_1 + iVar2;
  (**(code **)(lVar6 + 0x30))(lVar4,1,UVar5.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar6 + 8))(param_1 + iVar2,UVar5.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x24));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_10003bf2c(*puVar1);
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x28));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_10003bf2c(*puVar1);
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x30));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    FUN_10003bf2c(*puVar1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x34)));
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x3c));
  if (0xe < (ulong)puVar1[1] >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*puVar1);
  return;
}



/* Address: 0x100313d08 | FUN_100313d08 */

undefined8 * FUN_100313d08(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  AttributedString AVar4;
  long lVar5;
  undefined *puVar6;
  URL UVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar10 = (long)*(int *)(param_3 + 0x18);
  AVar4 = Foundation::AttributedString::typeMetadataAccessor();
  lVar11 = *(long *)(AVar4.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar9);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar12)(lVar5,1,AVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,AVar4.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,AVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fbf520;
    FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x1c);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar7.unknown + -8);
  lVar5 = (long)param_2 + lVar10;
  (**(code **)(lVar11 + 0x30))(lVar5,1,UVar7.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar7.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,UVar7.unknown);
  }
  else {
    puVar6 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar9 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar8 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (uVar8 >> 0x3c < 0xf) {
    uVar9 = *puVar2;
    FUN_1001037b4(uVar9,uVar8);
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
  }
  else {
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar8 = puVar2[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar9 = *puVar2;
    FUN_1001037b4(uVar9,uVar8);
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
  }
  else {
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  iVar3 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar9 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar8 = puVar2[1];
  if (uVar8 >> 0x3c < 0xf) {
    uVar9 = *puVar2;
    FUN_1001037b4(uVar9,uVar8);
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
  }
  else {
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  iVar3 = *(int *)(param_3 + 0x38);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x34)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x34));
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar8 = puVar2[1];
  _swift_bridgeObjectRetain();
  if (uVar8 >> 0x3c < 0xf) {
    uVar9 = *puVar2;
    FUN_1001037b4(uVar9,uVar8);
    *puVar1 = uVar9;
    puVar1[1] = uVar8;
  }
  else {
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x100313fd0 | FUN_100313fd0 */

undefined8 * FUN_100313fd0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  AttributedString AVar3;
  long lVar4;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar8 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  uVar8 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar8;
  lVar10 = (long)*(int *)(param_3 + 0x18);
  AVar3 = Foundation::AttributedString::typeMetadataAccessor();
  lVar12 = *(long *)(AVar3.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar7 = (long)param_1 + lVar10;
  (*pcVar13)(lVar7,1,AVar3.unknown);
  lVar4 = (long)param_2 + lVar10;
  (*pcVar13)(lVar4,1,AVar3.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar4 != 0) {
      (**(code **)(lVar12 + 8))((long)param_1 + lVar10,AVar3.unknown);
      goto LAB_1003140ac;
    }
    (**(code **)(lVar12 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,AVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,AVar3.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,AVar3.unknown);
  }
  else {
LAB_1003140ac:
    puVar5 = &DAT_100fbf520;
    FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x1c);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar6.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar7 = (long)param_1 + lVar10;
  (*pcVar13)(lVar7,1,UVar6.unknown);
  lVar4 = (long)param_2 + lVar10;
  (*pcVar13)(lVar4,1,UVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar4 != 0) {
      (**(code **)(lVar12 + 8))((long)param_1 + lVar10,UVar6.unknown);
      goto LAB_10031415c;
    }
    (**(code **)(lVar12 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar6.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar6.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar10,0,1,UVar6.unknown);
  }
  else {
LAB_10031415c:
    puVar5 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar9 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) {
      FUN_10031275c(puVar1);
      goto LAB_100314208;
    }
    uVar11 = *puVar2;
    FUN_1001037b4(uVar11,uVar9);
    uVar8 = *puVar1;
    uVar14 = puVar1[1];
    *puVar1 = uVar11;
    puVar1[1] = uVar9;
    FUN_10003bf2c(uVar8,uVar14);
  }
  else if (uVar9 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    FUN_1001037b4(uVar8,uVar9);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
  }
  else {
LAB_100314208:
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar9 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) {
      FUN_10031275c(puVar1);
      goto LAB_100314288;
    }
    uVar11 = *puVar2;
    FUN_1001037b4(uVar11,uVar9);
    uVar8 = *puVar1;
    uVar14 = puVar1[1];
    *puVar1 = uVar11;
    puVar1[1] = uVar9;
    FUN_10003bf2c(uVar8,uVar14);
  }
  else if (uVar9 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    FUN_1001037b4(uVar8,uVar9);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
  }
  else {
LAB_100314288:
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar14 = puVar2[1];
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  puVar1[1] = uVar14;
  *puVar1 = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar9 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) {
      FUN_10031275c(puVar1);
      goto LAB_100314324;
    }
    uVar11 = *puVar2;
    FUN_1001037b4(uVar11,uVar9);
    uVar8 = *puVar1;
    uVar14 = puVar1[1];
    *puVar1 = uVar11;
    puVar1[1] = uVar9;
    FUN_10003bf2c(uVar8,uVar14);
  }
  else if (uVar9 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    FUN_1001037b4(uVar8,uVar9);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
  }
  else {
LAB_100314324:
    uVar8 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar8;
  }
  lVar7 = (long)*(int *)(param_3 + 0x34);
  uVar8 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  uVar8 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = uVar8;
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x3c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x3c));
  uVar9 = puVar2[1];
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    if (uVar9 >> 0x3c < 0xf) {
      uVar11 = *puVar2;
      FUN_1001037b4(uVar11,uVar9);
      uVar8 = *puVar1;
      uVar14 = puVar1[1];
      *puVar1 = uVar11;
      puVar1[1] = uVar9;
      FUN_10003bf2c(uVar8,uVar14);
      goto LAB_100314404;
    }
    FUN_10031275c(puVar1);
  }
  else if (uVar9 >> 0x3c < 0xf) {
    uVar8 = *puVar2;
    FUN_1001037b4(uVar8,uVar9);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    goto LAB_100314404;
  }
  uVar8 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar8;
LAB_100314404:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  uVar8 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *puVar1 = uVar8;
  return param_1;
}



/* Address: 0x10031446c | FUN_10031446c */

undefined8 * FUN_10031446c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  AttributedString AVar4;
  long lVar5;
  undefined *puVar6;
  URL UVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  uVar10 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar8 = (long)*(int *)(param_3 + 0x18);
  AVar4 = Foundation::AttributedString::typeMetadataAccessor();
  lVar9 = *(long *)(AVar4.unknown + -8);
  lVar5 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar5,1,AVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,AVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,AVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fbf520;
    FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar7.unknown + -8);
  lVar5 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar5,1,UVar7.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar7.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,UVar7.unknown);
  }
  else {
    puVar6 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar10 = *puVar3;
  puVar2[1] = puVar3[1];
  *puVar2 = uVar10;
  *(undefined1 *)(puVar2 + 2) = *(undefined1 *)(puVar3 + 2);
  iVar1 = *(int *)(param_3 + 0x34);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  iVar1 = *(int *)(param_3 + 0x3c);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar3 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *puVar2 = *puVar3;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(puVar3 + 1);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar2 = *param_2;
  *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x100314650 | FUN_100314650 */

undefined8 * FUN_100314650(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  AttributedString AVar5;
  long lVar6;
  undefined *puVar7;
  URL UVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar9 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar4);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  lVar12 = (long)*(int *)(param_3 + 0x18);
  AVar5 = Foundation::AttributedString::typeMetadataAccessor();
  lVar13 = *(long *)(AVar5.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = (long)param_1 + lVar12;
  (*pcVar14)(lVar11,1,AVar5.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar14)(lVar6,1,AVar5.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar13 + 8))((long)param_1 + lVar12,AVar5.unknown);
      goto LAB_10031471c;
    }
    (**(code **)(lVar13 + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,AVar5.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,AVar5.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,AVar5.unknown);
  }
  else {
LAB_10031471c:
    puVar7 = &DAT_100fbf520;
    FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar12 = (long)*(int *)(param_3 + 0x1c);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar13 = *(long *)(UVar8.unknown + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = (long)param_1 + lVar12;
  (*pcVar14)(lVar11,1,UVar8.unknown);
  lVar6 = (long)param_2 + lVar12;
  (*pcVar14)(lVar6,1,UVar8.unknown);
  if ((int)lVar11 == 0) {
    if ((int)lVar6 != 0) {
      (**(code **)(lVar13 + 8))((long)param_1 + lVar12,UVar8.unknown);
      goto LAB_1003147cc;
    }
    (**(code **)(lVar13 + 0x28))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar8.unknown);
  }
  else if ((int)lVar6 == 0) {
    (**(code **)(lVar13 + 0x20))((long)param_1 + lVar12,(long)param_2 + lVar12,UVar8.unknown);
    (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,UVar8.unknown);
  }
  else {
LAB_1003147cc:
    puVar7 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar9 = puVar2[1];
  uVar4 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar10 = puVar2[1];
    if (0xe < uVar10 >> 0x3c) {
      FUN_10031275c(puVar1);
      goto LAB_100314844;
    }
    uVar9 = *puVar1;
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    FUN_10003bf2c(uVar9);
  }
  else {
LAB_100314844:
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar10 = puVar2[1];
    if (0xe < uVar10 >> 0x3c) {
      FUN_10031275c(puVar1);
      goto LAB_100314894;
    }
    uVar9 = *puVar1;
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    FUN_10003bf2c(uVar9);
  }
  else {
LAB_100314894:
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  iVar3 = *(int *)(param_3 + 0x30);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar9 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
  *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(puVar2 + 2);
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar10 = puVar2[1];
    if (0xe < uVar10 >> 0x3c) {
      FUN_10031275c(puVar1);
      goto LAB_1003148fc;
    }
    uVar9 = *puVar1;
    *puVar1 = *puVar2;
    puVar1[1] = uVar10;
    FUN_10003bf2c(uVar9);
  }
  else {
LAB_1003148fc:
    uVar9 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar9;
  }
  lVar11 = (long)*(int *)(param_3 + 0x34);
  uVar9 = *(undefined8 *)((long)param_1 + lVar11);
  *(undefined8 *)((long)param_1 + lVar11) = *(undefined8 *)((long)param_2 + lVar11);
  _swift_bridgeObjectRelease(uVar9);
  iVar3 = *(int *)(param_3 + 0x3c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x38));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x38));
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *puVar1 = *puVar2;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar3);
  if ((ulong)puVar1[1] >> 0x3c < 0xf) {
    uVar10 = puVar2[1];
    if (uVar10 >> 0x3c < 0xf) {
      uVar9 = *puVar1;
      *puVar1 = *puVar2;
      puVar1[1] = uVar10;
      FUN_10003bf2c(uVar9);
      goto LAB_100314994;
    }
    FUN_10031275c(puVar1);
  }
  uVar9 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar9;
LAB_100314994:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x40));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x40));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Address: 0x1003149fc | FUN_1003149fc */

void FUN_1003149fc(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100314a08 | FUN_100314a08 */

ulong FUN_100314a08(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar4 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar4) {
      uVar4 = 0xffffffff;
    }
    uVar2 = (int)uVar4 - 1;
    if (0x7fffffff < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)(uVar2 + 1);
  }
  puVar3 = &DAT_100fbf520;
  FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
  lVar5 = *(long *)(puVar3 + -8);
  if ((int)param_2 == *(int *)(lVar5 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x18);
  }
  else {
    puVar3 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    lVar5 = *(long *)(puVar3 + -8);
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  uVar4 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x000100314ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x30))(uVar4,param_2,puVar3);
  return uVar4;
}



/* Address: 0x100314acc | FUN_100314acc */

void FUN_100314acc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100314ad8 | FUN_100314ad8 */

void FUN_100314ad8(long param_1,ulong param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 == 0x7ffffffe) {
    *(ulong *)(param_1 + 8) = param_2 & 0xffffffff;
    return;
  }
  puVar2 = &DAT_100fbf520;
  FUN_1000037f0(&DAT_100fbf520,&BYTE_100c40c00);
  lVar3 = *(long *)(puVar2 + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x18);
  }
  else {
    puVar2 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    lVar3 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_4 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x000100314b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}


