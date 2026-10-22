/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100be0b48 | FUN_100be0b48 */

String FUN_100be0b48(void)

{
  String SVar1;
  
  switchD_100be0a0c::caseD_22();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100be0b70 | FUN_100be0b70 */

void FUN_100be0b70(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100be0408();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100be0b98 | switchD_100be0a0c::caseD_22 */

void switchD_100be0a0c::caseD_22(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048230 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ed9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ed9c,&DAT_100f3c710);
  DAT_101048230 = pTVar1;
  return;
}



/* Address: 0x100be0bd8 | switchD_100be0a0c::caseD_14 */

void switchD_100be0a0c::caseD_14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_101048238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_101048228;
  FUN_100b6734c(&DAT_101048228);
  puVar2 = 
  PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
  ;
  _swift_getWitnessTable
            (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
             ,puVar1);
  DAT_101048238 = puVar2;
  return;
}



/* Address: 0x100be0c20 | switchD_100be0a0c::caseD_2c */

void switchD_100be0a0c::caseD_2c(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_101045248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100bc4e30(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c9d37c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d37c,uVar1);
  DAT_101045248 = pTVar2;
  return;
}



/* Address: 0x100be0c64 | FUN_100be0c64 */

void FUN_100be0c64(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar2 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfa < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xfb) {
                    /* WARNING: Could not recover jumptable at 0x000100be0cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(&BYTE_100c9ec5b)[uVar1] * 4 + 0x100be0cb0))();
    return;
  }
  *param_1 = (char)param_2 + '\x05';
                    /* WARNING: Could not recover jumptable at 0x000100be0ce0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100be0ce4 + (ulong)(&BYTE_100c9ec56)[uVar1] * 4))();
  return;
}



/* Address: 0x100be0d20 | FUN_100be0d20 */

undefined1  [16] FUN_100be0d20(void)

{
  return ZEXT816(0x100f3c710);
}



/* Address: 0x100be0d30 | thunk_FUN_100be0d34 */

void thunk_FUN_100be0d34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ed74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ed74,&DAT_100f3c710);
  DAT_101048240 = pTVar1;
  return;
}



/* Address: 0x100be0d34 | FUN_100be0d34 */

void FUN_100be0d34(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101048240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ed74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ed74,&DAT_100f3c710);
  DAT_101048240 = pTVar1;
  return;
}



/* Address: 0x100be0d74 | switchD_100be0a0c::caseD_29 */

void switchD_100be0a0c::caseD_29(void)

