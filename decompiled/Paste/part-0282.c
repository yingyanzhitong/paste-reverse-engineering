/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10037c22c | FUN_10037c22c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_10037c22c(_StringGuts param_1,_StringGuts param_2,ulong param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  String SVar10;
  String SVar11;
  
  IVar2 = objc_stub::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
  IVar2 = objc_stub::frontmostApplication(IVar2);
  if ((IVar2 != 0) && (IVar2 = objc_stub::bundleIdentifier(IVar2), IVar2 != 0)) {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar3 = &DAT_100fc1bf0;
    FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
    puVar4 = puVar3;
    _swift_initStaticObject();
    SVar11 = Swift::String::lowercased(SVar10);
    pcVar5 = SVar11.str;
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    FUN_10012eef0(pcVar5,SVar11.bridgeObject,puVar4);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    FUN_10000caac(puVar4 + 0x20);
    if (((ulong)pcVar5 & 1) != 0) {
      _swift_initStaticObject(puVar3,&DAT_100fc19d8);
      FUN_10012eef0(param_1.unknown,param_2.unknown,puVar3);
      _swift_arrayDestroy(puVar3 + 0x20,2,PTR___type_metadata_for_Swift_String_100eac208);
      uVar9 = (uint)param_1.unknown;
      goto LAB_10037c464;
    }
  }
  puVar3 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar4 = puVar3;
  _swift_initStaticObject();
  puVar6 = puVar4;
  FUN_1002fc6c0();
  _swift_arrayDestroy(puVar4 + 0x20,2,PTR___type_metadata_for_Swift_String_100eac208);
  uVar7 = param_3;
  _swift_bridgeObjectRetain();
  FUN_10036be78();
  _swift_bridgeObjectRelease(param_3);
  uVar8 = uVar7;
  FUN_10037b278(uVar7,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(uVar7);
  if (((uVar8 & 1) == 0) ||
     (((param_1.unknown != (undefined *)0x662e63696c627570 ||
       (param_2.unknown != (undefined *)0xef6c72752d656c69)) &&
      (bVar1 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x70),
      !bVar1)))) {
    _swift_initStaticObject(puVar3,&DAT_100fc1e50);
    FUN_10012eef0(param_1.unknown,param_2.unknown,puVar3);
    uVar9 = (uint)param_1.unknown ^ 1;
  }
  else {
    uVar9 = 0;
  }
LAB_10037c464:
  return uVar9 & 1;
}



/* Address: 0x10037c47c | FUN_10037c47c */

void FUN_10037c47c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10037b034(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10037c494 | FUN_10037c494 */

void FUN_10037c494(void)

{
  FUN_10037b204();
  return;
}



/* Address: 0x10037c49c | thunk_FUN_1002fae2c */

void thunk_FUN_1002fae2c(void)

{
  FUN_1002fae2c();
  return;
}



/* Address: 0x10037c4a0 | thunk_FUN_1002faffc */

void thunk_FUN_1002faffc(void)

{
  FUN_1002faffc();
  return;
}



/* Address: 0x10037c4a4 | thunk_FUN_1002fad30 */

void thunk_FUN_1002fad30(void)

{
  FUN_1002fad30();
  return;
}



/* Address: 0x10037c4a8 | FUN_10037c4a8 */

void FUN_10037c4a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  Encoding EVar2;
  Encoding EVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  ulong uVar8;
  Encoding using;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  EVar2 = Encoding::_typeMetadataAccessor();
  lVar9 = *(long *)(EVar2.unknown + -8);
  EVar3 = EVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  using.unknown = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_78 = param_1;
  uStack_70 = param_2;
  Encoding::_get_utf8(EVar3);
  FUN_10030cce0();
  uVar7 = 0;
  EVar3.unknown = using.unknown;
  (extension_Foundation)::Swift::StringProtocol::_data(using,false);
  (**(code **)(lVar9 + 8))(using.unknown,EVar2.unknown);
  lVar9 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,&local_78,0x21,0);
  uVar8 = *(ulong *)(unaff_x20 + lVar9);
  _swift_bridgeObjectRetain(param_4);
  uVar4 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar9) = uVar8;
  uVar6 = uVar8;
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
    FUN_10037f834(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(unaff_x20 + lVar9) = uVar6;
  }
  uVar4 = *(ulong *)(uVar6 + 0x10);
  uVar8 = uVar6;
  if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
    FUN_10037f834(uVar8,uVar4 + 1,1,uVar6);
  }
  *(ulong *)(uVar8 + 0x10) = uVar4 + 1;
  lVar1 = uVar8 + uVar4 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(ulong *)(unaff_x20 + lVar9) = uVar8;
  _swift_endAccess(&local_78);
  lVar9 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,&local_78,0x21,0);
  if (uVar7 >> 0x3c < 0xf) {
    _swift_bridgeObjectRetain(param_4);
    FUN_10011da54(EVar3.unknown,uVar7);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar9);
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_88 = *(undefined8 *)(unaff_x20 + lVar9);
    FUN_100380ebc(EVar3.unknown,uVar7,param_3,param_4,uVar5);
    _swift_bridgeObjectRelease(param_4);
    *(undefined8 *)(unaff_x20 + lVar9) = local_88;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_100380b90(&local_88,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    FUN_10003bf18(local_88,uStack_80);
  }
  _swift_endAccess(&local_78);
  FUN_10003bf18(EVar3.unknown,uVar7);
  return;
}



/* Address: 0x10037c6d4 | FUN_10037c6d4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10037c6d4(undefined8 param_1,undefined8 param_2)

{
  UTType UVar1;
  UTType UVar2;
  UTType UVar3;
  long extraout_x8;
  ID unaff_x20;
  long lVar4;
  String SVar5;
  
  UVar1 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  _objc_allocWithZone();
  UVar2.unknown = (undefined *)objc_stub::init(unaff_x20);
  UVar3 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar2);
  SVar5 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  FUN_10037c4a8(param_1,param_2,SVar5.str,SVar5.bridgeObject);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  return UVar2.unknown;
}



/* Address: 0x10037c7bc | FUN_10037c7bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10037c7bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  UTType UVar1;
  UTType UVar2;
  UTType UVar3;
  URL UVar4;
  long extraout_x8;
  ID unaff_x20;
  long lVar5;
  code *pcVar6;
  String SVar7;
  String SVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_2;
  UVar1 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  UVar2 = UVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  SVar7 = Foundation::URL::get_absoluteString((URL)UVar2.unknown);
  _objc_allocWithZone();
  UVar2.unknown = (undefined *)objc_stub::init(unaff_x20);
  UVar3 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar2);
  SVar8 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  FUN_10037c4a8(SVar7.str,SVar7.bridgeObject,SVar8.str,SVar8.bridgeObject);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar7 = Foundation::URL::get_absoluteString((URL)UVar2.unknown);
  UVar3 = UniformTypeIdentifiers::UTType::get_url((UTType)SVar7.str);
  SVar8 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  (*pcVar6)(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  FUN_10037c4a8(SVar7.str,SVar7.bridgeObject,SVar8.str,SVar8.bridgeObject);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  if (param_3 == 0) {
    UVar4 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_1,UVar4.unknown);
  }
  else {
    FUN_10037c4a8(local_68,param_3,0x752e63696c627570,0xef656d616e2d6c72);
    _swift_bridgeObjectRelease(param_3);
    UVar4 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_1,UVar4.unknown);
  }
  return UVar2.unknown;
}



/* Address: 0x10037c9a8 | FUN_10037c9a8 */

undefined1  [16] FUN_10037c9a8(void)

