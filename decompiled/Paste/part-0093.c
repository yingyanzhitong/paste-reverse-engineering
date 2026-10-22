/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10010e294 | _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds */

/* Function Stack Size: 0x10 bytes */

double _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = rateCapWindowSeconds;
  _swift_beginAccess(param_1 + rateCapWindowSeconds,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}



/* Address: 0x10010e2d8 | FUN_10010e2d8 */

undefined8 FUN_10010e2d8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds,auStack_38,0,
                     0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x10010e318 | _TtC7PostHog17PostHogLogsConfig::setRateCapWindowSeconds: */

/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setRateCapWindowSeconds_
               (ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = rateCapWindowSeconds;
  _swift_beginAccess(param_1 + rateCapWindowSeconds,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x10010e368 | FUN_10010e368 */

void FUN_10010e368(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds,auStack_48,1,
                     0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x10010e3b4 | FUN_10010e3b4 */

undefined1  [16] FUN_10010e3b4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds;
  _swift_beginAccess(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds,param_1,0x21,
                     0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x10010e3f4 | FUN_10010e3f4 */

void FUN_10010e3f4(undefined8 param_1)

{
  FUN_10010e41c(param_1,&DAT_100eb7ce8,FUN_100110384);
  return;
}



/* Address: 0x10010e408 | FUN_10010e408 */

void FUN_10010e408(undefined8 param_1)

{
  FUN_10010e41c(param_1,&UNK_100eb7d10,thunk_FUN_100110384);
  return;
}



/* Address: 0x10010e41c | FUN_10010e41c */

void FUN_10010e41c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  ID self;
  
  lVar1 = *(long *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::beforeSend);
  _swift_allocObject(param_2,0x18,7);
  *(undefined8 *)(param_2 + 0x10) = param_1;
  self = *(ID *)(lVar1 + 0x10);
  _swift_retain(lVar1);
  _swift_bridgeObjectRetain(param_1);
  objc_stub::lock(self);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(long *)(lVar1 + 0x20) = param_2;
  _swift_retain(param_2);
  _swift_release(uVar2);
  objc_stub::unlock(self);
  _swift_release(param_2);
  _swift_release(lVar1);
  return;
}



/* Address: 0x10010e4b8 | FUN_10010e4b8 */

void FUN_10010e4b8(undefined *param_1)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  ID self;
  ulong uVar10;
  long *plVar11;
  undefined8 uVar12;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar9 = *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    uVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar9 != 0) {
    FUN_10010fa44(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10010e730);
      (*pcVar4)();
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      plVar11 = (long *)(param_1 + 0x20);
      do {
        puVar1 = (undefined8 *)(*plVar11 + _TtC7PostHog23BoxedBeforeSendLogBlock::block);
        puVar7 = &DAT_100eb7d88;
        _swift_allocObject(&DAT_100eb7d88,0x20,7);
        uVar6 = puVar1[1];
        uVar12 = *puVar1;
        *(undefined8 *)(puVar7 + 0x18) = puVar1[1];
        *(undefined8 *)(puVar7 + 0x10) = uVar12;
        uVar10 = *(ulong *)(puVar3 + 0x10);
        uVar5 = *(ulong *)(puVar3 + 0x18);
        _swift_retain(uVar6);
        if (uVar5 >> 1 <= uVar10) {
          FUN_10010fa44(1 < uVar5,uVar10 + 1,1);
        }
        *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
        *(code **)(puVar3 + uVar10 * 0x10 + 0x20) = thunk_FUN_1001103b0;
        *(undefined **)(puVar3 + uVar10 * 0x10 + 0x28) = puVar7;
        uVar9 = uVar9 - 1;
        plVar11 = plVar11 + 1;
      } while (uVar9 != 0);
    }
    else {
      uVar10 = 0;
      do {
        uVar5 = uVar10;
        FUN_10010ef68(uVar10,param_1);
        puVar1 = (undefined8 *)(uVar5 + _TtC7PostHog23BoxedBeforeSendLogBlock::block);
        puVar7 = &DAT_100eb7d38;
        _swift_allocObject(&DAT_100eb7d38,0x20,7);
        uVar6 = puVar1[1];
        uVar12 = *puVar1;
        *(undefined8 *)(puVar7 + 0x18) = puVar1[1];
        *(undefined8 *)(puVar7 + 0x10) = uVar12;
        _swift_retain(uVar6);
        _swift_unknownObjectRelease(uVar5);
        uVar5 = *(ulong *)(puVar3 + 0x10);
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar5) {
          FUN_10010fa44(1 < *(ulong *)(puVar3 + 0x18),uVar5 + 1,1);
        }
        uVar10 = uVar10 + 1;
        *(ulong *)(puVar3 + 0x10) = uVar5 + 1;
        *(code **)(puVar3 + uVar5 * 0x10 + 0x20) = FUN_1001103b0;
        *(undefined **)(puVar3 + uVar5 * 0x10 + 0x28) = puVar7;
      } while (uVar9 != uVar10);
    }
  }
  lVar8 = *(long *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::beforeSend);
  puVar7 = &DAT_100eb7d60;
  _swift_allocObject(&DAT_100eb7d60,0x18,7);
  *(undefined **)(puVar7 + 0x10) = puVar3;
  self = *(ID *)(lVar8 + 0x10);
  _swift_retain(lVar8);
  _swift_bridgeObjectRetain(puVar3);
  objc_stub::lock(self);
  uVar6 = *(undefined8 *)(lVar8 + 0x20);
  *(code **)(lVar8 + 0x18) = thunk_FUN_100110384;
  *(undefined **)(lVar8 + 0x20) = puVar7;
  _swift_retain(puVar7);
  _swift_release(uVar6);
  objc_stub::unlock(self);
  _swift_release(puVar7);
  _swift_release(lVar8);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x10010e730 | _TtC7PostHog17PostHogLogsConfig::setBeforeSend: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog17PostHogLogsConfig::setBeforeSend_(ID param_1,SEL param_2,ID param_3)

