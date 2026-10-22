/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002aa420 | thunk_FUN_1002aa424 */

void thunk_FUN_1002aa424(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c1e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c1e4,&DAT_100ec6568);
  DAT_100fbb7f0 = pTVar1;
  return;
}



/* Address: 0x1002aa424 | FUN_1002aa424 */

void FUN_1002aa424(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c1e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c1e4,&DAT_100ec6568);
  DAT_100fbb7f0 = pTVar1;
  return;
}



/* Address: 0x1002aa464 | thunk_FUN_1002aa468 */

void thunk_FUN_1002aa468(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c154;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c154,&DAT_100ec65f8);
  DAT_100fbb7f8 = pTVar1;
  return;
}



/* Address: 0x1002aa468 | FUN_1002aa468 */

void FUN_1002aa468(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c154;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c154,&DAT_100ec65f8);
  DAT_100fbb7f8 = pTVar1;
  return;
}



/* Address: 0x1002aa4a8 | thunk_FUN_1002aa4ac */

void thunk_FUN_1002aa4ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb800 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c12c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c12c,&DAT_100ec65f8);
  DAT_100fbb800 = pTVar1;
  return;
}



/* Address: 0x1002aa4ac | FUN_1002aa4ac */

void FUN_1002aa4ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb800 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c12c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c12c,&DAT_100ec65f8);
  DAT_100fbb800 = pTVar1;
  return;
}



/* Address: 0x1002aa4ec | thunk_FUN_1002abb30 */

void thunk_FUN_1002abb30(void)

{
  FUN_1002abb30();
  return;
}



/* Address: 0x1002aa4f0 | FUN_1002aa4f0 */

