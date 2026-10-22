/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bc0158 | _TtC6Sentry20SentryEnvelopeHeader::initWithId:sdkInfo: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::initWithId_sdkInfo_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  Dictionary<undefined,undefined> DVar1;
  
  if (param_4 == 0) {
    DVar1.unknown = (undefined *)0x0;
  }
  else {
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bbffe8(param_3,DVar1.unknown);
  return param_3;
}



/* Address: 0x100bc01cc | FUN_100bc01cc */

void FUN_100bc01cc(void)

{
  FUN_100b69e08();
  FUN_100bbfd8c(0,0);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc01f4 | _TtC6Sentry20SentryEnvelopeHeader::empty */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::empty(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  FUN_100bc01cc();
  return param_1;
}



/* Address: 0x100bc0218 | _TtC6Sentry20SentryEnvelopeHeader::eventId */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::eventId(ID param_1,SEL param_2)

{
  FUN_100bc0238();
  return param_1;
}



/* Address: 0x100bc0238 | FUN_100bc0238 */

void FUN_100bc0238(void)

{
  FUN_100bc06d4(_TtC6Sentry20SentryEnvelopeHeader::eventId);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc025c | _TtC6Sentry20SentryEnvelopeHeader::traceContext */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::traceContext(ID param_1,SEL param_2)

{
  FUN_100bc027c();
  return param_1;
}



/* Address: 0x100bc027c | FUN_100bc027c */

void FUN_100bc027c(void)

{
  FUN_100bc06d4(_TtC6Sentry20SentryEnvelopeHeader::traceContext);
  FUN_100b56e88();
  return;
}



/* Address: 0x100bc02a0 | _TtC6Sentry20SentryEnvelopeHeader::sentAt */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::sentAt(ID param_1,SEL param_2)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  undefined1 *puVar4;
  NSDate *pNVar5;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100bc0344(puVar4);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  DVar3.unknown = puVar4;
  FUN_1000c9ff0(puVar4,1,DVar2.unknown);
  pNVar5 = (NSDate *)0x0;
  if ((int)DVar3.unknown != 1) {
    pNVar5 = Foundation::Date::_bridgeToObjectiveC(DVar3);
    (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(puVar4,DVar2.unknown);
  }
  return (ID)pNVar5;
}



/* Address: 0x100bc0344 | FUN_100bc0344 */

void FUN_100bc0344(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry20SentryEnvelopeHeader::sentAt;
  FUN_100bc0628(unaff_x20 + _TtC6Sentry20SentryEnvelopeHeader::sentAt);
  FUN_1000057b8(unaff_x20 + lVar1,param_1);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bc0380 | _TtC6Sentry20SentryEnvelopeHeader::setSentAt: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry20SentryEnvelopeHeader::setSentAt_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Date DVar2;
  long lVar3;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  lVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  if (param_3 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC((Date)param_3);
    DVar2 = Foundation::Date::typeMetadataAccessor();
  }
  FUN_1000c9ffc(&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_3 == 0,1,
                DVar2.unknown);
  FUN_100bc0434(&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  return;
}



/* Address: 0x100bc0434 | FUN_100bc0434 */

void FUN_100bc0434(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC6Sentry20SentryEnvelopeHeader::sentAt;
  FUN_100bad8a8(unaff_x20 + _TtC6Sentry20SentryEnvelopeHeader::sentAt,auStack_48);
  FUN_100005874(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bc047c | FUN_100bc047c */

undefined1  [16] FUN_100bc047c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC6Sentry20SentryEnvelopeHeader::sentAt;
  FUN_100bad8a8(unaff_x20 + _TtC6Sentry20SentryEnvelopeHeader::sentAt,param_1);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x100bc04b4 | FUN_100bc04b4 */

void FUN_100bc04b4(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryEnvelopeHeader",0x1b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc04e0);
  (*pcVar1)();
}



/* Address: 0x100bc04e0 | _TtC6Sentry20SentryEnvelopeHeader::init */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry20SentryEnvelopeHeader::init(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  ID IVar2;
  
  FUN_100bc04b4();
  puVar1 = (undefined8 *)(param_1 + sdkInfo);
  FUN_100b6d5bc(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],
                *(undefined1 *)(puVar1 + 7));
  IVar2 = param_1 + sentAt;
  FUN_10004e7d4();
  return IVar2;
}



/* Address: 0x100bc04ec | _TtC6Sentry20SentryEnvelopeHeader::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry20SentryEnvelopeHeader::_cxx_destruct(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + sdkInfo);
  FUN_100b6d5bc(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],
                *(undefined1 *)(puVar1 + 7));
  FUN_10004e7d4(param_1 + sentAt);
  return;
}



/* Address: 0x100bc0558 | FUN_100bc0558 */

void FUN_100bc0558(void)

{
  FUN_100bc0560(0);
  return;
}



/* Address: 0x100bc0560 | FUN_100bc0560 */

void FUN_100bc0560(undefined8 param_1)

{
  if (DAT_101047478 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccf958);
  return;
}



/* Address: 0x100bc0598 | FUN_100bc0598 */

void FUN_100bc0598(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_40 = &DAT_100c9d198;
  puStack_38 = &DAT_100c9d1b0;
  local_30 = &DAT_100c9d198;
  lVar1 = 0x13f;
  FUN_100005714();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100bc061c | FUN_100bc061c */

void FUN_100bc061c(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf958);
  return;
}



/* Address: 0x100bc0628 | FUN_100bc0628 */

void FUN_100bc0628(undefined8 param_1)

{
  _swift_beginAccess(param_1,&stack0x00000008,0,0);
  return;
}



/* Address: 0x100bc0638 | FUN_100bc0638 */

void FUN_100bc0638(void)

{
  return;
}



/* Address: 0x100bc0664 | FUN_100bc0664 */

void FUN_100bc0664(void)

{
  return;
}



/* Address: 0x100bc067c | FUN_100bc067c */

void FUN_100bc067c(void)

{
  _swift_deallocPartialClassInstance();
  return;
}



/* Address: 0x100bc0690 | FUN_100bc0690 */

void FUN_100bc0690(void)

{
  FUN_100be85d8(&stack0x00000020);
  return;
}



/* Address: 0x100bc06a4 | FUN_100bc06a4 */

void FUN_100bc06a4(void)

{
  FUN_100be3f64();
  return;
}



/* Address: 0x100bc06b4 | FUN_100bc06b4 */

void FUN_100bc06b4(void)

{
  _swift_getObjectType();
  return;
}



/* Address: 0x100bc06c4 | FUN_100bc06c4 */

void FUN_100bc06c4(undefined8 param_1)

{
  FUN_100be85d8(&stack0x00000020,param_1,0);
  return;
}



/* Address: 0x100bc06d4 | FUN_100bc06d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bc06d4(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + param_1);
}



/* Address: 0x100bc06e0 | FUN_100bc06e0 */

void FUN_100bc06e0(void)

{
  FUN_100be44a0(0);
  return;
}



/* Address: 0x100bc06ec | FUN_100bc06ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100bc06ec(void)

{
  return;
}



/* Address: 0x100bc06f8 | FUN_100bc06f8 */

void FUN_100bc06f8(void)

{
  _swift_dynamicCastClass();
  return;
}



/* Address: 0x100bc0704 | FUN_100bc0704 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bc0704(void)

{
  return 0;
}



/* Address: 0x100bc0710 | FUN_100bc0710 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc0710(void)

{
  code *pcVar1;
  Date DVar2;
  undefined *puVar3;
  ID self;
  NSDate *pNVar4;
  ID IVar5;
  undefined **ppuVar6;
  uint uVar7;
  uint uVar8;
  long extraout_x8;
  long extraout_x9;
  long lVar9;
  long lVar10;
  String SVar11;
  ID local_80;
  undefined **ppuStack_78;
  String local_70;
  
  puVar3 = &DAT_101046ca8;
  FUN_100b6730c();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  FUN_100b6f9e0(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = extraout_x9 - extraout_x8;
  puVar3 = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self = _objc_msgSend((ID)puVar3,"init");
  _objc_msgSend(self,"setDateStyle:",0);
  _objc_msgSend(self,"setTimeStyle:",1);
  DVar2 = Foundation::Date::init();
  pNVar4 = Foundation::Date::_bridgeToObjectiveC(DVar2);
  FUN_100bc0c40(*(undefined8 *)(lVar10 + 8),lVar9);
  _objc_msgSend(self,"stringFromDate:",pNVar4);
  uVar7 = (uint)pNVar4;
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  ppuVar6 = &PTR_s_AMSymbol_100f85e18;
  IVar5 = self;
  local_70 = SVar11;
  FUN_100bc0b8c();
  if (ppuVar6 == (undefined **)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc08ec);
    (*pcVar1)();
  }
  local_80 = IVar5;
  ppuStack_78 = ppuVar6;
  FUN_100bc0c48();
  FUN_100bc0c24();
  FUN_100008378();
  *(ID *)(lVar9 + -0x10) = IVar5;
  *(ID *)(lVar9 + -8) = IVar5;
  FUN_100bc0c08(&local_80);
  uVar8 = uVar7;
  FUN_100bc0c38();
  _swift_bridgeObjectRelease(ppuVar6);
  ppuVar6 = &PTR_s_PMSymbol_100f85e20;
  local_70 = SVar11;
  FUN_100bc0b8c();
  if (ppuVar6 != (undefined **)0x0) {
    local_80 = self;
    ppuStack_78 = ppuVar6;
    FUN_100bc0c24();
    *(ID *)(lVar9 + -0x10) = IVar5;
    *(ID *)(lVar9 + -8) = IVar5;
    FUN_100bc0c08(&local_80);
    FUN_100b6f934();
    FUN_100bc0c38();
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    _swift_bridgeObjectRelease(ppuVar6);
    FUN_100b56ea0(uVar7 & uVar8 & 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bc08f0);
  (*pcVar1)();
}



/* Address: 0x100bc08f0 | _TtC6Sentry12SentryLocale::timeIs24HourFormat */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry12SentryLocale::timeIs24HourFormat(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bc0710();
  return uVar1 & 1;
}



/* Address: 0x100bc0908 | FUN_100bc0908 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bc0908(void)

{
  bool bVar1;
  byte bVar2;
  undefined7 extraout_var;
  Locale LVar4;
  LanguageCode LVar5;
  LanguageCode LVar6;
  NSString *pNVar7;
  ID IVar8;
  void *pvVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x9;
  long extraout_x9_00;
  long extraout_x9_01;
  long extraout_x9_02;
  undefined *puVar10;
  Language LVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined *puVar3;
  
  pvVar9 = (void *)0x0;
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xd,0,0);
  puVar3 = (undefined *)CONCAT71(extraout_var,bVar2);
  if ((bVar2 & 1) == 0) {
    FUN_100bc0c48();
    lVar12 = *(long *)(puVar3 + -8);
    LVar4.unknown = puVar3;
    FUN_100b6f9e0(*(undefined8 *)(lVar12 + 0x40));
    LVar4 = Foundation::Locale::get_current(LVar4);
    Foundation::Locale::_get_languageCode(LVar4);
    (**(code **)(lVar12 + 8))(extraout_x9_02 - extraout_x8_02,puVar3);
    if (pvVar9 != (void *)0x0) goto LAB_100bc0a9c;
  }
  else {
    puVar3 = &DAT_101047488;
    FUN_100b6730c();
    FUN_100b6f9e0(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
    puVar10 = (undefined *)(extraout_x9 - extraout_x8);
    FUN_100bc0c48();
    lVar12 = *(long *)(puVar3 + -8);
    LVar4.unknown = puVar3;
    FUN_100b6f9e0(*(undefined8 *)(lVar12 + 0x40));
    LVar11.unknown = (undefined *)(extraout_x9_00 - extraout_x8_00);
    Foundation::Locale::get_current(LVar4);
    LVar4.unknown = (undefined *)Foundation::Locale::Language::typeMetadataAccessor();
    lVar13 = *(long *)(LVar4.unknown + -8);
    FUN_100b6f9e0(*(undefined8 *)(lVar13 + 0x40));
    Foundation::Locale::get_language(LVar4);
    (**(code **)(lVar12 + 8))(LVar11.unknown,puVar3);
    Foundation::Locale::Language::_get_languageCode(LVar11);
    FUN_100bc0c40(*(undefined8 *)(lVar13 + 8),extraout_x9_01 - extraout_x8_01);
    LVar5 = Foundation::Locale::LanguageCode::typeMetadataAccessor();
    LVar6.unknown = puVar10;
    FUN_1000c9ff0(puVar10,1,LVar5.unknown);
    if ((int)LVar6.unknown != 1) {
      SVar14 = Foundation::Locale::LanguageCode::get_identifier(LVar6);
      pvVar9 = SVar14.bridgeObject;
      FUN_100bc0c40(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 8),puVar10);
LAB_100bc0a9c:
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pvVar9);
      IVar8 = _objc_msgSend((ID)&_OBJC_CLASS___NSLocale,"characterDirectionForLanguage:",pNVar7);
      FUN_100b6f934();
      bVar1 = IVar8 == 2;
      goto LAB_100bc0ae8;
    }
    FUN_100bc0c38();
  }
  bVar1 = false;
LAB_100bc0ae8:
  FUN_100b56ea0(bVar1);
  return;
}



/* Address: 0x100bc0af4 | _TtC6Sentry12SentryLocale::isRightToLeftLanguage */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry12SentryLocale::isRightToLeftLanguage(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100bc0908();
  return uVar1 & 1;
}



/* Address: 0x100bc0b0c | FUN_100bc0b0c */

void FUN_100bc0b0c(void)

{
  FUN_100bc0be8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x100bc0b3c | _TtC6Sentry12SentryLocale::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentryLocale::init(ID param_1,SEL param_2)

{
  FUN_100bc0b0c();
  return param_1;
}



/* Address: 0x100bc0b5c | FUN_100bc0b5c */

void FUN_100bc0b5c(void)

{
  FUN_100bc0be8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bc0b8c | FUN_100bc0b8c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_100bc0b8c(ID param_1,undefined8 *param_2)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = _objc_msgSend(param_1,(SEL)*param_2);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f934();
  }
  return SVar2;
}



/* Address: 0x100bc0be8 | FUN_100bc0be8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc0be8(void)

{
  return ZEXT816(0x100fa3b78);
}



/* Address: 0x100bc0c08 | FUN_100bc0c08 */

void FUN_100bc0c08(undefined8 param_1)

{
  (extension_Foundation)::Swift::StringProtocol::_range(param_1,0,0,0,1);
  return;
}



/* Address: 0x100bc0c24 | FUN_100bc0c24 */

void FUN_100bc0c24(void)

{
  FUN_1000c9ffc();
  return;
}



/* Address: 0x100bc0c38 | FUN_100bc0c38 */

void FUN_100bc0c38(void)

{
  FUN_100b74780();
  return;
}



/* Address: 0x100bc0c40 | FUN_100bc0c40 */

void FUN_100bc0c40(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x000100bc0c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100bc0c48 | FUN_100bc0c48 */

void FUN_100bc0c48(void)

{
  Foundation::Locale::typeMetadataAccessor();
  return;
}



/* Address: 0x100bc0c50 | FUN_100bc0c50 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bc0c50(void)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  
  lVar1 = 0;
  FUN_100b78b14();
  FUN_100b75404();
  self = *(ID *)(lVar1 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  _objc_msgSend(self,"lock");
  uVar2 = *(undefined8 *)(lVar1 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  _objc_msgSend(self,"unlock");
  FUN_100b6f934();
  FUN_100b6f934();
  FUN_100bc1048();
  _objc_allocWithZone();
  FUN_100bc0d2c(uVar2);
  _swift_getObjectType();
  _swift_deallocPartialClassInstance();
  return uVar2;
}



/* Address: 0x100bc0d0c | _TtC6Sentry21SentryThreadInspector::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryThreadInspector::init(ID param_1,SEL param_2)

{
  FUN_100bc0c50();
  return param_1;
}



/* Address: 0x100bc0d2c | FUN_100bc0d2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bc0d2c(undefined8 param_1)

{
  class_t *self;
  ID IVar1;
  long unaff_x20;
  
  self = &objc::class_t::SentryDefaultThreadInspector;
  _objc_allocWithZone();
  IVar1 = _objc_msgSend((ID)self,"initWithOptions:",param_1);
  *(ID *)(unaff_x20 + _TtC6Sentry21SentryThreadInspector::internalHelper) = IVar1;
  FUN_100bc1048();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"init");
  FUN_100bad7d4();
  return;
}



/* Address: 0x100bc0dbc | FUN_100bc0dbc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bc0dbc(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry21SentryThreadInspector::internalHelper),
                        "stacktraceForCurrentThreadAsyncUnsafe");
  return IVar1;
}



/* Address: 0x100bc0de8 | _TtC6Sentry21SentryThreadInspector::stacktraceForCurrentThreadAsyncUnsafe */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryThreadInspector::stacktraceForCurrentThreadAsyncUnsafe(ID param_1,SEL param_2)

{
  FUN_100bc0dbc();
  return param_1;
}



/* Address: 0x100bc0e1c | FUN_100bc0e1c */

void FUN_100bc0e1c(void)

{
  FUN_100bc0e7c(&PTR_s_getCurrentThreadsWithStackTrace_100f87750);
  return;
}



/* Address: 0x100bc0e28 | FUN_100bc0e28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100bc0e28(void)

{
  class_t *pcVar1;
  
  if (DAT_101044928 == (class_t *)0x0) {
    pcVar1 = &objc::class_t::SentryThread;
    _swift_getObjCClassMetadata();
    DAT_101044928 = pcVar1;
  }
  return;
}



/* Address: 0x100bc0e64 | _TtC6Sentry21SentryThreadInspector::getCurrentThreadsWithStackTrace */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryThreadInspector::getCurrentThreadsWithStackTrace(ID param_1,SEL param_2)

{
  FUN_100bc0ee0(param_1,param_2,FUN_100bc0e1c);
  return param_1;
}



/* Address: 0x100bc0e70 | FUN_100bc0e70 */

void FUN_100bc0e70(void)

{
  FUN_100bc0e7c(&PTR_s_getCurrentThreads_100f87748);
  return;
}



/* Address: 0x100bc0e7c | FUN_100bc0e7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100bc0e7c(undefined8 *param_1)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry21SentryThreadInspector::internalHelper),
                (SEL)*param_1);
  FUN_100bc0e28(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100bad7d4();
  return;
}



/* Address: 0x100bc0ed4 | _TtC6Sentry21SentryThreadInspector::getCurrentThreads */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry21SentryThreadInspector::getCurrentThreads(ID param_1,SEL param_2)

{
  FUN_100bc0ee0(param_1,param_2,FUN_100bc0e70);
  return param_1;
}



/* Address: 0x100bc0ee0 | FUN_100bc0ee0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSArray * FUN_100bc0ee0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  NSArray *pNVar1;
  
  (*param_3)(param_1);
  FUN_100bc0e28(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  return pNVar1;
}



/* Address: 0x100bc0f38 | FUN_100bc0f38 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

String FUN_100bc0f38(undefined8 param_1)

{
  ID IVar1;
  long unaff_x20;
  String SVar2;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry21SentryThreadInspector::internalHelper),
                        "getThreadName:",param_1);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    FUN_100b6f934();
  }
  return SVar2;
}



/* Address: 0x100bc0fa8 | _TtC6Sentry21SentryThreadInspector::getThreadName: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry21SentryThreadInspector::getThreadName_
             (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  NSString *pNVar1;
  
  FUN_100bc0f38(param_3);
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bc1018 | FUN_100bc1018 */

void FUN_100bc1018(void)

{
  FUN_100bc1048();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bc1048 | FUN_100bc1048 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bc1048(void)

{
  return ZEXT816(0x100fa3c28);
}



/* Address: 0x100bc1068 | _TtC6Sentry21SentryThreadInspector::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry21SentryThreadInspector::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bc1078 | FUN_100bc1078 */

void FUN_100bc1078(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100ccf9cc);
  return;
}