{
  FUN_10016c1ac(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_10010e4b8(param_3);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10010e788 | FUN_10010e788 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10010e788(undefined8 param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  CharacterSet CVar6;
  CharacterSet CVar7;
  void *pvVar8;
  long extraout_x8;
  long unaff_x20;
  ID self;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined *puStack_70;
  long local_68 [3];
  
  CVar6 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar10 = *(long *)(CVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = *(long *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::beforeSend);
  self = *(ID *)(lVar9 + 0x10);
  local_78 = param_1;
  _swift_retain(lVar9);
  objc_stub::lock(self);
  pcVar3 = *(code **)(lVar9 + 0x18);
  uVar4 = *(undefined8 *)(lVar9 + 0x20);
  _swift_retain(uVar4);
  objc_stub::unlock(self);
  (*pcVar3)(local_68,&local_78);
  _swift_release(lVar9);
  _swift_release(uVar4);
  if (local_68[0] != 0) {
    puVar1 = (undefined8 *)(local_68[0] + _TtC7PostHog16PostHogLogRecord::body);
    _swift_beginAccess(puVar1,local_68,0,0);
    local_78 = *puVar1;
    puVar5 = (undefined *)puVar1[1];
    CVar7.unknown = puVar5;
    puStack_70 = puVar5;
    _swift_bridgeObjectRetain();
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar7);
    FUN_1001013b8();
    SVar11 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters
                       ((CharacterSet)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
    pvVar8 = SVar11.bridgeObject;
    (**(code **)(lVar10 + 8))(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar6.unknown)
    ;
    _swift_bridgeObjectRelease(puVar5);
    _swift_bridgeObjectRelease(pvVar8);
    uVar2 = (ulong)SVar11.str & 0xffffffffffff;
    if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
      uVar2 = (ulong)pvVar8 >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      local_68[0] = 0;
    }
  }
  return local_68[0];
}



/* Address: 0x10010e900 | FUN_10010e900 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010e900(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *self;
  void *extraout_x1;
  void *pvVar7;
  long unaff_x20;
  void *pvVar8;
  String SVar9;
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushIntervalSeconds) =
       0x403e000000000000;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBufferSize) = 1000;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::flushAt) = 0x14;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::maxBatchSize) = 0x32;
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = NSBundle::bundleIdentifier(IVar4);
  if (IVar4 == 0) {
    pvVar8 = (void *)0x8000000100d90820;
    SVar9.bridgeObject = extraout_x1;
    SVar9.str = (char *)0xd000000000000013;
  }
  else {
    SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar8 = SVar9.bridgeObject;
  }
  pvVar7 = SVar9.bridgeObject;
  uVar5 = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::serviceName);
  *puVar1 = SVar9.str;
  puVar1[1] = pvVar8;
  FUN_10016c244();
  uVar2 = 0;
  if (pvVar7 != (void *)0x0) {
    uVar2 = uVar5;
  }
  pvVar8 = (void *)0xe000000000000000;
  if (pvVar7 != (void *)0x0) {
    pvVar8 = pvVar7;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::serviceVersion);
  *puVar1 = uVar2;
  puVar1[1] = pvVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::environment);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar3 = _TtC7PostHog17PostHogLogsConfig::resourceAttributes;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapMaxLogs) = 500;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog17PostHogLogsConfig::rateCapWindowSeconds) =
       0x4024000000000000;
  lVar3 = _TtC7PostHog17PostHogLogsConfig::beforeSend;
  puVar6 = &DAT_100fae2c0;
  FUN_1000f7830(&DAT_100fae2c0,&DAT_100c2e610);
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)self);
  *(ID *)(puVar6 + 0x10) = IVar4;
  *(code **)(puVar6 + 0x18) = FUN_1000f8134;
  *(undefined8 *)(puVar6 + 0x20) = 0;
  *(undefined **)(unaff_x20 + lVar3) = puVar6;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"init");
  return;
}



/* Address: 0x10010eac8 | _TtC7PostHog17PostHogLogsConfig::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog17PostHogLogsConfig::init(ID param_1,SEL param_2)

{
  FUN_10010e900();
  return param_1;
}



/* Address: 0x10010eae8 | _TtC7PostHog17PostHogLogsConfig::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog17PostHogLogsConfig::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + serviceName + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + serviceVersion + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + environment + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + resourceAttributes));
  _swift_release(*(undefined8 *)(param_1 + beforeSend));
  return;
}



/* Address: 0x10010eb5c | FUN_10010eb5c */

void FUN_10010eb5c(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR_PHPLCrashReportStackFrameInfo_100f8d8a0,&DAT_100faf350);
  return;
}



/* Address: 0x10010eb70 | FUN_10010eb70 */

void FUN_10010eb70(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___NSNumber_100f8d750,&DAT_100faeef0);
  return;
}