undefined1  [16] FUN_1002aa4f0(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  
  pcVar1 = "verified";
  puVar4 = &DAT_d000000000000032;
  if (param_1 != 4) {
    pcVar1 = "onBarViewModel.swift";
    puVar4 = (undefined1 *)0xd00000000000002d;
  }
  pcVar3 = "tion.annual.legacy";
  puVar5 = &DAT_d000000000000032;
  if (param_1 != 3) {
    pcVar3 = pcVar1;
    puVar5 = puVar4;
  }
  puVar4 = (undefined1 *)0xd00000000000002b;
  pcVar1 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (param_1 != 1) {
    puVar4 = (undefined1 *)0xd000000000000031;
    pcVar1 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar2 = "e.macos.subscription.annual";
  puVar6 = (undefined1 *)0xd00000000000002c;
  if (param_1 != 0) {
    pcVar2 = pcVar1 + 0x20;
    puVar6 = puVar4;
  }
  if (param_1 < 3) {
    pcVar3 = pcVar2;
    puVar5 = puVar6;
  }
  auVar7._8_8_ = (ulong)pcVar3 | 0x8000000000000000;
  auVar7._0_8_ = puVar5;
  return auVar7;
}



/* Address: 0x1002aa598 | FUN_1002aa598 */

undefined1  [16] FUN_1002aa598(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  bool bVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  uVar3 = 0x79636167654c;
  if (bVar5 != 4) {
    uVar3 = 0x656d69746566694c;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar5 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  uVar2 = 0x796c696d6146;
  if (bVar5 != 3) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e600000000000000;
  if (bVar5 != 3) {
    puVar4 = puVar1;
  }
  bVar6 = 1 < bVar5 - 1;
  uVar3 = 0x6c61756e6e41;
  if (bVar6) {
    uVar3 = 0x796c68746e6f4d;
  }
  puVar1 = &DAT_e600000000000000;
  if (bVar6) {
    puVar1 = &DAT_e700000000000000;
  }
  if (bVar5 < 3) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = uVar2;
  return auVar7;
}



/* Address: 0x1002aa62c | FUN_1002aa62c */

String FUN_1002aa62c(void)

{
  LocalizedStringResource LVar1;
  uint uVar2;
  long extraout_x8;
  byte *unaff_x20;
  String SVar3;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar2 = (uint)*unaff_x20;
  if (*unaff_x20 < 3) {
    if (uVar2 - 1 < 2) {
      FUN_1001cded4(LVar1.unknown);
    }
    else {
      FUN_1001ce354(LVar1.unknown);
    }
  }
  else if (uVar2 == 3) {
    FUN_1001ce054(LVar1.unknown);
  }
  else {
    if (uVar2 == 4) {
      return (String)ZEXT816(0);
    }
    FUN_1001ce1d4(LVar1.unknown,0,0);
  }
  SVar3 = (extension_Foundation)::Swift::String::init(LVar1);
  return SVar3;
}



/* Address: 0x1002aa6e0 | FUN_1002aa6e0 */

String FUN_1002aa6e0(void)

{
  CharacterSet CVar1;
  undefined *puVar2;
  long lVar3;
  DateComponents DVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  CharacterSet CVar9;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  CharacterSet in;
  Product PVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  long local_90;
  undefined *local_78;
  String local_70;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  in.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  PVar10.unknown = in.unknown + -extraout_x8_00;
  lVar3 = 0;
  FUN_1002abb94();
  FUN_100011090(unaff_x20 + *(int *)(lVar3 + 0x14),PVar10.unknown,&DAT_100fb86e0,&DAT_100c38670);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar3 = *(long *)(DVar4.unknown + -8);
  uVar8 = 1;
  puVar2 = PVar10.unknown;
  (**(code **)(lVar3 + 0x30))(PVar10.unknown,1,DVar4.unknown);
  if ((int)puVar2 == 1) {
    FUN_1002abba8();
    local_70 = StoreKit::Product::get_displayPrice(PVar10);
  }
  else {
    FUN_1002aa94c();
    local_70.bridgeObject = (void *)uVar8;
    local_70.str = puVar2;
    puVar2 = &DAT_100fb9240;
    FUN_1000037f0(&DAT_100fb9240,&DAT_100c38f20);
    _swift_initStaticObject();
    puVar5 = &DAT_100fb9248;
    local_78 = puVar2;
    FUN_100003a00(&DAT_100fb9248,PTR_typeMetadataAccessor_100ea6b68,
                  PTR_Foundation__Foundation__CharacterSet_>Swift__SetAlgebra_100ea6b78);
    puVar2 = &DAT_100fb9250;
    local_90 = lVar11;
    FUN_1000037f0(&DAT_100fb9250,&DAT_100c3c340);
    puVar6 = &DAT_100fb9258;
    FUN_100016eac(&DAT_100fb9258,&DAT_100fb9250,&DAT_100c3c340,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    ppuVar7 = &local_78;
    CVar9 = CVar1;
    Swift::SetAlgebra::_init(in.unknown,ppuVar7,puVar2,puVar6,CVar1.unknown,puVar5);
    FUN_1002538a0();
    SVar12 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(local_90 + 8))(in.unknown,CVar1.unknown);
    _swift_bridgeObjectRelease(uVar8);
    (**(code **)(lVar3 + 8))(PVar10.unknown,DVar4.unknown);
    local_70 = StoreKit::Product::get_displayPrice(PVar10);
    SVar13.bridgeObject = (void *)0xe100000000000000;
    SVar13.str = (char *)0x2f;
    SVar14.bridgeObject = CVar9.unknown;
    SVar14.str = (char *)ppuVar7;
    Swift::String::append(SVar13,SVar14);
    SVar15.bridgeObject = CVar9.unknown;
    SVar15.str = (char *)ppuVar7;
    Swift::String::append(SVar12,SVar15);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
  }
  return local_70;
}



/* Address: 0x1002aa94c | FUN_1002aa94c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1002aa94c(void)

{
  code *pcVar1;
  undefined *self;
  ID IVar2;
  DateComponents DVar3;
  NSDateComponents *pNVar4;
  String SVar5;
  
  self = &_OBJC_CLASS___NSDateComponentsFormatter;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  objc_stub::setUnitsStyle_(IVar2,3);
  objc_stub::setMaximumUnitCount_(IVar2,1);
  objc_stub::setIncludesApproximationPhrase_(IVar2,0);
  DVar3.unknown = (undefined *)objc_stub::setIncludesTimeRemainingPhrase_(IVar2,0);
  pNVar4 = Foundation::DateComponents::_bridgeToObjectiveC(DVar3);
  IVar2 = objc_stub::stringFromDateComponents_(IVar2,pNVar4);
  if (IVar2 != 0) {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    return SVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002aaa04);
  (*pcVar1)();
}



/* Address: 0x1002aaa04 | FUN_1002aaa04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1002aaa04(void)

{
  undefined *puVar1;
  code *pcVar2;
  CharacterSet CVar3;
  Locale LVar4;
  Currency CVar5;
  undefined *puVar6;
  ID IVar7;
  Product PVar8;
  Currency CVar9;
  Locale LVar10;
  NSLocale *pNVar11;
  NSDecimalNumber *pNVar12;
  Calendar CVar13;
  TimeZone TVar14;
  DateComponents DVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined8 extraout_x1;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined *puVar23;
  long extraout_x8;
  long extraout_x8_00;
  long lVar24;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar25;
  char *unaff_x20;
  long lVar26;
  long lVar27;
  long lVar28;
  String SVar29;
  undefined1 auVar30 [16];
  String SVar31;
  String SVar32;
  undefined8 uStack_180;
  undefined1 auStack_178 [8];
  undefined8 uStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  undefined1 auStack_128 [8];
  undefined8 uStack_120;
  undefined1 auStack_118 [8];
  undefined8 uStack_110;
  undefined1 auStack_108 [8];
  undefined8 uStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined auStack_d0 [8];
  CharacterSet local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *local_80;
  long lStack_78;
  String local_70;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar28 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar28 + 0x40));
  puVar6 = &DAT_100fbb838;
  FUN_1000037f0(&DAT_100fbb838,&DAT_100c3c348);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar6 = &DAT_100fbb840;
  local_a8 = lVar24;
  FUN_1000037f0(&DAT_100fbb840,&DAT_100c3c350);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar24 = lVar24 - extraout_x8_01;
  local_b0 = lVar24;
  puStack_90 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar24 = lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar24;
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  lVar26 = *(long *)(LVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  lVar24 = lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  CVar5 = FormatStyle::Currency::_typeMetadataAccessor();
  lVar27 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  lVar25 = lVar24 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_70.str = (char *)0x0;
  if (*unaff_x20 == '\0') {
    local_70.bridgeObject = (void *)0x0;
  }
  else {
    local_70.bridgeObject = (void *)0x0;
    if (*unaff_x20 != '\x05') {
      puVar6 = &_OBJC_CLASS___NSNumberFormatter;
      local_c8.unknown = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      local_c0 = lVar28;
      local_b8 = CVar3.unknown;
      _objc_allocWithZone(&_OBJC_CLASS___NSNumberFormatter,0);
      IVar7 = objc_stub::init((ID)puVar6);
      PVar8.unknown = (undefined *)0x0;
      FUN_1002abb94();
      CVar9 = StoreKit::Product::_get_priceFormatStyle(PVar8);
      LVar10 = FormatStyle::Currency::_get_locale(CVar9);
      pNVar11 = Foundation::Locale::_bridgeToObjectiveC(LVar10);
      (**(code **)(lVar26 + 8))(lVar24,LVar4.unknown);
      (**(code **)(lVar27 + 8))(lVar25,CVar5.unknown);
      objc_stub::setLocale_(IVar7,pNVar11);
      uVar21 = 2;
      PVar8.unknown = (undefined *)objc_stub::setNumberStyle_(IVar7,2);
      uVar19 = extraout_x1;
      StoreKit::Product::get_price(PVar8);
      puVar6 = PVar8.unknown;
      uVar20 = uVar19;
      uVar22 = uVar21;
      ___extension_in_Foundation____C_NSDecimal_init_floatLiteral__Swift_Double___>___C_NSDecimal
                (0x4028000000000000);
      static_(extension_in_Foundation):__C.NSDecimal./_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal
      ::___infix(PVar8.unknown,uVar19,uVar21,puVar6,uVar20,uVar22);
      pNVar12 = (extension_in_Foundation):__C.NSDecimal._bridgeToObjectiveC()_->___C.NSDecimalNumber
                ::__bridgeToObjectiveC();
      IVar7 = objc_stub::stringFromNumber_(IVar7);
      if (IVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002aaef8);
        (*pcVar2)();
      }
      local_70 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar29.bridgeObject = (void *)0xe100000000000000;
      SVar29.str = (char *)0x2f;
      SVar31.bridgeObject = puVar6;
      SVar31.str = (char *)pNVar12;
      Swift::String::append(SVar29,SVar31);
      CVar13 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar13.unknown + -8) + 0x38))(local_b0,1,1,CVar13.unknown);
      TVar14 = Foundation::TimeZone::typeMetadataAccessor();
      lVar24 = local_a8;
      (**(code **)(*(long *)(TVar14.unknown + -8) + 0x38))(local_a8,1,1,TVar14.unknown);
      *(undefined1 *)(lVar25 + -8) = 1;
      *(undefined8 *)(lVar25 + -0x10) = 0;
      *(undefined1 *)(lVar25 + -0x18) = 1;
      *(undefined8 *)(lVar25 + -0x20) = 0;
      *(undefined1 *)(lVar25 + -0x28) = 1;
      *(undefined8 *)(lVar25 + -0x30) = 0;
      *(undefined1 *)(lVar25 + -0x38) = 1;
      *(undefined8 *)(lVar25 + -0x40) = 0;
      *(undefined1 *)(lVar25 + -0x48) = 1;
      *(undefined8 *)(lVar25 + -0x50) = 0;
      *(undefined1 *)(lVar25 + -0x58) = 1;
      *(undefined8 *)(lVar25 + -0x60) = 0;
      *(undefined1 *)(lVar25 + -0x68) = 1;
      *(undefined8 *)(lVar25 + -0x70) = 0;
      *(undefined1 *)(lVar25 + -0x78) = 1;
      *(undefined8 *)(lVar25 + -0x80) = 0;
      *(undefined1 *)(lVar25 + -0x88) = 1;
      *(undefined8 *)(lVar25 + -0x90) = 0;
      *(undefined1 *)(lVar25 + -0x98) = 1;
      *(undefined8 *)(lVar25 + -0xa0) = 0;
      *(undefined1 *)(lVar25 + -0xa8) = 1;
      *(undefined8 *)(lVar25 + -0xb0) = 0;
      lVar25 = local_a0;
      DVar15 = Foundation::DateComponents::_init();
      FUN_1002aa94c();
      puVar6 = &DAT_100fb9240;
      local_80 = DVar15.unknown;
      lStack_78 = lVar24;
      FUN_1000037f0(&DAT_100fb9240,&DAT_100c38f20);
      _swift_initStaticObject();
      puVar16 = &DAT_100fb9248;
      local_88 = puVar6;
      FUN_100003a00(&DAT_100fb9248,PTR_typeMetadataAccessor_100ea6b68,
                    PTR_Foundation__Foundation__CharacterSet_>Swift__SetAlgebra_100ea6b78);
      puVar6 = &DAT_100fb9250;
      FUN_1000037f0(&DAT_100fb9250,&DAT_100c3c340);
      puVar17 = &DAT_100fb9258;
      FUN_100016eac(&DAT_100fb9258,&DAT_100fb9250,&DAT_100c3c340,
                    PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
      puVar1 = local_b8;
      CVar3.unknown = local_c8.unknown;
      ppuVar18 = &local_88;
      puVar23 = local_b8;
      Swift::SetAlgebra::_init(local_c8.unknown,ppuVar18,puVar6,puVar17,local_b8,puVar16);
      FUN_1002538a0();
      SVar29 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar3);
      (**(code **)(local_c0 + 8))(CVar3.unknown,puVar1);
      _swift_bridgeObjectRelease(lVar24);
      (**(code **)(local_98 + 8))(lVar25,puStack_90);
      SVar32.bridgeObject = puVar23;
      SVar32.str = (char *)ppuVar18;
      Swift::String::append(SVar29,SVar32);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
    }
  }
  auVar30._8_8_ = local_70.bridgeObject;
  auVar30._0_8_ = local_70.str;
  return auVar30;
}



/* Address: 0x1002aaef8 | FUN_1002aaef8 */

String FUN_1002aaef8(void)

{
  CharacterSet CVar1;
  LocalizedStringResource LVar2;
  DateComponents DVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  CharacterSet in;
  long lVar12;
  long lVar13;
  String SVar14;
  long alStack_b0 [5];
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long lStack_68;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar13 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  in.unknown = (undefined *)((long)alStack_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = in.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)LVar2.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1002abbf0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar10 = (undefined8 *)(lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_1002abc04();
  puVar5 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar12 + 0x20))(lVar9,puVar10,DVar3.unknown);
    FUN_1002aa94c();
    thunk_FUN_1001e6c98(LVar2.unknown);
    _swift_bridgeObjectRelease(puVar10);
    SVar14 = (extension_Foundation)::Swift::String::init(LVar2);
    (**(code **)(lVar12 + 8))(lVar9,DVar3.unknown);
  }
  else {
    local_88 = lVar12;
    local_80 = lVar13;
    alStack_b0[3] = *puVar10;
    alStack_b0[2] = puVar10[1];
    puVar6 = &DAT_100fb8db0;
    FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
    alStack_b0[4] = (long)*(int *)(puVar6 + 0x30);
    lVar4 = (long)puVar10 + (long)*(int *)(puVar6 + 0x40);
    lVar13 = lVar9;
    (**(code **)(lVar12 + 0x20))(lVar9,lVar4,DVar3.unknown);
    FUN_1002aa94c();
    puVar6 = &DAT_100fb9240;
    alStack_b0[1] = lVar4;
    local_70 = lVar13;
    lStack_68 = lVar4;
    FUN_1000037f0(&DAT_100fb9240,&DAT_100c38f20);
    _swift_initStaticObject();
    puVar7 = &DAT_100fb9248;
    local_78 = puVar6;
    FUN_100003a00(&DAT_100fb9248,PTR_typeMetadataAccessor_100ea6b68,
                  PTR_Foundation__Foundation__CharacterSet_>Swift__SetAlgebra_100ea6b78);
    puVar6 = &DAT_100fb9250;
    FUN_1000037f0(&DAT_100fb9250,&DAT_100c3c340);
    puVar8 = &DAT_100fb9258;
    FUN_100016eac(&DAT_100fb9258,&DAT_100fb9250,&DAT_100c3c340,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(in.unknown,&local_78,puVar6,puVar8,CVar1.unknown,puVar7);
    FUN_1002538a0();
    SVar14 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(local_80 + 8))(in.unknown,CVar1.unknown);
    _swift_bridgeObjectRelease(alStack_b0[1]);
    lVar4 = alStack_b0[2];
    thunk_FUN_1001e6ca8(LVar2.unknown,alStack_b0[3],alStack_b0[2],SVar14.str,SVar14.bridgeObject);
    _swift_bridgeObjectRelease(lVar4);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    SVar14 = (extension_Foundation)::Swift::String::init(LVar2);
    pcVar11 = *(code **)(local_88 + 8);
    (*pcVar11)(lVar9,DVar3.unknown);
    (*pcVar11)((long)puVar10 + alStack_b0[4],DVar3.unknown);
  }
  return SVar14;
}