{
  undefined8 *puVar1;
  Encoding data;
  long lVar2;
  byte bVar3;
  Encoding EVar4;
  UTType UVar5;
  UTType UVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  String SVar13;
  undefined1 auVar14 [16];
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  code *local_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  EVar4 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar4.unknown + -8) + 0x40));
  lVar9 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar9;
  UVar5 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar8 = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar6.unknown = &DAT_100fbf8d8;
  FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
  lVar9 = *(long *)(lVar10 + 0x48);
  bVar3 = *(byte *)(lVar10 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(UVar6.unknown + 0x18) = 8;
  *(undefined8 *)(UVar6.unknown + 0x10) = 4;
  puVar11 = UVar6.unknown + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  local_b0 = UVar6.unknown;
  UVar6 = UniformTypeIdentifiers::UTType::get_plainText(UVar6);
  UVar6 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar6);
  UVar6 = UniformTypeIdentifiers::UTType::get_text(UVar6);
  local_90 = lVar9;
  UniformTypeIdentifiers::UTType::get_url(UVar6);
  local_88 = *(code **)(lVar10 + 0x10);
  local_80 = _TtC9PasteCore14PasteboardItem::dataByType;
  lVar9 = 3;
  local_a8 = UVar5.unknown;
  local_a0 = lVar10;
  do {
    (*local_88)((long)puVar8 - extraout_x12,puVar11,UVar5.unknown);
    UVar6.unknown = puVar8;
    (**(code **)(lVar10 + 0x20))(puVar8,(long)puVar8 - extraout_x12,UVar5.unknown);
    SVar13 = UniformTypeIdentifiers::UTType::get_identifier(UVar6);
    lVar2 = local_80;
    pvVar7 = SVar13.bridgeObject;
    _swift_beginAccess(unaff_x20 + local_80,auStack_78,0x20,0);
    EVar4.unknown = *(undefined **)(unaff_x20 + lVar2);
    if (*(long *)(EVar4.unknown + 0x10) == 0) {
LAB_10037caf0:
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease(pvVar7);
      (**(code **)(lVar10 + 8))(puVar8,UVar5.unknown);
    }
    else {
      _swift_bridgeObjectRetain(EVar4.unknown);
      FUN_100071370();
      if (((ulong)SVar13.bridgeObject & 1) == 0) {
        _swift_bridgeObjectRelease(EVar4.unknown);
        goto LAB_10037caf0;
      }
      puVar1 = (undefined8 *)(*(long *)(EVar4.unknown + 0x38) + (long)SVar13.str * 0x10);
      data.unknown = (undefined *)*puVar1;
      lVar2 = puVar1[1];
      FUN_1001037b4(data.unknown,lVar2);
      _swift_endAccess(auStack_78);
      _swift_bridgeObjectRelease();
      Encoding::_get_utf8(EVar4);
      EVar4.unknown = data.unknown;
      lVar12 = lVar2;
      (extension_Foundation)::Swift::String::_init(data);
      _swift_bridgeObjectRelease(pvVar7);
      lVar10 = local_a0;
      FUN_10003bf2c(data.unknown,lVar2);
      UVar5.unknown = local_a8;
      (**(code **)(lVar10 + 8))(puVar8);
      if (lVar12 != 0) {
        _swift_release(local_b0);
        goto LAB_10037cc44;
      }
    }
    if (lVar9 == 0) {
      _swift_release(local_b0);
      EVar4.unknown = (undefined *)0x0;
      lVar12 = 0;
LAB_10037cc44:
      auVar14._8_8_ = lVar12;
      auVar14._0_8_ = EVar4.unknown;
      return auVar14;
    }
    puVar11 = puVar11 + local_90;
    lVar9 = lVar9 + -1;
  } while( true );
}



/* Address: 0x10037cc6c | FUN_10037cc6c */

void FUN_10037cc6c(undefined8 param_1)

{
  UTType UVar1;
  UTType UVar2;
  URL UVar3;
  void *pvVar4;
  long extraout_x8;
  long lVar5;
  String SVar6;
  
  UVar1 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar5 = *(long *)(UVar1.unknown + -8);
  UVar2 = UVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  UVar2 = UniformTypeIdentifiers::UTType::get_fileURL(UVar2);
  SVar6 = UniformTypeIdentifiers::UTType::get_identifier(UVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  pvVar4 = SVar6.bridgeObject;
  FUN_10037e4b8(SVar6.str);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  if (pvVar4 == (void *)0x0) {
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))(param_1,1,1,UVar3.unknown);
  }
  else {
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(pvVar4);
  }
  return;
}



/* Address: 0x10037cd68 | FUN_10037cd68 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037cd68(Data param_1,ulong param_2)

{
  ID IVar1;
  NSData *pNVar2;
  undefined *self;
  
  FUN_10037d5c4();
  if (param_2 >> 0x3c < 0xf) {
    self = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    FUN_1001037b4(param_1.unknown,param_2);
    pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_1);
    IVar1 = objc_stub::initWithData_((ID)self,pNVar2);
    FUN_10003bf18(param_1.unknown,param_2);
    FUN_10003bf18(param_1.unknown,param_2);
  }
  else {
    IVar1 = 0;
  }
  return IVar1;
}



/* Address: 0x10037ce0c | FUN_10037ce0c */

void FUN_10037ce0c(undefined8 param_1)

{
  undefined *puVar1;
  UTType UVar2;
  UTType UVar3;
  long lVar4;
  CharacterSet CVar5;
  CharacterSet CVar6;
  undefined *puVar7;
  URL UVar8;
  URL UVar9;
  void *pvVar10;
  CharacterSet CVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  code *pcVar19;
  CharacterSet withAllowedCharacters;
  long lVar20;
  String SVar21;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined *local_a0;
  long local_98;
  undefined *puStack_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *puStack_68;
  
  local_88 = param_1;
  puStack_90 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  CVar6.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  withAllowedCharacters.unknown = CVar6.unknown + -extraout_x12;
  puVar14 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  local_a0 = withAllowedCharacters.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = (long)(withAllowedCharacters.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) -
           extraout_x12_00;
  local_78 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_80 = *(long *)(local_78 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  puVar14 = (undefined *)(lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_a8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar14 - extraout_x12_01;
  UVar2 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar17 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  UVar3 = UniformTypeIdentifiers::UTType::get_url(UVar3);
  SVar21 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  (**(code **)(lVar17 + 8))(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  pvVar10 = SVar21.bridgeObject;
  FUN_10037e4b8(SVar21.str);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  if (pvVar10 != (void *)0x0) {
    Foundation::URL::_init();
    _swift_bridgeObjectRelease(pvVar10);
    puVar14 = local_78;
    lVar17 = local_80;
    lVar4 = lVar20;
    (**(code **)(local_80 + 0x30))(lVar20,1,local_78);
    if ((int)lVar4 != 1) {
      pcVar19 = *(code **)(lVar17 + 0x20);
      (*pcVar19)(lVar15,lVar20,puVar14);
      uVar18 = local_88;
      (*pcVar19)(local_88,lVar15,puVar14);
      uVar13 = 0;
      goto LAB_10037d1dc;
    }
    FUN_1002fc0a4(lVar20);
  }
  CVar11.unknown = (undefined *)0xe100000000000000;
  CVar5 = Foundation::CharacterSet::_init();
  Foundation::CharacterSet::get_urlQueryAllowed(CVar5);
  Foundation::CharacterSet::formUnion(CVar6,CVar11);
  puVar1 = puStack_90;
  pcVar19 = *(code **)(local_98 + 8);
  CVar5.unknown = CVar6.unknown;
  CVar11.unknown = puStack_90;
  (*pcVar19)();
  Foundation::CharacterSet::get_urlFragmentAllowed(CVar5);
  Foundation::CharacterSet::formUnion(CVar6,CVar11);
  puVar14 = puVar1;
  (*pcVar19)();
  FUN_10037c9a8();
  if (puVar14 != (undefined *)0x0) {
    local_70 = CVar6.unknown;
    puStack_68 = puVar14;
    FUN_10030cce0();
    puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
    _swift_bridgeObjectRelease(puVar14);
    UVar9.unknown = local_a0;
    if (puVar12 != (undefined *)0x0) {
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(puVar12);
      puVar14 = local_78;
      lVar17 = local_80;
      puVar7 = UVar9.unknown;
      (**(code **)(local_80 + 0x30))(UVar9.unknown,1,local_78);
      uVar18 = local_88;
      puVar12 = local_a8;
      if ((int)puVar7 == 1) {
        (*pcVar19)(withAllowedCharacters.unknown,puVar1);
        FUN_1002fc0a4(UVar9.unknown);
      }
      else {
        pcVar16 = *(code **)(lVar17 + 0x20);
        UVar8.unknown = local_a8;
        (*pcVar16)(local_a8,UVar9.unknown,puVar14);
        Foundation::URL::_get_scheme(UVar8);
        if (UVar9.unknown == (undefined *)0x0) {
          (**(code **)(lVar17 + 8))(puVar12,puVar14);
          (*pcVar19)(withAllowedCharacters.unknown,puVar1);
        }
        else {
          puVar7 = UVar9.unknown;
          _swift_bridgeObjectRelease();
          Foundation::URL::_get_host(UVar9);
          if (puVar7 != (undefined *)0x0) {
            _swift_bridgeObjectRelease(puVar7);
            (*pcVar19)(withAllowedCharacters.unknown,puVar1);
            (*pcVar16)(uVar18,puVar12,puVar14);
            uVar13 = 0;
            goto LAB_10037d1dc;
          }
          (*pcVar19)(withAllowedCharacters.unknown,puVar1);
          (**(code **)(lVar17 + 8))(puVar12,puVar14);
        }
      }
      uVar13 = 1;
      goto LAB_10037d1dc;
    }
  }
  (*pcVar19)(withAllowedCharacters.unknown,puVar1);
  uVar13 = 1;
  uVar18 = local_88;
  puVar14 = local_78;
  lVar17 = local_80;
LAB_10037d1dc:
  (**(code **)(lVar17 + 0x38))(uVar18,uVar13,1,puVar14);
  return;
}



/* Address: 0x10037d210 | FUN_10037d210 */

undefined1  [16] FUN_10037d210(void)

{
  undefined8 *puVar1;
  Encoding data;
  undefined8 uVar2;
  Encoding EVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auStack_48 [24];
  
  EVar3 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar3.unknown + -8) + 0x40));
  lVar4 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_48,0x20,0);
  EVar3.unknown = *(undefined **)(unaff_x20 + lVar4);
  if (*(long *)(EVar3.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(EVar3.unknown);
    lVar4 = 0x752e63696c627570;
    uVar5 = 0;
    FUN_100071370();
    if ((uVar5 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(EVar3.unknown + 0x38) + lVar4 * 0x10);
      data.unknown = (undefined *)*puVar1;
      uVar2 = puVar1[1];
      FUN_1001037b4(data.unknown,uVar2);
      _swift_endAccess(auStack_48);
      _swift_bridgeObjectRelease();
      Encoding::_get_utf8(EVar3);
      EVar3.unknown = data.unknown;
      uVar6 = uVar2;
      (extension_Foundation)::Swift::String::_init(data);
      FUN_10003bf2c(data.unknown,uVar2);
      goto LAB_10037d328;
    }
    _swift_bridgeObjectRelease(EVar3.unknown);
  }
  _swift_endAccess(auStack_48);
  EVar3.unknown = (undefined *)0x0;
  uVar6 = 0;
LAB_10037d328:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = EVar3.unknown;
  return auVar7;
}