/* Address: 0x10010eb84 | FUN_10010eb84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ulong FUN_10010eb84(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  char *pcVar6;
  ulong uVar7;
  char *pcVar8;
  void *pvVar9;
  undefined1 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  pcVar8 = param_3;
  pvVar9 = param_4;
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010ec68);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010ec6c);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _Var5.unknown = *(undefined **)param_3;
    uVar7 = param_1;
    _swift_dynamicCastObjCClass();
    if (uVar7 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var5);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var5.unknown = *(undefined **)param_3;
    uVar7 = param_1;
    _swift_dynamicCastObjCClass();
    if (uVar7 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var5);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar10 = (undefined1)param_1;
  SVar11.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar11.str = pcVar6;
  SVar14.bridgeObject = pvVar9;
  SVar14.str = pcVar8;
  Swift::String::append(SVar11,SVar14);
  bVar4 = false;
  FUN_10000ec2c(0,param_4);
  SVar11 = Swift::__typeName(bVar4);
  SVar15.bridgeObject = pvVar9;
  SVar15.str = param_3;
  Swift::String::append(SVar11,SVar15);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = (void *)0xeb0000000020646e;
  SVar12.str = (char *)0x756f662074756220;
  SVar16.bridgeObject = pvVar9;
  SVar16.str = param_3;
  Swift::String::append(SVar12,SVar16);
  _swift_getObjectType();
  SVar11 = Swift::__typeName((bool)uVar10);
  SVar17.bridgeObject = pvVar9;
  SVar17.str = param_3;
  Swift::String::append(SVar11,SVar17);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar13.bridgeObject = (void *)0x2;
  SVar13.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar13,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010ed40);
  (*pcVar3)();
}



/* Address: 0x10010ed40 | FUN_10010ed40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ulong FUN_10010ed40(ulong param_1,undefined *param_2)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  _StringGuts _Var7;
  char *pcVar8;
  void *pvVar9;
  undefined1 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  ulong local_48 [3];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010ee88);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010ee8c);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    pvVar4 = (void *)0x0;
    local_48[0] = param_1;
    FUN_10000ec2c(0,&DAT_100faf650,&PTR__OBJC_CLASS___NSError_100f8d818);
    _swift_unknownObjectRetain_n(param_1,2);
    uVar6 = 0;
    _Var7.unknown = (undefined *)local_48;
    pcVar8 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8;
    pvVar9 = pvVar4;
    _swift_dynamicCast();
    if ((uVar6 & 1) != 0) {
      return param_1;
    }
    local_48[0] = 0;
    local_48[1] = 0xe000000000000000;
    Swift::_StringGuts::grow(0x52,_Var7);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar5 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    pvVar4 = (void *)0x0;
    local_48[0] = param_1;
    FUN_10000ec2c(0,&DAT_100faf650,&PTR__OBJC_CLASS___NSError_100f8d818);
    _swift_unknownObjectRetain(param_1);
    uVar6 = 0;
    _Var7.unknown = (undefined *)local_48;
    pcVar8 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8;
    pvVar9 = pvVar4;
    _swift_dynamicCast();
    if ((uVar6 & 1) != 0) {
      return param_1;
    }
    local_48[0] = 0;
    local_48[1] = 0xe000000000000000;
    Swift::_StringGuts::grow(0x55,_Var7);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar5 = (char *)0xd000000000000046;
  }
  uVar10 = (undefined1)param_1;
  SVar11.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar11.str = pcVar5;
  SVar14.bridgeObject = pvVar9;
  SVar14.str = pcVar8;
  Swift::String::append(SVar11,SVar14);
  SVar11 = Swift::__typeName(SUB81(pvVar4,0));
  SVar15.bridgeObject = pvVar9;
  SVar15.str = pcVar8;
  Swift::String::append(SVar11,SVar15);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = (void *)0xeb0000000020646e;
  SVar12.str = (char *)0x756f662074756220;
  SVar16.bridgeObject = pvVar9;
  SVar16.str = pcVar8;
  Swift::String::append(SVar12,SVar16);
  _swift_getObjectType();
  SVar11 = Swift::__typeName((bool)uVar10);
  SVar17.bridgeObject = pvVar9;
  SVar17.str = pcVar8;
  Swift::String::append(SVar11,SVar17);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar13.bridgeObject = (void *)0x2;
  SVar13.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar13,(__uint32)local_48[0]);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010ef54);
  (*pcVar3)();
}



/* Address: 0x10010ef54 | FUN_10010ef54 */