/* Address: 0x1002ab21c | FUN_1002ab21c */

void FUN_1002ab21c(void)

{
  FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1002ab248 | FUN_1002ab248 */

void FUN_1002ab248(void)

{
  undefined1 *unaff_x20;
  
  FUN_100254470(*unaff_x20);
  return;
}



/* Address: 0x1002ab250 | FUN_1002ab250 */

void FUN_1002ab250(Hasher param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  byte *unaff_x20;
  String SVar8;
  
  bVar4 = *unaff_x20;
  pcVar1 = "verified";
  pcVar5 = &DAT_d000000000000032;
  if (bVar4 != 4) {
    pcVar1 = "onBarViewModel.swift";
    pcVar5 = (char *)0xd00000000000002d;
  }
  pcVar3 = "tion.annual.legacy";
  pcVar6 = &DAT_d000000000000032;
  if (bVar4 != 3) {
    pcVar3 = pcVar1;
    pcVar6 = pcVar5;
  }
  pcVar1 = (char *)0xd00000000000002b;
  pcVar5 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (bVar4 != 1) {
    pcVar1 = (char *)0xd000000000000031;
    pcVar5 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar2 = "e.macos.subscription.annual";
  pcVar7 = (char *)0xd00000000000002c;
  if (bVar4 != 0) {
    pcVar2 = pcVar5 + 0x20;
    pcVar7 = pcVar1;
  }
  if (bVar4 < 3) {
    pcVar3 = pcVar2;
    pcVar6 = pcVar7;
  }
  SVar8.bridgeObject = (void *)((ulong)pcVar3 | 0x8000000000000000);
  SVar8.str = pcVar6;
  Swift::String::hash(param_1,SVar8);
  _swift_bridgeObjectRelease((ulong)pcVar3 | 0x8000000000000000);
  return;
}



/* Address: 0x1002ab314 | FUN_1002ab314 */

void FUN_1002ab314(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10025455c(param_1,*unaff_x20);
  return;
}



/* Address: 0x1002ab31c | FUN_1002ab31c */

void FUN_1002ab31c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1002abb30(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1002ab348 | FUN_1002ab348 */

void FUN_1002ab348(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  pcVar1 = "verified";
  puVar5 = &DAT_d000000000000032;
  if (bVar4 != 4) {
    pcVar1 = "onBarViewModel.swift";
    puVar5 = (undefined1 *)0xd00000000000002d;
  }
  pcVar3 = "tion.annual.legacy";
  puVar6 = &DAT_d000000000000032;
  if (bVar4 != 3) {
    pcVar3 = pcVar1;
    puVar6 = puVar5;
  }
  puVar5 = (undefined1 *)0xd00000000000002b;
  pcVar1 = "com.wiheads.paste.macos.subscription.annual.intro";
  if (bVar4 != 1) {
    puVar5 = (undefined1 *)0xd000000000000031;
    pcVar1 = "com.wiheads.paste.macos.subscription.annual.family";
  }
  pcVar2 = "e.macos.subscription.annual";
  puVar7 = (undefined1 *)0xd00000000000002c;
  if (bVar4 != 0) {
    pcVar2 = pcVar1 + 0x20;
    puVar7 = puVar5;
  }
  if (bVar4 < 3) {
    pcVar3 = pcVar2;
    puVar6 = puVar7;
  }
  *param_1 = puVar6;
  param_1[1] = (ulong)pcVar3 | 0x8000000000000000;
  return;
}



/* Address: 0x1002ab3f4 | FUN_1002ab3f4 */

void FUN_1002ab3f4(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb8650;
  FUN_1000037f0(&DAT_100fb8650,&DAT_100c38210);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1002ab434 | FUN_1002ab434 */

void FUN_1002ab434(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002abb94();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x14),param_1,&DAT_100fb86e0,&DAT_100c38670);
  return;
}



/* Address: 0x1002ab478 | FUN_1002ab478 */

void FUN_1002ab478(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002abb94();
  FUN_1001a7c4c(param_1,unaff_x20 + *(int *)(lVar1 + 0x14),&DAT_100fb86e0,&DAT_100c38670);
  return;
}



/* Address: 0x1002ab4bc | FUN_1002ab4bc */

undefined1  [16] FUN_1002ab4bc(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1002abb94();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x14);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1002ab4e4 | FUN_1002ab4e4 */

void FUN_1002ab4e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002abb94();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x18),param_1,&DAT_100fb8db8,&DAT_100c38680);
  return;
}