{
  undefined *puVar1;
  
  if (DAT_101048248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9ecd4;
  _swift_getWitnessTable(&DAT_100c9ecd4,&DAT_100f3c710);
  DAT_101048248 = puVar1;
  return;
}



/* Address: 0x100be0d78 | switchD_100be0a0c::caseD_29 */

void switchD_100be0a0c::caseD_29(void)

{
  undefined *puVar1;
  
  if (DAT_101048248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9ecd4;
  _swift_getWitnessTable(&DAT_100c9ecd4,&DAT_100f3c710);
  DAT_101048248 = puVar1;
  return;
}



/* Address: 0x100be0db8 | switchD_100be0a0c::caseD_4d */

void switchD_100be0a0c::caseD_4d(void)

{
  undefined *puVar1;
  
  if (DAT_101048250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9ecac;
  _swift_getWitnessTable(&DAT_100c9ecac,&DAT_100f3c710);
  DAT_101048250 = puVar1;
  return;
}



/* Address: 0x100be0dbc | switchD_100be0a0c::caseD_4d */

void switchD_100be0a0c::caseD_4d(void)

{
  undefined *puVar1;
  
  if (DAT_101048250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c9ecac;
  _swift_getWitnessTable(&DAT_100c9ecac,&DAT_100f3c710);
  DAT_101048250 = puVar1;
  return;
}



/* Address: 0x100be0dfc | thunk_FUN_100be09e8 */

void thunk_FUN_100be09e8(void)

{
  FUN_100be09e8();
  return;
}



/* Address: 0x100be0e00 | switchD_100be0a0c::caseD_e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
switchD_100be0a0c::caseD_e8(char param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 auVar2 [16];
  String SVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  if (param_1 == '\0') {
    Swift::_StringGuts::grow(0x10,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = 0x737465673a6d7073;
    local_38 = 0xee002f7972746e65;
    SentryMeta::sdkName((ID)&objc::class_t::SentryMeta,"sdkName");
  }
  else {
    if (param_1 != '\x01') {
      local_40 = 0;
      local_38 = 0;
      goto LAB_100be0f1c;
    }
    Swift::_StringGuts::grow(0x16,param_2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = 0xd000000000000014;
    local_38 = 0x8000000100dd17a0;
    SentryMeta::sdkName((ID)&objc::class_t::SentryMeta,"sdkName");
  }
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
LAB_100be0f1c:
  auVar2._8_8_ = local_38;
  auVar2._0_8_ = local_40;
  return auVar2;
}



/* Address: 0x100be0f30 | FUN_100be0f30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100be100c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100be0f30(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  Dictionary<undefined,undefined> DVar2;
  String SVar3;
  
  if (((uint)param_1 & 0xff) == 2) {
    return (undefined *)0x0;
  }
  switchD_100be0a0c::caseD_e8();
  if (param_2 == 0) {
    DVar2.unknown = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_101044b18;
    FUN_100b6730c();
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 4;
    *(undefined8 *)(puVar1 + 0x10) = 2;
    *(undefined8 *)(puVar1 + 0x20) = 0x656d616e;
    *(undefined1 **)(puVar1 + 0x28) = &DAT_e400000000000000;
    *(undefined8 *)(puVar1 + 0x30) = param_1;
    *(long *)(puVar1 + 0x38) = param_2;
    *(undefined8 *)(puVar1 + 0x40) = 0x6e6f6973726576;
    *(undefined1 **)(puVar1 + 0x48) = &DAT_e700000000000000;
    _objc_msgSend((ID)&objc::class_t::SentryMeta,"versionString");
    SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    *(String *)(puVar1 + 0x50) = SVar3;
    DVar2 = Swift::Dictionary::_init
                      (puVar1,PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                      );
  }
  return DVar2.unknown;
}



/* Address: 0x100be102c | _TtC6Sentry16SentrySdkPackage::global */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentrySdkPackage::global(ID param_1,SEL param_2)

{
  NSDictionary *pNVar1;
  
  FUN_100002c1c();
  if (param_1 == 0) {
    pNVar1 = (NSDictionary *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_1);
  }
  return (ID)pNVar1;
}



/* Address: 0x100be1080 | _TtC6Sentry16SentrySdkPackage::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry16SentrySdkPackage::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be10a0 | FUN_100be10a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be10a0(void)

{
  return ZEXT816(0x100fa5110);
}



/* Address: 0x100be10c0 | FUN_100be10c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100be10c0(undefined8 param_1)

{
  NSString *pNVar1;
  Date DVar2;
  Date DVar3;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + SentryHttpDateParser::dateFormatter);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  DVar2.unknown = (undefined *)_objc_msgSend(self,"dateFromString:",pNVar1);
  if (DVar2.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar2);
  }
  DVar3 = Foundation::Date::typeMetadataAccessor();
  FUN_1000c9ffc(param_1,DVar2.unknown == (undefined *)0x0,1,DVar3.unknown);
  return;
}



/* Address: 0x100be115c | FUN_100be115c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100be115c(void)

{
  long lVar1;
  undefined *puVar2;
  ID IVar3;
  TimeZone TVar4;
  TimeZone TVar5;
  long unaff_x20;
  undefined1 *puVar6;
  NSTimeZone *pNVar7;
  
  _swift_getObjectType();
  puVar2 = &DAT_101048288;
  FUN_100b6730c();
  puVar6 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)puVar2,"init");
  lVar1 = SentryHttpDateParser::dateFormatter;
  *(ID *)(unaff_x20 + SentryHttpDateParser::dateFormatter) = IVar3;
  FUN_100be13d4(0xd000000000000027,0x8000000100dd17c0,IVar3);
  IVar3 = *(ID *)(unaff_x20 + lVar1);
  Foundation::TimeZone::_init();
  TVar4 = Foundation::TimeZone::typeMetadataAccessor();
  TVar5.unknown = puVar6;
  FUN_1000c9ff0(puVar6,1,TVar4.unknown);
  pNVar7 = (NSTimeZone *)0x0;
  if ((int)TVar5.unknown != 1) {
    pNVar7 = Foundation::TimeZone::_bridgeToObjectiveC(TVar5);
    (**(code **)(*(long *)(TVar4.unknown + -8) + 8))(puVar6,TVar4.unknown);
  }
  _objc_msgSend(IVar3,"setTimeZone:",pNVar7);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"init");
  return;
}



/* Address: 0x100be12c4 | SentryHttpDateParser::init */

/* Function Stack Size: 0x10 bytes */

ID SentryHttpDateParser::init(ID param_1,SEL param_2)

{
  FUN_100be115c();
  return param_1;
}



/* Address: 0x100be12e4 | SentryHttpDateParser::dateFromString: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryHttpDateParser::dateFromString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Date DVar2;
  Date DVar3;
  undefined1 *puVar4;
  NSDate *pNVar5;
  String SVar6;
  
  puVar1 = &DAT_101044980;
  FUN_100b6730c();
  puVar4 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_100be10c0(puVar4,SVar6.str,SVar6.bridgeObject);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
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



/* Address: 0x100be13c4 | SentryHttpDateParser::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryHttpDateParser::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100be13d4 | FUN_100be13d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be13d4(undefined8 param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  _objc_msgSend(param_3,"setDateFormat:",pNVar1);
  return 0;
}



/* Address: 0x100be1424 | FUN_100be1424 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be1424(void)

{
  return ZEXT816(0x100fa51c0);
}



/* Address: 0x100be1444 | FUN_100be1444 */

undefined8 FUN_100be1444(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_101044958;
  FUN_100b6730c(&DAT_101044958);
  _swift_initStaticObject();
  FUN_100bb7554();
  _swift_bridgeObjectRetain();
  uVar2 = param_1;
  _swift_bridgeObjectRetain(param_1);
  FUN_100be155c();
  _swift_bridgeObjectRelease(puVar1);
  _swift_bridgeObjectRelease(param_1);
  return uVar2;
}



/* Address: 0x100be14c0 | _TtC6Sentry19HTTPHeaderSanitizer::sanitizeHeaders: */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry19HTTPHeaderSanitizer::sanitizeHeaders_(ID param_1,SEL param_2,ID param_3)

{
  Dictionary<undefined,undefined> DVar1;
  Dictionary<undefined,undefined> DVar2;
  NSDictionary *pNVar3;
  
  DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  DVar2 = DVar1;
  FUN_100be1444();
  _swift_bridgeObjectRelease(DVar1.unknown);
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(DVar2.unknown);
  return (ID)pNVar3;
}



/* Address: 0x100be153c | _TtC6Sentry19HTTPHeaderSanitizer::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry19HTTPHeaderSanitizer::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be155c | FUN_100be155c */

undefined1 * FUN_100be155c(undefined1 *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar4 = (1L << ((ulong)(byte)param_1[0x20] & 0x3f)) + 0x3fU >> 6;
  puVar5 = (undefined1 *)(uVar4 * 8);
  if ((param_1[0x20] & 0x3f) < 0xe) {
    _swift_bridgeObjectRetain_n(param_2,2);
LAB_100be1668:
    puVar2 = auStack_60 + -((ulong)(puVar5 + 0xf) & 0x3ffffffffffffff0);
    _bzero(puVar2,(size_t)puVar5);
    _swift_bridgeObjectRetain(param_2);
    FUN_100be1750(puVar2,uVar4,param_1,param_2);
    if (unaff_x21 != 0) {
      _swift_willThrow();
      _swift_bridgeObjectRelease_n(param_2,2);
LAB_100be16cc:
      _swift_bridgeObjectRelease(param_2);
      goto LAB_100be16f0;
    }
    _swift_bridgeObjectRelease_n(param_2,2);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_bridgeObjectRetain_n(param_2,2);
    if (((bVar1 & 1) != 0) &&
       (puVar2 = puVar5, _swift_stdlib_isStackAllocationSafe(puVar5,8), ((ulong)puVar2 & 1) != 0))
    goto LAB_100be1668;
    puVar3 = puVar5;
    _swift_slowAlloc(puVar5,0xffffffffffffffff);
    _bzero(puVar3,(size_t)puVar5);
    _swift_bridgeObjectRetain(param_2);
    puVar2 = puVar3;
    FUN_100be1750(puVar3,uVar4,param_1,param_2);
    _swift_slowDealloc(puVar3,0xffffffffffffffff,0xffffffffffffffff);
    _swift_bridgeObjectRelease_n(param_2,2);
    param_1 = puVar2;
    if (unaff_x21 != 0) goto LAB_100be16cc;
  }
  _swift_bridgeObjectRelease(param_2);
  param_1 = puVar2;
LAB_100be16f0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}



/* Address: 0x100be1730 | FUN_100be1730 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be1730(void)

{
  return ZEXT816(0x100fa5278);
}



/* Address: 0x100be1750 | FUN_100be1750 */

long FUN_100be1750(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  String *pSVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  String SVar14;
  long local_78;
  
  local_78 = 0;
  puVar9 = (ulong *)(param_3 + 0x40);
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((long)uVar8 < 0x40) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *puVar9;
  uVar8 = uVar8 + 0x3f >> 6;
  lVar11 = 0;
  do {
    if (uVar10 == 0) {
      lVar6 = lVar11 + 1;
      if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be1948);
        (*pcVar3)();
      }
      if ((long)uVar8 <= lVar6) {
LAB_100be1900:
        FUN_100be1b54(param_1,param_2,local_78,param_3);
        _swift_bridgeObjectRelease(param_4);
        return param_1;
      }
      uVar10 = puVar9[lVar6];
      if (uVar10 == 0) {
        lVar6 = lVar11 + 2;
        if ((long)uVar8 <= lVar6) goto LAB_100be1900;
        uVar10 = puVar9[lVar6];
        if (uVar10 == 0) {
          lVar6 = lVar11 + 3;
          if ((long)uVar8 <= lVar6) goto LAB_100be1900;
          uVar10 = puVar9[lVar6];
          if (uVar10 == 0) {
            do {
              lVar6 = lVar11;
              if ((long)uVar8 <= lVar6 + 4) goto LAB_100be1900;
              uVar10 = *(ulong *)(param_3 + 0x60 + lVar6 * 8);
              lVar11 = lVar6 + 1;
            } while (uVar10 == 0);
            lVar6 = lVar6 + 4;
          }
        }
      }
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar6 << 6;
    }
    else {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 - 1 & uVar10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar11 << 6;
      lVar6 = lVar11;
    }
    pSVar1 = (String *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
    pvVar2 = pSVar1->bridgeObject;
    uVar13 = *(undefined8 *)(*(long *)(param_3 + 0x38) + uVar12 * 0x10 + 8);
    SVar14 = Swift::String::uppercased(*pSVar1);
    pcVar5 = SVar14.str;
    _swift_bridgeObjectRetain(pvVar2);
    _swift_bridgeObjectRetain(uVar13);
    FUN_100052458(pcVar5,SVar14.bridgeObject,param_4);
    _swift_bridgeObjectRelease(pvVar2);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    lVar11 = lVar6;
    if (((ulong)pcVar5 & 1) == 0) {
      uVar7 = uVar12 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar7) = *(ulong *)(param_1 + uVar7) | 1L << (uVar12 & 0x3f);
      bVar4 = SCARRY8(local_78,1);
      local_78 = local_78 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100be1900);
        (*pcVar3)();
      }
    }
  } while( true );
}