void FUN_10010ef54(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___NSException_100f8d8c0,&DAT_100faf648);
  return;
}



/* Address: 0x10010ef68 | FUN_10010ef68 */

ulong FUN_10010ef68(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f038);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f03c);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_10016c1ac();
    uVar5 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_10016c1ac();
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100d91aa0;
  SVar8.str = (char *)0xd000000000000017;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f104);
  (*pcVar3)();
}



/* Address: 0x10010f104 | FUN_10010f104 */

ulong FUN_10010f104(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f1d4);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f1d8);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_10010c0bc();
    uVar5 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_10010c0bc();
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100d91a60;
  SVar8.str = (char *)0xd000000000000010;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f2a0);
  (*pcVar3)();
}



/* Address: 0x10010f2a0 | FUN_10010f2a0 */

ulong FUN_10010f2a0(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  char *pcVar5;
  ulong uVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f374);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f378);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_1001145d4();
    uVar6 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar6 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar5 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_1001145d4();
    uVar6 = param_1;
    _swift_dynamicCastClass();
    if (uVar6 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar5 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar5;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0xec000000746e6576;
  SVar8.str = (char *)0x45676f4874736f50;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f444);
  (*pcVar3)();
}



/* Address: 0x10010f444 | FUN_10010f444 */

ulong FUN_10010f444(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f514);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f518);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_10016c18c();
    uVar5 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_10016c18c();
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100d91a80;
  SVar8.str = (char *)0xd000000000000014;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10010f5e0);
  (*pcVar3)();
}



/* Address: 0x10010f5e0 | FUN_10010f5e0 */

void FUN_10010f5e0(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___NSWindow_100f8d6c8,&DAT_100faf9e0);
  return;
}



/* Address: 0x10010f5f4 | FUN_10010f5f4 */