/* Address: 0x1002ab528 | FUN_1002ab528 */

void FUN_1002ab528(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002abb94();
  FUN_1001a7c4c(param_1,unaff_x20 + *(int *)(lVar1 + 0x18),&DAT_100fb8db8,&DAT_100c38680);
  return;
}



/* Address: 0x1002ab56c | FUN_1002ab56c */

undefined1  [16] FUN_1002ab56c(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = 0;
  FUN_1002abb94();
  auVar2._8_8_ = unaff_x20 + *(int *)(lVar1 + 0x18);
  auVar2._0_8_ = FUN_100004520;
  return auVar2;
}



/* Address: 0x1002ab594 | FUN_1002ab594 */

void FUN_1002ab594(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  void *pvVar4;
  bool bVar5;
  SubscriptionPeriod SVar6;
  PaymentMode PVar7;
  SubscriptionOffer SVar8;
  __int64 _Var9;
  PaymentMode PVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  undefined *puVar15;
  long extraout_x8_01;
  long extraout_x8_02;
  DateComponents *pDVar16;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  undefined8 uVar17;
  SubscriptionOffer SVar18;
  String *pSVar19;
  SubscriptionOffer SVar20;
  code *pcVar21;
  long lVar22;
  code *pcVar23;
  String SVar24;
  String local_c0;
  long local_b0;
  DateComponents *local_a8;
  undefined *local_a0;
  undefined *local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  SubscriptionPeriod local_68;
  
  local_70 = param_1;
  local_98 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_88 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  pDVar16 = (DateComponents *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a8 = pDVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)pDVar16 - extraout_x12;
  local_90 = lVar14;
  SVar6 = StoreKit::Product::SubscriptionPeriod::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(SVar6.unknown + -8) + 0x40));
  puVar15 = (undefined *)(lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_68.unknown = puVar15;
  PVar7 = StoreKit::Product::SubscriptionOffer::PaymentMode::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100ea7fe0;
  lVar22 = *(long *)(PVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar14 = (long)puVar15 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined *)(lVar14 - extraout_x12_00);
  local_c0.bridgeObject = puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = puVar15 + -extraout_x12_01;
  local_a0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar15 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar18.unknown = (undefined *)(lVar14 - extraout_x12_03);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar20.unknown = SVar18.unknown + -extraout_x12_04;
  SVar8.unknown = (undefined *)0x0;
  FUN_1002abbf0();
  local_80 = *(long *)(SVar8.unknown + -8);
  local_78 = SVar8.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  pSVar19 = (String *)(SVar20.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  StoreKit::Product::SubscriptionOffer::get_paymentMode(SVar8);
  pcVar21 = *(code **)(lVar22 + 0x10);
  PVar10.unknown = SVar18.unknown;
  (*pcVar21)(SVar18.unknown,SVar20.unknown,PVar7.unknown);
  StoreKit::Product::SubscriptionOffer::PaymentMode::get_freeTrial(PVar10);
  puVar15 = &DAT_100fb8698;
  FUN_100003a00(&DAT_100fb8698,puVar3,
                PTR_StoreKit__StoreKit__Product__SubscriptionOffer__PaymentMode_>Swift__Equatable_100ea7fe8
               );
  bVar5 = Swift::Equatable::___infix(lVar14,SVar18.unknown,PVar7.unknown,puVar15);
  pcVar23 = *(code **)(lVar22 + 8);
  (*pcVar23)(lVar14,PVar7.unknown);
  (*pcVar23)(SVar18.unknown,PVar7.unknown);
  SVar6.unknown = local_68.unknown;
  puVar3 = local_a0;
  if (bVar5) {
    StoreKit::Product::SubscriptionOffer::get_period(SVar18);
    (extension_StoreKit)::Foundation::DateComponents::init(SVar6);
    SVar8 = StoreKit::Product::SubscriptionOffer::typeMetadataAccessor();
    (**(code **)(*(long *)(SVar8.unknown + -8) + 8))(param_2,SVar8.unknown);
    (*pcVar23)(SVar20.unknown,PVar7.unknown);
    uVar13 = 0;
  }
  else {
    PVar10.unknown = local_a0;
    local_c0.str = (char *)pSVar19;
    (*pcVar21)(local_a0,SVar20.unknown,PVar7.unknown);
    StoreKit::Product::SubscriptionOffer::PaymentMode::get_payAsYouGo(PVar10);
    bVar5 = Swift::Equatable::___infix(lVar14,puVar3,PVar7.unknown,puVar15);
    (*pcVar23)(lVar14,PVar7.unknown);
    (*pcVar23)(puVar3,PVar7.unknown);
    pvVar4 = local_c0.bridgeObject;
    if (bVar5) {
      (*pcVar23)(SVar20.unknown,PVar7.unknown);
    }
    else {
      PVar10.unknown = local_c0.bridgeObject;
      (*pcVar21)(local_c0.bridgeObject,SVar20.unknown,PVar7.unknown);
      StoreKit::Product::SubscriptionOffer::PaymentMode::get_payUpFront(PVar10);
      bVar5 = Swift::Equatable::___infix(lVar14,pvVar4,PVar7.unknown,puVar15);
      (*pcVar23)(lVar14,PVar7.unknown);
      (*pcVar23)(pvVar4,PVar7.unknown);
      (*pcVar23)(SVar20.unknown,PVar7.unknown);
      if (!bVar5) {
        SVar8 = StoreKit::Product::SubscriptionOffer::typeMetadataAccessor();
        (**(code **)(*(long *)(SVar8.unknown + -8) + 8))(param_2,SVar8.unknown);
        uVar12 = 1;
        uVar17 = local_70;
        puVar15 = local_78;
        goto LAB_1002ababc;
      }
    }
    puVar3 = local_98;
    StoreKit::Product::SubscriptionOffer::get_period(SVar20);
    lVar22 = local_90;
    (extension_StoreKit)::Foundation::DateComponents::init(SVar6);
    pDVar16 = local_a8;
    SVar8.unknown = (undefined *)local_a8;
    (**(code **)(local_88 + 0x10))(local_a8,lVar22,puVar3);
    uVar11 = (uint)lVar22;
    Foundation::DateComponents::_get_year((DateComponents)SVar8.unknown);
    SVar18.unknown = SVar8.unknown;
    if ((uVar11 & 0xff) != 1) {
      _Var9 = StoreKit::Product::SubscriptionOffer::get_periodCount(SVar8);
      SVar18.unknown = SVar8.unknown * _Var9;
      if (SUB168(SEXT816((long)SVar8.unknown) * SEXT816(_Var9),8) != (long)SVar18.unknown >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1002abb20);
        (*pcVar21)();
      }
      uVar11 = 0;
      Foundation::DateComponents::_set_year(pDVar16);
    }
    Foundation::DateComponents::_get_month((DateComponents)SVar18.unknown);
    SVar8.unknown = SVar18.unknown;
    if ((uVar11 & 0xff) != 1) {
      _Var9 = StoreKit::Product::SubscriptionOffer::get_periodCount(SVar18);
      SVar8.unknown = SVar18.unknown * _Var9;
      if (SUB168(SEXT816((long)SVar18.unknown) * SEXT816(_Var9),8) != (long)SVar8.unknown >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x1002abb24);
        (*pcVar21)();
      }
      Foundation::DateComponents::_set_month(pDVar16);
    }
    PVar10 = StoreKit::Product::SubscriptionOffer::get_paymentMode(SVar8);
    lVar22 = local_b0;
    StoreKit::Product::SubscriptionOffer::PaymentMode::get_payUpFront(PVar10);
    bVar5 = Swift::Equatable::___infix(lVar14,lVar22,PVar7.unknown,puVar15);
    (*pcVar23)(lVar22,PVar7.unknown);
    (*pcVar23)(lVar14,PVar7.unknown);
    SVar8.unknown = &DAT_100fb8db0;
    FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
    iVar1 = *(int *)(SVar8.unknown + 0x30);
    iVar2 = *(int *)(SVar8.unknown + 0x40);
    SVar24 = StoreKit::Product::SubscriptionOffer::get_displayPrice(SVar8);
    SVar8 = StoreKit::Product::SubscriptionOffer::typeMetadataAccessor();
    (**(code **)(*(long *)(SVar8.unknown + -8) + 8))(param_2,SVar8.unknown);
    pSVar19 = (String *)local_c0.str;
    *(String *)local_c0.str = SVar24;
    pcVar21 = *(code **)(local_88 + 0x20);
    (*pcVar21)((undefined *)((long)&pSVar19->str + (long)iVar1),local_90,puVar3);
    (*pcVar21)((undefined *)((long)&pSVar19->str + (long)iVar2),pDVar16,puVar3);
    uVar13 = 1;
    if (bVar5) {
      uVar13 = 2;
    }
  }
  puVar15 = local_78;
  _swift_storeEnumTagMultiPayload(pSVar19,local_78,uVar13);
  uVar17 = local_70;
  FUN_1002ad5c8(pSVar19,local_70);
  uVar12 = 0;