/* Address: 0x10037d33c | FUN_10037d33c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037d33c(void)

{
  code *pcVar1;
  UTType UVar2;
  UTType UVar3;
  UTType UVar4;
  undefined *puVar5;
  ID self;
  ID IVar6;
  undefined *puVar7;
  void *aBlock;
  undefined *puVar8;
  NSString *pNVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  UVar2.unknown = &DAT_100fbf8d8;
  FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
  UVar3 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  uVar11 = (ulong)*(byte *)(*(long *)(UVar3.unknown + -8) + 0x50);
  uVar12 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
  _swift_allocObject(UVar2.unknown,uVar12 + *(long *)(*(long *)(UVar3.unknown + -8) + 0x48) * 3,
                     uVar11 | 7);
  *(undefined8 *)(UVar2.unknown + 0x18) = 6;
  *(undefined8 *)(UVar2.unknown + 0x10) = 3;
  UVar4 = UniformTypeIdentifiers::UTType::get_flatRTFD(UVar2);
  UVar4 = UniformTypeIdentifiers::UTType::get_rtfd(UVar4);
  UniformTypeIdentifiers::UTType::get_rtf(UVar4);
  UVar4.unknown = UVar2.unknown;
  FUN_10037ebdc();
  _swift_setDeallocating(UVar2.unknown);
  _swift_arrayDestroy(UVar2.unknown + uVar12,3,UVar3.unknown);
  lVar10 = 0x20;
  _swift_deallocClassInstance(UVar2.unknown,0x20,7);
  if (UVar4.unknown == (undefined *)0x0) {
    FUN_10037c9a8();
    if (lVar10 == 0) {
      self = 0;
    }
    else {
      puVar5 = &_OBJC_CLASS___NSAttributedString;
      _objc_allocWithZone();
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar10);
      self = objc_stub::initWithString_((ID)puVar5,pNVar9);
    }
  }
  else {
    puVar5 = &_OBJC_CLASS___NSMutableAttributedString;
    _objc_allocWithZone();
    self = objc_stub::initWithAttributedString_((ID)puVar5,UVar4.unknown);
    IVar6 = objc_stub::length((ID)UVar4.unknown);
    puVar5 = &DAT_100ecd6c0;
    _swift_allocObject(&DAT_100ecd6c0,0x18,7);
    *(ID *)(puVar5 + 0x10) = self;
    puVar7 = &DAT_100ecd6e8;
    _swift_allocObject(&DAT_100ecd6e8,0x20,7);
    *(code **)(puVar7 + 0x10) = FUN_100309b24;
    *(undefined **)(puVar7 + 0x18) = puVar5;
    local_60 = FUN_100215f00;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_100309738;
    puStack_68 = &DAT_100ecd700;
    local_58 = puVar7;
    aBlock = __Block_copy(&local_80);
    puVar8 = local_58;
    _swift_retain(puVar7);
    _swift_release(puVar8);
    objc_stub::enumerateAttributesInRange_options_usingBlock_(self,0,IVar6,0,aBlock);
    __Block_release(aBlock);
    puVar8 = puVar7;
    _swift_isEscapingClosureAtFileLocation(puVar7,"",0x9e,0x25,0x45,1);
    _swift_release(puVar5);
    _swift_release(puVar7);
    if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10037d54c);
      (*pcVar1)();
    }
  }
  return self;
}



/* Address: 0x10037d5c4 | FUN_10037d5c4 */