void FUN_10010f5f4(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined *param_4)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_10000ec2c(0,param_1,param_2);
    if (lVar2 != 0) {
      param_3 = &DAT_100faf9f8;
      param_4 = &DAT_100c2e660;
    }
  }
  FUN_1000f7830(param_3,param_4);
  return;
}



/* Address: 0x10010f674 | FUN_10010f674 */

void FUN_10010f674(code *param_1,undefined *param_2,undefined *param_3)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    (*param_1)();
    if (lVar2 != 0) {
      param_2 = &DAT_100faf9f8;
      param_3 = &DAT_100c2e660;
    }
  }
  FUN_1000f7830(param_2,param_3);
  return;
}



/* Address: 0x10010f6e8 | FUN_10010f6e8 */

void FUN_10010f6e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100fafa28,&DAT_100c2e690);
  return;
}



/* Address: 0x10010f6fc | FUN_10010f6fc */

void FUN_10010f6fc(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100fae2b8,&DAT_100c2db60);
  return;
}



/* Address: 0x10010f710 | FUN_10010f710 */

void FUN_10010f710(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f834(param_1,param_2,FUN_1001145d4,&DAT_100fafa48,&DAT_100c2e6b0);
  return;
}



/* Address: 0x10010f72c | FUN_10010f72c */

void FUN_10010f72c(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100fafa38,&DAT_100c2e6a0);
  return;
}



/* Address: 0x10010f740 | FUN_10010f740 */

void FUN_10010f740(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f788(param_1,param_2,&DAT_100faf650,&PTR__OBJC_CLASS___NSError_100f8d818,&DAT_100fafa10,
                &DAT_100c2e678);
  return;
}



/* Address: 0x10010f764 | FUN_10010f764 */

void FUN_10010f764(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f788(param_1,param_2,&DAT_100faf648,&PTR__OBJC_CLASS___NSException_100f8d8c0,
                &DAT_100fafa08,&DAT_100c2e670);
  return;
}



/* Address: 0x10010f788 | FUN_10010f788 */

undefined *
FUN_10010f788(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_10010f5f4(param_3,param_4,param_5,param_6);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Address: 0x10010f818 | FUN_10010f818 */

void FUN_10010f818(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f834(param_1,param_2,FUN_10010c0bc,&DAT_100fafa50,&DAT_100c2e6b8);
  return;
}



/* Address: 0x10010f834 | FUN_10010f834 */

undefined *
FUN_10010f834(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_10010f674(param_3,param_4,param_5);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Address: 0x10010f8c0 | FUN_10010f8c0 */

void FUN_10010f8c0(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100faf9d0,&DAT_100c2e640);
  return;
}



/* Address: 0x10010f8d4 | FUN_10010f8d4 */

void FUN_10010f8d4(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100fafa40,&DAT_100c2e6a8);
  return;
}



/* Address: 0x10010f8e8 | FUN_10010f8e8 */

void FUN_10010f8e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100fafa18,&DAT_100c2e680);
  return;
}



/* Address: 0x10010f8fc | FUN_10010f8fc */

void FUN_10010f8fc(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100fafa30,&DAT_100c2e698);
  return;
}



/* Address: 0x10010f910 | FUN_10010f910 */

void FUN_10010f910(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100faf9c8,&DAT_100c2e638);
  return;
}



/* Address: 0x10010f924 | FUN_10010f924 */

void FUN_10010f924(undefined8 param_1,undefined8 param_2)

{
  FUN_10010f938(param_1,param_2,&DAT_100faf9e8,&DAT_100c2e650);
  return;
}



/* Address: 0x10010f938 | FUN_10010f938 */