LAB_1002ababc:
  (**(code **)(local_80 + 0x38))(uVar17,uVar12,1,puVar15);
  return;
}



/* Address: 0x1002abb24 | FUN_1002abb24 */

void FUN_1002abb24(undefined1 *param_1)

{
  undefined1 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Address: 0x1002abb30 | FUN_1002abb30 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002abb6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1002abb30(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (5 < uVar1) {
    uVar1 = 6;
  }
  return uVar1;
}



/* Address: 0x1002abb94 | FUN_1002abb94 */

void FUN_1002abb94(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbb8f0,&TargetStructDescriptor_100caab2c);
  return;
}



/* Address: 0x1002abba8 | FUN_1002abba8 */

undefined8 FUN_1002abba8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1002abbf0 | FUN_1002abbf0 */

void FUN_1002abbf0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fbb9b0,&TargetEnumDescriptor_100caab70);
  return;
}



/* Address: 0x1002abc04 | FUN_1002abc04 */

undefined8 FUN_1002abc04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abbf0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002abc48 | thunk_FUN_1002abc4c */

void thunk_FUN_1002abc4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb878 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c360;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c360,&DAT_100ec6738);
  DAT_100fbb878 = pTVar1;
  return;
}



/* Address: 0x1002abc4c | FUN_1002abc4c */

void FUN_1002abc4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb878 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c360;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c360,&DAT_100ec6738);
  DAT_100fbb878 = pTVar1;
  return;
}



/* Address: 0x1002abc8c | FUN_1002abc8c */

void FUN_1002abc8c(void)

{
  FUN_100016eac(&DAT_100fbb880,&DAT_100fbb888,&DAT_100c3c400,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  return;
}



/* Address: 0x1002abcc0 | thunk_FUN_1002abcc4 */

void thunk_FUN_1002abcc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb890 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c388;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c388,&DAT_100ec6738);
  DAT_100fbb890 = pTVar1;
  return;
}



/* Address: 0x1002abcc4 | FUN_1002abcc4 */

void FUN_1002abcc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb890 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c388;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c388,&DAT_100ec6738);
  DAT_100fbb890 = pTVar1;
  return;
}



/* Address: 0x1002abd04 | FUN_1002abd04 */