undefined1  [16] FUN_10037d5c4(void)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  UTType UVar4;
  UTType UVar5;
  void *pvVar6;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long lVar13;
  String SVar14;
  undefined1 auVar15 [16];
  undefined auStack_a0 [8];
  undefined *local_98;
  long local_90;
  code *local_88;
  undefined1 auStack_78 [24];
  
  UVar4 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar8 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar5.unknown = &DAT_100fbf8d8;
  FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
  lVar9 = *(long *)(lVar13 + 0x48);
  bVar2 = *(byte *)(lVar13 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(UVar5.unknown + 0x18) = 10;
  *(undefined8 *)(UVar5.unknown + 0x10) = 5;
  puVar12 = UVar5.unknown + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
  local_98 = UVar5.unknown;
  UVar5 = UniformTypeIdentifiers::UTType::get_png(UVar5);
  UVar5 = UniformTypeIdentifiers::UTType::get_jpeg(UVar5);
  UVar5 = UniformTypeIdentifiers::UTType::get_heic(UVar5);
  local_90 = lVar9;
  UVar5 = UniformTypeIdentifiers::UTType::get_tiff(UVar5);
  UniformTypeIdentifiers::UTType::get_icns(UVar5);
  lVar3 = _TtC9PasteCore14PasteboardItem::dataByType;
  local_88 = *(code **)(lVar13 + 0x10);
  lVar9 = 5;
  do {
    (*local_88)((long)puVar8 - extraout_x12,puVar12,UVar4.unknown);
    UVar5.unknown = puVar8;
    (**(code **)(lVar13 + 0x20))(puVar8,(long)puVar8 - extraout_x12,UVar4.unknown);
    SVar14 = UniformTypeIdentifiers::UTType::get_identifier(UVar5);
    pvVar6 = SVar14.bridgeObject;
    _swift_beginAccess(unaff_x20 + lVar3,auStack_78,0x20,0);
    lVar7 = *(long *)(unaff_x20 + lVar3);
    if (*(long *)(lVar7 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar7);
      FUN_100071370();
      if (((ulong)SVar14.bridgeObject & 1) != 0) {
        puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + (long)SVar14.str * 0x10);
        uVar11 = *puVar1;
        uVar10 = puVar1[1];
        FUN_1001037b4(uVar11,uVar10);
        _swift_endAccess(auStack_78);
        _swift_bridgeObjectRelease(pvVar6);
        _swift_release(local_98);
        _swift_bridgeObjectRelease(lVar7);
        (**(code **)(lVar13 + 8))(puVar8,UVar4.unknown);
        goto LAB_10037d7e8;
      }
      _swift_bridgeObjectRelease(lVar7);
    }
    _swift_endAccess(auStack_78);
    _swift_bridgeObjectRelease(pvVar6);
    (**(code **)(lVar13 + 8))(puVar8,UVar4.unknown);
    puVar12 = puVar12 + local_90;
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  _swift_release(local_98);
  uVar11 = 0;
  uVar10 = 0xf000000000000000;
LAB_10037d7e8:
  auVar15._8_8_ = uVar10;
  auVar15._0_8_ = uVar11;
  return auVar15;
}



/* Address: 0x10037d810 | FUN_10037d810 */

undefined1  [16] FUN_10037d810(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  lVar3 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_48,0x20,0);
  lVar3 = *(long *)(unaff_x20 + lVar3);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uVar2 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    _swift_bridgeObjectRetain(lVar3);
    FUN_100071370();
    if ((param_2 & 1) == 0) {
      uVar2 = 0;
      uVar4 = 0xf000000000000000;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
      uVar2 = *puVar1;
      uVar4 = puVar1[1];
      FUN_1001037b4(uVar2,uVar4);
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  _swift_endAccess(auStack_48);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Address: 0x10037d8c8 | FUN_10037d8c8 */

void FUN_10037d8c8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x20;
  ulong uVar6;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_78,0x21,0);
  uVar6 = *(ulong *)(unaff_x20 + lVar2);
  _swift_bridgeObjectRetain(param_4);
  uVar3 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + lVar2) = uVar6;
  uVar5 = uVar6;
  if ((uVar3 & 1) == 0) {
    uVar5 = 0;
    FUN_10037f834(0,*(long *)(uVar6 + 0x10) + 1,1,uVar6);
    *(ulong *)(unaff_x20 + lVar2) = uVar5;
  }
  uVar3 = *(ulong *)(uVar5 + 0x10);
  uVar6 = uVar5;
  if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar3) {
    uVar6 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
    FUN_10037f834(uVar6,uVar3 + 1,1,uVar5);
  }
  *(ulong *)(uVar6 + 0x10) = uVar3 + 1;
  lVar1 = uVar6 + uVar3 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(ulong *)(unaff_x20 + lVar2) = uVar6;
  _swift_endAccess(auStack_78);
  lVar2 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x21,0);
  if (param_2 >> 0x3c < 0xf) {
    _swift_bridgeObjectRetain(param_4);
    FUN_10011da54(param_1,param_2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_88 = *(undefined8 *)(unaff_x20 + lVar2);
    FUN_100380ebc(param_1,param_2,param_3,param_4,uVar4);
    _swift_bridgeObjectRelease(param_4);
    *(undefined8 *)(unaff_x20 + lVar2) = local_88;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    FUN_100380b90(&local_88,param_3,param_4);
    _swift_bridgeObjectRelease(param_4);
    FUN_10003bf18(local_88,uStack_80);
  }
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x10037da6c | FUN_10037da6c */

void FUN_10037da6c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_38,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x10037dab0 | FUN_10037dab0 */

void FUN_10037dab0(undefined *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  bool bVar9;
  undefined8 uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_78,0x21,0);
  uVar11 = *(ulong *)(unaff_x20 + lVar7);
  uVar14 = *(ulong *)(uVar11 + 0x10);
  if (uVar14 == 0) {
    uVar12 = 0;
    uVar13 = 0;
  }
  else {
    lVar15 = 0;
    uVar12 = 0;
    do {
      _Var3.unknown = *(undefined **)(uVar11 + lVar15 + 0x20);
      _Var5.unknown = *(undefined **)(uVar11 + lVar15 + 0x28);
      if ((_Var3.unknown == param_1 && _Var5.unknown == param_2) ||
         (bVar9 = Swift::_stringCompareWithSmolCheck
                            (_Var3,_Var5,(_StringComparisonResult)(__int8)param_1), bVar9)) {
        uVar13 = uVar12 + 1;
        uVar14 = *(ulong *)(uVar11 + 0x10);
        if (uVar14 - 1 != uVar12) {
          do {
            if (uVar14 <= uVar13) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10037dcf8);
              (*pcVar8)();
            }
            _Var3.unknown = *(undefined **)(uVar11 + lVar15 + 0x30);
            _Var5.unknown = *(undefined **)(uVar11 + lVar15 + 0x38);
            if ((_Var3.unknown != param_1 || _Var5.unknown != param_2) &&
               (bVar9 = Swift::_stringCompareWithSmolCheck
                                  (_Var3,_Var5,(_StringComparisonResult)(__int8)param_1), !bVar9)) {
              if (uVar13 != uVar12) {
                if (uVar14 <= uVar12) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10037dcfc);
                  (*pcVar8)();
                }
                puVar1 = (undefined8 *)(uVar11 + 0x20 + uVar12 * 0x10);
                uVar4 = *puVar1;
                uVar6 = puVar1[1];
                _swift_bridgeObjectRetain(uVar6);
                _swift_bridgeObjectRetain(_Var5.unknown);
                uVar14 = uVar11;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(unaff_x20 + lVar7) = uVar11;
                if ((uVar14 & 1) == 0) {
                  FUN_10038139c();
                  *(ulong *)(unaff_x20 + lVar7) = uVar11;
                }
                lVar2 = uVar11 + uVar12 * 0x10;
                uVar10 = *(undefined8 *)(lVar2 + 0x28);
                *(undefined **)(lVar2 + 0x20) = _Var3.unknown;
                *(undefined **)(lVar2 + 0x28) = _Var5.unknown;
                _swift_bridgeObjectRelease(uVar10);
                *(ulong *)(unaff_x20 + lVar7) = uVar11;
                if (*(ulong *)(uVar11 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10037dd00);
                  (*pcVar8)();
                }
                lVar2 = uVar11 + lVar15;
                uVar10 = *(undefined8 *)(lVar2 + 0x38);
                *(undefined8 *)(lVar2 + 0x30) = uVar4;
                *(undefined8 *)(lVar2 + 0x38) = uVar6;
                _swift_bridgeObjectRelease(uVar10);
                *(ulong *)(unaff_x20 + lVar7) = uVar11;
              }
              uVar12 = uVar12 + 1;
            }
            uVar13 = uVar13 + 1;
            uVar14 = *(ulong *)(uVar11 + 0x10);
            lVar15 = lVar15 + 0x10;
          } while (uVar13 != uVar14);
        }
        goto LAB_10037db68;
      }
      uVar12 = uVar12 + 1;
      lVar15 = lVar15 + 0x10;
    } while (uVar14 != uVar12);
    uVar13 = *(ulong *)(uVar11 + 0x10);
    uVar12 = uVar14;
LAB_10037db68:
    if ((long)uVar13 < (long)uVar12) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10037db78);
      (*pcVar8)();
    }
  }
  FUN_1003813b0(uVar12,uVar13);
  _swift_endAccess(auStack_78);
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  FUN_100380b90(&local_88,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  FUN_10003bf18(local_88,uStack_80);
  _swift_endAccess(auStack_78);
  return;
}