/* Address: 0x100be1948 | FUN_100be1948 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100be1948(ulong *param_1,long param_2,Hasher param_3)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  ulong extraout_x9;
  long extraout_x9_00;
  long extraout_x10;
  ulong extraout_x10_00;
  undefined *unaff_x19;
  long unaff_x21;
  ulong uVar7;
  undefined8 uVar8;
  __uint64 _Var9;
  long lVar10;
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (param_3.unknown != (undefined *)0x0) {
    FUN_100be1e3c();
    if ((bool)in_ZR) {
      _swift_retain();
      puVar4 = unaff_x19;
    }
    else {
      puVar4 = &DAT_1010482e0;
      FUN_100b6730c();
      FUN_100be1de0();
      if (param_2 < 1) {
        uVar7 = 0;
      }
      else {
        uVar7 = *param_1;
      }
      lVar6 = 0;
      do {
        if (uVar7 == 0) {
          lVar10 = lVar6 + 1;
          if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100be1b50);
            (*pcVar2)();
          }
          if (param_2 <= lVar10) {
            return puVar4;
          }
          uVar7 = param_1[lVar10];
          if (uVar7 == 0) {
            lVar10 = lVar6 + 2;
            if (param_2 <= lVar10) {
              return puVar4;
            }
            uVar7 = param_1[lVar10];
            if (uVar7 == 0) {
              lVar10 = lVar6 + 3;
              if (param_2 <= lVar10) {
                return puVar4;
              }
              uVar7 = param_1[lVar10];
              while (uVar7 == 0) {
                bVar3 = SCARRY8(lVar10,1);
                lVar10 = lVar10 + 1;
                if (bVar3) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100be1b54);
                  (*pcVar2)();
                }
                if (param_2 <= lVar10) {
                  return puVar4;
                }
                uVar7 = param_1[lVar10];
              }
            }
          }
          uVar5 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 - 1 & uVar7;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar10 << 6;
        }
        else {
          uVar5 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar7 = uVar7 - 1 & uVar7;
          uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | lVar6 << 6;
          lVar10 = lVar6;
        }
        _Var9 = *(__uint64 *)(*(long *)(unaff_x19 + 0x30) + uVar5 * 8);
        uVar8 = *(undefined8 *)(*(long *)(unaff_x19 + 0x38) + uVar5 * 8);
        uVar5 = Swift::Hasher::_hash(*(__int64 *)(puVar4 + 0x28),_Var9,param_3);
        uVar5 = uVar5 & (-1L << ((ulong)(byte)puVar4[0x20] & 0x3f) ^ 0xffffffffffffffffU);
        if ((-1L << (uVar5 & 0x3f) &
            (*(ulong *)(puVar4 + (uVar5 >> 6) * 8 + 0x40) ^ 0xffffffffffffffff)) == 0) {
          FUN_100be1dec();
          lVar6 = extraout_x8;
          uVar5 = extraout_x9;
          do {
            lVar1 = lVar6 + 1;
            if ((lVar1 == extraout_x10) && ((uVar5 & 1) != 0)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100be1b48);
              (*pcVar2)();
            }
            lVar6 = 0;
            if (lVar1 != extraout_x10) {
              lVar6 = lVar1;
            }
            uVar5 = (ulong)((uint)(lVar1 == extraout_x10) | (uint)uVar5);
          } while (*(long *)(puVar4 + lVar6 * 8 + 0x40) == -1);
          FUN_100be1e28();
        }
        else {
          FUN_100be1e14();
        }
        FUN_100be1e00();
        *(ulong *)(puVar4 + extraout_x9_00 + 0x40) =
             extraout_x10_00 | *(ulong *)(puVar4 + extraout_x9_00 + 0x40);
        *(__uint64 *)(*(long *)(puVar4 + 0x30) + extraout_x8_00 * 8) = _Var9;
        *(undefined8 *)(*(long *)(puVar4 + 0x38) + extraout_x8_00 * 8) = uVar8;
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        bVar3 = SBORROW8(unaff_x21,1);
        unaff_x21 = unaff_x21 + -1;
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100be1b4c);
          (*pcVar2)();
        }
        lVar6 = lVar10;
      } while (unaff_x21 != 0);
    }
  }
  return puVar4;
}



/* Address: 0x100be1b54 | FUN_100be1b54 */