long * FUN_1002abd04(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  DateComponents DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  Product PVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar12 = (long)*(int *)(param_3 + 0x14);
    DVar6 = Foundation::DateComponents::typeMetadataAccessor();
    lVar14 = *(long *)(DVar6.unknown + -8);
    puVar7 = (undefined1 *)((long)param_2 + lVar12);
    (**(code **)(lVar14 + 0x30))(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar14 + 0x10))
                ((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                 DVar6.unknown);
      (**(code **)(lVar14 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar12 = 0;
    FUN_1002abbf0();
    lVar13 = *(long *)(lVar12 + -8);
    puVar9 = puVar2;
    (**(code **)(lVar13 + 0x30))(puVar2,1,lVar12);
    if ((int)puVar9 == 0) {
      puVar9 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar12);
      if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
        uVar3 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar3;
        _swift_bridgeObjectRetain();
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar15 = *(code **)(lVar14 + 0x10);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar8 + 0x30),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x30),DVar6.unknown);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar8 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x40),DVar6.unknown);
      }
      else {
        (**(code **)(lVar14 + 0x10))(puVar1,puVar2,DVar6.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar12,puVar9);
      (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      puVar8 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar5 = *(int *)(param_3 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar5),
               (undefined1 *)((long)param_2 + (long)iVar5),PVar10.unknown);
  }
  else {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar11 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar12 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002abf44 | FUN_1002abf44 */

void FUN_1002abf44(long param_1,long param_2)

{
  int iVar1;
  DateComponents DVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  Product PVar7;
  long lVar8;
  code *pcVar9;
  
  iVar1 = *(int *)(param_2 + 0x14);
  DVar2 = Foundation::DateComponents::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar8 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar8 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  lVar3 = param_1 + *(int *)(param_2 + 0x18);
  lVar4 = 0;
  FUN_1002abbf0();
  lVar5 = lVar3;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar3,1,lVar4);
  if ((int)lVar5 == 0) {
    lVar5 = lVar3;
    _swift_getEnumCaseMultiPayload(lVar3,lVar4);
    iVar1 = (int)lVar5;
    if ((iVar1 == 2) || (iVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar3 + *(int *)(puVar6 + 0x30),DVar2.unknown);
      (*pcVar9)(lVar3 + *(int *)(puVar6 + 0x40),DVar2.unknown);
    }
    else if (iVar1 == 0) {
      (**(code **)(lVar8 + 8))(lVar3,DVar2.unknown);
    }
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  PVar7 = StoreKit::Product::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002ac070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(PVar7.unknown + -8) + 8))(param_1 + iVar1,PVar7.unknown);
  return;
}



/* Address: 0x1002ac074 | FUN_1002ac074 */

undefined1 * FUN_1002ac074(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  *param_1 = *param_2;
  iVar4 = *(int *)(param_3 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar5.unknown + -8);
  puVar6 = param_2 + iVar4;
  (**(code **)(lVar12 + 0x30))(puVar6,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1 + iVar4,param_2 + iVar4,DVar5.unknown);
    (**(code **)(lVar12 + 0x38))(param_1 + iVar4,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar4,param_2 + iVar4,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar11 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      _swift_bridgeObjectRetain();
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 0x10);
      (*pcVar13)((long)puVar1 + (long)*(int *)(puVar7 + 0x30),
                 (long)puVar2 + (long)*(int *)(puVar7 + 0x30),DVar5.unknown);
      (*pcVar13)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
                 (long)puVar2 + (long)*(int *)(puVar7 + 0x40),DVar5.unknown);
    }
    else {
      (**(code **)(lVar12 + 0x10))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,puVar9);
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar7 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
            (param_1 + iVar4,param_2 + iVar4,PVar10.unknown);
  return param_1;
}



/* Address: 0x1002ac288 | FUN_1002ac288 */

undefined1 * FUN_1002ac288(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  DateComponents DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Product PVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  pcVar12 = *(code **)(lVar14 + 0x30);
  puVar5 = param_1 + iVar3;
  (*pcVar12)(puVar5,1,DVar4.unknown);
  puVar6 = param_2 + iVar3;
  (*pcVar12)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 != 0) {
      (**(code **)(lVar14 + 8))(param_1 + iVar3,DVar4.unknown);
      goto LAB_1002ac344;
    }
    (**(code **)(lVar14 + 0x18))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar14 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar14 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
LAB_1002ac344:
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar13 = *(long *)(lVar8 + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  puVar9 = puVar1;
  (*pcVar12)(puVar1,1,lVar8);
  puVar10 = puVar2;
  (*pcVar12)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 == 0) {
      if (param_1 != param_2) {
        FUN_1002ac644(puVar1);
        puVar9 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar8);
        if ((int)puVar9 == 2) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar12 = *(code **)(lVar14 + 0x10);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar4.unknown);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar4.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,2);
        }
        else if ((int)puVar9 == 1) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar12 = *(code **)(lVar14 + 0x10);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar4.unknown);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar4.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,1);
        }
        else {
          (**(code **)(lVar14 + 0x10))(puVar1,puVar2,DVar4.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,0);
        }
      }
      goto LAB_1002ac568;
    }
    FUN_1002ac644(puVar1);
  }
  else if ((int)puVar10 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar12 = *(code **)(lVar14 + 0x10);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar4.unknown);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar4.unknown);
    }
    else {
      (**(code **)(lVar14 + 0x10))(puVar1,puVar2,DVar4.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,puVar9);
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar8);
    goto LAB_1002ac568;
  }
  puVar7 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1002ac568:
  iVar3 = *(int *)(param_3 + 0x1c);
  PVar11 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar11.unknown + -8) + 0x18))
            (param_1 + iVar3,param_2 + iVar3,PVar11.unknown);
  return param_1;
}



/* Address: 0x1002ac644 | FUN_1002ac644 */

undefined8 FUN_1002ac644(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abbf0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1002ac680 | FUN_1002ac680 */

undefined1 * FUN_1002ac680(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  DateComponents DVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  Product PVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  puVar5 = param_2 + iVar3;
  (**(code **)(lVar11 + 0x30))(puVar5,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar11 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar11 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar7 = 0;
  FUN_1002abbf0();
  lVar10 = *(long *)(lVar7 + -8);
  puVar8 = puVar2;
  (**(code **)(lVar10 + 0x30))(puVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    puVar8 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar7);
    if (((int)puVar8 == 2) || ((int)puVar8 == 1)) {
      uVar13 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar13;
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar12 = *(code **)(lVar11 + 0x20);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x30)),DVar4.unknown);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar6 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar6 + 0x40)),DVar4.unknown);
    }
    else {
      (**(code **)(lVar11 + 0x20))(puVar1,puVar2,DVar4.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar7,puVar8);
    (**(code **)(lVar10 + 0x38))(puVar1,0,1,lVar7);
  }
  else {
    puVar6 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar9.unknown + -8) + 0x20))(param_1 + iVar3,param_2 + iVar3,PVar9.unknown)
  ;
  return param_1;
}



/* Address: 0x1002ac890 | FUN_1002ac890 */