undefined * FUN_10010f938(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_1000f7830(param_3,param_4);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    puVar2 = puVar1 + -0x11;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = ((long)puVar2 >> 4) << 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Address: 0x10010f9b0 | FUN_10010f9b0 */

void FUN_10010f9b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010fb0c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010f9cc | FUN_10010f9cc */

void FUN_10010f9cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010fc3c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fa08 | FUN_10010fa08 */

void FUN_10010fa08(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010fc3c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fa44 | FUN_10010fa44 */

void FUN_10010fa44(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010fe90();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fa70 | FUN_10010fa70 */

void FUN_10010fa70(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010fe90();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fa9c | FUN_10010fa9c */

void FUN_10010fa9c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010fd88();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fab8 | FUN_10010fab8 */

void FUN_10010fab8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10010ffb8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fad4 | FUN_10010fad4 */

void FUN_10010fad4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100110134();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010faf0 | FUN_10010faf0 */

void FUN_10010faf0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100110270();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10010fb0c | FUN_10010fb0c */

undefined * FUN_10010fb0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10010fc3c);
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
    puVar3 = &DAT_100faf620;
    FUN_1000f7830(&DAT_100faf620,&DAT_100c2e3b0);
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
    puVar5 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10010fc3c | FUN_10010fc3c */

undefined *
FUN_10010fc3c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10010fd88);
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
    puVar3 = param_5;
    FUN_10010f5f4(param_5,param_6,param_7,param_8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10000ec2c(0,param_5,param_6);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10010fd88 | FUN_10010fd88 */

undefined * FUN_10010fd88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10010fe90);
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
    puVar3 = &DAT_100fae2b8;
    FUN_1000f7830(&DAT_100fae2b8,&DAT_100c2db60);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10010fe90 | FUN_10010fe90 */

undefined *
FUN_10010fe90(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10010ffb8);
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
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar7 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar7 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar7 >> 4) << 1;
    puVar7 = param_5;
  }
  puVar3 = puVar7 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar4 = &DAT_100fafa60;
    FUN_1000f7830(&DAT_100fafa60,&DAT_100c2e6c8);
    _swift_arrayInitWithCopy(puVar3,puVar1,uVar6,puVar4);
  }
  else {
    if (puVar7 != param_4 || puVar1 + uVar6 * 0x10 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar7;
}



/* Address: 0x10010ffb8 | FUN_10010ffb8 */

undefined * FUN_10010ffb8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  URL UVar5;
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100110134);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100faf9d8;
    FUN_1000f7830(&DAT_100faf9d8,&DAT_100c2e648);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar11 = *(long *)(*(long *)(UVar5.unknown + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10011012c);
      (*pcVar3)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100110130);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar9 / lVar11;
    }
    *(ulong *)(puVar4 + 0x10) = uVar10;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  UVar5 = Foundation::URL::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar10,UVar5.unknown);
  }
  else {
    if ((puVar4 < param_4) ||
       (puVar1 + *(long *)(*(long *)(UVar5.unknown + -8) + 0x48) * uVar10 <= puVar6)) {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar10);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x100110134 | FUN_100110134 */

code * FUN_100110134(ulong param_1,ulong param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100110270);
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
  pcVar2 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    pcVar2 = FUN_10011597c;
    FUN_10010f674(FUN_10011597c,&DAT_100fafa20,&DAT_100c2e688);
    _swift_allocObject();
    pcVar3 = pcVar2;
    _malloc_size();
    pcVar1 = pcVar3 + -0x19;
    if (0x1f < (long)pcVar3) {
      pcVar1 = pcVar3 + -0x20;
    }
    *(ulong *)(pcVar2 + 0x10) = uVar6;
    *(ulong *)(pcVar2 + 0x18) = ((long)pcVar1 >> 3) << 1 | 1;
  }
  pcVar1 = pcVar2 + 0x20;
  pcVar3 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_10011597c(0);
    _swift_arrayInitWithCopy(pcVar1,pcVar3,uVar6,uVar4);
  }
  else {
    if (pcVar2 != param_4 || pcVar3 + uVar6 * 8 <= pcVar1) {
      _memmove(pcVar1,pcVar3,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return pcVar2;
}



/* Address: 0x100110270 | FUN_100110270 */

undefined * FUN_100110270(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100110360);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100faf5f8;
    FUN_1000f7830(&DAT_100faf5f8,&DAT_100c2e380);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100110360 | FUN_100110360 */

void FUN_100110360(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100110384 | FUN_100110384 */

void FUN_100110384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  thunk_FUN_10012394c(uVar1,*(undefined8 *)(unaff_x20 + 0x10));
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001103b0 | FUN_1001103b0 */

void FUN_1001103b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001103dc | FUN_1001103dc */

void FUN_1001103dc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100110400 | FUN_100110400 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100110400(void)

{
  return ZEXT816(0x100f933e0);
}



/* Address: 0x100110420 | thunk_FUN_100110360 */

void thunk_FUN_100110360(void)

{
  FUN_100110360();
  return;
}