undefined * FUN_100be1b54(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  _DictionaryStorage *this;
  undefined *puVar10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_a8 [72];
  
  puVar10 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (param_3 != (undefined *)0x0) {
    if (*(undefined **)(param_4 + 0x10) == param_3) {
      _swift_retain(param_4);
      puVar10 = param_4;
    }
    else {
      this = (_DictionaryStorage *)&DAT_101044bb8;
      FUN_100b6730c();
      puVar10 = param_3;
      Swift::_DictionaryStorage::_allocate(this,(__int64)param_3);
      if (param_2 < 1) {
        uVar17 = 0;
      }
      else {
        uVar17 = *param_1;
      }
      lVar15 = 0;
      do {
        if (uVar17 == 0) {
          lVar16 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100be1ddc);
            (*pcVar8)();
          }
          if (param_2 <= lVar16) {
            return puVar10;
          }
          uVar17 = param_1[lVar16];
          if (uVar17 == 0) {
            lVar16 = lVar15 + 2;
            if (param_2 <= lVar16) {
              return puVar10;
            }
            uVar17 = param_1[lVar16];
            if (uVar17 == 0) {
              lVar16 = lVar15 + 3;
              if (param_2 <= lVar16) {
                return puVar10;
              }
              uVar17 = param_1[lVar16];
              while (uVar17 == 0) {
                bVar9 = SCARRY8(lVar16,1);
                lVar16 = lVar16 + 1;
                if (bVar9) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x100be1de0);
                  (*pcVar8)();
                }
                if (param_2 <= lVar16) {
                  return puVar10;
                }
                uVar17 = param_1[lVar16];
              }
            }
          }
          uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar17 - 1 & uVar17;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar16 << 6;
        }
        else {
          uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar17 = uVar17 - 1 & uVar17;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar15 << 6;
          lVar16 = lVar15;
        }
        pSVar1 = (String *)(*(long *)(param_4 + 0x30) + uVar12 * 0x10);
        pcVar3 = pSVar1->str;
        pvVar5 = pSVar1->bridgeObject;
        SVar7 = *pSVar1;
        puVar2 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar12 * 0x10);
        uVar4 = *puVar2;
        uVar6 = puVar2[1];
        Swift::Hasher::init(*(__int64 *)(puVar10 + 0x28));
        _swift_bridgeObjectRetain(pvVar5);
        _swift_bridgeObjectRetain(uVar6);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar7);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar14 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
        uVar11 = uVar11 & (uVar14 ^ 0xffffffffffffffff);
        uVar13 = uVar11 >> 6;
        uVar12 = -1L << (uVar11 & 0x3f) &
                 (*(ulong *)(puVar10 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar12 == 0) {
          bVar9 = false;
          uVar12 = 0x3f - uVar14 >> 6;
          do {
            uVar11 = uVar13 + 1;
            if ((uVar11 == uVar12) && (bVar9)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100be1dd4);
              (*pcVar8)();
            }
            uVar13 = 0;
            if (uVar11 != uVar12) {
              uVar13 = uVar11;
            }
            bVar9 = (bool)(uVar11 == uVar12 | bVar9);
          } while (*(ulong *)(puVar10 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar12 = ~*(ulong *)(puVar10 + uVar13 * 8 + 0x40);
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + uVar13 * 0x40;
        }
        else {
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar10 + uVar13 + 0x40) =
             1L << (uVar12 & 0x3f) | *(ulong *)(puVar10 + uVar13 + 0x40);
        puVar2 = (undefined8 *)(*(long *)(puVar10 + 0x30) + uVar12 * 0x10);
        *puVar2 = pcVar3;
        puVar2[1] = pvVar5;
        puVar2 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar12 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar6;
        *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
        bVar9 = SBORROW8((long)param_3,1);
        param_3 = param_3 + -1;
        if (bVar9) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100be1dd8);
          (*pcVar8)();
        }
        lVar15 = lVar16;
      } while (param_3 != (undefined *)0x0);
    }
  }
  return puVar10;
}



