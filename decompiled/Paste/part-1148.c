/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bdba0c | FUN_100bdba0c */

void FUN_100bdba0c(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100bdba18 | FUN_100bdba18 */

void FUN_100bdba18(void)

{
  return;
}



/* Address: 0x100bdba24 | FUN_100bdba24 */

void FUN_100bdba24(void)

{
  return;
}



/* Address: 0x100bdba38 | FUN_100bdba38 */

void FUN_100bdba38(void)

{
  long unaff_x29;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x29 + -0x140),*(undefined8 *)(unaff_x29 + -0x138));
  return;
}



/* Address: 0x100bdba4c | FUN_100bdba4c */

void FUN_100bdba4c(void)

{
  return;
}



/* Address: 0x100bdba58 | FUN_100bdba58 */

String FUN_100bdba58(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x100bdba60 | FUN_100bdba60 */

void FUN_100bdba60(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *unaff_x22;
  void *unaff_x27;
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = unaff_x27;
  SVar1.str = unaff_x22;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bdba70 | FUN_100bdba70 */

void FUN_100bdba70(void)

{
  FUN_100b6c914();
  return;
}



/* Address: 0x100bdba78 | FUN_100bdba78 */

void FUN_100bdba78(void)

{
  FUN_100bdb8b4();
  return;
}



/* Address: 0x100bdba80 | FUN_100bdba80 */

void FUN_100bdba80(void)

{
  undefined8 unaff_x22;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x70) = unaff_x22;
  FUN_100b6a3a4(unaff_x29 + -0x70);
  return;
}



/* Address: 0x100bdba90 | FUN_100bdba90 */

void FUN_100bdba90(void)

{
  return;
}



/* Address: 0x100bdbaa0 | FUN_100bdbaa0 */

void FUN_100bdbaa0(void)

{
  return;
}



/* Address: 0x100bdbaac | FUN_100bdbaac */

void FUN_100bdbaac(void)

{
  (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  return;
}



/* Address: 0x100bdbab4 | FUN_100bdbab4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdbab4(void)

{
  return 0;
}



/* Address: 0x100bdbabc | FUN_100bdbabc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bdbabc(void)

{
  return 0;
}



/* Address: 0x100bdbac8 | FUN_100bdbac8 */

void FUN_100bdbac8(void)

{
  Data unaff_x23;
  
  Foundation::Data::get_count(unaff_x23);
  return;
}



/* Address: 0x100bdbad4 | FUN_100bdbad4 */

void FUN_100bdbad4(void)

{
  _objc_allocWithZone();
  return;
}



/* Address: 0x100bdbadc | FUN_100bdbadc */

void FUN_100bdbadc(void)

{
  _objc_allocWithZone();
  return;
}



/* Address: 0x100bdbae4 | FUN_100bdbae4 */

void FUN_100bdbae4(void)

{
  Data unaff_x21;
  
  Foundation::Data::get_count(unaff_x21);
  return;
}



/* Address: 0x100bdbaf0 | FUN_100bdbaf0 */

void FUN_100bdbaf0(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100bdbaf8 | FUN_100bdbaf8 */

void FUN_100bdbaf8(void)

{
  return;
}



/* Address: 0x100bdbb04 | FUN_100bdbb04 */

void FUN_100bdbb04(void)

{
  return;
}



/* Address: 0x100bdbb10 | FUN_100bdbb10 */

void FUN_100bdbb10(void)

{
  return;
}



/* Address: 0x100bdbb24 | _TtC6Sentry12SentrySample::absoluteTimestamp */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry12SentrySample::absoluteTimestamp(ID param_1,SEL param_2)

{
  FUN_100bdbb44();
  return param_1;
}



/* Address: 0x100bdbb44 | FUN_100bdbb44 */

void FUN_100bdbb44(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::absoluteTimestamp;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bdbb6c | _TtC6Sentry12SentrySample::setAbsoluteTimestamp: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentrySample::setAbsoluteTimestamp_
               (ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bdbb90(param_3);
  return;
}



/* Address: 0x100bdbb90 | FUN_100bdbb90 */

void FUN_100bdbb90(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::absoluteTimestamp;
  FUN_100b94020(unaff_x20 + _TtC6Sentry12SentrySample::absoluteTimestamp);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bdbbc4 | FUN_100bdbbc4 */

void FUN_100bdbbc4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry12SentrySample::absoluteTimestamp;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bdbbf0 | _TtC6Sentry12SentrySample::absoluteNSDateInterval */

/* Function Stack Size: 0x10 bytes */

double _TtC6Sentry12SentrySample::absoluteNSDateInterval(ID param_1,SEL param_2)

{
  double in_d0;
  
  FUN_100bdbc10();
  return in_d0;
}



/* Address: 0x100bdbc10 | FUN_100bdbc10 */

undefined8 FUN_100bdbc10(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::absoluteNSDateInterval;
  FUN_100b78c58();
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100bdbc40 | _TtC6Sentry12SentrySample::setAbsoluteNSDateInterval: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentrySample::setAbsoluteNSDateInterval_(ID param_1,SEL param_2,double param_3)

{
  FUN_100bdbc60();
  return;
}



/* Address: 0x100bdbc60 | FUN_100bdbc60 */

void FUN_100bdbc60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::absoluteNSDateInterval;
  FUN_100b94020(unaff_x20 + _TtC6Sentry12SentrySample::absoluteNSDateInterval);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x100bdbca0 | FUN_100bdbca0 */

void FUN_100bdbca0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry12SentrySample::absoluteNSDateInterval;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bdbccc | _TtC6Sentry12SentrySample::stackIndex */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySample::stackIndex(ID param_1,SEL param_2)

{
  FUN_100bdbcec();
  return param_1;
}



/* Address: 0x100bdbcec | FUN_100bdbcec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100bdbcec(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::stackIndex;
  FUN_100b78c58();
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x100bdbd1c | _TtC6Sentry12SentrySample::setStackIndex: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentrySample::setStackIndex_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100bdbd60(param_3);
  return;
}



/* Address: 0x100bdbd60 | FUN_100bdbd60 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bdbd60(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::stackIndex;
  FUN_100b94020(unaff_x20 + _TtC6Sentry12SentrySample::stackIndex);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90(0);
  return;
}



/* Address: 0x100bdbd9c | FUN_100bdbd9c */

void FUN_100bdbd9c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry12SentrySample::stackIndex;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bdbdc8 | _TtC6Sentry12SentrySample::threadID */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long _TtC6Sentry12SentrySample::threadID(ID param_1,SEL param_2)

{
  FUN_100bdbde8();
  return param_1;
}



/* Address: 0x100bdbde8 | FUN_100bdbde8 */

void FUN_100bdbde8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::threadID;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100bdbe10 | _TtC6Sentry12SentrySample::setThreadID: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentrySample::setThreadID_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100bdbe34(param_3);
  return;
}



/* Address: 0x100bdbe34 | FUN_100bdbe34 */

void FUN_100bdbe34(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry12SentrySample::threadID;
  FUN_100b94020(unaff_x20 + _TtC6Sentry12SentrySample::threadID);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  FUN_100b78c90();
  return;
}



/* Address: 0x100bdbe68 | FUN_100bdbe68 */

void FUN_100bdbe68(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry12SentrySample::threadID;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bdbe94 | _TtC6Sentry12SentrySample::queueAddress */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySample::queueAddress(ID param_1,SEL param_2)

{
  NSString *pNVar1;
  
  FUN_100bdbed8();
  if (param_2 == (SEL)0x0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  return (ID)pNVar1;
}



/* Address: 0x100bdbed8 | FUN_100bdbed8 */

undefined1  [16] FUN_100bdbed8(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + _TtC6Sentry12SentrySample::queueAddress);
  _swift_beginAccess(pauVar1,auStack_38,0,0);
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x100bdbf2c | _TtC6Sentry12SentrySample::setQueueAddress: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry12SentrySample::setQueueAddress_(ID param_1,SEL param_2,ID param_3)

{
  String SVar1;
  
  if (param_3 == 0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_100bdbf90(SVar1.str,SVar1.bridgeObject);
  return;
}



/* Address: 0x100bdbf90 | FUN_100bdbf90 */

void FUN_100bdbf90(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry12SentrySample::queueAddress);
  _swift_beginAccess(puVar1,auStack_48,1,0);
  uVar2 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100b78c90();
  return;
}



/* Address: 0x100bdbfe0 | FUN_100bdbfe0 */

void FUN_100bdbfe0(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry12SentrySample::queueAddress;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100bdc00c | FUN_100bdc00c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bdc00c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *self;
  ID IVar3;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentrySample::absoluteTimestamp) = 0;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentrySample::absoluteNSDateInterval) = 0;
  lVar2 = _TtC6Sentry12SentrySample::stackIndex;
  self = &_OBJC_CLASS___NSNumber;
  _objc_allocWithZone();
  IVar3 = _objc_msgSend((ID)self,"initWithInteger:",0);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  *(undefined8 *)(unaff_x20 + _TtC6Sentry12SentrySample::threadID) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC6Sentry12SentrySample::queueAddress);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}



/* Address: 0x100bdc0d4 | _TtC6Sentry12SentrySample::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry12SentrySample::init(ID param_1,SEL param_2)

{
  FUN_100bdc00c();
  return param_1;
}



/* Address: 0x100bdc0f4 | _TtC6Sentry12SentrySample::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry12SentrySample::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + queueAddress + 8));
  return;
}



/* Address: 0x100bdc130 | FUN_100bdc130 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bdc130(void)

{
  return ZEXT816(0x100fa4c58);
}



/* Address: 0x100bdc150 | FUN_100bdc150 */

void FUN_100bdc150(void)

{
  FUN_100bdf4e0();
  _objc_allocWithZone();
  FUN_100bdca44();
  return;
}



/* Address: 0x100bdc17c | FUN_100bdc17c */

void FUN_100bdc17c(undefined8 param_1,code *param_2)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,"lock");
  (*param_2)(param_1);
  _objc_msgSend(unaff_x20,"unlock");
  return;
}



/* Address: 0x100bdc1ec | FUN_100bdc1ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bdc220 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100bdc1ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  FUN_100b6f838();
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x100bdc244 | FUN_100bdc244 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100bdc244(ulong param_1,undefined8 param_2,undefined8 param_3,Date param_4,ulong param_5,
             __uint32 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  CaptureTypeRecord *self;
  CaptureTypeRecord *pCVar3;
  ID IVar4;
  undefined *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong *extraout_x8;
  long extraout_x8_00;
  byte *extraout_x9;
  long extraout_x9_00;
  byte *pbVar10;
  Date unaff_x19;
  byte *unaff_x20;
  long unaff_x21;
  undefined8 *unaff_x22;
  long unaff_x23;
  long unaff_x24;
  CaptureTypeRecord *unaff_x25;
  long unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long lVar11;
  long unaff_x29;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  String SVar23;
  
  pcVar7 = &SUB_e200000000000000;
  self = (CaptureTypeRecord *)&DAT_00006b6f;
  puVar9 = (ulong *)(param_1 & 0xff);
  pbVar10 = &switchD_100bdc268::switchdataD_100c9e9d0;
  pCVar3 = self;
  lVar11 = unaff_x28;
  switch(puVar9) {
  default:
    pcVar7 = &DAT_e600000000000000;
  case (ulong *)0x40:
  case (ulong *)0x48:
  case (ulong *)0x6a:
  case (ulong *)0xe2:
    self = (CaptureTypeRecord *)0x74697865;
  case (ulong *)0x38:
  case (ulong *)0xba:
  case (ulong *)0xc2:
  case (ulong *)0xc4:
  case (ulong *)0xf2:
  case (ulong *)0xfa:
    self = (CaptureTypeRecord *)((ulong)self | 0x646500000000);
  case (ulong *)0xfc:
    auVar12._8_8_ = pcVar7;
    auVar12._0_8_ = self;
    return auVar12;
  case (ulong *)0x2:
    pcVar7 = &DAT_e700000000000000;
    self = (CaptureTypeRecord *)0x7263;
  case (ulong *)0x68:
  case (ulong *)0x80:
  case (ulong *)0x98:
  case (ulong *)0xce:
    self = (CaptureTypeRecord *)((ulong)self | 0x73610000);
  case (ulong *)0x70:
  case (ulong *)0x78:
    self = (CaptureTypeRecord *)((ulong)self | 0x656800000000);
  case (ulong *)0x4:
    self = (CaptureTypeRecord *)((ulong)self | 0x64000000000000);
  case (ulong *)0x8:
    auVar13._8_8_ = pcVar7;
    auVar13._0_8_ = self;
    return auVar13;
  case (ulong *)0x3:
    pcVar7 = &DAT_e800000000000000;
  case (ulong *)0x6:
    self = (CaptureTypeRecord *)0x6f6e6261;
  case (ulong *)0x7:
    self = (CaptureTypeRecord *)((ulong)self | 0x6d7200000000);
  case (ulong *)0xb:
    self = (CaptureTypeRecord *)((ulong)self | 0x6c61000000000000);
  case (ulong *)0x0:
  case (ulong *)0x9:
  case (ulong *)0x58:
  case (ulong *)0x60:
  case (ulong *)0x88:
  case (ulong *)0x90:
    auVar14._8_8_ = pcVar7;
    auVar14._0_8_ = self;
    return auVar14;
  case (ulong *)0xc:
  case (ulong *)0xb9:
  case (ulong *)0xf1:
    self = _DAT_00006b6f;
    pcVar7 = _DAT_00006b77;
    unaff_x19.unknown = (undefined *)puVar9;
  case (ulong *)0x52:
    FUN_100bdc1ec(self,pcVar7);
  case (ulong *)0x82:
  case (ulong *)0x9a:
    *unaff_x19.unknown = (char)self;
    auVar17._8_8_ = pcVar7;
    auVar17._0_8_ = self;
    return auVar17;
  case (ulong *)0xd:
    uVar8 = (ulong)*unaff_x20;
    FUN_100bec8b8(uVar8);
    auVar15._8_8_ = pcVar7;
    auVar15._0_8_ = uVar8;
    return auVar15;
  case (ulong *)0x6f:
  case (ulong *)0x87:
  case (ulong *)0x9f:
    auVar20._8_8_ = &SUB_e200000000000000;
    auVar20._0_8_ = &DAT_00006b6f;
    return auVar20;
  case (ulong *)0xb6:
  case (ulong *)0xca:
  case (ulong *)0xd2:
  case (ulong *)0xda:
  case (ulong *)0xee:
    uVar8 = (ulong)*unaff_x20;
    FUN_100bdc244();
    *(ulong *)unaff_x19.unknown = uVar8;
    *(char **)((long)unaff_x19.unknown + 8) = pcVar7;
    auVar18._8_8_ = pcVar7;
    auVar18._0_8_ = uVar8;
    return auVar18;
  case (ulong *)0xc8:
  case (ulong *)0xd0:
  case (ulong *)0xd8:
    *(undefined8 *)(unaff_x29 + -0x98) = param_3;
    *(undefined **)(unaff_x29 + -0x90) = param_4.unknown;
    *(undefined1 **)(unaff_x29 + -0x88) = &DAT_00006b6f;
    *(undefined1 **)(unaff_x29 + -0x80) = &SUB_e200000000000000;
    FUN_100b7982c();
    unaff_x21 = *(long *)(self + -2);
    pCVar3 = self;
    FUN_100b6f9e0(*(undefined8 *)(unaff_x21 + 0x40));
    puVar9 = extraout_x8;
    pbVar10 = extraout_x9;
    unaff_x25 = self;
  case (ulong *)0xcd:
    unaff_x26 = (long)pbVar10 - (long)puVar9;
    FUN_100bdf4ec();
    unaff_x23 = *(long *)(pCVar3 + -2);
  case (ulong *)0xb4:
    FUN_100b6f9e0(*(undefined8 *)(unaff_x23 + 0x40));
    lVar11 = _TtC6Sentry13SentrySession::lock;
    unaff_x27 = extraout_x9_00 - extraout_x8_00;
    puVar5 = &_OBJC_CLASS___NSRecursiveLock;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar5,"init");
    *(ID *)(unaff_x28 + lVar11) = IVar4;
    lVar11 = _TtC6Sentry13SentrySession::_flagInit;
    *(undefined8 *)(unaff_x28 + _TtC6Sentry13SentrySession::_flagInit) = 0;
    FUN_1000c9ffc((undefined1 *)(unaff_x28 + (long)_TtC6Sentry13SentrySession::_timestamp),1,1,
                  unaff_x25);
    *(undefined8 *)(unaff_x28 + _TtC6Sentry13SentrySession::_duration) = 0;
    unaff_x22 = (undefined8 *)(unaff_x28 + (long)_TtC6Sentry13SentrySession::_releaseName);
    *unaff_x22 = 0;
    unaff_x22[1] = 0;
    puVar1 = (undefined8 *)(unaff_x28 + _TtC6Sentry13SentrySession::_environment);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = (undefined8 *)(unaff_x28 + (long)_TtC6Sentry13SentrySession::_abnormalMechanism);
    *puVar1 = 0;
    puVar1[1] = 0;
    unaff_x24 = unaff_x28;
  case (ulong *)0xd5:
  case (ulong *)0xdd:
  case (ulong *)0xe8:
  case (ulong *)0xb5:
  case (ulong *)0xc9:
  case (ulong *)0xd1:
  case (ulong *)0xd9:
  case (ulong *)0xed:
    Foundation::UUID::init();
    FUN_100bdf510(unaff_x24 + _TtC6Sentry13SentrySession::_sessionId,unaff_x27);
    unaff_x19.unknown = (undefined *)0x0;
    FUN_100b78b14();
    FUN_100b75404();
    self = (CaptureTypeRecord *)
           ((long)unaff_x19.unknown + (long)_TtC6Sentry25SentryDependencyContainer::dateProvider);
    pcVar7 = (char *)(unaff_x29 + -0x68);
    unaff_x20 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  case (ulong *)0xe9:
    FUN_100b80d44(self,pcVar7,0);
    self = *(CaptureTypeRecord **)((long)unaff_x19.unknown + (long)unaff_x20);
    _swift_unknownObjectRetain(self);
    FUN_100b6faa8();
    pcVar7 = "date";
  case (ulong *)0xd6:
  case (ulong *)0xde:
    IVar4 = _objc_msgSend((ID)self,pcVar7);
    FUN_100bdf4e0(IVar4);
    _swift_unknownObjectRelease();
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(unaff_x19);
    FUN_100b6faa8();
  case (ulong *)0x54:
    puVar9 = _TtC6Sentry13SentrySession::_started;
  case (ulong *)0x84:
  case (ulong *)0x9c:
    pbVar10 = *(byte **)(unaff_x21 + 0x20);
  case (ulong *)0x6c:
  case (ulong *)0x6d:
  case (ulong *)0x6e:
  case (ulong *)0x85:
  case (ulong *)0x86:
  case (ulong *)0x9d:
  case (ulong *)0x9e:
  case (ulong *)0xd7:
  case (ulong *)0xdf:
    (*(code *)pbVar10)((undefined1 *)(unaff_x24 + (long)puVar9),unaff_x26,unaff_x25);
    *(undefined1 *)(unaff_x24 + _TtC6Sentry13SentrySession::_status) = 0;
    *(undefined8 *)(unaff_x24 + _TtC6Sentry13SentrySession::_sequence) = 1;
    *(undefined8 *)(unaff_x24 + _TtC6Sentry13SentrySession::_errors) = 0;
    puVar1 = (undefined8 *)(unaff_x24 + _TtC6Sentry13SentrySession::_distinctId);
    uVar6 = *(undefined8 *)(unaff_x29 + -0x90);
    *puVar1 = *(undefined8 *)(unaff_x29 + -0x98);
    puVar1[1] = uVar6;
    puVar5 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    IVar4 = _objc_msgSend((ID)puVar5,"initWithBool:",1);
    *(ID *)(unaff_x24 + lVar11) = IVar4;
    uVar6 = *(undefined8 *)(unaff_x29 + -0x80);
    *unaff_x22 = *(undefined8 *)(unaff_x29 + -0x88);
    unaff_x22[1] = uVar6;
    uVar6 = 0;
    FUN_100b6f838();
    FUN_100bdefe4();
    *(long *)(unaff_x29 + -0x78) = unaff_x24;
    *(undefined8 *)(unaff_x29 + -0x70) = uVar6;
    pcVar7 = "init";
    IVar4 = _objc_msgSendSuper2((objc_super *)(unaff_x29 + -0x78),"init");
    FUN_100b56ea0();
    auVar22._8_8_ = pcVar7;
    auVar22._0_8_ = IVar4;
    return auVar22;
  case (ulong *)0xcc:
    _objc_allocWithZone();
    self = (CaptureTypeRecord *)&DAT_00006b6f;
    pcVar7 = &SUB_e200000000000000;
    FUN_100bdc4cc(&DAT_00006b6f,&SUB_e200000000000000,param_3,param_4.unknown);
  case (ulong *)0xec:
    auVar21._8_8_ = pcVar7;
    auVar21._0_8_ = self;
    return auVar21;
  case (ulong *)0xd4:
    FUN_100b78cac();
    auVar19._8_8_ = pcVar7;
    auVar19._0_8_ = self;
    return auVar19;
  case (ulong *)0xea:
    IVar4 = _objc_msgSend(0x6b6f,"init");
    *(ID *)(unaff_x20 + (long)unaff_x19.unknown) = IVar4;
    pbVar10 = unaff_x20 + _TtC6Sentry13SentrySession::_flagInit;
    pbVar10[0] = 0;
    unaff_x19.unknown = (undefined *)_TtC6Sentry13SentrySession::_timestamp;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    param_4 = Foundation::Date::typeMetadataAccessor();
  case (ulong *)0x30:
  case (ulong *)0xb8:
    self = (CaptureTypeRecord *)(unaff_x20 + (long)unaff_x19.unknown);
    pcVar7 = &DAT_00000001;
    param_3 = 1;
  case (ulong *)0x1b:
  case (ulong *)0x21:
  case (ulong *)0xa0:
  case (ulong *)0xa6:
  case (ulong *)0xad:
    FUN_1000c9ffc(self,pcVar7,param_3,param_4.unknown);
  case (ulong *)0xdc:
    pbVar10 = unaff_x20 + _TtC6Sentry13SentrySession::_duration;
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    puVar9 = _TtC6Sentry13SentrySession::_releaseName;
  case (ulong *)0x3c:
    pbVar10 = unaff_x20 + (long)puVar9;
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 0;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
    pbVar10 = unaff_x20 + _TtC6Sentry13SentrySession::_environment;
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 0;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
    puVar9 = _TtC6Sentry13SentrySession::_abnormalMechanism;
  case (ulong *)0xaf:
    pbVar10 = unaff_x20 + (long)puVar9;
    pbVar10[0] = 0;
    pbVar10[1] = 0;
    pbVar10[2] = 0;
    pbVar10[3] = 0;
    pbVar10[4] = 0;
    pbVar10[5] = 0;
    pbVar10[6] = 0;
    pbVar10[7] = 0;
    pbVar10[8] = 0;
    pbVar10[9] = 0;
    pbVar10[10] = 0;
    pbVar10[0xb] = 0;
    pbVar10[0xc] = 0;
    pbVar10[0xd] = 0;
    pbVar10[0xe] = 0;
    pbVar10[0xf] = 0;
  case (ulong *)0x1c:
  case (ulong *)0x22:
  case (ulong *)0xa1:
  case (ulong *)0xa7:
    self = &CaptureTypeRecord_100d8d000;
  case (ulong *)0x25:
  case (ulong *)0xaa:
    self = self + 0x3ac;
    param_6 = 0xdd15b0;
    param_4.unknown = (undefined *)0x20746f4e;
  case (ulong *)0x1d:
  case (ulong *)0x27:
  case (ulong *)0xa2:
  case (ulong *)0xac:
    param_4.unknown = (undefined *)((ulong)param_4.unknown & 0xffff0000ffffffff | 0x6d4900000000);
  case (ulong *)0x26:
  case (ulong *)0xab:
    param_4.unknown = (undefined *)((ulong)param_4.unknown & 0xffffffffffff | 0x6c70000000000000);
    param_5 = 0x6e656d65;
  case (ulong *)0x1f:
  case (ulong *)0xa4:
    param_5 = param_5 & 0xffff0000ffffffff | 0x657400000000;
  case (ulong *)0x23:
  case (ulong *)0x24:
  case (ulong *)0xa8:
  case (ulong *)0xa9:
  case (ulong *)0xb2:
    param_5 = param_5 & 0xffffffffffff | 0xef64000000000000;
  case (ulong *)0x1e:
  case (ulong *)0xa3:
  case (ulong *)0xae:
  case (ulong *)0xb0:
    pcVar7 = (SEL)0xb;
  case (ulong *)0xb1:
    SVar23.bridgeObject = (void *)0x2;
    SVar23.str = pcVar7;
    Swift::_assertionFailure
              ((StaticString)self,SVar23,(StaticString)param_4.unknown,param_5,param_6);
  case (ulong *)0x20:
  case (ulong *)0xa5:
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bdc454);
    (*pcVar2)();
  case (ulong *)0xf0:
    uVar8 = (ulong)*unaff_x20;
    FUN_100bed2c0(&DAT_00006b6f,uVar8);
    auVar16._8_8_ = uVar8;
    auVar16._0_8_ = self;
    return auVar16;
  }
}



/* Address: 0x100bdc2b0 | FUN_100bdc2b0 */

void FUN_100bdc2b0(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100bec694(*param_1,*param_2);
  return;
}



/* Address: 0x100bdc2bc | switchD_100bdc268::caseD_d */

void switchD_100bdc268::caseD_d(void)

{
  undefined1 *unaff_x20;
  
  FUN_100bec8b8(*unaff_x20);
  return;
}



/* Address: 0x100bdc2c4 | FUN_100bdc2c4 */

void FUN_100bdc2c4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becff0::caseD_7d(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bdc2cc | switchD_100bdc268::caseD_f0 */

void switchD_100bdc268::caseD_f0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed2c0(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bdc2d4 | FUN_100bdc2d4 */

void FUN_100bdc2d4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bdc1ec(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bdc300 | FUN_100bdc300 */

void FUN_100bdc300(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100bdc244();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100bdc328 | FUN_100bdc328 */

void FUN_100bdc328(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100bdc334 | FUN_100bdc334 */

void FUN_100bdc334(void)

{
  FUN_100b78cac();
  return;
}