/* Address: 0x10037dd00 | FUN_10037dd00 */

void FUN_10037dd00(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtC9PasteCore14PasteboardItem::types) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar1 = _TtC9PasteCore14PasteboardItem::dataByType;
  FUN_1003c9c10();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  return;
}



/* Address: 0x10037dd6c | _TtC9PasteCore14PasteboardItem::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore14PasteboardItem::init(ID param_1,SEL param_2)

{
  long lVar1;
  class_t *pcVar2;
  undefined *puVar3;
  ID IVar4;
  objc_super local_40;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(param_1 + types) = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar1 = dataByType;
  FUN_1003c9c10();
  *(undefined **)(param_1 + lVar1) = puVar3;
  local_40.receiver = param_1;
  local_40.super_class = pcVar2;
  IVar4 = _objc_msgSendSuper2(&local_40,"init");
  return IVar4;
}



/* Address: 0x10037ddd8 | FUN_10037ddd8 */

undefined1  [16] FUN_10037ddd8(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x7954794261746164;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x7365707974;
  }
  puVar2 = (undefined1 *)0xea00000000006570;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10037de14 | FUN_10037de14 */

void FUN_10037de14(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x7365707974 || param_3 != &DAT_e500000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7365707974,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x7954794261746164) && (param_3 == (undefined1 *)0xea00000000006570)) {
        _swift_bridgeObjectRelease(0xea00000000006570);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x7954794261746164,(_StringGuts)0xea00000000006570,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10037de70;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10037de70:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10037def0 | FUN_10037def0 */

String FUN_10037def0(void)

{
  String SVar1;
  
  FUN_10038146c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10037df18 | FUN_10037df18 */

String FUN_10037df18(void)

{
  String SVar1;
  
  FUN_10038146c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10037df40 | _TtC9PasteCore14PasteboardItem::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore14PasteboardItem::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + types));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + dataByType));
  return;
}



/* Address: 0x10037df78 | FUN_10037df78 */

void FUN_10037df78(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_90 [7];
  undefined1 local_89;
  ulong local_88;
  undefined8 local_80 [3];
  undefined1 auStack_68 [24];
  
  puVar2 = &DAT_100fc1a48;
  FUN_1000037f0(&DAT_100fc1a48,&DAT_100c43a10);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10038146c();
  Swift::Encoder::_container();
  lVar1 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_68,0,0);
  local_80[0] = *(undefined8 *)(unaff_x20 + lVar1);
  local_88 = local_88 & 0xffffffffffffff00;
  puVar3 = &DAT_100fbedd8;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  puVar4 = &DAT_100fc1a60;
  FUN_100316c78(&DAT_100fc1a60,
                PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  Swift::KeyedEncodingContainer::_encode(local_80,&local_88,puVar2,puVar3,puVar4);
  lVar1 = _TtC9PasteCore14PasteboardItem::dataByType;
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,local_80,0,0);
    local_88 = *(ulong *)(unaff_x20 + lVar1);
    local_89 = 1;
    puVar3 = &DAT_100fc1a68;
    FUN_1000037f0(&DAT_100fc1a68,&DAT_100c43a18);
    puVar4 = &DAT_100fc1a70;
    FUN_1003814ac(&DAT_100fc1a70,FUN_100316c38,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Encodable_in_Swift_100eac210
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Encodable_100eabe68);
    Swift::KeyedEncodingContainer::_encode(&local_88,&local_89,puVar2,puVar3,puVar4);
  }
  (**(code **)(lVar5 + 8))(auStack_90 + -extraout_x8,puVar2);
  return;
}



/* Address: 0x10037e158 | FUN_10037e158 */

void FUN_10037e158(undefined8 param_1)

{
  _objc_allocWithZone();
  FUN_10037e198(param_1);
  return;
}



/* Address: 0x10037e198 | FUN_10037e198 */

/* WARNING: Removing unreachable block (ram,0x00010037e384) */

ID FUN_10037e198(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ID IVar7;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar8;
  undefined *local_c0;
  long local_b8;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined1 local_78 [24];
  undefined8 local_58;
  
  _swift_getObjectType();
  puVar4 = &DAT_100fc1a80;
  FUN_1000037f0(&DAT_100fc1a80,&DAT_100c43a20);
  lVar8 = *(long *)(puVar4 + -8);
  local_c0 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC9PasteCore14PasteboardItem::types;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined **)(unaff_x20 + _TtC9PasteCore14PasteboardItem::types) =
       PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar2 = _TtC9PasteCore14PasteboardItem::dataByType;
  FUN_1003c9c10();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  IVar7 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10038146c();
  local_b8 = (long)&local_c0 - extraout_x8;
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar4 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    local_78[0] = 0;
    puVar5 = &DAT_100fbf638;
    FUN_100316c78(&DAT_100fbf638,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    puVar3 = local_c0;
    Swift::KeyedDecodingContainer::_decode(&local_90,puVar4,local_78,local_c0,puVar4,puVar5);
    _swift_beginAccess(unaff_x20 + lVar1,local_78,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
    *(ulong *)(unaff_x20 + lVar1) = CONCAT71(uStack_8f,local_90);
    _swift_bridgeObjectRelease(uVar6);
    puVar4 = &DAT_100fc1a68;
    FUN_1000037f0(&DAT_100fc1a68,&DAT_100c43a18);
    local_90 = 1;
    puVar5 = &DAT_100fc1a90;
    FUN_1003814ac(&DAT_100fc1a90,FUN_100316bf8,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar4,&local_90,puVar3,puVar4,puVar5);
    _swift_beginAccess(unaff_x20 + lVar2,&local_90,1,0);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = local_58;
    _swift_bridgeObjectRelease(uVar6);
    IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"init");
    (**(code **)(lVar8 + 8))(local_b8,puVar3);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar1));
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar2));
    _swift_deallocPartialClassInstance();
  }
  return IVar7;
}



/* Address: 0x10037e44c | FUN_10037e44c */

void FUN_10037e44c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  _objc_allocWithZone();
  FUN_10037e198();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10037e498 | FUN_10037e498 */

void FUN_10037e498(void)

{
  FUN_10037df78();
  return;
}



/* Address: 0x10037e4b8 | FUN_10037e4b8 */

undefined1  [16] FUN_10037e4b8(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  Encoding data;
  undefined8 uVar2;
  long lVar3;
  Encoding EVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auVar6 [16];
  undefined1 auStack_58 [24];
  
  EVar4 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar4.unknown + -8) + 0x40));
  lVar3 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_58,0x20,0);
  EVar4.unknown = *(undefined **)(unaff_x20 + lVar3);
  if (*(long *)(EVar4.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(EVar4.unknown);
    FUN_100071370();
    if ((param_2 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(EVar4.unknown + 0x38) + param_1 * 0x10);
      data.unknown = (undefined *)*puVar1;
      uVar2 = puVar1[1];
      FUN_1001037b4(data.unknown,uVar2);
      _swift_endAccess(auStack_58);
      _swift_bridgeObjectRelease();
      Encoding::_get_utf8(EVar4);
      EVar4.unknown = data.unknown;
      uVar5 = uVar2;
      (extension_Foundation)::Swift::String::_init(data);
      FUN_10003bf2c(data.unknown,uVar2);
      goto LAB_10037e5c8;
    }
    _swift_bridgeObjectRelease(EVar4.unknown);
  }
  _swift_endAccess(auStack_58);
  EVar4.unknown = (undefined *)0x0;
  uVar5 = 0;
LAB_10037e5c8:
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = EVar4.unknown;
  return auVar6;
}



/* Address: 0x10037e5e0 | FUN_10037e5e0 */