/* Address: 0x100be1de0 | FUN_100be1de0 */

void FUN_100be1de0(_DictionaryStorage *param_1)

{
  __int64 unaff_x21;
  
  Swift::_DictionaryStorage::_allocate(param_1,unaff_x21);
  return;
}



/* Address: 0x100be1dec | FUN_100be1dec */

void FUN_100be1dec(void)

{
  return;
}



/* Address: 0x100be1e00 | FUN_100be1e00 */

void FUN_100be1e00(void)

{
  return;
}



/* Address: 0x100be1e14 | FUN_100be1e14 */

void FUN_100be1e14(void)

{
  return;
}



/* Address: 0x100be1e28 | FUN_100be1e28 */

void FUN_100be1e28(void)

{
  return;
}



/* Address: 0x100be1e3c | FUN_100be1e3c */

void FUN_100be1e3c(void)

{
  return;
}



/* Address: 0x100be1e50 | FUN_100be1e50 */

void FUN_100be1e50(void)

{
  _clock_gettime_nsec_np(8);
  return;
}



/* Address: 0x100be1e58 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::Foundation::Date::init */

Date Foundation::Date::init(void)

{
  Date in_x0;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf4c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_init_100ea7478)();
  return (Date)in_x0.unknown;
}



/* Address: 0x100be1e5c | _TtC6Sentry32SentryDefaultCurrentDateProvider::date */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry32SentryDefaultCurrentDateProvider::date(ID param_1,SEL param_2)