undefined1 * FUN_1002ac890(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  DateComponents DVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  Product PVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  pcVar12 = *(code **)(lVar14 + 0x30);
  puVar5 = param_1 + iVar3;
  (*pcVar12)(puVar5,1,DVar4.unknown);
  puVar6 = param_2 + iVar3;
  (*pcVar12)(puVar6,1,DVar4.unknown);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 != 0) {
      (**(code **)(lVar14 + 8))(param_1 + iVar3,DVar4.unknown);
      goto LAB_1002ac94c;
    }
    (**(code **)(lVar14 + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar14 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar4.unknown);
    (**(code **)(lVar14 + 0x38))(param_1 + iVar3,0,1,DVar4.unknown);
  }
  else {
LAB_1002ac94c:
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar13 = *(long *)(lVar8 + -8);
  pcVar12 = *(code **)(lVar13 + 0x30);
  puVar9 = puVar1;
  (*pcVar12)(puVar1,1,lVar8);
  puVar10 = puVar2;
  (*pcVar12)(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 == 0) {
      if (param_1 != param_2) {
        FUN_1002ac644(puVar1);
        puVar9 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar8);
        if ((int)puVar9 == 2) {
          uVar15 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar15;
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar12 = *(code **)(lVar14 + 0x20);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar4.unknown);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar4.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,2);
        }
        else if ((int)puVar9 == 1) {
          uVar15 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar15;
          puVar7 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar12 = *(code **)(lVar14 + 0x20);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar4.unknown);
          (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar4.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,1);
        }
        else {
          (**(code **)(lVar14 + 0x20))(puVar1,puVar2,DVar4.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar8,0);
        }
      }
      goto LAB_1002acb58;
    }
    FUN_1002ac644(puVar1);
  }
  else if ((int)puVar10 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar15 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar15;
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar12 = *(code **)(lVar14 + 0x20);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar4.unknown);
      (*pcVar12)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar4.unknown);
    }
    else {
      (**(code **)(lVar14 + 0x20))(puVar1,puVar2,DVar4.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,puVar9);
    (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar8);
    goto LAB_1002acb58;
  }
  puVar7 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1002acb58:
  iVar3 = *(int *)(param_3 + 0x1c);
  PVar11 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar11.unknown + -8) + 0x28))
            (param_1 + iVar3,param_2 + iVar3,PVar11.unknown);
  return param_1;
}



/* Address: 0x1002acc28 | FUN_1002acc28 */

void FUN_1002acc28(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002acc34 | FUN_1002acc34 */

byte * FUN_1002acc34(byte *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  Product PVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  iVar3 = (int)param_2;
  if (iVar3 == 0xfa) {
    uVar1 = 0;
    if (5 < *param_1) {
      uVar1 = *param_1 - 5;
    }
    return (byte *)(ulong)uVar1;
  }
  PVar2.unknown = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  lVar4 = *(long *)(PVar2.unknown + -8);
  if (iVar3 == *(int *)(lVar4 + 0x54)) {
    lVar5 = (long)*(int *)(param_3 + 0x14);
  }
  else {
    PVar2.unknown = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    lVar4 = *(long *)(PVar2.unknown + -8);
    if (iVar3 == *(int *)(lVar4 + 0x54)) {
      lVar5 = (long)*(int *)(param_3 + 0x18);
    }
    else {
      PVar2 = StoreKit::Product::typeMetadataAccessor();
      lVar4 = *(long *)(PVar2.unknown + -8);
      lVar5 = (long)*(int *)(param_3 + 0x1c);
    }
  }
  param_1 = param_1 + lVar5;
                    /* WARNING: Could not recover jumptable at 0x0001002acd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(param_1,param_2,PVar2.unknown);
  return param_1;
}



/* Address: 0x1002acd08 | FUN_1002acd08 */

void FUN_1002acd08(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002acd14 | FUN_1002acd14 */

void FUN_1002acd14(char *param_1,undefined8 param_2,int param_3,long param_4)

{
  Product PVar1;
  long lVar2;
  long lVar3;
  
  if (param_3 == 0xfa) {
    *param_1 = (char)param_2 + '\x05';
    return;
  }
  PVar1.unknown = &DAT_100fb86e0;
  FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
  lVar2 = *(long *)(PVar1.unknown + -8);
  if (param_3 == *(int *)(lVar2 + 0x54)) {
    lVar3 = (long)*(int *)(param_4 + 0x14);
  }
  else {
    PVar1.unknown = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    lVar2 = *(long *)(PVar1.unknown + -8);
    if (param_3 == *(int *)(lVar2 + 0x54)) {
      lVar3 = (long)*(int *)(param_4 + 0x18);
    }
    else {
      PVar1 = StoreKit::Product::typeMetadataAccessor();
      lVar2 = *(long *)(PVar1.unknown + -8);
      lVar3 = (long)*(int *)(param_4 + 0x1c);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001002acde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x38))(param_1 + lVar3,param_2,param_2,PVar1.unknown);
  return;
}



/* Address: 0x1002acde8 | FUN_1002acde8 */

void FUN_1002acde8(long param_1)

{
  long lVar1;
  Product PVar2;
  undefined *puVar3;
  undefined *local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_40 = &DAT_100c3c4c8;
  puVar3 = &DAT_100fbb900;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fbb900,PTR_typeMetadataAccessor_100ea6de0);
  if (puVar3 < (undefined *)0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_100fbb908;
    lVar1 = 0x13f;
    FUN_1001a1320(0x13f,&DAT_100fbb908,FUN_1002abbf0);
    if (puVar3 < (undefined *)0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      PVar2 = StoreKit::Product::typeMetadataAccessor();
      if (puVar3 < (undefined *)0x40) {
        local_28 = *(long *)(PVar2.unknown + -8) + 0x40;
        _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
      }
    }
  }
  return;
}



/* Address: 0x1002aceb4 | FUN_1002aceb4 */

undefined1  [16] FUN_1002aceb4(void)

{
  return ZEXT816(0x100ec6738);
}



/* Address: 0x1002acec4 | FUN_1002acec4 */

long * FUN_1002acec4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  DateComponents DVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar3 == 2) {
      lVar5 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar5;
      _swift_bridgeObjectRetain();
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar2 = *(int *)(puVar6 + 0x30);
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      pcVar9 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x10);
      (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar4.unknown);
      (*pcVar9)((long)param_1 + (long)*(int *)(puVar6 + 0x40),
                (long)param_2 + (long)*(int *)(puVar6 + 0x40),DVar4.unknown);
      uVar7 = 2;
    }
    else if ((int)plVar3 == 1) {
      lVar5 = param_2[1];
      *param_1 = *param_2;
      param_1[1] = lVar5;
      _swift_bridgeObjectRetain();
      puVar6 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar2 = *(int *)(puVar6 + 0x30);
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      pcVar9 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x10);
      (*pcVar9)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar4.unknown);
      (*pcVar9)((long)param_1 + (long)*(int *)(puVar6 + 0x40),
                (long)param_2 + (long)*(int *)(puVar6 + 0x40),DVar4.unknown);
      uVar7 = 1;
    }
    else {
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar4.unknown + -8) + 0x10))(param_1,param_2,DVar4.unknown);
      uVar7 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar8 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002ad05c | FUN_1002ad05c */

void FUN_1002ad05c(long param_1)