NSData * FUN_10037e5e0(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  Data DVar2;
  undefined8 uVar3;
  NSData *pNVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  lVar5 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_48,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    FUN_100071370();
    if ((param_2 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_1 * 0x10);
      DVar2.unknown = (undefined *)*puVar1;
      uVar3 = puVar1[1];
      FUN_1001037b4(DVar2.unknown,uVar3);
      _swift_endAccess(auStack_48);
      _swift_bridgeObjectRelease(lVar5);
      pNVar4 = Foundation::Data::_bridgeToObjectiveC(DVar2);
      FUN_10003bf2c(DVar2.unknown,uVar3);
      return pNVar4;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_endAccess(auStack_48);
  return (NSData *)0x0;
}



/* Address: 0x10037e6b0 | FUN_10037e6b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10037e6b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  URL UVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ID *pIVar5;
  undefined8 uVar6;
  long lVar7;
  URL UVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  String SVar16;
  ID local_b0;
  undefined8 uStack_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar12 = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar12 - extraout_x12;
  FUN_10000cbfc(param_1,auStack_80);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  puVar3 = &local_90;
  _swift_dynamicCast(puVar3,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Foundation_Data_100ea7300,0);
  uVar6 = local_90;
  lVar7 = _TtC9PasteCore14PasteboardItem::types;
  if ((int)puVar3 == 0) {
    pIVar5 = &local_b0;
    _swift_dynamicCast(pIVar5,auStack_80,puVar1 + 8,PTR___type_metadata_for_Swift_String_100eac208,0
                      );
    if ((int)pIVar5 == 0) {
      uVar6 = 0;
      FUN_10000ec2c(0,&DAT_100fc1aa0,&PTR__OBJC_CLASS___NSAttributedString_100f8d688);
      pIVar5 = &local_b0;
      _swift_dynamicCast(pIVar5,auStack_80,puVar1 + 8,uVar6,0);
      if ((int)pIVar5 == 0) {
        lVar7 = lVar13;
        _swift_dynamicCast(lVar13,auStack_80,puVar1 + 8,UVar2.unknown,0);
        if ((int)lVar7 == 0) {
          uVar6 = 0;
          FUN_10000ec2c(0,&DAT_100fbe960,&PTR__OBJC_CLASS___NSImage_100f8d6b8);
          puVar3 = &local_98;
          puVar11 = auStack_80;
          _swift_dynamicCast(puVar3,puVar11,puVar1 + 8,uVar6,0);
          if ((int)puVar3 != 0) {
            FUN_1003c89c8();
            lVar7 = _TtC9PasteCore14PasteboardItem::types;
            _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,&local_b0,0x21,0);
            uVar14 = *(ulong *)(unaff_x20 + lVar7);
            _swift_bridgeObjectRetain(param_3);
            uVar9 = uVar14;
            _swift_isUniquelyReferenced_nonNull_native();
            *(ulong *)(unaff_x20 + lVar7) = uVar14;
            uVar10 = uVar14;
            if ((uVar9 & 1) == 0) {
              uVar10 = 0;
              FUN_10037f834(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
              *(ulong *)(unaff_x20 + lVar7) = uVar10;
            }
            uVar9 = *(ulong *)(uVar10 + 0x10);
            uVar14 = uVar10;
            if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
              uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
              FUN_10037f834(uVar14,uVar9 + 1,1,uVar10);
            }
            *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
            lVar13 = uVar14 + uVar9 * 0x10;
            *(undefined8 *)(lVar13 + 0x20) = param_2;
            *(undefined8 *)(lVar13 + 0x28) = param_3;
            *(ulong *)(unaff_x20 + lVar7) = uVar14;
            _swift_endAccess(&local_b0);
            lVar7 = _TtC9PasteCore14PasteboardItem::dataByType;
            _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,&local_b0,0x21
                               ,0);
            if ((ulong)puVar11 >> 0x3c < 0xf) {
              _swift_bridgeObjectRetain(param_3);
              FUN_10011da54(puVar3,puVar11);
              uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
              _swift_isUniquelyReferenced_nonNull_native(uVar6);
              local_90 = *(undefined8 *)(unaff_x20 + lVar7);
              FUN_100380ebc(puVar3,puVar11,param_2,param_3,uVar6);
              _swift_bridgeObjectRelease(param_3);
              *(undefined8 *)(unaff_x20 + lVar7) = local_90;
            }
            else {
              _swift_bridgeObjectRetain(param_3);
              FUN_100380b90(&local_90,param_2,param_3);
              _swift_bridgeObjectRelease(param_3);
              FUN_10003bf18(local_90,uStack_88);
            }
            _swift_endAccess(&local_b0);
            FUN_10003bf18(puVar3,puVar11);
          }
        }
        else {
          UVar8.unknown = puVar12;
          (**(code **)(lVar15 + 0x20))(puVar12,lVar13,UVar2.unknown);
          SVar16 = Foundation::URL::get_absoluteString(UVar8);
          FUN_10037c4a8(SVar16.str,SVar16.bridgeObject,param_2,param_3);
          _swift_bridgeObjectRelease(SVar16.bridgeObject);
          (**(code **)(lVar15 + 8))(puVar12,UVar2.unknown);
        }
      }
      else {
        objc_stub::string(local_b0);
        SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        FUN_10037c4a8(SVar16.str,SVar16.bridgeObject,param_2,param_3);
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
      }
    }
    else {
      FUN_10037c4a8(local_b0,uStack_a8,param_2,param_3);
      _swift_bridgeObjectRelease(uStack_a8);
    }
  }
  else {
    _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,&local_b0,0x21,0);
    uVar14 = *(ulong *)(unaff_x20 + lVar7);
    FUN_1001037b4(uVar6,uStack_88);
    _swift_bridgeObjectRetain(param_3);
    uVar9 = uVar14;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + lVar7) = uVar14;
    uVar10 = uVar14;
    if ((uVar9 & 1) == 0) {
      uVar10 = 0;
      FUN_10037f834(0,*(long *)(uVar14 + 0x10) + 1,1,uVar14);
      *(ulong *)(unaff_x20 + lVar7) = uVar10;
    }
    uVar9 = *(ulong *)(uVar10 + 0x10);
    uVar14 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
      uVar14 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_10037f834(uVar14,uVar9 + 1,1,uVar10);
    }
    *(ulong *)(uVar14 + 0x10) = uVar9 + 1;
    lVar13 = uVar14 + uVar9 * 0x10;
    *(undefined8 *)(lVar13 + 0x20) = param_2;
    *(undefined8 *)(lVar13 + 0x28) = param_3;
    *(ulong *)(unaff_x20 + lVar7) = uVar14;
    _swift_endAccess(&local_b0);
    lVar7 = _TtC9PasteCore14PasteboardItem::dataByType;
    _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,&local_b0,0x21,0);
    FUN_1001037b4(uVar6,uStack_88);
    _swift_bridgeObjectRetain(param_3);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar7);
    _swift_isUniquelyReferenced_nonNull_native(uVar4);
    local_98 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined8 *)(unaff_x20 + lVar7) = 0x8000000000000000;
    FUN_100380ebc(uVar6,uStack_88,param_2,param_3,uVar4);
    _swift_bridgeObjectRelease(param_3);
    *(undefined8 *)(unaff_x20 + lVar7) = local_98;
    _swift_endAccess(&local_b0);
    FUN_10003bf2c(uVar6,uStack_88);
    FUN_10003bf2c(uVar6,uStack_88);
  }
  FUN_100004594(auStack_80);
  return;
}



/* Address: 0x10037ebdc | FUN_10037ebdc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10037ebdc(long param_1,long param_2)

{
  undefined8 *puVar1;
  Data DVar2;
  undefined8 uVar3;
  UTType UVar4;
  UTType UVar5;
  undefined *puVar6;
  NSData *pNVar7;
  ID IVar8;
  undefined *self;
  NSDictionary *pNVar9;
  undefined8 uVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x12;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  code *local_98;
  long local_90;
  undefined8 local_80 [3];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar4 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar6 = (undefined *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar6 - extraout_x12;
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    param_1 = param_1 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
    local_a0 = *(long *)(lVar13 + 0x48);
    local_98 = *(code **)(lVar13 + 0x10);
    local_90 = _TtC9PasteCore14PasteboardItem::dataByType;
    local_c0 = lVar15;
    local_b8 = param_2;
    local_b0 = UVar4.unknown;
    local_a8 = puVar6;
    do {
      (*local_98)(lVar15,param_1,UVar4.unknown);
      UVar5.unknown = puVar6;
      (**(code **)(lVar13 + 0x20))(puVar6,lVar15,UVar4.unknown);
      SVar16 = UniformTypeIdentifiers::UTType::get_identifier(UVar5);
      lVar12 = local_90;
      pvVar11 = SVar16.bridgeObject;
      _swift_beginAccess(param_2 + local_90,local_80,0x20,0);
      lVar12 = *(long *)(param_2 + lVar12);
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_10037ecac:
        _swift_endAccess(local_80);
        _swift_bridgeObjectRelease(pvVar11);
      }
      else {
        _swift_bridgeObjectRetain(lVar12);
        FUN_100071370();
        if (((ulong)SVar16.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(lVar12);
          goto LAB_10037ecac;
        }
        puVar1 = (undefined8 *)(*(long *)(lVar12 + 0x38) + (long)SVar16.str * 0x10);
        DVar2.unknown = (undefined *)*puVar1;
        uVar3 = puVar1[1];
        FUN_1001037b4(DVar2.unknown,uVar3);
        _swift_endAccess(local_80);
        _swift_bridgeObjectRelease(pvVar11);
        _swift_bridgeObjectRelease(lVar12);
        puVar6 = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        FUN_1001037b4(DVar2.unknown,uVar3);
        pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar2);
        IVar8 = objc_stub::FUN_100c04980((ID)puVar6,pNVar7,0);
        FUN_10003bf2c(DVar2.unknown,uVar3);
        if (IVar8 != 0) {
LAB_10037ef34:
          (**(code **)(lVar13 + 8))(local_a8,UVar4.unknown);
          FUN_10003bf2c(DVar2.unknown,uVar3);
          goto LAB_10037ef6c;
        }
        puVar6 = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        FUN_1001037b4(DVar2.unknown,uVar3);
        pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar2);
        IVar8 = objc_stub::FUN_100c04960((ID)puVar6,pNVar7,0);
        FUN_10003bf2c(DVar2.unknown,uVar3);
        if (IVar8 != 0) goto LAB_10037ef34;
        puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1003c9070(PTR___swiftEmptyArrayStorage_100eae0d8);
        self = &_OBJC_CLASS___NSAttributedString;
        _objc_allocWithZone();
        pNVar7 = Foundation::Data::_bridgeToObjectiveC(DVar2);
        FUN_1002fc1d8(0);
        FUN_100003a00(&DAT_100fc1bd0,FUN_1002fc1d8,&TargetProtocolConformanceDescriptor_100c403f0);
        pNVar9 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar6);
        local_80[0] = 0;
        IVar8 = objc_stub::FUN_100c03f00((ID)self,pNVar7,pNVar9,0,local_80);
        if (IVar8 != 0) {
          FUN_10003bf2c(DVar2.unknown,uVar3);
          (**(code **)(lVar13 + 8))(local_a8,local_b0);
          goto LAB_10037ef6c;
        }
        uVar10 = local_80[0];
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(uVar10);
        FUN_10003bf2c(DVar2.unknown,uVar3);
        UVar4.unknown = local_b0;
        puVar6 = local_a8;
        param_2 = local_b8;
        lVar15 = local_c0;
      }
      (**(code **)(lVar13 + 8))(puVar6,UVar4.unknown);
      param_1 = param_1 + local_a0;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  IVar8 = 0;
LAB_10037ef6c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10037efac | FUN_10037efac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10037efac(ID param_1)

{
  UTType UVar1;
  undefined *puVar2;
  UTType UVar3;
  ulong uVar4;
  undefined8 uVar5;
  UTType UVar6;
  ulong uVar7;
  ulong extraout_x1;
  ulong uVar8;
  void *pvVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  ID unaff_x20;
  ulong uVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  code *local_a0;
  undefined *puStack_98;
  ID local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  UVar1 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar12 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  _objc_allocWithZone();
  puVar2 = (undefined *)objc_stub::init(unaff_x20);
  UVar6.unknown = puVar2;
  uVar8 = extraout_x1;
  local_90 = param_1;
  FUN_100381fdc();
  UVar3 = UniformTypeIdentifiers::UTType::get_rtf(UVar6);
  SVar13 = UniformTypeIdentifiers::UTType::get_identifier(UVar3);
  pvVar9 = SVar13.bridgeObject;
  local_a0 = *(code **)(lVar10 + 8);
  puStack_98 = UVar1.unknown;
  (*local_a0)(lVar12 - extraout_x12,UVar1.unknown);
  lVar10 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(puVar2 + _TtC9PasteCore14PasteboardItem::types,auStack_78,0x21,0);
  uVar11 = *(ulong *)(puVar2 + lVar10);
  _swift_bridgeObjectRetain(pvVar9);
  uVar4 = uVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(puVar2 + lVar10) = uVar11;
  uVar7 = uVar11;
  if ((uVar4 & 1) == 0) {
    uVar7 = 0;
    FUN_10037f834(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
    *(ulong *)(puVar2 + lVar10) = uVar7;
  }
  uVar4 = *(ulong *)(uVar7 + 0x10);
  uVar11 = uVar7;
  if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar4) {
    uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
    FUN_10037f834(uVar11,uVar4 + 1,1,uVar7);
  }
  *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
  *(String *)(uVar11 + uVar4 * 0x10 + 0x20) = SVar13;
  *(ulong *)(puVar2 + lVar10) = uVar11;
  _swift_endAccess(auStack_78);
  lVar10 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(puVar2 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_78,0x21,0);
  if (uVar8 >> 0x3c < 0xf) {
    FUN_10011da54(UVar6.unknown,uVar8);
    uVar5 = *(undefined8 *)(puVar2 + lVar10);
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_88 = *(undefined8 *)(puVar2 + lVar10);
    FUN_100380ebc(UVar6.unknown,uVar8,SVar13.str,pvVar9,uVar5);
    _swift_bridgeObjectRelease(pvVar9);
    *(undefined8 *)(puVar2 + lVar10) = local_88;
  }
  else {
    FUN_100380b90(&local_88,SVar13.str,pvVar9);
    _swift_bridgeObjectRelease(pvVar9);
    FUN_10003bf18(local_88,uStack_80);
  }
  _swift_endAccess(auStack_78);
  FUN_10003bf18(UVar6.unknown,uVar8);
  objc_stub::string(local_90);
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  UVar6 = UniformTypeIdentifiers::UTType::get_utf8PlainText((UTType)0x0);
  SVar14 = UniformTypeIdentifiers::UTType::get_identifier(UVar6);
  (*local_a0)(lVar12,puStack_98);
  FUN_10037c4a8(SVar13.str,SVar13.bridgeObject,SVar14.str,SVar14.bridgeObject);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  return puVar2;
}



/* Address: 0x10037f284 | FUN_10037f284 */

undefined8 FUN_10037f284(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100381540(param_1,param_2,PTR_get_png_100eaea20);
  FUN_10003bf2c(param_1,param_2);
  return uVar1;
}



/* Address: 0x10037f2cc | FUN_10037f2cc */

undefined8 FUN_10037f2cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100381540(param_1,param_2,PTR_get_jpeg_100eaea50);
  FUN_10003bf2c(param_1,param_2);
  return uVar1;
}