{
  Date DVar1;
  NSDate *pNVar2;
  long lVar3;
  long lVar4;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar1.unknown + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  Foundation::Date::init();
  pNVar2 = Foundation::Date::_bridgeToObjectiveC((Date)0x0);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return (ID)pNVar2;
}



/* Address: 0x100be1ee4 | FUN_100be1ee4 */

__int64 FUN_100be1ee4(undefined8 param_1,TimeZone param_2)

{
  Date DVar1;
  TimeZone TVar2;
  __int64 _Var3;
  long lVar4;
  Date for;
  long lVar5;
  long lVar6;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  for.unknown = &stack0xffffffffffffffb0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Foundation::TimeZone::typeMetadataAccessor();
  lVar6 = *(long *)(TVar2.unknown + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  Foundation::TimeZone::get_current(TVar2);
  Foundation::Date::init();
  _Var3 = Foundation::TimeZone::secondsFromGMT(for,param_2);
  (**(code **)(lVar5 + 8))(for.unknown,DVar1.unknown);
  (**(code **)(lVar6 + 8))((long)for.unknown - (lVar4 + 0xfU & 0xfffffffffffffff0),TVar2.unknown);
  return _Var3;
}



/* Address: 0x100be1fa8 | _TtC6Sentry32SentryDefaultCurrentDateProvider::timezoneOffset */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

long_long _TtC6Sentry32SentryDefaultCurrentDateProvider::timezoneOffset(ID param_1,SEL param_2)

{
  FUN_100be1ee4();
  return param_1;
}



/* Address: 0x100be1fdc | _TtC6Sentry32SentryDefaultCurrentDateProvider::systemTime */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry32SentryDefaultCurrentDateProvider::systemTime(ID param_1,SEL param_2)

{
  FUN_100be1e50();
  return param_1;
}



/* Address: 0x100be2010 | FUN_100be2010 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be2010(void)

{
  ID self;
  
  self = _objc_msgSend((ID)&_OBJC_CLASS___NSProcessInfo,"processInfo");
  _objc_msgSend(self,"systemUptime");
  return 0;
}



/* Address: 0x100be2070 | _TtC6Sentry32SentryDefaultCurrentDateProvider::systemUptime */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry32SentryDefaultCurrentDateProvider::systemUptime(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100be2010(param_1);
  return in_d0;
}



/* Address: 0x100be20ac | _TtC6Sentry32SentryDefaultCurrentDateProvider::getAbsoluteTime */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long
_TtC6Sentry32SentryDefaultCurrentDateProvider::getAbsoluteTime(ID param_1,SEL param_2)

{
  FUN_100be1e50();
  return param_1;
}



/* Address: 0x100be20c0 | _TtC6Sentry32SentryDefaultCurrentDateProvider::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry32SentryDefaultCurrentDateProvider::init(ID param_1,SEL param_2)

{
  FUN_1001fddc8();
  return param_1;
}



/* Address: 0x100be20e0 | FUN_100be20e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100be20e0(void)

{
  return ZEXT816(0x100fa5328);
}



/* Address: 0x100be2100 | thunk_FUN_100be1e50 */

void thunk_FUN_100be1e50(void)

{
  FUN_100be1e50();
  return;
}



/* Address: 0x100be2104 | _TtC6Sentry32SentryDefaultCurrentDateProvider::getAbsoluteTime */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

unsigned_long_long
_TtC6Sentry32SentryDefaultCurrentDateProvider::getAbsoluteTime(ID param_1,SEL param_2)

{
  FUN_100be1e50();
  return param_1;
}



/* Address: 0x100be2108 | FUN_100be2108 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100be2108(undefined *param_1)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      _Var2.unknown = param_1;
    }
    uVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar4;
  if (uVar7 != 0) {
    FUN_100b6965c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100be2280);
      (*pcVar5)();
    }
    lVar8 = 0;
    do {
      uVar1 = lVar8 + 1;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100be222c);
        (*pcVar5)();
      }
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        lVar6 = *(long *)(param_1 + lVar8 * 8 + 0x20);
      }
      else {
        lVar6 = lVar8;
        FUN_100b6d94c(lVar8,param_1);
      }
      FUN_100be2ef0();
      uVar3 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar3) {
        FUN_100b6965c(1 < *(ulong *)(puVar4 + 0x18),uVar3 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar3 + 1;
      *(long *)(puVar4 + uVar3 * 8 + 0x20) = lVar6;
      lVar8 = lVar8 + 1;
    } while (uVar1 != uVar7);
  }
  return puVar4;
}



/* Address: 0x100be2280 | FUN_100be2280 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be2280(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x21;
  long lVar12;
  ulong uVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar9 = (ulong *)(param_1 + 0x38);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  uVar7 = 0x3f - uVar10 >> 6;
  lVar5 = param_1;
  _swift_bridgeObjectRetain();
  lVar12 = 0;
  lVar6 = lVar12;
  uVar13 = uVar11;
  if (uVar11 == 0) goto LAB_100be230c;
LAB_100be23d8:
  do {
    uVar3 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    puVar1 = (undefined8 *)
             (*(long *)(param_1 + 0x30) +
             (lVar12 << 10 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 4));
    local_70 = *puVar1;
    uVar2 = puVar1[1];
    uStack_68 = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    FUN_100be2860(&local_70,param_2,param_3,param_4);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(uVar2);
LAB_100be24b8:
      FUN_10000c650(param_1,puVar9,~uVar10,lVar6,uVar11);
      return 0;
    }
    uVar11 = uVar13 - 1 & uVar13;
    _swift_bridgeObjectRelease(uVar2);
    lVar6 = lVar12;
    uVar13 = uVar11;
  } while (uVar11 != 0);
LAB_100be230c:
  lVar12 = lVar6 + 1;
  if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100be24ec);
    (*pcVar4)();
  }
  if (lVar12 < (long)uVar7) {
    uVar13 = puVar9[lVar12];
    if (puVar9[lVar12] != 0) goto LAB_100be23d8;
    lVar12 = lVar6 + 2;
    if (lVar12 < (long)uVar7) {
      uVar13 = puVar9[lVar12];
      if (uVar13 != 0) goto LAB_100be23d8;
      lVar12 = lVar6 + 3;
      if (lVar12 < (long)uVar7) {
        uVar13 = puVar9[lVar12];
        if (uVar13 != 0) goto LAB_100be23d8;
        lVar12 = lVar6 + 4;
        if (lVar12 < (long)uVar7) {
          uVar13 = puVar9[lVar12];
          if (uVar13 != 0) goto LAB_100be23d8;
          lVar12 = lVar6 + 5;
          if (lVar12 < (long)uVar7) {
            uVar13 = puVar9[lVar12];
            if (uVar13 != 0) goto LAB_100be23d8;
            lVar12 = lVar6 + 6;
            if (lVar12 < (long)uVar7) {
              uVar13 = puVar9[lVar12];
              if (uVar13 != 0) goto LAB_100be23d8;
              lVar12 = lVar6 + 7;
              if (lVar12 < (long)uVar7) {
                uVar13 = puVar9[lVar12];
                if (uVar13 != 0) goto LAB_100be23d8;
                lVar12 = lVar6 + 8;
                if (lVar12 < (long)uVar7) {
                  uVar13 = puVar9[lVar12];
                  if (puVar9[lVar12] == 0) {
                    puVar8 = (ulong *)(lVar5 + 0x80 + lVar6 * 8);
                    do {
                      lVar12 = lVar12 + 1;
                      if ((long)uVar7 <= lVar12) goto LAB_100be24a0;
                      uVar13 = *puVar8;
                      puVar8 = puVar8 + 1;
                    } while (uVar13 == 0);
                  }
                  goto LAB_100be23d8;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_100be24a0:
  uVar11 = 0;
  goto LAB_100be24b8;
}



/* Address: 0x100be24ec | FUN_100be24ec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100be24ec(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID self;
  long lVar3;
  long lVar4;
  ID IVar5;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((long)param_1 < 0) {
      _Var1.unknown = param_1;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar4 = 4;
    while( true ) {
      IVar5 = lVar4 - 4;
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        self = *(ID *)(param_1 + lVar4 * 8);
      }
      else {
        self = IVar5;
        FUN_100b6dad8(IVar5,param_1);
      }
      if (SCARRY8(IVar5,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100be2638);
        (*pcVar2)();
      }
      IVar5 = _objc_msgSend(self,"stacktrace");
      if (IVar5 != 0) {
        IVar5 = _objc_msgSend(IVar5,"frames");
        FUN_100b673ec(0,&DAT_101044930,&PTR_SentryFrame_100f8e010);
        (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
        FUN_100be2d60(IVar5,param_3);
        _swift_bridgeObjectRelease(IVar5);
      }
      if (lVar4 + -3 == lVar3) break;
      lVar4 = lVar4 + 1;
    }
    _swift_bridgeObjectRelease(param_1);
  }
  return;
}



/* Address: 0x100be267c | FUN_100be267c */

void FUN_100be267c(undefined8 param_1)

{
  undefined *local_28;
  
  local_28 = PTR___swiftEmptySetSingleton_100eae0e8;
  FUN_100be2d60(param_1,&local_28);
  FUN_100be3f38();
  FUN_100b94108();
  return;
}



/* Address: 0x100be26bc | _TtC6Sentry24SentryDebugImageProvider::getDebugImagesFromCacheForFrames: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry24SentryDebugImageProvider::getDebugImagesFromCacheForFrames_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_100be273c();
  return param_1;
}



/* Address: 0x100be26d8 | FUN_100be26d8 */

void FUN_100be26d8(void)

{
  FUN_10021b704();
  FUN_100be3f50();
  FUN_100be24ec();
  FUN_100be3f38();
  FUN_100b94108();
  FUN_100b69e90();
  return;
}



/* Address: 0x100be2720 | _TtC6Sentry24SentryDebugImageProvider::getDebugImagesFromCacheForThreads: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry24SentryDebugImageProvider::getDebugImagesFromCacheForThreads_
             (ID param_1,SEL param_2,ID param_3)

{
  FUN_100be273c();
  return param_1;
}



/* Address: 0x100be273c | FUN_100be273c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8
FUN_100be273c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,code *param_6)

{
  FUN_100b673ec(0,param_4,param_5);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  (*param_6)(param_3);
  _swift_bridgeObjectRelease(param_3);
  FUN_100b673ec(0,&DAT_101044940,&PTR_SentryDebugMeta_100f8e020);
  (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  FUN_100b94108();
  return param_1;
}



/* Address: 0x100be27dc | FUN_100be27dc */

void FUN_100be27dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  _swift_getObjectType();
  local_38 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10021b704();
  FUN_100be3f50();
  FUN_100be2280();
  FUN_100be2a00(&local_38);
  puVar1 = local_38;
  FUN_10021b704();
  puVar2 = puVar1;
  _swift_bridgeObjectRetain(puVar1);
  FUN_100be2108();
  _swift_bridgeObjectRelease_n(puVar1,2);
  FUN_100b69e90(puVar2);
  return;
}