{
  int iVar1;
  long lVar2;
  DateComponents DVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)lVar2;
  if ((iVar1 == 2) || (iVar1 == 1)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    puVar4 = &DAT_100fb8db0;
    FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
    iVar1 = *(int *)(puVar4 + 0x30);
    DVar3 = Foundation::DateComponents::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(DVar3.unknown + -8) + 8);
    (*UNRECOVERED_JUMPTABLE)(param_1 + iVar1,DVar3.unknown);
    param_1 = param_1 + *(int *)(puVar4 + 0x40);
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    DVar3 = Foundation::DateComponents::typeMetadataAccessor();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(DVar3.unknown + -8) + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002ad114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,DVar3.unknown);
  return;
}



/* Address: 0x1002ad12c | FUN_1002ad12c */

undefined8 * FUN_1002ad12c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  DateComponents DVar5;
  code *pcVar6;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if (((int)puVar3 == 2) || ((int)puVar3 == 1)) {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain();
    puVar4 = &DAT_100fb8db0;
    FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
    iVar2 = *(int *)(puVar4 + 0x30);
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    pcVar6 = *(code **)(*(long *)(DVar5.unknown + -8) + 0x10);
    (*pcVar6)((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar5.unknown);
    (*pcVar6)((long)param_1 + (long)*(int *)(puVar4 + 0x40),
              (long)param_2 + (long)*(int *)(puVar4 + 0x40),DVar5.unknown);
  }
  else {
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar5.unknown + -8) + 0x10))(param_1,param_2,DVar5.unknown);
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar3);
  return param_1;
}



/* Address: 0x1002ad220 | FUN_1002ad220 */

undefined8 * FUN_1002ad220(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  DateComponents DVar4;
  code *pcVar5;
  
  if (param_1 != param_2) {
    FUN_1002ac644(param_1);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if (((int)puVar2 == 2) || ((int)puVar2 == 1)) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      puVar3 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar1 = *(int *)(puVar3 + 0x30);
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      pcVar5 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x10);
      (*pcVar5)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
      (*pcVar5)((long)param_1 + (long)*(int *)(puVar3 + 0x40),
                (long)param_2 + (long)*(int *)(puVar3 + 0x40),DVar4.unknown);
    }
    else {
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar4.unknown + -8) + 0x10))(param_1,param_2,DVar4.unknown);
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  }
  return param_1;
}



/* Address: 0x1002ad32c | FUN_1002ad32c */

undefined8 * FUN_1002ad32c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  DateComponents DVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if (((int)puVar2 == 2) || ((int)puVar2 == 1)) {
    uVar6 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    puVar3 = &DAT_100fb8db0;
    FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
    iVar1 = *(int *)(puVar3 + 0x30);
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    pcVar5 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x20);
    (*pcVar5)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
    (*pcVar5)((long)param_1 + (long)*(int *)(puVar3 + 0x40),
              (long)param_2 + (long)*(int *)(puVar3 + 0x40),DVar4.unknown);
  }
  else {
    DVar4 = Foundation::DateComponents::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar4.unknown + -8) + 0x20))(param_1,param_2,DVar4.unknown);
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1002ad41c | FUN_1002ad41c */

undefined8 * FUN_1002ad41c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  DateComponents DVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_1002ac644(param_1);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if (((int)puVar2 == 2) || ((int)puVar2 == 1)) {
      uVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      puVar3 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar1 = *(int *)(puVar3 + 0x30);
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      pcVar5 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x20);
      (*pcVar5)((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
      (*pcVar5)((long)param_1 + (long)*(int *)(puVar3 + 0x40),
                (long)param_2 + (long)*(int *)(puVar3 + 0x40),DVar4.unknown);
    }
    else {
      DVar4 = Foundation::DateComponents::typeMetadataAccessor();
      (**(code **)(*(long *)(DVar4.unknown + -8) + 0x20))(param_1,param_2,DVar4.unknown);
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  }
  return param_1;
}



/* Address: 0x1002ad51c | FUN_1002ad51c */

undefined1  [16] FUN_1002ad51c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  DateComponents DVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  long local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  DVar2 = Foundation::DateComponents::typeMetadataAccessor();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(DVar2.unknown + -8) + 0x40;
    local_48 = lVar1;
    _swift_getTupleTypeLayout3(auStack_68,&DAT_100c3c508,lVar1,lVar1);
    local_40 = auStack_68;
    _swift_getTupleTypeLayout3(auStack_88,&DAT_100c3c508,lVar1,lVar1);
    local_38 = auStack_88;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&local_48);
    DVar2.unknown = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = DVar2.unknown;
  return auVar4;
}



/* Address: 0x1002ad5c8 | FUN_1002ad5c8 */

undefined8 FUN_1002ad5c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abbf0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002ad60c | FUN_1002ad60c */

int FUN_1002ad60c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfb < param_2) {
    param_2 = param_2 + 4;
    uVar3 = 2;
    if (0xfffeff < param_2) {
      uVar3 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar3 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar3;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar3 = (uint)param_1[1], param_1[1] != 0)) goto LAB_1002ad674;
    }
    else if (uVar1 == 2) {
      uVar3 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_1002ad674:
        return ((uint)*param_1 | uVar3 << 8) - 4;
      }
    }
    else {
      uVar3 = *(uint *)(param_1 + 1);
      if (uVar3 != 0) goto LAB_1002ad674;
    }
  }
  uVar3 = 0;
  if (1 < *param_1) {
    uVar3 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
  }
  iVar2 = 0;
  if (2 < uVar3) {
    iVar2 = uVar3 - 3;
  }
  return iVar2;
}



/* Address: 0x1002ad6b0 | FUN_1002ad6b0 */

void FUN_1002ad6b0(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_3 + 4;
  uVar4 = 2;
  if (0xfffeff < uVar1) {
    uVar4 = 4;
  }
  if (uVar1 >> 8 < 0xff) {
    uVar4 = 1;
  }
  uVar3 = 0;
  if (0xff < uVar1) {
    uVar3 = uVar4;
  }
  uVar1 = 0;
  if (0xfb < param_3) {
    uVar1 = uVar3;
  }
  if (param_2 < 0xfc) {
    if (uVar1 < 2) {
      if (uVar1 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1002ad738;
      }
    }
    else if (uVar1 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1002ad738:
      *param_1 = (char)param_2 + '\x04';
      return;
    }
  }
  else {
    iVar2 = (param_2 - 0xfc >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfc);
    if (1 < uVar1) {
      if (uVar1 != 2) {
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar2;
      return;
    }
    if (uVar1 != 0) {
      param_1[1] = (char)iVar2;
      return;
    }
  }
  return;
}



/* Address: 0x1002ad768 | FUN_1002ad768 */

int FUN_1002ad768(byte *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *param_1) {
    iVar1 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
  }
  return iVar1;
}



/* Address: 0x1002ad784 | FUN_1002ad784 */

void FUN_1002ad784(char *param_1,uint param_2)

{
  if ((0xfe < param_2) || (param_2 != 0)) {
    *param_1 = (char)param_2 + '\x01';
  }
  return;
}