/* Address: 0x10037f314 | _TtC9PasteCore14PasteboardItem::supportsSecureCoding */

/* Function Stack Size: 0x10 bytes */

bool _TtC9PasteCore14PasteboardItem::supportsSecureCoding(ID param_1,SEL param_2)

{
  return 1;
}



/* Address: 0x10037f31c | FUN_10037f31c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10037f31c(void)

{
  long lVar1;
  ID IVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ID unaff_x20;
  String ofClass;
  String withKeyClass;
  undefined8 local_60 [3];
  char *local_48 [3];
  
  uVar7 = 0;
  uVar9 = 0;
  IVar2 = objc_stub::init(unaff_x20);
  pcVar3 = (char *)0x0;
  FUN_10000ec2c(0,&DAT_100fc1ab0,&PTR__OBJC_CLASS___NSString_100f8d910);
  ofClass.bridgeObject = (void *)0x7365707974;
  ofClass.str = pcVar3;
  pcVar4 = pcVar3;
  (extension_Foundation)::__C::NSCoder::_decodeArrayOfObjects(ofClass);
  if (pcVar4 != (char *)0x0) {
    puVar5 = &DAT_100fc1ab8;
    local_48[0] = pcVar4;
    FUN_1000037f0(&DAT_100fc1ab8,&DAT_100c43a28);
    puVar6 = &DAT_100fbedd8;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    _swift_dynamicCast(local_60,local_48,puVar5,puVar6,6);
    uVar11 = local_60[0];
    if ((uVar7 & 1) != 0) {
      pvVar8 = (void *)0x0;
      FUN_10000ec2c(0,&DAT_100fc1ac0,&PTR__OBJC_CLASS___NSData_100f8d948);
      withKeyClass.bridgeObject = pvVar8;
      withKeyClass.str = pcVar3;
      (extension_Foundation)::__C::NSCoder::_decodeDictionary(withKeyClass);
      if (pcVar3 != (char *)0x0) {
        puVar5 = &DAT_100fc1ac8;
        local_48[0] = pcVar3;
        FUN_1000037f0(&DAT_100fc1ac8,&DAT_100c43a30);
        puVar6 = &DAT_100fc1a68;
        FUN_1000037f0(&DAT_100fc1a68,&DAT_100c43a18);
        _swift_dynamicCast(local_60,local_48,puVar5,puVar6,6);
        lVar1 = _TtC9PasteCore14PasteboardItem::types;
        if ((uVar9 & 1) != 0) {
          _swift_beginAccess(IVar2 + _TtC9PasteCore14PasteboardItem::types,local_48,1,0);
          uVar10 = *(undefined8 *)(IVar2 + lVar1);
          *(undefined8 *)(IVar2 + lVar1) = uVar11;
          _swift_bridgeObjectRelease(uVar10);
          lVar1 = _TtC9PasteCore14PasteboardItem::dataByType;
          _swift_beginAccess(IVar2 + _TtC9PasteCore14PasteboardItem::dataByType,local_60,1,0);
          uVar11 = *(undefined8 *)(IVar2 + lVar1);
          *(undefined8 *)(IVar2 + lVar1) = local_60[0];
          _swift_bridgeObjectRelease(uVar11);
          return IVar2;
        }
      }
      _swift_bridgeObjectRelease(uVar11);
    }
  }
  return 0;
}



/* Address: 0x10037f4f8 | _TtC9PasteCore14PasteboardItem::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC9PasteCore14PasteboardItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10037f31c();
  return param_3;
}



/* Address: 0x10037f520 | FUN_10037f520 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10037f520(ID param_1)

{
  long lVar1;
  NSArray *pNVar2;
  NSString *pNVar3;
  NSDictionary *pNVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  lVar1 = _TtC9PasteCore14PasteboardItem::types;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::types,auStack_58,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_bridgeObjectRetain(uVar5);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar5);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::FUN_100c019a0(param_1,pNVar2,pNVar3);
  lVar1 = _TtC9PasteCore14PasteboardItem::dataByType;
  _swift_beginAccess(unaff_x20 + _TtC9PasteCore14PasteboardItem::dataByType,auStack_70,0,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  _swift_bridgeObjectRetain(uVar5);
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar5);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::FUN_100c019a0(param_1,pNVar4,pNVar3);
  return 0;
}



/* Address: 0x10037f650 | _TtC9PasteCore14PasteboardItem::encodeWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC9PasteCore14PasteboardItem::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10037f520(param_3);
  return;
}



/* Address: 0x10037f6a0 | FUN_10037f6a0 */