/* Address: 0x100be2860 | FUN_100be2860 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100be2860(undefined8 *param_1,long param_2,ulong *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *param_1;
  FUN_100be2940(uVar1,param_1[1]);
  lVar3 = *(long *)(*(long *)(param_2 + _TtC6Sentry24SentryDebugImageProvider::binaryImageCache) +
                   SentryBinaryImageCache::lock);
  FUN_100bb5d14(lVar3,*(long *)(param_2 + _TtC6Sentry24SentryDebugImageProvider::binaryImageCache),
                uVar1);
  if (lVar3 != 0) {
    FUN_100b93a3c();
    lVar4 = *(long *)((*param_3 & 0xffffffffffffff8) + 0x10);
    FUN_100b93c84(lVar4);
    uVar2 = *param_3;
    *(long *)((uVar2 & 0xffffffffffffff8) + 0x10) = lVar4 + 1;
    *(long *)((uVar2 & 0xffffffffffffff8) + lVar4 * 8 + 0x20) = lVar3;
  }
  return 0;
}



/* Address: 0x100be2940 | FUN_100be2940 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100be2940(ID param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100b673ec(0,&DAT_101048340,&PTR__OBJC_CLASS___NSScanner_100f8d918);
  _swift_bridgeObjectRetain(param_2);
  FUN_100bbf394(param_1,param_2);
  local_40 = 0;
  IVar2 = _objc_msgSend(param_1,"scanHexLongLong:",&local_40);
  uVar1 = local_40;
  if ((int)IVar2 == 0) {
    uVar1 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}