undefined * FUN_10037f6a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10037f834);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fc1b20;
    FUN_1000037f0(&DAT_100fc1b20,&DAT_100c3fbb0);
    puVar6 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10037f82c);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10037f830);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Address: 0x10037f834 | FUN_10037f834 */

undefined * FUN_10037f834(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037f93c);
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
    puVar3 = &DAT_100fc1bf0;
    FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10037f93c | FUN_10037f93c */

undefined * FUN_10037f93c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037fa6c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc1b88;
    FUN_1000037f0(&DAT_100fc1b88,&DAT_100c43be8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc1b90;
    FUN_1000037f0(&DAT_100fc1b90,&DAT_100c43c60);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10037fa6c | FUN_10037fa6c */

undefined * FUN_10037fa6c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037fb74);
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
    puVar3 = &DAT_100fc1b10;
    FUN_1000037f0(&DAT_100fc1b10,&DAT_100c43bb8);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Foundation_Data_100ea7300);
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



/* Address: 0x10037fb74 | FUN_10037fb74 */

void FUN_10037fb74(void)

{
  FUN_1000893c8();
  return;
}



/* Address: 0x10037fb90 | FUN_10037fb90 */

undefined * FUN_10037fb90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037fcc0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fbe620;
    FUN_1000037f0(&DAT_100fbe620,&DAT_100c40728);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc1ba0;
    FUN_1000037f0(&DAT_100fc1ba0,&DAT_100c40730);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10037fcc0 | FUN_10037fcc0 */

void FUN_10037fcc0(void)

{
  FUN_1000893c8();
  return;
}



/* Address: 0x10037fcdc | FUN_10037fcdc */

undefined * FUN_10037fcdc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037fe0c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc1bd8;
    FUN_1000037f0(&DAT_100fc1bd8,&DAT_100c43c00);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc1be0;
    FUN_1000037f0(&DAT_100fc1be0,&DAT_100c43c08);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10037fe0c | FUN_10037fe0c */

undefined * FUN_10037fe0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10037ff18);
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
    puVar3 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Any_100eae0c0 + 8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10037ff18 | FUN_10037ff18 */

undefined * FUN_10037ff18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380020);
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
    puVar3 = &DAT_100fc1c00;
    FUN_1000037f0(&DAT_100fc1c00,&DAT_100c43c10);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100380020 | FUN_100380020 */

undefined * FUN_100380020(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380150);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc1ba8;
    FUN_1000037f0(&DAT_100fc1ba8,&DAT_100c43bf0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc1bb0;
    FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100380150 | FUN_100380150 */

undefined * FUN_100380150(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380258);
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
    puVar3 = &DAT_100fc1bb8;
    FUN_1000037f0(&DAT_100fc1bb8,&DAT_100c43bf8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ecbca8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x40);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100380258 | FUN_100380258 */

undefined * FUN_100380258(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380358);
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
    puVar3 = &DAT_100fbe6d0;
    FUN_1000037f0(&DAT_100fbe6d0,&DAT_100c407e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100380358 | FUN_100380358 */

void FUN_100380358(void)

{
  FUN_100380390();
  return;
}



/* Address: 0x100380374 | FUN_100380374 */

void FUN_100380374(void)

{
  FUN_100380390();
  return;
}



/* Address: 0x100380390 | FUN_100380390 */

undefined *
FUN_100380390(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380498);
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
    puVar5 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 4) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar6,param_7);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 0x10 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 * 0x10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Address: 0x100380498 | FUN_100380498 */

void FUN_100380498(void)

{
  FUN_1000893c8();
  return;
}



/* Address: 0x1003804b4 | FUN_1003804b4 */

void FUN_1003804b4(void)

{
  FUN_1000893c8();
  return;
}



/* Address: 0x1003804d0 | FUN_1003804d0 */

undefined * FUN_1003804d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380600);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc1b68;
    FUN_1000037f0(&DAT_100fc1b68,&DAT_100c43bd0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc1b70;
    FUN_1000037f0(&DAT_100fc1b70,&DAT_100c43bd8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100380600 | FUN_100380600 */

undefined * FUN_100380600(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100380724);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fc1b50;
    FUN_1000037f0(&DAT_100fc1b50,&DAT_100c43bc8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1002fc214(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}


